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

typedef void (*$fn96)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn142)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn189)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn275)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn330)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn337)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn345)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn352)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn420)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn477)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn484)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn491)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn504)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn524)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn531)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn544)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1095)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1152)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2094)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2115)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2156)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2921)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s1565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s2311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s2908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

void org$pandalanguage$pandac$parser$Parser$init$org$pandalanguage$pandac$ErrorReporter(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ErrorReporter* p_errors) {
    self->lexer = NULL;
    self->errors = NULL;
    self->path = NULL;
    self->source = NULL;
    self->pushbackBuffer = NULL;
    self->commaSeparatedExpressionContext = NULL;
    self->speculativeBuffer = NULL;
    org$pandalanguage$pandac$parser$Lexer* $tmp4 = (org$pandalanguage$pandac$parser$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$parser$Lexer$class);
    org$pandalanguage$pandac$parser$Lexer$init($tmp4);
    org$pandalanguage$pandac$parser$Lexer* $tmp3 = $tmp4;
    org$pandalanguage$pandac$parser$Lexer* $tmp2 = $tmp3;
    self->lexer = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp7 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp7);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp6 = $tmp7;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5 = $tmp6;
    self->pushbackBuffer = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$collections$Stack* $tmp10 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp10);
    panda$collections$Stack* $tmp9 = $tmp10;
    panda$collections$Stack* $tmp8 = $tmp9;
    self->commaSeparatedExpressionContext = $tmp8;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp13 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp13);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp12 = $tmp13;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp11 = $tmp12;
    self->speculativeBuffer = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    {
        org$pandalanguage$pandac$ErrorReporter* $tmp14 = self->errors;
        org$pandalanguage$pandac$ErrorReporter* $tmp15 = p_errors;
        self->errors = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    panda$core$Bit$wrapper* $tmp17;
    $tmp17 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp17->value = ((panda$core$Bit) { false });
    panda$core$Object* $tmp16 = ((panda$core$Object*) $tmp17);
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp16);
    panda$core$Panda$unref$panda$core$Object($tmp16);
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    {
        panda$io$File* $tmp18 = self->path;
        panda$io$File* $tmp19 = p_path;
        self->path = $tmp19;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    }
    {
        panda$core$String* $tmp20 = self->source;
        panda$core$String* $tmp21 = p_source;
        self->source = $tmp21;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->pushbackBuffer);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 idx24;
    org$pandalanguage$pandac$parser$Token result27;
    org$pandalanguage$pandac$parser$Token result30;
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
        org$pandalanguage$pandac$parser$Token $tmp29 = result27;
        return $tmp29;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp31 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result30 = $tmp31;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result30);
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp32 = result30;
    return $tmp32;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result35;
    org$pandalanguage$pandac$parser$Token$Kind $match$57_1337;
    org$pandalanguage$pandac$parser$Token next42;
    org$pandalanguage$pandac$parser$Token$Kind $match$63_2544;
    panda$core$Char8 $tmp48;
    org$pandalanguage$pandac$parser$Token next55;
    org$pandalanguage$pandac$parser$Token$Kind $match$75_2557;
    $l33:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp36 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result35 = $tmp36;
        {
            $match$57_1337 = result35.kind;
            panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1337.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp38.value) {
            {
                goto $l33;
            }
            }
            else {
            panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1337.$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp39.value) {
            {
                $l40:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp43 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next42 = $tmp43;
                    {
                        $match$63_2544 = next42.kind;
                        panda$core$Bit $tmp45 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2544.$rawValue, ((panda$core$Int64) { 12 }));
                        if ($tmp45.value) {
                        {
                            panda$core$String* $tmp47 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next42);
                            panda$core$String* $tmp46 = $tmp47;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp48, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp49 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp46, $tmp48);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
                            if ($tmp49.value) {
                            {
                                goto $l33;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2544.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp50.value) {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp51 = next42;
                            return $tmp51;
                        }
                        }
                        }
                    }
                }
                }
                $l41:;
            }
            }
            else {
            panda$core$Bit $tmp52 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1337.$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp52.value) {
            {
                $l53:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp56 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next55 = $tmp56;
                    {
                        $match$75_2557 = next55.kind;
                        panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2557.$rawValue, ((panda$core$Int64) { 10 }));
                        if ($tmp58.value) {
                        {
                            goto $l33;
                        }
                        }
                        else {
                        panda$core$Bit $tmp59 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2557.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp59.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result35, &$s60);
                            org$pandalanguage$pandac$parser$Token $tmp61 = next55;
                            return $tmp61;
                        }
                        }
                        }
                    }
                }
                }
                $l54:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Token $tmp62 = result35;
                return $tmp62;
            }
            }
            }
            }
        }
    }
    }
    $l34:;
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp63 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp63, ((panda$core$Int64) { 0 }));
    if ($tmp64.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp65 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp65);
    }
    }
    panda$core$Int64 $tmp67 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp68 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp67, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp69 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp68);
    org$pandalanguage$pandac$parser$Token $tmp66 = $tmp69;
    return $tmp66;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result70;
    org$pandalanguage$pandac$parser$Token $tmp71 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result70 = $tmp71;
    panda$core$Bit $tmp72 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result70.kind.$rawValue, p_kind.$rawValue);
    if ($tmp72.value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp73 = ((org$pandalanguage$pandac$parser$Token$nullable) { result70, true });
        return $tmp73;
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result70);
    org$pandalanguage$pandac$parser$Token$nullable $tmp74 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $tmp74;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result75;
    org$pandalanguage$pandac$parser$Token $tmp76 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result75 = $tmp76;
    panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result75.kind.$rawValue, p_kind.$rawValue);
    if ($tmp77.value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp78 = ((org$pandalanguage$pandac$parser$Token$nullable) { result75, true });
        return $tmp78;
    }
    }
    panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s83, p_expected);
    panda$core$String* $tmp82 = $tmp84;
    panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, &$s85);
    panda$core$String* $tmp81 = $tmp86;
    panda$core$String* $tmp88 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result75);
    panda$core$String* $tmp87 = $tmp88;
    panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp81, $tmp87);
    panda$core$String* $tmp80 = $tmp89;
    panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp80, &$s90);
    panda$core$String* $tmp79 = $tmp91;
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result75, $tmp79);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
    org$pandalanguage$pandac$parser$Token$nullable $tmp92 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $tmp92;
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp93 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp93.value) {
    {
        ITable* $tmp94 = self->errors->$class->itable;
        while ($tmp94->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp94 = $tmp94->next;
        }
        $fn96 $tmp95 = $tmp94->methods[0];
        $tmp95(self->errors, self->path, p_token.position, p_msg);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp97 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp97.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp98;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp99 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp100 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp99, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp98, $tmp100, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp102 = $tmp98.start.value;
    panda$core$Int64 i101 = { $tmp102 };
    int64_t $tmp104 = $tmp98.end.value;
    int64_t $tmp105 = $tmp98.step.value;
    bool $tmp106 = $tmp98.inclusive.value;
    bool $tmp113 = $tmp105 > 0;
    if ($tmp113) goto $l111; else goto $l112;
    $l111:;
    if ($tmp106) goto $l114; else goto $l115;
    $l114:;
    if ($tmp102 <= $tmp104) goto $l107; else goto $l109;
    $l115:;
    if ($tmp102 < $tmp104) goto $l107; else goto $l109;
    $l112:;
    if ($tmp106) goto $l116; else goto $l117;
    $l116:;
    if ($tmp102 >= $tmp104) goto $l107; else goto $l109;
    $l117:;
    if ($tmp102 > $tmp104) goto $l107; else goto $l109;
    $l107:;
    {
        org$pandalanguage$pandac$parser$Token $tmp119 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i101);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp119);
    }
    $l110:;
    if ($tmp113) goto $l121; else goto $l122;
    $l121:;
    int64_t $tmp123 = $tmp104 - i101.value;
    if ($tmp106) goto $l124; else goto $l125;
    $l124:;
    if ((uint64_t) $tmp123 >= $tmp105) goto $l120; else goto $l109;
    $l125:;
    if ((uint64_t) $tmp123 > $tmp105) goto $l120; else goto $l109;
    $l122:;
    int64_t $tmp127 = i101.value - $tmp104;
    if ($tmp106) goto $l128; else goto $l129;
    $l128:;
    if ((uint64_t) $tmp127 >= -$tmp105) goto $l120; else goto $l109;
    $l129:;
    if ((uint64_t) $tmp127 > -$tmp105) goto $l120; else goto $l109;
    $l120:;
    i101.value += $tmp105;
    goto $l107;
    $l109:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$Range$LTpanda$core$String$Index$GT $tmp134;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp134, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp135 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp134);
    panda$core$String* $tmp133 = $tmp135;
    panda$core$String* $tmp132 = $tmp133;
    panda$core$String* $tmp131 = $tmp132;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
    return $tmp131;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp144;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp137 = p_chunk;
        org$pandalanguage$pandac$ASTNode* $tmp136 = $tmp137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
        return $tmp136;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp141 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp143 = (($fn142) p_string->$class->vtable[2])(p_string);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp144, ((panda$core$Int64) { 51 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp141, ((panda$core$Int64) { 2 }), $tmp143, p_string, $tmp144, p_chunk);
    org$pandalanguage$pandac$ASTNode* $tmp140 = $tmp141;
    org$pandalanguage$pandac$ASTNode* $tmp139 = $tmp140;
    org$pandalanguage$pandac$ASTNode* $tmp138 = $tmp139;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
    return $tmp138;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result145;
    org$pandalanguage$pandac$parser$Token token151;
    org$pandalanguage$pandac$parser$Token$Kind $match$157_13153;
    panda$core$String* str155;
    panda$core$Char8 $tmp159;
    panda$core$String* tmp1162;
    panda$core$String* tmp3164;
    panda$core$String* tmp4168;
    org$pandalanguage$pandac$parser$Token escape172;
    panda$core$String* tmp5176;
    panda$core$String* escapeText179;
    panda$core$Char8 c183;
    panda$core$Char8 $match$176_21191;
    panda$core$Char8 $tmp192;
    panda$core$Char8 $tmp194;
    panda$core$Char8 $tmp195;
    panda$core$Char8 $tmp197;
    panda$core$Char8 $tmp198;
    panda$core$Char8 $tmp200;
    panda$core$Char8 $tmp201;
    panda$core$Char8 $tmp203;
    panda$core$Char8 $tmp204;
    panda$core$Char8 $tmp206;
    panda$core$Char8 $tmp207;
    panda$core$Char8 $tmp209;
    panda$core$Char8 $tmp210;
    panda$core$Char8 $tmp212;
    panda$core$String* tmp2214;
    panda$core$String* tmp6216;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp219;
    panda$core$String* tmp7224;
    panda$core$MutableString* $tmp148 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp148);
    panda$core$MutableString* $tmp147 = $tmp148;
    panda$core$MutableString* $tmp146 = $tmp147;
    result145 = $tmp146;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
    $l149:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp152 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token151 = $tmp152;
        {
            $match$157_13153 = token151.kind;
            panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13153.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp154.value) {
            {
                panda$core$String* $tmp158 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token151);
                panda$core$String* $tmp157 = $tmp158;
                panda$core$String* $tmp156 = $tmp157;
                str155 = $tmp156;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
                panda$core$Char8$init$panda$core$UInt8(&$tmp159, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp160 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str155, $tmp159);
                if ($tmp160.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token151, &$s161);
                    {
                        panda$core$String* $tmp163 = NULL;
                        tmp1162 = $tmp163;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str155));
                        {
                            tmp3164 = tmp1162;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result145));
                            panda$core$String* $tmp165 = tmp3164;
                            return $tmp165;
                        }
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(result145, str155);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str155));
            }
            }
            else {
            panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13153.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp166.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token151, &$s167);
                {
                    panda$core$String* $tmp169 = NULL;
                    tmp4168 = $tmp169;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result145));
                    panda$core$String* $tmp170 = tmp4168;
                    return $tmp170;
                }
            }
            }
            else {
            panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13153.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp171.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp173 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape172 = $tmp173;
                panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape172.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp174.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token151, &$s175);
                    {
                        panda$core$String* $tmp177 = NULL;
                        tmp5176 = $tmp177;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result145));
                        panda$core$String* $tmp178 = tmp5176;
                        return $tmp178;
                    }
                }
                }
                panda$core$String* $tmp182 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape172);
                panda$core$String* $tmp181 = $tmp182;
                panda$core$String* $tmp180 = $tmp181;
                escapeText179 = $tmp180;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
                panda$collections$ListView* $tmp186 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText179);
                panda$collections$ListView* $tmp185 = $tmp186;
                ITable* $tmp187 = $tmp185->$class->itable;
                while ($tmp187->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp187 = $tmp187->next;
                }
                $fn189 $tmp188 = $tmp187->methods[0];
                panda$core$Object* $tmp190 = $tmp188($tmp185, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp184 = $tmp190;
                c183 = ((panda$core$Char8$wrapper*) $tmp184)->value;
                panda$core$Panda$unref$panda$core$Object($tmp184);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
                {
                    $match$176_21191 = c183;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp192, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp193 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21191, $tmp192);
                    if ($tmp193.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp194, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result145, $tmp194);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp195, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp196 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21191, $tmp195);
                    if ($tmp196.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp197, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result145, $tmp197);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp198, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp199 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21191, $tmp198);
                    if ($tmp199.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp200, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result145, $tmp200);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp201, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp202 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21191, $tmp201);
                    if ($tmp202.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp203, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result145, $tmp203);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp204, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp205 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21191, $tmp204);
                    if ($tmp205.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp206, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result145, $tmp206);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp207, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp208 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21191, $tmp207);
                    if ($tmp208.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp209, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result145, $tmp209);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp210, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp211 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21191, $tmp210);
                    if ($tmp211.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp212, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result145, $tmp212);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token151, &$s213);
                        {
                            panda$core$String* $tmp215 = NULL;
                            tmp2214 = $tmp215;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp215));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText179));
                            {
                                tmp6216 = tmp2214;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result145));
                                panda$core$String* $tmp217 = tmp6216;
                                return $tmp217;
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
                panda$core$String$Index $tmp220 = panda$core$String$start$R$panda$core$String$Index(escapeText179);
                panda$core$String$Index $tmp221 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText179, $tmp220);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp219, ((panda$core$String$Index$nullable) { $tmp221, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp222 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText179, $tmp219);
                panda$core$String* $tmp218 = $tmp222;
                panda$core$MutableString$append$panda$core$String(result145, $tmp218);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText179));
            }
            }
            else {
            panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13153.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp223.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token151);
                {
                    panda$core$String* $tmp227 = panda$core$MutableString$finish$R$panda$core$String(result145);
                    panda$core$String* $tmp226 = $tmp227;
                    panda$core$String* $tmp225 = $tmp226;
                    tmp7224 = $tmp225;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result145));
                    panda$core$String* $tmp228 = tmp7224;
                    return $tmp228;
                }
            }
            }
            else {
            {
                panda$core$String* $tmp230 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token151);
                panda$core$String* $tmp229 = $tmp230;
                panda$core$MutableString$append$panda$core$String(result145, $tmp229);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
            }
            }
            }
            }
            }
        }
    }
    }
    $l150:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result145));
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result231;
    org$pandalanguage$pandac$parser$Token token237;
    org$pandalanguage$pandac$parser$Token$Kind $match$202_13239;
    panda$core$String* str241;
    panda$core$Char8 $tmp245;
    panda$core$String* tmp8248;
    panda$core$String* tmp10250;
    panda$core$String* tmp11254;
    org$pandalanguage$pandac$parser$Token escape258;
    panda$core$String* tmp12262;
    panda$core$String* escapeText265;
    panda$core$Char8 c269;
    panda$core$Char8 $match$221_21277;
    panda$core$Char8 $tmp278;
    panda$core$Char8 $tmp280;
    panda$core$Char8 $tmp281;
    panda$core$Char8 $tmp283;
    panda$core$Char8 $tmp284;
    panda$core$Char8 $tmp286;
    panda$core$Char8 $tmp287;
    panda$core$Char8 $tmp289;
    panda$core$Char8 $tmp290;
    panda$core$Char8 $tmp292;
    panda$core$Char8 $tmp293;
    panda$core$Char8 $tmp295;
    panda$core$Char8 $tmp296;
    panda$core$Char8 $tmp298;
    panda$core$Char8 $tmp299;
    panda$core$Char8 $tmp301;
    panda$core$String* tmp9303;
    panda$core$String* tmp13305;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp308;
    panda$core$String* tmp14313;
    panda$core$String* tmp15319;
    panda$core$MutableString* $tmp234 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp234);
    panda$core$MutableString* $tmp233 = $tmp234;
    panda$core$MutableString* $tmp232 = $tmp233;
    result231 = $tmp232;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233));
    $l235:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp238 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token237 = $tmp238;
        {
            $match$202_13239 = token237.kind;
            panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13239.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp240.value) {
            {
                panda$core$String* $tmp244 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token237);
                panda$core$String* $tmp243 = $tmp244;
                panda$core$String* $tmp242 = $tmp243;
                str241 = $tmp242;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                panda$core$Char8$init$panda$core$UInt8(&$tmp245, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp246 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str241, $tmp245);
                if ($tmp246.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token237, &$s247);
                    {
                        panda$core$String* $tmp249 = NULL;
                        tmp8248 = $tmp249;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp249));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str241));
                        {
                            tmp10250 = tmp8248;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result231));
                            panda$core$String* $tmp251 = tmp10250;
                            return $tmp251;
                        }
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(result231, str241);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str241));
            }
            }
            else {
            panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13239.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp252.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token237, &$s253);
                {
                    panda$core$String* $tmp255 = NULL;
                    tmp11254 = $tmp255;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result231));
                    panda$core$String* $tmp256 = tmp11254;
                    return $tmp256;
                }
            }
            }
            else {
            panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13239.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp257.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp259 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape258 = $tmp259;
                panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape258.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp260.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token237, &$s261);
                    {
                        panda$core$String* $tmp263 = NULL;
                        tmp12262 = $tmp263;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result231));
                        panda$core$String* $tmp264 = tmp12262;
                        return $tmp264;
                    }
                }
                }
                panda$core$String* $tmp268 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape258);
                panda$core$String* $tmp267 = $tmp268;
                panda$core$String* $tmp266 = $tmp267;
                escapeText265 = $tmp266;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
                panda$collections$ListView* $tmp272 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText265);
                panda$collections$ListView* $tmp271 = $tmp272;
                ITable* $tmp273 = $tmp271->$class->itable;
                while ($tmp273->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp273 = $tmp273->next;
                }
                $fn275 $tmp274 = $tmp273->methods[0];
                panda$core$Object* $tmp276 = $tmp274($tmp271, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp270 = $tmp276;
                c269 = ((panda$core$Char8$wrapper*) $tmp270)->value;
                panda$core$Panda$unref$panda$core$Object($tmp270);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271));
                {
                    $match$221_21277 = c269;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp278, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp279 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21277, $tmp278);
                    if ($tmp279.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp280, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result231, $tmp280);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp281, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp282 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21277, $tmp281);
                    if ($tmp282.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp283, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result231, $tmp283);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp284, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp285 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21277, $tmp284);
                    if ($tmp285.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp286, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result231, $tmp286);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp287, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp288 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21277, $tmp287);
                    if ($tmp288.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp289, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result231, $tmp289);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp290, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp291 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21277, $tmp290);
                    if ($tmp291.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp292, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result231, $tmp292);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp293, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp294 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21277, $tmp293);
                    if ($tmp294.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp295, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result231, $tmp295);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp296, ((panda$core$UInt8) { 58 }));
                    panda$core$Bit $tmp297 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21277, $tmp296);
                    if ($tmp297.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp298, ((panda$core$UInt8) { 58 }));
                        panda$core$MutableString$append$panda$core$Char8(result231, $tmp298);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp299, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp300 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21277, $tmp299);
                    if ($tmp300.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp301, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result231, $tmp301);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token237, &$s302);
                        {
                            panda$core$String* $tmp304 = NULL;
                            tmp9303 = $tmp304;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText265));
                            {
                                tmp13305 = tmp9303;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result231));
                                panda$core$String* $tmp306 = tmp13305;
                                return $tmp306;
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
                panda$core$String$Index $tmp309 = panda$core$String$start$R$panda$core$String$Index(escapeText265);
                panda$core$String$Index $tmp310 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText265, $tmp309);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp308, ((panda$core$String$Index$nullable) { $tmp310, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp311 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText265, $tmp308);
                panda$core$String* $tmp307 = $tmp311;
                panda$core$MutableString$append$panda$core$String(result231, $tmp307);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText265));
            }
            }
            else {
            panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13239.$rawValue, ((panda$core$Int64) { 95 }));
            if ($tmp312.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token237);
                {
                    panda$core$String* $tmp316 = panda$core$MutableString$finish$R$panda$core$String(result231);
                    panda$core$String* $tmp315 = $tmp316;
                    panda$core$String* $tmp314 = $tmp315;
                    tmp14313 = $tmp314;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp314));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result231));
                    panda$core$String* $tmp317 = tmp14313;
                    return $tmp317;
                }
            }
            }
            else {
            panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13239.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp318.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token237);
                {
                    panda$core$String* $tmp322 = panda$core$MutableString$finish$R$panda$core$String(result231);
                    panda$core$String* $tmp321 = $tmp322;
                    panda$core$String* $tmp320 = $tmp321;
                    tmp15319 = $tmp320;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp320));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result231));
                    panda$core$String* $tmp323 = tmp15319;
                    return $tmp323;
                }
            }
            }
            else {
            {
                panda$core$String* $tmp325 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token237);
                panda$core$String* $tmp324 = $tmp325;
                panda$core$MutableString$append$panda$core$String(result231, $tmp324);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l236:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result231));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot326;
    org$pandalanguage$pandac$ASTNode* call333;
    org$pandalanguage$pandac$ASTNode* stringType341;
    org$pandalanguage$pandac$ASTNode* tmp16348;
    org$pandalanguage$pandac$parser$Token$Kind $tmp354;
    org$pandalanguage$pandac$ASTNode* $tmp329 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp331 = (($fn330) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp329, ((panda$core$Int64) { 13 }), $tmp331, p_expr, &$s332);
    org$pandalanguage$pandac$ASTNode* $tmp328 = $tmp329;
    org$pandalanguage$pandac$ASTNode* $tmp327 = $tmp328;
    dot326 = $tmp327;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
    org$pandalanguage$pandac$ASTNode* $tmp336 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp338 = (($fn337) p_expr->$class->vtable[2])(p_expr);
    panda$collections$ImmutableArray* $tmp340 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
    panda$collections$ImmutableArray$init($tmp340);
    panda$collections$ImmutableArray* $tmp339 = $tmp340;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp336, ((panda$core$Int64) { 6 }), $tmp338, dot326, $tmp339);
    org$pandalanguage$pandac$ASTNode* $tmp335 = $tmp336;
    org$pandalanguage$pandac$ASTNode* $tmp334 = $tmp335;
    call333 = $tmp334;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
    org$pandalanguage$pandac$ASTNode* $tmp344 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp346 = (($fn345) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp344, ((panda$core$Int64) { 36 }), $tmp346, &$s347);
    org$pandalanguage$pandac$ASTNode* $tmp343 = $tmp344;
    org$pandalanguage$pandac$ASTNode* $tmp342 = $tmp343;
    stringType341 = $tmp342;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
    {
        org$pandalanguage$pandac$ASTNode* $tmp351 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp353 = (($fn352) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp354, ((panda$core$Int64) { 89 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp351, ((panda$core$Int64) { 2 }), $tmp353, call333, $tmp354, stringType341);
        org$pandalanguage$pandac$ASTNode* $tmp350 = $tmp351;
        org$pandalanguage$pandac$ASTNode* $tmp349 = $tmp350;
        tmp16348 = $tmp349;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp349));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot326));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call333));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType341));
        }
        org$pandalanguage$pandac$ASTNode* $tmp355 = tmp16348;
        return $tmp355;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start356;
    org$pandalanguage$pandac$ASTNode* result373;
    panda$core$MutableString* chunk375;
    org$pandalanguage$pandac$parser$Token token381;
    org$pandalanguage$pandac$parser$Token$Kind $match$268_13384;
    panda$core$String* str386;
    panda$core$Char8 $tmp390;
    org$pandalanguage$pandac$ASTNode* tmp17393;
    org$pandalanguage$pandac$ASTNode* tmp25395;
    org$pandalanguage$pandac$ASTNode* tmp26399;
    org$pandalanguage$pandac$parser$Token escape403;
    org$pandalanguage$pandac$ASTNode* tmp27407;
    panda$core$String* escapeText410;
    panda$core$Char8 c414;
    panda$core$Char8 $match$287_21422;
    panda$core$Char8 $tmp423;
    panda$core$Char8 $tmp425;
    panda$core$Char8 $tmp426;
    panda$core$Char8 $tmp428;
    panda$core$Char8 $tmp429;
    panda$core$Char8 $tmp431;
    panda$core$Char8 $tmp432;
    panda$core$Char8 $tmp434;
    panda$core$Char8 $tmp435;
    panda$core$Char8 $tmp437;
    panda$core$Char8 $tmp438;
    panda$core$Char8 $tmp440;
    panda$core$Char8 $tmp441;
    org$pandalanguage$pandac$ASTNode* expr443;
    org$pandalanguage$pandac$ASTNode* tmp18447;
    org$pandalanguage$pandac$ASTNode* tmp21449;
    org$pandalanguage$pandac$ASTNode* tmp28450;
    panda$core$String* align452;
    panda$core$String* format454;
    org$pandalanguage$pandac$parser$Token$Kind $tmp456;
    org$pandalanguage$pandac$parser$Token$Kind $tmp462;
    org$pandalanguage$pandac$ASTNode* tmp19468;
    org$pandalanguage$pandac$ASTNode* tmp22470;
    org$pandalanguage$pandac$ASTNode* tmp29471;
    org$pandalanguage$pandac$ASTNode* formattable473;
    org$pandalanguage$pandac$ASTNode* cast480;
    org$pandalanguage$pandac$parser$Token$Kind $tmp486;
    org$pandalanguage$pandac$ASTNode* dot487;
    panda$collections$Array* callArgs494;
    org$pandalanguage$pandac$parser$Token$Kind $tmp508;
    org$pandalanguage$pandac$ASTNode* tmp20511;
    org$pandalanguage$pandac$ASTNode* tmp23513;
    org$pandalanguage$pandac$ASTNode* tmp30514;
    org$pandalanguage$pandac$ASTNode* pandaType520;
    org$pandalanguage$pandac$ASTNode* callTarget527;
    panda$collections$Array* callArgs534;
    panda$core$String* text548;
    org$pandalanguage$pandac$ASTNode* tmp24576;
    org$pandalanguage$pandac$ASTNode* tmp31578;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp581;
    org$pandalanguage$pandac$ASTNode* tmp32587;
    org$pandalanguage$pandac$parser$Token $tmp357 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start356 = $tmp357;
    panda$core$Bit $tmp359 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start356.kind.$rawValue, ((panda$core$Int64) { 7 }));
    bool $tmp358 = $tmp359.value;
    if (!$tmp358) goto $l360;
    panda$core$Bit $tmp361 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start356.kind.$rawValue, ((panda$core$Int64) { 6 }));
    $tmp358 = $tmp361.value;
    $l360:;
    panda$core$Bit $tmp362 = { $tmp358 };
    if ($tmp362.value) {
    {
        panda$core$String* $tmp367 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start356);
        panda$core$String* $tmp366 = $tmp367;
        panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s365, $tmp366);
        panda$core$String* $tmp364 = $tmp368;
        panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s369);
        panda$core$String* $tmp363 = $tmp370;
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start356, $tmp363);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp363));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
        org$pandalanguage$pandac$ASTNode* $tmp372 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp371 = $tmp372;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
        return $tmp371;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp374 = NULL;
    result373 = $tmp374;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp374));
    panda$core$MutableString* $tmp378 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp378);
    panda$core$MutableString* $tmp377 = $tmp378;
    panda$core$MutableString* $tmp376 = $tmp377;
    chunk375 = $tmp376;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
    $l379:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp382 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token381 = $tmp382;
        panda$core$Bit $tmp383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token381.kind.$rawValue, start356.kind.$rawValue);
        if ($tmp383.value) {
        {
            goto $l380;
        }
        }
        {
            $match$268_13384 = token381.kind;
            panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13384.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp385.value) {
            {
                panda$core$String* $tmp389 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token381);
                panda$core$String* $tmp388 = $tmp389;
                panda$core$String* $tmp387 = $tmp388;
                str386 = $tmp387;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp387));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
                panda$core$Char8$init$panda$core$UInt8(&$tmp390, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp391 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str386, $tmp390);
                if ($tmp391.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start356, &$s392);
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp394 = NULL;
                        tmp17393 = $tmp394;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str386));
                        {
                            tmp25395 = tmp17393;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result373));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk375));
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp396 = tmp25395;
                            return $tmp396;
                        }
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk375, str386);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str386));
            }
            }
            else {
            panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13384.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp397.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start356, &$s398);
                {
                    org$pandalanguage$pandac$ASTNode* $tmp400 = NULL;
                    tmp26399 = $tmp400;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp400));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result373));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk375));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp401 = tmp26399;
                    return $tmp401;
                }
            }
            }
            else {
            panda$core$Bit $tmp402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13384.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp402.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp404 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape403 = $tmp404;
                panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape403.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp405.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start356, &$s406);
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp408 = NULL;
                        tmp27407 = $tmp408;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result373));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk375));
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp409 = tmp27407;
                        return $tmp409;
                    }
                }
                }
                panda$core$String* $tmp413 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape403);
                panda$core$String* $tmp412 = $tmp413;
                panda$core$String* $tmp411 = $tmp412;
                escapeText410 = $tmp411;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
                panda$collections$ListView* $tmp417 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText410);
                panda$collections$ListView* $tmp416 = $tmp417;
                ITable* $tmp418 = $tmp416->$class->itable;
                while ($tmp418->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp418 = $tmp418->next;
                }
                $fn420 $tmp419 = $tmp418->methods[0];
                panda$core$Object* $tmp421 = $tmp419($tmp416, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp415 = $tmp421;
                c414 = ((panda$core$Char8$wrapper*) $tmp415)->value;
                panda$core$Panda$unref$panda$core$Object($tmp415);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
                {
                    $match$287_21422 = c414;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp423, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp424 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21422, $tmp423);
                    if ($tmp424.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp425, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk375, $tmp425);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp426, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp427 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21422, $tmp426);
                    if ($tmp427.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp428, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk375, $tmp428);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp429, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp430 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21422, $tmp429);
                    if ($tmp430.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp431, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk375, $tmp431);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp432, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp433 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21422, $tmp432);
                    if ($tmp433.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp434, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk375, $tmp434);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp435, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp436 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21422, $tmp435);
                    if ($tmp436.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp437, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk375, $tmp437);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp438, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp439 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21422, $tmp438);
                    if ($tmp439.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp440, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk375, $tmp440);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp441, ((panda$core$UInt8) { 123 }));
                    panda$core$Bit $tmp442 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21422, $tmp441);
                    if ($tmp442.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp446 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            org$pandalanguage$pandac$ASTNode* $tmp445 = $tmp446;
                            org$pandalanguage$pandac$ASTNode* $tmp444 = $tmp445;
                            expr443 = $tmp444;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
                            if (((panda$core$Bit) { expr443 == NULL }).value) {
                            {
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp448 = NULL;
                                    tmp18447 = $tmp448;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp448));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr443));
                                    {
                                        tmp21449 = tmp18447;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText410));
                                        {
                                            tmp28450 = tmp21449;
                                            {
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result373));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk375));
                                            }
                                            org$pandalanguage$pandac$ASTNode* $tmp451 = tmp28450;
                                            return $tmp451;
                                        }
                                    }
                                }
                            }
                            }
                            panda$core$String* $tmp453 = NULL;
                            align452 = $tmp453;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp453));
                            panda$core$String* $tmp455 = NULL;
                            format454 = $tmp455;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp455));
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp456, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp457 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp456);
                            if (((panda$core$Bit) { $tmp457.nonnull }).value) {
                            {
                                {
                                    panda$core$String* $tmp458 = align452;
                                    panda$core$String* $tmp461 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start356);
                                    panda$core$String* $tmp460 = $tmp461;
                                    panda$core$String* $tmp459 = $tmp460;
                                    align452 = $tmp459;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp459));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
                                }
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp462, ((panda$core$Int64) { 95 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp463 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp462);
                            if (((panda$core$Bit) { $tmp463.nonnull }).value) {
                            {
                                {
                                    panda$core$String* $tmp464 = format454;
                                    panda$core$String* $tmp467 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start356);
                                    panda$core$String* $tmp466 = $tmp467;
                                    panda$core$String* $tmp465 = $tmp466;
                                    format454 = $tmp465;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp465));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp466));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp464));
                                }
                                if (((panda$core$Bit) { format454 == NULL }).value) {
                                {
                                    {
                                        org$pandalanguage$pandac$ASTNode* $tmp469 = NULL;
                                        tmp19468 = $tmp469;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp469));
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format454));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align452));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr443));
                                        }
                                        {
                                            tmp22470 = tmp19468;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText410));
                                            {
                                                tmp29471 = tmp22470;
                                                {
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result373));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk375));
                                                }
                                                org$pandalanguage$pandac$ASTNode* $tmp472 = tmp29471;
                                                return $tmp472;
                                            }
                                        }
                                    }
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp476 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp478 = (($fn477) expr443->$class->vtable[2])(expr443);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp476, ((panda$core$Int64) { 36 }), $tmp478, &$s479);
                                org$pandalanguage$pandac$ASTNode* $tmp475 = $tmp476;
                                org$pandalanguage$pandac$ASTNode* $tmp474 = $tmp475;
                                formattable473 = $tmp474;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp474));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
                                org$pandalanguage$pandac$ASTNode* $tmp483 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp485 = (($fn484) expr443->$class->vtable[2])(expr443);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp486, ((panda$core$Int64) { 89 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp483, ((panda$core$Int64) { 2 }), $tmp485, expr443, $tmp486, formattable473);
                                org$pandalanguage$pandac$ASTNode* $tmp482 = $tmp483;
                                org$pandalanguage$pandac$ASTNode* $tmp481 = $tmp482;
                                cast480 = $tmp481;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp481));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
                                org$pandalanguage$pandac$ASTNode* $tmp490 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp492 = (($fn491) expr443->$class->vtable[2])(expr443);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp490, ((panda$core$Int64) { 13 }), $tmp492, cast480, &$s493);
                                org$pandalanguage$pandac$ASTNode* $tmp489 = $tmp490;
                                org$pandalanguage$pandac$ASTNode* $tmp488 = $tmp489;
                                dot487 = $tmp488;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp488));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
                                panda$collections$Array* $tmp497 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp497);
                                panda$collections$Array* $tmp496 = $tmp497;
                                panda$collections$Array* $tmp495 = $tmp496;
                                callArgs494 = $tmp495;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp495));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
                                org$pandalanguage$pandac$ASTNode* $tmp499 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp499, ((panda$core$Int64) { 34 }), start356.position, format454);
                                org$pandalanguage$pandac$ASTNode* $tmp498 = $tmp499;
                                panda$collections$Array$add$panda$collections$Array$T(callArgs494, ((panda$core$Object*) $tmp498));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp498));
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp500 = expr443;
                                    org$pandalanguage$pandac$ASTNode* $tmp503 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                    org$pandalanguage$pandac$Position $tmp505 = (($fn504) expr443->$class->vtable[2])(expr443);
                                    panda$collections$ImmutableArray* $tmp507 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs494);
                                    panda$collections$ImmutableArray* $tmp506 = $tmp507;
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp503, ((panda$core$Int64) { 6 }), $tmp505, dot487, $tmp506);
                                    org$pandalanguage$pandac$ASTNode* $tmp502 = $tmp503;
                                    org$pandalanguage$pandac$ASTNode* $tmp501 = $tmp502;
                                    expr443 = $tmp501;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp501));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast480));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot487));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs494));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable473));
                                }
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp508, ((panda$core$Int64) { 100 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp510 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp508, &$s509);
                            if (((panda$core$Bit) { !$tmp510.nonnull }).value) {
                            {
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp512 = NULL;
                                    tmp20511 = $tmp512;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp512));
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format454));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align452));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr443));
                                    }
                                    {
                                        tmp23513 = tmp20511;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText410));
                                        {
                                            tmp30514 = tmp23513;
                                            {
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result373));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk375));
                                            }
                                            org$pandalanguage$pandac$ASTNode* $tmp515 = tmp30514;
                                            return $tmp515;
                                        }
                                    }
                                }
                            }
                            }
                            if (((panda$core$Bit) { align452 != NULL }).value) {
                            {
                                if (((panda$core$Bit) { format454 == NULL }).value) {
                                {
                                    {
                                        org$pandalanguage$pandac$ASTNode* $tmp516 = expr443;
                                        org$pandalanguage$pandac$ASTNode* $tmp519 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr443);
                                        org$pandalanguage$pandac$ASTNode* $tmp518 = $tmp519;
                                        org$pandalanguage$pandac$ASTNode* $tmp517 = $tmp518;
                                        expr443 = $tmp517;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp517));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
                                    }
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp523 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp525 = (($fn524) expr443->$class->vtable[2])(expr443);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp523, ((panda$core$Int64) { 36 }), $tmp525, &$s526);
                                org$pandalanguage$pandac$ASTNode* $tmp522 = $tmp523;
                                org$pandalanguage$pandac$ASTNode* $tmp521 = $tmp522;
                                pandaType520 = $tmp521;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp521));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
                                org$pandalanguage$pandac$ASTNode* $tmp530 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp532 = (($fn531) expr443->$class->vtable[2])(expr443);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp530, ((panda$core$Int64) { 13 }), $tmp532, pandaType520, &$s533);
                                org$pandalanguage$pandac$ASTNode* $tmp529 = $tmp530;
                                org$pandalanguage$pandac$ASTNode* $tmp528 = $tmp529;
                                callTarget527 = $tmp528;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp528));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp529));
                                panda$collections$Array* $tmp537 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp537);
                                panda$collections$Array* $tmp536 = $tmp537;
                                panda$collections$Array* $tmp535 = $tmp536;
                                callArgs534 = $tmp535;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp535));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
                                panda$collections$Array$add$panda$collections$Array$T(callArgs534, ((panda$core$Object*) expr443));
                                org$pandalanguage$pandac$ASTNode* $tmp539 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp539, ((panda$core$Int64) { 34 }), start356.position, align452);
                                org$pandalanguage$pandac$ASTNode* $tmp538 = $tmp539;
                                panda$collections$Array$add$panda$collections$Array$T(callArgs534, ((panda$core$Object*) $tmp538));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp540 = expr443;
                                    org$pandalanguage$pandac$ASTNode* $tmp543 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                    org$pandalanguage$pandac$Position $tmp545 = (($fn544) expr443->$class->vtable[2])(expr443);
                                    panda$collections$ImmutableArray* $tmp547 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs534);
                                    panda$collections$ImmutableArray* $tmp546 = $tmp547;
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp543, ((panda$core$Int64) { 6 }), $tmp545, callTarget527, $tmp546);
                                    org$pandalanguage$pandac$ASTNode* $tmp542 = $tmp543;
                                    org$pandalanguage$pandac$ASTNode* $tmp541 = $tmp542;
                                    expr443 = $tmp541;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp541));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp540));
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget527));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType520));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs534));
                                }
                            }
                            }
                            panda$core$String* $tmp551 = panda$core$MutableString$finish$R$panda$core$String(chunk375);
                            panda$core$String* $tmp550 = $tmp551;
                            panda$core$String* $tmp549 = $tmp550;
                            text548 = $tmp549;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp549));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
                            {
                                panda$core$MutableString* $tmp552 = chunk375;
                                panda$core$MutableString* $tmp555 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                panda$core$MutableString$init($tmp555);
                                panda$core$MutableString* $tmp554 = $tmp555;
                                panda$core$MutableString* $tmp553 = $tmp554;
                                chunk375 = $tmp553;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp553));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
                            }
                            panda$core$Bit $tmp558 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text548, &$s557);
                            bool $tmp556 = $tmp558.value;
                            if ($tmp556) goto $l559;
                            $tmp556 = ((panda$core$Bit) { result373 != NULL }).value;
                            $l559:;
                            panda$core$Bit $tmp560 = { $tmp556 };
                            if ($tmp560.value) {
                            {
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp561 = result373;
                                    org$pandalanguage$pandac$ASTNode* $tmp565 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp565, ((panda$core$Int64) { 34 }), start356.position, text548);
                                    org$pandalanguage$pandac$ASTNode* $tmp564 = $tmp565;
                                    org$pandalanguage$pandac$ASTNode* $tmp566 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result373, $tmp564);
                                    org$pandalanguage$pandac$ASTNode* $tmp563 = $tmp566;
                                    org$pandalanguage$pandac$ASTNode* $tmp562 = $tmp563;
                                    result373 = $tmp562;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp562));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp563));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp564));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp561));
                                }
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp567 = result373;
                                    org$pandalanguage$pandac$ASTNode* $tmp570 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result373, expr443);
                                    org$pandalanguage$pandac$ASTNode* $tmp569 = $tmp570;
                                    org$pandalanguage$pandac$ASTNode* $tmp568 = $tmp569;
                                    result373 = $tmp568;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp568));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
                                }
                            }
                            }
                            else {
                            {
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp571 = result373;
                                    org$pandalanguage$pandac$ASTNode* $tmp574 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr443);
                                    org$pandalanguage$pandac$ASTNode* $tmp573 = $tmp574;
                                    org$pandalanguage$pandac$ASTNode* $tmp572 = $tmp573;
                                    result373 = $tmp572;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp572));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp571));
                                }
                            }
                            }
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text548));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format454));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align452));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr443));
                            }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token381, &$s575);
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp577 = NULL;
                            tmp24576 = $tmp577;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp577));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText410));
                            {
                                tmp31578 = tmp24576;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result373));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk375));
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp579 = tmp31578;
                                return $tmp579;
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
                panda$core$String$Index $tmp582 = panda$core$String$start$R$panda$core$String$Index(escapeText410);
                panda$core$String$Index $tmp583 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText410, $tmp582);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp581, ((panda$core$String$Index$nullable) { $tmp583, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp584 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText410, $tmp581);
                panda$core$String* $tmp580 = $tmp584;
                panda$core$MutableString$append$panda$core$String(chunk375, $tmp580);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText410));
            }
            }
            else {
            {
                panda$core$String* $tmp586 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token381);
                panda$core$String* $tmp585 = $tmp586;
                panda$core$MutableString$append$panda$core$String(chunk375, $tmp585);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp585));
            }
            }
            }
            }
        }
    }
    }
    $l380:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp591 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp593 = panda$core$MutableString$finish$R$panda$core$String(chunk375);
        panda$core$String* $tmp592 = $tmp593;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp591, ((panda$core$Int64) { 34 }), start356.position, $tmp592);
        org$pandalanguage$pandac$ASTNode* $tmp590 = $tmp591;
        org$pandalanguage$pandac$ASTNode* $tmp594 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result373, $tmp590);
        org$pandalanguage$pandac$ASTNode* $tmp589 = $tmp594;
        org$pandalanguage$pandac$ASTNode* $tmp588 = $tmp589;
        tmp32587 = $tmp588;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp588));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp589));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result373));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk375));
        }
        org$pandalanguage$pandac$ASTNode* $tmp595 = tmp32587;
        return $tmp595;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t596;
    org$pandalanguage$pandac$parser$Token$Kind $match$362_9598;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp622;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp633;
    org$pandalanguage$pandac$ASTNode* result679;
    org$pandalanguage$pandac$ASTNode* tmp33683;
    org$pandalanguage$pandac$parser$Token$Kind $tmp686;
    org$pandalanguage$pandac$ASTNode* tmp34689;
    org$pandalanguage$pandac$ASTNode* tmp35692;
    org$pandalanguage$pandac$parser$Token $tmp597 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t596 = $tmp597;
    {
        $match$362_9598 = t596.kind;
        panda$core$Bit $tmp599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9598.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp599.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp603 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp605 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t596);
            panda$core$String* $tmp604 = $tmp605;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp603, ((panda$core$Int64) { 18 }), t596.position, $tmp604);
            org$pandalanguage$pandac$ASTNode* $tmp602 = $tmp603;
            org$pandalanguage$pandac$ASTNode* $tmp601 = $tmp602;
            org$pandalanguage$pandac$ASTNode* $tmp600 = $tmp601;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp601));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
            return $tmp600;
        }
        }
        else {
        panda$core$Bit $tmp606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9598.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp606.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp610 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp612 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t596);
            panda$core$String* $tmp611 = $tmp612;
            panda$core$UInt64$nullable $tmp613 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp611);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp610, ((panda$core$Int64) { 20 }), t596.position, ((panda$core$UInt64) $tmp613.value));
            org$pandalanguage$pandac$ASTNode* $tmp609 = $tmp610;
            org$pandalanguage$pandac$ASTNode* $tmp608 = $tmp609;
            org$pandalanguage$pandac$ASTNode* $tmp607 = $tmp608;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp608));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
            return $tmp607;
        }
        }
        else {
        panda$core$Bit $tmp614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9598.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp614.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp618 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp621 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t596);
            panda$core$String* $tmp620 = $tmp621;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp622, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp623 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp620, $tmp622);
            panda$core$String* $tmp619 = $tmp623;
            panda$core$UInt64$nullable $tmp624 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp619, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp618, ((panda$core$Int64) { 20 }), t596.position, ((panda$core$UInt64) $tmp624.value));
            org$pandalanguage$pandac$ASTNode* $tmp617 = $tmp618;
            org$pandalanguage$pandac$ASTNode* $tmp616 = $tmp617;
            org$pandalanguage$pandac$ASTNode* $tmp615 = $tmp616;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp616));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
            return $tmp615;
        }
        }
        else {
        panda$core$Bit $tmp625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9598.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp625.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp629 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp632 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t596);
            panda$core$String* $tmp631 = $tmp632;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp633, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp634 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp631, $tmp633);
            panda$core$String* $tmp630 = $tmp634;
            panda$core$UInt64$nullable $tmp635 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp630, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp629, ((panda$core$Int64) { 20 }), t596.position, ((panda$core$UInt64) $tmp635.value));
            org$pandalanguage$pandac$ASTNode* $tmp628 = $tmp629;
            org$pandalanguage$pandac$ASTNode* $tmp627 = $tmp628;
            org$pandalanguage$pandac$ASTNode* $tmp626 = $tmp627;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp627));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
            return $tmp626;
        }
        }
        else {
        panda$core$Bit $tmp636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9598.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp636.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp640 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp642 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t596);
            panda$core$String* $tmp641 = $tmp642;
            panda$core$Real64$nullable $tmp643 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp641);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp640, ((panda$core$Int64) { 31 }), t596.position, ((panda$core$Real64) $tmp643.value));
            org$pandalanguage$pandac$ASTNode* $tmp639 = $tmp640;
            org$pandalanguage$pandac$ASTNode* $tmp638 = $tmp639;
            org$pandalanguage$pandac$ASTNode* $tmp637 = $tmp638;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp638));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp641));
            return $tmp637;
        }
        }
        else {
        panda$core$Bit $tmp644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9598.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp644.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp648 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp648, ((panda$core$Int64) { 33 }), t596.position);
            org$pandalanguage$pandac$ASTNode* $tmp647 = $tmp648;
            org$pandalanguage$pandac$ASTNode* $tmp646 = $tmp647;
            org$pandalanguage$pandac$ASTNode* $tmp645 = $tmp646;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp646));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp647));
            return $tmp645;
        }
        }
        else {
        panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9598.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp649.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp653 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp653, ((panda$core$Int64) { 35 }), t596.position);
            org$pandalanguage$pandac$ASTNode* $tmp652 = $tmp653;
            org$pandalanguage$pandac$ASTNode* $tmp651 = $tmp652;
            org$pandalanguage$pandac$ASTNode* $tmp650 = $tmp651;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp651));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp652));
            return $tmp650;
        }
        }
        else {
        panda$core$Bit $tmp654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9598.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp654.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp658 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp658, ((panda$core$Int64) { 25 }), t596.position);
            org$pandalanguage$pandac$ASTNode* $tmp657 = $tmp658;
            org$pandalanguage$pandac$ASTNode* $tmp656 = $tmp657;
            org$pandalanguage$pandac$ASTNode* $tmp655 = $tmp656;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp656));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp657));
            return $tmp655;
        }
        }
        else {
        panda$core$Bit $tmp659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9598.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp659.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp663 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp663, ((panda$core$Int64) { 3 }), t596.position, ((panda$core$Bit) { true }));
            org$pandalanguage$pandac$ASTNode* $tmp662 = $tmp663;
            org$pandalanguage$pandac$ASTNode* $tmp661 = $tmp662;
            org$pandalanguage$pandac$ASTNode* $tmp660 = $tmp661;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp661));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp662));
            return $tmp660;
        }
        }
        else {
        panda$core$Bit $tmp664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9598.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp664.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp668 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp668, ((panda$core$Int64) { 3 }), t596.position, ((panda$core$Bit) { false }));
            org$pandalanguage$pandac$ASTNode* $tmp667 = $tmp668;
            org$pandalanguage$pandac$ASTNode* $tmp666 = $tmp667;
            org$pandalanguage$pandac$ASTNode* $tmp665 = $tmp666;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp666));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp667));
            return $tmp665;
        }
        }
        else {
        panda$core$Bit $tmp670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9598.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp669 = $tmp670.value;
        if ($tmp669) goto $l671;
        panda$core$Bit $tmp672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9598.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp669 = $tmp672.value;
        $l671:;
        panda$core$Bit $tmp673 = { $tmp669 };
        if ($tmp673.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t596);
            org$pandalanguage$pandac$ASTNode* $tmp677 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp676 = $tmp677;
            org$pandalanguage$pandac$ASTNode* $tmp675 = $tmp676;
            org$pandalanguage$pandac$ASTNode* $tmp674 = $tmp675;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp675));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp676));
            return $tmp674;
        }
        }
        else {
        panda$core$Bit $tmp678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9598.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp678.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp682 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp681 = $tmp682;
            org$pandalanguage$pandac$ASTNode* $tmp680 = $tmp681;
            result679 = $tmp680;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp680));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp681));
            if (((panda$core$Bit) { result679 == NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp684 = NULL;
                    tmp33683 = $tmp684;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp684));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result679));
                    org$pandalanguage$pandac$ASTNode* $tmp685 = tmp33683;
                    return $tmp685;
                }
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp686, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp688 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp686, &$s687);
            if (((panda$core$Bit) { !$tmp688.nonnull }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp690 = NULL;
                    tmp34689 = $tmp690;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp690));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result679));
                    org$pandalanguage$pandac$ASTNode* $tmp691 = tmp34689;
                    return $tmp691;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp693 = result679;
                tmp35692 = $tmp693;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp693));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result679));
                org$pandalanguage$pandac$ASTNode* $tmp694 = tmp35692;
                return $tmp694;
            }
        }
        }
        else {
        {
            panda$core$String* $tmp699 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t596);
            panda$core$String* $tmp698 = $tmp699;
            panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s697, $tmp698);
            panda$core$String* $tmp696 = $tmp700;
            panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp696, &$s701);
            panda$core$String* $tmp695 = $tmp702;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t596, $tmp695);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp698));
            org$pandalanguage$pandac$ASTNode* $tmp704 = NULL;
            org$pandalanguage$pandac$ASTNode* $tmp703 = $tmp704;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp704));
            return $tmp703;
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
    org$pandalanguage$pandac$ASTNode* $match$403_9705;
    panda$core$String* text707;
    org$pandalanguage$pandac$ASTNode* base712;
    panda$core$String* field714;
    panda$core$String* result716;
    panda$core$String* tmp36728;
    {
        $match$403_9705 = p_expr;
        panda$core$Bit $tmp706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9705->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp706.value) {
        {
            panda$core$String** $tmp708 = ((panda$core$String**) ((char*) $match$403_9705->$data + 16));
            text707 = *$tmp708;
            panda$core$String* $tmp710 = text707;
            panda$core$String* $tmp709 = $tmp710;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp710));
            return $tmp709;
        }
        }
        else {
        panda$core$Bit $tmp711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9705->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp711.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp713 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$403_9705->$data + 16));
            base712 = *$tmp713;
            panda$core$String** $tmp715 = ((panda$core$String**) ((char*) $match$403_9705->$data + 24));
            field714 = *$tmp715;
            panda$core$String* $tmp719 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base712);
            panda$core$String* $tmp718 = $tmp719;
            panda$core$String* $tmp717 = $tmp718;
            result716 = $tmp717;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp717));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp718));
            if (((panda$core$Bit) { result716 != NULL }).value) {
            {
                {
                    panda$core$String* $tmp721 = result716;
                    panda$core$String* $tmp720 = $tmp721;
                    panda$core$String* $tmp726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s725, field714);
                    panda$core$String* $tmp724 = $tmp726;
                    panda$core$String* $tmp727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result716, $tmp724);
                    panda$core$String* $tmp723 = $tmp727;
                    panda$core$String* $tmp722 = $tmp723;
                    result716 = $tmp722;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp722));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp723));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp720));
                }
            }
            }
            {
                panda$core$String* $tmp729 = result716;
                tmp36728 = $tmp729;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp729));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result716));
                panda$core$String* $tmp730 = tmp36728;
                return $tmp730;
            }
        }
        }
        else {
        {
            panda$core$String* $tmp732 = NULL;
            panda$core$String* $tmp731 = $tmp732;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp732));
            return $tmp731;
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name733;
    org$pandalanguage$pandac$parser$Token$Kind $match$423_9735;
    org$pandalanguage$pandac$parser$Token token826;
    org$pandalanguage$pandac$parser$Token$Kind $tmp836;
    org$pandalanguage$pandac$parser$Token$Kind $tmp841;
    org$pandalanguage$pandac$parser$Token $tmp734 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name733 = $tmp734;
    {
        $match$423_9735 = name733.kind;
        panda$core$Bit $tmp757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp756 = $tmp757.value;
        if ($tmp756) goto $l758;
        panda$core$Bit $tmp759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp756 = $tmp759.value;
        $l758:;
        panda$core$Bit $tmp760 = { $tmp756 };
        bool $tmp755 = $tmp760.value;
        if ($tmp755) goto $l761;
        panda$core$Bit $tmp762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp755 = $tmp762.value;
        $l761:;
        panda$core$Bit $tmp763 = { $tmp755 };
        bool $tmp754 = $tmp763.value;
        if ($tmp754) goto $l764;
        panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp754 = $tmp765.value;
        $l764:;
        panda$core$Bit $tmp766 = { $tmp754 };
        bool $tmp753 = $tmp766.value;
        if ($tmp753) goto $l767;
        panda$core$Bit $tmp768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp753 = $tmp768.value;
        $l767:;
        panda$core$Bit $tmp769 = { $tmp753 };
        bool $tmp752 = $tmp769.value;
        if ($tmp752) goto $l770;
        panda$core$Bit $tmp771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp752 = $tmp771.value;
        $l770:;
        panda$core$Bit $tmp772 = { $tmp752 };
        bool $tmp751 = $tmp772.value;
        if ($tmp751) goto $l773;
        panda$core$Bit $tmp774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp751 = $tmp774.value;
        $l773:;
        panda$core$Bit $tmp775 = { $tmp751 };
        bool $tmp750 = $tmp775.value;
        if ($tmp750) goto $l776;
        panda$core$Bit $tmp777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp750 = $tmp777.value;
        $l776:;
        panda$core$Bit $tmp778 = { $tmp750 };
        bool $tmp749 = $tmp778.value;
        if ($tmp749) goto $l779;
        panda$core$Bit $tmp780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp749 = $tmp780.value;
        $l779:;
        panda$core$Bit $tmp781 = { $tmp749 };
        bool $tmp748 = $tmp781.value;
        if ($tmp748) goto $l782;
        panda$core$Bit $tmp783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp748 = $tmp783.value;
        $l782:;
        panda$core$Bit $tmp784 = { $tmp748 };
        bool $tmp747 = $tmp784.value;
        if ($tmp747) goto $l785;
        panda$core$Bit $tmp786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp747 = $tmp786.value;
        $l785:;
        panda$core$Bit $tmp787 = { $tmp747 };
        bool $tmp746 = $tmp787.value;
        if ($tmp746) goto $l788;
        panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp746 = $tmp789.value;
        $l788:;
        panda$core$Bit $tmp790 = { $tmp746 };
        bool $tmp745 = $tmp790.value;
        if ($tmp745) goto $l791;
        panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp745 = $tmp792.value;
        $l791:;
        panda$core$Bit $tmp793 = { $tmp745 };
        bool $tmp744 = $tmp793.value;
        if ($tmp744) goto $l794;
        panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp744 = $tmp795.value;
        $l794:;
        panda$core$Bit $tmp796 = { $tmp744 };
        bool $tmp743 = $tmp796.value;
        if ($tmp743) goto $l797;
        panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp743 = $tmp798.value;
        $l797:;
        panda$core$Bit $tmp799 = { $tmp743 };
        bool $tmp742 = $tmp799.value;
        if ($tmp742) goto $l800;
        panda$core$Bit $tmp801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp742 = $tmp801.value;
        $l800:;
        panda$core$Bit $tmp802 = { $tmp742 };
        bool $tmp741 = $tmp802.value;
        if ($tmp741) goto $l803;
        panda$core$Bit $tmp804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp741 = $tmp804.value;
        $l803:;
        panda$core$Bit $tmp805 = { $tmp741 };
        bool $tmp740 = $tmp805.value;
        if ($tmp740) goto $l806;
        panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp740 = $tmp807.value;
        $l806:;
        panda$core$Bit $tmp808 = { $tmp740 };
        bool $tmp739 = $tmp808.value;
        if ($tmp739) goto $l809;
        panda$core$Bit $tmp810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp739 = $tmp810.value;
        $l809:;
        panda$core$Bit $tmp811 = { $tmp739 };
        bool $tmp738 = $tmp811.value;
        if ($tmp738) goto $l812;
        panda$core$Bit $tmp813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp738 = $tmp813.value;
        $l812:;
        panda$core$Bit $tmp814 = { $tmp738 };
        bool $tmp737 = $tmp814.value;
        if ($tmp737) goto $l815;
        panda$core$Bit $tmp816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp737 = $tmp816.value;
        $l815:;
        panda$core$Bit $tmp817 = { $tmp737 };
        bool $tmp736 = $tmp817.value;
        if ($tmp736) goto $l818;
        panda$core$Bit $tmp819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp736 = $tmp819.value;
        $l818:;
        panda$core$Bit $tmp820 = { $tmp736 };
        if ($tmp820.value) {
        {
            panda$core$String* $tmp824 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name733);
            panda$core$String* $tmp823 = $tmp824;
            panda$core$String* $tmp822 = $tmp823;
            panda$core$String* $tmp821 = $tmp822;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp822));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp823));
            return $tmp821;
        }
        }
        else {
        panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp825.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp827 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token826 = $tmp827;
            panda$core$Bit $tmp828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token826.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp828.value) {
            {
                panda$core$String* $tmp830 = &$s831;
                panda$core$String* $tmp829 = $tmp830;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp830));
                return $tmp829;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token826);
                panda$core$String* $tmp833 = &$s834;
                panda$core$String* $tmp832 = $tmp833;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp833));
                return $tmp832;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9735.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp835.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp836, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp838 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp836, &$s837);
            if (((panda$core$Bit) { !$tmp838.nonnull }).value) {
            {
                panda$core$String* $tmp840 = NULL;
                panda$core$String* $tmp839 = $tmp840;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp840));
                return $tmp839;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp841, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp842 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp841);
            if (((panda$core$Bit) { $tmp842.nonnull }).value) {
            {
                panda$core$String* $tmp844 = &$s845;
                panda$core$String* $tmp843 = $tmp844;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp844));
                return $tmp843;
            }
            }
            panda$core$String* $tmp847 = &$s848;
            panda$core$String* $tmp846 = $tmp847;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp847));
            return $tmp846;
        }
        }
        else {
        {
            panda$core$String* $tmp853 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name733);
            panda$core$String* $tmp852 = $tmp853;
            panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s851, $tmp852);
            panda$core$String* $tmp850 = $tmp854;
            panda$core$String* $tmp856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp850, &$s855);
            panda$core$String* $tmp849 = $tmp856;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name733, $tmp849);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp849));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp852));
            panda$core$String* $tmp858 = NULL;
            panda$core$String* $tmp857 = $tmp858;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp858));
            return $tmp857;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp862 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$ASTNode* $tmp861 = $tmp862;
    org$pandalanguage$pandac$ASTNode* $tmp860 = $tmp861;
    org$pandalanguage$pandac$ASTNode* $tmp859 = $tmp860;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp860));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp861));
    return $tmp859;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start863;
    org$pandalanguage$pandac$parser$Token$Kind $tmp864;
    panda$core$MutableString* name869;
    org$pandalanguage$pandac$parser$Token$Kind $tmp878;
    org$pandalanguage$pandac$parser$Token$nullable id880;
    org$pandalanguage$pandac$parser$Token$Kind $tmp881;
    org$pandalanguage$pandac$ASTNode* tmp37884;
    panda$core$Char8 $tmp887;
    panda$core$String* finalName890;
    org$pandalanguage$pandac$ASTNode* result894;
    panda$collections$Array* children900;
    org$pandalanguage$pandac$ASTNode* t904;
    org$pandalanguage$pandac$ASTNode* tmp38908;
    org$pandalanguage$pandac$ASTNode* tmp44910;
    org$pandalanguage$pandac$ASTNode* tmp39912;
    org$pandalanguage$pandac$ASTNode* tmp45914;
    org$pandalanguage$pandac$parser$Token$Kind $tmp919;
    org$pandalanguage$pandac$ASTNode* tmp40925;
    org$pandalanguage$pandac$ASTNode* tmp46927;
    org$pandalanguage$pandac$ASTNode* tmp41929;
    org$pandalanguage$pandac$ASTNode* tmp47931;
    org$pandalanguage$pandac$parser$Token$Kind $tmp933;
    org$pandalanguage$pandac$ASTNode* tmp42936;
    org$pandalanguage$pandac$ASTNode* tmp48938;
    org$pandalanguage$pandac$ASTNode* tmp43940;
    org$pandalanguage$pandac$ASTNode* tmp49942;
    org$pandalanguage$pandac$parser$Token$Kind $tmp950;
    org$pandalanguage$pandac$ASTNode* tmp50956;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp864, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp866 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp864, &$s865);
    start863 = $tmp866;
    if (((panda$core$Bit) { !start863.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp868 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp867 = $tmp868;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp868));
        return $tmp867;
    }
    }
    panda$core$MutableString* $tmp872 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp874 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start863.value));
    panda$core$String* $tmp873 = $tmp874;
    panda$core$MutableString$init$panda$core$String($tmp872, $tmp873);
    panda$core$MutableString* $tmp871 = $tmp872;
    panda$core$MutableString* $tmp870 = $tmp871;
    name869 = $tmp870;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp870));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
    $l875:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp878, ((panda$core$Int64) { 98 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp879 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp878);
    bool $tmp877 = ((panda$core$Bit) { $tmp879.nonnull }).value;
    if (!$tmp877) goto $l876;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp881, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp883 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp881, &$s882);
        id880 = $tmp883;
        if (((panda$core$Bit) { !id880.nonnull }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp885 = NULL;
                tmp37884 = $tmp885;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp885));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name869));
                org$pandalanguage$pandac$ASTNode* $tmp886 = tmp37884;
                return $tmp886;
            }
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp887, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name869, $tmp887);
        panda$core$String* $tmp889 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id880.value));
        panda$core$String* $tmp888 = $tmp889;
        panda$core$MutableString$append$panda$core$String(name869, $tmp888);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
    }
    goto $l875;
    $l876:;
    panda$core$String* $tmp893 = panda$core$MutableString$finish$R$panda$core$String(name869);
    panda$core$String* $tmp892 = $tmp893;
    panda$core$String* $tmp891 = $tmp892;
    finalName890 = $tmp891;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp891));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp892));
    org$pandalanguage$pandac$ASTNode* $tmp897 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp897, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) start863.value).position, finalName890);
    org$pandalanguage$pandac$ASTNode* $tmp896 = $tmp897;
    org$pandalanguage$pandac$ASTNode* $tmp895 = $tmp896;
    result894 = $tmp895;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp895));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp896));
    org$pandalanguage$pandac$parser$Token $tmp898 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp898.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp899.value) {
    {
        if (p_needSpeculativeParse.value) {
        {
            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
        }
        }
        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        panda$collections$Array* $tmp903 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp903);
        panda$collections$Array* $tmp902 = $tmp903;
        panda$collections$Array* $tmp901 = $tmp902;
        children900 = $tmp901;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp901));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp902));
        panda$collections$Array$add$panda$collections$Array$T(children900, ((panda$core$Object*) result894));
        org$pandalanguage$pandac$ASTNode* $tmp907 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
        org$pandalanguage$pandac$ASTNode* $tmp906 = $tmp907;
        org$pandalanguage$pandac$ASTNode* $tmp905 = $tmp906;
        t904 = $tmp905;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp905));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp906));
        if (((panda$core$Bit) { t904 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                {
                    org$pandalanguage$pandac$ASTNode* $tmp909 = result894;
                    tmp38908 = $tmp909;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp909));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t904));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children900));
                    }
                    {
                        tmp44910 = tmp38908;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result894));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName890));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name869));
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp911 = tmp44910;
                        return $tmp911;
                    }
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp913 = NULL;
                tmp39912 = $tmp913;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp913));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t904));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children900));
                }
                {
                    tmp45914 = tmp39912;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result894));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName890));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name869));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp915 = tmp45914;
                    return $tmp915;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children900, ((panda$core$Object*) t904));
        $l916:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp919, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp920 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp919);
        bool $tmp918 = ((panda$core$Bit) { $tmp920.nonnull }).value;
        if (!$tmp918) goto $l917;
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp921 = t904;
                org$pandalanguage$pandac$ASTNode* $tmp924 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                org$pandalanguage$pandac$ASTNode* $tmp923 = $tmp924;
                org$pandalanguage$pandac$ASTNode* $tmp922 = $tmp923;
                t904 = $tmp922;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp923));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp921));
            }
            if (((panda$core$Bit) { t904 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp926 = result894;
                        tmp40925 = $tmp926;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp926));
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t904));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children900));
                        }
                        {
                            tmp46927 = tmp40925;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result894));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName890));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name869));
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp928 = tmp46927;
                            return $tmp928;
                        }
                    }
                }
                }
                {
                    org$pandalanguage$pandac$ASTNode* $tmp930 = NULL;
                    tmp41929 = $tmp930;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp930));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t904));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children900));
                    }
                    {
                        tmp47931 = tmp41929;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result894));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName890));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name869));
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp932 = tmp47931;
                        return $tmp932;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children900, ((panda$core$Object*) t904));
        }
        goto $l916;
        $l917:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp933, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp935 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp933, &$s934);
        if (((panda$core$Bit) { !$tmp935.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                {
                    org$pandalanguage$pandac$ASTNode* $tmp937 = result894;
                    tmp42936 = $tmp937;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp937));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t904));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children900));
                    }
                    {
                        tmp48938 = tmp42936;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result894));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName890));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name869));
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp939 = tmp48938;
                        return $tmp939;
                    }
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp941 = NULL;
                tmp43940 = $tmp941;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp941));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t904));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children900));
                }
                {
                    tmp49942 = tmp43940;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result894));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName890));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name869));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp943 = tmp49942;
                    return $tmp943;
                }
            }
        }
        }
        {
            org$pandalanguage$pandac$ASTNode* $tmp944 = result894;
            org$pandalanguage$pandac$ASTNode* $tmp947 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp949 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children900);
            panda$collections$ImmutableArray* $tmp948 = $tmp949;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp947, ((panda$core$Int64) { 17 }), ((org$pandalanguage$pandac$parser$Token) start863.value).position, finalName890, $tmp948);
            org$pandalanguage$pandac$ASTNode* $tmp946 = $tmp947;
            org$pandalanguage$pandac$ASTNode* $tmp945 = $tmp946;
            result894 = $tmp945;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp945));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp946));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp948));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp944));
        }
        org$pandalanguage$pandac$parser$Parser$accept(self);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t904));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children900));
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp950, ((panda$core$Int64) { 94 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp951 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp950);
    if (((panda$core$Bit) { $tmp951.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp952 = result894;
            org$pandalanguage$pandac$ASTNode* $tmp955 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp955, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start863.value).position, result894);
            org$pandalanguage$pandac$ASTNode* $tmp954 = $tmp955;
            org$pandalanguage$pandac$ASTNode* $tmp953 = $tmp954;
            result894 = $tmp953;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp953));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp952));
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp957 = result894;
        tmp50956 = $tmp957;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp957));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result894));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName890));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name869));
        }
        org$pandalanguage$pandac$ASTNode* $tmp958 = tmp50956;
        return $tmp958;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result959;
    org$pandalanguage$pandac$ASTNode* tmp51963;
    org$pandalanguage$pandac$parser$Token token968;
    org$pandalanguage$pandac$parser$Token$Kind $match$540_13970;
    panda$collections$Array* args974;
    org$pandalanguage$pandac$parser$Token$Kind $tmp978;
    org$pandalanguage$pandac$ASTNode* expr980;
    org$pandalanguage$pandac$ASTNode* tmp52986;
    org$pandalanguage$pandac$ASTNode* tmp55988;
    org$pandalanguage$pandac$ASTNode* tmp71989;
    org$pandalanguage$pandac$parser$Token$Kind $tmp994;
    org$pandalanguage$pandac$ASTNode* tmp531002;
    org$pandalanguage$pandac$ASTNode* tmp561004;
    org$pandalanguage$pandac$ASTNode* tmp721005;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1007;
    org$pandalanguage$pandac$ASTNode* tmp541012;
    org$pandalanguage$pandac$ASTNode* tmp571014;
    org$pandalanguage$pandac$ASTNode* tmp731015;
    org$pandalanguage$pandac$ASTNode* arg1026;
    org$pandalanguage$pandac$ASTNode* tmp581030;
    org$pandalanguage$pandac$ASTNode* tmp741032;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1034;
    org$pandalanguage$pandac$ASTNode* tmp591037;
    org$pandalanguage$pandac$ASTNode* tmp751039;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1045;
    panda$core$String* name1047;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1048;
    org$pandalanguage$pandac$ASTNode* tmp601057;
    org$pandalanguage$pandac$ASTNode* tmp761059;
    org$pandalanguage$pandac$ASTNode* target1066;
    org$pandalanguage$pandac$ASTNode* tmp611070;
    org$pandalanguage$pandac$ASTNode* tmp771072;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1078;
    panda$core$String* name1080;
    panda$core$MutableString* finalName1084;
    panda$core$Char8 $tmp1088;
    panda$collections$Array* types1089;
    org$pandalanguage$pandac$ASTNode* t1097;
    org$pandalanguage$pandac$ASTNode* tmp621101;
    org$pandalanguage$pandac$ASTNode* tmp661103;
    org$pandalanguage$pandac$ASTNode* tmp781104;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1109;
    org$pandalanguage$pandac$ASTNode* tmp631115;
    org$pandalanguage$pandac$ASTNode* tmp671117;
    org$pandalanguage$pandac$ASTNode* tmp791118;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1121;
    org$pandalanguage$pandac$ASTNode* tmp641124;
    org$pandalanguage$pandac$ASTNode* tmp681126;
    org$pandalanguage$pandac$ASTNode* tmp801127;
    panda$core$Char8 $tmp1129;
    panda$core$Bit shouldAccept1130;
    org$pandalanguage$pandac$parser$Token$Kind $match$652_291133;
    org$pandalanguage$pandac$ASTNode* tmp651158;
    org$pandalanguage$pandac$ASTNode* tmp691160;
    org$pandalanguage$pandac$ASTNode* tmp811161;
    org$pandalanguage$pandac$ASTNode* tmp701163;
    org$pandalanguage$pandac$ASTNode* tmp821165;
    org$pandalanguage$pandac$ASTNode* tmp831167;
    org$pandalanguage$pandac$ASTNode* $tmp962 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp961 = $tmp962;
    org$pandalanguage$pandac$ASTNode* $tmp960 = $tmp961;
    result959 = $tmp960;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp960));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp961));
    if (((panda$core$Bit) { result959 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp964 = NULL;
            tmp51963 = $tmp964;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp964));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
            org$pandalanguage$pandac$ASTNode* $tmp965 = tmp51963;
            return $tmp965;
        }
    }
    }
    $l966:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp969 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        token968 = $tmp969;
        {
            $match$540_13970 = token968.kind;
            panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13970.$rawValue, ((panda$core$Int64) { 103 }));
            if ($tmp971.value) {
            {
                panda$core$Bit$wrapper* $tmp973;
                $tmp973 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                $tmp973->value = ((panda$core$Bit) { true });
                panda$core$Object* $tmp972 = ((panda$core$Object*) $tmp973);
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp972);
                panda$core$Panda$unref$panda$core$Object($tmp972);
                panda$collections$Array* $tmp977 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp977);
                panda$collections$Array* $tmp976 = $tmp977;
                panda$collections$Array* $tmp975 = $tmp976;
                args974 = $tmp975;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp975));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp976));
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp978, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp979 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp978);
                if (((panda$core$Bit) { !$tmp979.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp983 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    org$pandalanguage$pandac$ASTNode* $tmp982 = $tmp983;
                    org$pandalanguage$pandac$ASTNode* $tmp981 = $tmp982;
                    expr980 = $tmp981;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp981));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp982));
                    if (((panda$core$Bit) { expr980 == NULL }).value) {
                    {
                        panda$core$Object* $tmp985 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        panda$core$Object* $tmp984 = $tmp985;
                        panda$core$Panda$unref$panda$core$Object($tmp984);
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp987 = NULL;
                            tmp52986 = $tmp987;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp987));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr980));
                            {
                                tmp55988 = tmp52986;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args974));
                                {
                                    tmp71989 = tmp55988;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
                                    org$pandalanguage$pandac$ASTNode* $tmp990 = tmp71989;
                                    return $tmp990;
                                }
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args974, ((panda$core$Object*) expr980));
                    $l991:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp994, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp995 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp994);
                    bool $tmp993 = ((panda$core$Bit) { $tmp995.nonnull }).value;
                    if (!$tmp993) goto $l992;
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp996 = expr980;
                            org$pandalanguage$pandac$ASTNode* $tmp999 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            org$pandalanguage$pandac$ASTNode* $tmp998 = $tmp999;
                            org$pandalanguage$pandac$ASTNode* $tmp997 = $tmp998;
                            expr980 = $tmp997;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp997));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp998));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp996));
                        }
                        if (((panda$core$Bit) { expr980 == NULL }).value) {
                        {
                            panda$core$Object* $tmp1001 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            panda$core$Object* $tmp1000 = $tmp1001;
                            panda$core$Panda$unref$panda$core$Object($tmp1000);
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1003 = NULL;
                                tmp531002 = $tmp1003;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1003));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr980));
                                {
                                    tmp561004 = tmp531002;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args974));
                                    {
                                        tmp721005 = tmp561004;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
                                        org$pandalanguage$pandac$ASTNode* $tmp1006 = tmp721005;
                                        return $tmp1006;
                                    }
                                }
                            }
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(args974, ((panda$core$Object*) expr980));
                    }
                    goto $l991;
                    $l992:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1007, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1009 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1007, &$s1008);
                    if (((panda$core$Bit) { !$tmp1009.nonnull }).value) {
                    {
                        panda$core$Object* $tmp1011 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        panda$core$Object* $tmp1010 = $tmp1011;
                        panda$core$Panda$unref$panda$core$Object($tmp1010);
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1013 = NULL;
                            tmp541012 = $tmp1013;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1013));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr980));
                            {
                                tmp571014 = tmp541012;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args974));
                                {
                                    tmp731015 = tmp571014;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
                                    org$pandalanguage$pandac$ASTNode* $tmp1016 = tmp731015;
                                    return $tmp1016;
                                }
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr980));
                }
                }
                panda$core$Object* $tmp1018 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                panda$core$Object* $tmp1017 = $tmp1018;
                panda$core$Panda$unref$panda$core$Object($tmp1017);
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1019 = result959;
                    org$pandalanguage$pandac$ASTNode* $tmp1022 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1024 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args974);
                    panda$collections$ImmutableArray* $tmp1023 = $tmp1024;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1022, ((panda$core$Int64) { 6 }), token968.position, result959, $tmp1023);
                    org$pandalanguage$pandac$ASTNode* $tmp1021 = $tmp1022;
                    org$pandalanguage$pandac$ASTNode* $tmp1020 = $tmp1021;
                    result959 = $tmp1020;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1020));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1021));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1023));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1019));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args974));
            }
            }
            else {
            panda$core$Bit $tmp1025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13970.$rawValue, ((panda$core$Int64) { 101 }));
            if ($tmp1025.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1029 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp1028 = $tmp1029;
                org$pandalanguage$pandac$ASTNode* $tmp1027 = $tmp1028;
                arg1026 = $tmp1027;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1027));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1028));
                if (((panda$core$Bit) { arg1026 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1031 = NULL;
                        tmp581030 = $tmp1031;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1031));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1026));
                        {
                            tmp741032 = tmp581030;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
                            org$pandalanguage$pandac$ASTNode* $tmp1033 = tmp741032;
                            return $tmp1033;
                        }
                    }
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1034, ((panda$core$Int64) { 102 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1036 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1034, &$s1035);
                if (((panda$core$Bit) { !$tmp1036.nonnull }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1038 = NULL;
                        tmp591037 = $tmp1038;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1038));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1026));
                        {
                            tmp751039 = tmp591037;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
                            org$pandalanguage$pandac$ASTNode* $tmp1040 = tmp751039;
                            return $tmp1040;
                        }
                    }
                }
                }
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1041 = result959;
                    org$pandalanguage$pandac$ASTNode* $tmp1044 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1045, ((panda$core$Int64) { 101 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1044, ((panda$core$Int64) { 2 }), token968.position, result959, $tmp1045, arg1026);
                    org$pandalanguage$pandac$ASTNode* $tmp1043 = $tmp1044;
                    org$pandalanguage$pandac$ASTNode* $tmp1042 = $tmp1043;
                    result959 = $tmp1042;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1042));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1043));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1041));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1026));
            }
            }
            else {
            panda$core$Bit $tmp1046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13970.$rawValue, ((panda$core$Int64) { 98 }));
            if ($tmp1046.value) {
            {
                memset(&name1047, 0, sizeof(name1047));
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1048, ((panda$core$Int64) { 22 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1049 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1048);
                if (((panda$core$Bit) { $tmp1049.nonnull }).value) {
                {
                    {
                        panda$core$String* $tmp1050 = name1047;
                        panda$core$String* $tmp1051 = &$s1052;
                        name1047 = $tmp1051;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1051));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp1053 = name1047;
                        panda$core$String* $tmp1056 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                        panda$core$String* $tmp1055 = $tmp1056;
                        panda$core$String* $tmp1054 = $tmp1055;
                        name1047 = $tmp1054;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1054));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1055));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1053));
                    }
                    if (((panda$core$Bit) { name1047 == NULL }).value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1058 = NULL;
                            tmp601057 = $tmp1058;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1058));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1047));
                            {
                                tmp761059 = tmp601057;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
                                org$pandalanguage$pandac$ASTNode* $tmp1060 = tmp761059;
                                return $tmp1060;
                            }
                        }
                    }
                    }
                }
                }
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1061 = result959;
                    org$pandalanguage$pandac$ASTNode* $tmp1064 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1064, ((panda$core$Int64) { 13 }), token968.position, result959, name1047);
                    org$pandalanguage$pandac$ASTNode* $tmp1063 = $tmp1064;
                    org$pandalanguage$pandac$ASTNode* $tmp1062 = $tmp1063;
                    result959 = $tmp1062;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1062));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1063));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1061));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1047));
            }
            }
            else {
            panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13970.$rawValue, ((panda$core$Int64) { 89 }));
            if ($tmp1065.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1069 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp1068 = $tmp1069;
                org$pandalanguage$pandac$ASTNode* $tmp1067 = $tmp1068;
                target1066 = $tmp1067;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1067));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1068));
                if (((panda$core$Bit) { target1066 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1071 = NULL;
                        tmp611070 = $tmp1071;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1071));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1066));
                        {
                            tmp771072 = tmp611070;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
                            org$pandalanguage$pandac$ASTNode* $tmp1073 = tmp771072;
                            return $tmp1073;
                        }
                    }
                }
                }
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1074 = result959;
                    org$pandalanguage$pandac$ASTNode* $tmp1077 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1078, ((panda$core$Int64) { 89 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1077, ((panda$core$Int64) { 2 }), token968.position, result959, $tmp1078, target1066);
                    org$pandalanguage$pandac$ASTNode* $tmp1076 = $tmp1077;
                    org$pandalanguage$pandac$ASTNode* $tmp1075 = $tmp1076;
                    result959 = $tmp1075;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1075));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1076));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1074));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1066));
            }
            }
            else {
            panda$core$Bit $tmp1079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13970.$rawValue, ((panda$core$Int64) { 62 }));
            if ($tmp1079.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token968);
                panda$core$String* $tmp1083 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result959);
                panda$core$String* $tmp1082 = $tmp1083;
                panda$core$String* $tmp1081 = $tmp1082;
                name1080 = $tmp1081;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1081));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1082));
                if (((panda$core$Bit) { name1080 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp1087 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                    panda$core$MutableString$init$panda$core$String($tmp1087, name1080);
                    panda$core$MutableString* $tmp1086 = $tmp1087;
                    panda$core$MutableString* $tmp1085 = $tmp1086;
                    finalName1084 = $tmp1085;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1085));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1086));
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1088, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName1084, $tmp1088);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp1092 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1092);
                    panda$collections$Array* $tmp1091 = $tmp1092;
                    panda$collections$Array* $tmp1090 = $tmp1091;
                    types1089 = $tmp1090;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1090));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1091));
                    org$pandalanguage$pandac$ASTNode* $tmp1094 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp1096 = (($fn1095) result959->$class->vtable[2])(result959);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1094, ((panda$core$Int64) { 36 }), $tmp1096, name1080);
                    org$pandalanguage$pandac$ASTNode* $tmp1093 = $tmp1094;
                    panda$collections$Array$add$panda$collections$Array$T(types1089, ((panda$core$Object*) $tmp1093));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1093));
                    org$pandalanguage$pandac$ASTNode* $tmp1100 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    org$pandalanguage$pandac$ASTNode* $tmp1099 = $tmp1100;
                    org$pandalanguage$pandac$ASTNode* $tmp1098 = $tmp1099;
                    t1097 = $tmp1098;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1098));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1099));
                    if (((panda$core$Bit) { t1097 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1102 = result959;
                            tmp621101 = $tmp1102;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1102));
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1089));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1097));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1084));
                            }
                            {
                                tmp661103 = tmp621101;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1080));
                                {
                                    tmp781104 = tmp661103;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
                                    org$pandalanguage$pandac$ASTNode* $tmp1105 = tmp781104;
                                    return $tmp1105;
                                }
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types1089, ((panda$core$Object*) t1097));
                    panda$core$MutableString$append$panda$core$Object(finalName1084, ((panda$core$Object*) t1097));
                    $l1106:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1109, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1110 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1109);
                    bool $tmp1108 = ((panda$core$Bit) { $tmp1110.nonnull }).value;
                    if (!$tmp1108) goto $l1107;
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1111 = t1097;
                            org$pandalanguage$pandac$ASTNode* $tmp1114 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                            org$pandalanguage$pandac$ASTNode* $tmp1113 = $tmp1114;
                            org$pandalanguage$pandac$ASTNode* $tmp1112 = $tmp1113;
                            t1097 = $tmp1112;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1112));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1113));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1111));
                        }
                        if (((panda$core$Bit) { t1097 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1116 = result959;
                                tmp631115 = $tmp1116;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1116));
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1089));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1097));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1084));
                                }
                                {
                                    tmp671117 = tmp631115;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1080));
                                    {
                                        tmp791118 = tmp671117;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
                                        org$pandalanguage$pandac$ASTNode* $tmp1119 = tmp791118;
                                        return $tmp1119;
                                    }
                                }
                            }
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types1089, ((panda$core$Object*) t1097));
                        panda$core$MutableString$append$panda$core$String(finalName1084, &$s1120);
                        panda$core$MutableString$append$panda$core$Object(finalName1084, ((panda$core$Object*) t1097));
                    }
                    goto $l1106;
                    $l1107:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1121, ((panda$core$Int64) { 63 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1123 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1121, &$s1122);
                    if (((panda$core$Bit) { !$tmp1123.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1125 = result959;
                            tmp641124 = $tmp1125;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1125));
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1089));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1097));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1084));
                            }
                            {
                                tmp681126 = tmp641124;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1080));
                                {
                                    tmp801127 = tmp681126;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
                                    org$pandalanguage$pandac$ASTNode* $tmp1128 = tmp801127;
                                    return $tmp1128;
                                }
                            }
                        }
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1129, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName1084, $tmp1129);
                    memset(&shouldAccept1130, 0, sizeof(shouldAccept1130));
                    panda$core$Object* $tmp1132 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    panda$core$Object* $tmp1131 = $tmp1132;
                    panda$core$Panda$unref$panda$core$Object($tmp1131);
                    if (((panda$core$Bit$wrapper*) $tmp1131)->value.value) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp1134 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$652_291133 = $tmp1134.kind;
                            panda$core$Bit $tmp1138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_291133.$rawValue, ((panda$core$Int64) { 98 }));
                            bool $tmp1137 = $tmp1138.value;
                            if ($tmp1137) goto $l1139;
                            panda$core$Bit $tmp1140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_291133.$rawValue, ((panda$core$Int64) { 103 }));
                            $tmp1137 = $tmp1140.value;
                            $l1139:;
                            panda$core$Bit $tmp1141 = { $tmp1137 };
                            bool $tmp1136 = $tmp1141.value;
                            if ($tmp1136) goto $l1142;
                            panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_291133.$rawValue, ((panda$core$Int64) { 105 }));
                            $tmp1136 = $tmp1143.value;
                            $l1142:;
                            panda$core$Bit $tmp1144 = { $tmp1136 };
                            bool $tmp1135 = $tmp1144.value;
                            if ($tmp1135) goto $l1145;
                            panda$core$Bit $tmp1146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_291133.$rawValue, ((panda$core$Int64) { 89 }));
                            $tmp1135 = $tmp1146.value;
                            $l1145:;
                            panda$core$Bit $tmp1147 = { $tmp1135 };
                            if ($tmp1147.value) {
                            {
                                shouldAccept1130 = ((panda$core$Bit) { true });
                            }
                            }
                            else {
                            {
                                shouldAccept1130 = ((panda$core$Bit) { false });
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept1130 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept1130.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1148 = result959;
                            org$pandalanguage$pandac$ASTNode* $tmp1151 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$Position $tmp1153 = (($fn1152) result959->$class->vtable[2])(result959);
                            panda$core$String* $tmp1155 = panda$core$MutableString$finish$R$panda$core$String(finalName1084);
                            panda$core$String* $tmp1154 = $tmp1155;
                            panda$collections$ImmutableArray* $tmp1157 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types1089);
                            panda$collections$ImmutableArray* $tmp1156 = $tmp1157;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1151, ((panda$core$Int64) { 17 }), $tmp1153, $tmp1154, $tmp1156);
                            org$pandalanguage$pandac$ASTNode* $tmp1150 = $tmp1151;
                            org$pandalanguage$pandac$ASTNode* $tmp1149 = $tmp1150;
                            result959 = $tmp1149;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1149));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1150));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1156));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1154));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1148));
                        }
                        {
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1089));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1097));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1084));
                            }
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1080));
                                goto $l966;
                            }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1159 = result959;
                            tmp651158 = $tmp1159;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1159));
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1089));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1097));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1084));
                            }
                            {
                                tmp691160 = tmp651158;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1080));
                                {
                                    tmp811161 = tmp691160;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
                                    org$pandalanguage$pandac$ASTNode* $tmp1162 = tmp811161;
                                    return $tmp1162;
                                }
                            }
                        }
                    }
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1089));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1097));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1084));
                    }
                }
                }
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1164 = result959;
                    tmp701163 = $tmp1164;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1164));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1080));
                    {
                        tmp821165 = tmp701163;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
                        org$pandalanguage$pandac$ASTNode* $tmp1166 = tmp821165;
                        return $tmp1166;
                    }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token968);
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1168 = result959;
                    tmp831167 = $tmp1168;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1168));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
                    org$pandalanguage$pandac$ASTNode* $tmp1169 = tmp831167;
                    return $tmp1169;
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
    $l967:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1170;
    org$pandalanguage$pandac$ASTNode* tmp841174;
    org$pandalanguage$pandac$parser$Token$nullable op1179;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1180;
    org$pandalanguage$pandac$ASTNode* next1182;
    org$pandalanguage$pandac$ASTNode* tmp851186;
    org$pandalanguage$pandac$ASTNode* tmp861188;
    org$pandalanguage$pandac$ASTNode* tmp871194;
    org$pandalanguage$pandac$ASTNode* $tmp1173 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1172 = $tmp1173;
    org$pandalanguage$pandac$ASTNode* $tmp1171 = $tmp1172;
    result1170 = $tmp1171;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1171));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
    if (((panda$core$Bit) { result1170 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1175 = NULL;
            tmp841174 = $tmp1175;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1175));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1170));
            org$pandalanguage$pandac$ASTNode* $tmp1176 = tmp841174;
            return $tmp1176;
        }
    }
    }
    $l1177:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1180, ((panda$core$Int64) { 57 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1181 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1180);
        op1179 = $tmp1181;
        if (((panda$core$Bit) { !op1179.nonnull }).value) {
        {
            goto $l1178;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1185 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        org$pandalanguage$pandac$ASTNode* $tmp1184 = $tmp1185;
        org$pandalanguage$pandac$ASTNode* $tmp1183 = $tmp1184;
        next1182 = $tmp1183;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1183));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1184));
        if (((panda$core$Bit) { next1182 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1187 = NULL;
                tmp851186 = $tmp1187;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1187));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1182));
                {
                    tmp861188 = tmp851186;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1170));
                    org$pandalanguage$pandac$ASTNode* $tmp1189 = tmp861188;
                    return $tmp1189;
                }
            }
        }
        }
        {
            org$pandalanguage$pandac$ASTNode* $tmp1190 = result1170;
            org$pandalanguage$pandac$ASTNode* $tmp1193 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1193, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op1179.value).position, result1170, ((org$pandalanguage$pandac$parser$Token) op1179.value).kind, next1182);
            org$pandalanguage$pandac$ASTNode* $tmp1192 = $tmp1193;
            org$pandalanguage$pandac$ASTNode* $tmp1191 = $tmp1192;
            result1170 = $tmp1191;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1191));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1192));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1190));
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1182));
    }
    }
    $l1178:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1195 = result1170;
        tmp871194 = $tmp1195;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1195));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1170));
        org$pandalanguage$pandac$ASTNode* $tmp1196 = tmp871194;
        return $tmp1196;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op1197;
    org$pandalanguage$pandac$parser$Token$Kind $match$709_91199;
    org$pandalanguage$pandac$ASTNode* base1209;
    org$pandalanguage$pandac$ASTNode* tmp881213;
    org$pandalanguage$pandac$ASTNode* tmp891216;
    org$pandalanguage$pandac$parser$Token $tmp1198 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op1197 = $tmp1198;
    {
        $match$709_91199 = op1197.kind;
        panda$core$Bit $tmp1202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_91199.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp1201 = $tmp1202.value;
        if ($tmp1201) goto $l1203;
        panda$core$Bit $tmp1204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_91199.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp1201 = $tmp1204.value;
        $l1203:;
        panda$core$Bit $tmp1205 = { $tmp1201 };
        bool $tmp1200 = $tmp1205.value;
        if ($tmp1200) goto $l1206;
        panda$core$Bit $tmp1207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_91199.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp1200 = $tmp1207.value;
        $l1206:;
        panda$core$Bit $tmp1208 = { $tmp1200 };
        if ($tmp1208.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1212 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp1211 = $tmp1212;
            org$pandalanguage$pandac$ASTNode* $tmp1210 = $tmp1211;
            base1209 = $tmp1210;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1211));
            if (((panda$core$Bit) { base1209 == NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1214 = NULL;
                    tmp881213 = $tmp1214;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1214));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1209));
                    org$pandalanguage$pandac$ASTNode* $tmp1215 = tmp881213;
                    return $tmp1215;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp1219 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1219, ((panda$core$Int64) { 29 }), op1197.position, op1197.kind, base1209);
                org$pandalanguage$pandac$ASTNode* $tmp1218 = $tmp1219;
                org$pandalanguage$pandac$ASTNode* $tmp1217 = $tmp1218;
                tmp891216 = $tmp1217;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1218));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1209));
                org$pandalanguage$pandac$ASTNode* $tmp1220 = tmp891216;
                return $tmp1220;
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1197);
            org$pandalanguage$pandac$ASTNode* $tmp1224 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp1223 = $tmp1224;
            org$pandalanguage$pandac$ASTNode* $tmp1222 = $tmp1223;
            org$pandalanguage$pandac$ASTNode* $tmp1221 = $tmp1222;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1222));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1223));
            return $tmp1221;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1225;
    org$pandalanguage$pandac$ASTNode* tmp901229;
    org$pandalanguage$pandac$parser$Token op1234;
    org$pandalanguage$pandac$parser$Token$Kind $match$735_131236;
    org$pandalanguage$pandac$ASTNode* next1262;
    org$pandalanguage$pandac$ASTNode* tmp911266;
    org$pandalanguage$pandac$ASTNode* tmp931268;
    org$pandalanguage$pandac$parser$Token nextToken1275;
    org$pandalanguage$pandac$ASTNode* next1278;
    org$pandalanguage$pandac$ASTNode* tmp921282;
    org$pandalanguage$pandac$ASTNode* tmp941284;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1290;
    org$pandalanguage$pandac$ASTNode* tmp951291;
    org$pandalanguage$pandac$ASTNode* tmp961294;
    org$pandalanguage$pandac$ASTNode* $tmp1228 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1227 = $tmp1228;
    org$pandalanguage$pandac$ASTNode* $tmp1226 = $tmp1227;
    result1225 = $tmp1226;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1226));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1227));
    if (((panda$core$Bit) { result1225 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1230 = NULL;
            tmp901229 = $tmp1230;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1230));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1225));
            org$pandalanguage$pandac$ASTNode* $tmp1231 = tmp901229;
            return $tmp1231;
        }
    }
    }
    $l1232:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1235 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op1234 = $tmp1235;
        {
            $match$735_131236 = op1234.kind;
            panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131236.$rawValue, ((panda$core$Int64) { 53 }));
            bool $tmp1242 = $tmp1243.value;
            if ($tmp1242) goto $l1244;
            panda$core$Bit $tmp1245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131236.$rawValue, ((panda$core$Int64) { 54 }));
            $tmp1242 = $tmp1245.value;
            $l1244:;
            panda$core$Bit $tmp1246 = { $tmp1242 };
            bool $tmp1241 = $tmp1246.value;
            if ($tmp1241) goto $l1247;
            panda$core$Bit $tmp1248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131236.$rawValue, ((panda$core$Int64) { 55 }));
            $tmp1241 = $tmp1248.value;
            $l1247:;
            panda$core$Bit $tmp1249 = { $tmp1241 };
            bool $tmp1240 = $tmp1249.value;
            if ($tmp1240) goto $l1250;
            panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131236.$rawValue, ((panda$core$Int64) { 56 }));
            $tmp1240 = $tmp1251.value;
            $l1250:;
            panda$core$Bit $tmp1252 = { $tmp1240 };
            bool $tmp1239 = $tmp1252.value;
            if ($tmp1239) goto $l1253;
            panda$core$Bit $tmp1254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131236.$rawValue, ((panda$core$Int64) { 72 }));
            $tmp1239 = $tmp1254.value;
            $l1253:;
            panda$core$Bit $tmp1255 = { $tmp1239 };
            bool $tmp1238 = $tmp1255.value;
            if ($tmp1238) goto $l1256;
            panda$core$Bit $tmp1257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131236.$rawValue, ((panda$core$Int64) { 67 }));
            $tmp1238 = $tmp1257.value;
            $l1256:;
            panda$core$Bit $tmp1258 = { $tmp1238 };
            bool $tmp1237 = $tmp1258.value;
            if ($tmp1237) goto $l1259;
            panda$core$Bit $tmp1260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131236.$rawValue, ((panda$core$Int64) { 69 }));
            $tmp1237 = $tmp1260.value;
            $l1259:;
            panda$core$Bit $tmp1261 = { $tmp1237 };
            if ($tmp1261.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1265 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp1264 = $tmp1265;
                org$pandalanguage$pandac$ASTNode* $tmp1263 = $tmp1264;
                next1262 = $tmp1263;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1263));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1264));
                if (((panda$core$Bit) { next1262 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1267 = NULL;
                        tmp911266 = $tmp1267;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1267));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1262));
                        {
                            tmp931268 = tmp911266;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1225));
                            org$pandalanguage$pandac$ASTNode* $tmp1269 = tmp931268;
                            return $tmp1269;
                        }
                    }
                }
                }
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1270 = result1225;
                    org$pandalanguage$pandac$ASTNode* $tmp1273 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1273, ((panda$core$Int64) { 2 }), op1234.position, result1225, op1234.kind, next1262);
                    org$pandalanguage$pandac$ASTNode* $tmp1272 = $tmp1273;
                    org$pandalanguage$pandac$ASTNode* $tmp1271 = $tmp1272;
                    result1225 = $tmp1271;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1271));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1272));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1270));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1262));
            }
            }
            else {
            panda$core$Bit $tmp1274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131236.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp1274.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1276 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken1275 = $tmp1276;
                panda$core$Bit $tmp1277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken1275.kind.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp1277.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1281 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    org$pandalanguage$pandac$ASTNode* $tmp1280 = $tmp1281;
                    org$pandalanguage$pandac$ASTNode* $tmp1279 = $tmp1280;
                    next1278 = $tmp1279;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1280));
                    if (((panda$core$Bit) { next1278 == NULL }).value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1283 = NULL;
                            tmp921282 = $tmp1283;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1283));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1278));
                            {
                                tmp941284 = tmp921282;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1225));
                                org$pandalanguage$pandac$ASTNode* $tmp1285 = tmp941284;
                                return $tmp1285;
                            }
                        }
                    }
                    }
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1286 = result1225;
                        org$pandalanguage$pandac$ASTNode* $tmp1289 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1290, ((panda$core$Int64) { 1 }));
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1289, ((panda$core$Int64) { 2 }), op1234.position, result1225, $tmp1290, next1278);
                        org$pandalanguage$pandac$ASTNode* $tmp1288 = $tmp1289;
                        org$pandalanguage$pandac$ASTNode* $tmp1287 = $tmp1288;
                        result1225 = $tmp1287;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1287));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1288));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1286));
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1278));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken1275);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1234);
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1292 = result1225;
                        tmp951291 = $tmp1292;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1292));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1225));
                        org$pandalanguage$pandac$ASTNode* $tmp1293 = tmp951291;
                        return $tmp1293;
                    }
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1234);
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1295 = result1225;
                    tmp961294 = $tmp1295;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1295));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1225));
                    org$pandalanguage$pandac$ASTNode* $tmp1296 = tmp961294;
                    return $tmp1296;
                }
            }
            }
            }
        }
    }
    }
    $l1233:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1225));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1297;
    org$pandalanguage$pandac$ASTNode* tmp971301;
    org$pandalanguage$pandac$parser$Token op1306;
    org$pandalanguage$pandac$parser$Token$Kind $match$776_131308;
    org$pandalanguage$pandac$ASTNode* next1318;
    org$pandalanguage$pandac$ASTNode* tmp981322;
    org$pandalanguage$pandac$ASTNode* tmp991324;
    org$pandalanguage$pandac$ASTNode* tmp1001330;
    org$pandalanguage$pandac$ASTNode* $tmp1300 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1299 = $tmp1300;
    org$pandalanguage$pandac$ASTNode* $tmp1298 = $tmp1299;
    result1297 = $tmp1298;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1298));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1299));
    if (((panda$core$Bit) { result1297 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1302 = NULL;
            tmp971301 = $tmp1302;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1302));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1297));
            org$pandalanguage$pandac$ASTNode* $tmp1303 = tmp971301;
            return $tmp1303;
        }
    }
    }
    $l1304:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1307 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op1306 = $tmp1307;
        {
            $match$776_131308 = op1306.kind;
            panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_131308.$rawValue, ((panda$core$Int64) { 51 }));
            bool $tmp1310 = $tmp1311.value;
            if ($tmp1310) goto $l1312;
            panda$core$Bit $tmp1313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_131308.$rawValue, ((panda$core$Int64) { 52 }));
            $tmp1310 = $tmp1313.value;
            $l1312:;
            panda$core$Bit $tmp1314 = { $tmp1310 };
            bool $tmp1309 = $tmp1314.value;
            if ($tmp1309) goto $l1315;
            panda$core$Bit $tmp1316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_131308.$rawValue, ((panda$core$Int64) { 71 }));
            $tmp1309 = $tmp1316.value;
            $l1315:;
            panda$core$Bit $tmp1317 = { $tmp1309 };
            if ($tmp1317.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1321 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp1320 = $tmp1321;
                org$pandalanguage$pandac$ASTNode* $tmp1319 = $tmp1320;
                next1318 = $tmp1319;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1319));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1320));
                if (((panda$core$Bit) { next1318 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1323 = NULL;
                        tmp981322 = $tmp1323;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1323));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1318));
                        {
                            tmp991324 = tmp981322;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1297));
                            org$pandalanguage$pandac$ASTNode* $tmp1325 = tmp991324;
                            return $tmp1325;
                        }
                    }
                }
                }
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1326 = result1297;
                    org$pandalanguage$pandac$ASTNode* $tmp1329 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1329, ((panda$core$Int64) { 2 }), op1306.position, result1297, op1306.kind, next1318);
                    org$pandalanguage$pandac$ASTNode* $tmp1328 = $tmp1329;
                    org$pandalanguage$pandac$ASTNode* $tmp1327 = $tmp1328;
                    result1297 = $tmp1327;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1327));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1328));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1326));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1318));
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1306);
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1331 = result1297;
                    tmp1001330 = $tmp1331;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1331));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1297));
                    org$pandalanguage$pandac$ASTNode* $tmp1332 = tmp1001330;
                    return $tmp1332;
                }
            }
            }
        }
    }
    }
    $l1305:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1297));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1333;
    org$pandalanguage$pandac$parser$Token$Kind $match$796_91334;
    org$pandalanguage$pandac$ASTNode* tmp1011347;
    org$pandalanguage$pandac$parser$Token op1350;
    org$pandalanguage$pandac$parser$Token$Kind $match$806_91352;
    org$pandalanguage$pandac$parser$Token next1358;
    org$pandalanguage$pandac$ASTNode* right1360;
    org$pandalanguage$pandac$ASTNode* tmp1021374;
    org$pandalanguage$pandac$ASTNode* tmp1051376;
    org$pandalanguage$pandac$ASTNode* step1380;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1381;
    org$pandalanguage$pandac$ASTNode* tmp1031387;
    org$pandalanguage$pandac$ASTNode* tmp1061389;
    org$pandalanguage$pandac$ASTNode* tmp1041393;
    org$pandalanguage$pandac$ASTNode* tmp1071398;
    org$pandalanguage$pandac$ASTNode* tmp1081400;
    memset(&result1333, 0, sizeof(result1333));
    {
        org$pandalanguage$pandac$parser$Token $tmp1335 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$796_91334 = $tmp1335.kind;
        panda$core$Bit $tmp1337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_91334.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp1336 = $tmp1337.value;
        if ($tmp1336) goto $l1338;
        panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_91334.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp1336 = $tmp1339.value;
        $l1338:;
        panda$core$Bit $tmp1340 = { $tmp1336 };
        if ($tmp1340.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1341 = result1333;
                org$pandalanguage$pandac$ASTNode* $tmp1342 = NULL;
                result1333 = $tmp1342;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1342));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
            }
        }
        }
        else {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1343 = result1333;
                org$pandalanguage$pandac$ASTNode* $tmp1346 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp1345 = $tmp1346;
                org$pandalanguage$pandac$ASTNode* $tmp1344 = $tmp1345;
                result1333 = $tmp1344;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1344));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1345));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
            }
            if (((panda$core$Bit) { result1333 == NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1348 = NULL;
                    tmp1011347 = $tmp1348;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1348));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1333));
                    org$pandalanguage$pandac$ASTNode* $tmp1349 = tmp1011347;
                    return $tmp1349;
                }
            }
            }
        }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp1351 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op1350 = $tmp1351;
    {
        $match$806_91352 = op1350.kind;
        panda$core$Bit $tmp1354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_91352.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp1353 = $tmp1354.value;
        if ($tmp1353) goto $l1355;
        panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_91352.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp1353 = $tmp1356.value;
        $l1355:;
        panda$core$Bit $tmp1357 = { $tmp1353 };
        if ($tmp1357.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1359 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next1358 = $tmp1359;
            memset(&right1360, 0, sizeof(right1360));
            panda$core$Bit $tmp1363 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1358.kind.$rawValue, ((panda$core$Int64) { 102 }));
            bool $tmp1362 = $tmp1363.value;
            if (!$tmp1362) goto $l1364;
            panda$core$Bit $tmp1365 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1358.kind.$rawValue, ((panda$core$Int64) { 104 }));
            $tmp1362 = $tmp1365.value;
            $l1364:;
            panda$core$Bit $tmp1366 = { $tmp1362 };
            bool $tmp1361 = $tmp1366.value;
            if (!$tmp1361) goto $l1367;
            panda$core$Bit $tmp1368 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1358.kind.$rawValue, ((panda$core$Int64) { 33 }));
            $tmp1361 = $tmp1368.value;
            $l1367:;
            panda$core$Bit $tmp1369 = { $tmp1361 };
            if ($tmp1369.value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1370 = right1360;
                    org$pandalanguage$pandac$ASTNode* $tmp1373 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    org$pandalanguage$pandac$ASTNode* $tmp1372 = $tmp1373;
                    org$pandalanguage$pandac$ASTNode* $tmp1371 = $tmp1372;
                    right1360 = $tmp1371;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
                }
                if (((panda$core$Bit) { right1360 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1375 = NULL;
                        tmp1021374 = $tmp1375;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1375));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right1360));
                        {
                            tmp1051376 = tmp1021374;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1333));
                            org$pandalanguage$pandac$ASTNode* $tmp1377 = tmp1051376;
                            return $tmp1377;
                        }
                    }
                }
                }
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1378 = right1360;
                    org$pandalanguage$pandac$ASTNode* $tmp1379 = NULL;
                    right1360 = $tmp1379;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1379));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1378));
                }
            }
            }
            memset(&step1380, 0, sizeof(step1380));
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1381, ((panda$core$Int64) { 33 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1382 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1381);
            if (((panda$core$Bit) { $tmp1382.nonnull }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1383 = step1380;
                    org$pandalanguage$pandac$ASTNode* $tmp1386 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    org$pandalanguage$pandac$ASTNode* $tmp1385 = $tmp1386;
                    org$pandalanguage$pandac$ASTNode* $tmp1384 = $tmp1385;
                    step1380 = $tmp1384;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1384));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1383));
                }
                if (((panda$core$Bit) { step1380 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1388 = NULL;
                        tmp1031387 = $tmp1388;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1388));
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step1380));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right1360));
                        }
                        {
                            tmp1061389 = tmp1031387;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1333));
                            org$pandalanguage$pandac$ASTNode* $tmp1390 = tmp1061389;
                            return $tmp1390;
                        }
                    }
                }
                }
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1391 = step1380;
                    org$pandalanguage$pandac$ASTNode* $tmp1392 = NULL;
                    step1380 = $tmp1392;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1392));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1391));
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp1396 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Bit $tmp1397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op1350.kind.$rawValue, ((panda$core$Int64) { 96 }));
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp1396, ((panda$core$Int64) { 30 }), op1350.position, result1333, right1360, $tmp1397, step1380);
                org$pandalanguage$pandac$ASTNode* $tmp1395 = $tmp1396;
                org$pandalanguage$pandac$ASTNode* $tmp1394 = $tmp1395;
                tmp1041393 = $tmp1394;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1395));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step1380));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right1360));
                }
                {
                    tmp1071398 = tmp1041393;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1333));
                    org$pandalanguage$pandac$ASTNode* $tmp1399 = tmp1071398;
                    return $tmp1399;
                }
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1350);
            {
                org$pandalanguage$pandac$ASTNode* $tmp1401 = result1333;
                tmp1081400 = $tmp1401;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1401));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1333));
                org$pandalanguage$pandac$ASTNode* $tmp1402 = tmp1081400;
                return $tmp1402;
            }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1333));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1403;
    org$pandalanguage$pandac$ASTNode* tmp1091407;
    org$pandalanguage$pandac$parser$Token op1412;
    org$pandalanguage$pandac$parser$Token$Kind $match$849_131414;
    org$pandalanguage$pandac$ASTNode* next1444;
    org$pandalanguage$pandac$ASTNode* tmp1101448;
    org$pandalanguage$pandac$ASTNode* tmp1111450;
    org$pandalanguage$pandac$ASTNode* tmp1121456;
    org$pandalanguage$pandac$ASTNode* $tmp1406 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1405 = $tmp1406;
    org$pandalanguage$pandac$ASTNode* $tmp1404 = $tmp1405;
    result1403 = $tmp1404;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1404));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1405));
    if (((panda$core$Bit) { result1403 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1408 = NULL;
            tmp1091407 = $tmp1408;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1408));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1403));
            org$pandalanguage$pandac$ASTNode* $tmp1409 = tmp1091407;
            return $tmp1409;
        }
    }
    }
    $l1410:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1413 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op1412 = $tmp1413;
        {
            $match$849_131414 = op1412.kind;
            panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131414.$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp1421 = $tmp1422.value;
            if ($tmp1421) goto $l1423;
            panda$core$Bit $tmp1424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131414.$rawValue, ((panda$core$Int64) { 59 }));
            $tmp1421 = $tmp1424.value;
            $l1423:;
            panda$core$Bit $tmp1425 = { $tmp1421 };
            bool $tmp1420 = $tmp1425.value;
            if ($tmp1420) goto $l1426;
            panda$core$Bit $tmp1427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131414.$rawValue, ((panda$core$Int64) { 60 }));
            $tmp1420 = $tmp1427.value;
            $l1426:;
            panda$core$Bit $tmp1428 = { $tmp1420 };
            bool $tmp1419 = $tmp1428.value;
            if ($tmp1419) goto $l1429;
            panda$core$Bit $tmp1430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131414.$rawValue, ((panda$core$Int64) { 61 }));
            $tmp1419 = $tmp1430.value;
            $l1429:;
            panda$core$Bit $tmp1431 = { $tmp1419 };
            bool $tmp1418 = $tmp1431.value;
            if ($tmp1418) goto $l1432;
            panda$core$Bit $tmp1433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131414.$rawValue, ((panda$core$Int64) { 62 }));
            $tmp1418 = $tmp1433.value;
            $l1432:;
            panda$core$Bit $tmp1434 = { $tmp1418 };
            bool $tmp1417 = $tmp1434.value;
            if ($tmp1417) goto $l1435;
            panda$core$Bit $tmp1436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131414.$rawValue, ((panda$core$Int64) { 63 }));
            $tmp1417 = $tmp1436.value;
            $l1435:;
            panda$core$Bit $tmp1437 = { $tmp1417 };
            bool $tmp1416 = $tmp1437.value;
            if ($tmp1416) goto $l1438;
            panda$core$Bit $tmp1439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131414.$rawValue, ((panda$core$Int64) { 64 }));
            $tmp1416 = $tmp1439.value;
            $l1438:;
            panda$core$Bit $tmp1440 = { $tmp1416 };
            bool $tmp1415 = $tmp1440.value;
            if ($tmp1415) goto $l1441;
            panda$core$Bit $tmp1442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131414.$rawValue, ((panda$core$Int64) { 65 }));
            $tmp1415 = $tmp1442.value;
            $l1441:;
            panda$core$Bit $tmp1443 = { $tmp1415 };
            if ($tmp1443.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1447 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp1446 = $tmp1447;
                org$pandalanguage$pandac$ASTNode* $tmp1445 = $tmp1446;
                next1444 = $tmp1445;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1445));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1446));
                if (((panda$core$Bit) { next1444 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1449 = NULL;
                        tmp1101448 = $tmp1449;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1449));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1444));
                        {
                            tmp1111450 = tmp1101448;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1403));
                            org$pandalanguage$pandac$ASTNode* $tmp1451 = tmp1111450;
                            return $tmp1451;
                        }
                    }
                }
                }
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1452 = result1403;
                    org$pandalanguage$pandac$ASTNode* $tmp1455 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1455, ((panda$core$Int64) { 2 }), op1412.position, result1403, op1412.kind, next1444);
                    org$pandalanguage$pandac$ASTNode* $tmp1454 = $tmp1455;
                    org$pandalanguage$pandac$ASTNode* $tmp1453 = $tmp1454;
                    result1403 = $tmp1453;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1453));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1454));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1452));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1444));
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1412);
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1457 = result1403;
                    tmp1121456 = $tmp1457;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1457));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1403));
                    org$pandalanguage$pandac$ASTNode* $tmp1458 = tmp1121456;
                    return $tmp1458;
                }
            }
            }
        }
    }
    }
    $l1411:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1403));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1459;
    org$pandalanguage$pandac$ASTNode* tmp1131463;
    org$pandalanguage$pandac$parser$Token op1468;
    org$pandalanguage$pandac$parser$Token$Kind $match$880_131470;
    org$pandalanguage$pandac$ASTNode* next1476;
    org$pandalanguage$pandac$ASTNode* tmp1141480;
    org$pandalanguage$pandac$ASTNode* tmp1151482;
    org$pandalanguage$pandac$ASTNode* tmp1161488;
    org$pandalanguage$pandac$ASTNode* $tmp1462 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1461 = $tmp1462;
    org$pandalanguage$pandac$ASTNode* $tmp1460 = $tmp1461;
    result1459 = $tmp1460;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1460));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1461));
    if (((panda$core$Bit) { result1459 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1464 = NULL;
            tmp1131463 = $tmp1464;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1464));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1459));
            org$pandalanguage$pandac$ASTNode* $tmp1465 = tmp1131463;
            return $tmp1465;
        }
    }
    }
    $l1466:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1469 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op1468 = $tmp1469;
        {
            $match$880_131470 = op1468.kind;
            panda$core$Bit $tmp1472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_131470.$rawValue, ((panda$core$Int64) { 66 }));
            bool $tmp1471 = $tmp1472.value;
            if ($tmp1471) goto $l1473;
            panda$core$Bit $tmp1474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_131470.$rawValue, ((panda$core$Int64) { 70 }));
            $tmp1471 = $tmp1474.value;
            $l1473:;
            panda$core$Bit $tmp1475 = { $tmp1471 };
            if ($tmp1475.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1479 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp1478 = $tmp1479;
                org$pandalanguage$pandac$ASTNode* $tmp1477 = $tmp1478;
                next1476 = $tmp1477;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1477));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1478));
                if (((panda$core$Bit) { next1476 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1481 = NULL;
                        tmp1141480 = $tmp1481;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1481));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1476));
                        {
                            tmp1151482 = tmp1141480;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1459));
                            org$pandalanguage$pandac$ASTNode* $tmp1483 = tmp1151482;
                            return $tmp1483;
                        }
                    }
                }
                }
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1484 = result1459;
                    org$pandalanguage$pandac$ASTNode* $tmp1487 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1487, ((panda$core$Int64) { 2 }), op1468.position, result1459, op1468.kind, next1476);
                    org$pandalanguage$pandac$ASTNode* $tmp1486 = $tmp1487;
                    org$pandalanguage$pandac$ASTNode* $tmp1485 = $tmp1486;
                    result1459 = $tmp1485;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1485));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1486));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1484));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1476));
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1468);
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1489 = result1459;
                    tmp1161488 = $tmp1489;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1489));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1459));
                    org$pandalanguage$pandac$ASTNode* $tmp1490 = tmp1161488;
                    return $tmp1490;
                }
            }
            }
        }
    }
    }
    $l1467:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1459));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1491;
    org$pandalanguage$pandac$ASTNode* tmp1171495;
    org$pandalanguage$pandac$parser$Token$nullable op1500;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1501;
    org$pandalanguage$pandac$ASTNode* next1503;
    org$pandalanguage$pandac$ASTNode* tmp1181507;
    org$pandalanguage$pandac$ASTNode* tmp1191509;
    org$pandalanguage$pandac$ASTNode* tmp1201515;
    org$pandalanguage$pandac$ASTNode* $tmp1494 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1493 = $tmp1494;
    org$pandalanguage$pandac$ASTNode* $tmp1492 = $tmp1493;
    result1491 = $tmp1492;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1492));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
    if (((panda$core$Bit) { result1491 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1496 = NULL;
            tmp1171495 = $tmp1496;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1496));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1491));
            org$pandalanguage$pandac$ASTNode* $tmp1497 = tmp1171495;
            return $tmp1497;
        }
    }
    }
    $l1498:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1501, ((panda$core$Int64) { 68 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1502 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1501);
        op1500 = $tmp1502;
        if (((panda$core$Bit) { !op1500.nonnull }).value) {
        {
            goto $l1499;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1506 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        org$pandalanguage$pandac$ASTNode* $tmp1505 = $tmp1506;
        org$pandalanguage$pandac$ASTNode* $tmp1504 = $tmp1505;
        next1503 = $tmp1504;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1504));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1505));
        if (((panda$core$Bit) { next1503 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1508 = NULL;
                tmp1181507 = $tmp1508;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1508));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1503));
                {
                    tmp1191509 = tmp1181507;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1491));
                    org$pandalanguage$pandac$ASTNode* $tmp1510 = tmp1191509;
                    return $tmp1510;
                }
            }
        }
        }
        {
            org$pandalanguage$pandac$ASTNode* $tmp1511 = result1491;
            org$pandalanguage$pandac$ASTNode* $tmp1514 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1514, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op1500.value).position, result1491, ((org$pandalanguage$pandac$parser$Token) op1500.value).kind, next1503);
            org$pandalanguage$pandac$ASTNode* $tmp1513 = $tmp1514;
            org$pandalanguage$pandac$ASTNode* $tmp1512 = $tmp1513;
            result1491 = $tmp1512;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1512));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1513));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1511));
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1503));
    }
    }
    $l1499:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1516 = result1491;
        tmp1201515 = $tmp1516;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1491));
        org$pandalanguage$pandac$ASTNode* $tmp1517 = tmp1201515;
        return $tmp1517;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1518;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1519;
    org$pandalanguage$pandac$ASTNode* test1524;
    org$pandalanguage$pandac$ASTNode* tmp1211528;
    panda$collections$ImmutableArray* ifTrue1531;
    org$pandalanguage$pandac$ASTNode* tmp1221535;
    org$pandalanguage$pandac$ASTNode* ifFalse1538;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1539;
    org$pandalanguage$pandac$ASTNode* tmp1231547;
    org$pandalanguage$pandac$ASTNode* tmp1241554;
    org$pandalanguage$pandac$ASTNode* tmp1251559;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1519, ((panda$core$Int64) { 36 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1521 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1519, &$s1520);
    start1518 = $tmp1521;
    if (((panda$core$Bit) { !start1518.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1523 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp1522 = $tmp1523;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1523));
        return $tmp1522;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1527 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1526 = $tmp1527;
    org$pandalanguage$pandac$ASTNode* $tmp1525 = $tmp1526;
    test1524 = $tmp1525;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1525));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1526));
    if (((panda$core$Bit) { test1524 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1529 = NULL;
            tmp1211528 = $tmp1529;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1529));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1524));
            org$pandalanguage$pandac$ASTNode* $tmp1530 = tmp1211528;
            return $tmp1530;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1534 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$collections$ImmutableArray* $tmp1533 = $tmp1534;
    panda$collections$ImmutableArray* $tmp1532 = $tmp1533;
    ifTrue1531 = $tmp1532;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1532));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
    if (((panda$core$Bit) { ifTrue1531 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1536 = NULL;
            tmp1221535 = $tmp1536;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1536));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1531));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1524));
            }
            org$pandalanguage$pandac$ASTNode* $tmp1537 = tmp1221535;
            return $tmp1537;
        }
    }
    }
    memset(&ifFalse1538, 0, sizeof(ifFalse1538));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1539, ((panda$core$Int64) { 37 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1540 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1539);
    if (((panda$core$Bit) { $tmp1540.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1541 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1541.kind.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1542.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1543 = ifFalse1538;
                org$pandalanguage$pandac$ASTNode* $tmp1546 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp1545 = $tmp1546;
                org$pandalanguage$pandac$ASTNode* $tmp1544 = $tmp1545;
                ifFalse1538 = $tmp1544;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1544));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1545));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1543));
            }
            if (((panda$core$Bit) { ifFalse1538 == NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1548 = NULL;
                    tmp1231547 = $tmp1548;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1548));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1531));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1524));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1538));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1549 = tmp1231547;
                    return $tmp1549;
                }
            }
            }
        }
        }
        else {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1550 = ifFalse1538;
                org$pandalanguage$pandac$ASTNode* $tmp1553 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp1552 = $tmp1553;
                org$pandalanguage$pandac$ASTNode* $tmp1551 = $tmp1552;
                ifFalse1538 = $tmp1551;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1551));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1552));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1550));
            }
            if (((panda$core$Bit) { ifFalse1538 == NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1555 = NULL;
                    tmp1241554 = $tmp1555;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1555));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1531));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1524));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1538));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1556 = tmp1241554;
                    return $tmp1556;
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
            org$pandalanguage$pandac$ASTNode* $tmp1557 = ifFalse1538;
            org$pandalanguage$pandac$ASTNode* $tmp1558 = NULL;
            ifFalse1538 = $tmp1558;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1558));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1557));
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1562 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1562, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1518.value).position, test1524, ifTrue1531, ifFalse1538);
        org$pandalanguage$pandac$ASTNode* $tmp1561 = $tmp1562;
        org$pandalanguage$pandac$ASTNode* $tmp1560 = $tmp1561;
        tmp1251559 = $tmp1560;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1560));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1561));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1531));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1524));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1538));
        }
        org$pandalanguage$pandac$ASTNode* $tmp1563 = tmp1251559;
        return $tmp1563;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1564;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1564, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1566 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1564, &$s1565);
    if (((panda$core$Bit) { !$tmp1566.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1568 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp1567 = $tmp1568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1568));
        return $tmp1567;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1572 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    org$pandalanguage$pandac$ASTNode* $tmp1571 = $tmp1572;
    org$pandalanguage$pandac$ASTNode* $tmp1570 = $tmp1571;
    org$pandalanguage$pandac$ASTNode* $tmp1569 = $tmp1570;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1570));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
    return $tmp1569;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1573;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1574;
    org$pandalanguage$pandac$ASTNode* type1581;
    org$pandalanguage$pandac$ASTNode* tmp1261585;
    org$pandalanguage$pandac$ASTNode* tmp1271588;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1574, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1576 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1574, &$s1575);
    id1573 = $tmp1576;
    if (((panda$core$Bit) { !id1573.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1578 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp1577 = $tmp1578;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1578));
        return $tmp1577;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1579 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1579.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1580.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1584 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        org$pandalanguage$pandac$ASTNode* $tmp1583 = $tmp1584;
        org$pandalanguage$pandac$ASTNode* $tmp1582 = $tmp1583;
        type1581 = $tmp1582;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1582));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1583));
        if (((panda$core$Bit) { type1581 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1586 = NULL;
                tmp1261585 = $tmp1586;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1586));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1581));
                org$pandalanguage$pandac$ASTNode* $tmp1587 = tmp1261585;
                return $tmp1587;
            }
        }
        }
        {
            org$pandalanguage$pandac$ASTNode* $tmp1591 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1593 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1573.value));
            panda$core$String* $tmp1592 = $tmp1593;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1591, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) id1573.value).position, $tmp1592, type1581);
            org$pandalanguage$pandac$ASTNode* $tmp1590 = $tmp1591;
            org$pandalanguage$pandac$ASTNode* $tmp1589 = $tmp1590;
            tmp1271588 = $tmp1589;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1589));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1592));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1581));
            org$pandalanguage$pandac$ASTNode* $tmp1594 = tmp1271588;
            return $tmp1594;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1598 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp1600 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1573.value));
    panda$core$String* $tmp1599 = $tmp1600;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1598, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1573.value).position, $tmp1599);
    org$pandalanguage$pandac$ASTNode* $tmp1597 = $tmp1598;
    org$pandalanguage$pandac$ASTNode* $tmp1596 = $tmp1597;
    org$pandalanguage$pandac$ASTNode* $tmp1595 = $tmp1596;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1596));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1597));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1599));
    return $tmp1595;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1601;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1602;
    org$pandalanguage$pandac$ASTNode* t1607;
    org$pandalanguage$pandac$ASTNode* tmp1281611;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1614;
    org$pandalanguage$pandac$ASTNode* tmp1291617;
    org$pandalanguage$pandac$ASTNode* list1620;
    org$pandalanguage$pandac$ASTNode* tmp1301624;
    panda$collections$ImmutableArray* block1627;
    org$pandalanguage$pandac$ASTNode* tmp1311631;
    org$pandalanguage$pandac$ASTNode* tmp1321634;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1602, ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1604 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1602, &$s1603);
    start1601 = $tmp1604;
    if (((panda$core$Bit) { !start1601.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1606 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp1605 = $tmp1606;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1606));
        return $tmp1605;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1610 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1609 = $tmp1610;
    org$pandalanguage$pandac$ASTNode* $tmp1608 = $tmp1609;
    t1607 = $tmp1608;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1608));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1609));
    if (((panda$core$Bit) { t1607 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1612 = NULL;
            tmp1281611 = $tmp1612;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1607));
            org$pandalanguage$pandac$ASTNode* $tmp1613 = tmp1281611;
            return $tmp1613;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1614, ((panda$core$Int64) { 34 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1616 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1614, &$s1615);
    if (((panda$core$Bit) { !$tmp1616.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1618 = NULL;
            tmp1291617 = $tmp1618;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1618));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1607));
            org$pandalanguage$pandac$ASTNode* $tmp1619 = tmp1291617;
            return $tmp1619;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1623 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1622 = $tmp1623;
    org$pandalanguage$pandac$ASTNode* $tmp1621 = $tmp1622;
    list1620 = $tmp1621;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1621));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1622));
    if (((panda$core$Bit) { list1620 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1625 = NULL;
            tmp1301624 = $tmp1625;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1625));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1620));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1607));
            }
            org$pandalanguage$pandac$ASTNode* $tmp1626 = tmp1301624;
            return $tmp1626;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1630 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$collections$ImmutableArray* $tmp1629 = $tmp1630;
    panda$collections$ImmutableArray* $tmp1628 = $tmp1629;
    block1627 = $tmp1628;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1628));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1629));
    if (((panda$core$Bit) { block1627 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1632 = NULL;
            tmp1311631 = $tmp1632;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1632));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1620));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1607));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1627));
            }
            org$pandalanguage$pandac$ASTNode* $tmp1633 = tmp1311631;
            return $tmp1633;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1637 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1637, ((panda$core$Int64) { 16 }), ((org$pandalanguage$pandac$parser$Token) start1601.value).position, p_label, t1607, list1620, block1627);
        org$pandalanguage$pandac$ASTNode* $tmp1636 = $tmp1637;
        org$pandalanguage$pandac$ASTNode* $tmp1635 = $tmp1636;
        tmp1321634 = $tmp1635;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1636));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1620));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1607));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1627));
        }
        org$pandalanguage$pandac$ASTNode* $tmp1638 = tmp1321634;
        return $tmp1638;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1639;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1640;
    org$pandalanguage$pandac$ASTNode* test1645;
    org$pandalanguage$pandac$ASTNode* tmp1331649;
    panda$collections$ImmutableArray* body1652;
    org$pandalanguage$pandac$ASTNode* tmp1341656;
    org$pandalanguage$pandac$ASTNode* tmp1351659;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1640, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1642 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1640, &$s1641);
    start1639 = $tmp1642;
    if (((panda$core$Bit) { !start1639.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1644 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp1643 = $tmp1644;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1644));
        return $tmp1643;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1648 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1647 = $tmp1648;
    org$pandalanguage$pandac$ASTNode* $tmp1646 = $tmp1647;
    test1645 = $tmp1646;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1646));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1647));
    if (((panda$core$Bit) { test1645 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1650 = NULL;
            tmp1331649 = $tmp1650;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1650));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1645));
            org$pandalanguage$pandac$ASTNode* $tmp1651 = tmp1331649;
            return $tmp1651;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1655 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$collections$ImmutableArray* $tmp1654 = $tmp1655;
    panda$collections$ImmutableArray* $tmp1653 = $tmp1654;
    body1652 = $tmp1653;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1653));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1654));
    if (((panda$core$Bit) { body1652 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1657 = NULL;
            tmp1341656 = $tmp1657;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1657));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1652));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1645));
            }
            org$pandalanguage$pandac$ASTNode* $tmp1658 = tmp1341656;
            return $tmp1658;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1662 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1662, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) start1639.value).position, p_label, test1645, body1652);
        org$pandalanguage$pandac$ASTNode* $tmp1661 = $tmp1662;
        org$pandalanguage$pandac$ASTNode* $tmp1660 = $tmp1661;
        tmp1351659 = $tmp1660;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1660));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1661));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1652));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1645));
        }
        org$pandalanguage$pandac$ASTNode* $tmp1663 = tmp1351659;
        return $tmp1663;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1664;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1665;
    panda$collections$ImmutableArray* body1670;
    org$pandalanguage$pandac$ASTNode* tmp1361674;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1677;
    org$pandalanguage$pandac$ASTNode* tmp1371680;
    org$pandalanguage$pandac$ASTNode* test1683;
    org$pandalanguage$pandac$ASTNode* tmp1381687;
    org$pandalanguage$pandac$ASTNode* tmp1391690;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1665, ((panda$core$Int64) { 30 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1667 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1665, &$s1666);
    start1664 = $tmp1667;
    if (((panda$core$Bit) { !start1664.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1669 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp1668 = $tmp1669;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1669));
        return $tmp1668;
    }
    }
    panda$collections$ImmutableArray* $tmp1673 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$collections$ImmutableArray* $tmp1672 = $tmp1673;
    panda$collections$ImmutableArray* $tmp1671 = $tmp1672;
    body1670 = $tmp1671;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1671));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1672));
    if (((panda$core$Bit) { body1670 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1675 = NULL;
            tmp1361674 = $tmp1675;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1675));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1670));
            org$pandalanguage$pandac$ASTNode* $tmp1676 = tmp1361674;
            return $tmp1676;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1677, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1679 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1677, &$s1678);
    if (((panda$core$Bit) { !$tmp1679.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1681 = NULL;
            tmp1371680 = $tmp1681;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1681));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1670));
            org$pandalanguage$pandac$ASTNode* $tmp1682 = tmp1371680;
            return $tmp1682;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1686 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1685 = $tmp1686;
    org$pandalanguage$pandac$ASTNode* $tmp1684 = $tmp1685;
    test1683 = $tmp1684;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1684));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1685));
    if (((panda$core$Bit) { test1683 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1688 = NULL;
            tmp1381687 = $tmp1688;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1688));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1670));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1683));
            }
            org$pandalanguage$pandac$ASTNode* $tmp1689 = tmp1381687;
            return $tmp1689;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1693 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1693, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start1664.value).position, p_label, body1670, test1683);
        org$pandalanguage$pandac$ASTNode* $tmp1692 = $tmp1693;
        org$pandalanguage$pandac$ASTNode* $tmp1691 = $tmp1692;
        tmp1391690 = $tmp1691;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1691));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1692));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1670));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1683));
        }
        org$pandalanguage$pandac$ASTNode* $tmp1694 = tmp1391690;
        return $tmp1694;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1695;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1696;
    panda$collections$ImmutableArray* body1701;
    org$pandalanguage$pandac$ASTNode* tmp1401705;
    org$pandalanguage$pandac$ASTNode* tmp1411708;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1696, ((panda$core$Int64) { 35 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1698 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1696, &$s1697);
    start1695 = $tmp1698;
    if (((panda$core$Bit) { !start1695.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1700 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp1699 = $tmp1700;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1700));
        return $tmp1699;
    }
    }
    panda$collections$ImmutableArray* $tmp1704 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$collections$ImmutableArray* $tmp1703 = $tmp1704;
    panda$collections$ImmutableArray* $tmp1702 = $tmp1703;
    body1701 = $tmp1702;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1702));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1703));
    if (((panda$core$Bit) { body1701 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1706 = NULL;
            tmp1401705 = $tmp1706;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1706));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1701));
            org$pandalanguage$pandac$ASTNode* $tmp1707 = tmp1401705;
            return $tmp1707;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1711 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1711, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1695.value).position, p_label, body1701);
        org$pandalanguage$pandac$ASTNode* $tmp1710 = $tmp1711;
        org$pandalanguage$pandac$ASTNode* $tmp1709 = $tmp1710;
        tmp1411708 = $tmp1709;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1709));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1710));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1701));
        org$pandalanguage$pandac$ASTNode* $tmp1712 = tmp1411708;
        return $tmp1712;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1713;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1714;
    org$pandalanguage$pandac$ASTNode* expr1719;
    org$pandalanguage$pandac$ASTNode* tmp1421723;
    org$pandalanguage$pandac$ASTNode* message1726;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1727;
    org$pandalanguage$pandac$ASTNode* tmp1431733;
    org$pandalanguage$pandac$ASTNode* tmp1441738;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1714, ((panda$core$Int64) { 44 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1716 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1714, &$s1715);
    start1713 = $tmp1716;
    if (((panda$core$Bit) { !start1713.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1718 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp1717 = $tmp1718;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1718));
        return $tmp1717;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1722 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1721 = $tmp1722;
    org$pandalanguage$pandac$ASTNode* $tmp1720 = $tmp1721;
    expr1719 = $tmp1720;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1720));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1721));
    if (((panda$core$Bit) { expr1719 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1724 = NULL;
            tmp1421723 = $tmp1724;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1724));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1719));
            org$pandalanguage$pandac$ASTNode* $tmp1725 = tmp1421723;
            return $tmp1725;
        }
    }
    }
    memset(&message1726, 0, sizeof(message1726));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1727, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1728 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1727);
    if (((panda$core$Bit) { $tmp1728.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1729 = message1726;
            org$pandalanguage$pandac$ASTNode* $tmp1732 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp1731 = $tmp1732;
            org$pandalanguage$pandac$ASTNode* $tmp1730 = $tmp1731;
            message1726 = $tmp1730;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1730));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1731));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1729));
        }
        if (((panda$core$Bit) { message1726 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1734 = NULL;
                tmp1431733 = $tmp1734;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1734));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message1726));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1719));
                }
                org$pandalanguage$pandac$ASTNode* $tmp1735 = tmp1431733;
                return $tmp1735;
            }
        }
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1736 = message1726;
            org$pandalanguage$pandac$ASTNode* $tmp1737 = NULL;
            message1726 = $tmp1737;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1737));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1741 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1741, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start1713.value).position, expr1719, message1726);
        org$pandalanguage$pandac$ASTNode* $tmp1740 = $tmp1741;
        org$pandalanguage$pandac$ASTNode* $tmp1739 = $tmp1740;
        tmp1441738 = $tmp1739;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1739));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1740));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message1726));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1719));
        }
        org$pandalanguage$pandac$ASTNode* $tmp1742 = tmp1441738;
        return $tmp1742;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1743;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1744;
    panda$collections$Array* expressions1749;
    org$pandalanguage$pandac$ASTNode* expr1753;
    org$pandalanguage$pandac$ASTNode* tmp1451757;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1763;
    org$pandalanguage$pandac$ASTNode* tmp1461769;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1772;
    org$pandalanguage$pandac$ASTNode* tmp1471775;
    panda$collections$Array* statements1778;
    org$pandalanguage$pandac$parser$Token$Kind $match$1114_131784;
    org$pandalanguage$pandac$ASTNode* stmt1804;
    org$pandalanguage$pandac$ASTNode* tmp1481808;
    org$pandalanguage$pandac$ASTNode* tmp1501810;
    org$pandalanguage$pandac$ASTNode* stmt1812;
    org$pandalanguage$pandac$ASTNode* tmp1491816;
    org$pandalanguage$pandac$ASTNode* tmp1511818;
    org$pandalanguage$pandac$ASTNode* tmp1521820;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1744, ((panda$core$Int64) { 39 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1746 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1744, &$s1745);
    start1743 = $tmp1746;
    if (((panda$core$Bit) { !start1743.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1748 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp1747 = $tmp1748;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1748));
        return $tmp1747;
    }
    }
    panda$collections$Array* $tmp1752 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1752);
    panda$collections$Array* $tmp1751 = $tmp1752;
    panda$collections$Array* $tmp1750 = $tmp1751;
    expressions1749 = $tmp1750;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1750));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1751));
    org$pandalanguage$pandac$ASTNode* $tmp1756 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1755 = $tmp1756;
    org$pandalanguage$pandac$ASTNode* $tmp1754 = $tmp1755;
    expr1753 = $tmp1754;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1754));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1755));
    if (((panda$core$Bit) { expr1753 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1758 = NULL;
            tmp1451757 = $tmp1758;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1758));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1749));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1753));
            }
            org$pandalanguage$pandac$ASTNode* $tmp1759 = tmp1451757;
            return $tmp1759;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions1749, ((panda$core$Object*) expr1753));
    $l1760:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1763, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1764 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1763);
    bool $tmp1762 = ((panda$core$Bit) { $tmp1764.nonnull }).value;
    if (!$tmp1762) goto $l1761;
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1765 = expr1753;
            org$pandalanguage$pandac$ASTNode* $tmp1768 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp1767 = $tmp1768;
            org$pandalanguage$pandac$ASTNode* $tmp1766 = $tmp1767;
            expr1753 = $tmp1766;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1766));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1767));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
        }
        if (((panda$core$Bit) { expr1753 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1770 = NULL;
                tmp1461769 = $tmp1770;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1770));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1749));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1753));
                }
                org$pandalanguage$pandac$ASTNode* $tmp1771 = tmp1461769;
                return $tmp1771;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions1749, ((panda$core$Object*) expr1753));
    }
    goto $l1760;
    $l1761:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1772, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1774 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1772, &$s1773);
    if (((panda$core$Bit) { !$tmp1774.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1776 = NULL;
            tmp1471775 = $tmp1776;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1776));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1749));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1753));
            }
            org$pandalanguage$pandac$ASTNode* $tmp1777 = tmp1471775;
            return $tmp1777;
        }
    }
    }
    panda$collections$Array* $tmp1781 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1781);
    panda$collections$Array* $tmp1780 = $tmp1781;
    panda$collections$Array* $tmp1779 = $tmp1780;
    statements1778 = $tmp1779;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1779));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1780));
    $l1782:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1785 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1114_131784 = $tmp1785.kind;
            panda$core$Bit $tmp1788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131784.$rawValue, ((panda$core$Int64) { 39 }));
            bool $tmp1787 = $tmp1788.value;
            if ($tmp1787) goto $l1789;
            panda$core$Bit $tmp1790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131784.$rawValue, ((panda$core$Int64) { 40 }));
            $tmp1787 = $tmp1790.value;
            $l1789:;
            panda$core$Bit $tmp1791 = { $tmp1787 };
            bool $tmp1786 = $tmp1791.value;
            if ($tmp1786) goto $l1792;
            panda$core$Bit $tmp1793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131784.$rawValue, ((panda$core$Int64) { 100 }));
            $tmp1786 = $tmp1793.value;
            $l1792:;
            panda$core$Bit $tmp1794 = { $tmp1786 };
            if ($tmp1794.value) {
            {
                goto $l1783;
            }
            }
            else {
            panda$core$Bit $tmp1797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131784.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1796 = $tmp1797.value;
            if ($tmp1796) goto $l1798;
            panda$core$Bit $tmp1799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131784.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1796 = $tmp1799.value;
            $l1798:;
            panda$core$Bit $tmp1800 = { $tmp1796 };
            bool $tmp1795 = $tmp1800.value;
            if ($tmp1795) goto $l1801;
            panda$core$Bit $tmp1802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131784.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1795 = $tmp1802.value;
            $l1801:;
            panda$core$Bit $tmp1803 = { $tmp1795 };
            if ($tmp1803.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1807 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp1806 = $tmp1807;
                org$pandalanguage$pandac$ASTNode* $tmp1805 = $tmp1806;
                stmt1804 = $tmp1805;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1805));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1806));
                if (((panda$core$Bit) { stmt1804 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1809 = NULL;
                        tmp1481808 = $tmp1809;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1809));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1804));
                        {
                            tmp1501810 = tmp1481808;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1749));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1778));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1753));
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp1811 = tmp1501810;
                            return $tmp1811;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(statements1778, ((panda$core$Object*) stmt1804));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1804));
                    goto $l1783;
                }
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1815 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    org$pandalanguage$pandac$ASTNode* $tmp1814 = $tmp1815;
                    org$pandalanguage$pandac$ASTNode* $tmp1813 = $tmp1814;
                    stmt1812 = $tmp1813;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1813));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1814));
                    if (((panda$core$Bit) { stmt1812 == NULL }).value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1817 = NULL;
                            tmp1491816 = $tmp1817;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1817));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1812));
                            {
                                tmp1511818 = tmp1491816;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1749));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1778));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1753));
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1819 = tmp1511818;
                                return $tmp1819;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(statements1778, ((panda$core$Object*) stmt1812));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1812));
                }
            }
            }
            }
        }
    }
    }
    $l1783:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1823 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp1825 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions1749);
        panda$collections$ImmutableArray* $tmp1824 = $tmp1825;
        panda$collections$ImmutableArray* $tmp1827 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements1778);
        panda$collections$ImmutableArray* $tmp1826 = $tmp1827;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1823, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start1743.value).position, $tmp1824, $tmp1826);
        org$pandalanguage$pandac$ASTNode* $tmp1822 = $tmp1823;
        org$pandalanguage$pandac$ASTNode* $tmp1821 = $tmp1822;
        tmp1521820 = $tmp1821;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1821));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1822));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1826));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1749));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1778));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1753));
        }
        org$pandalanguage$pandac$ASTNode* $tmp1828 = tmp1521820;
        return $tmp1828;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1829;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1830;
    org$pandalanguage$pandac$ASTNode* expr1835;
    org$pandalanguage$pandac$ASTNode* tmp1531839;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1842;
    org$pandalanguage$pandac$ASTNode* tmp1541845;
    panda$collections$Array* whens1848;
    panda$collections$Array* other1852;
    org$pandalanguage$pandac$parser$Token token1856;
    org$pandalanguage$pandac$parser$Token$Kind $match$1155_131858;
    org$pandalanguage$pandac$ASTNode* w1861;
    org$pandalanguage$pandac$ASTNode* tmp1551865;
    org$pandalanguage$pandac$ASTNode* tmp1581867;
    org$pandalanguage$pandac$parser$Token o1870;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1872;
    org$pandalanguage$pandac$ASTNode* tmp1591875;
    org$pandalanguage$pandac$parser$Token$Kind $match$1171_251884;
    org$pandalanguage$pandac$ASTNode* stmt1896;
    org$pandalanguage$pandac$ASTNode* tmp1561900;
    org$pandalanguage$pandac$ASTNode* tmp1601902;
    org$pandalanguage$pandac$ASTNode* stmt1904;
    org$pandalanguage$pandac$ASTNode* tmp1571908;
    org$pandalanguage$pandac$ASTNode* tmp1611910;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1923;
    org$pandalanguage$pandac$ASTNode* tmp1621926;
    org$pandalanguage$pandac$ASTNode* tmp1631929;
    org$pandalanguage$pandac$ASTNode* tmp1641938;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1830, ((panda$core$Int64) { 38 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1832 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1830, &$s1831);
    start1829 = $tmp1832;
    if (((panda$core$Bit) { !start1829.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1834 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp1833 = $tmp1834;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1834));
        return $tmp1833;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1838 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp1837 = $tmp1838;
    org$pandalanguage$pandac$ASTNode* $tmp1836 = $tmp1837;
    expr1835 = $tmp1836;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1836));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1837));
    if (((panda$core$Bit) { expr1835 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1840 = NULL;
            tmp1531839 = $tmp1840;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1840));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1835));
            org$pandalanguage$pandac$ASTNode* $tmp1841 = tmp1531839;
            return $tmp1841;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1842, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1844 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1842, &$s1843);
    if (((panda$core$Bit) { !$tmp1844.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1846 = NULL;
            tmp1541845 = $tmp1846;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1846));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1835));
            org$pandalanguage$pandac$ASTNode* $tmp1847 = tmp1541845;
            return $tmp1847;
        }
    }
    }
    panda$collections$Array* $tmp1851 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1851);
    panda$collections$Array* $tmp1850 = $tmp1851;
    panda$collections$Array* $tmp1849 = $tmp1850;
    whens1848 = $tmp1849;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1849));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1850));
    panda$collections$Array* $tmp1853 = NULL;
    other1852 = $tmp1853;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1853));
    $l1854:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1857 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token1856 = $tmp1857;
        {
            $match$1155_131858 = token1856.kind;
            panda$core$Bit $tmp1859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131858.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1859.value) {
            {
                goto $l1855;
            }
            }
            else {
            panda$core$Bit $tmp1860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131858.$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1860.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1864 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp1863 = $tmp1864;
                org$pandalanguage$pandac$ASTNode* $tmp1862 = $tmp1863;
                w1861 = $tmp1862;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1862));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1863));
                if (((panda$core$Bit) { w1861 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1866 = NULL;
                        tmp1551865 = $tmp1866;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1866));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1861));
                        {
                            tmp1581867 = tmp1551865;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1848));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1852));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1835));
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp1868 = tmp1581867;
                            return $tmp1868;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(whens1848, ((panda$core$Object*) w1861));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1861));
            }
            }
            else {
            panda$core$Bit $tmp1869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131858.$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1869.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1871 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o1870 = $tmp1871;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1872, ((panda$core$Int64) { 95 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1874 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1872, &$s1873);
                if (((panda$core$Bit) { !$tmp1874.nonnull }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1876 = NULL;
                        tmp1591875 = $tmp1876;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1876));
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1848));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1852));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1835));
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1877 = tmp1591875;
                        return $tmp1877;
                    }
                }
                }
                {
                    panda$collections$Array* $tmp1878 = other1852;
                    panda$collections$Array* $tmp1881 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1881);
                    panda$collections$Array* $tmp1880 = $tmp1881;
                    panda$collections$Array* $tmp1879 = $tmp1880;
                    other1852 = $tmp1879;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1879));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1880));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1878));
                }
                $l1882:;
                while (true) {
                {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp1885 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        $match$1171_251884 = $tmp1885.kind;
                        panda$core$Bit $tmp1886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251884.$rawValue, ((panda$core$Int64) { 100 }));
                        if ($tmp1886.value) {
                        {
                            goto $l1883;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251884.$rawValue, ((panda$core$Int64) { 28 }));
                        bool $tmp1888 = $tmp1889.value;
                        if ($tmp1888) goto $l1890;
                        panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251884.$rawValue, ((panda$core$Int64) { 29 }));
                        $tmp1888 = $tmp1891.value;
                        $l1890:;
                        panda$core$Bit $tmp1892 = { $tmp1888 };
                        bool $tmp1887 = $tmp1892.value;
                        if ($tmp1887) goto $l1893;
                        panda$core$Bit $tmp1894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251884.$rawValue, ((panda$core$Int64) { 27 }));
                        $tmp1887 = $tmp1894.value;
                        $l1893:;
                        panda$core$Bit $tmp1895 = { $tmp1887 };
                        if ($tmp1895.value) {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1899 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            org$pandalanguage$pandac$ASTNode* $tmp1898 = $tmp1899;
                            org$pandalanguage$pandac$ASTNode* $tmp1897 = $tmp1898;
                            stmt1896 = $tmp1897;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1897));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1898));
                            if (((panda$core$Bit) { stmt1896 == NULL }).value) {
                            {
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp1901 = NULL;
                                    tmp1561900 = $tmp1901;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1901));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1896));
                                    {
                                        tmp1601902 = tmp1561900;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1848));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1852));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1835));
                                        }
                                        org$pandalanguage$pandac$ASTNode* $tmp1903 = tmp1601902;
                                        return $tmp1903;
                                    }
                                }
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1852, ((panda$core$Object*) stmt1896));
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1896));
                                goto $l1883;
                            }
                        }
                        }
                        else {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1907 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            org$pandalanguage$pandac$ASTNode* $tmp1906 = $tmp1907;
                            org$pandalanguage$pandac$ASTNode* $tmp1905 = $tmp1906;
                            stmt1904 = $tmp1905;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1905));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1906));
                            if (((panda$core$Bit) { stmt1904 == NULL }).value) {
                            {
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp1909 = NULL;
                                    tmp1571908 = $tmp1909;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1909));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1904));
                                    {
                                        tmp1611910 = tmp1571908;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1848));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1852));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1835));
                                        }
                                        org$pandalanguage$pandac$ASTNode* $tmp1911 = tmp1611910;
                                        return $tmp1911;
                                    }
                                }
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1852, ((panda$core$Object*) stmt1904));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1904));
                        }
                        }
                        }
                    }
                }
                }
                $l1883:;
                goto $l1855;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp1918 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1856);
                panda$core$String* $tmp1917 = $tmp1918;
                panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1916, $tmp1917);
                panda$core$String* $tmp1915 = $tmp1919;
                panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, &$s1920);
                panda$core$String* $tmp1914 = $tmp1921;
                panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1913, $tmp1914);
                panda$core$String* $tmp1912 = $tmp1922;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token1856, $tmp1912);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1912));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1914));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1915));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1917));
            }
            }
            }
            }
        }
    }
    }
    $l1855:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1923, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1925 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1923, &$s1924);
    if (((panda$core$Bit) { !$tmp1925.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1927 = NULL;
            tmp1621926 = $tmp1927;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1927));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1848));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1852));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1835));
            }
            org$pandalanguage$pandac$ASTNode* $tmp1928 = tmp1621926;
            return $tmp1928;
        }
    }
    }
    if (((panda$core$Bit) { other1852 != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1932 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp1934 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1848);
            panda$collections$ImmutableArray* $tmp1933 = $tmp1934;
            panda$collections$ImmutableArray* $tmp1936 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other1852);
            panda$collections$ImmutableArray* $tmp1935 = $tmp1936;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1932, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1829.value).position, expr1835, $tmp1933, $tmp1935);
            org$pandalanguage$pandac$ASTNode* $tmp1931 = $tmp1932;
            org$pandalanguage$pandac$ASTNode* $tmp1930 = $tmp1931;
            tmp1631929 = $tmp1930;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1930));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1931));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1935));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1933));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1848));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1852));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1835));
            }
            org$pandalanguage$pandac$ASTNode* $tmp1937 = tmp1631929;
            return $tmp1937;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1941 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp1943 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1848);
        panda$collections$ImmutableArray* $tmp1942 = $tmp1943;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1941, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1829.value).position, expr1835, $tmp1942, NULL);
        org$pandalanguage$pandac$ASTNode* $tmp1940 = $tmp1941;
        org$pandalanguage$pandac$ASTNode* $tmp1939 = $tmp1940;
        tmp1641938 = $tmp1939;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1939));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1940));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1942));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1848));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1852));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1835));
        }
        org$pandalanguage$pandac$ASTNode* $tmp1944 = tmp1641938;
        return $tmp1944;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1945;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1946;
    panda$collections$Array* result1951;
    org$pandalanguage$pandac$parser$Token$Kind $match$1215_131957;
    org$pandalanguage$pandac$ASTNode* stmt1969;
    panda$collections$ImmutableArray* tmp1651973;
    panda$collections$ImmutableArray* tmp1681975;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1977;
    panda$collections$ImmutableArray* tmp1661980;
    panda$collections$ImmutableArray* tmp1691982;
    org$pandalanguage$pandac$ASTNode* stmt1984;
    panda$collections$ImmutableArray* tmp1671988;
    panda$collections$ImmutableArray* tmp1701990;
    panda$collections$ImmutableArray* tmp1711992;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1946, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1948 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1946, &$s1947);
    start1945 = $tmp1948;
    if (((panda$core$Bit) { !start1945.nonnull }).value) {
    {
        panda$collections$ImmutableArray* $tmp1950 = NULL;
        panda$collections$ImmutableArray* $tmp1949 = $tmp1950;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1950));
        return $tmp1949;
    }
    }
    panda$collections$Array* $tmp1954 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1954);
    panda$collections$Array* $tmp1953 = $tmp1954;
    panda$collections$Array* $tmp1952 = $tmp1953;
    result1951 = $tmp1952;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1952));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1953));
    $l1955:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1958 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1215_131957 = $tmp1958.kind;
            panda$core$Bit $tmp1959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131957.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1959.value) {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l1956;
            }
            }
            else {
            panda$core$Bit $tmp1962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131957.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1961 = $tmp1962.value;
            if ($tmp1961) goto $l1963;
            panda$core$Bit $tmp1964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131957.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1961 = $tmp1964.value;
            $l1963:;
            panda$core$Bit $tmp1965 = { $tmp1961 };
            bool $tmp1960 = $tmp1965.value;
            if ($tmp1960) goto $l1966;
            panda$core$Bit $tmp1967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131957.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1960 = $tmp1967.value;
            $l1966:;
            panda$core$Bit $tmp1968 = { $tmp1960 };
            if ($tmp1968.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1972 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp1971 = $tmp1972;
                org$pandalanguage$pandac$ASTNode* $tmp1970 = $tmp1971;
                stmt1969 = $tmp1970;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1970));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1971));
                if (((panda$core$Bit) { stmt1969 == NULL }).value) {
                {
                    {
                        panda$collections$ImmutableArray* $tmp1974 = NULL;
                        tmp1651973 = $tmp1974;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1974));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1969));
                        {
                            tmp1681975 = tmp1651973;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1951));
                            panda$collections$ImmutableArray* $tmp1976 = tmp1681975;
                            return $tmp1976;
                        }
                    }
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1977, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1979 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1977, &$s1978);
                if (((panda$core$Bit) { !$tmp1979.nonnull }).value) {
                {
                    {
                        panda$collections$ImmutableArray* $tmp1981 = NULL;
                        tmp1661980 = $tmp1981;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1981));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1969));
                        {
                            tmp1691982 = tmp1661980;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1951));
                            panda$collections$ImmutableArray* $tmp1983 = tmp1691982;
                            return $tmp1983;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1951, ((panda$core$Object*) stmt1969));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1969));
                    goto $l1956;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1987 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp1986 = $tmp1987;
                org$pandalanguage$pandac$ASTNode* $tmp1985 = $tmp1986;
                stmt1984 = $tmp1985;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1985));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1986));
                if (((panda$core$Bit) { stmt1984 == NULL }).value) {
                {
                    {
                        panda$collections$ImmutableArray* $tmp1989 = NULL;
                        tmp1671988 = $tmp1989;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1989));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1984));
                        {
                            tmp1701990 = tmp1671988;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1951));
                            panda$collections$ImmutableArray* $tmp1991 = tmp1701990;
                            return $tmp1991;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1951, ((panda$core$Object*) stmt1984));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1984));
            }
            }
            }
        }
    }
    }
    $l1956:;
    {
        panda$collections$ImmutableArray* $tmp1995 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1951);
        panda$collections$ImmutableArray* $tmp1994 = $tmp1995;
        panda$collections$ImmutableArray* $tmp1993 = $tmp1994;
        tmp1711992 = $tmp1993;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1993));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1994));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1951));
        panda$collections$ImmutableArray* $tmp1996 = tmp1711992;
        return $tmp1996;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements1997;
    org$pandalanguage$pandac$ASTNode* tmp1722001;
    org$pandalanguage$pandac$ASTNode* tmp1732004;
    org$pandalanguage$pandac$Position $tmp2008;
    panda$collections$ImmutableArray* $tmp2000 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$collections$ImmutableArray* $tmp1999 = $tmp2000;
    panda$collections$ImmutableArray* $tmp1998 = $tmp1999;
    statements1997 = $tmp1998;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1998));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1999));
    if (((panda$core$Bit) { statements1997 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2002 = NULL;
            tmp1722001 = $tmp2002;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2002));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1997));
            org$pandalanguage$pandac$ASTNode* $tmp2003 = tmp1722001;
            return $tmp2003;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp2007 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position$init(&$tmp2008);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2007, ((panda$core$Int64) { 4 }), $tmp2008, statements1997);
        org$pandalanguage$pandac$ASTNode* $tmp2006 = $tmp2007;
        org$pandalanguage$pandac$ASTNode* $tmp2005 = $tmp2006;
        tmp1732004 = $tmp2005;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2005));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2006));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1997));
        org$pandalanguage$pandac$ASTNode* $tmp2009 = tmp1732004;
        return $tmp2009;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start2010;
    org$pandalanguage$pandac$ASTNode* tmp1742014;
    org$pandalanguage$pandac$parser$Token$Kind $match$1259_92017;
    org$pandalanguage$pandac$parser$Token op2080;
    org$pandalanguage$pandac$ASTNode* rvalue2082;
    org$pandalanguage$pandac$ASTNode* tmp1752086;
    org$pandalanguage$pandac$ASTNode* tmp1792088;
    org$pandalanguage$pandac$ASTNode* tmp1762090;
    org$pandalanguage$pandac$ASTNode* tmp1802096;
    org$pandalanguage$pandac$parser$Token op2101;
    org$pandalanguage$pandac$ASTNode* rvalue2103;
    org$pandalanguage$pandac$ASTNode* tmp1772107;
    org$pandalanguage$pandac$ASTNode* tmp1812109;
    org$pandalanguage$pandac$ASTNode* tmp1782111;
    org$pandalanguage$pandac$ASTNode* tmp1822117;
    org$pandalanguage$pandac$ASTNode* tmp1832119;
    org$pandalanguage$pandac$ASTNode* $tmp2013 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp2012 = $tmp2013;
    org$pandalanguage$pandac$ASTNode* $tmp2011 = $tmp2012;
    start2010 = $tmp2011;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2011));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2012));
    if (((panda$core$Bit) { start2010 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2015 = NULL;
            tmp1742014 = $tmp2015;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2015));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2010));
            org$pandalanguage$pandac$ASTNode* $tmp2016 = tmp1742014;
            return $tmp2016;
        }
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2018 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1259_92017 = $tmp2018.kind;
        panda$core$Bit $tmp2034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 73 }));
        bool $tmp2033 = $tmp2034.value;
        if ($tmp2033) goto $l2035;
        panda$core$Bit $tmp2036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 74 }));
        $tmp2033 = $tmp2036.value;
        $l2035:;
        panda$core$Bit $tmp2037 = { $tmp2033 };
        bool $tmp2032 = $tmp2037.value;
        if ($tmp2032) goto $l2038;
        panda$core$Bit $tmp2039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 75 }));
        $tmp2032 = $tmp2039.value;
        $l2038:;
        panda$core$Bit $tmp2040 = { $tmp2032 };
        bool $tmp2031 = $tmp2040.value;
        if ($tmp2031) goto $l2041;
        panda$core$Bit $tmp2042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 76 }));
        $tmp2031 = $tmp2042.value;
        $l2041:;
        panda$core$Bit $tmp2043 = { $tmp2031 };
        bool $tmp2030 = $tmp2043.value;
        if ($tmp2030) goto $l2044;
        panda$core$Bit $tmp2045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 77 }));
        $tmp2030 = $tmp2045.value;
        $l2044:;
        panda$core$Bit $tmp2046 = { $tmp2030 };
        bool $tmp2029 = $tmp2046.value;
        if ($tmp2029) goto $l2047;
        panda$core$Bit $tmp2048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 78 }));
        $tmp2029 = $tmp2048.value;
        $l2047:;
        panda$core$Bit $tmp2049 = { $tmp2029 };
        bool $tmp2028 = $tmp2049.value;
        if ($tmp2028) goto $l2050;
        panda$core$Bit $tmp2051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 79 }));
        $tmp2028 = $tmp2051.value;
        $l2050:;
        panda$core$Bit $tmp2052 = { $tmp2028 };
        bool $tmp2027 = $tmp2052.value;
        if ($tmp2027) goto $l2053;
        panda$core$Bit $tmp2054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 80 }));
        $tmp2027 = $tmp2054.value;
        $l2053:;
        panda$core$Bit $tmp2055 = { $tmp2027 };
        bool $tmp2026 = $tmp2055.value;
        if ($tmp2026) goto $l2056;
        panda$core$Bit $tmp2057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 81 }));
        $tmp2026 = $tmp2057.value;
        $l2056:;
        panda$core$Bit $tmp2058 = { $tmp2026 };
        bool $tmp2025 = $tmp2058.value;
        if ($tmp2025) goto $l2059;
        panda$core$Bit $tmp2060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 82 }));
        $tmp2025 = $tmp2060.value;
        $l2059:;
        panda$core$Bit $tmp2061 = { $tmp2025 };
        bool $tmp2024 = $tmp2061.value;
        if ($tmp2024) goto $l2062;
        panda$core$Bit $tmp2063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 83 }));
        $tmp2024 = $tmp2063.value;
        $l2062:;
        panda$core$Bit $tmp2064 = { $tmp2024 };
        bool $tmp2023 = $tmp2064.value;
        if ($tmp2023) goto $l2065;
        panda$core$Bit $tmp2066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 84 }));
        $tmp2023 = $tmp2066.value;
        $l2065:;
        panda$core$Bit $tmp2067 = { $tmp2023 };
        bool $tmp2022 = $tmp2067.value;
        if ($tmp2022) goto $l2068;
        panda$core$Bit $tmp2069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 85 }));
        $tmp2022 = $tmp2069.value;
        $l2068:;
        panda$core$Bit $tmp2070 = { $tmp2022 };
        bool $tmp2021 = $tmp2070.value;
        if ($tmp2021) goto $l2071;
        panda$core$Bit $tmp2072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 86 }));
        $tmp2021 = $tmp2072.value;
        $l2071:;
        panda$core$Bit $tmp2073 = { $tmp2021 };
        bool $tmp2020 = $tmp2073.value;
        if ($tmp2020) goto $l2074;
        panda$core$Bit $tmp2075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 87 }));
        $tmp2020 = $tmp2075.value;
        $l2074:;
        panda$core$Bit $tmp2076 = { $tmp2020 };
        bool $tmp2019 = $tmp2076.value;
        if ($tmp2019) goto $l2077;
        panda$core$Bit $tmp2078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 88 }));
        $tmp2019 = $tmp2078.value;
        $l2077:;
        panda$core$Bit $tmp2079 = { $tmp2019 };
        if ($tmp2079.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2081 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2080 = $tmp2081;
            org$pandalanguage$pandac$ASTNode* $tmp2085 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2084 = $tmp2085;
            org$pandalanguage$pandac$ASTNode* $tmp2083 = $tmp2084;
            rvalue2082 = $tmp2083;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2083));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2084));
            if (((panda$core$Bit) { rvalue2082 == NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp2087 = NULL;
                    tmp1752086 = $tmp2087;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2087));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2082));
                    {
                        tmp1792088 = tmp1752086;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2010));
                        org$pandalanguage$pandac$ASTNode* $tmp2089 = tmp1792088;
                        return $tmp2089;
                    }
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp2093 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$Position $tmp2095 = (($fn2094) start2010->$class->vtable[2])(start2010);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2093, ((panda$core$Int64) { 2 }), $tmp2095, start2010, op2080.kind, rvalue2082);
                org$pandalanguage$pandac$ASTNode* $tmp2092 = $tmp2093;
                org$pandalanguage$pandac$ASTNode* $tmp2091 = $tmp2092;
                tmp1762090 = $tmp2091;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2091));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2092));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2082));
                {
                    tmp1802096 = tmp1762090;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2010));
                    org$pandalanguage$pandac$ASTNode* $tmp2097 = tmp1802096;
                    return $tmp2097;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp2098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92017.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp2098.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2099 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2099, &$s2100);
            org$pandalanguage$pandac$parser$Token $tmp2102 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2101 = $tmp2102;
            org$pandalanguage$pandac$ASTNode* $tmp2106 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2105 = $tmp2106;
            org$pandalanguage$pandac$ASTNode* $tmp2104 = $tmp2105;
            rvalue2103 = $tmp2104;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2104));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
            if (((panda$core$Bit) { rvalue2103 == NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp2108 = NULL;
                    tmp1772107 = $tmp2108;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2108));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2103));
                    {
                        tmp1812109 = tmp1772107;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2010));
                        org$pandalanguage$pandac$ASTNode* $tmp2110 = tmp1812109;
                        return $tmp2110;
                    }
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp2114 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$Position $tmp2116 = (($fn2115) start2010->$class->vtable[2])(start2010);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2114, ((panda$core$Int64) { 2 }), $tmp2116, start2010, op2101.kind, rvalue2103);
                org$pandalanguage$pandac$ASTNode* $tmp2113 = $tmp2114;
                org$pandalanguage$pandac$ASTNode* $tmp2112 = $tmp2113;
                tmp1782111 = $tmp2112;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2112));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2103));
                {
                    tmp1822117 = tmp1782111;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2010));
                    org$pandalanguage$pandac$ASTNode* $tmp2118 = tmp1822117;
                    return $tmp2118;
                }
            }
        }
        }
        else {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2120 = start2010;
                tmp1832119 = $tmp2120;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2010));
                org$pandalanguage$pandac$ASTNode* $tmp2121 = tmp1832119;
                return $tmp2121;
            }
        }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2010));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t2122;
    org$pandalanguage$pandac$ASTNode* tmp1842126;
    org$pandalanguage$pandac$ASTNode* value2129;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2130;
    org$pandalanguage$pandac$ASTNode* tmp1852136;
    org$pandalanguage$pandac$ASTNode* tmp1862147;
    org$pandalanguage$pandac$ASTNode* tmp1872152;
    org$pandalanguage$pandac$ASTNode* $tmp2125 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp2124 = $tmp2125;
    org$pandalanguage$pandac$ASTNode* $tmp2123 = $tmp2124;
    t2122 = $tmp2123;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2123));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2124));
    if (((panda$core$Bit) { t2122 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2127 = NULL;
            tmp1842126 = $tmp2127;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2127));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2122));
            org$pandalanguage$pandac$ASTNode* $tmp2128 = tmp1842126;
            return $tmp2128;
        }
    }
    }
    memset(&value2129, 0, sizeof(value2129));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2130, ((panda$core$Int64) { 73 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2131 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2130);
    if (((panda$core$Bit) { $tmp2131.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2132 = value2129;
            org$pandalanguage$pandac$ASTNode* $tmp2135 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2134 = $tmp2135;
            org$pandalanguage$pandac$ASTNode* $tmp2133 = $tmp2134;
            value2129 = $tmp2133;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2133));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2134));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2132));
        }
        if (((panda$core$Bit) { value2129 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2137 = NULL;
                tmp1852136 = $tmp2137;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2137));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2122));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2129));
                }
                org$pandalanguage$pandac$ASTNode* $tmp2138 = tmp1852136;
                return $tmp2138;
            }
        }
        }
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp2139 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2139.kind.$rawValue, ((panda$core$Int64) { 58 }));
    if ($tmp2140.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp2141 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2141, &$s2142);
        {
            org$pandalanguage$pandac$ASTNode* $tmp2143 = value2129;
            org$pandalanguage$pandac$ASTNode* $tmp2146 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2145 = $tmp2146;
            org$pandalanguage$pandac$ASTNode* $tmp2144 = $tmp2145;
            value2129 = $tmp2144;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2144));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2145));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2143));
        }
        if (((panda$core$Bit) { value2129 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2148 = NULL;
                tmp1862147 = $tmp2148;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2148));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2122));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2129));
                }
                org$pandalanguage$pandac$ASTNode* $tmp2149 = tmp1862147;
                return $tmp2149;
            }
        }
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2150 = value2129;
            org$pandalanguage$pandac$ASTNode* $tmp2151 = NULL;
            value2129 = $tmp2151;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2151));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2150));
        }
    }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp2155 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp2157 = (($fn2156) t2122->$class->vtable[2])(t2122);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2155, ((panda$core$Int64) { 11 }), $tmp2157, t2122, value2129);
        org$pandalanguage$pandac$ASTNode* $tmp2154 = $tmp2155;
        org$pandalanguage$pandac$ASTNode* $tmp2153 = $tmp2154;
        tmp1872152 = $tmp2153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2154));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2122));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2129));
        }
        org$pandalanguage$pandac$ASTNode* $tmp2158 = tmp1872152;
        return $tmp2158;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start2159;
    org$pandalanguage$pandac$Variable$Kind kind2161;
    org$pandalanguage$pandac$parser$Token$Kind $match$1318_92162;
    org$pandalanguage$pandac$Variable$Kind $tmp2164;
    org$pandalanguage$pandac$Variable$Kind $tmp2166;
    org$pandalanguage$pandac$Variable$Kind $tmp2168;
    org$pandalanguage$pandac$Variable$Kind $tmp2170;
    panda$collections$Array* declarations2172;
    org$pandalanguage$pandac$ASTNode* decl2176;
    org$pandalanguage$pandac$ASTNode* tmp1882180;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2186;
    org$pandalanguage$pandac$ASTNode* decl2188;
    org$pandalanguage$pandac$ASTNode* tmp1892192;
    org$pandalanguage$pandac$ASTNode* tmp1902194;
    org$pandalanguage$pandac$ASTNode* tmp1912196;
    org$pandalanguage$pandac$parser$Token $tmp2160 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start2159 = $tmp2160;
    memset(&kind2161, 0, sizeof(kind2161));
    {
        $match$1318_92162 = start2159.kind;
        panda$core$Bit $tmp2163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_92162.$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp2163.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2164, ((panda$core$Int64) { 0 }));
            kind2161 = $tmp2164;
        }
        }
        else {
        panda$core$Bit $tmp2165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_92162.$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2165.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2166, ((panda$core$Int64) { 1 }));
            kind2161 = $tmp2166;
        }
        }
        else {
        panda$core$Bit $tmp2167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_92162.$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2167.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2168, ((panda$core$Int64) { 3 }));
            kind2161 = $tmp2168;
        }
        }
        else {
        panda$core$Bit $tmp2169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_92162.$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2169.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2170, ((panda$core$Int64) { 2 }));
            kind2161 = $tmp2170;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start2159, &$s2171);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp2175 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2175);
    panda$collections$Array* $tmp2174 = $tmp2175;
    panda$collections$Array* $tmp2173 = $tmp2174;
    declarations2172 = $tmp2173;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2173));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2174));
    org$pandalanguage$pandac$ASTNode* $tmp2179 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp2178 = $tmp2179;
    org$pandalanguage$pandac$ASTNode* $tmp2177 = $tmp2178;
    decl2176 = $tmp2177;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2177));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2178));
    if (((panda$core$Bit) { decl2176 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2181 = NULL;
            tmp1882180 = $tmp2181;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2181));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2176));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations2172));
            }
            org$pandalanguage$pandac$ASTNode* $tmp2182 = tmp1882180;
            return $tmp2182;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(declarations2172, ((panda$core$Object*) decl2176));
    $l2183:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2186, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2187 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2186);
    bool $tmp2185 = ((panda$core$Bit) { $tmp2187.nonnull }).value;
    if (!$tmp2185) goto $l2184;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2191 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        org$pandalanguage$pandac$ASTNode* $tmp2190 = $tmp2191;
        org$pandalanguage$pandac$ASTNode* $tmp2189 = $tmp2190;
        decl2188 = $tmp2189;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2190));
        if (((panda$core$Bit) { decl2188 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2193 = NULL;
                tmp1892192 = $tmp2193;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2193));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2188));
                {
                    tmp1902194 = tmp1892192;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2176));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations2172));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2195 = tmp1902194;
                    return $tmp2195;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations2172, ((panda$core$Object*) decl2188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2188));
    }
    goto $l2183;
    $l2184:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2199 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2201 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations2172);
        panda$collections$ImmutableArray* $tmp2200 = $tmp2201;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2199, ((panda$core$Int64) { 39 }), start2159.position, kind2161, $tmp2200);
        org$pandalanguage$pandac$ASTNode* $tmp2198 = $tmp2199;
        org$pandalanguage$pandac$ASTNode* $tmp2197 = $tmp2198;
        tmp1912196 = $tmp2197;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2197));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2198));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2176));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations2172));
        }
        org$pandalanguage$pandac$ASTNode* $tmp2202 = tmp1912196;
        return $tmp2202;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2203;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2204;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2209;
    org$pandalanguage$pandac$ASTNode* target2216;
    panda$collections$Array* args2222;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2226;
    org$pandalanguage$pandac$ASTNode* expr2228;
    org$pandalanguage$pandac$ASTNode* tmp1922234;
    org$pandalanguage$pandac$ASTNode* tmp1952236;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2241;
    org$pandalanguage$pandac$ASTNode* tmp1932249;
    org$pandalanguage$pandac$ASTNode* tmp1962251;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2253;
    org$pandalanguage$pandac$ASTNode* tmp1942258;
    org$pandalanguage$pandac$ASTNode* tmp1972260;
    org$pandalanguage$pandac$ASTNode* tmp1982264;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2204, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2206 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2204, &$s2205);
    start2203 = $tmp2206;
    if (((panda$core$Bit) { !start2203.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2208 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2207 = $tmp2208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2208));
        return $tmp2207;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2209, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2211 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2209, &$s2210);
    if (((panda$core$Bit) { !$tmp2211.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2213 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2212 = $tmp2213;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2213));
        return $tmp2212;
    }
    }
    panda$core$Bit$wrapper* $tmp2215;
    $tmp2215 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp2215->value = ((panda$core$Bit) { true });
    panda$core$Object* $tmp2214 = ((panda$core$Object*) $tmp2215);
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2214);
    panda$core$Panda$unref$panda$core$Object($tmp2214);
    org$pandalanguage$pandac$ASTNode* $tmp2219 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp2221 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start2203.value));
    panda$core$String* $tmp2220 = $tmp2221;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2219, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start2203.value).position, $tmp2220);
    org$pandalanguage$pandac$ASTNode* $tmp2218 = $tmp2219;
    org$pandalanguage$pandac$ASTNode* $tmp2217 = $tmp2218;
    target2216 = $tmp2217;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2217));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2218));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2220));
    panda$collections$Array* $tmp2225 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2225);
    panda$collections$Array* $tmp2224 = $tmp2225;
    panda$collections$Array* $tmp2223 = $tmp2224;
    args2222 = $tmp2223;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2223));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2224));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2226, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2227 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2226);
    if (((panda$core$Bit) { !$tmp2227.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2231 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        org$pandalanguage$pandac$ASTNode* $tmp2230 = $tmp2231;
        org$pandalanguage$pandac$ASTNode* $tmp2229 = $tmp2230;
        expr2228 = $tmp2229;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2229));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2230));
        if (((panda$core$Bit) { expr2228 == NULL }).value) {
        {
            panda$core$Object* $tmp2233 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            panda$core$Object* $tmp2232 = $tmp2233;
            panda$core$Panda$unref$panda$core$Object($tmp2232);
            {
                org$pandalanguage$pandac$ASTNode* $tmp2235 = NULL;
                tmp1922234 = $tmp2235;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2235));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2228));
                {
                    tmp1952236 = tmp1922234;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2216));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2222));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2237 = tmp1952236;
                    return $tmp2237;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2222, ((panda$core$Object*) expr2228));
        $l2238:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2241, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2242 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2241);
        bool $tmp2240 = ((panda$core$Bit) { $tmp2242.nonnull }).value;
        if (!$tmp2240) goto $l2239;
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2243 = expr2228;
                org$pandalanguage$pandac$ASTNode* $tmp2246 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp2245 = $tmp2246;
                org$pandalanguage$pandac$ASTNode* $tmp2244 = $tmp2245;
                expr2228 = $tmp2244;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2244));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2245));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2243));
            }
            if (((panda$core$Bit) { expr2228 == NULL }).value) {
            {
                panda$core$Object* $tmp2248 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                panda$core$Object* $tmp2247 = $tmp2248;
                panda$core$Panda$unref$panda$core$Object($tmp2247);
                {
                    org$pandalanguage$pandac$ASTNode* $tmp2250 = NULL;
                    tmp1932249 = $tmp2250;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2250));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2228));
                    {
                        tmp1962251 = tmp1932249;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2216));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2222));
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp2252 = tmp1962251;
                        return $tmp2252;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2222, ((panda$core$Object*) expr2228));
        }
        goto $l2238;
        $l2239:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2253, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2255 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2253, &$s2254);
        if (((panda$core$Bit) { !$tmp2255.nonnull }).value) {
        {
            panda$core$Object* $tmp2257 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            panda$core$Object* $tmp2256 = $tmp2257;
            panda$core$Panda$unref$panda$core$Object($tmp2256);
            {
                org$pandalanguage$pandac$ASTNode* $tmp2259 = NULL;
                tmp1942258 = $tmp2259;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2259));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2228));
                {
                    tmp1972260 = tmp1942258;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2216));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2222));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2261 = tmp1972260;
                    return $tmp2261;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2228));
    }
    }
    panda$core$Object* $tmp2263 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    panda$core$Object* $tmp2262 = $tmp2263;
    panda$core$Panda$unref$panda$core$Object($tmp2262);
    {
        org$pandalanguage$pandac$ASTNode* $tmp2267 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2269 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2222);
        panda$collections$ImmutableArray* $tmp2268 = $tmp2269;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2267, ((panda$core$Int64) { 6 }), ((org$pandalanguage$pandac$parser$Token) start2203.value).position, target2216, $tmp2268);
        org$pandalanguage$pandac$ASTNode* $tmp2266 = $tmp2267;
        org$pandalanguage$pandac$ASTNode* $tmp2265 = $tmp2266;
        tmp1982264 = $tmp2265;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2266));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2268));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2216));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2222));
        }
        org$pandalanguage$pandac$ASTNode* $tmp2270 = tmp1982264;
        return $tmp2270;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2271;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2272;
    org$pandalanguage$pandac$parser$Token$nullable label2277;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2278;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2272, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2274 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2272, &$s2273);
    start2271 = $tmp2274;
    if (((panda$core$Bit) { !start2271.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2276 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2275 = $tmp2276;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2276));
        return $tmp2275;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2278, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2279 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2278);
    label2277 = $tmp2279;
    if (((panda$core$Bit) { label2277.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2283 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2285 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2277.value));
        panda$core$String* $tmp2284 = $tmp2285;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2283, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start2271.value).position, $tmp2284);
        org$pandalanguage$pandac$ASTNode* $tmp2282 = $tmp2283;
        org$pandalanguage$pandac$ASTNode* $tmp2281 = $tmp2282;
        org$pandalanguage$pandac$ASTNode* $tmp2280 = $tmp2281;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2281));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2282));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2284));
        return $tmp2280;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2289 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2289, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start2271.value).position, NULL);
    org$pandalanguage$pandac$ASTNode* $tmp2288 = $tmp2289;
    org$pandalanguage$pandac$ASTNode* $tmp2287 = $tmp2288;
    org$pandalanguage$pandac$ASTNode* $tmp2286 = $tmp2287;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2287));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2288));
    return $tmp2286;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2290;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2291;
    org$pandalanguage$pandac$parser$Token$nullable label2296;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2297;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2291, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2293 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2291, &$s2292);
    start2290 = $tmp2293;
    if (((panda$core$Bit) { !start2290.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2295 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2294 = $tmp2295;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2295));
        return $tmp2294;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2297, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2298 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2297);
    label2296 = $tmp2298;
    if (((panda$core$Bit) { label2296.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2302 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2304 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2296.value));
        panda$core$String* $tmp2303 = $tmp2304;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2302, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start2290.value).position, $tmp2303);
        org$pandalanguage$pandac$ASTNode* $tmp2301 = $tmp2302;
        org$pandalanguage$pandac$ASTNode* $tmp2300 = $tmp2301;
        org$pandalanguage$pandac$ASTNode* $tmp2299 = $tmp2300;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2300));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2301));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2303));
        return $tmp2299;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2308 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2308, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start2290.value).position, NULL);
    org$pandalanguage$pandac$ASTNode* $tmp2307 = $tmp2308;
    org$pandalanguage$pandac$ASTNode* $tmp2306 = $tmp2307;
    org$pandalanguage$pandac$ASTNode* $tmp2305 = $tmp2306;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2306));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2307));
    return $tmp2305;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2309;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2310;
    org$pandalanguage$pandac$parser$Token$Kind $match$1422_92315;
    panda$collections$Array* children2330;
    org$pandalanguage$pandac$ASTNode* expr2334;
    org$pandalanguage$pandac$ASTNode* tmp1992338;
    org$pandalanguage$pandac$ASTNode* tmp2002341;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2310, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2312 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2310, &$s2311);
    start2309 = $tmp2312;
    if (((panda$core$Bit) { !start2309.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2314 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2313 = $tmp2314;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2314));
        return $tmp2313;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2316 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1422_92315 = $tmp2316.kind;
        panda$core$Bit $tmp2319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_92315.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp2318 = $tmp2319.value;
        if ($tmp2318) goto $l2320;
        panda$core$Bit $tmp2321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_92315.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp2318 = $tmp2321.value;
        $l2320:;
        panda$core$Bit $tmp2322 = { $tmp2318 };
        bool $tmp2317 = $tmp2322.value;
        if ($tmp2317) goto $l2323;
        panda$core$Bit $tmp2324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_92315.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp2317 = $tmp2324.value;
        $l2323:;
        panda$core$Bit $tmp2325 = { $tmp2317 };
        if ($tmp2325.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2329 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2329, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$parser$Token) start2309.value).position, NULL);
            org$pandalanguage$pandac$ASTNode* $tmp2328 = $tmp2329;
            org$pandalanguage$pandac$ASTNode* $tmp2327 = $tmp2328;
            org$pandalanguage$pandac$ASTNode* $tmp2326 = $tmp2327;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2327));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2328));
            return $tmp2326;
        }
        }
        else {
        {
            panda$collections$Array* $tmp2333 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2333);
            panda$collections$Array* $tmp2332 = $tmp2333;
            panda$collections$Array* $tmp2331 = $tmp2332;
            children2330 = $tmp2331;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2331));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2332));
            org$pandalanguage$pandac$ASTNode* $tmp2337 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2336 = $tmp2337;
            org$pandalanguage$pandac$ASTNode* $tmp2335 = $tmp2336;
            expr2334 = $tmp2335;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2335));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2336));
            if (((panda$core$Bit) { expr2334 == NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp2339 = NULL;
                    tmp1992338 = $tmp2339;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2339));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2334));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children2330));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2340 = tmp1992338;
                    return $tmp2340;
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children2330, ((panda$core$Object*) expr2334));
            {
                org$pandalanguage$pandac$ASTNode* $tmp2344 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2344, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$parser$Token) start2309.value).position, expr2334);
                org$pandalanguage$pandac$ASTNode* $tmp2343 = $tmp2344;
                org$pandalanguage$pandac$ASTNode* $tmp2342 = $tmp2343;
                tmp2002341 = $tmp2342;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2342));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2343));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2334));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children2330));
                }
                org$pandalanguage$pandac$ASTNode* $tmp2345 = tmp2002341;
                return $tmp2345;
            }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1440_92346;
    {
        org$pandalanguage$pandac$parser$Token $tmp2347 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1440_92346 = $tmp2347.kind;
        panda$core$Bit $tmp2348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_92346.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2348.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2352 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2351 = $tmp2352;
            org$pandalanguage$pandac$ASTNode* $tmp2350 = $tmp2351;
            org$pandalanguage$pandac$ASTNode* $tmp2349 = $tmp2350;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2351));
            return $tmp2349;
        }
        }
        else {
        panda$core$Bit $tmp2353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_92346.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2353.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2357 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2356 = $tmp2357;
            org$pandalanguage$pandac$ASTNode* $tmp2355 = $tmp2356;
            org$pandalanguage$pandac$ASTNode* $tmp2354 = $tmp2355;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2355));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2356));
            return $tmp2354;
        }
        }
        else {
        panda$core$Bit $tmp2358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_92346.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2358.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2362 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2361 = $tmp2362;
            org$pandalanguage$pandac$ASTNode* $tmp2360 = $tmp2361;
            org$pandalanguage$pandac$ASTNode* $tmp2359 = $tmp2360;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2360));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2361));
            return $tmp2359;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1449_92363;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2385;
    {
        org$pandalanguage$pandac$parser$Token $tmp2364 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1449_92363 = $tmp2364.kind;
        panda$core$Bit $tmp2365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_92363.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2365.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2369 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            org$pandalanguage$pandac$ASTNode* $tmp2368 = $tmp2369;
            org$pandalanguage$pandac$ASTNode* $tmp2367 = $tmp2368;
            org$pandalanguage$pandac$ASTNode* $tmp2366 = $tmp2367;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2367));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2368));
            return $tmp2366;
        }
        }
        else {
        panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_92363.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2370.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2374 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            org$pandalanguage$pandac$ASTNode* $tmp2373 = $tmp2374;
            org$pandalanguage$pandac$ASTNode* $tmp2372 = $tmp2373;
            org$pandalanguage$pandac$ASTNode* $tmp2371 = $tmp2372;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2372));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2373));
            return $tmp2371;
        }
        }
        else {
        panda$core$Bit $tmp2375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_92363.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2375.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2379 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            org$pandalanguage$pandac$ASTNode* $tmp2378 = $tmp2379;
            org$pandalanguage$pandac$ASTNode* $tmp2377 = $tmp2378;
            org$pandalanguage$pandac$ASTNode* $tmp2376 = $tmp2377;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2377));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2378));
            return $tmp2376;
        }
        }
        else {
        panda$core$Bit $tmp2380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_92363.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2380.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2384 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            org$pandalanguage$pandac$ASTNode* $tmp2383 = $tmp2384;
            org$pandalanguage$pandac$ASTNode* $tmp2382 = $tmp2383;
            org$pandalanguage$pandac$ASTNode* $tmp2381 = $tmp2382;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2382));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2383));
            return $tmp2381;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2385, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2385, &$s2386);
            org$pandalanguage$pandac$ASTNode* $tmp2388 = NULL;
            org$pandalanguage$pandac$ASTNode* $tmp2387 = $tmp2388;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2388));
            return $tmp2387;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1466_92389;
    org$pandalanguage$pandac$parser$Token id2432;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2434;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2477;
    {
        org$pandalanguage$pandac$parser$Token $tmp2390 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1466_92389 = $tmp2390.kind;
        panda$core$Bit $tmp2391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2391.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2395 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2394 = $tmp2395;
            org$pandalanguage$pandac$ASTNode* $tmp2393 = $tmp2394;
            org$pandalanguage$pandac$ASTNode* $tmp2392 = $tmp2393;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2393));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2394));
            return $tmp2392;
        }
        }
        else {
        panda$core$Bit $tmp2396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2396.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2400 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            org$pandalanguage$pandac$ASTNode* $tmp2399 = $tmp2400;
            org$pandalanguage$pandac$ASTNode* $tmp2398 = $tmp2399;
            org$pandalanguage$pandac$ASTNode* $tmp2397 = $tmp2398;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2398));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2399));
            return $tmp2397;
        }
        }
        else {
        panda$core$Bit $tmp2401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2401.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2405 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            org$pandalanguage$pandac$ASTNode* $tmp2404 = $tmp2405;
            org$pandalanguage$pandac$ASTNode* $tmp2403 = $tmp2404;
            org$pandalanguage$pandac$ASTNode* $tmp2402 = $tmp2403;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2403));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2404));
            return $tmp2402;
        }
        }
        else {
        panda$core$Bit $tmp2406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2406.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2410 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            org$pandalanguage$pandac$ASTNode* $tmp2409 = $tmp2410;
            org$pandalanguage$pandac$ASTNode* $tmp2408 = $tmp2409;
            org$pandalanguage$pandac$ASTNode* $tmp2407 = $tmp2408;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2408));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2409));
            return $tmp2407;
        }
        }
        else {
        panda$core$Bit $tmp2411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2411.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2415 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            org$pandalanguage$pandac$ASTNode* $tmp2414 = $tmp2415;
            org$pandalanguage$pandac$ASTNode* $tmp2413 = $tmp2414;
            org$pandalanguage$pandac$ASTNode* $tmp2412 = $tmp2413;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2413));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2414));
            return $tmp2412;
        }
        }
        else {
        panda$core$Bit $tmp2416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2416.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2420 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2419 = $tmp2420;
            org$pandalanguage$pandac$ASTNode* $tmp2418 = $tmp2419;
            org$pandalanguage$pandac$ASTNode* $tmp2417 = $tmp2418;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2418));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2419));
            return $tmp2417;
        }
        }
        else {
        panda$core$Bit $tmp2421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2421.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2425 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2424 = $tmp2425;
            org$pandalanguage$pandac$ASTNode* $tmp2423 = $tmp2424;
            org$pandalanguage$pandac$ASTNode* $tmp2422 = $tmp2423;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2423));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2424));
            return $tmp2422;
        }
        }
        else {
        panda$core$Bit $tmp2426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp2426.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2430 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2429 = $tmp2430;
            org$pandalanguage$pandac$ASTNode* $tmp2428 = $tmp2429;
            org$pandalanguage$pandac$ASTNode* $tmp2427 = $tmp2428;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2428));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2429));
            return $tmp2427;
        }
        }
        else {
        panda$core$Bit $tmp2431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp2431.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2433 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id2432 = $tmp2433;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2434, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2435 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2434);
            if (((panda$core$Bit) { $tmp2435.nonnull }).value) {
            {
                panda$core$String* $tmp2440 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id2432);
                panda$core$String* $tmp2439 = $tmp2440;
                org$pandalanguage$pandac$ASTNode* $tmp2441 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2439);
                org$pandalanguage$pandac$ASTNode* $tmp2438 = $tmp2441;
                org$pandalanguage$pandac$ASTNode* $tmp2437 = $tmp2438;
                org$pandalanguage$pandac$ASTNode* $tmp2436 = $tmp2437;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2437));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2438));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2439));
                return $tmp2436;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id2432);
            org$pandalanguage$pandac$ASTNode* $tmp2445 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2444 = $tmp2445;
            org$pandalanguage$pandac$ASTNode* $tmp2443 = $tmp2444;
            org$pandalanguage$pandac$ASTNode* $tmp2442 = $tmp2443;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2443));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2444));
            return $tmp2442;
        }
        }
        else {
        panda$core$Bit $tmp2447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp2446 = $tmp2447.value;
        if ($tmp2446) goto $l2448;
        panda$core$Bit $tmp2449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp2446 = $tmp2449.value;
        $l2448:;
        panda$core$Bit $tmp2450 = { $tmp2446 };
        if ($tmp2450.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2454 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2453 = $tmp2454;
            org$pandalanguage$pandac$ASTNode* $tmp2452 = $tmp2453;
            org$pandalanguage$pandac$ASTNode* $tmp2451 = $tmp2452;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2452));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2453));
            return $tmp2451;
        }
        }
        else {
        panda$core$Bit $tmp2458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp2457 = $tmp2458.value;
        if ($tmp2457) goto $l2459;
        panda$core$Bit $tmp2460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp2457 = $tmp2460.value;
        $l2459:;
        panda$core$Bit $tmp2461 = { $tmp2457 };
        bool $tmp2456 = $tmp2461.value;
        if ($tmp2456) goto $l2462;
        panda$core$Bit $tmp2463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp2456 = $tmp2463.value;
        $l2462:;
        panda$core$Bit $tmp2464 = { $tmp2456 };
        bool $tmp2455 = $tmp2464.value;
        if ($tmp2455) goto $l2465;
        panda$core$Bit $tmp2466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp2455 = $tmp2466.value;
        $l2465:;
        panda$core$Bit $tmp2467 = { $tmp2455 };
        if ($tmp2467.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2471 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2470 = $tmp2471;
            org$pandalanguage$pandac$ASTNode* $tmp2469 = $tmp2470;
            org$pandalanguage$pandac$ASTNode* $tmp2468 = $tmp2469;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2470));
            return $tmp2468;
        }
        }
        else {
        panda$core$Bit $tmp2472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92389.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2472.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2476 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2475 = $tmp2476;
            org$pandalanguage$pandac$ASTNode* $tmp2474 = $tmp2475;
            org$pandalanguage$pandac$ASTNode* $tmp2473 = $tmp2474;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2474));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2475));
            return $tmp2473;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2477, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2477, &$s2478);
            org$pandalanguage$pandac$ASTNode* $tmp2480 = NULL;
            org$pandalanguage$pandac$ASTNode* $tmp2479 = $tmp2480;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2480));
            return $tmp2479;
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
    org$pandalanguage$pandac$parser$Token$nullable start2481;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2482;
    org$pandalanguage$pandac$parser$Token$nullable next2487;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2488;
    panda$core$MutableString* name2493;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2501;
    panda$core$Char8 $tmp2503;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2504;
    org$pandalanguage$pandac$ASTNode* tmp2012507;
    org$pandalanguage$pandac$ASTNode* tmp2022512;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2482, ((panda$core$Int64) { 14 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2484 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2482, &$s2483);
    start2481 = $tmp2484;
    if (((panda$core$Bit) { !start2481.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2486 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2485 = $tmp2486;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2486));
        return $tmp2485;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2488, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2490 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2488, &$s2489);
    next2487 = $tmp2490;
    if (((panda$core$Bit) { !next2487.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2492 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2491 = $tmp2492;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2492));
        return $tmp2491;
    }
    }
    panda$core$MutableString* $tmp2496 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp2498 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next2487.value));
    panda$core$String* $tmp2497 = $tmp2498;
    panda$core$MutableString$init$panda$core$String($tmp2496, $tmp2497);
    panda$core$MutableString* $tmp2495 = $tmp2496;
    panda$core$MutableString* $tmp2494 = $tmp2495;
    name2493 = $tmp2494;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2494));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2495));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
    $l2499:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2501, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2502 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2501);
        next2487 = $tmp2502;
        if (((panda$core$Bit) { !next2487.nonnull }).value) {
        {
            goto $l2500;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp2503, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name2493, $tmp2503);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2504, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2506 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2504, &$s2505);
        next2487 = $tmp2506;
        if (((panda$core$Bit) { !next2487.nonnull }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2508 = NULL;
                tmp2012507 = $tmp2508;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2508));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2493));
                org$pandalanguage$pandac$ASTNode* $tmp2509 = tmp2012507;
                return $tmp2509;
            }
        }
        }
        panda$core$String* $tmp2511 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next2487.value));
        panda$core$String* $tmp2510 = $tmp2511;
        panda$core$MutableString$append$panda$core$String(name2493, $tmp2510);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2510));
    }
    }
    $l2500:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2515 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2517 = panda$core$MutableString$finish$R$panda$core$String(name2493);
        panda$core$String* $tmp2516 = $tmp2517;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2515, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) start2481.value).position, $tmp2516);
        org$pandalanguage$pandac$ASTNode* $tmp2514 = $tmp2515;
        org$pandalanguage$pandac$ASTNode* $tmp2513 = $tmp2514;
        tmp2022512 = $tmp2513;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2493));
        org$pandalanguage$pandac$ASTNode* $tmp2518 = tmp2022512;
        return $tmp2518;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2519;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2520;
    org$pandalanguage$pandac$parser$Token$nullable next2525;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2526;
    panda$core$MutableString* name2531;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2539;
    panda$core$Char8 $tmp2541;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2542;
    org$pandalanguage$pandac$ASTNode* tmp2032545;
    org$pandalanguage$pandac$ASTNode* tmp2042550;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2520, ((panda$core$Int64) { 15 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2522 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2520, &$s2521);
    start2519 = $tmp2522;
    if (((panda$core$Bit) { !start2519.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2524 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2523 = $tmp2524;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2524));
        return $tmp2523;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2526, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2528 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2526, &$s2527);
    next2525 = $tmp2528;
    if (((panda$core$Bit) { !next2525.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2530 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2529 = $tmp2530;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2530));
        return $tmp2529;
    }
    }
    panda$core$MutableString* $tmp2534 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp2536 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next2525.value));
    panda$core$String* $tmp2535 = $tmp2536;
    panda$core$MutableString$init$panda$core$String($tmp2534, $tmp2535);
    panda$core$MutableString* $tmp2533 = $tmp2534;
    panda$core$MutableString* $tmp2532 = $tmp2533;
    name2531 = $tmp2532;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2532));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2533));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2535));
    $l2537:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2539, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2540 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2539);
        next2525 = $tmp2540;
        if (((panda$core$Bit) { !next2525.nonnull }).value) {
        {
            goto $l2538;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp2541, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name2531, $tmp2541);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2542, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2544 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2542, &$s2543);
        next2525 = $tmp2544;
        if (((panda$core$Bit) { !next2525.nonnull }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2546 = NULL;
                tmp2032545 = $tmp2546;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2546));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2531));
                org$pandalanguage$pandac$ASTNode* $tmp2547 = tmp2032545;
                return $tmp2547;
            }
        }
        }
        panda$core$String* $tmp2549 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next2525.value));
        panda$core$String* $tmp2548 = $tmp2549;
        panda$core$MutableString$append$panda$core$String(name2531, $tmp2548);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2548));
    }
    }
    $l2538:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2553 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2555 = panda$core$MutableString$finish$R$panda$core$String(name2531);
        panda$core$String* $tmp2554 = $tmp2555;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2553, ((panda$core$Int64) { 38 }), ((org$pandalanguage$pandac$parser$Token) start2519.value).position, $tmp2554);
        org$pandalanguage$pandac$ASTNode* $tmp2552 = $tmp2553;
        org$pandalanguage$pandac$ASTNode* $tmp2551 = $tmp2552;
        tmp2042550 = $tmp2551;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2551));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2552));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2554));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2531));
        org$pandalanguage$pandac$ASTNode* $tmp2556 = tmp2042550;
        return $tmp2556;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2557;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2558;
    org$pandalanguage$pandac$parser$Token$nullable id2563;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2564;
    panda$collections$Array* parameters2569;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2573;
    org$pandalanguage$pandac$ASTNode* t2575;
    panda$collections$ImmutableArray* tmp2052579;
    panda$collections$ImmutableArray* tmp2062581;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2594;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2596;
    panda$collections$ImmutableArray* tmp2082599;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2602;
    org$pandalanguage$pandac$ASTNode* t2604;
    panda$collections$ImmutableArray* tmp2072608;
    panda$collections$ImmutableArray* tmp2092610;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2620;
    panda$collections$ImmutableArray* tmp2102623;
    panda$collections$ImmutableArray* tmp2112626;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2558, ((panda$core$Int64) { 62 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2560 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2558, &$s2559);
    start2557 = $tmp2560;
    if (((panda$core$Bit) { !start2557.nonnull }).value) {
    {
        panda$collections$ImmutableArray* $tmp2562 = NULL;
        panda$collections$ImmutableArray* $tmp2561 = $tmp2562;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2562));
        return $tmp2561;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2564, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2566 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2564, &$s2565);
    id2563 = $tmp2566;
    if (((panda$core$Bit) { !id2563.nonnull }).value) {
    {
        panda$collections$ImmutableArray* $tmp2568 = NULL;
        panda$collections$ImmutableArray* $tmp2567 = $tmp2568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2568));
        return $tmp2567;
    }
    }
    panda$collections$Array* $tmp2572 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2572);
    panda$collections$Array* $tmp2571 = $tmp2572;
    panda$collections$Array* $tmp2570 = $tmp2571;
    parameters2569 = $tmp2570;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2570));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2571));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2573, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2574 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2573);
    if (((panda$core$Bit) { $tmp2574.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2578 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        org$pandalanguage$pandac$ASTNode* $tmp2577 = $tmp2578;
        org$pandalanguage$pandac$ASTNode* $tmp2576 = $tmp2577;
        t2575 = $tmp2576;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2576));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2577));
        if (((panda$core$Bit) { t2575 == NULL }).value) {
        {
            {
                panda$collections$ImmutableArray* $tmp2580 = NULL;
                tmp2052579 = $tmp2580;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2580));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2575));
                {
                    tmp2062581 = tmp2052579;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters2569));
                    panda$collections$ImmutableArray* $tmp2582 = tmp2062581;
                    return $tmp2582;
                }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2584 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2586 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2563.value));
        panda$core$String* $tmp2585 = $tmp2586;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2584, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) id2563.value).position, $tmp2585, t2575);
        org$pandalanguage$pandac$ASTNode* $tmp2583 = $tmp2584;
        panda$collections$Array$add$panda$collections$Array$T(parameters2569, ((panda$core$Object*) $tmp2583));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2583));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2585));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2575));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2588 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2590 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2563.value));
        panda$core$String* $tmp2589 = $tmp2590;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2588, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id2563.value).position, $tmp2589);
        org$pandalanguage$pandac$ASTNode* $tmp2587 = $tmp2588;
        panda$collections$Array$add$panda$collections$Array$T(parameters2569, ((panda$core$Object*) $tmp2587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2589));
    }
    }
    $l2591:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2594, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2595 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2594);
    bool $tmp2593 = ((panda$core$Bit) { $tmp2595.nonnull }).value;
    if (!$tmp2593) goto $l2592;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2596, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2598 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2596, &$s2597);
        id2563 = $tmp2598;
        if (((panda$core$Bit) { !id2563.nonnull }).value) {
        {
            {
                panda$collections$ImmutableArray* $tmp2600 = NULL;
                tmp2082599 = $tmp2600;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2600));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters2569));
                panda$collections$ImmutableArray* $tmp2601 = tmp2082599;
                return $tmp2601;
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2602, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2603 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2602);
        if (((panda$core$Bit) { $tmp2603.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2607 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2606 = $tmp2607;
            org$pandalanguage$pandac$ASTNode* $tmp2605 = $tmp2606;
            t2604 = $tmp2605;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2605));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2606));
            if (((panda$core$Bit) { t2604 == NULL }).value) {
            {
                {
                    panda$collections$ImmutableArray* $tmp2609 = NULL;
                    tmp2072608 = $tmp2609;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2609));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2604));
                    {
                        tmp2092610 = tmp2072608;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters2569));
                        panda$collections$ImmutableArray* $tmp2611 = tmp2092610;
                        return $tmp2611;
                    }
                }
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp2613 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp2615 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2563.value));
            panda$core$String* $tmp2614 = $tmp2615;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2613, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) id2563.value).position, $tmp2614, t2604);
            org$pandalanguage$pandac$ASTNode* $tmp2612 = $tmp2613;
            panda$collections$Array$add$panda$collections$Array$T(parameters2569, ((panda$core$Object*) $tmp2612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2614));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2604));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2617 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp2619 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2563.value));
            panda$core$String* $tmp2618 = $tmp2619;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2617, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id2563.value).position, $tmp2618);
            org$pandalanguage$pandac$ASTNode* $tmp2616 = $tmp2617;
            panda$collections$Array$add$panda$collections$Array$T(parameters2569, ((panda$core$Object*) $tmp2616));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2616));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2618));
        }
        }
    }
    goto $l2591;
    $l2592:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2620, ((panda$core$Int64) { 63 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2622 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2620, &$s2621);
    if (((panda$core$Bit) { !$tmp2622.nonnull }).value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2624 = NULL;
            tmp2102623 = $tmp2624;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2624));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters2569));
            panda$collections$ImmutableArray* $tmp2625 = tmp2102623;
            return $tmp2625;
        }
    }
    }
    {
        panda$collections$ImmutableArray* $tmp2629 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters2569);
        panda$collections$ImmutableArray* $tmp2628 = $tmp2629;
        panda$collections$ImmutableArray* $tmp2627 = $tmp2628;
        tmp2112626 = $tmp2627;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2627));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2628));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters2569));
        panda$collections$ImmutableArray* $tmp2630 = tmp2112626;
        return $tmp2630;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2631;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2632;
    panda$collections$Array* result2637;
    org$pandalanguage$pandac$ASTNode* t2641;
    panda$collections$ImmutableArray* tmp2122645;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2651;
    panda$collections$ImmutableArray* tmp2132657;
    panda$collections$ImmutableArray* tmp2142660;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2632, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2634 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2632, &$s2633);
    start2631 = $tmp2634;
    if (((panda$core$Bit) { !start2631.nonnull }).value) {
    {
        panda$collections$ImmutableArray* $tmp2636 = NULL;
        panda$collections$ImmutableArray* $tmp2635 = $tmp2636;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2636));
        return $tmp2635;
    }
    }
    panda$collections$Array* $tmp2640 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2640);
    panda$collections$Array* $tmp2639 = $tmp2640;
    panda$collections$Array* $tmp2638 = $tmp2639;
    result2637 = $tmp2638;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2638));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2639));
    org$pandalanguage$pandac$ASTNode* $tmp2644 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp2643 = $tmp2644;
    org$pandalanguage$pandac$ASTNode* $tmp2642 = $tmp2643;
    t2641 = $tmp2642;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2642));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2643));
    if (((panda$core$Bit) { t2641 == NULL }).value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2646 = NULL;
            tmp2122645 = $tmp2646;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2646));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2637));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2641));
            }
            panda$collections$ImmutableArray* $tmp2647 = tmp2122645;
            return $tmp2647;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(result2637, ((panda$core$Object*) t2641));
    $l2648:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2651, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2652 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2651);
    bool $tmp2650 = ((panda$core$Bit) { $tmp2652.nonnull }).value;
    if (!$tmp2650) goto $l2649;
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2653 = t2641;
            org$pandalanguage$pandac$ASTNode* $tmp2656 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2655 = $tmp2656;
            org$pandalanguage$pandac$ASTNode* $tmp2654 = $tmp2655;
            t2641 = $tmp2654;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2654));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2655));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2653));
        }
        if (((panda$core$Bit) { t2641 == NULL }).value) {
        {
            {
                panda$collections$ImmutableArray* $tmp2658 = NULL;
                tmp2132657 = $tmp2658;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2658));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2637));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2641));
                }
                panda$collections$ImmutableArray* $tmp2659 = tmp2132657;
                return $tmp2659;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result2637, ((panda$core$Object*) t2641));
    }
    goto $l2648;
    $l2649:;
    {
        panda$collections$ImmutableArray* $tmp2663 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result2637);
        panda$collections$ImmutableArray* $tmp2662 = $tmp2663;
        panda$collections$ImmutableArray* $tmp2661 = $tmp2662;
        tmp2142660 = $tmp2661;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2661));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2662));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2637));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2641));
        }
        panda$collections$ImmutableArray* $tmp2664 = tmp2142660;
        return $tmp2664;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result2665;
    org$pandalanguage$pandac$parser$Token$nullable next2671;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2672;
    panda$collections$ImmutableArray* tmp2152678;
    panda$collections$Array* $tmp2668 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2668);
    panda$collections$Array* $tmp2667 = $tmp2668;
    panda$collections$Array* $tmp2666 = $tmp2667;
    result2665 = $tmp2666;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2666));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2667));
    $l2669:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2672, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2673 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2672);
        next2671 = $tmp2673;
        if (((panda$core$Bit) { !next2671.nonnull }).value) {
        {
            goto $l2670;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2675 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2677 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next2671.value));
        panda$core$String* $tmp2676 = $tmp2677;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2675, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) next2671.value).position, $tmp2676);
        org$pandalanguage$pandac$ASTNode* $tmp2674 = $tmp2675;
        panda$collections$Array$add$panda$collections$Array$T(result2665, ((panda$core$Object*) $tmp2674));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2674));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2676));
    }
    }
    $l2670:;
    {
        panda$collections$ImmutableArray* $tmp2681 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result2665);
        panda$collections$ImmutableArray* $tmp2680 = $tmp2681;
        panda$collections$ImmutableArray* $tmp2679 = $tmp2680;
        tmp2152678 = $tmp2679;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2679));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2680));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2665));
        panda$collections$ImmutableArray* $tmp2682 = tmp2152678;
        return $tmp2682;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2683;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2684;
    panda$core$MutableString* result2689;
    org$pandalanguage$pandac$parser$Token next2695;
    org$pandalanguage$pandac$ASTNode* tmp2162700;
    org$pandalanguage$pandac$ASTNode* tmp2172705;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2684, ((panda$core$Int64) { 11 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2686 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2684, &$s2685);
    start2683 = $tmp2686;
    if (((panda$core$Bit) { !start2683.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2688 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2687 = $tmp2688;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2688));
        return $tmp2687;
    }
    }
    panda$core$MutableString* $tmp2692 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp2692);
    panda$core$MutableString* $tmp2691 = $tmp2692;
    panda$core$MutableString* $tmp2690 = $tmp2691;
    result2689 = $tmp2690;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2690));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2691));
    $l2693:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp2696 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next2695 = $tmp2696;
        panda$core$Bit $tmp2697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next2695.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp2697.value) {
        {
            goto $l2694;
        }
        }
        panda$core$Bit $tmp2698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next2695.kind.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp2698.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start2683.value), &$s2699);
            {
                org$pandalanguage$pandac$ASTNode* $tmp2701 = NULL;
                tmp2162700 = $tmp2701;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2701));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2689));
                org$pandalanguage$pandac$ASTNode* $tmp2702 = tmp2162700;
                return $tmp2702;
            }
        }
        }
        panda$core$String* $tmp2704 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next2695);
        panda$core$String* $tmp2703 = $tmp2704;
        panda$core$MutableString$append$panda$core$String(result2689, $tmp2703);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2703));
    }
    }
    $l2694:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2708 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2710 = panda$core$MutableString$finish$R$panda$core$String(result2689);
        panda$core$String* $tmp2709 = $tmp2710;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2708, ((panda$core$Int64) { 34 }), ((org$pandalanguage$pandac$parser$Token) start2683.value).position, $tmp2709);
        org$pandalanguage$pandac$ASTNode* $tmp2707 = $tmp2708;
        org$pandalanguage$pandac$ASTNode* $tmp2706 = $tmp2707;
        tmp2172705 = $tmp2706;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2706));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2707));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2709));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2689));
        org$pandalanguage$pandac$ASTNode* $tmp2711 = tmp2172705;
        return $tmp2711;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id2712;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2713;
    org$pandalanguage$pandac$ASTNode* t2718;
    org$pandalanguage$pandac$ASTNode* tmp2182722;
    org$pandalanguage$pandac$ASTNode* tmp2192725;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2713, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2715 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2713, &$s2714);
    id2712 = $tmp2715;
    if (((panda$core$Bit) { !id2712.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2717 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2716 = $tmp2717;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2717));
        return $tmp2716;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2721 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp2720 = $tmp2721;
    org$pandalanguage$pandac$ASTNode* $tmp2719 = $tmp2720;
    t2718 = $tmp2719;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2719));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2720));
    if (((panda$core$Bit) { t2718 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2723 = NULL;
            tmp2182722 = $tmp2723;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2723));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2718));
            org$pandalanguage$pandac$ASTNode* $tmp2724 = tmp2182722;
            return $tmp2724;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp2728 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2730 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2712.value));
        panda$core$String* $tmp2729 = $tmp2730;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp2728, ((panda$core$Int64) { 28 }), ((org$pandalanguage$pandac$parser$Token) id2712.value).position, $tmp2729, t2718);
        org$pandalanguage$pandac$ASTNode* $tmp2727 = $tmp2728;
        org$pandalanguage$pandac$ASTNode* $tmp2726 = $tmp2727;
        tmp2192725 = $tmp2726;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2726));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2727));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2729));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2718));
        org$pandalanguage$pandac$ASTNode* $tmp2731 = tmp2192725;
        return $tmp2731;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2732;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2733;
    panda$collections$Array* result2738;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2742;
    org$pandalanguage$pandac$ASTNode* param2744;
    panda$collections$ImmutableArray* tmp2202748;
    panda$collections$ImmutableArray* tmp2232750;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2755;
    panda$collections$ImmutableArray* tmp2212761;
    panda$collections$ImmutableArray* tmp2242763;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2765;
    panda$collections$ImmutableArray* tmp2222768;
    panda$collections$ImmutableArray* tmp2252770;
    panda$collections$ImmutableArray* tmp2262772;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2733, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2735 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2733, &$s2734);
    start2732 = $tmp2735;
    if (((panda$core$Bit) { !start2732.nonnull }).value) {
    {
        panda$collections$ImmutableArray* $tmp2737 = NULL;
        panda$collections$ImmutableArray* $tmp2736 = $tmp2737;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2737));
        return $tmp2736;
    }
    }
    panda$collections$Array* $tmp2741 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2741);
    panda$collections$Array* $tmp2740 = $tmp2741;
    panda$collections$Array* $tmp2739 = $tmp2740;
    result2738 = $tmp2739;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2739));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2740));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2742, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2743 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2742);
    if (((panda$core$Bit) { !$tmp2743.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2747 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        org$pandalanguage$pandac$ASTNode* $tmp2746 = $tmp2747;
        org$pandalanguage$pandac$ASTNode* $tmp2745 = $tmp2746;
        param2744 = $tmp2745;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2745));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2746));
        if (((panda$core$Bit) { param2744 == NULL }).value) {
        {
            {
                panda$collections$ImmutableArray* $tmp2749 = NULL;
                tmp2202748 = $tmp2749;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2749));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param2744));
                {
                    tmp2232750 = tmp2202748;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2738));
                    panda$collections$ImmutableArray* $tmp2751 = tmp2232750;
                    return $tmp2751;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result2738, ((panda$core$Object*) param2744));
        $l2752:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2755, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2756 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2755);
        bool $tmp2754 = ((panda$core$Bit) { $tmp2756.nonnull }).value;
        if (!$tmp2754) goto $l2753;
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2757 = param2744;
                org$pandalanguage$pandac$ASTNode* $tmp2760 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp2759 = $tmp2760;
                org$pandalanguage$pandac$ASTNode* $tmp2758 = $tmp2759;
                param2744 = $tmp2758;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2758));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2759));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2757));
            }
            if (((panda$core$Bit) { param2744 == NULL }).value) {
            {
                {
                    panda$collections$ImmutableArray* $tmp2762 = NULL;
                    tmp2212761 = $tmp2762;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2762));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param2744));
                    {
                        tmp2242763 = tmp2212761;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2738));
                        panda$collections$ImmutableArray* $tmp2764 = tmp2242763;
                        return $tmp2764;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result2738, ((panda$core$Object*) param2744));
        }
        goto $l2752;
        $l2753:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2765, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2767 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2765, &$s2766);
        if (((panda$core$Bit) { !$tmp2767.nonnull }).value) {
        {
            {
                panda$collections$ImmutableArray* $tmp2769 = NULL;
                tmp2222768 = $tmp2769;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2769));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param2744));
                {
                    tmp2252770 = tmp2222768;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2738));
                    panda$collections$ImmutableArray* $tmp2771 = tmp2252770;
                    return $tmp2771;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param2744));
    }
    }
    {
        panda$collections$ImmutableArray* $tmp2775 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result2738);
        panda$collections$ImmutableArray* $tmp2774 = $tmp2775;
        panda$collections$ImmutableArray* $tmp2773 = $tmp2774;
        tmp2262772 = $tmp2773;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2773));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2774));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2738));
        panda$collections$ImmutableArray* $tmp2776 = tmp2262772;
        return $tmp2776;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    org$pandalanguage$pandac$ASTNode* $tmp2778 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2777 = $tmp2778;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2778));
    return $tmp2777;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind2779;
    org$pandalanguage$pandac$parser$Token$nullable start2780;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2781;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2783;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2788;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2789;
    panda$core$String* name2790;
    org$pandalanguage$pandac$ASTNode* tmp2272794;
    panda$collections$ImmutableArray* params2797;
    org$pandalanguage$pandac$ASTNode* tmp2282801;
    org$pandalanguage$pandac$ASTNode* returnType2804;
    org$pandalanguage$pandac$ASTNode* tmp2292811;
    panda$collections$ImmutableArray* body2816;
    org$pandalanguage$pandac$ASTNode* tmp2302823;
    org$pandalanguage$pandac$parser$Token token2828;
    panda$core$String* tokenText2830;
    org$pandalanguage$pandac$ASTNode* post2845;
    org$pandalanguage$pandac$ASTNode* tmp2312849;
    org$pandalanguage$pandac$ASTNode* tmp2322851;
    org$pandalanguage$pandac$ASTNode* tmp2332853;
    memset(&kind2779, 0, sizeof(kind2779));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2781, ((panda$core$Int64) { 20 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2782 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2781);
    start2780 = $tmp2782;
    if (((panda$core$Bit) { !start2780.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2783, ((panda$core$Int64) { 21 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2785 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2783, &$s2784);
        start2780 = $tmp2785;
        if (((panda$core$Bit) { !start2780.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2787 = NULL;
            org$pandalanguage$pandac$ASTNode* $tmp2786 = $tmp2787;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2787));
            return $tmp2786;
        }
        }
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2788, ((panda$core$Int64) { 0 }));
        kind2779 = $tmp2788;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2789, ((panda$core$Int64) { 1 }));
        kind2779 = $tmp2789;
    }
    }
    panda$core$String* $tmp2793 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    panda$core$String* $tmp2792 = $tmp2793;
    panda$core$String* $tmp2791 = $tmp2792;
    name2790 = $tmp2791;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2791));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2792));
    if (((panda$core$Bit) { name2790 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2795 = NULL;
            tmp2272794 = $tmp2795;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2795));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2790));
            org$pandalanguage$pandac$ASTNode* $tmp2796 = tmp2272794;
            return $tmp2796;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp2800 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$collections$ImmutableArray* $tmp2799 = $tmp2800;
    panda$collections$ImmutableArray* $tmp2798 = $tmp2799;
    params2797 = $tmp2798;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2798));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2799));
    if (((panda$core$Bit) { params2797 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2802 = NULL;
            tmp2282801 = $tmp2802;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2802));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params2797));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2790));
            }
            org$pandalanguage$pandac$ASTNode* $tmp2803 = tmp2282801;
            return $tmp2803;
        }
    }
    }
    memset(&returnType2804, 0, sizeof(returnType2804));
    org$pandalanguage$pandac$parser$Token $tmp2805 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2805.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp2806.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2807 = returnType2804;
            org$pandalanguage$pandac$ASTNode* $tmp2810 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2809 = $tmp2810;
            org$pandalanguage$pandac$ASTNode* $tmp2808 = $tmp2809;
            returnType2804 = $tmp2808;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2808));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2809));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2807));
        }
        if (((panda$core$Bit) { returnType2804 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2812 = NULL;
                tmp2292811 = $tmp2812;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2812));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params2797));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2804));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2790));
                }
                org$pandalanguage$pandac$ASTNode* $tmp2813 = tmp2292811;
                return $tmp2813;
            }
        }
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2814 = returnType2804;
            org$pandalanguage$pandac$ASTNode* $tmp2815 = NULL;
            returnType2804 = $tmp2815;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2815));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2814));
        }
    }
    }
    memset(&body2816, 0, sizeof(body2816));
    org$pandalanguage$pandac$parser$Token $tmp2817 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2817.kind.$rawValue, ((panda$core$Int64) { 99 }));
    if ($tmp2818.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2819 = body2816;
            panda$collections$ImmutableArray* $tmp2822 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            panda$collections$ImmutableArray* $tmp2821 = $tmp2822;
            panda$collections$ImmutableArray* $tmp2820 = $tmp2821;
            body2816 = $tmp2820;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2820));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2821));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2819));
        }
        if (((panda$core$Bit) { body2816 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2824 = NULL;
                tmp2302823 = $tmp2824;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2824));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2816));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params2797));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2804));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2790));
                }
                org$pandalanguage$pandac$ASTNode* $tmp2825 = tmp2302823;
                return $tmp2825;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$collections$ImmutableArray* $tmp2826 = body2816;
            panda$collections$ImmutableArray* $tmp2827 = NULL;
            body2816 = $tmp2827;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2827));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2826));
        }
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2829 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token2828 = $tmp2829;
    panda$core$String* $tmp2833 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token2828);
    panda$core$String* $tmp2832 = $tmp2833;
    panda$core$String* $tmp2831 = $tmp2832;
    tokenText2830 = $tmp2831;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2831));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2832));
    panda$core$Bit $tmp2835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token2828.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp2834 = $tmp2835.value;
    if (!$tmp2834) goto $l2836;
    panda$core$Bit $tmp2839 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText2830, &$s2838);
    bool $tmp2837 = $tmp2839.value;
    if ($tmp2837) goto $l2840;
    panda$core$Bit $tmp2842 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText2830, &$s2841);
    $tmp2837 = $tmp2842.value;
    $l2840:;
    panda$core$Bit $tmp2843 = { $tmp2837 };
    $tmp2834 = $tmp2843.value;
    $l2836:;
    panda$core$Bit $tmp2844 = { $tmp2834 };
    if ($tmp2844.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2848 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        org$pandalanguage$pandac$ASTNode* $tmp2847 = $tmp2848;
        org$pandalanguage$pandac$ASTNode* $tmp2846 = $tmp2847;
        post2845 = $tmp2846;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2846));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2847));
        if (((panda$core$Bit) { post2845 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2850 = NULL;
                tmp2312849 = $tmp2850;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2850));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post2845));
                {
                    tmp2322851 = tmp2312849;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2816));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params2797));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText2830));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2804));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2790));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2852 = tmp2322851;
                    return $tmp2852;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post2845));
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp2856 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2856, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start2780.value).position, p_doccomment, p_annotations, kind2779, name2790, params2797, returnType2804, body2816);
        org$pandalanguage$pandac$ASTNode* $tmp2855 = $tmp2856;
        org$pandalanguage$pandac$ASTNode* $tmp2854 = $tmp2855;
        tmp2332853 = $tmp2854;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2854));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2855));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2816));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params2797));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText2830));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2804));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2790));
        }
        org$pandalanguage$pandac$ASTNode* $tmp2857 = tmp2332853;
        return $tmp2857;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start2858;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2859;
    panda$collections$ImmutableArray* params2864;
    org$pandalanguage$pandac$ASTNode* tmp2342868;
    panda$collections$ImmutableArray* b2871;
    org$pandalanguage$pandac$ASTNode* tmp2352875;
    org$pandalanguage$pandac$parser$Token token2878;
    panda$core$String* tokenText2880;
    org$pandalanguage$pandac$ASTNode* post2895;
    org$pandalanguage$pandac$ASTNode* tmp2362899;
    org$pandalanguage$pandac$ASTNode* tmp2372901;
    org$pandalanguage$pandac$ASTNode* tmp2382903;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2907;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2859, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2861 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2859, &$s2860);
    start2858 = $tmp2861;
    if (((panda$core$Bit) { !start2858.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2863 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2862 = $tmp2863;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2863));
        return $tmp2862;
    }
    }
    panda$collections$ImmutableArray* $tmp2867 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$collections$ImmutableArray* $tmp2866 = $tmp2867;
    panda$collections$ImmutableArray* $tmp2865 = $tmp2866;
    params2864 = $tmp2865;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2865));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2866));
    if (((panda$core$Bit) { params2864 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2869 = NULL;
            tmp2342868 = $tmp2869;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2869));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params2864));
            org$pandalanguage$pandac$ASTNode* $tmp2870 = tmp2342868;
            return $tmp2870;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp2874 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$collections$ImmutableArray* $tmp2873 = $tmp2874;
    panda$collections$ImmutableArray* $tmp2872 = $tmp2873;
    b2871 = $tmp2872;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2872));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2873));
    if (((panda$core$Bit) { b2871 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2876 = NULL;
            tmp2352875 = $tmp2876;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2876));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params2864));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b2871));
            }
            org$pandalanguage$pandac$ASTNode* $tmp2877 = tmp2352875;
            return $tmp2877;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2879 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token2878 = $tmp2879;
    panda$core$String* $tmp2883 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token2878);
    panda$core$String* $tmp2882 = $tmp2883;
    panda$core$String* $tmp2881 = $tmp2882;
    tokenText2880 = $tmp2881;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2881));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2882));
    panda$core$Bit $tmp2885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token2878.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp2884 = $tmp2885.value;
    if (!$tmp2884) goto $l2886;
    panda$core$Bit $tmp2889 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText2880, &$s2888);
    bool $tmp2887 = $tmp2889.value;
    if ($tmp2887) goto $l2890;
    panda$core$Bit $tmp2892 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText2880, &$s2891);
    $tmp2887 = $tmp2892.value;
    $l2890:;
    panda$core$Bit $tmp2893 = { $tmp2887 };
    $tmp2884 = $tmp2893.value;
    $l2886:;
    panda$core$Bit $tmp2894 = { $tmp2884 };
    if ($tmp2894.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2898 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        org$pandalanguage$pandac$ASTNode* $tmp2897 = $tmp2898;
        org$pandalanguage$pandac$ASTNode* $tmp2896 = $tmp2897;
        post2895 = $tmp2896;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2896));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2897));
        if (((panda$core$Bit) { post2895 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2900 = NULL;
                tmp2362899 = $tmp2900;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2900));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post2895));
                {
                    tmp2372901 = tmp2362899;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params2864));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText2880));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b2871));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2902 = tmp2372901;
                    return $tmp2902;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post2895));
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp2906 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2907, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2906, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start2858.value).position, p_doccomment, p_annotations, $tmp2907, &$s2908, params2864, NULL, b2871);
        org$pandalanguage$pandac$ASTNode* $tmp2905 = $tmp2906;
        org$pandalanguage$pandac$ASTNode* $tmp2904 = $tmp2905;
        tmp2382903 = $tmp2904;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2904));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2905));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params2864));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText2880));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b2871));
        }
        org$pandalanguage$pandac$ASTNode* $tmp2909 = tmp2382903;
        return $tmp2909;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl2910;
    org$pandalanguage$pandac$ASTNode* tmp2392914;
    org$pandalanguage$pandac$ASTNode* tmp2402917;
    org$pandalanguage$pandac$ASTNode* $tmp2913 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    org$pandalanguage$pandac$ASTNode* $tmp2912 = $tmp2913;
    org$pandalanguage$pandac$ASTNode* $tmp2911 = $tmp2912;
    decl2910 = $tmp2911;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2911));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2912));
    if (((panda$core$Bit) { decl2910 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2915 = NULL;
            tmp2392914 = $tmp2915;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2915));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2910));
            org$pandalanguage$pandac$ASTNode* $tmp2916 = tmp2392914;
            return $tmp2916;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp2920 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp2922 = (($fn2921) decl2910->$class->vtable[2])(decl2910);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp2920, ((panda$core$Int64) { 14 }), $tmp2922, p_doccomment, p_annotations, decl2910);
        org$pandalanguage$pandac$ASTNode* $tmp2919 = $tmp2920;
        org$pandalanguage$pandac$ASTNode* $tmp2918 = $tmp2919;
        tmp2402917 = $tmp2918;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2918));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2919));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2910));
        org$pandalanguage$pandac$ASTNode* $tmp2923 = tmp2402917;
        return $tmp2923;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name2924;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2925;
    panda$collections$Array* fields2930;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2934;
    org$pandalanguage$pandac$ASTNode* field2938;
    org$pandalanguage$pandac$ASTNode* tmp2412942;
    org$pandalanguage$pandac$ASTNode* tmp2432944;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2949;
    org$pandalanguage$pandac$ASTNode* tmp2422955;
    org$pandalanguage$pandac$ASTNode* tmp2442957;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2959;
    org$pandalanguage$pandac$ASTNode* tmp2452962;
    org$pandalanguage$pandac$ASTNode* tmp2462965;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2925, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2927 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2925, &$s2926);
    name2924 = $tmp2927;
    if (((panda$core$Bit) { !name2924.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2929 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2928 = $tmp2929;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2929));
        return $tmp2928;
    }
    }
    panda$collections$Array* $tmp2933 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2933);
    panda$collections$Array* $tmp2932 = $tmp2933;
    panda$collections$Array* $tmp2931 = $tmp2932;
    fields2930 = $tmp2931;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2931));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2932));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2934, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2935 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2934);
    if (((panda$core$Bit) { $tmp2935.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp2936 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp2937 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2936.kind.$rawValue, ((panda$core$Int64) { 104 }));
        if ($tmp2937.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2941 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp2940 = $tmp2941;
            org$pandalanguage$pandac$ASTNode* $tmp2939 = $tmp2940;
            field2938 = $tmp2939;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2939));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2940));
            if (((panda$core$Bit) { field2938 == NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp2943 = NULL;
                    tmp2412942 = $tmp2943;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2943));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2938));
                    {
                        tmp2432944 = tmp2412942;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields2930));
                        org$pandalanguage$pandac$ASTNode* $tmp2945 = tmp2432944;
                        return $tmp2945;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(fields2930, ((panda$core$Object*) field2938));
            $l2946:;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2949, ((panda$core$Int64) { 105 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2950 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2949);
            bool $tmp2948 = ((panda$core$Bit) { $tmp2950.nonnull }).value;
            if (!$tmp2948) goto $l2947;
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp2951 = field2938;
                    org$pandalanguage$pandac$ASTNode* $tmp2954 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    org$pandalanguage$pandac$ASTNode* $tmp2953 = $tmp2954;
                    org$pandalanguage$pandac$ASTNode* $tmp2952 = $tmp2953;
                    field2938 = $tmp2952;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2952));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2953));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2951));
                }
                if (((panda$core$Bit) { field2938 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2956 = NULL;
                        tmp2422955 = $tmp2956;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2956));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2938));
                        {
                            tmp2442957 = tmp2422955;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields2930));
                            org$pandalanguage$pandac$ASTNode* $tmp2958 = tmp2442957;
                            return $tmp2958;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(fields2930, ((panda$core$Object*) field2938));
            }
            goto $l2946;
            $l2947:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field2938));
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2959, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2961 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2959, &$s2960);
        if (((panda$core$Bit) { !$tmp2961.nonnull }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2963 = NULL;
                tmp2452962 = $tmp2963;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2963));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields2930));
                org$pandalanguage$pandac$ASTNode* $tmp2964 = tmp2452962;
                return $tmp2964;
            }
        }
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp2968 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2970 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2924.value));
        panda$core$String* $tmp2969 = $tmp2970;
        panda$collections$ImmutableArray* $tmp2972 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields2930);
        panda$collections$ImmutableArray* $tmp2971 = $tmp2972;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2968, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) name2924.value).position, p_doccomment, $tmp2969, $tmp2971);
        org$pandalanguage$pandac$ASTNode* $tmp2967 = $tmp2968;
        org$pandalanguage$pandac$ASTNode* $tmp2966 = $tmp2967;
        tmp2462965 = $tmp2966;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2966));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2967));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2971));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2969));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields2930));
        org$pandalanguage$pandac$ASTNode* $tmp2973 = tmp2462965;
        return $tmp2973;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start2974;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2975;
    org$pandalanguage$pandac$parser$Token$nullable name2980;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2981;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2986;
    panda$collections$Array* members2991;
    org$pandalanguage$pandac$ASTNode* dc2995;
    org$pandalanguage$pandac$parser$Token next2999;
    org$pandalanguage$pandac$parser$Token$Kind $match$1854_133001;
    org$pandalanguage$pandac$ASTNode* c3053;
    org$pandalanguage$pandac$ASTNode* tmp2473057;
    org$pandalanguage$pandac$ASTNode* tmp2483059;
    panda$collections$ImmutableArray* a3063;
    org$pandalanguage$pandac$parser$Token next3069;
    org$pandalanguage$pandac$parser$Token$Kind $match$1878_133071;
    org$pandalanguage$pandac$ASTNode* tmp2543083;
    org$pandalanguage$pandac$ASTNode* tmp2553104;
    org$pandalanguage$pandac$ASTNode* decl3112;
    org$pandalanguage$pandac$ASTNode* tmp2493116;
    org$pandalanguage$pandac$ASTNode* tmp2563118;
    org$pandalanguage$pandac$ASTNode* decl3127;
    org$pandalanguage$pandac$ASTNode* tmp2503131;
    org$pandalanguage$pandac$ASTNode* tmp2573133;
    org$pandalanguage$pandac$ASTNode* decl3142;
    org$pandalanguage$pandac$ASTNode* tmp2513146;
    org$pandalanguage$pandac$ASTNode* tmp2583148;
    org$pandalanguage$pandac$ASTNode* decl3161;
    org$pandalanguage$pandac$ASTNode* tmp2523165;
    org$pandalanguage$pandac$ASTNode* tmp2593167;
    org$pandalanguage$pandac$ASTNode* decl3188;
    org$pandalanguage$pandac$ASTNode* tmp2533192;
    org$pandalanguage$pandac$ASTNode* tmp2603194;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3203;
    org$pandalanguage$pandac$ASTNode* tmp2613213;
    org$pandalanguage$pandac$ASTNode* tmp2623216;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp3220;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2975, ((panda$core$Int64) { 19 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2977 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2975, &$s2976);
    start2974 = $tmp2977;
    if (((panda$core$Bit) { !start2974.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2979 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2978 = $tmp2979;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2979));
        return $tmp2978;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2981, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2983 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2981, &$s2982);
    name2980 = $tmp2983;
    if (((panda$core$Bit) { !name2980.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2985 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2984 = $tmp2985;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2985));
        return $tmp2984;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2986, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2988 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2986, &$s2987);
    if (((panda$core$Bit) { !$tmp2988.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2990 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp2989 = $tmp2990;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2990));
        return $tmp2989;
    }
    }
    panda$collections$Array* $tmp2994 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2994);
    panda$collections$Array* $tmp2993 = $tmp2994;
    panda$collections$Array* $tmp2992 = $tmp2993;
    members2991 = $tmp2992;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2992));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2993));
    org$pandalanguage$pandac$ASTNode* $tmp2996 = NULL;
    dc2995 = $tmp2996;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2996));
    $l2997:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp3000 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next2999 = $tmp3000;
        {
            $match$1854_133001 = next2999.kind;
            panda$core$Bit $tmp3011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133001.$rawValue, ((panda$core$Int64) { 17 }));
            bool $tmp3010 = $tmp3011.value;
            if ($tmp3010) goto $l3012;
            panda$core$Bit $tmp3013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133001.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp3010 = $tmp3013.value;
            $l3012:;
            panda$core$Bit $tmp3014 = { $tmp3010 };
            bool $tmp3009 = $tmp3014.value;
            if ($tmp3009) goto $l3015;
            panda$core$Bit $tmp3016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133001.$rawValue, ((panda$core$Int64) { 19 }));
            $tmp3009 = $tmp3016.value;
            $l3015:;
            panda$core$Bit $tmp3017 = { $tmp3009 };
            bool $tmp3008 = $tmp3017.value;
            if ($tmp3008) goto $l3018;
            panda$core$Bit $tmp3019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133001.$rawValue, ((panda$core$Int64) { 21 }));
            $tmp3008 = $tmp3019.value;
            $l3018:;
            panda$core$Bit $tmp3020 = { $tmp3008 };
            bool $tmp3007 = $tmp3020.value;
            if ($tmp3007) goto $l3021;
            panda$core$Bit $tmp3022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133001.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp3007 = $tmp3022.value;
            $l3021:;
            panda$core$Bit $tmp3023 = { $tmp3007 };
            bool $tmp3006 = $tmp3023.value;
            if ($tmp3006) goto $l3024;
            panda$core$Bit $tmp3025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133001.$rawValue, ((panda$core$Int64) { 13 }));
            $tmp3006 = $tmp3025.value;
            $l3024:;
            panda$core$Bit $tmp3026 = { $tmp3006 };
            bool $tmp3005 = $tmp3026.value;
            if ($tmp3005) goto $l3027;
            panda$core$Bit $tmp3028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133001.$rawValue, ((panda$core$Int64) { 23 }));
            $tmp3005 = $tmp3028.value;
            $l3027:;
            panda$core$Bit $tmp3029 = { $tmp3005 };
            bool $tmp3004 = $tmp3029.value;
            if ($tmp3004) goto $l3030;
            panda$core$Bit $tmp3031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133001.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp3004 = $tmp3031.value;
            $l3030:;
            panda$core$Bit $tmp3032 = { $tmp3004 };
            bool $tmp3003 = $tmp3032.value;
            if ($tmp3003) goto $l3033;
            panda$core$Bit $tmp3034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133001.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp3003 = $tmp3034.value;
            $l3033:;
            panda$core$Bit $tmp3035 = { $tmp3003 };
            bool $tmp3002 = $tmp3035.value;
            if ($tmp3002) goto $l3036;
            panda$core$Bit $tmp3037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133001.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp3002 = $tmp3037.value;
            $l3036:;
            panda$core$Bit $tmp3038 = { $tmp3002 };
            if ($tmp3038.value) {
            {
                goto $l2998;
            }
            }
            else {
            panda$core$Bit $tmp3039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133001.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp3039.value) {
            {
                if (((panda$core$Bit) { dc2995 != NULL }).value) {
                {
                    panda$core$String* $tmp3044 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next2999);
                    panda$core$String* $tmp3043 = $tmp3044;
                    panda$core$String* $tmp3045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3042, $tmp3043);
                    panda$core$String* $tmp3041 = $tmp3045;
                    panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3046);
                    panda$core$String* $tmp3040 = $tmp3047;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next2999, $tmp3040);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3040));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3041));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3043));
                }
                }
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3048 = dc2995;
                    org$pandalanguage$pandac$ASTNode* $tmp3051 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    org$pandalanguage$pandac$ASTNode* $tmp3050 = $tmp3051;
                    org$pandalanguage$pandac$ASTNode* $tmp3049 = $tmp3050;
                    dc2995 = $tmp3049;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3049));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3050));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3048));
                }
            }
            }
            else {
            panda$core$Bit $tmp3052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133001.$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp3052.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3056 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2995);
                org$pandalanguage$pandac$ASTNode* $tmp3055 = $tmp3056;
                org$pandalanguage$pandac$ASTNode* $tmp3054 = $tmp3055;
                c3053 = $tmp3054;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3054));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3055));
                if (((panda$core$Bit) { c3053 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3058 = NULL;
                        tmp2473057 = $tmp3058;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3058));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c3053));
                        {
                            tmp2483059 = tmp2473057;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2995));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2991));
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp3060 = tmp2483059;
                            return $tmp3060;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members2991, ((panda$core$Object*) c3053));
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3061 = dc2995;
                    org$pandalanguage$pandac$ASTNode* $tmp3062 = NULL;
                    dc2995 = $tmp3062;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3062));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3061));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c3053));
            }
            }
            else {
            {
                goto $l2998;
            }
            }
            }
            }
        }
    }
    }
    $l2998:;
    panda$collections$ImmutableArray* $tmp3066 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
    panda$collections$ImmutableArray$init($tmp3066);
    panda$collections$ImmutableArray* $tmp3065 = $tmp3066;
    panda$collections$ImmutableArray* $tmp3064 = $tmp3065;
    a3063 = $tmp3064;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3064));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3065));
    $l3067:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp3070 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next3069 = $tmp3070;
        {
            $match$1878_133071 = next3069.kind;
            panda$core$Bit $tmp3072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133071.$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp3072.value) {
            {
                panda$core$Int64 $tmp3073 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3063);
                panda$core$Bit $tmp3074 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3073, ((panda$core$Int64) { 0 }));
                if ($tmp3074.value) {
                {
                    panda$core$String* $tmp3079 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3069);
                    panda$core$String* $tmp3078 = $tmp3079;
                    panda$core$String* $tmp3080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3077, $tmp3078);
                    panda$core$String* $tmp3076 = $tmp3080;
                    panda$core$String* $tmp3082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3076, &$s3081);
                    panda$core$String* $tmp3075 = $tmp3082;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3069, $tmp3075);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3075));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3076));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3078));
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3084 = NULL;
                        tmp2543083 = $tmp3084;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3084));
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2995));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3063));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2991));
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp3085 = tmp2543083;
                        return $tmp3085;
                    }
                }
                }
                {
                    panda$collections$ImmutableArray* $tmp3086 = a3063;
                    panda$collections$ImmutableArray* $tmp3089 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                    panda$collections$ImmutableArray* $tmp3088 = $tmp3089;
                    panda$collections$ImmutableArray* $tmp3087 = $tmp3088;
                    a3063 = $tmp3087;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3087));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3088));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3086));
                }
            }
            }
            else {
            panda$core$Bit $tmp3090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133071.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp3090.value) {
            {
                bool $tmp3091 = ((panda$core$Bit) { dc2995 != NULL }).value;
                if ($tmp3091) goto $l3092;
                panda$core$Int64 $tmp3093 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3063);
                panda$core$Bit $tmp3094 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3093, ((panda$core$Int64) { 0 }));
                $tmp3091 = $tmp3094.value;
                $l3092:;
                panda$core$Bit $tmp3095 = { $tmp3091 };
                if ($tmp3095.value) {
                {
                    panda$core$String* $tmp3100 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3069);
                    panda$core$String* $tmp3099 = $tmp3100;
                    panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3098, $tmp3099);
                    panda$core$String* $tmp3097 = $tmp3101;
                    panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, &$s3102);
                    panda$core$String* $tmp3096 = $tmp3103;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3069, $tmp3096);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3096));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3097));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3099));
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3105 = NULL;
                        tmp2553104 = $tmp3105;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3105));
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2995));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3063));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2991));
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp3106 = tmp2553104;
                        return $tmp3106;
                    }
                }
                }
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3107 = dc2995;
                    org$pandalanguage$pandac$ASTNode* $tmp3110 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    org$pandalanguage$pandac$ASTNode* $tmp3109 = $tmp3110;
                    org$pandalanguage$pandac$ASTNode* $tmp3108 = $tmp3109;
                    dc2995 = $tmp3108;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3108));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3109));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3107));
                }
            }
            }
            else {
            panda$core$Bit $tmp3111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133071.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp3111.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3115 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2995, a3063);
                org$pandalanguage$pandac$ASTNode* $tmp3114 = $tmp3115;
                org$pandalanguage$pandac$ASTNode* $tmp3113 = $tmp3114;
                decl3112 = $tmp3113;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3114));
                if (((panda$core$Bit) { decl3112 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3117 = NULL;
                        tmp2493116 = $tmp3117;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3117));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3112));
                        {
                            tmp2563118 = tmp2493116;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2995));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3063));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2991));
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp3119 = tmp2563118;
                            return $tmp3119;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members2991, ((panda$core$Object*) decl3112));
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3120 = dc2995;
                    org$pandalanguage$pandac$ASTNode* $tmp3121 = NULL;
                    dc2995 = $tmp3121;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3121));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3120));
                }
                {
                    panda$collections$ImmutableArray* $tmp3122 = a3063;
                    panda$collections$ImmutableArray* $tmp3125 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp3125);
                    panda$collections$ImmutableArray* $tmp3124 = $tmp3125;
                    panda$collections$ImmutableArray* $tmp3123 = $tmp3124;
                    a3063 = $tmp3123;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3123));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3124));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3122));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3112));
            }
            }
            else {
            panda$core$Bit $tmp3126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133071.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp3126.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3130 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2995, a3063);
                org$pandalanguage$pandac$ASTNode* $tmp3129 = $tmp3130;
                org$pandalanguage$pandac$ASTNode* $tmp3128 = $tmp3129;
                decl3127 = $tmp3128;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3128));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3129));
                if (((panda$core$Bit) { decl3127 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3132 = NULL;
                        tmp2503131 = $tmp3132;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3132));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3127));
                        {
                            tmp2573133 = tmp2503131;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2995));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3063));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2991));
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp3134 = tmp2573133;
                            return $tmp3134;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members2991, ((panda$core$Object*) decl3127));
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3135 = dc2995;
                    org$pandalanguage$pandac$ASTNode* $tmp3136 = NULL;
                    dc2995 = $tmp3136;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3136));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3135));
                }
                {
                    panda$collections$ImmutableArray* $tmp3137 = a3063;
                    panda$collections$ImmutableArray* $tmp3140 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp3140);
                    panda$collections$ImmutableArray* $tmp3139 = $tmp3140;
                    panda$collections$ImmutableArray* $tmp3138 = $tmp3139;
                    a3063 = $tmp3138;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3138));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3139));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3137));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3127));
            }
            }
            else {
            panda$core$Bit $tmp3141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133071.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp3141.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3145 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2995, a3063);
                org$pandalanguage$pandac$ASTNode* $tmp3144 = $tmp3145;
                org$pandalanguage$pandac$ASTNode* $tmp3143 = $tmp3144;
                decl3142 = $tmp3143;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3143));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3144));
                if (((panda$core$Bit) { decl3142 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3147 = NULL;
                        tmp2513146 = $tmp3147;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3147));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3142));
                        {
                            tmp2583148 = tmp2513146;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2995));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3063));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2991));
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp3149 = tmp2583148;
                            return $tmp3149;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members2991, ((panda$core$Object*) decl3142));
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3150 = dc2995;
                    org$pandalanguage$pandac$ASTNode* $tmp3151 = NULL;
                    dc2995 = $tmp3151;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3151));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3150));
                }
                {
                    panda$collections$ImmutableArray* $tmp3152 = a3063;
                    panda$collections$ImmutableArray* $tmp3155 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp3155);
                    panda$collections$ImmutableArray* $tmp3154 = $tmp3155;
                    panda$collections$ImmutableArray* $tmp3153 = $tmp3154;
                    a3063 = $tmp3153;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3153));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3154));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3152));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3142));
            }
            }
            else {
            panda$core$Bit $tmp3157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133071.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp3156 = $tmp3157.value;
            if ($tmp3156) goto $l3158;
            panda$core$Bit $tmp3159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133071.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp3156 = $tmp3159.value;
            $l3158:;
            panda$core$Bit $tmp3160 = { $tmp3156 };
            if ($tmp3160.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3164 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2995, a3063);
                org$pandalanguage$pandac$ASTNode* $tmp3163 = $tmp3164;
                org$pandalanguage$pandac$ASTNode* $tmp3162 = $tmp3163;
                decl3161 = $tmp3162;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3162));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3163));
                if (((panda$core$Bit) { decl3161 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3166 = NULL;
                        tmp2523165 = $tmp3166;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3166));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3161));
                        {
                            tmp2593167 = tmp2523165;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2995));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3063));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2991));
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp3168 = tmp2593167;
                            return $tmp3168;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members2991, ((panda$core$Object*) decl3161));
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3169 = dc2995;
                    org$pandalanguage$pandac$ASTNode* $tmp3170 = NULL;
                    dc2995 = $tmp3170;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3170));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3169));
                }
                {
                    panda$collections$ImmutableArray* $tmp3171 = a3063;
                    panda$collections$ImmutableArray* $tmp3174 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp3174);
                    panda$collections$ImmutableArray* $tmp3173 = $tmp3174;
                    panda$collections$ImmutableArray* $tmp3172 = $tmp3173;
                    a3063 = $tmp3172;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3172));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3173));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3171));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3161));
            }
            }
            else {
            panda$core$Bit $tmp3178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133071.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp3177 = $tmp3178.value;
            if ($tmp3177) goto $l3179;
            panda$core$Bit $tmp3180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133071.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp3177 = $tmp3180.value;
            $l3179:;
            panda$core$Bit $tmp3181 = { $tmp3177 };
            bool $tmp3176 = $tmp3181.value;
            if ($tmp3176) goto $l3182;
            panda$core$Bit $tmp3183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133071.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp3176 = $tmp3183.value;
            $l3182:;
            panda$core$Bit $tmp3184 = { $tmp3176 };
            bool $tmp3175 = $tmp3184.value;
            if ($tmp3175) goto $l3185;
            panda$core$Bit $tmp3186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133071.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp3175 = $tmp3186.value;
            $l3185:;
            panda$core$Bit $tmp3187 = { $tmp3175 };
            if ($tmp3187.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3191 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2995, a3063);
                org$pandalanguage$pandac$ASTNode* $tmp3190 = $tmp3191;
                org$pandalanguage$pandac$ASTNode* $tmp3189 = $tmp3190;
                decl3188 = $tmp3189;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3189));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3190));
                if (((panda$core$Bit) { decl3188 == NULL }).value) {
                {
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3193 = NULL;
                        tmp2533192 = $tmp3193;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3193));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3188));
                        {
                            tmp2603194 = tmp2533192;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2995));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3063));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2991));
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp3195 = tmp2603194;
                            return $tmp3195;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members2991, ((panda$core$Object*) decl3188));
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3196 = dc2995;
                    org$pandalanguage$pandac$ASTNode* $tmp3197 = NULL;
                    dc2995 = $tmp3197;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3197));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3196));
                }
                {
                    panda$collections$ImmutableArray* $tmp3198 = a3063;
                    panda$collections$ImmutableArray* $tmp3201 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp3201);
                    panda$collections$ImmutableArray* $tmp3200 = $tmp3201;
                    panda$collections$ImmutableArray* $tmp3199 = $tmp3200;
                    a3063 = $tmp3199;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3199));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3200));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3198));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3188));
            }
            }
            else {
            panda$core$Bit $tmp3202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133071.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp3202.value) {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3203, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3203, &$s3204);
                goto $l3068;
            }
            }
            else {
            {
                panda$core$String* $tmp3209 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3069);
                panda$core$String* $tmp3208 = $tmp3209;
                panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3207, $tmp3208);
                panda$core$String* $tmp3206 = $tmp3210;
                panda$core$String* $tmp3212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, &$s3211);
                panda$core$String* $tmp3205 = $tmp3212;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3069, $tmp3205);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3205));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3206));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3208));
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3214 = NULL;
                    tmp2613213 = $tmp3214;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3214));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2995));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3063));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2991));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3215 = tmp2613213;
                    return $tmp3215;
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
    $l3068:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3219 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp3220, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp3222 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2980.value));
        panda$core$String* $tmp3221 = $tmp3222;
        panda$collections$ImmutableArray* $tmp3224 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members2991);
        panda$collections$ImmutableArray* $tmp3223 = $tmp3224;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3219, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start2974.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp3220, $tmp3221, NULL, NULL, $tmp3223);
        org$pandalanguage$pandac$ASTNode* $tmp3218 = $tmp3219;
        org$pandalanguage$pandac$ASTNode* $tmp3217 = $tmp3218;
        tmp2623216 = $tmp3217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3218));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3221));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2995));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3063));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2991));
        }
        org$pandalanguage$pandac$ASTNode* $tmp3225 = tmp2623216;
        return $tmp3225;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3226;
    org$pandalanguage$pandac$ASTNode* dc3228;
    org$pandalanguage$pandac$ASTNode* tmp2633234;
    panda$collections$ImmutableArray* a3239;
    org$pandalanguage$pandac$ASTNode* tmp2643243;
    org$pandalanguage$pandac$parser$Token$Kind $match$1964_93246;
    org$pandalanguage$pandac$ASTNode* tmp2653249;
    org$pandalanguage$pandac$ASTNode* tmp2663255;
    org$pandalanguage$pandac$ASTNode* tmp2673261;
    org$pandalanguage$pandac$ASTNode* tmp2683271;
    org$pandalanguage$pandac$ASTNode* tmp2693277;
    org$pandalanguage$pandac$ASTNode* tmp2703295;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3300;
    org$pandalanguage$pandac$ASTNode* tmp2713302;
    org$pandalanguage$pandac$parser$Token $tmp3227 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start3226 = $tmp3227;
    memset(&dc3228, 0, sizeof(dc3228));
    panda$core$Bit $tmp3229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start3226.kind.$rawValue, ((panda$core$Int64) { 11 }));
    if ($tmp3229.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3230 = dc3228;
            org$pandalanguage$pandac$ASTNode* $tmp3233 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp3232 = $tmp3233;
            org$pandalanguage$pandac$ASTNode* $tmp3231 = $tmp3232;
            dc3228 = $tmp3231;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3231));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3232));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3230));
        }
        if (((panda$core$Bit) { dc3228 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3235 = NULL;
                tmp2633234 = $tmp3235;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3235));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3228));
                org$pandalanguage$pandac$ASTNode* $tmp3236 = tmp2633234;
                return $tmp3236;
            }
        }
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3237 = dc3228;
            org$pandalanguage$pandac$ASTNode* $tmp3238 = NULL;
            dc3228 = $tmp3238;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3238));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3237));
        }
    }
    }
    panda$collections$ImmutableArray* $tmp3242 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
    panda$collections$ImmutableArray* $tmp3241 = $tmp3242;
    panda$collections$ImmutableArray* $tmp3240 = $tmp3241;
    a3239 = $tmp3240;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3240));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3241));
    if (((panda$core$Bit) { a3239 == NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3244 = NULL;
            tmp2643243 = $tmp3244;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3244));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3228));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3239));
            }
            org$pandalanguage$pandac$ASTNode* $tmp3245 = tmp2643243;
            return $tmp3245;
        }
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp3247 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1964_93246 = $tmp3247.kind;
        panda$core$Bit $tmp3248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93246.$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp3248.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3252 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3228, a3239);
                org$pandalanguage$pandac$ASTNode* $tmp3251 = $tmp3252;
                org$pandalanguage$pandac$ASTNode* $tmp3250 = $tmp3251;
                tmp2653249 = $tmp3250;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3250));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3251));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3228));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3239));
                }
                org$pandalanguage$pandac$ASTNode* $tmp3253 = tmp2653249;
                return $tmp3253;
            }
        }
        }
        else {
        panda$core$Bit $tmp3254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93246.$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp3254.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3258 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3228, a3239);
                org$pandalanguage$pandac$ASTNode* $tmp3257 = $tmp3258;
                org$pandalanguage$pandac$ASTNode* $tmp3256 = $tmp3257;
                tmp2663255 = $tmp3256;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3256));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3257));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3228));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3239));
                }
                org$pandalanguage$pandac$ASTNode* $tmp3259 = tmp2663255;
                return $tmp3259;
            }
        }
        }
        else {
        panda$core$Bit $tmp3260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93246.$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp3260.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3264 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3228, a3239);
                org$pandalanguage$pandac$ASTNode* $tmp3263 = $tmp3264;
                org$pandalanguage$pandac$ASTNode* $tmp3262 = $tmp3263;
                tmp2673261 = $tmp3262;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3262));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3263));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3228));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3239));
                }
                org$pandalanguage$pandac$ASTNode* $tmp3265 = tmp2673261;
                return $tmp3265;
            }
        }
        }
        else {
        panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93246.$rawValue, ((panda$core$Int64) { 21 }));
        bool $tmp3266 = $tmp3267.value;
        if ($tmp3266) goto $l3268;
        panda$core$Bit $tmp3269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93246.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp3266 = $tmp3269.value;
        $l3268:;
        panda$core$Bit $tmp3270 = { $tmp3266 };
        if ($tmp3270.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3274 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3228, a3239);
                org$pandalanguage$pandac$ASTNode* $tmp3273 = $tmp3274;
                org$pandalanguage$pandac$ASTNode* $tmp3272 = $tmp3273;
                tmp2683271 = $tmp3272;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3272));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3273));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3228));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3239));
                }
                org$pandalanguage$pandac$ASTNode* $tmp3275 = tmp2683271;
                return $tmp3275;
            }
        }
        }
        else {
        panda$core$Bit $tmp3276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93246.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp3276.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3280 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3228, a3239);
                org$pandalanguage$pandac$ASTNode* $tmp3279 = $tmp3280;
                org$pandalanguage$pandac$ASTNode* $tmp3278 = $tmp3279;
                tmp2693277 = $tmp3278;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3278));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3279));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3228));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3239));
                }
                org$pandalanguage$pandac$ASTNode* $tmp3281 = tmp2693277;
                return $tmp3281;
            }
        }
        }
        else {
        panda$core$Bit $tmp3285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93246.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp3284 = $tmp3285.value;
        if ($tmp3284) goto $l3286;
        panda$core$Bit $tmp3287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93246.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp3284 = $tmp3287.value;
        $l3286:;
        panda$core$Bit $tmp3288 = { $tmp3284 };
        bool $tmp3283 = $tmp3288.value;
        if ($tmp3283) goto $l3289;
        panda$core$Bit $tmp3290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93246.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp3283 = $tmp3290.value;
        $l3289:;
        panda$core$Bit $tmp3291 = { $tmp3283 };
        bool $tmp3282 = $tmp3291.value;
        if ($tmp3282) goto $l3292;
        panda$core$Bit $tmp3293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93246.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp3282 = $tmp3293.value;
        $l3292:;
        panda$core$Bit $tmp3294 = { $tmp3282 };
        if ($tmp3294.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3298 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3228, a3239);
                org$pandalanguage$pandac$ASTNode* $tmp3297 = $tmp3298;
                org$pandalanguage$pandac$ASTNode* $tmp3296 = $tmp3297;
                tmp2703295 = $tmp3296;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3296));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3297));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3228));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3239));
                }
                org$pandalanguage$pandac$ASTNode* $tmp3299 = tmp2703295;
                return $tmp3299;
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3300, ((panda$core$Int64) { 17 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3300, &$s3301);
            {
                org$pandalanguage$pandac$ASTNode* $tmp3303 = NULL;
                tmp2713302 = $tmp3303;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3303));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3228));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3239));
                }
                org$pandalanguage$pandac$ASTNode* $tmp3304 = tmp2713302;
                return $tmp3304;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3228));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3239));
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3305;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3306;
    org$pandalanguage$pandac$parser$Token$nullable name3311;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3312;
    panda$collections$ImmutableArray* generics3317;
    org$pandalanguage$pandac$ASTNode* tmp2723324;
    panda$collections$ImmutableArray* stypes3329;
    org$pandalanguage$pandac$ASTNode* tmp2733336;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3341;
    org$pandalanguage$pandac$ASTNode* tmp2743344;
    panda$collections$Array* members3347;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3354;
    org$pandalanguage$pandac$ASTNode* member3356;
    org$pandalanguage$pandac$ASTNode* tmp2753360;
    org$pandalanguage$pandac$ASTNode* tmp2763362;
    org$pandalanguage$pandac$ASTNode* tmp2773364;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp3368;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3306, ((panda$core$Int64) { 17 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3308 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3306, &$s3307);
    start3305 = $tmp3308;
    if (((panda$core$Bit) { !start3305.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3310 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp3309 = $tmp3310;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3310));
        return $tmp3309;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3312, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3314 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3312, &$s3313);
    name3311 = $tmp3314;
    if (((panda$core$Bit) { !name3311.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3316 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp3315 = $tmp3316;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3316));
        return $tmp3315;
    }
    }
    memset(&generics3317, 0, sizeof(generics3317));
    org$pandalanguage$pandac$parser$Token $tmp3318 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp3319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3318.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp3319.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp3320 = generics3317;
            panda$collections$ImmutableArray* $tmp3323 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            panda$collections$ImmutableArray* $tmp3322 = $tmp3323;
            panda$collections$ImmutableArray* $tmp3321 = $tmp3322;
            generics3317 = $tmp3321;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3321));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3322));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3320));
        }
        if (((panda$core$Bit) { generics3317 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3325 = NULL;
                tmp2723324 = $tmp3325;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3325));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3317));
                org$pandalanguage$pandac$ASTNode* $tmp3326 = tmp2723324;
                return $tmp3326;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$collections$ImmutableArray* $tmp3327 = generics3317;
            panda$collections$ImmutableArray* $tmp3328 = NULL;
            generics3317 = $tmp3328;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3327));
        }
    }
    }
    memset(&stypes3329, 0, sizeof(stypes3329));
    org$pandalanguage$pandac$parser$Token $tmp3330 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp3331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3330.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp3331.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp3332 = stypes3329;
            panda$collections$ImmutableArray* $tmp3335 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            panda$collections$ImmutableArray* $tmp3334 = $tmp3335;
            panda$collections$ImmutableArray* $tmp3333 = $tmp3334;
            stypes3329 = $tmp3333;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3333));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3334));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3332));
        }
        if (((panda$core$Bit) { stypes3329 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3337 = NULL;
                tmp2733336 = $tmp3337;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3337));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3317));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes3329));
                }
                org$pandalanguage$pandac$ASTNode* $tmp3338 = tmp2733336;
                return $tmp3338;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$collections$ImmutableArray* $tmp3339 = stypes3329;
            panda$collections$ImmutableArray* $tmp3340 = NULL;
            stypes3329 = $tmp3340;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3339));
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3341, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3343 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3341, &$s3342);
    if (((panda$core$Bit) { !$tmp3343.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3345 = NULL;
            tmp2743344 = $tmp3345;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3345));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3317));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes3329));
            }
            org$pandalanguage$pandac$ASTNode* $tmp3346 = tmp2743344;
            return $tmp3346;
        }
    }
    }
    panda$collections$Array* $tmp3350 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp3350);
    panda$collections$Array* $tmp3349 = $tmp3350;
    panda$collections$Array* $tmp3348 = $tmp3349;
    members3347 = $tmp3348;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3348));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3349));
    $l3351:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3354, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3355 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3354);
    bool $tmp3353 = ((panda$core$Bit) { !$tmp3355.nonnull }).value;
    if (!$tmp3353) goto $l3352;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3359 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        org$pandalanguage$pandac$ASTNode* $tmp3358 = $tmp3359;
        org$pandalanguage$pandac$ASTNode* $tmp3357 = $tmp3358;
        member3356 = $tmp3357;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3357));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3358));
        if (((panda$core$Bit) { member3356 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3361 = NULL;
                tmp2753360 = $tmp3361;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3361));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member3356));
                {
                    tmp2763362 = tmp2753360;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3317));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members3347));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes3329));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3363 = tmp2763362;
                    return $tmp3363;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members3347, ((panda$core$Object*) member3356));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member3356));
    }
    goto $l3351;
    $l3352:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3367 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp3368, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3370 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3311.value));
        panda$core$String* $tmp3369 = $tmp3370;
        panda$collections$ImmutableArray* $tmp3372 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members3347);
        panda$collections$ImmutableArray* $tmp3371 = $tmp3372;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3367, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start3305.value).position, p_doccomment, p_annotations, $tmp3368, $tmp3369, generics3317, stypes3329, $tmp3371);
        org$pandalanguage$pandac$ASTNode* $tmp3366 = $tmp3367;
        org$pandalanguage$pandac$ASTNode* $tmp3365 = $tmp3366;
        tmp2773364 = $tmp3365;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3365));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3366));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3369));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3317));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members3347));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes3329));
        }
        org$pandalanguage$pandac$ASTNode* $tmp3373 = tmp2773364;
        return $tmp3373;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3374;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3375;
    org$pandalanguage$pandac$parser$Token$nullable name3380;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3381;
    panda$collections$ImmutableArray* generics3386;
    org$pandalanguage$pandac$ASTNode* tmp2783393;
    panda$collections$Array* intfs3400;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3404;
    org$pandalanguage$pandac$ASTNode* t3406;
    org$pandalanguage$pandac$ASTNode* tmp2793410;
    org$pandalanguage$pandac$ASTNode* tmp2813412;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3417;
    org$pandalanguage$pandac$ASTNode* tmp2803423;
    org$pandalanguage$pandac$ASTNode* tmp2823425;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3427;
    org$pandalanguage$pandac$ASTNode* tmp2833430;
    panda$collections$Array* members3433;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3440;
    org$pandalanguage$pandac$ASTNode* member3442;
    org$pandalanguage$pandac$ASTNode* tmp2843446;
    org$pandalanguage$pandac$ASTNode* tmp2853448;
    org$pandalanguage$pandac$ASTNode* tmp2863450;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp3454;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3375, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3377 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3375, &$s3376);
    start3374 = $tmp3377;
    if (((panda$core$Bit) { !start3374.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3379 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp3378 = $tmp3379;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3379));
        return $tmp3378;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3381, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3383 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3381, &$s3382);
    name3380 = $tmp3383;
    if (((panda$core$Bit) { !name3380.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3385 = NULL;
        org$pandalanguage$pandac$ASTNode* $tmp3384 = $tmp3385;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3385));
        return $tmp3384;
    }
    }
    memset(&generics3386, 0, sizeof(generics3386));
    org$pandalanguage$pandac$parser$Token $tmp3387 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp3388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3387.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp3388.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp3389 = generics3386;
            panda$collections$ImmutableArray* $tmp3392 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            panda$collections$ImmutableArray* $tmp3391 = $tmp3392;
            panda$collections$ImmutableArray* $tmp3390 = $tmp3391;
            generics3386 = $tmp3390;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3390));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3391));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3389));
        }
        if (((panda$core$Bit) { generics3386 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3394 = NULL;
                tmp2783393 = $tmp3394;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3386));
                org$pandalanguage$pandac$ASTNode* $tmp3395 = tmp2783393;
                return $tmp3395;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$collections$ImmutableArray* $tmp3396 = generics3386;
            panda$collections$ImmutableArray* $tmp3399 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp3399);
            panda$collections$ImmutableArray* $tmp3398 = $tmp3399;
            panda$collections$ImmutableArray* $tmp3397 = $tmp3398;
            generics3386 = $tmp3397;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3397));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3398));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3396));
        }
    }
    }
    panda$collections$Array* $tmp3403 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp3403);
    panda$collections$Array* $tmp3402 = $tmp3403;
    panda$collections$Array* $tmp3401 = $tmp3402;
    intfs3400 = $tmp3401;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3401));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3402));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3404, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3405 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3404);
    if (((panda$core$Bit) { $tmp3405.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3409 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        org$pandalanguage$pandac$ASTNode* $tmp3408 = $tmp3409;
        org$pandalanguage$pandac$ASTNode* $tmp3407 = $tmp3408;
        t3406 = $tmp3407;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3407));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3408));
        if (((panda$core$Bit) { t3406 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3411 = NULL;
                tmp2793410 = $tmp3411;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3411));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3406));
                {
                    tmp2813412 = tmp2793410;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3386));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs3400));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3413 = tmp2813412;
                    return $tmp3413;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs3400, ((panda$core$Object*) t3406));
        $l3414:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3417, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3418 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3417);
        bool $tmp3416 = ((panda$core$Bit) { $tmp3418.nonnull }).value;
        if (!$tmp3416) goto $l3415;
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3419 = t3406;
                org$pandalanguage$pandac$ASTNode* $tmp3422 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                org$pandalanguage$pandac$ASTNode* $tmp3421 = $tmp3422;
                org$pandalanguage$pandac$ASTNode* $tmp3420 = $tmp3421;
                t3406 = $tmp3420;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3420));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3421));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3419));
            }
            if (((panda$core$Bit) { t3406 == NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3424 = NULL;
                    tmp2803423 = $tmp3424;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3424));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3406));
                    {
                        tmp2823425 = tmp2803423;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3386));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs3400));
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp3426 = tmp2823425;
                        return $tmp3426;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs3400, ((panda$core$Object*) t3406));
        }
        goto $l3414;
        $l3415:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3406));
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3427, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3429 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3427, &$s3428);
    if (((panda$core$Bit) { !$tmp3429.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3431 = NULL;
            tmp2833430 = $tmp3431;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3431));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3386));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs3400));
            }
            org$pandalanguage$pandac$ASTNode* $tmp3432 = tmp2833430;
            return $tmp3432;
        }
    }
    }
    panda$collections$Array* $tmp3436 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp3436);
    panda$collections$Array* $tmp3435 = $tmp3436;
    panda$collections$Array* $tmp3434 = $tmp3435;
    members3433 = $tmp3434;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3434));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3435));
    $l3437:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3440, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3441 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3440);
    bool $tmp3439 = ((panda$core$Bit) { !$tmp3441.nonnull }).value;
    if (!$tmp3439) goto $l3438;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3445 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        org$pandalanguage$pandac$ASTNode* $tmp3444 = $tmp3445;
        org$pandalanguage$pandac$ASTNode* $tmp3443 = $tmp3444;
        member3442 = $tmp3443;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3443));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3444));
        if (((panda$core$Bit) { member3442 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3447 = NULL;
                tmp2843446 = $tmp3447;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3447));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member3442));
                {
                    tmp2853448 = tmp2843446;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3386));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs3400));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members3433));
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3449 = tmp2853448;
                    return $tmp3449;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members3433, ((panda$core$Object*) member3442));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member3442));
    }
    goto $l3437;
    $l3438:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3453 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp3454, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3456 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3380.value));
        panda$core$String* $tmp3455 = $tmp3456;
        panda$collections$ImmutableArray* $tmp3458 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs3400);
        panda$collections$ImmutableArray* $tmp3457 = $tmp3458;
        panda$collections$ImmutableArray* $tmp3460 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members3433);
        panda$collections$ImmutableArray* $tmp3459 = $tmp3460;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3453, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start3374.value).position, p_doccomment, p_annotations, $tmp3454, $tmp3455, generics3386, $tmp3457, $tmp3459);
        org$pandalanguage$pandac$ASTNode* $tmp3452 = $tmp3453;
        org$pandalanguage$pandac$ASTNode* $tmp3451 = $tmp3452;
        tmp2863450 = $tmp3451;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3451));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3452));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3459));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3457));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3455));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3386));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs3400));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members3433));
        }
        org$pandalanguage$pandac$ASTNode* $tmp3461 = tmp2863450;
        return $tmp3461;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2088_93462;
    {
        org$pandalanguage$pandac$parser$Token $tmp3463 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2088_93462 = $tmp3463.kind;
        panda$core$Bit $tmp3464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_93462.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp3464.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3468 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp3467 = $tmp3468;
            org$pandalanguage$pandac$ASTNode* $tmp3466 = $tmp3467;
            org$pandalanguage$pandac$ASTNode* $tmp3465 = $tmp3466;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3466));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3467));
            return $tmp3465;
        }
        }
        else {
        panda$core$Bit $tmp3469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_93462.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp3469.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3473 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp3472 = $tmp3473;
            org$pandalanguage$pandac$ASTNode* $tmp3471 = $tmp3472;
            org$pandalanguage$pandac$ASTNode* $tmp3470 = $tmp3471;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3471));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3472));
            return $tmp3470;
        }
        }
        else {
        panda$core$Bit $tmp3480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_93462.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp3479 = $tmp3480.value;
        if ($tmp3479) goto $l3481;
        panda$core$Bit $tmp3482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_93462.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp3479 = $tmp3482.value;
        $l3481:;
        panda$core$Bit $tmp3483 = { $tmp3479 };
        bool $tmp3478 = $tmp3483.value;
        if ($tmp3478) goto $l3484;
        panda$core$Bit $tmp3485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_93462.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp3478 = $tmp3485.value;
        $l3484:;
        panda$core$Bit $tmp3486 = { $tmp3478 };
        bool $tmp3477 = $tmp3486.value;
        if ($tmp3477) goto $l3487;
        panda$core$Bit $tmp3488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_93462.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp3477 = $tmp3488.value;
        $l3487:;
        panda$core$Bit $tmp3489 = { $tmp3477 };
        bool $tmp3476 = $tmp3489.value;
        if ($tmp3476) goto $l3490;
        panda$core$Bit $tmp3491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_93462.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp3476 = $tmp3491.value;
        $l3490:;
        panda$core$Bit $tmp3492 = { $tmp3476 };
        bool $tmp3475 = $tmp3492.value;
        if ($tmp3475) goto $l3493;
        panda$core$Bit $tmp3494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_93462.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp3475 = $tmp3494.value;
        $l3493:;
        panda$core$Bit $tmp3495 = { $tmp3475 };
        bool $tmp3474 = $tmp3495.value;
        if ($tmp3474) goto $l3496;
        panda$core$Bit $tmp3497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_93462.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp3474 = $tmp3497.value;
        $l3496:;
        panda$core$Bit $tmp3498 = { $tmp3474 };
        if ($tmp3498.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3502 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp3501 = $tmp3502;
            org$pandalanguage$pandac$ASTNode* $tmp3500 = $tmp3501;
            org$pandalanguage$pandac$ASTNode* $tmp3499 = $tmp3500;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3500));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3501));
            return $tmp3499;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3506 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            org$pandalanguage$pandac$ASTNode* $tmp3505 = $tmp3506;
            org$pandalanguage$pandac$ASTNode* $tmp3504 = $tmp3505;
            org$pandalanguage$pandac$ASTNode* $tmp3503 = $tmp3504;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3504));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3505));
            return $tmp3503;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries3507;
    org$pandalanguage$pandac$ASTNode* entry3516;
    org$pandalanguage$pandac$ASTNode* tmp2873520;
    org$pandalanguage$pandac$ASTNode* tmp2883522;
    org$pandalanguage$pandac$ASTNode* tmp2893525;
    panda$collections$Array* $tmp3510 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp3510);
    panda$collections$Array* $tmp3509 = $tmp3510;
    panda$collections$Array* $tmp3508 = $tmp3509;
    entries3507 = $tmp3508;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3508));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3509));
    $l3511:;
    org$pandalanguage$pandac$parser$Token $tmp3514 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp3515 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3514.kind.$rawValue, ((panda$core$Int64) { 0 }));
    bool $tmp3513 = $tmp3515.value;
    if (!$tmp3513) goto $l3512;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3519 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        org$pandalanguage$pandac$ASTNode* $tmp3518 = $tmp3519;
        org$pandalanguage$pandac$ASTNode* $tmp3517 = $tmp3518;
        entry3516 = $tmp3517;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3518));
        if (((panda$core$Bit) { entry3516 == NULL }).value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3521 = NULL;
                tmp2873520 = $tmp3521;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3521));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry3516));
                {
                    tmp2883522 = tmp2873520;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries3507));
                    org$pandalanguage$pandac$ASTNode* $tmp3523 = tmp2883522;
                    return $tmp3523;
                }
            }
        }
        }
        panda$core$Bit $tmp3524 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp3524.value);
        panda$collections$Array$add$panda$collections$Array$T(entries3507, ((panda$core$Object*) entry3516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry3516));
    }
    goto $l3511;
    $l3512:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3528 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp3530 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries3507);
        panda$collections$ImmutableArray* $tmp3529 = $tmp3530;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3528, ((panda$core$Int64) { 15 }), $tmp3529);
        org$pandalanguage$pandac$ASTNode* $tmp3527 = $tmp3528;
        org$pandalanguage$pandac$ASTNode* $tmp3526 = $tmp3527;
        tmp2893525 = $tmp3526;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3526));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3527));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3529));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries3507));
        org$pandalanguage$pandac$ASTNode* $tmp3531 = tmp2893525;
        return $tmp3531;
    }
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

