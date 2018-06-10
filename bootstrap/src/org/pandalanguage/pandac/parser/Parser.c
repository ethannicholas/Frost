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
#include "org/pandalanguage/regex/RegexParser.h"
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
#include "org/pandalanguage/regex/RegexLexer.h"
#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/UInt64.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"

static panda$core$String $s1;
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef org$pandalanguage$pandac$Position (*$fn184)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn251)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn373)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn453)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn461)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn470)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn478)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn578)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn662)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn670)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn679)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn694)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn721)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn729)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn744)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1953)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2201)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3461)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3488)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3538)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn4650)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x72\x69\x6e\x67\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 114, 5686317415756372741, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s2896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 118, 5129537752972831981, NULL };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s3744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s3813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

void org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT(org$pandalanguage$pandac$parser$Parser* self, panda$threads$MessageQueue* p_errors) {
    org$pandalanguage$pandac$parser$Lexer* $tmp2;
    org$pandalanguage$pandac$parser$Lexer* $tmp3;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp6;
    panda$collections$Stack* $tmp8;
    panda$collections$Stack* $tmp9;
    panda$core$Bit $tmp11;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp12;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp13;
    panda$core$Bit $tmp15;
    panda$core$Bit $tmp16;
    panda$threads$MessageQueue* $tmp17;
    panda$threads$MessageQueue* $tmp18;
    panda$core$Object* $tmp19;
    panda$core$Bit $tmp20;
    org$pandalanguage$regex$RegexParser* $tmp22;
    org$pandalanguage$regex$RegexParser* $tmp23;
    org$pandalanguage$regex$RegexParser* $tmp24;
    self->lexer = NULL;
    self->regexParser = NULL;
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
    panda$core$Bit$init$builtin_bit(&$tmp11, false);
    self->inSpeculative = $tmp11;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp14 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp14);
    $tmp13 = $tmp14;
    $tmp12 = $tmp13;
    self->speculativeBuffer = $tmp12;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    panda$core$Bit$init$builtin_bit(&$tmp15, true);
    self->allowLambdas = $tmp15;
    panda$core$Bit$init$builtin_bit(&$tmp16, true);
    self->reportErrors = $tmp16;
    {
        $tmp17 = self->errors;
        $tmp18 = p_errors;
        self->errors = $tmp18;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
    }
    panda$core$Bit$init$builtin_bit(&$tmp20, false);
    panda$core$Bit$wrapper* $tmp21;
    $tmp21 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp21->value = $tmp20;
    $tmp19 = ((panda$core$Object*) $tmp21);
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp19);
    panda$core$Panda$unref$panda$core$Object($tmp19);
    {
        $tmp22 = self->regexParser;
        org$pandalanguage$regex$RegexParser* $tmp25 = (org$pandalanguage$regex$RegexParser*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$regex$RegexParser$class);
        org$pandalanguage$regex$RegexParser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp25, p_errors);
        $tmp24 = $tmp25;
        $tmp23 = $tmp24;
        self->regexParser = $tmp23;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    }
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    panda$core$Bit $tmp26;
    panda$io$File* $tmp27;
    panda$io$File* $tmp28;
    panda$core$String* $tmp29;
    panda$core$String* $tmp30;
    panda$core$Bit$init$builtin_bit(&$tmp26, true);
    self->reportErrors = $tmp26;
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    {
        $tmp27 = self->path;
        $tmp28 = p_path;
        self->path = $tmp28;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
    }
    {
        $tmp29 = self->source;
        $tmp30 = p_source;
        self->source = $tmp30;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->pushbackBuffer);
    org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String(self->regexParser, p_path, p_source);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp32;
    panda$core$Int64 idx34;
    panda$core$Int64 $tmp36;
    org$pandalanguage$pandac$parser$Token result38;
    org$pandalanguage$pandac$parser$Token $returnValue40;
    org$pandalanguage$pandac$parser$Token result42;
    panda$core$Int64 $tmp31 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp32, 0);
    panda$core$Bit $tmp33 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp31, $tmp32);
    if ($tmp33.value) {
    {
        panda$core$Int64 $tmp35 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64$init$builtin_int64(&$tmp36, 1);
        panda$core$Int64 $tmp37 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp35, $tmp36);
        idx34 = $tmp37;
        org$pandalanguage$pandac$parser$Token $tmp39 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx34);
        result38 = $tmp39;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx34);
        $returnValue40 = result38;
        return $returnValue40;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp43 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result42 = $tmp43;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result42);
    }
    }
    $returnValue40 = result42;
    return $returnValue40;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result47;
    org$pandalanguage$pandac$parser$Token$Kind $match$67_1349;
    panda$core$Int64 $tmp50;
    panda$core$Int64 $tmp52;
    org$pandalanguage$pandac$parser$Token next56;
    org$pandalanguage$pandac$parser$Token$Kind $match$73_2558;
    panda$core$Int64 $tmp59;
    panda$core$String* $tmp61;
    panda$core$Char8 $tmp63;
    panda$core$UInt8 $tmp64;
    panda$core$Int64 $tmp66;
    org$pandalanguage$pandac$parser$Token $returnValue68;
    panda$core$Int64 $tmp70;
    org$pandalanguage$pandac$parser$Token next74;
    org$pandalanguage$pandac$parser$Token$Kind $match$85_2576;
    panda$core$Int64 $tmp77;
    panda$core$Int64 $tmp79;
    panda$core$Bit $tmp82;
    $l45:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp48 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result47 = $tmp48;
        {
            $match$67_1349 = result47.kind;
            panda$core$Int64$init$builtin_int64(&$tmp50, 12);
            panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$67_1349.$rawValue, $tmp50);
            if ($tmp51.value) {
            {
                goto $l45;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp52, 8);
            panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$67_1349.$rawValue, $tmp52);
            if ($tmp53.value) {
            {
                $l54:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp57 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next56 = $tmp57;
                    {
                        $match$73_2558 = next56.kind;
                        panda$core$Int64$init$builtin_int64(&$tmp59, 12);
                        panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_2558.$rawValue, $tmp59);
                        if ($tmp60.value) {
                        {
                            panda$core$String* $tmp62 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next56);
                            $tmp61 = $tmp62;
                            panda$core$UInt8$init$builtin_uint8(&$tmp64, 10);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp63, $tmp64);
                            panda$core$Bit $tmp65 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp61, $tmp63);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
                            if ($tmp65.value) {
                            {
                                goto $l45;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp66, 0);
                        panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_2558.$rawValue, $tmp66);
                        if ($tmp67.value) {
                        {
                            $returnValue68 = next56;
                            return $returnValue68;
                        }
                        }
                        }
                    }
                }
                }
                $l55:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp70, 9);
            panda$core$Bit $tmp71 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$67_1349.$rawValue, $tmp70);
            if ($tmp71.value) {
            {
                $l72:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp75 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next74 = $tmp75;
                    {
                        $match$85_2576 = next74.kind;
                        panda$core$Int64$init$builtin_int64(&$tmp77, 10);
                        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_2576.$rawValue, $tmp77);
                        if ($tmp78.value) {
                        {
                            goto $l45;
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp79, 0);
                        panda$core$Bit $tmp80 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_2576.$rawValue, $tmp79);
                        if ($tmp80.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result47, &$s81);
                            panda$core$Bit$init$builtin_bit(&$tmp82, false);
                            self->reportErrors = $tmp82;
                            $returnValue68 = next74;
                            return $returnValue68;
                        }
                        }
                        }
                    }
                }
                }
                $l73:;
            }
            }
            else {
            {
                $returnValue68 = result47;
                return $returnValue68;
            }
            }
            }
            }
        }
    }
    }
    $l46:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp86;
    org$pandalanguage$pandac$parser$Token $returnValue89;
    panda$core$Int64 $tmp91;
    panda$core$Int64 $tmp85 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp86, 0);
    panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp85, $tmp86);
    if ($tmp87.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp88 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp88);
    }
    }
    panda$core$Int64 $tmp90 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp91, 1);
    panda$core$Int64 $tmp92 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp90, $tmp91);
    org$pandalanguage$pandac$parser$Token $tmp93 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp92);
    $returnValue89 = $tmp93;
    return $returnValue89;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result95;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue98;
    org$pandalanguage$pandac$parser$Token $tmp96 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result95 = $tmp96;
    panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result95.kind.$rawValue, p_kind.$rawValue);
    if ($tmp97.value) {
    {
        $returnValue98 = ((org$pandalanguage$pandac$parser$Token$nullable) { result95, true });
        return $returnValue98;
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result95);
    $returnValue98 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue98;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result101;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue104;
    panda$core$String* $tmp106;
    panda$core$String* $tmp107;
    panda$core$String* $tmp108;
    panda$core$String* $tmp109;
    panda$core$String* $tmp114;
    org$pandalanguage$pandac$parser$Token $tmp102 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result101 = $tmp102;
    panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result101.kind.$rawValue, p_kind.$rawValue);
    if ($tmp103.value) {
    {
        $returnValue104 = ((org$pandalanguage$pandac$parser$Token$nullable) { result101, true });
        return $returnValue104;
    }
    }
    panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s110, p_expected);
    $tmp109 = $tmp111;
    panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp109, &$s112);
    $tmp108 = $tmp113;
    panda$core$String* $tmp115 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result101);
    $tmp114 = $tmp115;
    panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, $tmp114);
    $tmp107 = $tmp116;
    panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp107, &$s117);
    $tmp106 = $tmp118;
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result101, $tmp106);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp107));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
    $returnValue104 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue104;
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Compiler$Error* $tmp124;
    panda$core$Bit $tmp121 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    bool $tmp120 = $tmp121.value;
    if (!$tmp120) goto $l122;
    $tmp120 = self->reportErrors.value;
    $l122:;
    panda$core$Bit $tmp123 = { $tmp120 };
    if ($tmp123.value) {
    {
        org$pandalanguage$pandac$Compiler$Error* $tmp125 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
        org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp125, self->path, p_token.position, p_msg);
        $tmp124 = $tmp125;
        panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp124));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp130;
    panda$core$Bit $tmp126 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp126.value) goto $l127; else goto $l128;
    $l128:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s129, (panda$core$Int64) { 136 });
    abort();
    $l127:;
    panda$core$Bit$init$builtin_bit(&$tmp130, true);
    self->inSpeculative = $tmp130;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp131;
    panda$core$Bit$init$builtin_bit(&$tmp131, false);
    self->inSpeculative = $tmp131;
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp132;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp133;
    panda$core$Int64 $tmp135;
    panda$core$Int64 $tmp137;
    panda$core$Int64 $tmp138;
    panda$core$Bit $tmp139;
    panda$core$Bit$init$builtin_bit(&$tmp132, false);
    self->inSpeculative = $tmp132;
    panda$core$Int64 $tmp134 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp135, 1);
    panda$core$Int64 $tmp136 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp134, $tmp135);
    panda$core$Int64$init$builtin_int64(&$tmp137, 0);
    panda$core$Int64$init$builtin_int64(&$tmp138, -1);
    panda$core$Bit$init$builtin_bit(&$tmp139, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp133, $tmp136, $tmp137, $tmp138, $tmp139);
    int64_t $tmp141 = $tmp133.start.value;
    panda$core$Int64 i140 = { $tmp141 };
    int64_t $tmp143 = $tmp133.end.value;
    int64_t $tmp144 = $tmp133.step.value;
    bool $tmp145 = $tmp133.inclusive.value;
    bool $tmp152 = $tmp144 > 0;
    if ($tmp152) goto $l150; else goto $l151;
    $l150:;
    if ($tmp145) goto $l153; else goto $l154;
    $l153:;
    if ($tmp141 <= $tmp143) goto $l146; else goto $l148;
    $l154:;
    if ($tmp141 < $tmp143) goto $l146; else goto $l148;
    $l151:;
    if ($tmp145) goto $l155; else goto $l156;
    $l155:;
    if ($tmp141 >= $tmp143) goto $l146; else goto $l148;
    $l156:;
    if ($tmp141 > $tmp143) goto $l146; else goto $l148;
    $l146:;
    {
        org$pandalanguage$pandac$parser$Token $tmp158 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i140);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp158);
    }
    $l149:;
    if ($tmp152) goto $l160; else goto $l161;
    $l160:;
    int64_t $tmp162 = $tmp143 - i140.value;
    if ($tmp145) goto $l163; else goto $l164;
    $l163:;
    if ((uint64_t) $tmp162 >= $tmp144) goto $l159; else goto $l148;
    $l164:;
    if ((uint64_t) $tmp162 > $tmp144) goto $l159; else goto $l148;
    $l161:;
    int64_t $tmp166 = i140.value - $tmp143;
    if ($tmp145) goto $l167; else goto $l168;
    $l167:;
    if ((uint64_t) $tmp166 >= -$tmp144) goto $l159; else goto $l148;
    $l168:;
    if ((uint64_t) $tmp166 > -$tmp144) goto $l159; else goto $l148;
    $l159:;
    i140.value += $tmp144;
    goto $l146;
    $l148:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue170;
    panda$core$String* $tmp171;
    panda$core$String* $tmp172;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp173;
    panda$core$Bit $tmp174;
    panda$core$Bit$init$builtin_bit(&$tmp174, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp173, p_token.start, p_token.end, $tmp174);
    panda$core$String* $tmp175 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp173);
    $tmp172 = $tmp175;
    $tmp171 = $tmp172;
    $returnValue170 = $tmp171;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp171));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
    return $returnValue170;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue177;
    org$pandalanguage$pandac$ASTNode* $tmp178;
    org$pandalanguage$pandac$ASTNode* $tmp180;
    org$pandalanguage$pandac$ASTNode* $tmp181;
    panda$core$Int64 $tmp183;
    org$pandalanguage$pandac$parser$Token$Kind $tmp186;
    panda$core$Int64 $tmp187;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp178 = p_chunk;
        $returnValue177 = $tmp178;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
        return $returnValue177;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp182 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp183, 4);
    org$pandalanguage$pandac$Position $tmp185 = (($fn184) p_string->$class->vtable[2])(p_string);
    panda$core$Int64$init$builtin_int64(&$tmp187, 51);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp186, $tmp187);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp182, $tmp183, $tmp185, p_string, $tmp186, p_chunk);
    $tmp181 = $tmp182;
    $tmp180 = $tmp181;
    $returnValue177 = $tmp180;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
    return $returnValue177;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result192 = NULL;
    panda$core$MutableString* $tmp193;
    panda$core$MutableString* $tmp194;
    org$pandalanguage$pandac$parser$Token token198;
    org$pandalanguage$pandac$parser$Token$Kind $match$168_13200;
    panda$core$Int64 $tmp201;
    panda$core$String* str206 = NULL;
    panda$core$String* $tmp207;
    panda$core$String* $tmp208;
    panda$core$Char8 $tmp210;
    panda$core$UInt8 $tmp211;
    panda$core$String* $returnValue214;
    panda$core$String* $tmp215;
    panda$core$Int64 $tmp220;
    panda$core$String* $tmp223;
    panda$core$Int64 $tmp226;
    org$pandalanguage$pandac$parser$Token escape231;
    panda$core$Int64 $tmp233;
    panda$core$String* $tmp236;
    panda$core$String* escapeText240 = NULL;
    panda$core$String* $tmp241;
    panda$core$String* $tmp242;
    panda$core$Char8 c244;
    panda$core$Object* $tmp245;
    panda$collections$ListView* $tmp246;
    panda$core$Int64 $tmp248;
    panda$core$Char8 $match$187_21253;
    panda$core$Char8 $tmp254;
    panda$core$UInt8 $tmp255;
    panda$core$Char8 $tmp257;
    panda$core$UInt8 $tmp258;
    panda$core$Char8 $tmp259;
    panda$core$UInt8 $tmp260;
    panda$core$Char8 $tmp262;
    panda$core$UInt8 $tmp263;
    panda$core$Char8 $tmp264;
    panda$core$UInt8 $tmp265;
    panda$core$Char8 $tmp267;
    panda$core$UInt8 $tmp268;
    panda$core$Char8 $tmp269;
    panda$core$UInt8 $tmp270;
    panda$core$Char8 $tmp272;
    panda$core$UInt8 $tmp273;
    panda$core$Char8 $tmp274;
    panda$core$UInt8 $tmp275;
    panda$core$Char8 $tmp277;
    panda$core$UInt8 $tmp278;
    panda$core$Char8 $tmp279;
    panda$core$UInt8 $tmp280;
    panda$core$Char8 $tmp282;
    panda$core$UInt8 $tmp283;
    panda$core$Char8 $tmp284;
    panda$core$UInt8 $tmp285;
    panda$core$Char8 $tmp287;
    panda$core$UInt8 $tmp288;
    panda$core$String* $tmp290;
    panda$core$String* $tmp294;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp295;
    panda$core$Bit $tmp298;
    panda$core$Int64 $tmp301;
    panda$core$String* $tmp303;
    panda$core$String* $tmp304;
    panda$core$String* $tmp308;
    int $tmp191;
    {
        panda$core$MutableString* $tmp195 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp195);
        $tmp194 = $tmp195;
        $tmp193 = $tmp194;
        result192 = $tmp193;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
        $l196:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp199 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token198 = $tmp199;
            {
                $match$168_13200 = token198.kind;
                panda$core$Int64$init$builtin_int64(&$tmp201, 12);
                panda$core$Bit $tmp202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_13200.$rawValue, $tmp201);
                if ($tmp202.value) {
                {
                    int $tmp205;
                    {
                        panda$core$String* $tmp209 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token198);
                        $tmp208 = $tmp209;
                        $tmp207 = $tmp208;
                        str206 = $tmp207;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
                        panda$core$UInt8$init$builtin_uint8(&$tmp211, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp210, $tmp211);
                        panda$core$Bit $tmp212 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str206, $tmp210);
                        if ($tmp212.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token198, &$s213);
                            $tmp215 = NULL;
                            $returnValue214 = $tmp215;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp215));
                            $tmp205 = 0;
                            goto $l203;
                            $l216:;
                            $tmp191 = 0;
                            goto $l189;
                            $l217:;
                            return $returnValue214;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result192, str206);
                    }
                    $tmp205 = -1;
                    goto $l203;
                    $l203:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str206));
                    str206 = NULL;
                    switch ($tmp205) {
                        case -1: goto $l219;
                        case 0: goto $l216;
                    }
                    $l219:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp220, 0);
                panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_13200.$rawValue, $tmp220);
                if ($tmp221.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token198, &$s222);
                    $tmp223 = NULL;
                    $returnValue214 = $tmp223;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
                    $tmp191 = 1;
                    goto $l189;
                    $l224:;
                    return $returnValue214;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp226, 106);
                panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_13200.$rawValue, $tmp226);
                if ($tmp227.value) {
                {
                    int $tmp230;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp232 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape231 = $tmp232;
                        panda$core$Int64$init$builtin_int64(&$tmp233, 0);
                        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape231.kind.$rawValue, $tmp233);
                        if ($tmp234.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token198, &$s235);
                            $tmp236 = NULL;
                            $returnValue214 = $tmp236;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
                            $tmp230 = 0;
                            goto $l228;
                            $l237:;
                            $tmp191 = 2;
                            goto $l189;
                            $l238:;
                            return $returnValue214;
                        }
                        }
                        panda$core$String* $tmp243 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape231);
                        $tmp242 = $tmp243;
                        $tmp241 = $tmp242;
                        escapeText240 = $tmp241;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
                        panda$collections$ListView* $tmp247 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText240);
                        $tmp246 = $tmp247;
                        panda$core$Int64$init$builtin_int64(&$tmp248, 0);
                        ITable* $tmp249 = $tmp246->$class->itable;
                        while ($tmp249->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp249 = $tmp249->next;
                        }
                        $fn251 $tmp250 = $tmp249->methods[0];
                        panda$core$Object* $tmp252 = $tmp250($tmp246, $tmp248);
                        $tmp245 = $tmp252;
                        c244 = ((panda$core$Char8$wrapper*) $tmp245)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp245);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                        {
                            $match$187_21253 = c244;
                            panda$core$UInt8$init$builtin_uint8(&$tmp255, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp254, $tmp255);
                            panda$core$Bit $tmp256 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$187_21253, $tmp254);
                            if ($tmp256.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp258, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp257, $tmp258);
                                panda$core$MutableString$append$panda$core$Char8(result192, $tmp257);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp260, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp259, $tmp260);
                            panda$core$Bit $tmp261 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$187_21253, $tmp259);
                            if ($tmp261.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp263, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp262, $tmp263);
                                panda$core$MutableString$append$panda$core$Char8(result192, $tmp262);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp265, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp264, $tmp265);
                            panda$core$Bit $tmp266 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$187_21253, $tmp264);
                            if ($tmp266.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp268, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp267, $tmp268);
                                panda$core$MutableString$append$panda$core$Char8(result192, $tmp267);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp270, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp269, $tmp270);
                            panda$core$Bit $tmp271 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$187_21253, $tmp269);
                            if ($tmp271.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp273, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp272, $tmp273);
                                panda$core$MutableString$append$panda$core$Char8(result192, $tmp272);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp275, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp274, $tmp275);
                            panda$core$Bit $tmp276 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$187_21253, $tmp274);
                            if ($tmp276.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp278, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp277, $tmp278);
                                panda$core$MutableString$append$panda$core$Char8(result192, $tmp277);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp280, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp279, $tmp280);
                            panda$core$Bit $tmp281 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$187_21253, $tmp279);
                            if ($tmp281.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp283, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp282, $tmp283);
                                panda$core$MutableString$append$panda$core$Char8(result192, $tmp282);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp285, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp284, $tmp285);
                            panda$core$Bit $tmp286 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$187_21253, $tmp284);
                            if ($tmp286.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp288, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp287, $tmp288);
                                panda$core$MutableString$append$panda$core$Char8(result192, $tmp287);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token198, &$s289);
                                $tmp290 = NULL;
                                $returnValue214 = $tmp290;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
                                $tmp230 = 1;
                                goto $l228;
                                $l291:;
                                $tmp191 = 3;
                                goto $l189;
                                $l292:;
                                return $returnValue214;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp296 = panda$core$String$start$R$panda$core$String$Index(escapeText240);
                        panda$core$String$Index $tmp297 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText240, $tmp296);
                        panda$core$Bit$init$builtin_bit(&$tmp298, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp295, ((panda$core$String$Index$nullable) { $tmp297, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp298);
                        panda$core$String* $tmp299 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText240, $tmp295);
                        $tmp294 = $tmp299;
                        panda$core$MutableString$append$panda$core$String(result192, $tmp294);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
                    }
                    $tmp230 = -1;
                    goto $l228;
                    $l228:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText240));
                    escapeText240 = NULL;
                    switch ($tmp230) {
                        case 0: goto $l237;
                        case -1: goto $l300;
                        case 1: goto $l291;
                    }
                    $l300:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp301, 100);
                panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_13200.$rawValue, $tmp301);
                if ($tmp302.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token198);
                    panda$core$String* $tmp305 = panda$core$MutableString$finish$R$panda$core$String(result192);
                    $tmp304 = $tmp305;
                    $tmp303 = $tmp304;
                    $returnValue214 = $tmp303;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp303));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
                    $tmp191 = 4;
                    goto $l189;
                    $l306:;
                    return $returnValue214;
                }
                }
                else {
                {
                    panda$core$String* $tmp309 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token198);
                    $tmp308 = $tmp309;
                    panda$core$MutableString$append$panda$core$String(result192, $tmp308);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
                }
                }
                }
                }
                }
            }
        }
        }
        $l197:;
    }
    $tmp191 = -1;
    goto $l189;
    $l189:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result192));
    result192 = NULL;
    switch ($tmp191) {
        case 3: goto $l292;
        case 1: goto $l224;
        case -1: goto $l310;
        case 0: goto $l217;
        case 4: goto $l306;
        case 2: goto $l238;
    }
    $l310:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result314 = NULL;
    panda$core$MutableString* $tmp315;
    panda$core$MutableString* $tmp316;
    org$pandalanguage$pandac$parser$Token token320;
    org$pandalanguage$pandac$parser$Token$Kind $match$213_13322;
    panda$core$Int64 $tmp323;
    panda$core$String* str328 = NULL;
    panda$core$String* $tmp329;
    panda$core$String* $tmp330;
    panda$core$Char8 $tmp332;
    panda$core$UInt8 $tmp333;
    panda$core$String* $returnValue336;
    panda$core$String* $tmp337;
    panda$core$Int64 $tmp342;
    panda$core$String* $tmp345;
    panda$core$Int64 $tmp348;
    org$pandalanguage$pandac$parser$Token escape353;
    panda$core$Int64 $tmp355;
    panda$core$String* $tmp358;
    panda$core$String* escapeText362 = NULL;
    panda$core$String* $tmp363;
    panda$core$String* $tmp364;
    panda$core$Char8 c366;
    panda$core$Object* $tmp367;
    panda$collections$ListView* $tmp368;
    panda$core$Int64 $tmp370;
    panda$core$Char8 $match$232_21375;
    panda$core$Char8 $tmp376;
    panda$core$UInt8 $tmp377;
    panda$core$Char8 $tmp379;
    panda$core$UInt8 $tmp380;
    panda$core$Char8 $tmp381;
    panda$core$UInt8 $tmp382;
    panda$core$Char8 $tmp384;
    panda$core$UInt8 $tmp385;
    panda$core$Char8 $tmp386;
    panda$core$UInt8 $tmp387;
    panda$core$Char8 $tmp389;
    panda$core$UInt8 $tmp390;
    panda$core$Char8 $tmp391;
    panda$core$UInt8 $tmp392;
    panda$core$Char8 $tmp394;
    panda$core$UInt8 $tmp395;
    panda$core$Char8 $tmp396;
    panda$core$UInt8 $tmp397;
    panda$core$Char8 $tmp399;
    panda$core$UInt8 $tmp400;
    panda$core$Char8 $tmp401;
    panda$core$UInt8 $tmp402;
    panda$core$Char8 $tmp404;
    panda$core$UInt8 $tmp405;
    panda$core$Char8 $tmp406;
    panda$core$UInt8 $tmp407;
    panda$core$Char8 $tmp409;
    panda$core$UInt8 $tmp410;
    panda$core$Char8 $tmp411;
    panda$core$UInt8 $tmp412;
    panda$core$Char8 $tmp414;
    panda$core$UInt8 $tmp415;
    panda$core$String* $tmp417;
    panda$core$String* $tmp421;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp422;
    panda$core$Bit $tmp425;
    panda$core$Int64 $tmp428;
    panda$core$String* $tmp430;
    panda$core$String* $tmp431;
    panda$core$Int64 $tmp435;
    panda$core$String* $tmp437;
    panda$core$String* $tmp438;
    panda$core$String* $tmp442;
    int $tmp313;
    {
        panda$core$MutableString* $tmp317 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp317);
        $tmp316 = $tmp317;
        $tmp315 = $tmp316;
        result314 = $tmp315;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
        $l318:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp321 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token320 = $tmp321;
            {
                $match$213_13322 = token320.kind;
                panda$core$Int64$init$builtin_int64(&$tmp323, 12);
                panda$core$Bit $tmp324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$213_13322.$rawValue, $tmp323);
                if ($tmp324.value) {
                {
                    int $tmp327;
                    {
                        panda$core$String* $tmp331 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token320);
                        $tmp330 = $tmp331;
                        $tmp329 = $tmp330;
                        str328 = $tmp329;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp329));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                        panda$core$UInt8$init$builtin_uint8(&$tmp333, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp332, $tmp333);
                        panda$core$Bit $tmp334 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str328, $tmp332);
                        if ($tmp334.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token320, &$s335);
                            $tmp337 = NULL;
                            $returnValue336 = $tmp337;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp337));
                            $tmp327 = 0;
                            goto $l325;
                            $l338:;
                            $tmp313 = 0;
                            goto $l311;
                            $l339:;
                            return $returnValue336;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result314, str328);
                    }
                    $tmp327 = -1;
                    goto $l325;
                    $l325:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str328));
                    str328 = NULL;
                    switch ($tmp327) {
                        case 0: goto $l338;
                        case -1: goto $l341;
                    }
                    $l341:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp342, 0);
                panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$213_13322.$rawValue, $tmp342);
                if ($tmp343.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token320, &$s344);
                    $tmp345 = NULL;
                    $returnValue336 = $tmp345;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp345));
                    $tmp313 = 1;
                    goto $l311;
                    $l346:;
                    return $returnValue336;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp348, 106);
                panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$213_13322.$rawValue, $tmp348);
                if ($tmp349.value) {
                {
                    int $tmp352;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp354 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape353 = $tmp354;
                        panda$core$Int64$init$builtin_int64(&$tmp355, 0);
                        panda$core$Bit $tmp356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape353.kind.$rawValue, $tmp355);
                        if ($tmp356.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token320, &$s357);
                            $tmp358 = NULL;
                            $returnValue336 = $tmp358;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp358));
                            $tmp352 = 0;
                            goto $l350;
                            $l359:;
                            $tmp313 = 2;
                            goto $l311;
                            $l360:;
                            return $returnValue336;
                        }
                        }
                        panda$core$String* $tmp365 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape353);
                        $tmp364 = $tmp365;
                        $tmp363 = $tmp364;
                        escapeText362 = $tmp363;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp363));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
                        panda$collections$ListView* $tmp369 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText362);
                        $tmp368 = $tmp369;
                        panda$core$Int64$init$builtin_int64(&$tmp370, 0);
                        ITable* $tmp371 = $tmp368->$class->itable;
                        while ($tmp371->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp371 = $tmp371->next;
                        }
                        $fn373 $tmp372 = $tmp371->methods[0];
                        panda$core$Object* $tmp374 = $tmp372($tmp368, $tmp370);
                        $tmp367 = $tmp374;
                        c366 = ((panda$core$Char8$wrapper*) $tmp367)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp367);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
                        {
                            $match$232_21375 = c366;
                            panda$core$UInt8$init$builtin_uint8(&$tmp377, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp376, $tmp377);
                            panda$core$Bit $tmp378 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$232_21375, $tmp376);
                            if ($tmp378.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp380, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp379, $tmp380);
                                panda$core$MutableString$append$panda$core$Char8(result314, $tmp379);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp382, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp381, $tmp382);
                            panda$core$Bit $tmp383 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$232_21375, $tmp381);
                            if ($tmp383.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp385, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp384, $tmp385);
                                panda$core$MutableString$append$panda$core$Char8(result314, $tmp384);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp387, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp386, $tmp387);
                            panda$core$Bit $tmp388 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$232_21375, $tmp386);
                            if ($tmp388.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp390, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp389, $tmp390);
                                panda$core$MutableString$append$panda$core$Char8(result314, $tmp389);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp392, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp391, $tmp392);
                            panda$core$Bit $tmp393 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$232_21375, $tmp391);
                            if ($tmp393.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp395, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp394, $tmp395);
                                panda$core$MutableString$append$panda$core$Char8(result314, $tmp394);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp397, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp396, $tmp397);
                            panda$core$Bit $tmp398 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$232_21375, $tmp396);
                            if ($tmp398.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp400, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp399, $tmp400);
                                panda$core$MutableString$append$panda$core$Char8(result314, $tmp399);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp402, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp401, $tmp402);
                            panda$core$Bit $tmp403 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$232_21375, $tmp401);
                            if ($tmp403.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp405, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp404, $tmp405);
                                panda$core$MutableString$append$panda$core$Char8(result314, $tmp404);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp407, 58);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp406, $tmp407);
                            panda$core$Bit $tmp408 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$232_21375, $tmp406);
                            if ($tmp408.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp410, 58);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp409, $tmp410);
                                panda$core$MutableString$append$panda$core$Char8(result314, $tmp409);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp412, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp411, $tmp412);
                            panda$core$Bit $tmp413 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$232_21375, $tmp411);
                            if ($tmp413.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp415, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp414, $tmp415);
                                panda$core$MutableString$append$panda$core$Char8(result314, $tmp414);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token320, &$s416);
                                $tmp417 = NULL;
                                $returnValue336 = $tmp417;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp417));
                                $tmp352 = 1;
                                goto $l350;
                                $l418:;
                                $tmp313 = 3;
                                goto $l311;
                                $l419:;
                                return $returnValue336;
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
                        panda$core$String$Index $tmp423 = panda$core$String$start$R$panda$core$String$Index(escapeText362);
                        panda$core$String$Index $tmp424 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText362, $tmp423);
                        panda$core$Bit$init$builtin_bit(&$tmp425, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp422, ((panda$core$String$Index$nullable) { $tmp424, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp425);
                        panda$core$String* $tmp426 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText362, $tmp422);
                        $tmp421 = $tmp426;
                        panda$core$MutableString$append$panda$core$String(result314, $tmp421);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
                    }
                    $tmp352 = -1;
                    goto $l350;
                    $l350:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText362));
                    escapeText362 = NULL;
                    switch ($tmp352) {
                        case 0: goto $l359;
                        case -1: goto $l427;
                        case 1: goto $l418;
                    }
                    $l427:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp428, 95);
                panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$213_13322.$rawValue, $tmp428);
                if ($tmp429.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token320);
                    panda$core$String* $tmp432 = panda$core$MutableString$finish$R$panda$core$String(result314);
                    $tmp431 = $tmp432;
                    $tmp430 = $tmp431;
                    $returnValue336 = $tmp430;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
                    $tmp313 = 4;
                    goto $l311;
                    $l433:;
                    return $returnValue336;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp435, 100);
                panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$213_13322.$rawValue, $tmp435);
                if ($tmp436.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token320);
                    panda$core$String* $tmp439 = panda$core$MutableString$finish$R$panda$core$String(result314);
                    $tmp438 = $tmp439;
                    $tmp437 = $tmp438;
                    $returnValue336 = $tmp437;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp437));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
                    $tmp313 = 5;
                    goto $l311;
                    $l440:;
                    return $returnValue336;
                }
                }
                else {
                {
                    panda$core$String* $tmp443 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token320);
                    $tmp442 = $tmp443;
                    panda$core$MutableString$append$panda$core$String(result314, $tmp442);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l319:;
    }
    $tmp313 = -1;
    goto $l311;
    $l311:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result314));
    result314 = NULL;
    switch ($tmp313) {
        case 2: goto $l360;
        case 3: goto $l419;
        case 0: goto $l339;
        case 5: goto $l440;
        case -1: goto $l444;
        case 1: goto $l346;
        case 4: goto $l433;
    }
    $l444:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot448 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp449;
    org$pandalanguage$pandac$ASTNode* $tmp450;
    panda$core$Int64 $tmp452;
    org$pandalanguage$pandac$ASTNode* call456 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp457;
    org$pandalanguage$pandac$ASTNode* $tmp458;
    panda$core$Int64 $tmp460;
    panda$collections$ImmutableArray* $tmp463;
    org$pandalanguage$pandac$ASTNode* stringType465 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp466;
    org$pandalanguage$pandac$ASTNode* $tmp467;
    panda$core$Int64 $tmp469;
    org$pandalanguage$pandac$ASTNode* $returnValue473;
    org$pandalanguage$pandac$ASTNode* $tmp474;
    org$pandalanguage$pandac$ASTNode* $tmp475;
    panda$core$Int64 $tmp477;
    org$pandalanguage$pandac$parser$Token$Kind $tmp480;
    panda$core$Int64 $tmp481;
    int $tmp447;
    {
        org$pandalanguage$pandac$ASTNode* $tmp451 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp452, 15);
        org$pandalanguage$pandac$Position $tmp454 = (($fn453) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp451, $tmp452, $tmp454, p_expr, &$s455);
        $tmp450 = $tmp451;
        $tmp449 = $tmp450;
        dot448 = $tmp449;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp449));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp450));
        org$pandalanguage$pandac$ASTNode* $tmp459 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp460, 8);
        org$pandalanguage$pandac$Position $tmp462 = (($fn461) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp464 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp464);
        $tmp463 = $tmp464;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp459, $tmp460, $tmp462, dot448, $tmp463);
        $tmp458 = $tmp459;
        $tmp457 = $tmp458;
        call456 = $tmp457;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp457));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp463));
        org$pandalanguage$pandac$ASTNode* $tmp468 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp469, 42);
        org$pandalanguage$pandac$Position $tmp471 = (($fn470) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp468, $tmp469, $tmp471, &$s472);
        $tmp467 = $tmp468;
        $tmp466 = $tmp467;
        stringType465 = $tmp466;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp466));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
        org$pandalanguage$pandac$ASTNode* $tmp476 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp477, 4);
        org$pandalanguage$pandac$Position $tmp479 = (($fn478) p_expr->$class->vtable[2])(p_expr);
        panda$core$Int64$init$builtin_int64(&$tmp481, 89);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp480, $tmp481);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp476, $tmp477, $tmp479, call456, $tmp480, stringType465);
        $tmp475 = $tmp476;
        $tmp474 = $tmp475;
        $returnValue473 = $tmp474;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp474));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
        $tmp447 = 0;
        goto $l445;
        $l482:;
        return $returnValue473;
    }
    $l445:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType465));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call456));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot448));
    dot448 = NULL;
    call456 = NULL;
    stringType465 = NULL;
    switch ($tmp447) {
        case 0: goto $l482;
    }
    $l484:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $atPre1488;
    org$pandalanguage$pandac$parser$Token start492;
    panda$core$Int64 $tmp495;
    panda$core$Int64 $tmp498;
    panda$core$String* $tmp501;
    panda$core$String* $tmp502;
    panda$core$String* $tmp504;
    org$pandalanguage$pandac$ASTNode* $returnValue509;
    org$pandalanguage$pandac$ASTNode* $tmp510;
    org$pandalanguage$pandac$ASTNode* result514 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp515;
    panda$core$MutableString* chunk516 = NULL;
    panda$core$MutableString* $tmp517;
    panda$core$MutableString* $tmp518;
    org$pandalanguage$pandac$parser$Token token522;
    org$pandalanguage$pandac$parser$Token$Kind $match$280_13525;
    panda$core$Int64 $tmp526;
    panda$core$String* str531 = NULL;
    panda$core$String* $tmp532;
    panda$core$String* $tmp533;
    panda$core$Char8 $tmp535;
    panda$core$UInt8 $tmp536;
    org$pandalanguage$pandac$ASTNode* $tmp539;
    panda$core$Int64 $tmp545;
    org$pandalanguage$pandac$ASTNode* $tmp548;
    panda$core$Int64 $tmp552;
    org$pandalanguage$pandac$parser$Token escape557;
    panda$core$Int64 $tmp559;
    org$pandalanguage$pandac$ASTNode* $tmp562;
    panda$core$String* escapeText567 = NULL;
    panda$core$String* $tmp568;
    panda$core$String* $tmp569;
    panda$core$Char8 c571;
    panda$core$Object* $tmp572;
    panda$collections$ListView* $tmp573;
    panda$core$Int64 $tmp575;
    panda$core$Char8 $match$299_21580;
    panda$core$Char8 $tmp581;
    panda$core$UInt8 $tmp582;
    panda$core$Char8 $tmp584;
    panda$core$UInt8 $tmp585;
    panda$core$Char8 $tmp586;
    panda$core$UInt8 $tmp587;
    panda$core$Char8 $tmp589;
    panda$core$UInt8 $tmp590;
    panda$core$Char8 $tmp591;
    panda$core$UInt8 $tmp592;
    panda$core$Char8 $tmp594;
    panda$core$UInt8 $tmp595;
    panda$core$Char8 $tmp596;
    panda$core$UInt8 $tmp597;
    panda$core$Char8 $tmp599;
    panda$core$UInt8 $tmp600;
    panda$core$Char8 $tmp601;
    panda$core$UInt8 $tmp602;
    panda$core$Char8 $tmp604;
    panda$core$UInt8 $tmp605;
    panda$core$Char8 $tmp606;
    panda$core$UInt8 $tmp607;
    panda$core$Char8 $tmp609;
    panda$core$UInt8 $tmp610;
    panda$core$Char8 $tmp611;
    panda$core$UInt8 $tmp612;
    panda$core$Bit oldAllow617;
    panda$core$Bit $tmp618;
    org$pandalanguage$pandac$ASTNode* expr619 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp620;
    org$pandalanguage$pandac$ASTNode* $tmp621;
    org$pandalanguage$pandac$ASTNode* $tmp623;
    panda$core$String* align629 = NULL;
    panda$core$String* $tmp630;
    panda$core$String* format631 = NULL;
    panda$core$String* $tmp632;
    org$pandalanguage$pandac$parser$Token$Kind $tmp633;
    panda$core$Int64 $tmp634;
    panda$core$String* $tmp636;
    panda$core$String* $tmp637;
    panda$core$String* $tmp638;
    org$pandalanguage$pandac$parser$Token$Kind $tmp640;
    panda$core$Int64 $tmp641;
    panda$core$String* $tmp646;
    panda$core$String* $tmp647;
    panda$core$String* $tmp648;
    org$pandalanguage$pandac$ASTNode* $tmp650;
    org$pandalanguage$pandac$ASTNode* formattable657 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp658;
    org$pandalanguage$pandac$ASTNode* $tmp659;
    panda$core$Int64 $tmp661;
    org$pandalanguage$pandac$ASTNode* cast665 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp666;
    org$pandalanguage$pandac$ASTNode* $tmp667;
    panda$core$Int64 $tmp669;
    org$pandalanguage$pandac$parser$Token$Kind $tmp672;
    panda$core$Int64 $tmp673;
    org$pandalanguage$pandac$ASTNode* dot674 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp675;
    org$pandalanguage$pandac$ASTNode* $tmp676;
    panda$core$Int64 $tmp678;
    panda$collections$Array* callArgs682 = NULL;
    panda$collections$Array* $tmp683;
    panda$collections$Array* $tmp684;
    org$pandalanguage$pandac$ASTNode* $tmp686;
    panda$core$Int64 $tmp688;
    org$pandalanguage$pandac$ASTNode* $tmp689;
    org$pandalanguage$pandac$ASTNode* $tmp690;
    org$pandalanguage$pandac$ASTNode* $tmp691;
    panda$core$Int64 $tmp693;
    panda$collections$ImmutableArray* $tmp696;
    org$pandalanguage$pandac$parser$Token$Kind $tmp699;
    panda$core$Int64 $tmp700;
    org$pandalanguage$pandac$ASTNode* $tmp703;
    org$pandalanguage$pandac$ASTNode* $tmp712;
    org$pandalanguage$pandac$ASTNode* $tmp713;
    org$pandalanguage$pandac$ASTNode* $tmp714;
    org$pandalanguage$pandac$ASTNode* pandaType716 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp717;
    org$pandalanguage$pandac$ASTNode* $tmp718;
    panda$core$Int64 $tmp720;
    org$pandalanguage$pandac$ASTNode* callTarget724 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp725;
    org$pandalanguage$pandac$ASTNode* $tmp726;
    panda$core$Int64 $tmp728;
    panda$collections$Array* callArgs732 = NULL;
    panda$collections$Array* $tmp733;
    panda$collections$Array* $tmp734;
    org$pandalanguage$pandac$ASTNode* $tmp736;
    panda$core$Int64 $tmp738;
    org$pandalanguage$pandac$ASTNode* $tmp739;
    org$pandalanguage$pandac$ASTNode* $tmp740;
    org$pandalanguage$pandac$ASTNode* $tmp741;
    panda$core$Int64 $tmp743;
    panda$collections$ImmutableArray* $tmp746;
    panda$core$String* text749 = NULL;
    panda$core$String* $tmp750;
    panda$core$String* $tmp751;
    panda$core$MutableString* $tmp753;
    panda$core$MutableString* $tmp754;
    panda$core$MutableString* $tmp755;
    org$pandalanguage$pandac$ASTNode* $tmp762;
    org$pandalanguage$pandac$ASTNode* $tmp763;
    org$pandalanguage$pandac$ASTNode* $tmp764;
    org$pandalanguage$pandac$ASTNode* $tmp765;
    panda$core$Int64 $tmp767;
    org$pandalanguage$pandac$ASTNode* $tmp769;
    org$pandalanguage$pandac$ASTNode* $tmp770;
    org$pandalanguage$pandac$ASTNode* $tmp771;
    org$pandalanguage$pandac$ASTNode* $tmp773;
    org$pandalanguage$pandac$ASTNode* $tmp774;
    org$pandalanguage$pandac$ASTNode* $tmp775;
    org$pandalanguage$pandac$ASTNode* $tmp779;
    panda$core$String* $tmp784;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp785;
    panda$core$Bit $tmp788;
    panda$core$String* $tmp791;
    org$pandalanguage$pandac$ASTNode* $tmp793;
    org$pandalanguage$pandac$ASTNode* $tmp794;
    org$pandalanguage$pandac$ASTNode* $tmp795;
    panda$core$Int64 $tmp797;
    panda$core$String* $tmp798;
    int $tmp487;
    {
        $atPre1488 = self->allowLambdas;
        int $tmp491;
        {
            org$pandalanguage$pandac$parser$Token $tmp493 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            start492 = $tmp493;
            panda$core$Int64$init$builtin_int64(&$tmp495, 7);
            panda$core$Bit $tmp496 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start492.kind.$rawValue, $tmp495);
            bool $tmp494 = $tmp496.value;
            if (!$tmp494) goto $l497;
            panda$core$Int64$init$builtin_int64(&$tmp498, 6);
            panda$core$Bit $tmp499 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start492.kind.$rawValue, $tmp498);
            $tmp494 = $tmp499.value;
            $l497:;
            panda$core$Bit $tmp500 = { $tmp494 };
            if ($tmp500.value) {
            {
                panda$core$String* $tmp505 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start492);
                $tmp504 = $tmp505;
                panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s503, $tmp504);
                $tmp502 = $tmp506;
                panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp502, &$s507);
                $tmp501 = $tmp508;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start492, $tmp501);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
                $tmp510 = NULL;
                $returnValue509 = $tmp510;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp510));
                $tmp491 = 0;
                goto $l489;
                $l511:;
                $tmp487 = 0;
                goto $l485;
                $l512:;
                return $returnValue509;
            }
            }
            $tmp515 = NULL;
            result514 = $tmp515;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
            panda$core$MutableString* $tmp519 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp519);
            $tmp518 = $tmp519;
            $tmp517 = $tmp518;
            chunk516 = $tmp517;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp517));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
            $l520:;
            while (true) {
            {
                org$pandalanguage$pandac$parser$Token $tmp523 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                token522 = $tmp523;
                panda$core$Bit $tmp524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token522.kind.$rawValue, start492.kind.$rawValue);
                if ($tmp524.value) {
                {
                    goto $l521;
                }
                }
                {
                    $match$280_13525 = token522.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp526, 12);
                    panda$core$Bit $tmp527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$280_13525.$rawValue, $tmp526);
                    if ($tmp527.value) {
                    {
                        int $tmp530;
                        {
                            panda$core$String* $tmp534 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token522);
                            $tmp533 = $tmp534;
                            $tmp532 = $tmp533;
                            str531 = $tmp532;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp532));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
                            panda$core$UInt8$init$builtin_uint8(&$tmp536, 10);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp535, $tmp536);
                            panda$core$Bit $tmp537 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str531, $tmp535);
                            if ($tmp537.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start492, &$s538);
                                $tmp539 = NULL;
                                $returnValue509 = $tmp539;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp539));
                                $tmp530 = 0;
                                goto $l528;
                                $l540:;
                                $tmp491 = 1;
                                goto $l489;
                                $l541:;
                                $tmp487 = 1;
                                goto $l485;
                                $l542:;
                                return $returnValue509;
                            }
                            }
                            panda$core$MutableString$append$panda$core$String(chunk516, str531);
                        }
                        $tmp530 = -1;
                        goto $l528;
                        $l528:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str531));
                        str531 = NULL;
                        switch ($tmp530) {
                            case -1: goto $l544;
                            case 0: goto $l540;
                        }
                        $l544:;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp545, 0);
                    panda$core$Bit $tmp546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$280_13525.$rawValue, $tmp545);
                    if ($tmp546.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start492, &$s547);
                        $tmp548 = NULL;
                        $returnValue509 = $tmp548;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp548));
                        $tmp491 = 2;
                        goto $l489;
                        $l549:;
                        $tmp487 = 2;
                        goto $l485;
                        $l550:;
                        return $returnValue509;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp552, 106);
                    panda$core$Bit $tmp553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$280_13525.$rawValue, $tmp552);
                    if ($tmp553.value) {
                    {
                        int $tmp556;
                        {
                            org$pandalanguage$pandac$parser$Token $tmp558 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                            escape557 = $tmp558;
                            panda$core$Int64$init$builtin_int64(&$tmp559, 0);
                            panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape557.kind.$rawValue, $tmp559);
                            if ($tmp560.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start492, &$s561);
                                $tmp562 = NULL;
                                $returnValue509 = $tmp562;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp562));
                                $tmp556 = 0;
                                goto $l554;
                                $l563:;
                                $tmp491 = 3;
                                goto $l489;
                                $l564:;
                                $tmp487 = 3;
                                goto $l485;
                                $l565:;
                                return $returnValue509;
                            }
                            }
                            panda$core$String* $tmp570 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape557);
                            $tmp569 = $tmp570;
                            $tmp568 = $tmp569;
                            escapeText567 = $tmp568;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp568));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
                            panda$collections$ListView* $tmp574 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText567);
                            $tmp573 = $tmp574;
                            panda$core$Int64$init$builtin_int64(&$tmp575, 0);
                            ITable* $tmp576 = $tmp573->$class->itable;
                            while ($tmp576->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp576 = $tmp576->next;
                            }
                            $fn578 $tmp577 = $tmp576->methods[0];
                            panda$core$Object* $tmp579 = $tmp577($tmp573, $tmp575);
                            $tmp572 = $tmp579;
                            c571 = ((panda$core$Char8$wrapper*) $tmp572)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp572);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
                            {
                                $match$299_21580 = c571;
                                panda$core$UInt8$init$builtin_uint8(&$tmp582, 110);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp581, $tmp582);
                                panda$core$Bit $tmp583 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$299_21580, $tmp581);
                                if ($tmp583.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp585, 10);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp584, $tmp585);
                                    panda$core$MutableString$append$panda$core$Char8(chunk516, $tmp584);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp587, 114);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp586, $tmp587);
                                panda$core$Bit $tmp588 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$299_21580, $tmp586);
                                if ($tmp588.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp590, 13);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp589, $tmp590);
                                    panda$core$MutableString$append$panda$core$Char8(chunk516, $tmp589);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp592, 116);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp591, $tmp592);
                                panda$core$Bit $tmp593 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$299_21580, $tmp591);
                                if ($tmp593.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp595, 9);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp594, $tmp595);
                                    panda$core$MutableString$append$panda$core$Char8(chunk516, $tmp594);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp597, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp596, $tmp597);
                                panda$core$Bit $tmp598 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$299_21580, $tmp596);
                                if ($tmp598.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp600, 39);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp599, $tmp600);
                                    panda$core$MutableString$append$panda$core$Char8(chunk516, $tmp599);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp602, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp601, $tmp602);
                                panda$core$Bit $tmp603 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$299_21580, $tmp601);
                                if ($tmp603.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp605, 34);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp604, $tmp605);
                                    panda$core$MutableString$append$panda$core$Char8(chunk516, $tmp604);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp607, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp606, $tmp607);
                                panda$core$Bit $tmp608 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$299_21580, $tmp606);
                                if ($tmp608.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp610, 92);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp609, $tmp610);
                                    panda$core$MutableString$append$panda$core$Char8(chunk516, $tmp609);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp612, 123);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp611, $tmp612);
                                panda$core$Bit $tmp613 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$299_21580, $tmp611);
                                if ($tmp613.value) {
                                {
                                    {
                                        int $tmp616;
                                        {
                                            oldAllow617 = self->allowLambdas;
                                            panda$core$Bit$init$builtin_bit(&$tmp618, false);
                                            self->allowLambdas = $tmp618;
                                            org$pandalanguage$pandac$ASTNode* $tmp622 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                            $tmp621 = $tmp622;
                                            $tmp620 = $tmp621;
                                            expr619 = $tmp620;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp620));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp621));
                                            self->allowLambdas = oldAllow617;
                                            if (((panda$core$Bit) { expr619 == NULL }).value) {
                                            {
                                                $tmp623 = NULL;
                                                $returnValue509 = $tmp623;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp623));
                                                $tmp616 = 0;
                                                goto $l614;
                                                $l624:;
                                                $tmp556 = 1;
                                                goto $l554;
                                                $l625:;
                                                $tmp491 = 4;
                                                goto $l489;
                                                $l626:;
                                                $tmp487 = 4;
                                                goto $l485;
                                                $l627:;
                                                return $returnValue509;
                                            }
                                            }
                                            $tmp630 = NULL;
                                            align629 = $tmp630;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp630));
                                            $tmp632 = NULL;
                                            format631 = $tmp632;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp632));
                                            panda$core$Int64$init$builtin_int64(&$tmp634, 105);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp633, $tmp634);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp635 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp633);
                                            if (((panda$core$Bit) { $tmp635.nonnull }).value) {
                                            {
                                                {
                                                    $tmp636 = align629;
                                                    panda$core$String* $tmp639 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start492);
                                                    $tmp638 = $tmp639;
                                                    $tmp637 = $tmp638;
                                                    align629 = $tmp637;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp637));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
                                                }
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp641, 95);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp640, $tmp641);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp642 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp640);
                                            if (((panda$core$Bit) { $tmp642.nonnull }).value) {
                                            {
                                                int $tmp645;
                                                {
                                                    {
                                                        $tmp646 = format631;
                                                        panda$core$String* $tmp649 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start492);
                                                        $tmp648 = $tmp649;
                                                        $tmp647 = $tmp648;
                                                        format631 = $tmp647;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp647));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp648));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
                                                    }
                                                    if (((panda$core$Bit) { format631 == NULL }).value) {
                                                    {
                                                        $tmp650 = NULL;
                                                        $returnValue509 = $tmp650;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp650));
                                                        $tmp645 = 0;
                                                        goto $l643;
                                                        $l651:;
                                                        $tmp616 = 1;
                                                        goto $l614;
                                                        $l652:;
                                                        $tmp556 = 2;
                                                        goto $l554;
                                                        $l653:;
                                                        $tmp491 = 5;
                                                        goto $l489;
                                                        $l654:;
                                                        $tmp487 = 5;
                                                        goto $l485;
                                                        $l655:;
                                                        return $returnValue509;
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp660 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp661, 42);
                                                    org$pandalanguage$pandac$Position $tmp663 = (($fn662) expr619->$class->vtable[2])(expr619);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp660, $tmp661, $tmp663, &$s664);
                                                    $tmp659 = $tmp660;
                                                    $tmp658 = $tmp659;
                                                    formattable657 = $tmp658;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp658));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp659));
                                                    org$pandalanguage$pandac$ASTNode* $tmp668 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp669, 4);
                                                    org$pandalanguage$pandac$Position $tmp671 = (($fn670) expr619->$class->vtable[2])(expr619);
                                                    panda$core$Int64$init$builtin_int64(&$tmp673, 89);
                                                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp672, $tmp673);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp668, $tmp669, $tmp671, expr619, $tmp672, formattable657);
                                                    $tmp667 = $tmp668;
                                                    $tmp666 = $tmp667;
                                                    cast665 = $tmp666;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp666));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp667));
                                                    org$pandalanguage$pandac$ASTNode* $tmp677 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp678, 15);
                                                    org$pandalanguage$pandac$Position $tmp680 = (($fn679) expr619->$class->vtable[2])(expr619);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp677, $tmp678, $tmp680, cast665, &$s681);
                                                    $tmp676 = $tmp677;
                                                    $tmp675 = $tmp676;
                                                    dot674 = $tmp675;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp675));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp676));
                                                    panda$collections$Array* $tmp685 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp685);
                                                    $tmp684 = $tmp685;
                                                    $tmp683 = $tmp684;
                                                    callArgs682 = $tmp683;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp683));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
                                                    org$pandalanguage$pandac$ASTNode* $tmp687 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp688, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp687, $tmp688, start492.position, format631);
                                                    $tmp686 = $tmp687;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs682, ((panda$core$Object*) $tmp686));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp686));
                                                    {
                                                        $tmp689 = expr619;
                                                        org$pandalanguage$pandac$ASTNode* $tmp692 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp693, 8);
                                                        org$pandalanguage$pandac$Position $tmp695 = (($fn694) expr619->$class->vtable[2])(expr619);
                                                        panda$collections$ImmutableArray* $tmp697 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs682);
                                                        $tmp696 = $tmp697;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp692, $tmp693, $tmp695, dot674, $tmp696);
                                                        $tmp691 = $tmp692;
                                                        $tmp690 = $tmp691;
                                                        expr619 = $tmp690;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp690));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
                                                    }
                                                }
                                                $tmp645 = -1;
                                                goto $l643;
                                                $l643:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs682));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot674));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast665));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable657));
                                                formattable657 = NULL;
                                                cast665 = NULL;
                                                dot674 = NULL;
                                                callArgs682 = NULL;
                                                switch ($tmp645) {
                                                    case -1: goto $l698;
                                                    case 0: goto $l651;
                                                }
                                                $l698:;
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp700, 100);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp699, $tmp700);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp702 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp699, &$s701);
                                            if (((panda$core$Bit) { !$tmp702.nonnull }).value) {
                                            {
                                                $tmp703 = NULL;
                                                $returnValue509 = $tmp703;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp703));
                                                $tmp616 = 2;
                                                goto $l614;
                                                $l704:;
                                                $tmp556 = 3;
                                                goto $l554;
                                                $l705:;
                                                $tmp491 = 6;
                                                goto $l489;
                                                $l706:;
                                                $tmp487 = 6;
                                                goto $l485;
                                                $l707:;
                                                return $returnValue509;
                                            }
                                            }
                                            if (((panda$core$Bit) { align629 != NULL }).value) {
                                            {
                                                int $tmp711;
                                                {
                                                    if (((panda$core$Bit) { format631 == NULL }).value) {
                                                    {
                                                        {
                                                            $tmp712 = expr619;
                                                            org$pandalanguage$pandac$ASTNode* $tmp715 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr619);
                                                            $tmp714 = $tmp715;
                                                            $tmp713 = $tmp714;
                                                            expr619 = $tmp713;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp713));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp714));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp712));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp719 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp720, 42);
                                                    org$pandalanguage$pandac$Position $tmp722 = (($fn721) expr619->$class->vtable[2])(expr619);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp719, $tmp720, $tmp722, &$s723);
                                                    $tmp718 = $tmp719;
                                                    $tmp717 = $tmp718;
                                                    pandaType716 = $tmp717;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp717));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp718));
                                                    org$pandalanguage$pandac$ASTNode* $tmp727 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp728, 15);
                                                    org$pandalanguage$pandac$Position $tmp730 = (($fn729) expr619->$class->vtable[2])(expr619);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp727, $tmp728, $tmp730, pandaType716, &$s731);
                                                    $tmp726 = $tmp727;
                                                    $tmp725 = $tmp726;
                                                    callTarget724 = $tmp725;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp725));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp726));
                                                    panda$collections$Array* $tmp735 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp735);
                                                    $tmp734 = $tmp735;
                                                    $tmp733 = $tmp734;
                                                    callArgs732 = $tmp733;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp733));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp734));
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs732, ((panda$core$Object*) expr619));
                                                    org$pandalanguage$pandac$ASTNode* $tmp737 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp738, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp737, $tmp738, start492.position, align629);
                                                    $tmp736 = $tmp737;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs732, ((panda$core$Object*) $tmp736));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp736));
                                                    {
                                                        $tmp739 = expr619;
                                                        org$pandalanguage$pandac$ASTNode* $tmp742 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp743, 8);
                                                        org$pandalanguage$pandac$Position $tmp745 = (($fn744) expr619->$class->vtable[2])(expr619);
                                                        panda$collections$ImmutableArray* $tmp747 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs732);
                                                        $tmp746 = $tmp747;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp742, $tmp743, $tmp745, callTarget724, $tmp746);
                                                        $tmp741 = $tmp742;
                                                        $tmp740 = $tmp741;
                                                        expr619 = $tmp740;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp740));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp741));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp746));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp739));
                                                    }
                                                }
                                                $tmp711 = -1;
                                                goto $l709;
                                                $l709:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs732));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget724));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType716));
                                                pandaType716 = NULL;
                                                callTarget724 = NULL;
                                                callArgs732 = NULL;
                                                switch ($tmp711) {
                                                    case -1: goto $l748;
                                                }
                                                $l748:;
                                            }
                                            }
                                            panda$core$String* $tmp752 = panda$core$MutableString$finish$R$panda$core$String(chunk516);
                                            $tmp751 = $tmp752;
                                            $tmp750 = $tmp751;
                                            text749 = $tmp750;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp750));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
                                            {
                                                $tmp753 = chunk516;
                                                panda$core$MutableString* $tmp756 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                                panda$core$MutableString$init($tmp756);
                                                $tmp755 = $tmp756;
                                                $tmp754 = $tmp755;
                                                chunk516 = $tmp754;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp754));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp755));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp753));
                                            }
                                            panda$core$Bit $tmp759 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text749, &$s758);
                                            bool $tmp757 = $tmp759.value;
                                            if ($tmp757) goto $l760;
                                            $tmp757 = ((panda$core$Bit) { result514 != NULL }).value;
                                            $l760:;
                                            panda$core$Bit $tmp761 = { $tmp757 };
                                            if ($tmp761.value) {
                                            {
                                                {
                                                    $tmp762 = result514;
                                                    org$pandalanguage$pandac$ASTNode* $tmp766 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp767, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp766, $tmp767, start492.position, text749);
                                                    $tmp765 = $tmp766;
                                                    org$pandalanguage$pandac$ASTNode* $tmp768 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result514, $tmp765);
                                                    $tmp764 = $tmp768;
                                                    $tmp763 = $tmp764;
                                                    result514 = $tmp763;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp763));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp764));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp765));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
                                                }
                                                {
                                                    $tmp769 = result514;
                                                    org$pandalanguage$pandac$ASTNode* $tmp772 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result514, expr619);
                                                    $tmp771 = $tmp772;
                                                    $tmp770 = $tmp771;
                                                    result514 = $tmp770;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp770));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp771));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp773 = result514;
                                                    org$pandalanguage$pandac$ASTNode* $tmp776 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr619);
                                                    $tmp775 = $tmp776;
                                                    $tmp774 = $tmp775;
                                                    result514 = $tmp774;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp774));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
                                                }
                                            }
                                            }
                                        }
                                        $tmp616 = -1;
                                        goto $l614;
                                        $l614:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text749));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format631));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align629));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr619));
                                        expr619 = NULL;
                                        text749 = NULL;
                                        switch ($tmp616) {
                                            case 1: goto $l652;
                                            case 0: goto $l624;
                                            case -1: goto $l777;
                                            case 2: goto $l704;
                                        }
                                        $l777:;
                                    }
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token522, &$s778);
                                    $tmp779 = NULL;
                                    $returnValue509 = $tmp779;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp779));
                                    $tmp556 = 4;
                                    goto $l554;
                                    $l780:;
                                    $tmp491 = 7;
                                    goto $l489;
                                    $l781:;
                                    $tmp487 = 7;
                                    goto $l485;
                                    $l782:;
                                    return $returnValue509;
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            panda$core$String$Index $tmp786 = panda$core$String$start$R$panda$core$String$Index(escapeText567);
                            panda$core$String$Index $tmp787 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText567, $tmp786);
                            panda$core$Bit$init$builtin_bit(&$tmp788, false);
                            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp785, ((panda$core$String$Index$nullable) { $tmp787, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp788);
                            panda$core$String* $tmp789 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText567, $tmp785);
                            $tmp784 = $tmp789;
                            panda$core$MutableString$append$panda$core$String(chunk516, $tmp784);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp784));
                        }
                        $tmp556 = -1;
                        goto $l554;
                        $l554:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText567));
                        escapeText567 = NULL;
                        switch ($tmp556) {
                            case 3: goto $l705;
                            case -1: goto $l790;
                            case 2: goto $l653;
                            case 4: goto $l780;
                            case 1: goto $l625;
                            case 0: goto $l563;
                        }
                        $l790:;
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp792 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token522);
                        $tmp791 = $tmp792;
                        panda$core$MutableString$append$panda$core$String(chunk516, $tmp791);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp791));
                    }
                    }
                    }
                    }
                }
            }
            }
            $l521:;
            org$pandalanguage$pandac$ASTNode* $tmp796 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp797, 38);
            panda$core$String* $tmp799 = panda$core$MutableString$finish$R$panda$core$String(chunk516);
            $tmp798 = $tmp799;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp796, $tmp797, start492.position, $tmp798);
            $tmp795 = $tmp796;
            org$pandalanguage$pandac$ASTNode* $tmp800 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result514, $tmp795);
            $tmp794 = $tmp800;
            $tmp793 = $tmp794;
            $returnValue509 = $tmp793;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp793));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp794));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp798));
            $tmp491 = 8;
            goto $l489;
            $l801:;
            $tmp487 = 8;
            goto $l485;
            $l802:;
            return $returnValue509;
        }
        $l489:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result514));
        chunk516 = NULL;
        switch ($tmp491) {
            case 0: goto $l511;
            case 2: goto $l549;
            case 6: goto $l706;
            case 7: goto $l781;
            case 5: goto $l654;
            case 8: goto $l801;
            case 4: goto $l626;
            case 3: goto $l564;
            case 1: goto $l541;
        }
        $l804:;
    }
    $tmp487 = -1;
    goto $l485;
    $l485:;
    panda$core$Bit $tmp806 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->allowLambdas, $atPre1488);
    if ($tmp806.value) goto $l807; else goto $l808;
    $l808:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s809, (panda$core$Int64) { 267 }, &$s810);
    abort();
    $l807:;
    switch ($tmp487) {
        case 8: goto $l802;
        case 7: goto $l782;
        case 6: goto $l707;
        case 2: goto $l550;
        case 5: goto $l655;
        case 3: goto $l565;
        case 0: goto $l512;
        case 4: goto $l627;
        case -1: goto $l805;
        case 1: goto $l542;
    }
    $l805:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start814;
    org$pandalanguage$pandac$parser$Token$Kind $tmp815;
    panda$core$Int64 $tmp816;
    org$pandalanguage$pandac$ASTNode* $returnValue819;
    org$pandalanguage$pandac$ASTNode* $tmp820;
    org$pandalanguage$pandac$ASTNode* expr823 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp824;
    org$pandalanguage$pandac$ASTNode* $tmp825;
    org$pandalanguage$pandac$ASTNode* $tmp827;
    org$pandalanguage$pandac$ASTNode* $match$385_9833 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp834;
    panda$core$Int64 $tmp835;
    org$pandalanguage$pandac$Position firstPosition837;
    panda$core$String* firstName839 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp841;
    panda$core$Int64 $tmp842;
    panda$collections$Array* parameters847 = NULL;
    panda$collections$Array* $tmp848;
    panda$collections$Array* $tmp849;
    org$pandalanguage$pandac$ASTNode* firstType851 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp852;
    org$pandalanguage$pandac$ASTNode* $tmp853;
    org$pandalanguage$pandac$ASTNode* $tmp855;
    org$pandalanguage$pandac$ASTNode* $tmp860;
    panda$core$Int64 $tmp862;
    org$pandalanguage$pandac$parser$Token$Kind $tmp866;
    panda$core$Int64 $tmp867;
    org$pandalanguage$pandac$parser$Token$nullable nextName872;
    org$pandalanguage$pandac$parser$Token$Kind $tmp873;
    panda$core$Int64 $tmp874;
    org$pandalanguage$pandac$parser$Token$Kind $tmp877;
    panda$core$Int64 $tmp878;
    org$pandalanguage$pandac$ASTNode* $tmp881;
    org$pandalanguage$pandac$ASTNode* nextType887 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp888;
    org$pandalanguage$pandac$ASTNode* $tmp889;
    org$pandalanguage$pandac$ASTNode* $tmp891;
    org$pandalanguage$pandac$ASTNode* $tmp897;
    panda$core$Int64 $tmp899;
    panda$core$String* $tmp900;
    org$pandalanguage$pandac$parser$Token$Kind $tmp903;
    panda$core$Int64 $tmp904;
    org$pandalanguage$pandac$ASTNode* $tmp907;
    org$pandalanguage$pandac$parser$Token$Kind $tmp912;
    panda$core$Int64 $tmp913;
    org$pandalanguage$pandac$ASTNode* $tmp916;
    org$pandalanguage$pandac$ASTNode* body921 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp922;
    org$pandalanguage$pandac$ASTNode* $tmp923;
    org$pandalanguage$pandac$ASTNode* $tmp925;
    org$pandalanguage$pandac$ASTNode* $tmp930;
    org$pandalanguage$pandac$ASTNode* $tmp931;
    panda$core$Int64 $tmp933;
    panda$collections$ImmutableArray* $tmp934;
    org$pandalanguage$pandac$parser$Token$Kind $tmp941;
    panda$core$Int64 $tmp942;
    panda$collections$Array* parameters947 = NULL;
    panda$collections$Array* $tmp948;
    panda$collections$Array* $tmp949;
    panda$core$Bit validLambda951;
    panda$core$Bit $tmp952;
    org$pandalanguage$pandac$ASTNode* nextExpr958 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp959;
    org$pandalanguage$pandac$ASTNode* $tmp960;
    org$pandalanguage$pandac$ASTNode* $tmp962;
    org$pandalanguage$pandac$ASTNode* $tmp970;
    panda$core$Int64 $tmp975;
    panda$core$Bit $tmp977;
    org$pandalanguage$pandac$parser$Token$Kind $tmp981;
    panda$core$Int64 $tmp982;
    org$pandalanguage$pandac$parser$Token$Kind $tmp984;
    panda$core$Int64 $tmp985;
    org$pandalanguage$pandac$ASTNode* $tmp988;
    org$pandalanguage$pandac$parser$Token$Kind $tmp995;
    panda$core$Int64 $tmp996;
    org$pandalanguage$pandac$ASTNode* body1002 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1003;
    org$pandalanguage$pandac$ASTNode* $tmp1004;
    org$pandalanguage$pandac$ASTNode* $tmp1006;
    org$pandalanguage$pandac$ASTNode* $tmp1012;
    org$pandalanguage$pandac$ASTNode* $tmp1013;
    panda$core$Int64 $tmp1015;
    panda$collections$ImmutableArray* $tmp1016;
    org$pandalanguage$pandac$ASTNode* $tmp1025;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1031;
    panda$core$Int64 $tmp1032;
    org$pandalanguage$pandac$ASTNode* $tmp1035;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1039;
    panda$core$Int64 $tmp1040;
    panda$collections$Array* parameters1045 = NULL;
    panda$collections$Array* $tmp1046;
    panda$collections$Array* $tmp1047;
    org$pandalanguage$pandac$ASTNode* body1049 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1050;
    org$pandalanguage$pandac$ASTNode* $tmp1051;
    org$pandalanguage$pandac$ASTNode* $tmp1053;
    org$pandalanguage$pandac$ASTNode* $tmp1058;
    org$pandalanguage$pandac$ASTNode* $tmp1059;
    panda$core$Int64 $tmp1061;
    panda$collections$ImmutableArray* $tmp1062;
    org$pandalanguage$pandac$ASTNode* $tmp1069;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1076;
    panda$core$Int64 $tmp1077;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1079;
    panda$core$Int64 $tmp1080;
    org$pandalanguage$pandac$ASTNode* $tmp1082;
    panda$collections$Array* arguments1087 = NULL;
    panda$collections$Array* $tmp1088;
    panda$collections$Array* $tmp1089;
    org$pandalanguage$pandac$ASTNode* nextExpr1096 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1097;
    org$pandalanguage$pandac$ASTNode* $tmp1098;
    org$pandalanguage$pandac$ASTNode* $tmp1100;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1108;
    panda$core$Int64 $tmp1109;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1111;
    panda$core$Int64 $tmp1112;
    org$pandalanguage$pandac$ASTNode* $tmp1115;
    int $tmp813;
    {
        panda$core$Int64$init$builtin_int64(&$tmp816, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp815, $tmp816);
        org$pandalanguage$pandac$parser$Token$nullable $tmp818 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp815, &$s817);
        start814 = $tmp818;
        if (((panda$core$Bit) { !start814.nonnull }).value) {
        {
            $tmp820 = NULL;
            $returnValue819 = $tmp820;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp820));
            $tmp813 = 0;
            goto $l811;
            $l821:;
            return $returnValue819;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp826 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp825 = $tmp826;
        $tmp824 = $tmp825;
        expr823 = $tmp824;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp824));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp825));
        if (((panda$core$Bit) { expr823 == NULL }).value) {
        {
            $tmp827 = NULL;
            $returnValue819 = $tmp827;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp827));
            $tmp813 = 1;
            goto $l811;
            $l828:;
            return $returnValue819;
        }
        }
        int $tmp832;
        {
            $tmp834 = expr823;
            $match$385_9833 = $tmp834;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp834));
            panda$core$Int64$init$builtin_int64(&$tmp835, 20);
            panda$core$Bit $tmp836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$385_9833->$rawValue, $tmp835);
            if ($tmp836.value) {
            {
                org$pandalanguage$pandac$Position* $tmp838 = ((org$pandalanguage$pandac$Position*) ((char*) $match$385_9833->$data + 0));
                firstPosition837 = *$tmp838;
                panda$core$String** $tmp840 = ((panda$core$String**) ((char*) $match$385_9833->$data + 16));
                firstName839 = *$tmp840;
                panda$core$Int64$init$builtin_int64(&$tmp842, 95);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp841, $tmp842);
                org$pandalanguage$pandac$parser$Token$nullable $tmp843 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp841);
                if (((panda$core$Bit) { $tmp843.nonnull }).value) {
                {
                    int $tmp846;
                    {
                        panda$collections$Array* $tmp850 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp850);
                        $tmp849 = $tmp850;
                        $tmp848 = $tmp849;
                        parameters847 = $tmp848;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp848));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp849));
                        org$pandalanguage$pandac$ASTNode* $tmp854 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp853 = $tmp854;
                        $tmp852 = $tmp853;
                        firstType851 = $tmp852;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp852));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp853));
                        if (((panda$core$Bit) { firstType851 == NULL }).value) {
                        {
                            $tmp855 = NULL;
                            $returnValue819 = $tmp855;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp855));
                            $tmp846 = 0;
                            goto $l844;
                            $l856:;
                            $tmp832 = 0;
                            goto $l830;
                            $l857:;
                            $tmp813 = 2;
                            goto $l811;
                            $l858:;
                            return $returnValue819;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp861 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp862, 31);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp861, $tmp862, firstPosition837, firstName839, firstType851);
                        $tmp860 = $tmp861;
                        panda$collections$Array$add$panda$collections$Array$T(parameters847, ((panda$core$Object*) $tmp860));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp860));
                        $l863:;
                        panda$core$Int64$init$builtin_int64(&$tmp867, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp866, $tmp867);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp868 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp866);
                        bool $tmp865 = ((panda$core$Bit) { $tmp868.nonnull }).value;
                        if (!$tmp865) goto $l864;
                        {
                            int $tmp871;
                            {
                                panda$core$Int64$init$builtin_int64(&$tmp874, 48);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp873, $tmp874);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp876 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp873, &$s875);
                                nextName872 = $tmp876;
                                panda$core$Int64$init$builtin_int64(&$tmp878, 95);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp877, $tmp878);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp880 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp877, &$s879);
                                if (((panda$core$Bit) { !$tmp880.nonnull }).value) {
                                {
                                    $tmp881 = NULL;
                                    $returnValue819 = $tmp881;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp881));
                                    $tmp871 = 0;
                                    goto $l869;
                                    $l882:;
                                    $tmp846 = 1;
                                    goto $l844;
                                    $l883:;
                                    $tmp832 = 1;
                                    goto $l830;
                                    $l884:;
                                    $tmp813 = 3;
                                    goto $l811;
                                    $l885:;
                                    return $returnValue819;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp890 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp889 = $tmp890;
                                $tmp888 = $tmp889;
                                nextType887 = $tmp888;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp888));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp889));
                                if (((panda$core$Bit) { nextType887 == NULL }).value) {
                                {
                                    $tmp891 = NULL;
                                    $returnValue819 = $tmp891;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp891));
                                    $tmp871 = 1;
                                    goto $l869;
                                    $l892:;
                                    $tmp846 = 2;
                                    goto $l844;
                                    $l893:;
                                    $tmp832 = 2;
                                    goto $l830;
                                    $l894:;
                                    $tmp813 = 4;
                                    goto $l811;
                                    $l895:;
                                    return $returnValue819;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp898 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp899, 31);
                                panda$core$String* $tmp901 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) nextName872.value));
                                $tmp900 = $tmp901;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp898, $tmp899, ((org$pandalanguage$pandac$parser$Token) nextName872.value).position, $tmp900, nextType887);
                                $tmp897 = $tmp898;
                                panda$collections$Array$add$panda$collections$Array$T(parameters847, ((panda$core$Object*) $tmp897));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp897));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp900));
                            }
                            $tmp871 = -1;
                            goto $l869;
                            $l869:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextType887));
                            nextType887 = NULL;
                            switch ($tmp871) {
                                case -1: goto $l902;
                                case 0: goto $l882;
                                case 1: goto $l892;
                            }
                            $l902:;
                        }
                        goto $l863;
                        $l864:;
                        panda$core$Int64$init$builtin_int64(&$tmp904, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp903, $tmp904);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp906 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp903, &$s905);
                        if (((panda$core$Bit) { !$tmp906.nonnull }).value) {
                        {
                            $tmp907 = NULL;
                            $returnValue819 = $tmp907;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp907));
                            $tmp846 = 3;
                            goto $l844;
                            $l908:;
                            $tmp832 = 3;
                            goto $l830;
                            $l909:;
                            $tmp813 = 5;
                            goto $l811;
                            $l910:;
                            return $returnValue819;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp913, 90);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp912, $tmp913);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp915 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp912, &$s914);
                        if (((panda$core$Bit) { !$tmp915.nonnull }).value) {
                        {
                            $tmp916 = NULL;
                            $returnValue819 = $tmp916;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp916));
                            $tmp846 = 4;
                            goto $l844;
                            $l917:;
                            $tmp832 = 4;
                            goto $l830;
                            $l918:;
                            $tmp813 = 6;
                            goto $l811;
                            $l919:;
                            return $returnValue819;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp924 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp923 = $tmp924;
                        $tmp922 = $tmp923;
                        body921 = $tmp922;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp922));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp923));
                        if (((panda$core$Bit) { body921 == NULL }).value) {
                        {
                            $tmp925 = NULL;
                            $returnValue819 = $tmp925;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp925));
                            $tmp846 = 5;
                            goto $l844;
                            $l926:;
                            $tmp832 = 5;
                            goto $l830;
                            $l927:;
                            $tmp813 = 7;
                            goto $l811;
                            $l928:;
                            return $returnValue819;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp932 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp933, 43);
                        panda$collections$ImmutableArray* $tmp935 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters847);
                        $tmp934 = $tmp935;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp932, $tmp933, ((org$pandalanguage$pandac$parser$Token) start814.value).position, $tmp934, body921);
                        $tmp931 = $tmp932;
                        $tmp930 = $tmp931;
                        $returnValue819 = $tmp930;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp930));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp931));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp934));
                        $tmp846 = 6;
                        goto $l844;
                        $l936:;
                        $tmp832 = 6;
                        goto $l830;
                        $l937:;
                        $tmp813 = 8;
                        goto $l811;
                        $l938:;
                        return $returnValue819;
                    }
                    $l844:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body921));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) firstType851));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters847));
                    parameters847 = NULL;
                    firstType851 = NULL;
                    body921 = NULL;
                    switch ($tmp846) {
                        case 5: goto $l926;
                        case 2: goto $l893;
                        case 3: goto $l908;
                        case 0: goto $l856;
                        case 1: goto $l883;
                        case 6: goto $l936;
                        case 4: goto $l917;
                    }
                    $l940:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp942, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp941, $tmp942);
                org$pandalanguage$pandac$parser$Token$nullable $tmp943 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp941);
                if (((panda$core$Bit) { $tmp943.nonnull }).value) {
                {
                    int $tmp946;
                    {
                        panda$collections$Array* $tmp950 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp950);
                        $tmp949 = $tmp950;
                        $tmp948 = $tmp949;
                        parameters947 = $tmp948;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp948));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp949));
                        panda$collections$Array$add$panda$collections$Array$T(parameters947, ((panda$core$Object*) expr823));
                        panda$core$Bit$init$builtin_bit(&$tmp952, true);
                        validLambda951 = $tmp952;
                        $l953:;
                        {
                            int $tmp957;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp961 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp960 = $tmp961;
                                $tmp959 = $tmp960;
                                nextExpr958 = $tmp959;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp959));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp960));
                                if (((panda$core$Bit) { nextExpr958 == NULL }).value) {
                                {
                                    $tmp962 = NULL;
                                    $returnValue819 = $tmp962;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp962));
                                    $tmp957 = 0;
                                    goto $l955;
                                    $l963:;
                                    $tmp946 = 0;
                                    goto $l944;
                                    $l964:;
                                    $tmp832 = 7;
                                    goto $l830;
                                    $l965:;
                                    $tmp813 = 9;
                                    goto $l811;
                                    $l966:;
                                    return $returnValue819;
                                }
                                }
                                bool $tmp968 = validLambda951.value;
                                if (!$tmp968) goto $l969;
                                $tmp970 = nextExpr958;
                                panda$core$Bit $tmp974;
                                if (((panda$core$Bit) { $tmp970 != NULL }).value) goto $l971; else goto $l972;
                                $l971:;
                                panda$core$Int64$init$builtin_int64(&$tmp975, 20);
                                panda$core$Bit $tmp976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp970->$rawValue, $tmp975);
                                $tmp974 = $tmp976;
                                goto $l973;
                                $l972:;
                                panda$core$Bit$init$builtin_bit(&$tmp977, false);
                                $tmp974 = $tmp977;
                                goto $l973;
                                $l973:;
                                $tmp968 = $tmp974.value;
                                $l969:;
                                panda$core$Bit $tmp978 = { $tmp968 };
                                validLambda951 = $tmp978;
                                panda$collections$Array$add$panda$collections$Array$T(parameters947, ((panda$core$Object*) nextExpr958));
                            }
                            $tmp957 = -1;
                            goto $l955;
                            $l955:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr958));
                            nextExpr958 = NULL;
                            switch ($tmp957) {
                                case 0: goto $l963;
                                case -1: goto $l979;
                            }
                            $l979:;
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp982, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp981, $tmp982);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp983 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp981);
                        bool $tmp980 = ((panda$core$Bit) { $tmp983.nonnull }).value;
                        if ($tmp980) goto $l953;
                        $l954:;
                        panda$core$Int64$init$builtin_int64(&$tmp985, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp984, $tmp985);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp987 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp984, &$s986);
                        if (((panda$core$Bit) { !$tmp987.nonnull }).value) {
                        {
                            $tmp988 = NULL;
                            $returnValue819 = $tmp988;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp988));
                            $tmp946 = 1;
                            goto $l944;
                            $l989:;
                            $tmp832 = 8;
                            goto $l830;
                            $l990:;
                            $tmp813 = 10;
                            goto $l811;
                            $l991:;
                            return $returnValue819;
                        }
                        }
                        bool $tmp993 = validLambda951.value;
                        if (!$tmp993) goto $l994;
                        panda$core$Int64$init$builtin_int64(&$tmp996, 90);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp995, $tmp996);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp997 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp995);
                        $tmp993 = ((panda$core$Bit) { $tmp997.nonnull }).value;
                        $l994:;
                        panda$core$Bit $tmp998 = { $tmp993 };
                        if ($tmp998.value) {
                        {
                            int $tmp1001;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1005 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1004 = $tmp1005;
                                $tmp1003 = $tmp1004;
                                body1002 = $tmp1003;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1003));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1004));
                                if (((panda$core$Bit) { body1002 == NULL }).value) {
                                {
                                    $tmp1006 = NULL;
                                    $returnValue819 = $tmp1006;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1006));
                                    $tmp1001 = 0;
                                    goto $l999;
                                    $l1007:;
                                    $tmp946 = 2;
                                    goto $l944;
                                    $l1008:;
                                    $tmp832 = 9;
                                    goto $l830;
                                    $l1009:;
                                    $tmp813 = 11;
                                    goto $l811;
                                    $l1010:;
                                    return $returnValue819;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1014 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1015, 45);
                                panda$collections$ImmutableArray* $tmp1017 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters947);
                                $tmp1016 = $tmp1017;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1014, $tmp1015, ((org$pandalanguage$pandac$parser$Token) start814.value).position, $tmp1016, body1002);
                                $tmp1013 = $tmp1014;
                                $tmp1012 = $tmp1013;
                                $returnValue819 = $tmp1012;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1012));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1013));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1016));
                                $tmp1001 = 1;
                                goto $l999;
                                $l1018:;
                                $tmp946 = 3;
                                goto $l944;
                                $l1019:;
                                $tmp832 = 10;
                                goto $l830;
                                $l1020:;
                                $tmp813 = 12;
                                goto $l811;
                                $l1021:;
                                return $returnValue819;
                            }
                            $l999:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1002));
                            body1002 = NULL;
                            switch ($tmp1001) {
                                case 1: goto $l1018;
                                case 0: goto $l1007;
                            }
                            $l1023:;
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start814.value), &$s1024);
                        $tmp1025 = NULL;
                        $returnValue819 = $tmp1025;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1025));
                        $tmp946 = 4;
                        goto $l944;
                        $l1026:;
                        $tmp832 = 11;
                        goto $l830;
                        $l1027:;
                        $tmp813 = 13;
                        goto $l811;
                        $l1028:;
                        return $returnValue819;
                    }
                    $l944:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters947));
                    parameters947 = NULL;
                    switch ($tmp946) {
                        case 4: goto $l1026;
                        case 1: goto $l989;
                        case 3: goto $l1019;
                        case 2: goto $l1008;
                        case 0: goto $l964;
                    }
                    $l1030:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1032, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1031, $tmp1032);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1034 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1031, &$s1033);
                if (((panda$core$Bit) { !$tmp1034.nonnull }).value) {
                {
                    $tmp1035 = NULL;
                    $returnValue819 = $tmp1035;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1035));
                    $tmp832 = 12;
                    goto $l830;
                    $l1036:;
                    $tmp813 = 14;
                    goto $l811;
                    $l1037:;
                    return $returnValue819;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1040, 90);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1039, $tmp1040);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1041 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1039);
                if (((panda$core$Bit) { $tmp1041.nonnull }).value) {
                {
                    int $tmp1044;
                    {
                        panda$collections$Array* $tmp1048 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1048);
                        $tmp1047 = $tmp1048;
                        $tmp1046 = $tmp1047;
                        parameters1045 = $tmp1046;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1046));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1047));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1045, ((panda$core$Object*) expr823));
                        org$pandalanguage$pandac$ASTNode* $tmp1052 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1051 = $tmp1052;
                        $tmp1050 = $tmp1051;
                        body1049 = $tmp1050;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1050));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1051));
                        if (((panda$core$Bit) { body1049 == NULL }).value) {
                        {
                            $tmp1053 = NULL;
                            $returnValue819 = $tmp1053;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1053));
                            $tmp1044 = 0;
                            goto $l1042;
                            $l1054:;
                            $tmp832 = 13;
                            goto $l830;
                            $l1055:;
                            $tmp813 = 15;
                            goto $l811;
                            $l1056:;
                            return $returnValue819;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1060 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1061, 45);
                        panda$collections$ImmutableArray* $tmp1063 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1045);
                        $tmp1062 = $tmp1063;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1060, $tmp1061, ((org$pandalanguage$pandac$parser$Token) start814.value).position, $tmp1062, body1049);
                        $tmp1059 = $tmp1060;
                        $tmp1058 = $tmp1059;
                        $returnValue819 = $tmp1058;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1058));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1059));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1062));
                        $tmp1044 = 1;
                        goto $l1042;
                        $l1064:;
                        $tmp832 = 14;
                        goto $l830;
                        $l1065:;
                        $tmp813 = 16;
                        goto $l811;
                        $l1066:;
                        return $returnValue819;
                    }
                    $l1042:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1049));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1045));
                    parameters1045 = NULL;
                    body1049 = NULL;
                    switch ($tmp1044) {
                        case 0: goto $l1054;
                        case 1: goto $l1064;
                    }
                    $l1068:;
                }
                }
                $tmp1069 = expr823;
                $returnValue819 = $tmp1069;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1069));
                $tmp832 = 15;
                goto $l830;
                $l1070:;
                $tmp813 = 17;
                goto $l811;
                $l1071:;
                return $returnValue819;
            }
            }
            else {
            {
                int $tmp1075;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1077, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1076, $tmp1077);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1078 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1076);
                    if (((panda$core$Bit) { !$tmp1078.nonnull }).value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1080, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1079, $tmp1080);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1079, &$s1081);
                        $tmp1082 = expr823;
                        $returnValue819 = $tmp1082;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1082));
                        $tmp1075 = 0;
                        goto $l1073;
                        $l1083:;
                        $tmp832 = 16;
                        goto $l830;
                        $l1084:;
                        $tmp813 = 18;
                        goto $l811;
                        $l1085:;
                        return $returnValue819;
                    }
                    }
                    panda$collections$Array* $tmp1090 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1090);
                    $tmp1089 = $tmp1090;
                    $tmp1088 = $tmp1089;
                    arguments1087 = $tmp1088;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1088));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1089));
                    panda$collections$Array$add$panda$collections$Array$T(arguments1087, ((panda$core$Object*) expr823));
                    $l1091:;
                    {
                        int $tmp1095;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1099 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1098 = $tmp1099;
                            $tmp1097 = $tmp1098;
                            nextExpr1096 = $tmp1097;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1097));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1098));
                            if (((panda$core$Bit) { nextExpr1096 == NULL }).value) {
                            {
                                $tmp1100 = NULL;
                                $returnValue819 = $tmp1100;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1100));
                                $tmp1095 = 0;
                                goto $l1093;
                                $l1101:;
                                $tmp1075 = 1;
                                goto $l1073;
                                $l1102:;
                                $tmp832 = 17;
                                goto $l830;
                                $l1103:;
                                $tmp813 = 19;
                                goto $l811;
                                $l1104:;
                                return $returnValue819;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(arguments1087, ((panda$core$Object*) nextExpr1096));
                        }
                        $tmp1095 = -1;
                        goto $l1093;
                        $l1093:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr1096));
                        nextExpr1096 = NULL;
                        switch ($tmp1095) {
                            case -1: goto $l1106;
                            case 0: goto $l1101;
                        }
                        $l1106:;
                    }
                    panda$core$Int64$init$builtin_int64(&$tmp1109, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1108, $tmp1109);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1110 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1108);
                    bool $tmp1107 = ((panda$core$Bit) { $tmp1110.nonnull }).value;
                    if ($tmp1107) goto $l1091;
                    $l1092:;
                    panda$core$Int64$init$builtin_int64(&$tmp1112, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1111, $tmp1112);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1111, &$s1113);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start814.value), &$s1114);
                    $tmp1115 = NULL;
                    $returnValue819 = $tmp1115;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1115));
                    $tmp1075 = 2;
                    goto $l1073;
                    $l1116:;
                    $tmp832 = 18;
                    goto $l830;
                    $l1117:;
                    $tmp813 = 20;
                    goto $l811;
                    $l1118:;
                    return $returnValue819;
                }
                $l1073:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arguments1087));
                arguments1087 = NULL;
                switch ($tmp1075) {
                    case 1: goto $l1102;
                    case 2: goto $l1116;
                    case 0: goto $l1083;
                }
                $l1120:;
            }
            }
        }
        $tmp832 = -1;
        goto $l830;
        $l830:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp834));
        switch ($tmp832) {
            case 2: goto $l894;
            case 18: goto $l1117;
            case 12: goto $l1036;
            case 3: goto $l909;
            case 6: goto $l937;
            case 8: goto $l990;
            case -1: goto $l1121;
            case 5: goto $l927;
            case 4: goto $l918;
            case 11: goto $l1027;
            case 9: goto $l1009;
            case 15: goto $l1070;
            case 10: goto $l1020;
            case 14: goto $l1065;
            case 7: goto $l965;
            case 17: goto $l1103;
            case 1: goto $l884;
            case 13: goto $l1055;
            case 16: goto $l1084;
            case 0: goto $l857;
        }
        $l1121:;
    }
    $tmp813 = -1;
    goto $l811;
    $l811:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr823));
    expr823 = NULL;
    switch ($tmp813) {
        case 20: goto $l1118;
        case 12: goto $l1021;
        case 4: goto $l895;
        case 5: goto $l910;
        case 17: goto $l1071;
        case 7: goto $l928;
        case 8: goto $l938;
        case 13: goto $l1028;
        case -1: goto $l1122;
        case 6: goto $l919;
        case 11: goto $l1010;
        case 14: goto $l1037;
        case 16: goto $l1066;
        case 19: goto $l1104;
        case 9: goto $l966;
        case 1: goto $l828;
        case 18: goto $l1085;
        case 3: goto $l885;
        case 2: goto $l858;
        case 0: goto $l821;
        case 15: goto $l1056;
        case 10: goto $l991;
    }
    $l1122:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1126;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1127;
    panda$core$Int64 $tmp1128;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1131;
    panda$core$Int64 $tmp1132;
    org$pandalanguage$pandac$ASTNode* t1137 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1138;
    org$pandalanguage$pandac$ASTNode* $tmp1139;
    org$pandalanguage$pandac$ASTNode* $returnValue1141;
    org$pandalanguage$pandac$ASTNode* $tmp1142;
    panda$collections$Array* parameters1146 = NULL;
    panda$collections$Array* $tmp1147;
    panda$collections$Array* $tmp1148;
    org$pandalanguage$pandac$ASTNode* $tmp1150;
    panda$core$Int64 $tmp1152;
    panda$core$String* $tmp1153;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1155;
    panda$core$Int64 $tmp1156;
    org$pandalanguage$pandac$ASTNode* $tmp1159;
    org$pandalanguage$pandac$ASTNode* expr1163 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1164;
    org$pandalanguage$pandac$ASTNode* $tmp1165;
    org$pandalanguage$pandac$ASTNode* $tmp1167;
    org$pandalanguage$pandac$ASTNode* $tmp1171;
    org$pandalanguage$pandac$ASTNode* $tmp1172;
    panda$core$Int64 $tmp1174;
    panda$collections$ImmutableArray* $tmp1175;
    panda$collections$Array* parameters1181 = NULL;
    panda$collections$Array* $tmp1182;
    panda$collections$Array* $tmp1183;
    org$pandalanguage$pandac$ASTNode* $tmp1185;
    panda$core$Int64 $tmp1187;
    panda$core$String* $tmp1188;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1190;
    panda$core$Int64 $tmp1191;
    org$pandalanguage$pandac$ASTNode* $tmp1194;
    org$pandalanguage$pandac$ASTNode* expr1197 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1198;
    org$pandalanguage$pandac$ASTNode* $tmp1199;
    org$pandalanguage$pandac$ASTNode* $tmp1201;
    org$pandalanguage$pandac$ASTNode* $tmp1204;
    org$pandalanguage$pandac$ASTNode* $tmp1205;
    panda$core$Int64 $tmp1207;
    panda$collections$ImmutableArray* $tmp1208;
    int $tmp1125;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1128, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1127, $tmp1128);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1130 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1127, &$s1129);
        start1126 = $tmp1130;
        panda$core$Int64$init$builtin_int64(&$tmp1132, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1131, $tmp1132);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1133 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1131);
        if (((panda$core$Bit) { $tmp1133.nonnull }).value) {
        {
            int $tmp1136;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1140 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1139 = $tmp1140;
                $tmp1138 = $tmp1139;
                t1137 = $tmp1138;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1138));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1139));
                if (((panda$core$Bit) { t1137 == NULL }).value) {
                {
                    $tmp1142 = NULL;
                    $returnValue1141 = $tmp1142;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1142));
                    $tmp1136 = 0;
                    goto $l1134;
                    $l1143:;
                    $tmp1125 = 0;
                    goto $l1123;
                    $l1144:;
                    return $returnValue1141;
                }
                }
                panda$collections$Array* $tmp1149 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1149);
                $tmp1148 = $tmp1149;
                $tmp1147 = $tmp1148;
                parameters1146 = $tmp1147;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1147));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1148));
                org$pandalanguage$pandac$ASTNode* $tmp1151 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1152, 31);
                panda$core$String* $tmp1154 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1126.value));
                $tmp1153 = $tmp1154;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1151, $tmp1152, ((org$pandalanguage$pandac$parser$Token) start1126.value).position, $tmp1153, t1137);
                $tmp1150 = $tmp1151;
                panda$collections$Array$add$panda$collections$Array$T(parameters1146, ((panda$core$Object*) $tmp1150));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1150));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1153));
                panda$core$Int64$init$builtin_int64(&$tmp1156, 90);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1155, $tmp1156);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1158 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1155, &$s1157);
                if (((panda$core$Bit) { !$tmp1158.nonnull }).value) {
                {
                    $tmp1159 = NULL;
                    $returnValue1141 = $tmp1159;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1159));
                    $tmp1136 = 1;
                    goto $l1134;
                    $l1160:;
                    $tmp1125 = 1;
                    goto $l1123;
                    $l1161:;
                    return $returnValue1141;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1166 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1165 = $tmp1166;
                $tmp1164 = $tmp1165;
                expr1163 = $tmp1164;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1164));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1165));
                if (((panda$core$Bit) { expr1163 == NULL }).value) {
                {
                    $tmp1167 = NULL;
                    $returnValue1141 = $tmp1167;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1167));
                    $tmp1136 = 2;
                    goto $l1134;
                    $l1168:;
                    $tmp1125 = 2;
                    goto $l1123;
                    $l1169:;
                    return $returnValue1141;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1173 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1174, 43);
                panda$collections$ImmutableArray* $tmp1176 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1146);
                $tmp1175 = $tmp1176;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1173, $tmp1174, ((org$pandalanguage$pandac$parser$Token) start1126.value).position, $tmp1175, expr1163);
                $tmp1172 = $tmp1173;
                $tmp1171 = $tmp1172;
                $returnValue1141 = $tmp1171;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1171));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1175));
                $tmp1136 = 3;
                goto $l1134;
                $l1177:;
                $tmp1125 = 3;
                goto $l1123;
                $l1178:;
                return $returnValue1141;
            }
            $l1134:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1146));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1137));
            t1137 = NULL;
            parameters1146 = NULL;
            expr1163 = NULL;
            switch ($tmp1136) {
                case 2: goto $l1168;
                case 0: goto $l1143;
                case 3: goto $l1177;
                case 1: goto $l1160;
            }
            $l1180:;
        }
        }
        panda$collections$Array* $tmp1184 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1184);
        $tmp1183 = $tmp1184;
        $tmp1182 = $tmp1183;
        parameters1181 = $tmp1182;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1183));
        org$pandalanguage$pandac$ASTNode* $tmp1186 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1187, 20);
        panda$core$String* $tmp1189 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1126.value));
        $tmp1188 = $tmp1189;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1186, $tmp1187, ((org$pandalanguage$pandac$parser$Token) start1126.value).position, $tmp1188);
        $tmp1185 = $tmp1186;
        panda$collections$Array$add$panda$collections$Array$T(parameters1181, ((panda$core$Object*) $tmp1185));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1185));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1188));
        panda$core$Int64$init$builtin_int64(&$tmp1191, 90);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1190, $tmp1191);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1193 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1190, &$s1192);
        if (((panda$core$Bit) { !$tmp1193.nonnull }).value) {
        {
            $tmp1194 = NULL;
            $returnValue1141 = $tmp1194;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1194));
            $tmp1125 = 4;
            goto $l1123;
            $l1195:;
            return $returnValue1141;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1200 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1199 = $tmp1200;
        $tmp1198 = $tmp1199;
        expr1197 = $tmp1198;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1198));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1199));
        if (((panda$core$Bit) { expr1197 == NULL }).value) {
        {
            $tmp1201 = NULL;
            $returnValue1141 = $tmp1201;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1201));
            $tmp1125 = 5;
            goto $l1123;
            $l1202:;
            return $returnValue1141;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1206 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1207, 45);
        panda$collections$ImmutableArray* $tmp1209 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1181);
        $tmp1208 = $tmp1209;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1206, $tmp1207, ((org$pandalanguage$pandac$parser$Token) start1126.value).position, $tmp1208, expr1197);
        $tmp1205 = $tmp1206;
        $tmp1204 = $tmp1205;
        $returnValue1141 = $tmp1204;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1204));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1205));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1208));
        $tmp1125 = 6;
        goto $l1123;
        $l1210:;
        return $returnValue1141;
    }
    $l1123:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1197));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1181));
    parameters1181 = NULL;
    expr1197 = NULL;
    switch ($tmp1125) {
        case 4: goto $l1195;
        case 3: goto $l1178;
        case 6: goto $l1210;
        case 1: goto $l1161;
        case 5: goto $l1202;
        case 2: goto $l1169;
        case 0: goto $l1144;
    }
    $l1212:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1216;
    panda$core$Int64 $tmp1217;
    org$pandalanguage$pandac$ASTNode* $returnValue1220;
    org$pandalanguage$pandac$ASTNode* $tmp1221;
    org$pandalanguage$pandac$ASTNode* regex1224 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1225;
    org$pandalanguage$pandac$ASTNode* $tmp1226;
    org$pandalanguage$pandac$ASTNode* $tmp1228;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1231;
    panda$core$Int64 $tmp1232;
    org$pandalanguage$pandac$ASTNode* $tmp1234;
    int $tmp1215;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1217, 54);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1216, $tmp1217);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1219 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1216, &$s1218);
        if (((panda$core$Bit) { !$tmp1219.nonnull }).value) {
        {
            $tmp1221 = NULL;
            $returnValue1220 = $tmp1221;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1221));
            $tmp1215 = 0;
            goto $l1213;
            $l1222:;
            return $returnValue1220;
        }
        }
        self->regexParser->lexer->dfa->offset = self->lexer->dfa->offset;
        self->regexParser->lexer->dfa->line = self->lexer->dfa->line;
        self->regexParser->lexer->dfa->column = self->lexer->dfa->column;
        org$pandalanguage$pandac$ASTNode* $tmp1227 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self->regexParser);
        $tmp1226 = $tmp1227;
        $tmp1225 = $tmp1226;
        regex1224 = $tmp1225;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1225));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1226));
        self->lexer->dfa->offset = self->regexParser->lexer->dfa->offset;
        self->lexer->dfa->line = self->regexParser->lexer->dfa->line;
        self->lexer->dfa->column = self->regexParser->lexer->dfa->column;
        if (((panda$core$Bit) { regex1224 == NULL }).value) {
        {
            $tmp1228 = NULL;
            $returnValue1220 = $tmp1228;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1228));
            $tmp1215 = 1;
            goto $l1213;
            $l1229:;
            return $returnValue1220;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1232, 54);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1231, $tmp1232);
        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1231, &$s1233);
        $tmp1234 = regex1224;
        $returnValue1220 = $tmp1234;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1234));
        $tmp1215 = 2;
        goto $l1213;
        $l1235:;
        return $returnValue1220;
    }
    $l1213:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) regex1224));
    regex1224 = NULL;
    switch ($tmp1215) {
        case 1: goto $l1229;
        case 2: goto $l1235;
        case 0: goto $l1222;
    }
    $l1237:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t1238;
    org$pandalanguage$pandac$parser$Token$Kind $match$545_91240;
    panda$core$Int64 $tmp1241;
    org$pandalanguage$pandac$parser$Token$Kind check1243;
    panda$core$Int64 $tmp1248;
    panda$core$Int64 $tmp1252;
    org$pandalanguage$pandac$ASTNode* $returnValue1255;
    org$pandalanguage$pandac$ASTNode* $tmp1256;
    org$pandalanguage$pandac$ASTNode* $tmp1257;
    org$pandalanguage$pandac$ASTNode* $tmp1260;
    org$pandalanguage$pandac$ASTNode* $tmp1261;
    panda$core$Int64 $tmp1263;
    panda$core$String* $tmp1264;
    panda$core$Int64 $tmp1267;
    org$pandalanguage$pandac$ASTNode* $tmp1269;
    org$pandalanguage$pandac$ASTNode* $tmp1270;
    panda$core$Int64 $tmp1272;
    panda$core$String* $tmp1273;
    panda$core$Int64 $tmp1277;
    org$pandalanguage$pandac$ASTNode* $tmp1279;
    org$pandalanguage$pandac$ASTNode* $tmp1280;
    panda$core$Int64 $tmp1282;
    panda$core$String* $tmp1283;
    panda$core$String* $tmp1284;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1286;
    panda$core$Int64 $tmp1287;
    panda$core$Bit $tmp1288;
    panda$core$Int64 $tmp1290;
    panda$core$Int64 $tmp1293;
    org$pandalanguage$pandac$ASTNode* $tmp1295;
    org$pandalanguage$pandac$ASTNode* $tmp1296;
    panda$core$Int64 $tmp1298;
    panda$core$String* $tmp1299;
    panda$core$String* $tmp1300;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1302;
    panda$core$Int64 $tmp1303;
    panda$core$Bit $tmp1304;
    panda$core$Int64 $tmp1306;
    panda$core$Int64 $tmp1309;
    org$pandalanguage$pandac$ASTNode* $tmp1311;
    org$pandalanguage$pandac$ASTNode* $tmp1312;
    panda$core$Int64 $tmp1314;
    panda$core$String* $tmp1315;
    panda$core$Int64 $tmp1319;
    org$pandalanguage$pandac$ASTNode* $tmp1321;
    org$pandalanguage$pandac$ASTNode* $tmp1322;
    panda$core$Int64 $tmp1324;
    panda$core$Int64 $tmp1326;
    org$pandalanguage$pandac$ASTNode* $tmp1328;
    org$pandalanguage$pandac$ASTNode* $tmp1329;
    panda$core$Int64 $tmp1331;
    panda$core$Int64 $tmp1333;
    org$pandalanguage$pandac$ASTNode* $tmp1335;
    org$pandalanguage$pandac$ASTNode* $tmp1336;
    panda$core$Int64 $tmp1338;
    panda$core$Int64 $tmp1340;
    org$pandalanguage$pandac$ASTNode* $tmp1342;
    org$pandalanguage$pandac$ASTNode* $tmp1343;
    panda$core$Int64 $tmp1345;
    panda$core$Bit $tmp1346;
    panda$core$Int64 $tmp1348;
    org$pandalanguage$pandac$ASTNode* $tmp1350;
    org$pandalanguage$pandac$ASTNode* $tmp1351;
    panda$core$Int64 $tmp1353;
    panda$core$Bit $tmp1354;
    panda$core$Int64 $tmp1357;
    panda$core$Int64 $tmp1360;
    org$pandalanguage$pandac$ASTNode* $tmp1363;
    org$pandalanguage$pandac$ASTNode* $tmp1364;
    panda$core$Int64 $tmp1367;
    org$pandalanguage$pandac$ASTNode* $tmp1369;
    org$pandalanguage$pandac$ASTNode* $tmp1370;
    panda$core$Int64 $tmp1373;
    panda$core$String* name1378 = NULL;
    panda$core$String* $tmp1379;
    panda$core$String* $tmp1380;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1387;
    panda$core$Int64 $tmp1388;
    org$pandalanguage$pandac$ASTNode* expr1390 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1391;
    org$pandalanguage$pandac$ASTNode* $tmp1392;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1394;
    panda$core$Int64 $tmp1395;
    org$pandalanguage$pandac$ASTNode* $tmp1397;
    org$pandalanguage$pandac$ASTNode* $tmp1398;
    panda$core$Int64 $tmp1400;
    org$pandalanguage$pandac$ASTNode* $tmp1407;
    org$pandalanguage$pandac$ASTNode* $tmp1408;
    panda$core$Int64 $tmp1410;
    panda$core$String* $tmp1413;
    panda$core$String* $tmp1414;
    org$pandalanguage$pandac$ASTNode* $tmp1419;
    panda$core$Int64 $tmp1424;
    panda$core$Int64 $tmp1427;
    org$pandalanguage$pandac$ASTNode* $tmp1430;
    org$pandalanguage$pandac$ASTNode* $tmp1431;
    panda$core$Int64 $tmp1434;
    org$pandalanguage$pandac$ASTNode* $tmp1436;
    org$pandalanguage$pandac$ASTNode* $tmp1437;
    panda$core$String* $tmp1440;
    panda$core$String* $tmp1441;
    panda$core$String* $tmp1443;
    org$pandalanguage$pandac$ASTNode* $tmp1448;
    org$pandalanguage$pandac$parser$Token $tmp1239 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t1238 = $tmp1239;
    {
        $match$545_91240 = t1238.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1241, 48);
        panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1241);
        if ($tmp1242.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1244 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            check1243 = $tmp1244.kind;
            bool $tmp1246 = self->allowLambdas.value;
            if (!$tmp1246) goto $l1247;
            panda$core$Int64$init$builtin_int64(&$tmp1248, 95);
            panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1243.$rawValue, $tmp1248);
            $tmp1246 = $tmp1249.value;
            $l1247:;
            panda$core$Bit $tmp1250 = { $tmp1246 };
            bool $tmp1245 = $tmp1250.value;
            if ($tmp1245) goto $l1251;
            panda$core$Int64$init$builtin_int64(&$tmp1252, 90);
            panda$core$Bit $tmp1253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1243.$rawValue, $tmp1252);
            $tmp1245 = $tmp1253.value;
            $l1251:;
            panda$core$Bit $tmp1254 = { $tmp1245 };
            if ($tmp1254.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1238);
                org$pandalanguage$pandac$ASTNode* $tmp1258 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1257 = $tmp1258;
                $tmp1256 = $tmp1257;
                $returnValue1255 = $tmp1256;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1256));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1257));
                return $returnValue1255;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1262 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1263, 20);
            panda$core$String* $tmp1265 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1238);
            $tmp1264 = $tmp1265;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1262, $tmp1263, t1238.position, $tmp1264);
            $tmp1261 = $tmp1262;
            $tmp1260 = $tmp1261;
            $returnValue1255 = $tmp1260;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1260));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1261));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1264));
            return $returnValue1255;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1267, 2);
        panda$core$Bit $tmp1268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1267);
        if ($tmp1268.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1271 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1272, 22);
            panda$core$String* $tmp1274 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1238);
            $tmp1273 = $tmp1274;
            panda$core$UInt64$nullable $tmp1275 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1273);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1271, $tmp1272, t1238.position, ((panda$core$UInt64) $tmp1275.value));
            $tmp1270 = $tmp1271;
            $tmp1269 = $tmp1270;
            $returnValue1255 = $tmp1269;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1269));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1270));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1273));
            return $returnValue1255;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1277, 3);
        panda$core$Bit $tmp1278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1277);
        if ($tmp1278.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1281 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1282, 22);
            panda$core$String* $tmp1285 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1238);
            $tmp1284 = $tmp1285;
            panda$core$Int64$init$builtin_int64(&$tmp1287, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1288, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1286, ((panda$core$Int64$nullable) { $tmp1287, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1288);
            panda$core$String* $tmp1289 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1284, $tmp1286);
            $tmp1283 = $tmp1289;
            panda$core$Int64$init$builtin_int64(&$tmp1290, 2);
            panda$core$UInt64$nullable $tmp1291 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1283, $tmp1290);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1281, $tmp1282, t1238.position, ((panda$core$UInt64) $tmp1291.value));
            $tmp1280 = $tmp1281;
            $tmp1279 = $tmp1280;
            $returnValue1255 = $tmp1279;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1280));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1283));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1284));
            return $returnValue1255;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1293, 4);
        panda$core$Bit $tmp1294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1293);
        if ($tmp1294.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1297 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1298, 22);
            panda$core$String* $tmp1301 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1238);
            $tmp1300 = $tmp1301;
            panda$core$Int64$init$builtin_int64(&$tmp1303, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1304, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1302, ((panda$core$Int64$nullable) { $tmp1303, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1304);
            panda$core$String* $tmp1305 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1300, $tmp1302);
            $tmp1299 = $tmp1305;
            panda$core$Int64$init$builtin_int64(&$tmp1306, 16);
            panda$core$UInt64$nullable $tmp1307 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1299, $tmp1306);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1297, $tmp1298, t1238.position, ((panda$core$UInt64) $tmp1307.value));
            $tmp1296 = $tmp1297;
            $tmp1295 = $tmp1296;
            $returnValue1255 = $tmp1295;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1295));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1296));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1299));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
            return $returnValue1255;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1309, 5);
        panda$core$Bit $tmp1310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1309);
        if ($tmp1310.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1313 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1314, 34);
            panda$core$String* $tmp1316 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1238);
            $tmp1315 = $tmp1316;
            panda$core$Real64$nullable $tmp1317 = panda$core$String$convert$R$panda$core$Real64$Q($tmp1315);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1313, $tmp1314, t1238.position, ((panda$core$Real64) $tmp1317.value));
            $tmp1312 = $tmp1313;
            $tmp1311 = $tmp1312;
            $returnValue1255 = $tmp1311;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1315));
            return $returnValue1255;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1319, 46);
        panda$core$Bit $tmp1320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1319);
        if ($tmp1320.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1323 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1324, 37);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1323, $tmp1324, t1238.position);
            $tmp1322 = $tmp1323;
            $tmp1321 = $tmp1322;
            $returnValue1255 = $tmp1321;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1321));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1322));
            return $returnValue1255;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1326, 47);
        panda$core$Bit $tmp1327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1326);
        if ($tmp1327.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1330 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1331, 39);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1330, $tmp1331, t1238.position);
            $tmp1329 = $tmp1330;
            $tmp1328 = $tmp1329;
            $returnValue1255 = $tmp1328;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
            return $returnValue1255;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1333, 43);
        panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1333);
        if ($tmp1334.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1337 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1338, 28);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1337, $tmp1338, t1238.position);
            $tmp1336 = $tmp1337;
            $tmp1335 = $tmp1336;
            $returnValue1255 = $tmp1335;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1335));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1336));
            return $returnValue1255;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1340, 41);
        panda$core$Bit $tmp1341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1340);
        if ($tmp1341.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1344 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1345, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1346, true);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1344, $tmp1345, t1238.position, $tmp1346);
            $tmp1343 = $tmp1344;
            $tmp1342 = $tmp1343;
            $returnValue1255 = $tmp1342;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
            return $returnValue1255;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1348, 42);
        panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1348);
        if ($tmp1349.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1352 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1353, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1354, false);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1352, $tmp1353, t1238.position, $tmp1354);
            $tmp1351 = $tmp1352;
            $tmp1350 = $tmp1351;
            $returnValue1255 = $tmp1350;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
            return $returnValue1255;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1357, 7);
        panda$core$Bit $tmp1358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1357);
        bool $tmp1356 = $tmp1358.value;
        if ($tmp1356) goto $l1359;
        panda$core$Int64$init$builtin_int64(&$tmp1360, 6);
        panda$core$Bit $tmp1361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1360);
        $tmp1356 = $tmp1361.value;
        $l1359:;
        panda$core$Bit $tmp1362 = { $tmp1356 };
        if ($tmp1362.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1238);
            org$pandalanguage$pandac$ASTNode* $tmp1365 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1364 = $tmp1365;
            $tmp1363 = $tmp1364;
            $returnValue1255 = $tmp1363;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1363));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1364));
            return $returnValue1255;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1367, 103);
        panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1367);
        if ($tmp1368.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1238);
            org$pandalanguage$pandac$ASTNode* $tmp1371 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1370 = $tmp1371;
            $tmp1369 = $tmp1370;
            $returnValue1255 = $tmp1369;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1369));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
            return $returnValue1255;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1373, 13);
        panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1373);
        if ($tmp1374.value) {
        {
            int $tmp1377;
            {
                panda$core$String* $tmp1381 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1238);
                $tmp1380 = $tmp1381;
                $tmp1379 = $tmp1380;
                name1378 = $tmp1379;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1379));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1380));
                panda$core$Bit $tmp1383 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1378, &$s1382);
                if ($tmp1383.value) {
                {
                    int $tmp1386;
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1388, 103);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1387, $tmp1388);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1387, &$s1389);
                        org$pandalanguage$pandac$ASTNode* $tmp1393 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1392 = $tmp1393;
                        $tmp1391 = $tmp1392;
                        expr1390 = $tmp1391;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1391));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1392));
                        panda$core$Int64$init$builtin_int64(&$tmp1395, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1394, $tmp1395);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1394, &$s1396);
                        org$pandalanguage$pandac$ASTNode* $tmp1399 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1400, 2);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1399, $tmp1400, t1238.position, expr1390);
                        $tmp1398 = $tmp1399;
                        $tmp1397 = $tmp1398;
                        $returnValue1255 = $tmp1397;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1397));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1398));
                        $tmp1386 = 0;
                        goto $l1384;
                        $l1401:;
                        $tmp1377 = 0;
                        goto $l1375;
                        $l1402:;
                        return $returnValue1255;
                    }
                    $l1384:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1390));
                    expr1390 = NULL;
                    switch ($tmp1386) {
                        case 0: goto $l1401;
                    }
                    $l1404:;
                }
                }
                else {
                panda$core$Bit $tmp1406 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1378, &$s1405);
                if ($tmp1406.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1409 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1410, 3);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1409, $tmp1410, t1238.position);
                    $tmp1408 = $tmp1409;
                    $tmp1407 = $tmp1408;
                    $returnValue1255 = $tmp1407;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1407));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1408));
                    $tmp1377 = 1;
                    goto $l1375;
                    $l1411:;
                    return $returnValue1255;
                }
                }
                }
                panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1415, name1378);
                $tmp1414 = $tmp1416;
                panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1414, &$s1417);
                $tmp1413 = $tmp1418;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1238, $tmp1413);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1414));
                $tmp1419 = NULL;
                $returnValue1255 = $tmp1419;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1419));
                $tmp1377 = 2;
                goto $l1375;
                $l1420:;
                return $returnValue1255;
            }
            $l1375:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1378));
            name1378 = NULL;
            switch ($tmp1377) {
                case 0: goto $l1402;
                case 2: goto $l1420;
                case 1: goto $l1411;
            }
            $l1422:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1424, 20);
        panda$core$Bit $tmp1425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1424);
        bool $tmp1423 = $tmp1425.value;
        if ($tmp1423) goto $l1426;
        panda$core$Int64$init$builtin_int64(&$tmp1427, 21);
        panda$core$Bit $tmp1428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1427);
        $tmp1423 = $tmp1428.value;
        $l1426:;
        panda$core$Bit $tmp1429 = { $tmp1423 };
        if ($tmp1429.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1238);
            org$pandalanguage$pandac$ASTNode* $tmp1432 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1431 = $tmp1432;
            $tmp1430 = $tmp1431;
            $returnValue1255 = $tmp1430;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1430));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1431));
            return $returnValue1255;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1434, 54);
        panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91240.$rawValue, $tmp1434);
        if ($tmp1435.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1238);
            org$pandalanguage$pandac$ASTNode* $tmp1438 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1437 = $tmp1438;
            $tmp1436 = $tmp1437;
            $returnValue1255 = $tmp1436;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1436));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1437));
            return $returnValue1255;
        }
        }
        else {
        {
            panda$core$String* $tmp1444 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1238);
            $tmp1443 = $tmp1444;
            panda$core$String* $tmp1445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1442, $tmp1443);
            $tmp1441 = $tmp1445;
            panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1441, &$s1446);
            $tmp1440 = $tmp1447;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1238, $tmp1440);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1440));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1441));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1443));
            $tmp1448 = NULL;
            $returnValue1255 = $tmp1448;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1448));
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
        }
        }
        }
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* $match$604_91453 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1454;
    panda$core$Int64 $tmp1455;
    panda$core$String* text1457 = NULL;
    panda$core$String* $returnValue1459;
    panda$core$String* $tmp1460;
    panda$core$Int64 $tmp1463;
    org$pandalanguage$pandac$ASTNode* base1465 = NULL;
    panda$core$String* field1467 = NULL;
    panda$core$String* result1472 = NULL;
    panda$core$String* $tmp1473;
    panda$core$String* $tmp1474;
    panda$core$String* $tmp1476;
    panda$core$String* $tmp1477;
    panda$core$String* $tmp1478;
    panda$core$String* $tmp1479;
    panda$core$String* $tmp1480;
    panda$core$String* $tmp1484;
    panda$core$String* $tmp1489;
    int $tmp1452;
    {
        $tmp1454 = p_expr;
        $match$604_91453 = $tmp1454;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1454));
        panda$core$Int64$init$builtin_int64(&$tmp1455, 20);
        panda$core$Bit $tmp1456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_91453->$rawValue, $tmp1455);
        if ($tmp1456.value) {
        {
            panda$core$String** $tmp1458 = ((panda$core$String**) ((char*) $match$604_91453->$data + 16));
            text1457 = *$tmp1458;
            $tmp1460 = text1457;
            $returnValue1459 = $tmp1460;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1460));
            $tmp1452 = 0;
            goto $l1450;
            $l1461:;
            return $returnValue1459;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1463, 15);
        panda$core$Bit $tmp1464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_91453->$rawValue, $tmp1463);
        if ($tmp1464.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1466 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$604_91453->$data + 16));
            base1465 = *$tmp1466;
            panda$core$String** $tmp1468 = ((panda$core$String**) ((char*) $match$604_91453->$data + 24));
            field1467 = *$tmp1468;
            int $tmp1471;
            {
                panda$core$String* $tmp1475 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base1465);
                $tmp1474 = $tmp1475;
                $tmp1473 = $tmp1474;
                result1472 = $tmp1473;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1473));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1474));
                if (((panda$core$Bit) { result1472 != NULL }).value) {
                {
                    {
                        $tmp1477 = result1472;
                        $tmp1476 = $tmp1477;
                        panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1481, field1467);
                        $tmp1480 = $tmp1482;
                        panda$core$String* $tmp1483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1472, $tmp1480);
                        $tmp1479 = $tmp1483;
                        $tmp1478 = $tmp1479;
                        result1472 = $tmp1478;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1478));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1479));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1480));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
                    }
                }
                }
                $tmp1484 = result1472;
                $returnValue1459 = $tmp1484;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1484));
                $tmp1471 = 0;
                goto $l1469;
                $l1485:;
                $tmp1452 = 1;
                goto $l1450;
                $l1486:;
                return $returnValue1459;
            }
            $l1469:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1472));
            result1472 = NULL;
            switch ($tmp1471) {
                case 0: goto $l1485;
            }
            $l1488:;
        }
        }
        else {
        {
            $tmp1489 = NULL;
            $returnValue1459 = $tmp1489;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1489));
            $tmp1452 = 2;
            goto $l1450;
            $l1490:;
            return $returnValue1459;
        }
        }
        }
    }
    $tmp1452 = -1;
    goto $l1450;
    $l1450:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1454));
    switch ($tmp1452) {
        case 2: goto $l1490;
        case -1: goto $l1492;
        case 1: goto $l1486;
        case 0: goto $l1461;
    }
    $l1492:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name1493;
    org$pandalanguage$pandac$parser$Token$Kind $match$624_91495;
    panda$core$Int64 $tmp1517;
    panda$core$Int64 $tmp1520;
    panda$core$Int64 $tmp1524;
    panda$core$Int64 $tmp1528;
    panda$core$Int64 $tmp1532;
    panda$core$Int64 $tmp1536;
    panda$core$Int64 $tmp1540;
    panda$core$Int64 $tmp1544;
    panda$core$Int64 $tmp1548;
    panda$core$Int64 $tmp1552;
    panda$core$Int64 $tmp1556;
    panda$core$Int64 $tmp1560;
    panda$core$Int64 $tmp1564;
    panda$core$Int64 $tmp1568;
    panda$core$Int64 $tmp1572;
    panda$core$Int64 $tmp1576;
    panda$core$Int64 $tmp1580;
    panda$core$Int64 $tmp1584;
    panda$core$Int64 $tmp1588;
    panda$core$Int64 $tmp1592;
    panda$core$Int64 $tmp1596;
    panda$core$Int64 $tmp1600;
    panda$core$String* $returnValue1603;
    panda$core$String* $tmp1604;
    panda$core$String* $tmp1605;
    panda$core$Int64 $tmp1608;
    org$pandalanguage$pandac$parser$Token token1610;
    panda$core$Int64 $tmp1612;
    panda$core$String* $tmp1614;
    panda$core$String* $tmp1617;
    panda$core$Int64 $tmp1620;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1622;
    panda$core$Int64 $tmp1623;
    panda$core$String* $tmp1626;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1628;
    panda$core$Int64 $tmp1629;
    panda$core$String* $tmp1631;
    panda$core$String* $tmp1634;
    panda$core$String* $tmp1637;
    panda$core$String* $tmp1638;
    panda$core$String* $tmp1640;
    panda$core$String* $tmp1645;
    org$pandalanguage$pandac$parser$Token $tmp1494 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name1493 = $tmp1494;
    {
        $match$624_91495 = name1493.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1517, 48);
        panda$core$Bit $tmp1518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1517);
        bool $tmp1516 = $tmp1518.value;
        if ($tmp1516) goto $l1519;
        panda$core$Int64$init$builtin_int64(&$tmp1520, 51);
        panda$core$Bit $tmp1521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1520);
        $tmp1516 = $tmp1521.value;
        $l1519:;
        panda$core$Bit $tmp1522 = { $tmp1516 };
        bool $tmp1515 = $tmp1522.value;
        if ($tmp1515) goto $l1523;
        panda$core$Int64$init$builtin_int64(&$tmp1524, 52);
        panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1524);
        $tmp1515 = $tmp1525.value;
        $l1523:;
        panda$core$Bit $tmp1526 = { $tmp1515 };
        bool $tmp1514 = $tmp1526.value;
        if ($tmp1514) goto $l1527;
        panda$core$Int64$init$builtin_int64(&$tmp1528, 53);
        panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1528);
        $tmp1514 = $tmp1529.value;
        $l1527:;
        panda$core$Bit $tmp1530 = { $tmp1514 };
        bool $tmp1513 = $tmp1530.value;
        if ($tmp1513) goto $l1531;
        panda$core$Int64$init$builtin_int64(&$tmp1532, 54);
        panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1532);
        $tmp1513 = $tmp1533.value;
        $l1531:;
        panda$core$Bit $tmp1534 = { $tmp1513 };
        bool $tmp1512 = $tmp1534.value;
        if ($tmp1512) goto $l1535;
        panda$core$Int64$init$builtin_int64(&$tmp1536, 55);
        panda$core$Bit $tmp1537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1536);
        $tmp1512 = $tmp1537.value;
        $l1535:;
        panda$core$Bit $tmp1538 = { $tmp1512 };
        bool $tmp1511 = $tmp1538.value;
        if ($tmp1511) goto $l1539;
        panda$core$Int64$init$builtin_int64(&$tmp1540, 57);
        panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1540);
        $tmp1511 = $tmp1541.value;
        $l1539:;
        panda$core$Bit $tmp1542 = { $tmp1511 };
        bool $tmp1510 = $tmp1542.value;
        if ($tmp1510) goto $l1543;
        panda$core$Int64$init$builtin_int64(&$tmp1544, 58);
        panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1544);
        $tmp1510 = $tmp1545.value;
        $l1543:;
        panda$core$Bit $tmp1546 = { $tmp1510 };
        bool $tmp1509 = $tmp1546.value;
        if ($tmp1509) goto $l1547;
        panda$core$Int64$init$builtin_int64(&$tmp1548, 59);
        panda$core$Bit $tmp1549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1548);
        $tmp1509 = $tmp1549.value;
        $l1547:;
        panda$core$Bit $tmp1550 = { $tmp1509 };
        bool $tmp1508 = $tmp1550.value;
        if ($tmp1508) goto $l1551;
        panda$core$Int64$init$builtin_int64(&$tmp1552, 62);
        panda$core$Bit $tmp1553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1552);
        $tmp1508 = $tmp1553.value;
        $l1551:;
        panda$core$Bit $tmp1554 = { $tmp1508 };
        bool $tmp1507 = $tmp1554.value;
        if ($tmp1507) goto $l1555;
        panda$core$Int64$init$builtin_int64(&$tmp1556, 65);
        panda$core$Bit $tmp1557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1556);
        $tmp1507 = $tmp1557.value;
        $l1555:;
        panda$core$Bit $tmp1558 = { $tmp1507 };
        bool $tmp1506 = $tmp1558.value;
        if ($tmp1506) goto $l1559;
        panda$core$Int64$init$builtin_int64(&$tmp1560, 64);
        panda$core$Bit $tmp1561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1560);
        $tmp1506 = $tmp1561.value;
        $l1559:;
        panda$core$Bit $tmp1562 = { $tmp1506 };
        bool $tmp1505 = $tmp1562.value;
        if ($tmp1505) goto $l1563;
        panda$core$Int64$init$builtin_int64(&$tmp1564, 56);
        panda$core$Bit $tmp1565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1564);
        $tmp1505 = $tmp1565.value;
        $l1563:;
        panda$core$Bit $tmp1566 = { $tmp1505 };
        bool $tmp1504 = $tmp1566.value;
        if ($tmp1504) goto $l1567;
        panda$core$Int64$init$builtin_int64(&$tmp1568, 66);
        panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1568);
        $tmp1504 = $tmp1569.value;
        $l1567:;
        panda$core$Bit $tmp1570 = { $tmp1504 };
        bool $tmp1503 = $tmp1570.value;
        if ($tmp1503) goto $l1571;
        panda$core$Int64$init$builtin_int64(&$tmp1572, 67);
        panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1572);
        $tmp1503 = $tmp1573.value;
        $l1571:;
        panda$core$Bit $tmp1574 = { $tmp1503 };
        bool $tmp1502 = $tmp1574.value;
        if ($tmp1502) goto $l1575;
        panda$core$Int64$init$builtin_int64(&$tmp1576, 68);
        panda$core$Bit $tmp1577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1576);
        $tmp1502 = $tmp1577.value;
        $l1575:;
        panda$core$Bit $tmp1578 = { $tmp1502 };
        bool $tmp1501 = $tmp1578.value;
        if ($tmp1501) goto $l1579;
        panda$core$Int64$init$builtin_int64(&$tmp1580, 69);
        panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1580);
        $tmp1501 = $tmp1581.value;
        $l1579:;
        panda$core$Bit $tmp1582 = { $tmp1501 };
        bool $tmp1500 = $tmp1582.value;
        if ($tmp1500) goto $l1583;
        panda$core$Int64$init$builtin_int64(&$tmp1584, 70);
        panda$core$Bit $tmp1585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1584);
        $tmp1500 = $tmp1585.value;
        $l1583:;
        panda$core$Bit $tmp1586 = { $tmp1500 };
        bool $tmp1499 = $tmp1586.value;
        if ($tmp1499) goto $l1587;
        panda$core$Int64$init$builtin_int64(&$tmp1588, 71);
        panda$core$Bit $tmp1589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1588);
        $tmp1499 = $tmp1589.value;
        $l1587:;
        panda$core$Bit $tmp1590 = { $tmp1499 };
        bool $tmp1498 = $tmp1590.value;
        if ($tmp1498) goto $l1591;
        panda$core$Int64$init$builtin_int64(&$tmp1592, 49);
        panda$core$Bit $tmp1593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1592);
        $tmp1498 = $tmp1593.value;
        $l1591:;
        panda$core$Bit $tmp1594 = { $tmp1498 };
        bool $tmp1497 = $tmp1594.value;
        if ($tmp1497) goto $l1595;
        panda$core$Int64$init$builtin_int64(&$tmp1596, 50);
        panda$core$Bit $tmp1597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1596);
        $tmp1497 = $tmp1597.value;
        $l1595:;
        panda$core$Bit $tmp1598 = { $tmp1497 };
        bool $tmp1496 = $tmp1598.value;
        if ($tmp1496) goto $l1599;
        panda$core$Int64$init$builtin_int64(&$tmp1600, 72);
        panda$core$Bit $tmp1601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1600);
        $tmp1496 = $tmp1601.value;
        $l1599:;
        panda$core$Bit $tmp1602 = { $tmp1496 };
        if ($tmp1602.value) {
        {
            panda$core$String* $tmp1606 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1493);
            $tmp1605 = $tmp1606;
            $tmp1604 = $tmp1605;
            $returnValue1603 = $tmp1604;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1604));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1605));
            return $returnValue1603;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1608, 63);
        panda$core$Bit $tmp1609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1608);
        if ($tmp1609.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1611 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token1610 = $tmp1611;
            panda$core$Int64$init$builtin_int64(&$tmp1612, 63);
            panda$core$Bit $tmp1613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1610.kind.$rawValue, $tmp1612);
            if ($tmp1613.value) {
            {
                $tmp1614 = &$s1615;
                $returnValue1603 = $tmp1614;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1614));
                return $returnValue1603;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1610);
                $tmp1617 = &$s1618;
                $returnValue1603 = $tmp1617;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1617));
                return $returnValue1603;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1620, 101);
        panda$core$Bit $tmp1621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$624_91495.$rawValue, $tmp1620);
        if ($tmp1621.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1623, 102);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1622, $tmp1623);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1625 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1622, &$s1624);
            if (((panda$core$Bit) { !$tmp1625.nonnull }).value) {
            {
                $tmp1626 = NULL;
                $returnValue1603 = $tmp1626;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1626));
                return $returnValue1603;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp1629, 73);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1628, $tmp1629);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1630 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1628);
            if (((panda$core$Bit) { $tmp1630.nonnull }).value) {
            {
                $tmp1631 = &$s1632;
                $returnValue1603 = $tmp1631;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1631));
                return $returnValue1603;
            }
            }
            $tmp1634 = &$s1635;
            $returnValue1603 = $tmp1634;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1634));
            return $returnValue1603;
        }
        }
        else {
        {
            panda$core$String* $tmp1641 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1493);
            $tmp1640 = $tmp1641;
            panda$core$String* $tmp1642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1639, $tmp1640);
            $tmp1638 = $tmp1642;
            panda$core$String* $tmp1644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1638, &$s1643);
            $tmp1637 = $tmp1644;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name1493, $tmp1637);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1638));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1640));
            $tmp1645 = NULL;
            $returnValue1603 = $tmp1645;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1645));
            return $returnValue1603;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue1647;
    org$pandalanguage$pandac$ASTNode* $tmp1648;
    org$pandalanguage$pandac$ASTNode* $tmp1649;
    panda$core$Bit $tmp1650;
    panda$core$Bit$init$builtin_bit(&$tmp1650, true);
    org$pandalanguage$pandac$ASTNode* $tmp1651 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1650);
    $tmp1649 = $tmp1651;
    $tmp1648 = $tmp1649;
    $returnValue1647 = $tmp1648;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1648));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1649));
    return $returnValue1647;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1656;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1657;
    panda$core$Int64 $tmp1658;
    org$pandalanguage$pandac$ASTNode* $returnValue1661;
    org$pandalanguage$pandac$ASTNode* $tmp1662;
    panda$collections$Array* subtypes1665 = NULL;
    panda$collections$Array* $tmp1666;
    panda$collections$Array* $tmp1667;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1669;
    panda$core$Int64 $tmp1670;
    org$pandalanguage$pandac$ASTNode* t1675 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1676;
    org$pandalanguage$pandac$ASTNode* $tmp1677;
    org$pandalanguage$pandac$ASTNode* $tmp1679;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1686;
    panda$core$Int64 $tmp1687;
    org$pandalanguage$pandac$ASTNode* $tmp1689;
    org$pandalanguage$pandac$ASTNode* $tmp1690;
    org$pandalanguage$pandac$ASTNode* $tmp1691;
    org$pandalanguage$pandac$ASTNode* $tmp1693;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1697;
    panda$core$Int64 $tmp1698;
    org$pandalanguage$pandac$ASTNode* $tmp1701;
    org$pandalanguage$pandac$parser$Token yields1706;
    org$pandalanguage$pandac$parser$Token$Kind $match$688_91708;
    panda$core$Int64 $tmp1712;
    panda$core$Int64 $tmp1715;
    panda$core$Int64 $tmp1719;
    panda$core$Int64 $tmp1723;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1729;
    panda$core$Int64 $tmp1730;
    org$pandalanguage$pandac$ASTNode* $tmp1733;
    panda$collections$Array* returnTypes1737 = NULL;
    panda$collections$Array* $tmp1738;
    panda$collections$Array* $tmp1739;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1741;
    panda$core$Int64 $tmp1742;
    org$pandalanguage$pandac$ASTNode* t1747 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1748;
    org$pandalanguage$pandac$ASTNode* $tmp1749;
    org$pandalanguage$pandac$ASTNode* $tmp1751;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1759;
    panda$core$Int64 $tmp1760;
    org$pandalanguage$pandac$ASTNode* $tmp1762;
    org$pandalanguage$pandac$ASTNode* $tmp1763;
    org$pandalanguage$pandac$ASTNode* $tmp1764;
    org$pandalanguage$pandac$ASTNode* $tmp1766;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1771;
    panda$core$Int64 $tmp1772;
    org$pandalanguage$pandac$ASTNode* $tmp1775;
    org$pandalanguage$pandac$ASTNode* returnType1781 = NULL;
    panda$core$Int64 $tmp1783;
    org$pandalanguage$pandac$ASTNode* $tmp1785;
    org$pandalanguage$pandac$ASTNode* $tmp1786;
    panda$core$Int64 $tmp1788;
    org$pandalanguage$pandac$ASTNode* $tmp1790;
    org$pandalanguage$pandac$ASTNode* $tmp1791;
    panda$core$Object* $tmp1792;
    panda$core$Int64 $tmp1793;
    org$pandalanguage$pandac$ASTNode* $tmp1796;
    org$pandalanguage$pandac$ASTNode* $tmp1800;
    org$pandalanguage$pandac$ASTNode* $tmp1801;
    panda$core$Int64 $tmp1803;
    panda$collections$ImmutableArray* $tmp1804;
    org$pandalanguage$pandac$ASTNode* $tmp1811;
    int $tmp1655;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1658, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1657, $tmp1658);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1660 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1657, &$s1659);
        start1656 = $tmp1660;
        if (((panda$core$Bit) { !start1656.nonnull }).value) {
        {
            $tmp1662 = NULL;
            $returnValue1661 = $tmp1662;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1662));
            $tmp1655 = 0;
            goto $l1653;
            $l1663:;
            return $returnValue1661;
        }
        }
        panda$collections$Array* $tmp1668 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1668);
        $tmp1667 = $tmp1668;
        $tmp1666 = $tmp1667;
        subtypes1665 = $tmp1666;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1666));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1667));
        panda$core$Int64$init$builtin_int64(&$tmp1670, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1669, $tmp1670);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1671 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1669);
        if (((panda$core$Bit) { !$tmp1671.nonnull }).value) {
        {
            int $tmp1674;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1678 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1677 = $tmp1678;
                $tmp1676 = $tmp1677;
                t1675 = $tmp1676;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1676));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1677));
                if (((panda$core$Bit) { t1675 == NULL }).value) {
                {
                    $tmp1679 = NULL;
                    $returnValue1661 = $tmp1679;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1679));
                    $tmp1674 = 0;
                    goto $l1672;
                    $l1680:;
                    $tmp1655 = 1;
                    goto $l1653;
                    $l1681:;
                    return $returnValue1661;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1665, ((panda$core$Object*) t1675));
                $l1683:;
                panda$core$Int64$init$builtin_int64(&$tmp1687, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1686, $tmp1687);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1688 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1686);
                bool $tmp1685 = ((panda$core$Bit) { $tmp1688.nonnull }).value;
                if (!$tmp1685) goto $l1684;
                {
                    {
                        $tmp1689 = t1675;
                        org$pandalanguage$pandac$ASTNode* $tmp1692 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1691 = $tmp1692;
                        $tmp1690 = $tmp1691;
                        t1675 = $tmp1690;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1690));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1691));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1689));
                    }
                    if (((panda$core$Bit) { t1675 == NULL }).value) {
                    {
                        $tmp1693 = NULL;
                        $returnValue1661 = $tmp1693;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1693));
                        $tmp1674 = 1;
                        goto $l1672;
                        $l1694:;
                        $tmp1655 = 2;
                        goto $l1653;
                        $l1695:;
                        return $returnValue1661;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1665, ((panda$core$Object*) t1675));
                }
                goto $l1683;
                $l1684:;
                panda$core$Int64$init$builtin_int64(&$tmp1698, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1697, $tmp1698);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1700 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1697, &$s1699);
                if (((panda$core$Bit) { !$tmp1700.nonnull }).value) {
                {
                    $tmp1701 = NULL;
                    $returnValue1661 = $tmp1701;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1701));
                    $tmp1674 = 2;
                    goto $l1672;
                    $l1702:;
                    $tmp1655 = 3;
                    goto $l1653;
                    $l1703:;
                    return $returnValue1661;
                }
                }
            }
            $tmp1674 = -1;
            goto $l1672;
            $l1672:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1675));
            t1675 = NULL;
            switch ($tmp1674) {
                case 1: goto $l1694;
                case 0: goto $l1680;
                case -1: goto $l1705;
                case 2: goto $l1702;
            }
            $l1705:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1707 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1706 = $tmp1707;
        {
            $match$688_91708 = yields1706.kind;
            panda$core$Int64$init$builtin_int64(&$tmp1712, 90);
            panda$core$Bit $tmp1713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$688_91708.$rawValue, $tmp1712);
            bool $tmp1711 = $tmp1713.value;
            if ($tmp1711) goto $l1714;
            panda$core$Int64$init$builtin_int64(&$tmp1715, 91);
            panda$core$Bit $tmp1716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$688_91708.$rawValue, $tmp1715);
            $tmp1711 = $tmp1716.value;
            $l1714:;
            panda$core$Bit $tmp1717 = { $tmp1711 };
            bool $tmp1710 = $tmp1717.value;
            if ($tmp1710) goto $l1718;
            panda$core$Int64$init$builtin_int64(&$tmp1719, 92);
            panda$core$Bit $tmp1720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$688_91708.$rawValue, $tmp1719);
            $tmp1710 = $tmp1720.value;
            $l1718:;
            panda$core$Bit $tmp1721 = { $tmp1710 };
            bool $tmp1709 = $tmp1721.value;
            if ($tmp1709) goto $l1722;
            panda$core$Int64$init$builtin_int64(&$tmp1723, 93);
            panda$core$Bit $tmp1724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$688_91708.$rawValue, $tmp1723);
            $tmp1709 = $tmp1724.value;
            $l1722:;
            panda$core$Bit $tmp1725 = { $tmp1709 };
            if ($tmp1725.value) {
            {
                int $tmp1728;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp1730, 103);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1729, $tmp1730);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1732 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1729, &$s1731);
                    if (((panda$core$Bit) { !$tmp1732.nonnull }).value) {
                    {
                        $tmp1733 = NULL;
                        $returnValue1661 = $tmp1733;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1733));
                        $tmp1728 = 0;
                        goto $l1726;
                        $l1734:;
                        $tmp1655 = 4;
                        goto $l1653;
                        $l1735:;
                        return $returnValue1661;
                    }
                    }
                    panda$collections$Array* $tmp1740 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1740);
                    $tmp1739 = $tmp1740;
                    $tmp1738 = $tmp1739;
                    returnTypes1737 = $tmp1738;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1738));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1739));
                    panda$core$Int64$init$builtin_int64(&$tmp1742, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1741, $tmp1742);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1743 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1741);
                    if (((panda$core$Bit) { !$tmp1743.nonnull }).value) {
                    {
                        int $tmp1746;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1750 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1749 = $tmp1750;
                            $tmp1748 = $tmp1749;
                            t1747 = $tmp1748;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1748));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1749));
                            if (((panda$core$Bit) { t1747 == NULL }).value) {
                            {
                                $tmp1751 = NULL;
                                $returnValue1661 = $tmp1751;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1751));
                                $tmp1746 = 0;
                                goto $l1744;
                                $l1752:;
                                $tmp1728 = 1;
                                goto $l1726;
                                $l1753:;
                                $tmp1655 = 5;
                                goto $l1653;
                                $l1754:;
                                return $returnValue1661;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1737, ((panda$core$Object*) t1747));
                            $l1756:;
                            panda$core$Int64$init$builtin_int64(&$tmp1760, 105);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1759, $tmp1760);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1761 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1759);
                            bool $tmp1758 = ((panda$core$Bit) { $tmp1761.nonnull }).value;
                            if (!$tmp1758) goto $l1757;
                            {
                                {
                                    $tmp1762 = t1747;
                                    org$pandalanguage$pandac$ASTNode* $tmp1765 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1764 = $tmp1765;
                                    $tmp1763 = $tmp1764;
                                    t1747 = $tmp1763;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1763));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1764));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1762));
                                }
                                if (((panda$core$Bit) { t1747 == NULL }).value) {
                                {
                                    $tmp1766 = NULL;
                                    $returnValue1661 = $tmp1766;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1766));
                                    $tmp1746 = 1;
                                    goto $l1744;
                                    $l1767:;
                                    $tmp1728 = 2;
                                    goto $l1726;
                                    $l1768:;
                                    $tmp1655 = 6;
                                    goto $l1653;
                                    $l1769:;
                                    return $returnValue1661;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1737, ((panda$core$Object*) t1747));
                            }
                            goto $l1756;
                            $l1757:;
                            panda$core$Int64$init$builtin_int64(&$tmp1772, 104);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1771, $tmp1772);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1774 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1771, &$s1773);
                            if (((panda$core$Bit) { !$tmp1774.nonnull }).value) {
                            {
                                $tmp1775 = NULL;
                                $returnValue1661 = $tmp1775;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1775));
                                $tmp1746 = 2;
                                goto $l1744;
                                $l1776:;
                                $tmp1728 = 3;
                                goto $l1726;
                                $l1777:;
                                $tmp1655 = 7;
                                goto $l1653;
                                $l1778:;
                                return $returnValue1661;
                            }
                            }
                        }
                        $tmp1746 = -1;
                        goto $l1744;
                        $l1744:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1747));
                        t1747 = NULL;
                        switch ($tmp1746) {
                            case 1: goto $l1767;
                            case 2: goto $l1776;
                            case -1: goto $l1780;
                            case 0: goto $l1752;
                        }
                        $l1780:;
                    }
                    }
                    memset(&returnType1781, 0, sizeof(returnType1781));
                    panda$core$Int64 $tmp1782 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1737);
                    panda$core$Int64$init$builtin_int64(&$tmp1783, 0);
                    panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1782, $tmp1783);
                    if ($tmp1784.value) {
                    {
                        {
                            $tmp1785 = returnType1781;
                            $tmp1786 = NULL;
                            returnType1781 = $tmp1786;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1786));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1785));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1787 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1737);
                    panda$core$Int64$init$builtin_int64(&$tmp1788, 1);
                    panda$core$Bit $tmp1789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1787, $tmp1788);
                    if ($tmp1789.value) {
                    {
                        {
                            $tmp1790 = returnType1781;
                            panda$core$Int64$init$builtin_int64(&$tmp1793, 0);
                            panda$core$Object* $tmp1794 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1737, $tmp1793);
                            $tmp1792 = $tmp1794;
                            $tmp1791 = ((org$pandalanguage$pandac$ASTNode*) $tmp1792);
                            returnType1781 = $tmp1791;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1791));
                            panda$core$Panda$unref$panda$core$Object($tmp1792);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1790));
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1656.value), &$s1795);
                        $tmp1796 = NULL;
                        $returnValue1661 = $tmp1796;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1796));
                        $tmp1728 = 4;
                        goto $l1726;
                        $l1797:;
                        $tmp1655 = 8;
                        goto $l1653;
                        $l1798:;
                        return $returnValue1661;
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1802 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1803, 27);
                    panda$collections$ImmutableArray* $tmp1805 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1665);
                    $tmp1804 = $tmp1805;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1802, $tmp1803, ((org$pandalanguage$pandac$parser$Token) start1656.value).position, yields1706.kind, $tmp1804, returnType1781);
                    $tmp1801 = $tmp1802;
                    $tmp1800 = $tmp1801;
                    $returnValue1661 = $tmp1800;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1800));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1801));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1804));
                    $tmp1728 = 5;
                    goto $l1726;
                    $l1806:;
                    $tmp1655 = 9;
                    goto $l1653;
                    $l1807:;
                    return $returnValue1661;
                }
                $l1726:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1781));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1737));
                returnTypes1737 = NULL;
                switch ($tmp1728) {
                    case 1: goto $l1753;
                    case 0: goto $l1734;
                    case 4: goto $l1797;
                    case 5: goto $l1806;
                    case 3: goto $l1777;
                    case 2: goto $l1768;
                }
                $l1809:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1656.value), &$s1810);
                $tmp1811 = NULL;
                $returnValue1661 = $tmp1811;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1811));
                $tmp1655 = 10;
                goto $l1653;
                $l1812:;
                return $returnValue1661;
            }
            }
        }
    }
    $tmp1655 = -1;
    goto $l1653;
    $l1653:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1665));
    subtypes1665 = NULL;
    switch ($tmp1655) {
        case 5: goto $l1754;
        case 3: goto $l1703;
        case 8: goto $l1798;
        case -1: goto $l1814;
        case 7: goto $l1778;
        case 9: goto $l1807;
        case 10: goto $l1812;
        case 4: goto $l1735;
        case 6: goto $l1769;
        case 1: goto $l1681;
        case 0: goto $l1663;
        case 2: goto $l1695;
    }
    $l1814:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* result1818 = NULL;
    panda$core$Int64 $tmp1820;
    org$pandalanguage$pandac$ASTNode* $tmp1822;
    org$pandalanguage$pandac$ASTNode* $tmp1823;
    org$pandalanguage$pandac$ASTNode* $tmp1824;
    org$pandalanguage$pandac$ASTNode* $returnValue1826;
    org$pandalanguage$pandac$ASTNode* $tmp1827;
    org$pandalanguage$pandac$parser$Token$nullable start1833;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1834;
    panda$core$Int64 $tmp1835;
    org$pandalanguage$pandac$ASTNode* $tmp1838;
    panda$core$MutableString* name1842 = NULL;
    panda$core$MutableString* $tmp1843;
    panda$core$MutableString* $tmp1844;
    panda$core$String* $tmp1846;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1851;
    panda$core$Int64 $tmp1852;
    org$pandalanguage$pandac$parser$Token$nullable id1854;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1855;
    panda$core$Int64 $tmp1856;
    org$pandalanguage$pandac$ASTNode* $tmp1859;
    panda$core$Char8 $tmp1863;
    panda$core$UInt8 $tmp1864;
    panda$core$String* $tmp1865;
    panda$core$String* finalName1867 = NULL;
    panda$core$String* $tmp1868;
    panda$core$String* $tmp1869;
    org$pandalanguage$pandac$ASTNode* $tmp1871;
    org$pandalanguage$pandac$ASTNode* $tmp1872;
    org$pandalanguage$pandac$ASTNode* $tmp1873;
    panda$core$Int64 $tmp1875;
    panda$core$Int64 $tmp1877;
    panda$collections$Array* children1882 = NULL;
    panda$collections$Array* $tmp1883;
    panda$collections$Array* $tmp1884;
    org$pandalanguage$pandac$ASTNode* t1886 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1887;
    org$pandalanguage$pandac$ASTNode* $tmp1888;
    panda$core$Bit $tmp1889;
    org$pandalanguage$pandac$ASTNode* $tmp1891;
    org$pandalanguage$pandac$ASTNode* $tmp1896;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1904;
    panda$core$Int64 $tmp1905;
    org$pandalanguage$pandac$ASTNode* $tmp1907;
    org$pandalanguage$pandac$ASTNode* $tmp1908;
    org$pandalanguage$pandac$ASTNode* $tmp1909;
    panda$core$Bit $tmp1910;
    org$pandalanguage$pandac$ASTNode* $tmp1912;
    org$pandalanguage$pandac$ASTNode* $tmp1917;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1922;
    panda$core$Int64 $tmp1923;
    org$pandalanguage$pandac$ASTNode* $tmp1926;
    org$pandalanguage$pandac$ASTNode* $tmp1931;
    org$pandalanguage$pandac$ASTNode* $tmp1936;
    org$pandalanguage$pandac$ASTNode* $tmp1937;
    org$pandalanguage$pandac$ASTNode* $tmp1938;
    panda$core$Int64 $tmp1940;
    panda$collections$ImmutableArray* $tmp1941;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1945;
    panda$core$Int64 $tmp1946;
    org$pandalanguage$pandac$ASTNode* $tmp1948;
    org$pandalanguage$pandac$ASTNode* $tmp1949;
    org$pandalanguage$pandac$ASTNode* $tmp1950;
    panda$core$Int64 $tmp1952;
    org$pandalanguage$pandac$ASTNode* $tmp1955;
    int $tmp1817;
    {
        memset(&result1818, 0, sizeof(result1818));
        org$pandalanguage$pandac$parser$Token $tmp1819 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp1820, 103);
        panda$core$Bit $tmp1821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1819.kind.$rawValue, $tmp1820);
        if ($tmp1821.value) {
        {
            {
                $tmp1822 = result1818;
                org$pandalanguage$pandac$ASTNode* $tmp1825 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1824 = $tmp1825;
                $tmp1823 = $tmp1824;
                result1818 = $tmp1823;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1823));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1822));
            }
            if (((panda$core$Bit) { result1818 == NULL }).value) {
            {
                $tmp1827 = NULL;
                $returnValue1826 = $tmp1827;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1827));
                $tmp1817 = 0;
                goto $l1815;
                $l1828:;
                return $returnValue1826;
            }
            }
        }
        }
        else {
        {
            int $tmp1832;
            {
                panda$core$Int64$init$builtin_int64(&$tmp1835, 48);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1834, $tmp1835);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1837 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1834, &$s1836);
                start1833 = $tmp1837;
                if (((panda$core$Bit) { !start1833.nonnull }).value) {
                {
                    $tmp1838 = NULL;
                    $returnValue1826 = $tmp1838;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1838));
                    $tmp1832 = 0;
                    goto $l1830;
                    $l1839:;
                    $tmp1817 = 1;
                    goto $l1815;
                    $l1840:;
                    return $returnValue1826;
                }
                }
                panda$core$MutableString* $tmp1845 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1847 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1833.value));
                $tmp1846 = $tmp1847;
                panda$core$MutableString$init$panda$core$String($tmp1845, $tmp1846);
                $tmp1844 = $tmp1845;
                $tmp1843 = $tmp1844;
                name1842 = $tmp1843;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1843));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1844));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1846));
                $l1848:;
                panda$core$Int64$init$builtin_int64(&$tmp1852, 98);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1851, $tmp1852);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1853 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1851);
                bool $tmp1850 = ((panda$core$Bit) { $tmp1853.nonnull }).value;
                if (!$tmp1850) goto $l1849;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1856, 48);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1855, $tmp1856);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1858 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1855, &$s1857);
                    id1854 = $tmp1858;
                    if (((panda$core$Bit) { !id1854.nonnull }).value) {
                    {
                        $tmp1859 = NULL;
                        $returnValue1826 = $tmp1859;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1859));
                        $tmp1832 = 1;
                        goto $l1830;
                        $l1860:;
                        $tmp1817 = 2;
                        goto $l1815;
                        $l1861:;
                        return $returnValue1826;
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp1864, 46);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1863, $tmp1864);
                    panda$core$MutableString$append$panda$core$Char8(name1842, $tmp1863);
                    panda$core$String* $tmp1866 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1854.value));
                    $tmp1865 = $tmp1866;
                    panda$core$MutableString$append$panda$core$String(name1842, $tmp1865);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1865));
                }
                goto $l1848;
                $l1849:;
                panda$core$String* $tmp1870 = panda$core$MutableString$finish$R$panda$core$String(name1842);
                $tmp1869 = $tmp1870;
                $tmp1868 = $tmp1869;
                finalName1867 = $tmp1868;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1868));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1869));
                {
                    $tmp1871 = result1818;
                    org$pandalanguage$pandac$ASTNode* $tmp1874 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1875, 42);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1874, $tmp1875, ((org$pandalanguage$pandac$parser$Token) start1833.value).position, finalName1867);
                    $tmp1873 = $tmp1874;
                    $tmp1872 = $tmp1873;
                    result1818 = $tmp1872;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1872));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1873));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1871));
                }
                org$pandalanguage$pandac$parser$Token $tmp1876 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$Int64$init$builtin_int64(&$tmp1877, 62);
                panda$core$Bit $tmp1878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1876.kind.$rawValue, $tmp1877);
                if ($tmp1878.value) {
                {
                    int $tmp1881;
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                        panda$collections$Array* $tmp1885 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1885);
                        $tmp1884 = $tmp1885;
                        $tmp1883 = $tmp1884;
                        children1882 = $tmp1883;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1883));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1884));
                        panda$core$Bit$init$builtin_bit(&$tmp1889, false);
                        org$pandalanguage$pandac$ASTNode* $tmp1890 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1889);
                        $tmp1888 = $tmp1890;
                        $tmp1887 = $tmp1888;
                        t1886 = $tmp1887;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1887));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1888));
                        if (((panda$core$Bit) { t1886 == NULL }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp1891 = result1818;
                                $returnValue1826 = $tmp1891;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1891));
                                $tmp1881 = 0;
                                goto $l1879;
                                $l1892:;
                                $tmp1832 = 2;
                                goto $l1830;
                                $l1893:;
                                $tmp1817 = 3;
                                goto $l1815;
                                $l1894:;
                                return $returnValue1826;
                            }
                            }
                            $tmp1896 = NULL;
                            $returnValue1826 = $tmp1896;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1896));
                            $tmp1881 = 1;
                            goto $l1879;
                            $l1897:;
                            $tmp1832 = 3;
                            goto $l1830;
                            $l1898:;
                            $tmp1817 = 4;
                            goto $l1815;
                            $l1899:;
                            return $returnValue1826;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children1882, ((panda$core$Object*) t1886));
                        $l1901:;
                        panda$core$Int64$init$builtin_int64(&$tmp1905, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1904, $tmp1905);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1906 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1904);
                        bool $tmp1903 = ((panda$core$Bit) { $tmp1906.nonnull }).value;
                        if (!$tmp1903) goto $l1902;
                        {
                            {
                                $tmp1907 = t1886;
                                panda$core$Bit$init$builtin_bit(&$tmp1910, false);
                                org$pandalanguage$pandac$ASTNode* $tmp1911 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1910);
                                $tmp1909 = $tmp1911;
                                $tmp1908 = $tmp1909;
                                t1886 = $tmp1908;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1908));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1909));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1907));
                            }
                            if (((panda$core$Bit) { t1886 == NULL }).value) {
                            {
                                if (p_needSpeculativeParse.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1912 = result1818;
                                    $returnValue1826 = $tmp1912;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1912));
                                    $tmp1881 = 2;
                                    goto $l1879;
                                    $l1913:;
                                    $tmp1832 = 4;
                                    goto $l1830;
                                    $l1914:;
                                    $tmp1817 = 5;
                                    goto $l1815;
                                    $l1915:;
                                    return $returnValue1826;
                                }
                                }
                                $tmp1917 = NULL;
                                $returnValue1826 = $tmp1917;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1917));
                                $tmp1881 = 3;
                                goto $l1879;
                                $l1918:;
                                $tmp1832 = 5;
                                goto $l1830;
                                $l1919:;
                                $tmp1817 = 6;
                                goto $l1815;
                                $l1920:;
                                return $returnValue1826;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(children1882, ((panda$core$Object*) t1886));
                        }
                        goto $l1901;
                        $l1902:;
                        panda$core$Int64$init$builtin_int64(&$tmp1923, 63);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1922, $tmp1923);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1925 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1922, &$s1924);
                        if (((panda$core$Bit) { !$tmp1925.nonnull }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp1926 = result1818;
                                $returnValue1826 = $tmp1926;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1926));
                                $tmp1881 = 4;
                                goto $l1879;
                                $l1927:;
                                $tmp1832 = 6;
                                goto $l1830;
                                $l1928:;
                                $tmp1817 = 7;
                                goto $l1815;
                                $l1929:;
                                return $returnValue1826;
                            }
                            }
                            $tmp1931 = NULL;
                            $returnValue1826 = $tmp1931;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1931));
                            $tmp1881 = 5;
                            goto $l1879;
                            $l1932:;
                            $tmp1832 = 7;
                            goto $l1830;
                            $l1933:;
                            $tmp1817 = 8;
                            goto $l1815;
                            $l1934:;
                            return $returnValue1826;
                        }
                        }
                        {
                            $tmp1936 = result1818;
                            org$pandalanguage$pandac$ASTNode* $tmp1939 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp1940, 19);
                            panda$collections$ImmutableArray* $tmp1942 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1882);
                            $tmp1941 = $tmp1942;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1939, $tmp1940, ((org$pandalanguage$pandac$parser$Token) start1833.value).position, finalName1867, $tmp1941);
                            $tmp1938 = $tmp1939;
                            $tmp1937 = $tmp1938;
                            result1818 = $tmp1937;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1937));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1938));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1941));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1936));
                        }
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                    }
                    $tmp1881 = -1;
                    goto $l1879;
                    $l1879:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1886));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1882));
                    children1882 = NULL;
                    t1886 = NULL;
                    switch ($tmp1881) {
                        case -1: goto $l1943;
                        case 1: goto $l1897;
                        case 5: goto $l1932;
                        case 4: goto $l1927;
                        case 0: goto $l1892;
                        case 2: goto $l1913;
                        case 3: goto $l1918;
                    }
                    $l1943:;
                }
                }
            }
            $tmp1832 = -1;
            goto $l1830;
            $l1830:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1867));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1842));
            name1842 = NULL;
            finalName1867 = NULL;
            switch ($tmp1832) {
                case 4: goto $l1914;
                case 0: goto $l1839;
                case -1: goto $l1944;
                case 7: goto $l1933;
                case 2: goto $l1893;
                case 3: goto $l1898;
                case 5: goto $l1919;
                case 1: goto $l1860;
                case 6: goto $l1928;
            }
            $l1944:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1946, 94);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1945, $tmp1946);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1947 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1945);
        if (((panda$core$Bit) { $tmp1947.nonnull }).value) {
        {
            {
                $tmp1948 = result1818;
                org$pandalanguage$pandac$ASTNode* $tmp1951 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1952, 29);
                org$pandalanguage$pandac$Position $tmp1954 = (($fn1953) result1818->$class->vtable[2])(result1818);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1951, $tmp1952, $tmp1954, result1818);
                $tmp1950 = $tmp1951;
                $tmp1949 = $tmp1950;
                result1818 = $tmp1949;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1949));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1950));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1948));
            }
        }
        }
        $tmp1955 = result1818;
        $returnValue1826 = $tmp1955;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1955));
        $tmp1817 = 9;
        goto $l1815;
        $l1956:;
        return $returnValue1826;
    }
    $l1815:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1818));
    switch ($tmp1817) {
        case 9: goto $l1956;
        case 8: goto $l1934;
        case 3: goto $l1894;
        case 2: goto $l1861;
        case 4: goto $l1899;
        case 6: goto $l1920;
        case 1: goto $l1840;
        case 0: goto $l1828;
        case 7: goto $l1929;
        case 5: goto $l1915;
    }
    $l1958:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1962 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1963;
    org$pandalanguage$pandac$ASTNode* $tmp1964;
    org$pandalanguage$pandac$ASTNode* $returnValue1966;
    org$pandalanguage$pandac$ASTNode* $tmp1967;
    org$pandalanguage$pandac$parser$Token token1972;
    org$pandalanguage$pandac$parser$Token$Kind $match$824_131974;
    panda$core$Int64 $tmp1975;
    panda$core$Object* $tmp1980;
    panda$core$Bit $tmp1981;
    panda$collections$Array* args1983 = NULL;
    panda$collections$Array* $tmp1984;
    panda$collections$Array* $tmp1985;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1987;
    panda$core$Int64 $tmp1988;
    org$pandalanguage$pandac$ASTNode* expr1993 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1994;
    org$pandalanguage$pandac$ASTNode* $tmp1995;
    panda$core$Object* $tmp1997;
    org$pandalanguage$pandac$ASTNode* $tmp1999;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2007;
    panda$core$Int64 $tmp2008;
    org$pandalanguage$pandac$ASTNode* $tmp2010;
    org$pandalanguage$pandac$ASTNode* $tmp2011;
    org$pandalanguage$pandac$ASTNode* $tmp2012;
    panda$core$Object* $tmp2014;
    org$pandalanguage$pandac$ASTNode* $tmp2016;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2021;
    panda$core$Int64 $tmp2022;
    panda$core$Object* $tmp2025;
    org$pandalanguage$pandac$ASTNode* $tmp2027;
    panda$core$Object* $tmp2033;
    org$pandalanguage$pandac$ASTNode* $tmp2035;
    org$pandalanguage$pandac$ASTNode* $tmp2036;
    org$pandalanguage$pandac$ASTNode* $tmp2037;
    panda$core$Int64 $tmp2039;
    panda$collections$ImmutableArray* $tmp2040;
    panda$core$Int64 $tmp2043;
    org$pandalanguage$pandac$ASTNode* arg2048 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2049;
    org$pandalanguage$pandac$ASTNode* $tmp2050;
    org$pandalanguage$pandac$ASTNode* $tmp2052;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2056;
    panda$core$Int64 $tmp2057;
    org$pandalanguage$pandac$ASTNode* $tmp2060;
    org$pandalanguage$pandac$ASTNode* $tmp2064;
    org$pandalanguage$pandac$ASTNode* $tmp2065;
    org$pandalanguage$pandac$ASTNode* $tmp2066;
    panda$core$Int64 $tmp2068;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2069;
    panda$core$Int64 $tmp2070;
    panda$core$Int64 $tmp2072;
    panda$core$String* name2077 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2078;
    panda$core$Int64 $tmp2079;
    panda$core$String* $tmp2081;
    panda$core$String* $tmp2082;
    panda$core$String* $tmp2084;
    panda$core$String* $tmp2085;
    panda$core$String* $tmp2086;
    org$pandalanguage$pandac$ASTNode* $tmp2088;
    org$pandalanguage$pandac$ASTNode* $tmp2092;
    org$pandalanguage$pandac$ASTNode* $tmp2093;
    org$pandalanguage$pandac$ASTNode* $tmp2094;
    panda$core$Int64 $tmp2096;
    panda$core$Int64 $tmp2098;
    org$pandalanguage$pandac$ASTNode* target2103 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2104;
    org$pandalanguage$pandac$ASTNode* $tmp2105;
    org$pandalanguage$pandac$ASTNode* $tmp2107;
    org$pandalanguage$pandac$ASTNode* $tmp2111;
    org$pandalanguage$pandac$ASTNode* $tmp2112;
    org$pandalanguage$pandac$ASTNode* $tmp2113;
    panda$core$Int64 $tmp2115;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2116;
    panda$core$Int64 $tmp2117;
    panda$core$Int64 $tmp2119;
    panda$core$String* name2124 = NULL;
    panda$core$String* $tmp2125;
    panda$core$String* $tmp2126;
    panda$collections$Array* types2131 = NULL;
    panda$collections$Array* $tmp2132;
    panda$collections$Array* $tmp2133;
    org$pandalanguage$pandac$ASTNode* t2135 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2136;
    org$pandalanguage$pandac$ASTNode* $tmp2137;
    panda$core$Bit $tmp2138;
    org$pandalanguage$pandac$ASTNode* $tmp2140;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2148;
    panda$core$Int64 $tmp2149;
    org$pandalanguage$pandac$ASTNode* $tmp2151;
    org$pandalanguage$pandac$ASTNode* $tmp2152;
    org$pandalanguage$pandac$ASTNode* $tmp2153;
    panda$core$Bit $tmp2154;
    org$pandalanguage$pandac$ASTNode* $tmp2156;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2161;
    panda$core$Int64 $tmp2162;
    org$pandalanguage$pandac$ASTNode* $tmp2165;
    panda$core$Bit shouldAccept2170;
    panda$core$Object* $tmp2171;
    panda$core$Int64 $tmp2172;
    org$pandalanguage$pandac$parser$Token$Kind $match$929_292174;
    panda$core$Int64 $tmp2179;
    panda$core$Int64 $tmp2182;
    panda$core$Int64 $tmp2186;
    panda$core$Int64 $tmp2190;
    panda$core$Bit $tmp2193;
    panda$core$Bit $tmp2194;
    panda$core$Bit $tmp2195;
    org$pandalanguage$pandac$ASTNode* $tmp2196;
    org$pandalanguage$pandac$ASTNode* $tmp2197;
    org$pandalanguage$pandac$ASTNode* $tmp2198;
    panda$core$Int64 $tmp2200;
    panda$collections$ImmutableArray* $tmp2203;
    org$pandalanguage$pandac$ASTNode* $tmp2207;
    org$pandalanguage$pandac$ASTNode* $tmp2213;
    org$pandalanguage$pandac$ASTNode* $tmp2218;
    int $tmp1961;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1965 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1964 = $tmp1965;
        $tmp1963 = $tmp1964;
        result1962 = $tmp1963;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1963));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1964));
        if (((panda$core$Bit) { result1962 == NULL }).value) {
        {
            $tmp1967 = NULL;
            $returnValue1966 = $tmp1967;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1967));
            $tmp1961 = 0;
            goto $l1959;
            $l1968:;
            return $returnValue1966;
        }
        }
        $l1970:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1973 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token1972 = $tmp1973;
            {
                $match$824_131974 = token1972.kind;
                panda$core$Int64$init$builtin_int64(&$tmp1975, 103);
                panda$core$Bit $tmp1976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$824_131974.$rawValue, $tmp1975);
                if ($tmp1976.value) {
                {
                    int $tmp1979;
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp1981, true);
                        panda$core$Bit$wrapper* $tmp1982;
                        $tmp1982 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp1982->value = $tmp1981;
                        $tmp1980 = ((panda$core$Object*) $tmp1982);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp1980);
                        panda$core$Panda$unref$panda$core$Object($tmp1980);
                        panda$collections$Array* $tmp1986 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1986);
                        $tmp1985 = $tmp1986;
                        $tmp1984 = $tmp1985;
                        args1983 = $tmp1984;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1984));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1985));
                        panda$core$Int64$init$builtin_int64(&$tmp1988, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1987, $tmp1988);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1989 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1987);
                        if (((panda$core$Bit) { !$tmp1989.nonnull }).value) {
                        {
                            int $tmp1992;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1996 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1995 = $tmp1996;
                                $tmp1994 = $tmp1995;
                                expr1993 = $tmp1994;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1994));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1995));
                                if (((panda$core$Bit) { expr1993 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp1998 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1997 = $tmp1998;
                                    panda$core$Panda$unref$panda$core$Object($tmp1997);
                                    $tmp1999 = NULL;
                                    $returnValue1966 = $tmp1999;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1999));
                                    $tmp1992 = 0;
                                    goto $l1990;
                                    $l2000:;
                                    $tmp1979 = 0;
                                    goto $l1977;
                                    $l2001:;
                                    $tmp1961 = 1;
                                    goto $l1959;
                                    $l2002:;
                                    return $returnValue1966;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args1983, ((panda$core$Object*) expr1993));
                                $l2004:;
                                panda$core$Int64$init$builtin_int64(&$tmp2008, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2007, $tmp2008);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2009 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2007);
                                bool $tmp2006 = ((panda$core$Bit) { $tmp2009.nonnull }).value;
                                if (!$tmp2006) goto $l2005;
                                {
                                    {
                                        $tmp2010 = expr1993;
                                        org$pandalanguage$pandac$ASTNode* $tmp2013 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp2012 = $tmp2013;
                                        $tmp2011 = $tmp2012;
                                        expr1993 = $tmp2011;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2011));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2012));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2010));
                                    }
                                    if (((panda$core$Bit) { expr1993 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp2015 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp2014 = $tmp2015;
                                        panda$core$Panda$unref$panda$core$Object($tmp2014);
                                        $tmp2016 = NULL;
                                        $returnValue1966 = $tmp2016;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2016));
                                        $tmp1992 = 1;
                                        goto $l1990;
                                        $l2017:;
                                        $tmp1979 = 1;
                                        goto $l1977;
                                        $l2018:;
                                        $tmp1961 = 2;
                                        goto $l1959;
                                        $l2019:;
                                        return $returnValue1966;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args1983, ((panda$core$Object*) expr1993));
                                }
                                goto $l2004;
                                $l2005:;
                                panda$core$Int64$init$builtin_int64(&$tmp2022, 104);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2021, $tmp2022);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2024 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2021, &$s2023);
                                if (((panda$core$Bit) { !$tmp2024.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp2026 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2025 = $tmp2026;
                                    panda$core$Panda$unref$panda$core$Object($tmp2025);
                                    $tmp2027 = NULL;
                                    $returnValue1966 = $tmp2027;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2027));
                                    $tmp1992 = 2;
                                    goto $l1990;
                                    $l2028:;
                                    $tmp1979 = 2;
                                    goto $l1977;
                                    $l2029:;
                                    $tmp1961 = 3;
                                    goto $l1959;
                                    $l2030:;
                                    return $returnValue1966;
                                }
                                }
                            }
                            $tmp1992 = -1;
                            goto $l1990;
                            $l1990:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1993));
                            expr1993 = NULL;
                            switch ($tmp1992) {
                                case 2: goto $l2028;
                                case 0: goto $l2000;
                                case -1: goto $l2032;
                                case 1: goto $l2017;
                            }
                            $l2032:;
                        }
                        }
                        panda$core$Object* $tmp2034 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2033 = $tmp2034;
                        panda$core$Panda$unref$panda$core$Object($tmp2033);
                        {
                            $tmp2035 = result1962;
                            org$pandalanguage$pandac$ASTNode* $tmp2038 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2039, 8);
                            panda$collections$ImmutableArray* $tmp2041 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1983);
                            $tmp2040 = $tmp2041;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2038, $tmp2039, token1972.position, result1962, $tmp2040);
                            $tmp2037 = $tmp2038;
                            $tmp2036 = $tmp2037;
                            result1962 = $tmp2036;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2036));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2037));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2040));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2035));
                        }
                    }
                    $tmp1979 = -1;
                    goto $l1977;
                    $l1977:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1983));
                    args1983 = NULL;
                    switch ($tmp1979) {
                        case 2: goto $l2029;
                        case 0: goto $l2001;
                        case -1: goto $l2042;
                        case 1: goto $l2018;
                    }
                    $l2042:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2043, 101);
                panda$core$Bit $tmp2044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$824_131974.$rawValue, $tmp2043);
                if ($tmp2044.value) {
                {
                    int $tmp2047;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2051 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2050 = $tmp2051;
                        $tmp2049 = $tmp2050;
                        arg2048 = $tmp2049;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2049));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2050));
                        if (((panda$core$Bit) { arg2048 == NULL }).value) {
                        {
                            $tmp2052 = NULL;
                            $returnValue1966 = $tmp2052;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2052));
                            $tmp2047 = 0;
                            goto $l2045;
                            $l2053:;
                            $tmp1961 = 4;
                            goto $l1959;
                            $l2054:;
                            return $returnValue1966;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp2057, 102);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2056, $tmp2057);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2059 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2056, &$s2058);
                        if (((panda$core$Bit) { !$tmp2059.nonnull }).value) {
                        {
                            $tmp2060 = NULL;
                            $returnValue1966 = $tmp2060;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2060));
                            $tmp2047 = 1;
                            goto $l2045;
                            $l2061:;
                            $tmp1961 = 5;
                            goto $l1959;
                            $l2062:;
                            return $returnValue1966;
                        }
                        }
                        {
                            $tmp2064 = result1962;
                            org$pandalanguage$pandac$ASTNode* $tmp2067 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2068, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2070, 101);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2069, $tmp2070);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2067, $tmp2068, token1972.position, result1962, $tmp2069, arg2048);
                            $tmp2066 = $tmp2067;
                            $tmp2065 = $tmp2066;
                            result1962 = $tmp2065;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2065));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2066));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2064));
                        }
                    }
                    $tmp2047 = -1;
                    goto $l2045;
                    $l2045:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2048));
                    arg2048 = NULL;
                    switch ($tmp2047) {
                        case 0: goto $l2053;
                        case 1: goto $l2061;
                        case -1: goto $l2071;
                    }
                    $l2071:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2072, 98);
                panda$core$Bit $tmp2073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$824_131974.$rawValue, $tmp2072);
                if ($tmp2073.value) {
                {
                    int $tmp2076;
                    {
                        memset(&name2077, 0, sizeof(name2077));
                        panda$core$Int64$init$builtin_int64(&$tmp2079, 22);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2078, $tmp2079);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2080 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2078);
                        if (((panda$core$Bit) { $tmp2080.nonnull }).value) {
                        {
                            {
                                $tmp2081 = name2077;
                                $tmp2082 = &$s2083;
                                name2077 = $tmp2082;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2082));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2081));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp2084 = name2077;
                                panda$core$String* $tmp2087 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp2086 = $tmp2087;
                                $tmp2085 = $tmp2086;
                                name2077 = $tmp2085;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2085));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2086));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2084));
                            }
                            if (((panda$core$Bit) { name2077 == NULL }).value) {
                            {
                                $tmp2088 = NULL;
                                $returnValue1966 = $tmp2088;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2088));
                                $tmp2076 = 0;
                                goto $l2074;
                                $l2089:;
                                $tmp1961 = 6;
                                goto $l1959;
                                $l2090:;
                                return $returnValue1966;
                            }
                            }
                        }
                        }
                        {
                            $tmp2092 = result1962;
                            org$pandalanguage$pandac$ASTNode* $tmp2095 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2096, 15);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2095, $tmp2096, token1972.position, result1962, name2077);
                            $tmp2094 = $tmp2095;
                            $tmp2093 = $tmp2094;
                            result1962 = $tmp2093;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2093));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2094));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2092));
                        }
                    }
                    $tmp2076 = -1;
                    goto $l2074;
                    $l2074:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2077));
                    switch ($tmp2076) {
                        case 0: goto $l2089;
                        case -1: goto $l2097;
                    }
                    $l2097:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2098, 89);
                panda$core$Bit $tmp2099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$824_131974.$rawValue, $tmp2098);
                if ($tmp2099.value) {
                {
                    int $tmp2102;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2106 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2105 = $tmp2106;
                        $tmp2104 = $tmp2105;
                        target2103 = $tmp2104;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2104));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
                        if (((panda$core$Bit) { target2103 == NULL }).value) {
                        {
                            $tmp2107 = NULL;
                            $returnValue1966 = $tmp2107;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2107));
                            $tmp2102 = 0;
                            goto $l2100;
                            $l2108:;
                            $tmp1961 = 7;
                            goto $l1959;
                            $l2109:;
                            return $returnValue1966;
                        }
                        }
                        {
                            $tmp2111 = result1962;
                            org$pandalanguage$pandac$ASTNode* $tmp2114 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2115, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2117, 89);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2116, $tmp2117);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2114, $tmp2115, token1972.position, result1962, $tmp2116, target2103);
                            $tmp2113 = $tmp2114;
                            $tmp2112 = $tmp2113;
                            result1962 = $tmp2112;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2112));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2111));
                        }
                    }
                    $tmp2102 = -1;
                    goto $l2100;
                    $l2100:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2103));
                    target2103 = NULL;
                    switch ($tmp2102) {
                        case -1: goto $l2118;
                        case 0: goto $l2108;
                    }
                    $l2118:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2119, 62);
                panda$core$Bit $tmp2120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$824_131974.$rawValue, $tmp2119);
                if ($tmp2120.value) {
                {
                    int $tmp2123;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1972);
                        panda$core$String* $tmp2127 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result1962);
                        $tmp2126 = $tmp2127;
                        $tmp2125 = $tmp2126;
                        name2124 = $tmp2125;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2125));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2126));
                        if (((panda$core$Bit) { name2124 != NULL }).value) {
                        {
                            int $tmp2130;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp2134 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp2134);
                                $tmp2133 = $tmp2134;
                                $tmp2132 = $tmp2133;
                                types2131 = $tmp2132;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2132));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2133));
                                panda$core$Bit$init$builtin_bit(&$tmp2138, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2139 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2138);
                                $tmp2137 = $tmp2139;
                                $tmp2136 = $tmp2137;
                                t2135 = $tmp2136;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2136));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2137));
                                if (((panda$core$Bit) { t2135 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2140 = result1962;
                                    $returnValue1966 = $tmp2140;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2140));
                                    $tmp2130 = 0;
                                    goto $l2128;
                                    $l2141:;
                                    $tmp2123 = 0;
                                    goto $l2121;
                                    $l2142:;
                                    $tmp1961 = 8;
                                    goto $l1959;
                                    $l2143:;
                                    return $returnValue1966;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types2131, ((panda$core$Object*) t2135));
                                $l2145:;
                                panda$core$Int64$init$builtin_int64(&$tmp2149, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2148, $tmp2149);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2150 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2148);
                                bool $tmp2147 = ((panda$core$Bit) { $tmp2150.nonnull }).value;
                                if (!$tmp2147) goto $l2146;
                                {
                                    {
                                        $tmp2151 = t2135;
                                        panda$core$Bit$init$builtin_bit(&$tmp2154, false);
                                        org$pandalanguage$pandac$ASTNode* $tmp2155 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2154);
                                        $tmp2153 = $tmp2155;
                                        $tmp2152 = $tmp2153;
                                        t2135 = $tmp2152;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2152));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2153));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2151));
                                    }
                                    if (((panda$core$Bit) { t2135 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp2156 = result1962;
                                        $returnValue1966 = $tmp2156;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2156));
                                        $tmp2130 = 1;
                                        goto $l2128;
                                        $l2157:;
                                        $tmp2123 = 1;
                                        goto $l2121;
                                        $l2158:;
                                        $tmp1961 = 9;
                                        goto $l1959;
                                        $l2159:;
                                        return $returnValue1966;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types2131, ((panda$core$Object*) t2135));
                                }
                                goto $l2145;
                                $l2146:;
                                panda$core$Int64$init$builtin_int64(&$tmp2162, 63);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2161, $tmp2162);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2164 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2161, &$s2163);
                                if (((panda$core$Bit) { !$tmp2164.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2165 = result1962;
                                    $returnValue1966 = $tmp2165;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2165));
                                    $tmp2130 = 2;
                                    goto $l2128;
                                    $l2166:;
                                    $tmp2123 = 2;
                                    goto $l2121;
                                    $l2167:;
                                    $tmp1961 = 10;
                                    goto $l1959;
                                    $l2168:;
                                    return $returnValue1966;
                                }
                                }
                                memset(&shouldAccept2170, 0, sizeof(shouldAccept2170));
                                panda$core$Int64$init$builtin_int64(&$tmp2172, 0);
                                panda$core$Object* $tmp2173 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2172);
                                $tmp2171 = $tmp2173;
                                panda$core$Panda$unref$panda$core$Object($tmp2171);
                                if (((panda$core$Bit$wrapper*) $tmp2171)->value.value) {
                                {
                                    {
                                        org$pandalanguage$pandac$parser$Token $tmp2175 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                                        $match$929_292174 = $tmp2175.kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2179, 98);
                                        panda$core$Bit $tmp2180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$929_292174.$rawValue, $tmp2179);
                                        bool $tmp2178 = $tmp2180.value;
                                        if ($tmp2178) goto $l2181;
                                        panda$core$Int64$init$builtin_int64(&$tmp2182, 103);
                                        panda$core$Bit $tmp2183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$929_292174.$rawValue, $tmp2182);
                                        $tmp2178 = $tmp2183.value;
                                        $l2181:;
                                        panda$core$Bit $tmp2184 = { $tmp2178 };
                                        bool $tmp2177 = $tmp2184.value;
                                        if ($tmp2177) goto $l2185;
                                        panda$core$Int64$init$builtin_int64(&$tmp2186, 105);
                                        panda$core$Bit $tmp2187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$929_292174.$rawValue, $tmp2186);
                                        $tmp2177 = $tmp2187.value;
                                        $l2185:;
                                        panda$core$Bit $tmp2188 = { $tmp2177 };
                                        bool $tmp2176 = $tmp2188.value;
                                        if ($tmp2176) goto $l2189;
                                        panda$core$Int64$init$builtin_int64(&$tmp2190, 89);
                                        panda$core$Bit $tmp2191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$929_292174.$rawValue, $tmp2190);
                                        $tmp2176 = $tmp2191.value;
                                        $l2189:;
                                        panda$core$Bit $tmp2192 = { $tmp2176 };
                                        if ($tmp2192.value) {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2193, true);
                                            shouldAccept2170 = $tmp2193;
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2194, false);
                                            shouldAccept2170 = $tmp2194;
                                        }
                                        }
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2195, true);
                                    shouldAccept2170 = $tmp2195;
                                }
                                }
                                if (shouldAccept2170.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp2196 = result1962;
                                        org$pandalanguage$pandac$ASTNode* $tmp2199 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        panda$core$Int64$init$builtin_int64(&$tmp2200, 19);
                                        org$pandalanguage$pandac$Position $tmp2202 = (($fn2201) result1962->$class->vtable[2])(result1962);
                                        panda$collections$ImmutableArray* $tmp2204 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types2131);
                                        $tmp2203 = $tmp2204;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2199, $tmp2200, $tmp2202, name2124, $tmp2203);
                                        $tmp2198 = $tmp2199;
                                        $tmp2197 = $tmp2198;
                                        result1962 = $tmp2197;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2197));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2198));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2203));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2196));
                                    }
                                    $tmp2130 = 3;
                                    goto $l2128;
                                    $l2205:;
                                    $tmp2123 = 3;
                                    goto $l2121;
                                    $l2206:;
                                    goto $l1970;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2207 = result1962;
                                    $returnValue1966 = $tmp2207;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2207));
                                    $tmp2130 = 4;
                                    goto $l2128;
                                    $l2208:;
                                    $tmp2123 = 4;
                                    goto $l2121;
                                    $l2209:;
                                    $tmp1961 = 11;
                                    goto $l1959;
                                    $l2210:;
                                    return $returnValue1966;
                                }
                                }
                            }
                            $tmp2130 = -1;
                            goto $l2128;
                            $l2128:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2135));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types2131));
                            types2131 = NULL;
                            t2135 = NULL;
                            switch ($tmp2130) {
                                case 4: goto $l2208;
                                case -1: goto $l2212;
                                case 1: goto $l2157;
                                case 2: goto $l2166;
                                case 0: goto $l2141;
                                case 3: goto $l2205;
                            }
                            $l2212:;
                        }
                        }
                        $tmp2213 = result1962;
                        $returnValue1966 = $tmp2213;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2213));
                        $tmp2123 = 5;
                        goto $l2121;
                        $l2214:;
                        $tmp1961 = 12;
                        goto $l1959;
                        $l2215:;
                        return $returnValue1966;
                    }
                    $l2121:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2124));
                    name2124 = NULL;
                    switch ($tmp2123) {
                        case 5: goto $l2214;
                        case 3: goto $l2206;
                        case 4: goto $l2209;
                        case 2: goto $l2167;
                        case 1: goto $l2158;
                        case 0: goto $l2142;
                    }
                    $l2217:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1972);
                    $tmp2218 = result1962;
                    $returnValue1966 = $tmp2218;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2218));
                    $tmp1961 = 13;
                    goto $l1959;
                    $l2219:;
                    return $returnValue1966;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l1971:;
    }
    $tmp1961 = -1;
    goto $l1959;
    $l1959:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1962));
    result1962 = NULL;
    switch ($tmp1961) {
        case 13: goto $l2219;
        case -1: goto $l2221;
        case 10: goto $l2168;
        case 4: goto $l2054;
        case 8: goto $l2143;
        case 1: goto $l2002;
        case 12: goto $l2215;
        case 2: goto $l2019;
        case 3: goto $l2030;
        case 11: goto $l2210;
        case 6: goto $l2090;
        case 9: goto $l2159;
        case 0: goto $l1968;
        case 7: goto $l2109;
        case 5: goto $l2062;
    }
    $l2221:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2225 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2226;
    org$pandalanguage$pandac$ASTNode* $tmp2227;
    org$pandalanguage$pandac$ASTNode* $returnValue2229;
    org$pandalanguage$pandac$ASTNode* $tmp2230;
    org$pandalanguage$pandac$parser$Token$nullable op2238;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2239;
    panda$core$Int64 $tmp2240;
    org$pandalanguage$pandac$ASTNode* next2243 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2244;
    org$pandalanguage$pandac$ASTNode* $tmp2245;
    org$pandalanguage$pandac$ASTNode* $tmp2247;
    org$pandalanguage$pandac$ASTNode* $tmp2251;
    org$pandalanguage$pandac$ASTNode* $tmp2252;
    org$pandalanguage$pandac$ASTNode* $tmp2253;
    panda$core$Int64 $tmp2255;
    org$pandalanguage$pandac$ASTNode* $tmp2257;
    int $tmp2224;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2228 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2227 = $tmp2228;
        $tmp2226 = $tmp2227;
        result2225 = $tmp2226;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2226));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2227));
        if (((panda$core$Bit) { result2225 == NULL }).value) {
        {
            $tmp2230 = NULL;
            $returnValue2229 = $tmp2230;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2230));
            $tmp2224 = 0;
            goto $l2222;
            $l2231:;
            return $returnValue2229;
        }
        }
        $l2233:;
        while (true) {
        {
            int $tmp2237;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2240, 57);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2239, $tmp2240);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2241 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2239);
                op2238 = $tmp2241;
                if (((panda$core$Bit) { !op2238.nonnull }).value) {
                {
                    $tmp2237 = 0;
                    goto $l2235;
                    $l2242:;
                    goto $l2234;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2246 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2245 = $tmp2246;
                $tmp2244 = $tmp2245;
                next2243 = $tmp2244;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2244));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2245));
                if (((panda$core$Bit) { next2243 == NULL }).value) {
                {
                    $tmp2247 = NULL;
                    $returnValue2229 = $tmp2247;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2247));
                    $tmp2237 = 1;
                    goto $l2235;
                    $l2248:;
                    $tmp2224 = 1;
                    goto $l2222;
                    $l2249:;
                    return $returnValue2229;
                }
                }
                {
                    $tmp2251 = result2225;
                    org$pandalanguage$pandac$ASTNode* $tmp2254 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2255, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2254, $tmp2255, ((org$pandalanguage$pandac$parser$Token) op2238.value).position, result2225, ((org$pandalanguage$pandac$parser$Token) op2238.value).kind, next2243);
                    $tmp2253 = $tmp2254;
                    $tmp2252 = $tmp2253;
                    result2225 = $tmp2252;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2252));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2253));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2251));
                }
            }
            $tmp2237 = -1;
            goto $l2235;
            $l2235:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2243));
            next2243 = NULL;
            switch ($tmp2237) {
                case 1: goto $l2248;
                case 0: goto $l2242;
                case -1: goto $l2256;
            }
            $l2256:;
        }
        }
        $l2234:;
        $tmp2257 = result2225;
        $returnValue2229 = $tmp2257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2257));
        $tmp2224 = 2;
        goto $l2222;
        $l2258:;
        return $returnValue2229;
    }
    $l2222:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2225));
    result2225 = NULL;
    switch ($tmp2224) {
        case 2: goto $l2258;
        case 0: goto $l2231;
        case 1: goto $l2249;
    }
    $l2260:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op2261;
    org$pandalanguage$pandac$parser$Token$Kind $match$985_92263;
    panda$core$Int64 $tmp2266;
    panda$core$Int64 $tmp2269;
    panda$core$Int64 $tmp2273;
    org$pandalanguage$pandac$ASTNode* base2279 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2280;
    org$pandalanguage$pandac$ASTNode* $tmp2281;
    org$pandalanguage$pandac$ASTNode* $returnValue2283;
    org$pandalanguage$pandac$ASTNode* $tmp2284;
    org$pandalanguage$pandac$ASTNode* $tmp2287;
    org$pandalanguage$pandac$ASTNode* $tmp2288;
    panda$core$Int64 $tmp2290;
    org$pandalanguage$pandac$ASTNode* $tmp2294;
    org$pandalanguage$pandac$ASTNode* $tmp2295;
    org$pandalanguage$pandac$parser$Token $tmp2262 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op2261 = $tmp2262;
    {
        $match$985_92263 = op2261.kind;
        panda$core$Int64$init$builtin_int64(&$tmp2266, 52);
        panda$core$Bit $tmp2267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$985_92263.$rawValue, $tmp2266);
        bool $tmp2265 = $tmp2267.value;
        if ($tmp2265) goto $l2268;
        panda$core$Int64$init$builtin_int64(&$tmp2269, 49);
        panda$core$Bit $tmp2270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$985_92263.$rawValue, $tmp2269);
        $tmp2265 = $tmp2270.value;
        $l2268:;
        panda$core$Bit $tmp2271 = { $tmp2265 };
        bool $tmp2264 = $tmp2271.value;
        if ($tmp2264) goto $l2272;
        panda$core$Int64$init$builtin_int64(&$tmp2273, 50);
        panda$core$Bit $tmp2274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$985_92263.$rawValue, $tmp2273);
        $tmp2264 = $tmp2274.value;
        $l2272:;
        panda$core$Bit $tmp2275 = { $tmp2264 };
        if ($tmp2275.value) {
        {
            int $tmp2278;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2282 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2281 = $tmp2282;
                $tmp2280 = $tmp2281;
                base2279 = $tmp2280;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2280));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2281));
                if (((panda$core$Bit) { base2279 == NULL }).value) {
                {
                    $tmp2284 = NULL;
                    $returnValue2283 = $tmp2284;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2284));
                    $tmp2278 = 0;
                    goto $l2276;
                    $l2285:;
                    return $returnValue2283;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2289 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2290, 32);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2289, $tmp2290, op2261.position, op2261.kind, base2279);
                $tmp2288 = $tmp2289;
                $tmp2287 = $tmp2288;
                $returnValue2283 = $tmp2287;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2287));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2288));
                $tmp2278 = 1;
                goto $l2276;
                $l2291:;
                return $returnValue2283;
            }
            $l2276:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base2279));
            base2279 = NULL;
            switch ($tmp2278) {
                case 0: goto $l2285;
                case 1: goto $l2291;
            }
            $l2293:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2261);
            org$pandalanguage$pandac$ASTNode* $tmp2296 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2295 = $tmp2296;
            $tmp2294 = $tmp2295;
            $returnValue2283 = $tmp2294;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2294));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2295));
            return $returnValue2283;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2301 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2302;
    org$pandalanguage$pandac$ASTNode* $tmp2303;
    org$pandalanguage$pandac$ASTNode* $returnValue2305;
    org$pandalanguage$pandac$ASTNode* $tmp2306;
    org$pandalanguage$pandac$parser$Token op2311;
    org$pandalanguage$pandac$parser$Token$Kind $match$1011_132313;
    panda$core$Int64 $tmp2320;
    panda$core$Int64 $tmp2323;
    panda$core$Int64 $tmp2327;
    panda$core$Int64 $tmp2331;
    panda$core$Int64 $tmp2335;
    panda$core$Int64 $tmp2339;
    panda$core$Int64 $tmp2343;
    org$pandalanguage$pandac$ASTNode* next2349 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2350;
    org$pandalanguage$pandac$ASTNode* $tmp2351;
    org$pandalanguage$pandac$ASTNode* $tmp2353;
    org$pandalanguage$pandac$ASTNode* $tmp2357;
    org$pandalanguage$pandac$ASTNode* $tmp2358;
    org$pandalanguage$pandac$ASTNode* $tmp2359;
    panda$core$Int64 $tmp2361;
    panda$core$Int64 $tmp2363;
    org$pandalanguage$pandac$parser$Token nextToken2365;
    panda$core$Int64 $tmp2367;
    org$pandalanguage$pandac$ASTNode* next2372 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2373;
    org$pandalanguage$pandac$ASTNode* $tmp2374;
    org$pandalanguage$pandac$ASTNode* $tmp2376;
    org$pandalanguage$pandac$ASTNode* $tmp2380;
    org$pandalanguage$pandac$ASTNode* $tmp2381;
    org$pandalanguage$pandac$ASTNode* $tmp2382;
    panda$core$Int64 $tmp2384;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2385;
    panda$core$Int64 $tmp2386;
    org$pandalanguage$pandac$ASTNode* $tmp2388;
    org$pandalanguage$pandac$ASTNode* $tmp2391;
    int $tmp2300;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2304 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2303 = $tmp2304;
        $tmp2302 = $tmp2303;
        result2301 = $tmp2302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2303));
        if (((panda$core$Bit) { result2301 == NULL }).value) {
        {
            $tmp2306 = NULL;
            $returnValue2305 = $tmp2306;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2306));
            $tmp2300 = 0;
            goto $l2298;
            $l2307:;
            return $returnValue2305;
        }
        }
        $l2309:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2312 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2311 = $tmp2312;
            {
                $match$1011_132313 = op2311.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2320, 53);
                panda$core$Bit $tmp2321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1011_132313.$rawValue, $tmp2320);
                bool $tmp2319 = $tmp2321.value;
                if ($tmp2319) goto $l2322;
                panda$core$Int64$init$builtin_int64(&$tmp2323, 54);
                panda$core$Bit $tmp2324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1011_132313.$rawValue, $tmp2323);
                $tmp2319 = $tmp2324.value;
                $l2322:;
                panda$core$Bit $tmp2325 = { $tmp2319 };
                bool $tmp2318 = $tmp2325.value;
                if ($tmp2318) goto $l2326;
                panda$core$Int64$init$builtin_int64(&$tmp2327, 55);
                panda$core$Bit $tmp2328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1011_132313.$rawValue, $tmp2327);
                $tmp2318 = $tmp2328.value;
                $l2326:;
                panda$core$Bit $tmp2329 = { $tmp2318 };
                bool $tmp2317 = $tmp2329.value;
                if ($tmp2317) goto $l2330;
                panda$core$Int64$init$builtin_int64(&$tmp2331, 56);
                panda$core$Bit $tmp2332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1011_132313.$rawValue, $tmp2331);
                $tmp2317 = $tmp2332.value;
                $l2330:;
                panda$core$Bit $tmp2333 = { $tmp2317 };
                bool $tmp2316 = $tmp2333.value;
                if ($tmp2316) goto $l2334;
                panda$core$Int64$init$builtin_int64(&$tmp2335, 72);
                panda$core$Bit $tmp2336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1011_132313.$rawValue, $tmp2335);
                $tmp2316 = $tmp2336.value;
                $l2334:;
                panda$core$Bit $tmp2337 = { $tmp2316 };
                bool $tmp2315 = $tmp2337.value;
                if ($tmp2315) goto $l2338;
                panda$core$Int64$init$builtin_int64(&$tmp2339, 67);
                panda$core$Bit $tmp2340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1011_132313.$rawValue, $tmp2339);
                $tmp2315 = $tmp2340.value;
                $l2338:;
                panda$core$Bit $tmp2341 = { $tmp2315 };
                bool $tmp2314 = $tmp2341.value;
                if ($tmp2314) goto $l2342;
                panda$core$Int64$init$builtin_int64(&$tmp2343, 69);
                panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1011_132313.$rawValue, $tmp2343);
                $tmp2314 = $tmp2344.value;
                $l2342:;
                panda$core$Bit $tmp2345 = { $tmp2314 };
                if ($tmp2345.value) {
                {
                    int $tmp2348;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2352 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2351 = $tmp2352;
                        $tmp2350 = $tmp2351;
                        next2349 = $tmp2350;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2350));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2351));
                        if (((panda$core$Bit) { next2349 == NULL }).value) {
                        {
                            $tmp2353 = NULL;
                            $returnValue2305 = $tmp2353;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2353));
                            $tmp2348 = 0;
                            goto $l2346;
                            $l2354:;
                            $tmp2300 = 1;
                            goto $l2298;
                            $l2355:;
                            return $returnValue2305;
                        }
                        }
                        {
                            $tmp2357 = result2301;
                            org$pandalanguage$pandac$ASTNode* $tmp2360 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2361, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2360, $tmp2361, op2311.position, result2301, op2311.kind, next2349);
                            $tmp2359 = $tmp2360;
                            $tmp2358 = $tmp2359;
                            result2301 = $tmp2358;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2358));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2359));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2357));
                        }
                    }
                    $tmp2348 = -1;
                    goto $l2346;
                    $l2346:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2349));
                    next2349 = NULL;
                    switch ($tmp2348) {
                        case 0: goto $l2354;
                        case -1: goto $l2362;
                    }
                    $l2362:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2363, 63);
                panda$core$Bit $tmp2364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1011_132313.$rawValue, $tmp2363);
                if ($tmp2364.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2366 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken2365 = $tmp2366;
                    panda$core$Int64$init$builtin_int64(&$tmp2367, 63);
                    panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken2365.kind.$rawValue, $tmp2367);
                    if ($tmp2368.value) {
                    {
                        int $tmp2371;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2375 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2374 = $tmp2375;
                            $tmp2373 = $tmp2374;
                            next2372 = $tmp2373;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2373));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2374));
                            if (((panda$core$Bit) { next2372 == NULL }).value) {
                            {
                                $tmp2376 = NULL;
                                $returnValue2305 = $tmp2376;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2376));
                                $tmp2371 = 0;
                                goto $l2369;
                                $l2377:;
                                $tmp2300 = 2;
                                goto $l2298;
                                $l2378:;
                                return $returnValue2305;
                            }
                            }
                            {
                                $tmp2380 = result2301;
                                org$pandalanguage$pandac$ASTNode* $tmp2383 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp2384, 4);
                                panda$core$Int64$init$builtin_int64(&$tmp2386, 1);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2385, $tmp2386);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2383, $tmp2384, op2311.position, result2301, $tmp2385, next2372);
                                $tmp2382 = $tmp2383;
                                $tmp2381 = $tmp2382;
                                result2301 = $tmp2381;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2381));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2382));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2380));
                            }
                        }
                        $tmp2371 = -1;
                        goto $l2369;
                        $l2369:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2372));
                        next2372 = NULL;
                        switch ($tmp2371) {
                            case 0: goto $l2377;
                            case -1: goto $l2387;
                        }
                        $l2387:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken2365);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2311);
                        $tmp2388 = result2301;
                        $returnValue2305 = $tmp2388;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2388));
                        $tmp2300 = 3;
                        goto $l2298;
                        $l2389:;
                        return $returnValue2305;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2311);
                    $tmp2391 = result2301;
                    $returnValue2305 = $tmp2391;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2391));
                    $tmp2300 = 4;
                    goto $l2298;
                    $l2392:;
                    return $returnValue2305;
                }
                }
                }
            }
        }
        }
        $l2310:;
    }
    $tmp2300 = -1;
    goto $l2298;
    $l2298:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2301));
    result2301 = NULL;
    switch ($tmp2300) {
        case 4: goto $l2392;
        case -1: goto $l2394;
        case 3: goto $l2389;
        case 2: goto $l2378;
        case 0: goto $l2307;
        case 1: goto $l2355;
    }
    $l2394:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2398 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2399;
    org$pandalanguage$pandac$ASTNode* $tmp2400;
    org$pandalanguage$pandac$ASTNode* $returnValue2402;
    org$pandalanguage$pandac$ASTNode* $tmp2403;
    org$pandalanguage$pandac$parser$Token op2408;
    org$pandalanguage$pandac$parser$Token$Kind $match$1052_132410;
    panda$core$Int64 $tmp2413;
    panda$core$Int64 $tmp2416;
    panda$core$Int64 $tmp2420;
    org$pandalanguage$pandac$ASTNode* next2426 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2427;
    org$pandalanguage$pandac$ASTNode* $tmp2428;
    org$pandalanguage$pandac$ASTNode* $tmp2430;
    org$pandalanguage$pandac$ASTNode* $tmp2434;
    org$pandalanguage$pandac$ASTNode* $tmp2435;
    org$pandalanguage$pandac$ASTNode* $tmp2436;
    panda$core$Int64 $tmp2438;
    org$pandalanguage$pandac$ASTNode* $tmp2440;
    int $tmp2397;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2401 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2400 = $tmp2401;
        $tmp2399 = $tmp2400;
        result2398 = $tmp2399;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2399));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2400));
        if (((panda$core$Bit) { result2398 == NULL }).value) {
        {
            $tmp2403 = NULL;
            $returnValue2402 = $tmp2403;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2403));
            $tmp2397 = 0;
            goto $l2395;
            $l2404:;
            return $returnValue2402;
        }
        }
        $l2406:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2409 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2408 = $tmp2409;
            {
                $match$1052_132410 = op2408.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2413, 51);
                panda$core$Bit $tmp2414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1052_132410.$rawValue, $tmp2413);
                bool $tmp2412 = $tmp2414.value;
                if ($tmp2412) goto $l2415;
                panda$core$Int64$init$builtin_int64(&$tmp2416, 52);
                panda$core$Bit $tmp2417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1052_132410.$rawValue, $tmp2416);
                $tmp2412 = $tmp2417.value;
                $l2415:;
                panda$core$Bit $tmp2418 = { $tmp2412 };
                bool $tmp2411 = $tmp2418.value;
                if ($tmp2411) goto $l2419;
                panda$core$Int64$init$builtin_int64(&$tmp2420, 71);
                panda$core$Bit $tmp2421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1052_132410.$rawValue, $tmp2420);
                $tmp2411 = $tmp2421.value;
                $l2419:;
                panda$core$Bit $tmp2422 = { $tmp2411 };
                if ($tmp2422.value) {
                {
                    int $tmp2425;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2429 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2428 = $tmp2429;
                        $tmp2427 = $tmp2428;
                        next2426 = $tmp2427;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2427));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2428));
                        if (((panda$core$Bit) { next2426 == NULL }).value) {
                        {
                            $tmp2430 = NULL;
                            $returnValue2402 = $tmp2430;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2430));
                            $tmp2425 = 0;
                            goto $l2423;
                            $l2431:;
                            $tmp2397 = 1;
                            goto $l2395;
                            $l2432:;
                            return $returnValue2402;
                        }
                        }
                        {
                            $tmp2434 = result2398;
                            org$pandalanguage$pandac$ASTNode* $tmp2437 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2438, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2437, $tmp2438, op2408.position, result2398, op2408.kind, next2426);
                            $tmp2436 = $tmp2437;
                            $tmp2435 = $tmp2436;
                            result2398 = $tmp2435;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2435));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2436));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2434));
                        }
                    }
                    $tmp2425 = -1;
                    goto $l2423;
                    $l2423:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2426));
                    next2426 = NULL;
                    switch ($tmp2425) {
                        case -1: goto $l2439;
                        case 0: goto $l2431;
                    }
                    $l2439:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2408);
                    $tmp2440 = result2398;
                    $returnValue2402 = $tmp2440;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2440));
                    $tmp2397 = 2;
                    goto $l2395;
                    $l2441:;
                    return $returnValue2402;
                }
                }
            }
        }
        }
        $l2407:;
    }
    $tmp2397 = -1;
    goto $l2395;
    $l2395:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2398));
    result2398 = NULL;
    switch ($tmp2397) {
        case -1: goto $l2443;
        case 2: goto $l2441;
        case 0: goto $l2404;
        case 1: goto $l2432;
    }
    $l2443:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2447 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$1072_92448;
    panda$core$Int64 $tmp2451;
    panda$core$Int64 $tmp2454;
    org$pandalanguage$pandac$ASTNode* $tmp2457;
    org$pandalanguage$pandac$ASTNode* $tmp2458;
    org$pandalanguage$pandac$ASTNode* $tmp2459;
    org$pandalanguage$pandac$ASTNode* $tmp2460;
    org$pandalanguage$pandac$ASTNode* $tmp2461;
    org$pandalanguage$pandac$ASTNode* $returnValue2463;
    org$pandalanguage$pandac$ASTNode* $tmp2464;
    org$pandalanguage$pandac$parser$Token op2467;
    org$pandalanguage$pandac$parser$Token$Kind $match$1082_92469;
    panda$core$Int64 $tmp2471;
    panda$core$Int64 $tmp2474;
    org$pandalanguage$pandac$parser$Token next2480;
    org$pandalanguage$pandac$ASTNode* right2482 = NULL;
    panda$core$Int64 $tmp2485;
    panda$core$Int64 $tmp2488;
    panda$core$Int64 $tmp2492;
    org$pandalanguage$pandac$ASTNode* $tmp2495;
    org$pandalanguage$pandac$ASTNode* $tmp2496;
    org$pandalanguage$pandac$ASTNode* $tmp2497;
    org$pandalanguage$pandac$ASTNode* $tmp2499;
    org$pandalanguage$pandac$ASTNode* $tmp2503;
    org$pandalanguage$pandac$ASTNode* $tmp2504;
    org$pandalanguage$pandac$ASTNode* step2505 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2506;
    panda$core$Int64 $tmp2507;
    org$pandalanguage$pandac$ASTNode* $tmp2509;
    org$pandalanguage$pandac$ASTNode* $tmp2510;
    org$pandalanguage$pandac$ASTNode* $tmp2511;
    org$pandalanguage$pandac$ASTNode* $tmp2513;
    org$pandalanguage$pandac$ASTNode* $tmp2517;
    org$pandalanguage$pandac$ASTNode* $tmp2518;
    org$pandalanguage$pandac$ASTNode* $tmp2519;
    org$pandalanguage$pandac$ASTNode* $tmp2520;
    panda$core$Int64 $tmp2522;
    panda$core$Int64 $tmp2523;
    org$pandalanguage$pandac$ASTNode* $tmp2529;
    int $tmp2446;
    {
        memset(&result2447, 0, sizeof(result2447));
        {
            org$pandalanguage$pandac$parser$Token $tmp2449 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1072_92448 = $tmp2449.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2451, 97);
            panda$core$Bit $tmp2452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1072_92448.$rawValue, $tmp2451);
            bool $tmp2450 = $tmp2452.value;
            if ($tmp2450) goto $l2453;
            panda$core$Int64$init$builtin_int64(&$tmp2454, 96);
            panda$core$Bit $tmp2455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1072_92448.$rawValue, $tmp2454);
            $tmp2450 = $tmp2455.value;
            $l2453:;
            panda$core$Bit $tmp2456 = { $tmp2450 };
            if ($tmp2456.value) {
            {
                {
                    $tmp2457 = result2447;
                    $tmp2458 = NULL;
                    result2447 = $tmp2458;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2458));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2457));
                }
            }
            }
            else {
            {
                {
                    $tmp2459 = result2447;
                    org$pandalanguage$pandac$ASTNode* $tmp2462 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2461 = $tmp2462;
                    $tmp2460 = $tmp2461;
                    result2447 = $tmp2460;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2460));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2461));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2459));
                }
                if (((panda$core$Bit) { result2447 == NULL }).value) {
                {
                    $tmp2464 = NULL;
                    $returnValue2463 = $tmp2464;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2464));
                    $tmp2446 = 0;
                    goto $l2444;
                    $l2465:;
                    return $returnValue2463;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp2468 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op2467 = $tmp2468;
        {
            $match$1082_92469 = op2467.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2471, 97);
            panda$core$Bit $tmp2472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1082_92469.$rawValue, $tmp2471);
            bool $tmp2470 = $tmp2472.value;
            if ($tmp2470) goto $l2473;
            panda$core$Int64$init$builtin_int64(&$tmp2474, 96);
            panda$core$Bit $tmp2475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1082_92469.$rawValue, $tmp2474);
            $tmp2470 = $tmp2475.value;
            $l2473:;
            panda$core$Bit $tmp2476 = { $tmp2470 };
            if ($tmp2476.value) {
            {
                int $tmp2479;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2481 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next2480 = $tmp2481;
                    memset(&right2482, 0, sizeof(right2482));
                    panda$core$Int64$init$builtin_int64(&$tmp2485, 102);
                    panda$core$Bit $tmp2486 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2480.kind.$rawValue, $tmp2485);
                    bool $tmp2484 = $tmp2486.value;
                    if (!$tmp2484) goto $l2487;
                    panda$core$Int64$init$builtin_int64(&$tmp2488, 104);
                    panda$core$Bit $tmp2489 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2480.kind.$rawValue, $tmp2488);
                    $tmp2484 = $tmp2489.value;
                    $l2487:;
                    panda$core$Bit $tmp2490 = { $tmp2484 };
                    bool $tmp2483 = $tmp2490.value;
                    if (!$tmp2483) goto $l2491;
                    panda$core$Int64$init$builtin_int64(&$tmp2492, 33);
                    panda$core$Bit $tmp2493 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2480.kind.$rawValue, $tmp2492);
                    $tmp2483 = $tmp2493.value;
                    $l2491:;
                    panda$core$Bit $tmp2494 = { $tmp2483 };
                    if ($tmp2494.value) {
                    {
                        {
                            $tmp2495 = right2482;
                            org$pandalanguage$pandac$ASTNode* $tmp2498 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2497 = $tmp2498;
                            $tmp2496 = $tmp2497;
                            right2482 = $tmp2496;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2496));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2495));
                        }
                        if (((panda$core$Bit) { right2482 == NULL }).value) {
                        {
                            $tmp2499 = NULL;
                            $returnValue2463 = $tmp2499;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2499));
                            $tmp2479 = 0;
                            goto $l2477;
                            $l2500:;
                            $tmp2446 = 1;
                            goto $l2444;
                            $l2501:;
                            return $returnValue2463;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2503 = right2482;
                            $tmp2504 = NULL;
                            right2482 = $tmp2504;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2504));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2503));
                        }
                    }
                    }
                    memset(&step2505, 0, sizeof(step2505));
                    panda$core$Int64$init$builtin_int64(&$tmp2507, 33);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2506, $tmp2507);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2508 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2506);
                    if (((panda$core$Bit) { $tmp2508.nonnull }).value) {
                    {
                        {
                            $tmp2509 = step2505;
                            org$pandalanguage$pandac$ASTNode* $tmp2512 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2511 = $tmp2512;
                            $tmp2510 = $tmp2511;
                            step2505 = $tmp2510;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2510));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2511));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2509));
                        }
                        if (((panda$core$Bit) { step2505 == NULL }).value) {
                        {
                            $tmp2513 = NULL;
                            $returnValue2463 = $tmp2513;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2513));
                            $tmp2479 = 1;
                            goto $l2477;
                            $l2514:;
                            $tmp2446 = 2;
                            goto $l2444;
                            $l2515:;
                            return $returnValue2463;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2517 = step2505;
                            $tmp2518 = NULL;
                            step2505 = $tmp2518;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2518));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2517));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2521 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2522, 33);
                    panda$core$Int64$init$builtin_int64(&$tmp2523, 96);
                    panda$core$Bit $tmp2524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2467.kind.$rawValue, $tmp2523);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp2521, $tmp2522, op2467.position, result2447, right2482, $tmp2524, step2505);
                    $tmp2520 = $tmp2521;
                    $tmp2519 = $tmp2520;
                    $returnValue2463 = $tmp2519;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2519));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2520));
                    $tmp2479 = 2;
                    goto $l2477;
                    $l2525:;
                    $tmp2446 = 3;
                    goto $l2444;
                    $l2526:;
                    return $returnValue2463;
                }
                $l2477:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2505));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right2482));
                switch ($tmp2479) {
                    case 1: goto $l2514;
                    case 2: goto $l2525;
                    case 0: goto $l2500;
                }
                $l2528:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2467);
                $tmp2529 = result2447;
                $returnValue2463 = $tmp2529;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2529));
                $tmp2446 = 4;
                goto $l2444;
                $l2530:;
                return $returnValue2463;
            }
            }
        }
    }
    $tmp2446 = -1;
    goto $l2444;
    $l2444:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2447));
    switch ($tmp2446) {
        case -1: goto $l2532;
        case 4: goto $l2530;
        case 0: goto $l2465;
        case 3: goto $l2526;
        case 2: goto $l2515;
        case 1: goto $l2501;
    }
    $l2532:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2536 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2537;
    org$pandalanguage$pandac$ASTNode* $tmp2538;
    org$pandalanguage$pandac$ASTNode* $returnValue2540;
    org$pandalanguage$pandac$ASTNode* $tmp2541;
    org$pandalanguage$pandac$parser$Token op2546;
    org$pandalanguage$pandac$parser$Token$Kind $match$1125_132548;
    panda$core$Int64 $tmp2556;
    panda$core$Int64 $tmp2559;
    panda$core$Int64 $tmp2563;
    panda$core$Int64 $tmp2567;
    panda$core$Int64 $tmp2571;
    panda$core$Int64 $tmp2575;
    panda$core$Int64 $tmp2579;
    panda$core$Int64 $tmp2583;
    org$pandalanguage$pandac$ASTNode* next2589 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2590;
    org$pandalanguage$pandac$ASTNode* $tmp2591;
    org$pandalanguage$pandac$ASTNode* $tmp2593;
    org$pandalanguage$pandac$ASTNode* $tmp2597;
    org$pandalanguage$pandac$ASTNode* $tmp2598;
    org$pandalanguage$pandac$ASTNode* $tmp2599;
    panda$core$Int64 $tmp2601;
    org$pandalanguage$pandac$ASTNode* $tmp2603;
    int $tmp2535;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2539 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2538 = $tmp2539;
        $tmp2537 = $tmp2538;
        result2536 = $tmp2537;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2537));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2538));
        if (((panda$core$Bit) { result2536 == NULL }).value) {
        {
            $tmp2541 = NULL;
            $returnValue2540 = $tmp2541;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2541));
            $tmp2535 = 0;
            goto $l2533;
            $l2542:;
            return $returnValue2540;
        }
        }
        $l2544:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2547 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2546 = $tmp2547;
            {
                $match$1125_132548 = op2546.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2556, 58);
                panda$core$Bit $tmp2557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1125_132548.$rawValue, $tmp2556);
                bool $tmp2555 = $tmp2557.value;
                if ($tmp2555) goto $l2558;
                panda$core$Int64$init$builtin_int64(&$tmp2559, 59);
                panda$core$Bit $tmp2560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1125_132548.$rawValue, $tmp2559);
                $tmp2555 = $tmp2560.value;
                $l2558:;
                panda$core$Bit $tmp2561 = { $tmp2555 };
                bool $tmp2554 = $tmp2561.value;
                if ($tmp2554) goto $l2562;
                panda$core$Int64$init$builtin_int64(&$tmp2563, 60);
                panda$core$Bit $tmp2564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1125_132548.$rawValue, $tmp2563);
                $tmp2554 = $tmp2564.value;
                $l2562:;
                panda$core$Bit $tmp2565 = { $tmp2554 };
                bool $tmp2553 = $tmp2565.value;
                if ($tmp2553) goto $l2566;
                panda$core$Int64$init$builtin_int64(&$tmp2567, 61);
                panda$core$Bit $tmp2568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1125_132548.$rawValue, $tmp2567);
                $tmp2553 = $tmp2568.value;
                $l2566:;
                panda$core$Bit $tmp2569 = { $tmp2553 };
                bool $tmp2552 = $tmp2569.value;
                if ($tmp2552) goto $l2570;
                panda$core$Int64$init$builtin_int64(&$tmp2571, 62);
                panda$core$Bit $tmp2572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1125_132548.$rawValue, $tmp2571);
                $tmp2552 = $tmp2572.value;
                $l2570:;
                panda$core$Bit $tmp2573 = { $tmp2552 };
                bool $tmp2551 = $tmp2573.value;
                if ($tmp2551) goto $l2574;
                panda$core$Int64$init$builtin_int64(&$tmp2575, 63);
                panda$core$Bit $tmp2576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1125_132548.$rawValue, $tmp2575);
                $tmp2551 = $tmp2576.value;
                $l2574:;
                panda$core$Bit $tmp2577 = { $tmp2551 };
                bool $tmp2550 = $tmp2577.value;
                if ($tmp2550) goto $l2578;
                panda$core$Int64$init$builtin_int64(&$tmp2579, 64);
                panda$core$Bit $tmp2580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1125_132548.$rawValue, $tmp2579);
                $tmp2550 = $tmp2580.value;
                $l2578:;
                panda$core$Bit $tmp2581 = { $tmp2550 };
                bool $tmp2549 = $tmp2581.value;
                if ($tmp2549) goto $l2582;
                panda$core$Int64$init$builtin_int64(&$tmp2583, 65);
                panda$core$Bit $tmp2584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1125_132548.$rawValue, $tmp2583);
                $tmp2549 = $tmp2584.value;
                $l2582:;
                panda$core$Bit $tmp2585 = { $tmp2549 };
                if ($tmp2585.value) {
                {
                    int $tmp2588;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2592 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2591 = $tmp2592;
                        $tmp2590 = $tmp2591;
                        next2589 = $tmp2590;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2590));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2591));
                        if (((panda$core$Bit) { next2589 == NULL }).value) {
                        {
                            $tmp2593 = NULL;
                            $returnValue2540 = $tmp2593;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2593));
                            $tmp2588 = 0;
                            goto $l2586;
                            $l2594:;
                            $tmp2535 = 1;
                            goto $l2533;
                            $l2595:;
                            return $returnValue2540;
                        }
                        }
                        {
                            $tmp2597 = result2536;
                            org$pandalanguage$pandac$ASTNode* $tmp2600 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2601, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2600, $tmp2601, op2546.position, result2536, op2546.kind, next2589);
                            $tmp2599 = $tmp2600;
                            $tmp2598 = $tmp2599;
                            result2536 = $tmp2598;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2598));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2599));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2597));
                        }
                    }
                    $tmp2588 = -1;
                    goto $l2586;
                    $l2586:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2589));
                    next2589 = NULL;
                    switch ($tmp2588) {
                        case -1: goto $l2602;
                        case 0: goto $l2594;
                    }
                    $l2602:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2546);
                    $tmp2603 = result2536;
                    $returnValue2540 = $tmp2603;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2603));
                    $tmp2535 = 2;
                    goto $l2533;
                    $l2604:;
                    return $returnValue2540;
                }
                }
            }
        }
        }
        $l2545:;
    }
    $tmp2535 = -1;
    goto $l2533;
    $l2533:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2536));
    result2536 = NULL;
    switch ($tmp2535) {
        case -1: goto $l2606;
        case 1: goto $l2595;
        case 2: goto $l2604;
        case 0: goto $l2542;
    }
    $l2606:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2610 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2611;
    org$pandalanguage$pandac$ASTNode* $tmp2612;
    org$pandalanguage$pandac$ASTNode* $returnValue2614;
    org$pandalanguage$pandac$ASTNode* $tmp2615;
    org$pandalanguage$pandac$parser$Token op2620;
    org$pandalanguage$pandac$parser$Token$Kind $match$1156_132622;
    panda$core$Int64 $tmp2624;
    panda$core$Int64 $tmp2627;
    org$pandalanguage$pandac$ASTNode* next2633 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2634;
    org$pandalanguage$pandac$ASTNode* $tmp2635;
    org$pandalanguage$pandac$ASTNode* $tmp2637;
    org$pandalanguage$pandac$ASTNode* $tmp2641;
    org$pandalanguage$pandac$ASTNode* $tmp2642;
    org$pandalanguage$pandac$ASTNode* $tmp2643;
    panda$core$Int64 $tmp2645;
    org$pandalanguage$pandac$ASTNode* $tmp2647;
    int $tmp2609;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2613 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2612 = $tmp2613;
        $tmp2611 = $tmp2612;
        result2610 = $tmp2611;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2611));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2612));
        if (((panda$core$Bit) { result2610 == NULL }).value) {
        {
            $tmp2615 = NULL;
            $returnValue2614 = $tmp2615;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2615));
            $tmp2609 = 0;
            goto $l2607;
            $l2616:;
            return $returnValue2614;
        }
        }
        $l2618:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2621 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2620 = $tmp2621;
            {
                $match$1156_132622 = op2620.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2624, 66);
                panda$core$Bit $tmp2625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1156_132622.$rawValue, $tmp2624);
                bool $tmp2623 = $tmp2625.value;
                if ($tmp2623) goto $l2626;
                panda$core$Int64$init$builtin_int64(&$tmp2627, 70);
                panda$core$Bit $tmp2628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1156_132622.$rawValue, $tmp2627);
                $tmp2623 = $tmp2628.value;
                $l2626:;
                panda$core$Bit $tmp2629 = { $tmp2623 };
                if ($tmp2629.value) {
                {
                    int $tmp2632;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2636 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2635 = $tmp2636;
                        $tmp2634 = $tmp2635;
                        next2633 = $tmp2634;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2634));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2635));
                        if (((panda$core$Bit) { next2633 == NULL }).value) {
                        {
                            $tmp2637 = NULL;
                            $returnValue2614 = $tmp2637;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2637));
                            $tmp2632 = 0;
                            goto $l2630;
                            $l2638:;
                            $tmp2609 = 1;
                            goto $l2607;
                            $l2639:;
                            return $returnValue2614;
                        }
                        }
                        {
                            $tmp2641 = result2610;
                            org$pandalanguage$pandac$ASTNode* $tmp2644 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2645, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2644, $tmp2645, op2620.position, result2610, op2620.kind, next2633);
                            $tmp2643 = $tmp2644;
                            $tmp2642 = $tmp2643;
                            result2610 = $tmp2642;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2642));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2643));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2641));
                        }
                    }
                    $tmp2632 = -1;
                    goto $l2630;
                    $l2630:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2633));
                    next2633 = NULL;
                    switch ($tmp2632) {
                        case -1: goto $l2646;
                        case 0: goto $l2638;
                    }
                    $l2646:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2620);
                    $tmp2647 = result2610;
                    $returnValue2614 = $tmp2647;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2647));
                    $tmp2609 = 2;
                    goto $l2607;
                    $l2648:;
                    return $returnValue2614;
                }
                }
            }
        }
        }
        $l2619:;
    }
    $tmp2609 = -1;
    goto $l2607;
    $l2607:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2610));
    result2610 = NULL;
    switch ($tmp2609) {
        case 2: goto $l2648;
        case -1: goto $l2650;
        case 1: goto $l2639;
        case 0: goto $l2616;
    }
    $l2650:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2654 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2655;
    org$pandalanguage$pandac$ASTNode* $tmp2656;
    org$pandalanguage$pandac$ASTNode* $returnValue2658;
    org$pandalanguage$pandac$ASTNode* $tmp2659;
    org$pandalanguage$pandac$parser$Token$nullable op2667;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2668;
    panda$core$Int64 $tmp2669;
    org$pandalanguage$pandac$ASTNode* next2672 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2673;
    org$pandalanguage$pandac$ASTNode* $tmp2674;
    org$pandalanguage$pandac$ASTNode* $tmp2676;
    org$pandalanguage$pandac$ASTNode* $tmp2680;
    org$pandalanguage$pandac$ASTNode* $tmp2681;
    org$pandalanguage$pandac$ASTNode* $tmp2682;
    panda$core$Int64 $tmp2684;
    org$pandalanguage$pandac$ASTNode* $tmp2686;
    int $tmp2653;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2657 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2656 = $tmp2657;
        $tmp2655 = $tmp2656;
        result2654 = $tmp2655;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2655));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2656));
        if (((panda$core$Bit) { result2654 == NULL }).value) {
        {
            $tmp2659 = NULL;
            $returnValue2658 = $tmp2659;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2659));
            $tmp2653 = 0;
            goto $l2651;
            $l2660:;
            return $returnValue2658;
        }
        }
        $l2662:;
        while (true) {
        {
            int $tmp2666;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2669, 68);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2668, $tmp2669);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2670 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2668);
                op2667 = $tmp2670;
                if (((panda$core$Bit) { !op2667.nonnull }).value) {
                {
                    $tmp2666 = 0;
                    goto $l2664;
                    $l2671:;
                    goto $l2663;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2675 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2674 = $tmp2675;
                $tmp2673 = $tmp2674;
                next2672 = $tmp2673;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2673));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2674));
                if (((panda$core$Bit) { next2672 == NULL }).value) {
                {
                    $tmp2676 = NULL;
                    $returnValue2658 = $tmp2676;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2676));
                    $tmp2666 = 1;
                    goto $l2664;
                    $l2677:;
                    $tmp2653 = 1;
                    goto $l2651;
                    $l2678:;
                    return $returnValue2658;
                }
                }
                {
                    $tmp2680 = result2654;
                    org$pandalanguage$pandac$ASTNode* $tmp2683 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2684, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2683, $tmp2684, ((org$pandalanguage$pandac$parser$Token) op2667.value).position, result2654, ((org$pandalanguage$pandac$parser$Token) op2667.value).kind, next2672);
                    $tmp2682 = $tmp2683;
                    $tmp2681 = $tmp2682;
                    result2654 = $tmp2681;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2681));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2682));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2680));
                }
            }
            $tmp2666 = -1;
            goto $l2664;
            $l2664:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2672));
            next2672 = NULL;
            switch ($tmp2666) {
                case -1: goto $l2685;
                case 0: goto $l2671;
                case 1: goto $l2677;
            }
            $l2685:;
        }
        }
        $l2663:;
        $tmp2686 = result2654;
        $returnValue2658 = $tmp2686;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2686));
        $tmp2653 = 2;
        goto $l2651;
        $l2687:;
        return $returnValue2658;
    }
    $l2651:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2654));
    result2654 = NULL;
    switch ($tmp2653) {
        case 2: goto $l2687;
        case 1: goto $l2678;
        case 0: goto $l2660;
    }
    $l2689:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2693;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2694;
    panda$core$Int64 $tmp2695;
    org$pandalanguage$pandac$ASTNode* $returnValue2698;
    org$pandalanguage$pandac$ASTNode* $tmp2699;
    org$pandalanguage$pandac$ASTNode* test2702 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2703;
    org$pandalanguage$pandac$ASTNode* $tmp2704;
    org$pandalanguage$pandac$ASTNode* $tmp2706;
    panda$collections$ImmutableArray* ifTrue2709 = NULL;
    panda$collections$ImmutableArray* $tmp2710;
    panda$collections$ImmutableArray* $tmp2711;
    org$pandalanguage$pandac$ASTNode* $tmp2713;
    org$pandalanguage$pandac$ASTNode* ifFalse2716 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2717;
    panda$core$Int64 $tmp2718;
    panda$core$Int64 $tmp2721;
    org$pandalanguage$pandac$ASTNode* $tmp2723;
    org$pandalanguage$pandac$ASTNode* $tmp2724;
    org$pandalanguage$pandac$ASTNode* $tmp2725;
    org$pandalanguage$pandac$ASTNode* $tmp2727;
    org$pandalanguage$pandac$ASTNode* $tmp2730;
    org$pandalanguage$pandac$ASTNode* $tmp2731;
    org$pandalanguage$pandac$ASTNode* $tmp2732;
    org$pandalanguage$pandac$ASTNode* $tmp2734;
    org$pandalanguage$pandac$ASTNode* $tmp2737;
    org$pandalanguage$pandac$ASTNode* $tmp2738;
    org$pandalanguage$pandac$ASTNode* $tmp2739;
    org$pandalanguage$pandac$ASTNode* $tmp2740;
    panda$core$Int64 $tmp2742;
    int $tmp2692;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2695, 36);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2694, $tmp2695);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2697 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2694, &$s2696);
        start2693 = $tmp2697;
        if (((panda$core$Bit) { !start2693.nonnull }).value) {
        {
            $tmp2699 = NULL;
            $returnValue2698 = $tmp2699;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2699));
            $tmp2692 = 0;
            goto $l2690;
            $l2700:;
            return $returnValue2698;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2705 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2704 = $tmp2705;
        $tmp2703 = $tmp2704;
        test2702 = $tmp2703;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2703));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2704));
        if (((panda$core$Bit) { test2702 == NULL }).value) {
        {
            $tmp2706 = NULL;
            $returnValue2698 = $tmp2706;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2706));
            $tmp2692 = 1;
            goto $l2690;
            $l2707:;
            return $returnValue2698;
        }
        }
        panda$collections$ImmutableArray* $tmp2712 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2711 = $tmp2712;
        $tmp2710 = $tmp2711;
        ifTrue2709 = $tmp2710;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2710));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2711));
        if (((panda$core$Bit) { ifTrue2709 == NULL }).value) {
        {
            $tmp2713 = NULL;
            $returnValue2698 = $tmp2713;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2713));
            $tmp2692 = 2;
            goto $l2690;
            $l2714:;
            return $returnValue2698;
        }
        }
        memset(&ifFalse2716, 0, sizeof(ifFalse2716));
        panda$core$Int64$init$builtin_int64(&$tmp2718, 37);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2717, $tmp2718);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2719 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2717);
        if (((panda$core$Bit) { $tmp2719.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2720 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp2721, 36);
            panda$core$Bit $tmp2722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2720.kind.$rawValue, $tmp2721);
            if ($tmp2722.value) {
            {
                {
                    $tmp2723 = ifFalse2716;
                    org$pandalanguage$pandac$ASTNode* $tmp2726 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2725 = $tmp2726;
                    $tmp2724 = $tmp2725;
                    ifFalse2716 = $tmp2724;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2724));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2725));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2723));
                }
                if (((panda$core$Bit) { ifFalse2716 == NULL }).value) {
                {
                    $tmp2727 = NULL;
                    $returnValue2698 = $tmp2727;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2727));
                    $tmp2692 = 3;
                    goto $l2690;
                    $l2728:;
                    return $returnValue2698;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2730 = ifFalse2716;
                    org$pandalanguage$pandac$ASTNode* $tmp2733 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2732 = $tmp2733;
                    $tmp2731 = $tmp2732;
                    ifFalse2716 = $tmp2731;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2731));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2732));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2730));
                }
                if (((panda$core$Bit) { ifFalse2716 == NULL }).value) {
                {
                    $tmp2734 = NULL;
                    $returnValue2698 = $tmp2734;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2734));
                    $tmp2692 = 4;
                    goto $l2690;
                    $l2735:;
                    return $returnValue2698;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp2737 = ifFalse2716;
                $tmp2738 = NULL;
                ifFalse2716 = $tmp2738;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2738));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2737));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2741 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2742, 21);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2741, $tmp2742, ((org$pandalanguage$pandac$parser$Token) start2693.value).position, test2702, ifTrue2709, ifFalse2716);
        $tmp2740 = $tmp2741;
        $tmp2739 = $tmp2740;
        $returnValue2698 = $tmp2739;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2739));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2740));
        $tmp2692 = 5;
        goto $l2690;
        $l2743:;
        return $returnValue2698;
    }
    $l2690:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse2716));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue2709));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2702));
    test2702 = NULL;
    ifTrue2709 = NULL;
    switch ($tmp2692) {
        case 5: goto $l2743;
        case 2: goto $l2714;
        case 4: goto $l2735;
        case 1: goto $l2707;
        case 3: goto $l2728;
        case 0: goto $l2700;
    }
    $l2745:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp2746;
    panda$core$Int64 $tmp2747;
    org$pandalanguage$pandac$ASTNode* $returnValue2750;
    org$pandalanguage$pandac$ASTNode* $tmp2751;
    org$pandalanguage$pandac$ASTNode* $tmp2753;
    org$pandalanguage$pandac$ASTNode* $tmp2754;
    panda$core$Bit $tmp2755;
    panda$core$Int64$init$builtin_int64(&$tmp2747, 95);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2746, $tmp2747);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2749 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2746, &$s2748);
    if (((panda$core$Bit) { !$tmp2749.nonnull }).value) {
    {
        $tmp2751 = NULL;
        $returnValue2750 = $tmp2751;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2751));
        return $returnValue2750;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp2755, false);
    org$pandalanguage$pandac$ASTNode* $tmp2756 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2755);
    $tmp2754 = $tmp2756;
    $tmp2753 = $tmp2754;
    $returnValue2750 = $tmp2753;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2753));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2754));
    return $returnValue2750;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id2758;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2759;
    panda$core$Int64 $tmp2760;
    org$pandalanguage$pandac$ASTNode* $returnValue2763;
    org$pandalanguage$pandac$ASTNode* $tmp2764;
    panda$core$Int64 $tmp2767;
    org$pandalanguage$pandac$ASTNode* type2772 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2773;
    org$pandalanguage$pandac$ASTNode* $tmp2774;
    org$pandalanguage$pandac$ASTNode* $tmp2776;
    org$pandalanguage$pandac$ASTNode* $tmp2779;
    org$pandalanguage$pandac$ASTNode* $tmp2780;
    panda$core$Int64 $tmp2782;
    panda$core$String* $tmp2783;
    org$pandalanguage$pandac$ASTNode* $tmp2788;
    org$pandalanguage$pandac$ASTNode* $tmp2789;
    panda$core$Int64 $tmp2791;
    panda$core$String* $tmp2792;
    panda$core$Int64$init$builtin_int64(&$tmp2760, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2759, $tmp2760);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2762 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2759, &$s2761);
    id2758 = $tmp2762;
    if (((panda$core$Bit) { !id2758.nonnull }).value) {
    {
        $tmp2764 = NULL;
        $returnValue2763 = $tmp2764;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2764));
        return $returnValue2763;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2766 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Int64$init$builtin_int64(&$tmp2767, 95);
    panda$core$Bit $tmp2768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2766.kind.$rawValue, $tmp2767);
    if ($tmp2768.value) {
    {
        int $tmp2771;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2775 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2774 = $tmp2775;
            $tmp2773 = $tmp2774;
            type2772 = $tmp2773;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2773));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2774));
            if (((panda$core$Bit) { type2772 == NULL }).value) {
            {
                $tmp2776 = NULL;
                $returnValue2763 = $tmp2776;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2776));
                $tmp2771 = 0;
                goto $l2769;
                $l2777:;
                return $returnValue2763;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp2781 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp2782, 44);
            panda$core$String* $tmp2784 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2758.value));
            $tmp2783 = $tmp2784;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2781, $tmp2782, ((org$pandalanguage$pandac$parser$Token) id2758.value).position, $tmp2783, type2772);
            $tmp2780 = $tmp2781;
            $tmp2779 = $tmp2780;
            $returnValue2763 = $tmp2779;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2779));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2780));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2783));
            $tmp2771 = 1;
            goto $l2769;
            $l2785:;
            return $returnValue2763;
        }
        $l2769:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type2772));
        type2772 = NULL;
        switch ($tmp2771) {
            case 0: goto $l2777;
            case 1: goto $l2785;
        }
        $l2787:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2790 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp2791, 20);
    panda$core$String* $tmp2793 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2758.value));
    $tmp2792 = $tmp2793;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2790, $tmp2791, ((org$pandalanguage$pandac$parser$Token) id2758.value).position, $tmp2792);
    $tmp2789 = $tmp2790;
    $tmp2788 = $tmp2789;
    $returnValue2763 = $tmp2788;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2788));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2789));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2792));
    return $returnValue2763;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2798;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2799;
    panda$core$Int64 $tmp2800;
    org$pandalanguage$pandac$ASTNode* $returnValue2803;
    org$pandalanguage$pandac$ASTNode* $tmp2804;
    org$pandalanguage$pandac$ASTNode* t2807 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2808;
    org$pandalanguage$pandac$ASTNode* $tmp2809;
    org$pandalanguage$pandac$ASTNode* $tmp2811;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2814;
    panda$core$Int64 $tmp2815;
    org$pandalanguage$pandac$ASTNode* $tmp2818;
    org$pandalanguage$pandac$ASTNode* list2821 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2822;
    org$pandalanguage$pandac$ASTNode* $tmp2823;
    org$pandalanguage$pandac$ASTNode* $tmp2825;
    panda$collections$ImmutableArray* block2828 = NULL;
    panda$collections$ImmutableArray* $tmp2829;
    panda$collections$ImmutableArray* $tmp2830;
    org$pandalanguage$pandac$ASTNode* $tmp2832;
    org$pandalanguage$pandac$ASTNode* $tmp2835;
    org$pandalanguage$pandac$ASTNode* $tmp2836;
    panda$core$Int64 $tmp2838;
    int $tmp2797;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2800, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2799, $tmp2800);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2802 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2799, &$s2801);
        start2798 = $tmp2802;
        if (((panda$core$Bit) { !start2798.nonnull }).value) {
        {
            $tmp2804 = NULL;
            $returnValue2803 = $tmp2804;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2804));
            $tmp2797 = 0;
            goto $l2795;
            $l2805:;
            return $returnValue2803;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2810 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2809 = $tmp2810;
        $tmp2808 = $tmp2809;
        t2807 = $tmp2808;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2808));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2809));
        if (((panda$core$Bit) { t2807 == NULL }).value) {
        {
            $tmp2811 = NULL;
            $returnValue2803 = $tmp2811;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2811));
            $tmp2797 = 1;
            goto $l2795;
            $l2812:;
            return $returnValue2803;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2815, 34);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2814, $tmp2815);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2817 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2814, &$s2816);
        if (((panda$core$Bit) { !$tmp2817.nonnull }).value) {
        {
            $tmp2818 = NULL;
            $returnValue2803 = $tmp2818;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2818));
            $tmp2797 = 2;
            goto $l2795;
            $l2819:;
            return $returnValue2803;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2824 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2823 = $tmp2824;
        $tmp2822 = $tmp2823;
        list2821 = $tmp2822;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2822));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2823));
        if (((panda$core$Bit) { list2821 == NULL }).value) {
        {
            $tmp2825 = NULL;
            $returnValue2803 = $tmp2825;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2825));
            $tmp2797 = 3;
            goto $l2795;
            $l2826:;
            return $returnValue2803;
        }
        }
        panda$collections$ImmutableArray* $tmp2831 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2830 = $tmp2831;
        $tmp2829 = $tmp2830;
        block2828 = $tmp2829;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2829));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2830));
        if (((panda$core$Bit) { block2828 == NULL }).value) {
        {
            $tmp2832 = NULL;
            $returnValue2803 = $tmp2832;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2832));
            $tmp2797 = 4;
            goto $l2795;
            $l2833:;
            return $returnValue2803;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2837 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2838, 18);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2837, $tmp2838, ((org$pandalanguage$pandac$parser$Token) start2798.value).position, p_label, t2807, list2821, block2828);
        $tmp2836 = $tmp2837;
        $tmp2835 = $tmp2836;
        $returnValue2803 = $tmp2835;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2835));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2836));
        $tmp2797 = 5;
        goto $l2795;
        $l2839:;
        return $returnValue2803;
    }
    $l2795:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2828));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2821));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2807));
    t2807 = NULL;
    list2821 = NULL;
    block2828 = NULL;
    switch ($tmp2797) {
        case 5: goto $l2839;
        case 2: goto $l2819;
        case 1: goto $l2812;
        case 3: goto $l2826;
        case 0: goto $l2805;
        case 4: goto $l2833;
    }
    $l2841:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2845;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2846;
    panda$core$Int64 $tmp2847;
    org$pandalanguage$pandac$ASTNode* $returnValue2850;
    org$pandalanguage$pandac$ASTNode* $tmp2851;
    org$pandalanguage$pandac$ASTNode* test2854 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2855;
    org$pandalanguage$pandac$ASTNode* $tmp2856;
    org$pandalanguage$pandac$ASTNode* $tmp2858;
    panda$collections$ImmutableArray* body2861 = NULL;
    panda$collections$ImmutableArray* $tmp2862;
    panda$collections$ImmutableArray* $tmp2863;
    org$pandalanguage$pandac$ASTNode* $tmp2865;
    org$pandalanguage$pandac$ASTNode* $tmp2868;
    org$pandalanguage$pandac$ASTNode* $tmp2869;
    panda$core$Int64 $tmp2871;
    int $tmp2844;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2847, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2846, $tmp2847);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2849 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2846, &$s2848);
        start2845 = $tmp2849;
        if (((panda$core$Bit) { !start2845.nonnull }).value) {
        {
            $tmp2851 = NULL;
            $returnValue2850 = $tmp2851;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2851));
            $tmp2844 = 0;
            goto $l2842;
            $l2852:;
            return $returnValue2850;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2857 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2856 = $tmp2857;
        $tmp2855 = $tmp2856;
        test2854 = $tmp2855;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2855));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2856));
        if (((panda$core$Bit) { test2854 == NULL }).value) {
        {
            $tmp2858 = NULL;
            $returnValue2850 = $tmp2858;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2858));
            $tmp2844 = 1;
            goto $l2842;
            $l2859:;
            return $returnValue2850;
        }
        }
        panda$collections$ImmutableArray* $tmp2864 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2863 = $tmp2864;
        $tmp2862 = $tmp2863;
        body2861 = $tmp2862;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2862));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2863));
        if (((panda$core$Bit) { body2861 == NULL }).value) {
        {
            $tmp2865 = NULL;
            $returnValue2850 = $tmp2865;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2865));
            $tmp2844 = 2;
            goto $l2842;
            $l2866:;
            return $returnValue2850;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2870 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2871, 49);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2870, $tmp2871, ((org$pandalanguage$pandac$parser$Token) start2845.value).position, p_label, test2854, body2861);
        $tmp2869 = $tmp2870;
        $tmp2868 = $tmp2869;
        $returnValue2850 = $tmp2868;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2868));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2869));
        $tmp2844 = 3;
        goto $l2842;
        $l2872:;
        return $returnValue2850;
    }
    $l2842:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2861));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2854));
    test2854 = NULL;
    body2861 = NULL;
    switch ($tmp2844) {
        case 3: goto $l2872;
        case 1: goto $l2859;
        case 2: goto $l2866;
        case 0: goto $l2852;
    }
    $l2874:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2878;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2879;
    panda$core$Int64 $tmp2880;
    org$pandalanguage$pandac$ASTNode* $returnValue2883;
    org$pandalanguage$pandac$ASTNode* $tmp2884;
    panda$collections$ImmutableArray* body2887 = NULL;
    panda$collections$ImmutableArray* $tmp2888;
    panda$collections$ImmutableArray* $tmp2889;
    org$pandalanguage$pandac$ASTNode* $tmp2891;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2894;
    panda$core$Int64 $tmp2895;
    org$pandalanguage$pandac$ASTNode* $tmp2898;
    org$pandalanguage$pandac$ASTNode* test2901 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2902;
    org$pandalanguage$pandac$ASTNode* $tmp2903;
    org$pandalanguage$pandac$ASTNode* $tmp2905;
    org$pandalanguage$pandac$ASTNode* $tmp2908;
    org$pandalanguage$pandac$ASTNode* $tmp2909;
    panda$core$Int64 $tmp2911;
    int $tmp2877;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2880, 30);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2879, $tmp2880);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2882 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2879, &$s2881);
        start2878 = $tmp2882;
        if (((panda$core$Bit) { !start2878.nonnull }).value) {
        {
            $tmp2884 = NULL;
            $returnValue2883 = $tmp2884;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2884));
            $tmp2877 = 0;
            goto $l2875;
            $l2885:;
            return $returnValue2883;
        }
        }
        panda$collections$ImmutableArray* $tmp2890 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2889 = $tmp2890;
        $tmp2888 = $tmp2889;
        body2887 = $tmp2888;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2888));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2889));
        if (((panda$core$Bit) { body2887 == NULL }).value) {
        {
            $tmp2891 = NULL;
            $returnValue2883 = $tmp2891;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2891));
            $tmp2877 = 1;
            goto $l2875;
            $l2892:;
            return $returnValue2883;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2895, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2894, $tmp2895);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2897 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2894, &$s2896);
        if (((panda$core$Bit) { !$tmp2897.nonnull }).value) {
        {
            $tmp2898 = NULL;
            $returnValue2883 = $tmp2898;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2898));
            $tmp2877 = 2;
            goto $l2875;
            $l2899:;
            return $returnValue2883;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2904 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2903 = $tmp2904;
        $tmp2902 = $tmp2903;
        test2901 = $tmp2902;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2902));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2903));
        if (((panda$core$Bit) { test2901 == NULL }).value) {
        {
            $tmp2905 = NULL;
            $returnValue2883 = $tmp2905;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2905));
            $tmp2877 = 3;
            goto $l2875;
            $l2906:;
            return $returnValue2883;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2910 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2911, 14);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp2910, $tmp2911, ((org$pandalanguage$pandac$parser$Token) start2878.value).position, p_label, body2887, test2901);
        $tmp2909 = $tmp2910;
        $tmp2908 = $tmp2909;
        $returnValue2883 = $tmp2908;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2908));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2909));
        $tmp2877 = 4;
        goto $l2875;
        $l2912:;
        return $returnValue2883;
    }
    $l2875:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2901));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2887));
    body2887 = NULL;
    test2901 = NULL;
    switch ($tmp2877) {
        case 4: goto $l2912;
        case 2: goto $l2899;
        case 3: goto $l2906;
        case 1: goto $l2892;
        case 0: goto $l2885;
    }
    $l2914:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2918;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2919;
    panda$core$Int64 $tmp2920;
    org$pandalanguage$pandac$ASTNode* $returnValue2923;
    org$pandalanguage$pandac$ASTNode* $tmp2924;
    panda$collections$ImmutableArray* body2927 = NULL;
    panda$collections$ImmutableArray* $tmp2928;
    panda$collections$ImmutableArray* $tmp2929;
    org$pandalanguage$pandac$ASTNode* $tmp2931;
    org$pandalanguage$pandac$ASTNode* $tmp2934;
    org$pandalanguage$pandac$ASTNode* $tmp2935;
    panda$core$Int64 $tmp2937;
    int $tmp2917;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2920, 35);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2919, $tmp2920);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2922 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2919, &$s2921);
        start2918 = $tmp2922;
        if (((panda$core$Bit) { !start2918.nonnull }).value) {
        {
            $tmp2924 = NULL;
            $returnValue2923 = $tmp2924;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2924));
            $tmp2917 = 0;
            goto $l2915;
            $l2925:;
            return $returnValue2923;
        }
        }
        panda$collections$ImmutableArray* $tmp2930 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2929 = $tmp2930;
        $tmp2928 = $tmp2929;
        body2927 = $tmp2928;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2928));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2929));
        if (((panda$core$Bit) { body2927 == NULL }).value) {
        {
            $tmp2931 = NULL;
            $returnValue2923 = $tmp2931;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2931));
            $tmp2917 = 1;
            goto $l2915;
            $l2932:;
            return $returnValue2923;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2936 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2937, 24);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2936, $tmp2937, ((org$pandalanguage$pandac$parser$Token) start2918.value).position, p_label, body2927);
        $tmp2935 = $tmp2936;
        $tmp2934 = $tmp2935;
        $returnValue2923 = $tmp2934;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2934));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2935));
        $tmp2917 = 2;
        goto $l2915;
        $l2938:;
        return $returnValue2923;
    }
    $l2915:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2927));
    body2927 = NULL;
    switch ($tmp2917) {
        case 1: goto $l2932;
        case 2: goto $l2938;
        case 0: goto $l2925;
    }
    $l2940:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2944;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2945;
    panda$core$Int64 $tmp2946;
    org$pandalanguage$pandac$ASTNode* $returnValue2949;
    org$pandalanguage$pandac$ASTNode* $tmp2950;
    org$pandalanguage$pandac$ASTNode* expr2953 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2954;
    org$pandalanguage$pandac$ASTNode* $tmp2955;
    org$pandalanguage$pandac$ASTNode* $tmp2957;
    org$pandalanguage$pandac$ASTNode* message2960 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2961;
    panda$core$Int64 $tmp2962;
    org$pandalanguage$pandac$ASTNode* $tmp2964;
    org$pandalanguage$pandac$ASTNode* $tmp2965;
    org$pandalanguage$pandac$ASTNode* $tmp2966;
    org$pandalanguage$pandac$ASTNode* $tmp2968;
    org$pandalanguage$pandac$ASTNode* $tmp2971;
    org$pandalanguage$pandac$ASTNode* $tmp2972;
    org$pandalanguage$pandac$ASTNode* $tmp2973;
    org$pandalanguage$pandac$ASTNode* $tmp2974;
    panda$core$Int64 $tmp2976;
    int $tmp2943;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2946, 44);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2945, $tmp2946);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2948 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2945, &$s2947);
        start2944 = $tmp2948;
        if (((panda$core$Bit) { !start2944.nonnull }).value) {
        {
            $tmp2950 = NULL;
            $returnValue2949 = $tmp2950;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2950));
            $tmp2943 = 0;
            goto $l2941;
            $l2951:;
            return $returnValue2949;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2956 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2955 = $tmp2956;
        $tmp2954 = $tmp2955;
        expr2953 = $tmp2954;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2954));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2955));
        if (((panda$core$Bit) { expr2953 == NULL }).value) {
        {
            $tmp2957 = NULL;
            $returnValue2949 = $tmp2957;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2957));
            $tmp2943 = 1;
            goto $l2941;
            $l2958:;
            return $returnValue2949;
        }
        }
        memset(&message2960, 0, sizeof(message2960));
        panda$core$Int64$init$builtin_int64(&$tmp2962, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2961, $tmp2962);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2963 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2961);
        if (((panda$core$Bit) { $tmp2963.nonnull }).value) {
        {
            {
                $tmp2964 = message2960;
                org$pandalanguage$pandac$ASTNode* $tmp2967 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2966 = $tmp2967;
                $tmp2965 = $tmp2966;
                message2960 = $tmp2965;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2965));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2966));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2964));
            }
            if (((panda$core$Bit) { message2960 == NULL }).value) {
            {
                $tmp2968 = NULL;
                $returnValue2949 = $tmp2968;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2968));
                $tmp2943 = 2;
                goto $l2941;
                $l2969:;
                return $returnValue2949;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2971 = message2960;
                $tmp2972 = NULL;
                message2960 = $tmp2972;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2972));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2971));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2975 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2976, 1);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2975, $tmp2976, ((org$pandalanguage$pandac$parser$Token) start2944.value).position, expr2953, message2960);
        $tmp2974 = $tmp2975;
        $tmp2973 = $tmp2974;
        $returnValue2949 = $tmp2973;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2973));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2974));
        $tmp2943 = 3;
        goto $l2941;
        $l2977:;
        return $returnValue2949;
    }
    $l2941:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message2960));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2953));
    expr2953 = NULL;
    switch ($tmp2943) {
        case 2: goto $l2969;
        case 3: goto $l2977;
        case 1: goto $l2958;
        case 0: goto $l2951;
    }
    $l2979:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2990;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2991;
    panda$core$Int64 $tmp2992;
    org$pandalanguage$pandac$ASTNode* $returnValue2995;
    org$pandalanguage$pandac$ASTNode* $tmp2996;
    panda$core$Bit $tmp3000;
    panda$collections$Array* expressions3001 = NULL;
    panda$collections$Array* $tmp3002;
    panda$collections$Array* $tmp3003;
    org$pandalanguage$pandac$ASTNode* expr3005 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3006;
    org$pandalanguage$pandac$ASTNode* $tmp3007;
    panda$core$Bit $tmp3009;
    org$pandalanguage$pandac$ASTNode* $tmp3010;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3017;
    panda$core$Int64 $tmp3018;
    org$pandalanguage$pandac$ASTNode* $tmp3020;
    org$pandalanguage$pandac$ASTNode* $tmp3021;
    org$pandalanguage$pandac$ASTNode* $tmp3022;
    panda$core$Bit $tmp3024;
    org$pandalanguage$pandac$ASTNode* $tmp3025;
    panda$core$Bit $tmp3029;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3030;
    panda$core$Int64 $tmp3031;
    org$pandalanguage$pandac$ASTNode* $tmp3034;
    panda$collections$Array* statements3038 = NULL;
    panda$collections$Array* $tmp3039;
    panda$collections$Array* $tmp3040;
    org$pandalanguage$pandac$parser$Token$Kind $match$1396_133044;
    panda$core$Int64 $tmp3048;
    panda$core$Int64 $tmp3051;
    panda$core$Int64 $tmp3055;
    panda$core$Int64 $tmp3060;
    panda$core$Int64 $tmp3063;
    panda$core$Int64 $tmp3067;
    org$pandalanguage$pandac$ASTNode* stmt3073 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3074;
    org$pandalanguage$pandac$ASTNode* $tmp3075;
    org$pandalanguage$pandac$ASTNode* $tmp3077;
    org$pandalanguage$pandac$ASTNode* stmt3087 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3088;
    org$pandalanguage$pandac$ASTNode* $tmp3089;
    org$pandalanguage$pandac$ASTNode* $tmp3091;
    org$pandalanguage$pandac$ASTNode* $tmp3097;
    org$pandalanguage$pandac$ASTNode* $tmp3098;
    panda$core$Int64 $tmp3100;
    panda$collections$ImmutableArray* $tmp3101;
    panda$collections$ImmutableArray* $tmp3103;
    int $tmp2982;
    {
        if (self->allowLambdas.value) goto $l2983; else goto $l2984;
        $l2984:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2985, (panda$core$Int64) { 1369 }, &$s2986);
        abort();
        $l2983:;
        int $tmp2989;
        {
            panda$core$Int64$init$builtin_int64(&$tmp2992, 39);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2991, $tmp2992);
            org$pandalanguage$pandac$parser$Token$nullable $tmp2994 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2991, &$s2993);
            start2990 = $tmp2994;
            if (((panda$core$Bit) { !start2990.nonnull }).value) {
            {
                $tmp2996 = NULL;
                $returnValue2995 = $tmp2996;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2996));
                $tmp2989 = 0;
                goto $l2987;
                $l2997:;
                $tmp2982 = 0;
                goto $l2980;
                $l2998:;
                return $returnValue2995;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp3000, false);
            self->allowLambdas = $tmp3000;
            panda$collections$Array* $tmp3004 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3004);
            $tmp3003 = $tmp3004;
            $tmp3002 = $tmp3003;
            expressions3001 = $tmp3002;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3002));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3003));
            org$pandalanguage$pandac$ASTNode* $tmp3008 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3007 = $tmp3008;
            $tmp3006 = $tmp3007;
            expr3005 = $tmp3006;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3006));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3007));
            if (((panda$core$Bit) { expr3005 == NULL }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp3009, true);
                self->allowLambdas = $tmp3009;
                $tmp3010 = NULL;
                $returnValue2995 = $tmp3010;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3010));
                $tmp2989 = 1;
                goto $l2987;
                $l3011:;
                $tmp2982 = 1;
                goto $l2980;
                $l3012:;
                return $returnValue2995;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions3001, ((panda$core$Object*) expr3005));
            $l3014:;
            panda$core$Int64$init$builtin_int64(&$tmp3018, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3017, $tmp3018);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3019 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3017);
            bool $tmp3016 = ((panda$core$Bit) { $tmp3019.nonnull }).value;
            if (!$tmp3016) goto $l3015;
            {
                {
                    $tmp3020 = expr3005;
                    org$pandalanguage$pandac$ASTNode* $tmp3023 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3022 = $tmp3023;
                    $tmp3021 = $tmp3022;
                    expr3005 = $tmp3021;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3021));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3022));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3020));
                }
                if (((panda$core$Bit) { expr3005 == NULL }).value) {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp3024, true);
                    self->allowLambdas = $tmp3024;
                    $tmp3025 = NULL;
                    $returnValue2995 = $tmp3025;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3025));
                    $tmp2989 = 2;
                    goto $l2987;
                    $l3026:;
                    $tmp2982 = 2;
                    goto $l2980;
                    $l3027:;
                    return $returnValue2995;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(expressions3001, ((panda$core$Object*) expr3005));
            }
            goto $l3014;
            $l3015:;
            panda$core$Bit$init$builtin_bit(&$tmp3029, true);
            self->allowLambdas = $tmp3029;
            panda$core$Int64$init$builtin_int64(&$tmp3031, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3030, $tmp3031);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3033 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3030, &$s3032);
            if (((panda$core$Bit) { !$tmp3033.nonnull }).value) {
            {
                $tmp3034 = NULL;
                $returnValue2995 = $tmp3034;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3034));
                $tmp2989 = 3;
                goto $l2987;
                $l3035:;
                $tmp2982 = 3;
                goto $l2980;
                $l3036:;
                return $returnValue2995;
            }
            }
            panda$collections$Array* $tmp3041 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3041);
            $tmp3040 = $tmp3041;
            $tmp3039 = $tmp3040;
            statements3038 = $tmp3039;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3039));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3040));
            $l3042:;
            while (true) {
            {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3045 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    $match$1396_133044 = $tmp3045.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp3048, 39);
                    panda$core$Bit $tmp3049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1396_133044.$rawValue, $tmp3048);
                    bool $tmp3047 = $tmp3049.value;
                    if ($tmp3047) goto $l3050;
                    panda$core$Int64$init$builtin_int64(&$tmp3051, 40);
                    panda$core$Bit $tmp3052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1396_133044.$rawValue, $tmp3051);
                    $tmp3047 = $tmp3052.value;
                    $l3050:;
                    panda$core$Bit $tmp3053 = { $tmp3047 };
                    bool $tmp3046 = $tmp3053.value;
                    if ($tmp3046) goto $l3054;
                    panda$core$Int64$init$builtin_int64(&$tmp3055, 100);
                    panda$core$Bit $tmp3056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1396_133044.$rawValue, $tmp3055);
                    $tmp3046 = $tmp3056.value;
                    $l3054:;
                    panda$core$Bit $tmp3057 = { $tmp3046 };
                    if ($tmp3057.value) {
                    {
                        goto $l3043;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3060, 28);
                    panda$core$Bit $tmp3061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1396_133044.$rawValue, $tmp3060);
                    bool $tmp3059 = $tmp3061.value;
                    if ($tmp3059) goto $l3062;
                    panda$core$Int64$init$builtin_int64(&$tmp3063, 29);
                    panda$core$Bit $tmp3064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1396_133044.$rawValue, $tmp3063);
                    $tmp3059 = $tmp3064.value;
                    $l3062:;
                    panda$core$Bit $tmp3065 = { $tmp3059 };
                    bool $tmp3058 = $tmp3065.value;
                    if ($tmp3058) goto $l3066;
                    panda$core$Int64$init$builtin_int64(&$tmp3067, 27);
                    panda$core$Bit $tmp3068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1396_133044.$rawValue, $tmp3067);
                    $tmp3058 = $tmp3068.value;
                    $l3066:;
                    panda$core$Bit $tmp3069 = { $tmp3058 };
                    if ($tmp3069.value) {
                    {
                        int $tmp3072;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp3076 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3075 = $tmp3076;
                            $tmp3074 = $tmp3075;
                            stmt3073 = $tmp3074;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3074));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3075));
                            if (((panda$core$Bit) { stmt3073 == NULL }).value) {
                            {
                                $tmp3077 = NULL;
                                $returnValue2995 = $tmp3077;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3077));
                                $tmp3072 = 0;
                                goto $l3070;
                                $l3078:;
                                $tmp2989 = 4;
                                goto $l2987;
                                $l3079:;
                                $tmp2982 = 4;
                                goto $l2980;
                                $l3080:;
                                return $returnValue2995;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements3038, ((panda$core$Object*) stmt3073));
                            $tmp3072 = 1;
                            goto $l3070;
                            $l3082:;
                            goto $l3043;
                        }
                        $l3070:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3073));
                        stmt3073 = NULL;
                        switch ($tmp3072) {
                            case 1: goto $l3082;
                            case 0: goto $l3078;
                        }
                        $l3083:;
                    }
                    }
                    else {
                    {
                        {
                            int $tmp3086;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp3090 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp3089 = $tmp3090;
                                $tmp3088 = $tmp3089;
                                stmt3087 = $tmp3088;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3088));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3089));
                                if (((panda$core$Bit) { stmt3087 == NULL }).value) {
                                {
                                    $tmp3091 = NULL;
                                    $returnValue2995 = $tmp3091;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3091));
                                    $tmp3086 = 0;
                                    goto $l3084;
                                    $l3092:;
                                    $tmp2989 = 5;
                                    goto $l2987;
                                    $l3093:;
                                    $tmp2982 = 5;
                                    goto $l2980;
                                    $l3094:;
                                    return $returnValue2995;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(statements3038, ((panda$core$Object*) stmt3087));
                            }
                            $tmp3086 = -1;
                            goto $l3084;
                            $l3084:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3087));
                            stmt3087 = NULL;
                            switch ($tmp3086) {
                                case -1: goto $l3096;
                                case 0: goto $l3092;
                            }
                            $l3096:;
                        }
                    }
                    }
                    }
                }
            }
            }
            $l3043:;
            org$pandalanguage$pandac$ASTNode* $tmp3099 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3100, 48);
            panda$collections$ImmutableArray* $tmp3102 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions3001);
            $tmp3101 = $tmp3102;
            panda$collections$ImmutableArray* $tmp3104 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements3038);
            $tmp3103 = $tmp3104;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3099, $tmp3100, ((org$pandalanguage$pandac$parser$Token) start2990.value).position, $tmp3101, $tmp3103);
            $tmp3098 = $tmp3099;
            $tmp3097 = $tmp3098;
            $returnValue2995 = $tmp3097;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3097));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3098));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3101));
            $tmp2989 = 6;
            goto $l2987;
            $l3105:;
            $tmp2982 = 6;
            goto $l2980;
            $l3106:;
            return $returnValue2995;
        }
        $l2987:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3038));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3005));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions3001));
        expressions3001 = NULL;
        expr3005 = NULL;
        statements3038 = NULL;
        switch ($tmp2989) {
            case 3: goto $l3035;
            case 6: goto $l3105;
            case 2: goto $l3026;
            case 1: goto $l3011;
            case 5: goto $l3093;
            case 4: goto $l3079;
            case 0: goto $l2997;
        }
        $l3108:;
    }
    $tmp2982 = -1;
    goto $l2980;
    $l2980:;
    if (self->allowLambdas.value) goto $l3110; else goto $l3111;
    $l3111:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3112, (panda$core$Int64) { 1369 }, &$s3113);
    abort();
    $l3110:;
    switch ($tmp2982) {
        case 2: goto $l3027;
        case 6: goto $l3106;
        case 5: goto $l3094;
        case 0: goto $l2998;
        case 1: goto $l3012;
        case -1: goto $l3109;
        case 4: goto $l3080;
        case 3: goto $l3036;
    }
    $l3109:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3117;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3118;
    panda$core$Int64 $tmp3119;
    org$pandalanguage$pandac$ASTNode* $returnValue3122;
    org$pandalanguage$pandac$ASTNode* $tmp3123;
    org$pandalanguage$pandac$ASTNode* expr3126 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3127;
    org$pandalanguage$pandac$ASTNode* $tmp3128;
    org$pandalanguage$pandac$ASTNode* $tmp3130;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3133;
    panda$core$Int64 $tmp3134;
    org$pandalanguage$pandac$ASTNode* $tmp3137;
    panda$collections$Array* whens3140 = NULL;
    panda$collections$Array* $tmp3141;
    panda$collections$Array* $tmp3142;
    panda$collections$Array* other3144 = NULL;
    panda$collections$Array* $tmp3145;
    org$pandalanguage$pandac$parser$Token token3148;
    org$pandalanguage$pandac$parser$Token$Kind $match$1437_133150;
    panda$core$Int64 $tmp3151;
    panda$core$Int64 $tmp3153;
    org$pandalanguage$pandac$ASTNode* w3158 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3159;
    org$pandalanguage$pandac$ASTNode* $tmp3160;
    org$pandalanguage$pandac$ASTNode* $tmp3162;
    panda$core$Int64 $tmp3167;
    org$pandalanguage$pandac$parser$Token o3169;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3171;
    panda$core$Int64 $tmp3172;
    org$pandalanguage$pandac$ASTNode* $tmp3175;
    panda$collections$Array* $tmp3178;
    panda$collections$Array* $tmp3179;
    panda$collections$Array* $tmp3180;
    org$pandalanguage$pandac$parser$Token$Kind $match$1453_253184;
    panda$core$Int64 $tmp3186;
    panda$core$Int64 $tmp3190;
    panda$core$Int64 $tmp3193;
    panda$core$Int64 $tmp3197;
    org$pandalanguage$pandac$ASTNode* stmt3203 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3204;
    org$pandalanguage$pandac$ASTNode* $tmp3205;
    org$pandalanguage$pandac$ASTNode* $tmp3207;
    org$pandalanguage$pandac$ASTNode* stmt3216 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3217;
    org$pandalanguage$pandac$ASTNode* $tmp3218;
    org$pandalanguage$pandac$ASTNode* $tmp3220;
    panda$core$String* $tmp3225;
    panda$core$String* $tmp3227;
    panda$core$String* $tmp3228;
    panda$core$String* $tmp3230;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3236;
    panda$core$Int64 $tmp3237;
    org$pandalanguage$pandac$ASTNode* $tmp3240;
    org$pandalanguage$pandac$ASTNode* $tmp3243;
    org$pandalanguage$pandac$ASTNode* $tmp3244;
    panda$core$Int64 $tmp3246;
    panda$collections$ImmutableArray* $tmp3247;
    panda$collections$ImmutableArray* $tmp3249;
    org$pandalanguage$pandac$ASTNode* $tmp3253;
    org$pandalanguage$pandac$ASTNode* $tmp3254;
    panda$core$Int64 $tmp3256;
    panda$collections$ImmutableArray* $tmp3257;
    int $tmp3116;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3119, 38);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3118, $tmp3119);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3121 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3118, &$s3120);
        start3117 = $tmp3121;
        if (((panda$core$Bit) { !start3117.nonnull }).value) {
        {
            $tmp3123 = NULL;
            $returnValue3122 = $tmp3123;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3123));
            $tmp3116 = 0;
            goto $l3114;
            $l3124:;
            return $returnValue3122;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3129 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3128 = $tmp3129;
        $tmp3127 = $tmp3128;
        expr3126 = $tmp3127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3128));
        if (((panda$core$Bit) { expr3126 == NULL }).value) {
        {
            $tmp3130 = NULL;
            $returnValue3122 = $tmp3130;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3130));
            $tmp3116 = 1;
            goto $l3114;
            $l3131:;
            return $returnValue3122;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3134, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3133, $tmp3134);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3136 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3133, &$s3135);
        if (((panda$core$Bit) { !$tmp3136.nonnull }).value) {
        {
            $tmp3137 = NULL;
            $returnValue3122 = $tmp3137;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3137));
            $tmp3116 = 2;
            goto $l3114;
            $l3138:;
            return $returnValue3122;
        }
        }
        panda$collections$Array* $tmp3143 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3143);
        $tmp3142 = $tmp3143;
        $tmp3141 = $tmp3142;
        whens3140 = $tmp3141;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3141));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3142));
        $tmp3145 = NULL;
        other3144 = $tmp3145;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3145));
        $l3146:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3149 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token3148 = $tmp3149;
            {
                $match$1437_133150 = token3148.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3151, 100);
                panda$core$Bit $tmp3152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1437_133150.$rawValue, $tmp3151);
                if ($tmp3152.value) {
                {
                    goto $l3147;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3153, 39);
                panda$core$Bit $tmp3154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1437_133150.$rawValue, $tmp3153);
                if ($tmp3154.value) {
                {
                    int $tmp3157;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3161 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3160 = $tmp3161;
                        $tmp3159 = $tmp3160;
                        w3158 = $tmp3159;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3159));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3160));
                        if (((panda$core$Bit) { w3158 == NULL }).value) {
                        {
                            $tmp3162 = NULL;
                            $returnValue3122 = $tmp3162;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3162));
                            $tmp3157 = 0;
                            goto $l3155;
                            $l3163:;
                            $tmp3116 = 3;
                            goto $l3114;
                            $l3164:;
                            return $returnValue3122;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens3140, ((panda$core$Object*) w3158));
                    }
                    $tmp3157 = -1;
                    goto $l3155;
                    $l3155:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3158));
                    w3158 = NULL;
                    switch ($tmp3157) {
                        case -1: goto $l3166;
                        case 0: goto $l3163;
                    }
                    $l3166:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3167, 40);
                panda$core$Bit $tmp3168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1437_133150.$rawValue, $tmp3167);
                if ($tmp3168.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3170 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o3169 = $tmp3170;
                    panda$core$Int64$init$builtin_int64(&$tmp3172, 95);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3171, $tmp3172);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3174 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3171, &$s3173);
                    if (((panda$core$Bit) { !$tmp3174.nonnull }).value) {
                    {
                        $tmp3175 = NULL;
                        $returnValue3122 = $tmp3175;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3175));
                        $tmp3116 = 4;
                        goto $l3114;
                        $l3176:;
                        return $returnValue3122;
                    }
                    }
                    {
                        $tmp3178 = other3144;
                        panda$collections$Array* $tmp3181 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp3181);
                        $tmp3180 = $tmp3181;
                        $tmp3179 = $tmp3180;
                        other3144 = $tmp3179;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3179));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3180));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3178));
                    }
                    $l3182:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp3185 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1453_253184 = $tmp3185.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp3186, 100);
                            panda$core$Bit $tmp3187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1453_253184.$rawValue, $tmp3186);
                            if ($tmp3187.value) {
                            {
                                goto $l3183;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp3190, 28);
                            panda$core$Bit $tmp3191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1453_253184.$rawValue, $tmp3190);
                            bool $tmp3189 = $tmp3191.value;
                            if ($tmp3189) goto $l3192;
                            panda$core$Int64$init$builtin_int64(&$tmp3193, 29);
                            panda$core$Bit $tmp3194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1453_253184.$rawValue, $tmp3193);
                            $tmp3189 = $tmp3194.value;
                            $l3192:;
                            panda$core$Bit $tmp3195 = { $tmp3189 };
                            bool $tmp3188 = $tmp3195.value;
                            if ($tmp3188) goto $l3196;
                            panda$core$Int64$init$builtin_int64(&$tmp3197, 27);
                            panda$core$Bit $tmp3198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1453_253184.$rawValue, $tmp3197);
                            $tmp3188 = $tmp3198.value;
                            $l3196:;
                            panda$core$Bit $tmp3199 = { $tmp3188 };
                            if ($tmp3199.value) {
                            {
                                int $tmp3202;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3206 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3205 = $tmp3206;
                                    $tmp3204 = $tmp3205;
                                    stmt3203 = $tmp3204;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3204));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3205));
                                    if (((panda$core$Bit) { stmt3203 == NULL }).value) {
                                    {
                                        $tmp3207 = NULL;
                                        $returnValue3122 = $tmp3207;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3207));
                                        $tmp3202 = 0;
                                        goto $l3200;
                                        $l3208:;
                                        $tmp3116 = 5;
                                        goto $l3114;
                                        $l3209:;
                                        return $returnValue3122;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3144, ((panda$core$Object*) stmt3203));
                                    $tmp3202 = 1;
                                    goto $l3200;
                                    $l3211:;
                                    goto $l3183;
                                }
                                $l3200:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3203));
                                stmt3203 = NULL;
                                switch ($tmp3202) {
                                    case 0: goto $l3208;
                                    case 1: goto $l3211;
                                }
                                $l3212:;
                            }
                            }
                            else {
                            {
                                int $tmp3215;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3219 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3218 = $tmp3219;
                                    $tmp3217 = $tmp3218;
                                    stmt3216 = $tmp3217;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3217));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3218));
                                    if (((panda$core$Bit) { stmt3216 == NULL }).value) {
                                    {
                                        $tmp3220 = NULL;
                                        $returnValue3122 = $tmp3220;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3220));
                                        $tmp3215 = 0;
                                        goto $l3213;
                                        $l3221:;
                                        $tmp3116 = 6;
                                        goto $l3114;
                                        $l3222:;
                                        return $returnValue3122;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3144, ((panda$core$Object*) stmt3216));
                                }
                                $tmp3215 = -1;
                                goto $l3213;
                                $l3213:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3216));
                                stmt3216 = NULL;
                                switch ($tmp3215) {
                                    case -1: goto $l3224;
                                    case 0: goto $l3221;
                                }
                                $l3224:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l3183:;
                    goto $l3147;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp3231 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3148);
                    $tmp3230 = $tmp3231;
                    panda$core$String* $tmp3232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3229, $tmp3230);
                    $tmp3228 = $tmp3232;
                    panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3228, &$s3233);
                    $tmp3227 = $tmp3234;
                    panda$core$String* $tmp3235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3226, $tmp3227);
                    $tmp3225 = $tmp3235;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token3148, $tmp3225);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3225));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3227));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3228));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3230));
                    goto $l3147;
                }
                }
                }
                }
            }
        }
        }
        $l3147:;
        panda$core$Int64$init$builtin_int64(&$tmp3237, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3236, $tmp3237);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3239 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3236, &$s3238);
        if (((panda$core$Bit) { !$tmp3239.nonnull }).value) {
        {
            $tmp3240 = NULL;
            $returnValue3122 = $tmp3240;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3240));
            $tmp3116 = 7;
            goto $l3114;
            $l3241:;
            return $returnValue3122;
        }
        }
        if (((panda$core$Bit) { other3144 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3245 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3246, 25);
            panda$collections$ImmutableArray* $tmp3248 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3140);
            $tmp3247 = $tmp3248;
            panda$collections$ImmutableArray* $tmp3250 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other3144);
            $tmp3249 = $tmp3250;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3245, $tmp3246, ((org$pandalanguage$pandac$parser$Token) start3117.value).position, expr3126, $tmp3247, $tmp3249);
            $tmp3244 = $tmp3245;
            $tmp3243 = $tmp3244;
            $returnValue3122 = $tmp3243;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3243));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3244));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3249));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3247));
            $tmp3116 = 8;
            goto $l3114;
            $l3251:;
            return $returnValue3122;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3255 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3256, 25);
        panda$collections$ImmutableArray* $tmp3258 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3140);
        $tmp3257 = $tmp3258;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3255, $tmp3256, ((org$pandalanguage$pandac$parser$Token) start3117.value).position, expr3126, $tmp3257, NULL);
        $tmp3254 = $tmp3255;
        $tmp3253 = $tmp3254;
        $returnValue3122 = $tmp3253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3257));
        $tmp3116 = 9;
        goto $l3114;
        $l3259:;
        return $returnValue3122;
    }
    $l3114:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other3144));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens3140));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3126));
    expr3126 = NULL;
    whens3140 = NULL;
    switch ($tmp3116) {
        case 9: goto $l3259;
        case 2: goto $l3138;
        case 4: goto $l3176;
        case 8: goto $l3251;
        case 3: goto $l3164;
        case 1: goto $l3131;
        case 7: goto $l3241;
        case 5: goto $l3209;
        case 0: goto $l3124;
        case 6: goto $l3222;
    }
    $l3261:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3265;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3266;
    panda$core$Int64 $tmp3267;
    panda$collections$ImmutableArray* $returnValue3270;
    panda$collections$ImmutableArray* $tmp3271;
    panda$collections$Array* result3274 = NULL;
    panda$collections$Array* $tmp3275;
    panda$collections$Array* $tmp3276;
    org$pandalanguage$pandac$parser$Token$Kind $match$1498_133280;
    panda$core$Int64 $tmp3282;
    panda$core$Int64 $tmp3286;
    panda$core$Int64 $tmp3289;
    panda$core$Int64 $tmp3293;
    org$pandalanguage$pandac$ASTNode* stmt3299 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3300;
    org$pandalanguage$pandac$ASTNode* $tmp3301;
    panda$collections$ImmutableArray* $tmp3303;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3307;
    panda$core$Int64 $tmp3308;
    panda$collections$ImmutableArray* $tmp3311;
    org$pandalanguage$pandac$ASTNode* stmt3320 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3321;
    org$pandalanguage$pandac$ASTNode* $tmp3322;
    panda$collections$ImmutableArray* $tmp3324;
    panda$collections$ImmutableArray* $tmp3329;
    panda$collections$ImmutableArray* $tmp3330;
    int $tmp3264;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3267, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3266, $tmp3267);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3269 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3266, &$s3268);
        start3265 = $tmp3269;
        if (((panda$core$Bit) { !start3265.nonnull }).value) {
        {
            $tmp3271 = NULL;
            $returnValue3270 = $tmp3271;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3271));
            $tmp3264 = 0;
            goto $l3262;
            $l3272:;
            return $returnValue3270;
        }
        }
        panda$collections$Array* $tmp3277 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3277);
        $tmp3276 = $tmp3277;
        $tmp3275 = $tmp3276;
        result3274 = $tmp3275;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3275));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3276));
        $l3278:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp3281 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1498_133280 = $tmp3281.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3282, 100);
                panda$core$Bit $tmp3283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133280.$rawValue, $tmp3282);
                if ($tmp3283.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l3279;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3286, 28);
                panda$core$Bit $tmp3287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133280.$rawValue, $tmp3286);
                bool $tmp3285 = $tmp3287.value;
                if ($tmp3285) goto $l3288;
                panda$core$Int64$init$builtin_int64(&$tmp3289, 29);
                panda$core$Bit $tmp3290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133280.$rawValue, $tmp3289);
                $tmp3285 = $tmp3290.value;
                $l3288:;
                panda$core$Bit $tmp3291 = { $tmp3285 };
                bool $tmp3284 = $tmp3291.value;
                if ($tmp3284) goto $l3292;
                panda$core$Int64$init$builtin_int64(&$tmp3293, 27);
                panda$core$Bit $tmp3294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133280.$rawValue, $tmp3293);
                $tmp3284 = $tmp3294.value;
                $l3292:;
                panda$core$Bit $tmp3295 = { $tmp3284 };
                if ($tmp3295.value) {
                {
                    int $tmp3298;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3302 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3301 = $tmp3302;
                        $tmp3300 = $tmp3301;
                        stmt3299 = $tmp3300;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3300));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3301));
                        if (((panda$core$Bit) { stmt3299 == NULL }).value) {
                        {
                            $tmp3303 = NULL;
                            $returnValue3270 = $tmp3303;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3303));
                            $tmp3298 = 0;
                            goto $l3296;
                            $l3304:;
                            $tmp3264 = 1;
                            goto $l3262;
                            $l3305:;
                            return $returnValue3270;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp3308, 100);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3307, $tmp3308);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp3310 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3307, &$s3309);
                        if (((panda$core$Bit) { !$tmp3310.nonnull }).value) {
                        {
                            $tmp3311 = NULL;
                            $returnValue3270 = $tmp3311;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3311));
                            $tmp3298 = 1;
                            goto $l3296;
                            $l3312:;
                            $tmp3264 = 2;
                            goto $l3262;
                            $l3313:;
                            return $returnValue3270;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3274, ((panda$core$Object*) stmt3299));
                        $tmp3298 = 2;
                        goto $l3296;
                        $l3315:;
                        goto $l3279;
                    }
                    $l3296:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3299));
                    stmt3299 = NULL;
                    switch ($tmp3298) {
                        case 1: goto $l3312;
                        case 2: goto $l3315;
                        case 0: goto $l3304;
                    }
                    $l3316:;
                }
                }
                else {
                {
                    int $tmp3319;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3323 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3322 = $tmp3323;
                        $tmp3321 = $tmp3322;
                        stmt3320 = $tmp3321;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3321));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3322));
                        if (((panda$core$Bit) { stmt3320 == NULL }).value) {
                        {
                            $tmp3324 = NULL;
                            $returnValue3270 = $tmp3324;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3324));
                            $tmp3319 = 0;
                            goto $l3317;
                            $l3325:;
                            $tmp3264 = 3;
                            goto $l3262;
                            $l3326:;
                            return $returnValue3270;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3274, ((panda$core$Object*) stmt3320));
                    }
                    $tmp3319 = -1;
                    goto $l3317;
                    $l3317:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3320));
                    stmt3320 = NULL;
                    switch ($tmp3319) {
                        case 0: goto $l3325;
                        case -1: goto $l3328;
                    }
                    $l3328:;
                }
                }
                }
            }
        }
        }
        $l3279:;
        panda$collections$ImmutableArray* $tmp3331 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3274);
        $tmp3330 = $tmp3331;
        $tmp3329 = $tmp3330;
        $returnValue3270 = $tmp3329;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3329));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3330));
        $tmp3264 = 4;
        goto $l3262;
        $l3332:;
        return $returnValue3270;
    }
    $l3262:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3274));
    result3274 = NULL;
    switch ($tmp3264) {
        case 2: goto $l3313;
        case 4: goto $l3332;
        case 0: goto $l3272;
        case 3: goto $l3326;
        case 1: goto $l3305;
    }
    $l3334:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements3338 = NULL;
    panda$collections$ImmutableArray* $tmp3339;
    panda$collections$ImmutableArray* $tmp3340;
    org$pandalanguage$pandac$ASTNode* $returnValue3342;
    org$pandalanguage$pandac$ASTNode* $tmp3343;
    org$pandalanguage$pandac$ASTNode* $tmp3346;
    org$pandalanguage$pandac$ASTNode* $tmp3347;
    panda$core$Int64 $tmp3349;
    org$pandalanguage$pandac$Position $tmp3350;
    int $tmp3337;
    {
        panda$collections$ImmutableArray* $tmp3341 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3340 = $tmp3341;
        $tmp3339 = $tmp3340;
        statements3338 = $tmp3339;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3340));
        if (((panda$core$Bit) { statements3338 == NULL }).value) {
        {
            $tmp3343 = NULL;
            $returnValue3342 = $tmp3343;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3343));
            $tmp3337 = 0;
            goto $l3335;
            $l3344:;
            return $returnValue3342;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3348 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3349, 6);
        org$pandalanguage$pandac$Position$init(&$tmp3350);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3348, $tmp3349, $tmp3350, statements3338);
        $tmp3347 = $tmp3348;
        $tmp3346 = $tmp3347;
        $returnValue3342 = $tmp3346;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3346));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3347));
        $tmp3337 = 1;
        goto $l3335;
        $l3351:;
        return $returnValue3342;
    }
    $l3335:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3338));
    statements3338 = NULL;
    switch ($tmp3337) {
        case 1: goto $l3351;
        case 0: goto $l3344;
    }
    $l3353:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start3357 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3358;
    org$pandalanguage$pandac$ASTNode* $tmp3359;
    org$pandalanguage$pandac$ASTNode* $returnValue3361;
    org$pandalanguage$pandac$ASTNode* $tmp3362;
    org$pandalanguage$pandac$parser$Token$Kind $match$1542_93365;
    panda$core$Int64 $tmp3382;
    panda$core$Int64 $tmp3385;
    panda$core$Int64 $tmp3389;
    panda$core$Int64 $tmp3393;
    panda$core$Int64 $tmp3397;
    panda$core$Int64 $tmp3401;
    panda$core$Int64 $tmp3405;
    panda$core$Int64 $tmp3409;
    panda$core$Int64 $tmp3413;
    panda$core$Int64 $tmp3417;
    panda$core$Int64 $tmp3421;
    panda$core$Int64 $tmp3425;
    panda$core$Int64 $tmp3429;
    panda$core$Int64 $tmp3433;
    panda$core$Int64 $tmp3437;
    panda$core$Int64 $tmp3441;
    org$pandalanguage$pandac$parser$Token op3447;
    org$pandalanguage$pandac$ASTNode* rvalue3449 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3450;
    org$pandalanguage$pandac$ASTNode* $tmp3451;
    org$pandalanguage$pandac$ASTNode* $tmp3453;
    org$pandalanguage$pandac$ASTNode* $tmp3457;
    org$pandalanguage$pandac$ASTNode* $tmp3458;
    panda$core$Int64 $tmp3460;
    panda$core$Int64 $tmp3467;
    org$pandalanguage$pandac$parser$Token op3474;
    org$pandalanguage$pandac$ASTNode* rvalue3476 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3477;
    org$pandalanguage$pandac$ASTNode* $tmp3478;
    org$pandalanguage$pandac$ASTNode* $tmp3480;
    org$pandalanguage$pandac$ASTNode* $tmp3484;
    org$pandalanguage$pandac$ASTNode* $tmp3485;
    panda$core$Int64 $tmp3487;
    org$pandalanguage$pandac$ASTNode* $tmp3494;
    int $tmp3356;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3360 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3359 = $tmp3360;
        $tmp3358 = $tmp3359;
        start3357 = $tmp3358;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3358));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3359));
        if (((panda$core$Bit) { start3357 == NULL }).value) {
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
        {
            org$pandalanguage$pandac$parser$Token $tmp3366 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1542_93365 = $tmp3366.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3382, 73);
            panda$core$Bit $tmp3383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3382);
            bool $tmp3381 = $tmp3383.value;
            if ($tmp3381) goto $l3384;
            panda$core$Int64$init$builtin_int64(&$tmp3385, 74);
            panda$core$Bit $tmp3386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3385);
            $tmp3381 = $tmp3386.value;
            $l3384:;
            panda$core$Bit $tmp3387 = { $tmp3381 };
            bool $tmp3380 = $tmp3387.value;
            if ($tmp3380) goto $l3388;
            panda$core$Int64$init$builtin_int64(&$tmp3389, 75);
            panda$core$Bit $tmp3390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3389);
            $tmp3380 = $tmp3390.value;
            $l3388:;
            panda$core$Bit $tmp3391 = { $tmp3380 };
            bool $tmp3379 = $tmp3391.value;
            if ($tmp3379) goto $l3392;
            panda$core$Int64$init$builtin_int64(&$tmp3393, 76);
            panda$core$Bit $tmp3394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3393);
            $tmp3379 = $tmp3394.value;
            $l3392:;
            panda$core$Bit $tmp3395 = { $tmp3379 };
            bool $tmp3378 = $tmp3395.value;
            if ($tmp3378) goto $l3396;
            panda$core$Int64$init$builtin_int64(&$tmp3397, 77);
            panda$core$Bit $tmp3398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3397);
            $tmp3378 = $tmp3398.value;
            $l3396:;
            panda$core$Bit $tmp3399 = { $tmp3378 };
            bool $tmp3377 = $tmp3399.value;
            if ($tmp3377) goto $l3400;
            panda$core$Int64$init$builtin_int64(&$tmp3401, 78);
            panda$core$Bit $tmp3402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3401);
            $tmp3377 = $tmp3402.value;
            $l3400:;
            panda$core$Bit $tmp3403 = { $tmp3377 };
            bool $tmp3376 = $tmp3403.value;
            if ($tmp3376) goto $l3404;
            panda$core$Int64$init$builtin_int64(&$tmp3405, 79);
            panda$core$Bit $tmp3406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3405);
            $tmp3376 = $tmp3406.value;
            $l3404:;
            panda$core$Bit $tmp3407 = { $tmp3376 };
            bool $tmp3375 = $tmp3407.value;
            if ($tmp3375) goto $l3408;
            panda$core$Int64$init$builtin_int64(&$tmp3409, 80);
            panda$core$Bit $tmp3410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3409);
            $tmp3375 = $tmp3410.value;
            $l3408:;
            panda$core$Bit $tmp3411 = { $tmp3375 };
            bool $tmp3374 = $tmp3411.value;
            if ($tmp3374) goto $l3412;
            panda$core$Int64$init$builtin_int64(&$tmp3413, 81);
            panda$core$Bit $tmp3414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3413);
            $tmp3374 = $tmp3414.value;
            $l3412:;
            panda$core$Bit $tmp3415 = { $tmp3374 };
            bool $tmp3373 = $tmp3415.value;
            if ($tmp3373) goto $l3416;
            panda$core$Int64$init$builtin_int64(&$tmp3417, 82);
            panda$core$Bit $tmp3418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3417);
            $tmp3373 = $tmp3418.value;
            $l3416:;
            panda$core$Bit $tmp3419 = { $tmp3373 };
            bool $tmp3372 = $tmp3419.value;
            if ($tmp3372) goto $l3420;
            panda$core$Int64$init$builtin_int64(&$tmp3421, 83);
            panda$core$Bit $tmp3422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3421);
            $tmp3372 = $tmp3422.value;
            $l3420:;
            panda$core$Bit $tmp3423 = { $tmp3372 };
            bool $tmp3371 = $tmp3423.value;
            if ($tmp3371) goto $l3424;
            panda$core$Int64$init$builtin_int64(&$tmp3425, 84);
            panda$core$Bit $tmp3426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3425);
            $tmp3371 = $tmp3426.value;
            $l3424:;
            panda$core$Bit $tmp3427 = { $tmp3371 };
            bool $tmp3370 = $tmp3427.value;
            if ($tmp3370) goto $l3428;
            panda$core$Int64$init$builtin_int64(&$tmp3429, 85);
            panda$core$Bit $tmp3430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3429);
            $tmp3370 = $tmp3430.value;
            $l3428:;
            panda$core$Bit $tmp3431 = { $tmp3370 };
            bool $tmp3369 = $tmp3431.value;
            if ($tmp3369) goto $l3432;
            panda$core$Int64$init$builtin_int64(&$tmp3433, 86);
            panda$core$Bit $tmp3434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3433);
            $tmp3369 = $tmp3434.value;
            $l3432:;
            panda$core$Bit $tmp3435 = { $tmp3369 };
            bool $tmp3368 = $tmp3435.value;
            if ($tmp3368) goto $l3436;
            panda$core$Int64$init$builtin_int64(&$tmp3437, 87);
            panda$core$Bit $tmp3438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3437);
            $tmp3368 = $tmp3438.value;
            $l3436:;
            panda$core$Bit $tmp3439 = { $tmp3368 };
            bool $tmp3367 = $tmp3439.value;
            if ($tmp3367) goto $l3440;
            panda$core$Int64$init$builtin_int64(&$tmp3441, 88);
            panda$core$Bit $tmp3442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3441);
            $tmp3367 = $tmp3442.value;
            $l3440:;
            panda$core$Bit $tmp3443 = { $tmp3367 };
            if ($tmp3443.value) {
            {
                int $tmp3446;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3448 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3447 = $tmp3448;
                    org$pandalanguage$pandac$ASTNode* $tmp3452 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3451 = $tmp3452;
                    $tmp3450 = $tmp3451;
                    rvalue3449 = $tmp3450;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3450));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3451));
                    if (((panda$core$Bit) { rvalue3449 == NULL }).value) {
                    {
                        $tmp3453 = NULL;
                        $returnValue3361 = $tmp3453;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3453));
                        $tmp3446 = 0;
                        goto $l3444;
                        $l3454:;
                        $tmp3356 = 1;
                        goto $l3354;
                        $l3455:;
                        return $returnValue3361;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3459 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3460, 4);
                    org$pandalanguage$pandac$Position $tmp3462 = (($fn3461) start3357->$class->vtable[2])(start3357);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3459, $tmp3460, $tmp3462, start3357, op3447.kind, rvalue3449);
                    $tmp3458 = $tmp3459;
                    $tmp3457 = $tmp3458;
                    $returnValue3361 = $tmp3457;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3457));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3458));
                    $tmp3446 = 1;
                    goto $l3444;
                    $l3463:;
                    $tmp3356 = 2;
                    goto $l3354;
                    $l3464:;
                    return $returnValue3361;
                }
                $l3444:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3449));
                rvalue3449 = NULL;
                switch ($tmp3446) {
                    case 1: goto $l3463;
                    case 0: goto $l3454;
                }
                $l3466:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3467, 58);
            panda$core$Bit $tmp3468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1542_93365.$rawValue, $tmp3467);
            if ($tmp3468.value) {
            {
                int $tmp3471;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3472 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3472, &$s3473);
                    org$pandalanguage$pandac$parser$Token $tmp3475 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3474 = $tmp3475;
                    org$pandalanguage$pandac$ASTNode* $tmp3479 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3478 = $tmp3479;
                    $tmp3477 = $tmp3478;
                    rvalue3476 = $tmp3477;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3477));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3478));
                    if (((panda$core$Bit) { rvalue3476 == NULL }).value) {
                    {
                        $tmp3480 = NULL;
                        $returnValue3361 = $tmp3480;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3480));
                        $tmp3471 = 0;
                        goto $l3469;
                        $l3481:;
                        $tmp3356 = 3;
                        goto $l3354;
                        $l3482:;
                        return $returnValue3361;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3486 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3487, 4);
                    org$pandalanguage$pandac$Position $tmp3489 = (($fn3488) start3357->$class->vtable[2])(start3357);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3486, $tmp3487, $tmp3489, start3357, op3474.kind, rvalue3476);
                    $tmp3485 = $tmp3486;
                    $tmp3484 = $tmp3485;
                    $returnValue3361 = $tmp3484;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3484));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3485));
                    $tmp3471 = 1;
                    goto $l3469;
                    $l3490:;
                    $tmp3356 = 4;
                    goto $l3354;
                    $l3491:;
                    return $returnValue3361;
                }
                $l3469:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3476));
                rvalue3476 = NULL;
                switch ($tmp3471) {
                    case 1: goto $l3490;
                    case 0: goto $l3481;
                }
                $l3493:;
            }
            }
            else {
            {
                $tmp3494 = start3357;
                $returnValue3361 = $tmp3494;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3494));
                $tmp3356 = 5;
                goto $l3354;
                $l3495:;
                return $returnValue3361;
            }
            }
            }
        }
    }
    $tmp3356 = -1;
    goto $l3354;
    $l3354:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start3357));
    start3357 = NULL;
    switch ($tmp3356) {
        case 3: goto $l3482;
        case 1: goto $l3455;
        case 2: goto $l3464;
        case 4: goto $l3491;
        case 5: goto $l3495;
        case 0: goto $l3363;
        case -1: goto $l3497;
    }
    $l3497:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t3501 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3502;
    org$pandalanguage$pandac$ASTNode* $tmp3503;
    org$pandalanguage$pandac$ASTNode* $returnValue3505;
    org$pandalanguage$pandac$ASTNode* $tmp3506;
    org$pandalanguage$pandac$ASTNode* value3509 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3510;
    panda$core$Int64 $tmp3511;
    org$pandalanguage$pandac$ASTNode* $tmp3513;
    org$pandalanguage$pandac$ASTNode* $tmp3514;
    org$pandalanguage$pandac$ASTNode* $tmp3515;
    org$pandalanguage$pandac$ASTNode* $tmp3517;
    panda$core$Int64 $tmp3521;
    org$pandalanguage$pandac$ASTNode* $tmp3525;
    org$pandalanguage$pandac$ASTNode* $tmp3526;
    org$pandalanguage$pandac$ASTNode* $tmp3527;
    org$pandalanguage$pandac$ASTNode* $tmp3529;
    org$pandalanguage$pandac$ASTNode* $tmp3532;
    org$pandalanguage$pandac$ASTNode* $tmp3533;
    org$pandalanguage$pandac$ASTNode* $tmp3534;
    org$pandalanguage$pandac$ASTNode* $tmp3535;
    panda$core$Int64 $tmp3537;
    int $tmp3500;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3504 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3503 = $tmp3504;
        $tmp3502 = $tmp3503;
        t3501 = $tmp3502;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3502));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3503));
        if (((panda$core$Bit) { t3501 == NULL }).value) {
        {
            $tmp3506 = NULL;
            $returnValue3505 = $tmp3506;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3506));
            $tmp3500 = 0;
            goto $l3498;
            $l3507:;
            return $returnValue3505;
        }
        }
        memset(&value3509, 0, sizeof(value3509));
        panda$core$Int64$init$builtin_int64(&$tmp3511, 73);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3510, $tmp3511);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3512 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3510);
        if (((panda$core$Bit) { $tmp3512.nonnull }).value) {
        {
            {
                $tmp3513 = value3509;
                org$pandalanguage$pandac$ASTNode* $tmp3516 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3515 = $tmp3516;
                $tmp3514 = $tmp3515;
                value3509 = $tmp3514;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3514));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3515));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3513));
            }
            if (((panda$core$Bit) { value3509 == NULL }).value) {
            {
                $tmp3517 = NULL;
                $returnValue3505 = $tmp3517;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3517));
                $tmp3500 = 1;
                goto $l3498;
                $l3518:;
                return $returnValue3505;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp3520 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3521, 58);
        panda$core$Bit $tmp3522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3520.kind.$rawValue, $tmp3521);
        if ($tmp3522.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3523 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3523, &$s3524);
            {
                $tmp3525 = value3509;
                org$pandalanguage$pandac$ASTNode* $tmp3528 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3527 = $tmp3528;
                $tmp3526 = $tmp3527;
                value3509 = $tmp3526;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3526));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3527));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3525));
            }
            if (((panda$core$Bit) { value3509 == NULL }).value) {
            {
                $tmp3529 = NULL;
                $returnValue3505 = $tmp3529;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3529));
                $tmp3500 = 2;
                goto $l3498;
                $l3530:;
                return $returnValue3505;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3532 = value3509;
                $tmp3533 = NULL;
                value3509 = $tmp3533;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3533));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3532));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3536 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3537, 13);
        org$pandalanguage$pandac$Position $tmp3539 = (($fn3538) t3501->$class->vtable[2])(t3501);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3536, $tmp3537, $tmp3539, t3501, value3509);
        $tmp3535 = $tmp3536;
        $tmp3534 = $tmp3535;
        $returnValue3505 = $tmp3534;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3534));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3535));
        $tmp3500 = 3;
        goto $l3498;
        $l3540:;
        return $returnValue3505;
    }
    $l3498:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value3509));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3501));
    t3501 = NULL;
    switch ($tmp3500) {
        case 1: goto $l3518;
        case 2: goto $l3530;
        case 3: goto $l3540;
        case 0: goto $l3507;
    }
    $l3542:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3546;
    org$pandalanguage$pandac$Variable$Kind kind3548;
    org$pandalanguage$pandac$parser$Token$Kind $match$1601_93549;
    panda$core$Int64 $tmp3550;
    org$pandalanguage$pandac$Variable$Kind $tmp3552;
    panda$core$Int64 $tmp3553;
    panda$core$Int64 $tmp3554;
    org$pandalanguage$pandac$Variable$Kind $tmp3556;
    panda$core$Int64 $tmp3557;
    panda$core$Int64 $tmp3558;
    org$pandalanguage$pandac$Variable$Kind $tmp3560;
    panda$core$Int64 $tmp3561;
    panda$core$Int64 $tmp3562;
    org$pandalanguage$pandac$Variable$Kind $tmp3564;
    panda$core$Int64 $tmp3565;
    panda$collections$Array* declarations3567 = NULL;
    panda$collections$Array* $tmp3568;
    panda$collections$Array* $tmp3569;
    org$pandalanguage$pandac$ASTNode* decl3571 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3572;
    org$pandalanguage$pandac$ASTNode* $tmp3573;
    org$pandalanguage$pandac$ASTNode* $returnValue3575;
    org$pandalanguage$pandac$ASTNode* $tmp3576;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3582;
    panda$core$Int64 $tmp3583;
    org$pandalanguage$pandac$ASTNode* decl3588 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3589;
    org$pandalanguage$pandac$ASTNode* $tmp3590;
    org$pandalanguage$pandac$ASTNode* $tmp3592;
    org$pandalanguage$pandac$ASTNode* $tmp3597;
    org$pandalanguage$pandac$ASTNode* $tmp3598;
    panda$core$Int64 $tmp3600;
    panda$collections$ImmutableArray* $tmp3601;
    int $tmp3545;
    {
        org$pandalanguage$pandac$parser$Token $tmp3547 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start3546 = $tmp3547;
        memset(&kind3548, 0, sizeof(kind3548));
        {
            $match$1601_93549 = start3546.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3550, 23);
            panda$core$Bit $tmp3551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1601_93549.$rawValue, $tmp3550);
            if ($tmp3551.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3553, 0);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3552, $tmp3553);
                kind3548 = $tmp3552;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3554, 24);
            panda$core$Bit $tmp3555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1601_93549.$rawValue, $tmp3554);
            if ($tmp3555.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3557, 1);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3556, $tmp3557);
                kind3548 = $tmp3556;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3558, 25);
            panda$core$Bit $tmp3559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1601_93549.$rawValue, $tmp3558);
            if ($tmp3559.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3561, 3);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3560, $tmp3561);
                kind3548 = $tmp3560;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3562, 26);
            panda$core$Bit $tmp3563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1601_93549.$rawValue, $tmp3562);
            if ($tmp3563.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3565, 2);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3564, $tmp3565);
                kind3548 = $tmp3564;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start3546, &$s3566);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp3570 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3570);
        $tmp3569 = $tmp3570;
        $tmp3568 = $tmp3569;
        declarations3567 = $tmp3568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3569));
        org$pandalanguage$pandac$ASTNode* $tmp3574 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3573 = $tmp3574;
        $tmp3572 = $tmp3573;
        decl3571 = $tmp3572;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3572));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3573));
        if (((panda$core$Bit) { decl3571 == NULL }).value) {
        {
            $tmp3576 = NULL;
            $returnValue3575 = $tmp3576;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3576));
            $tmp3545 = 0;
            goto $l3543;
            $l3577:;
            return $returnValue3575;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations3567, ((panda$core$Object*) decl3571));
        $l3579:;
        panda$core$Int64$init$builtin_int64(&$tmp3583, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3582, $tmp3583);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3584 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3582);
        bool $tmp3581 = ((panda$core$Bit) { $tmp3584.nonnull }).value;
        if (!$tmp3581) goto $l3580;
        {
            int $tmp3587;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3591 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3590 = $tmp3591;
                $tmp3589 = $tmp3590;
                decl3588 = $tmp3589;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3589));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3590));
                if (((panda$core$Bit) { decl3588 == NULL }).value) {
                {
                    $tmp3592 = NULL;
                    $returnValue3575 = $tmp3592;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3592));
                    $tmp3587 = 0;
                    goto $l3585;
                    $l3593:;
                    $tmp3545 = 1;
                    goto $l3543;
                    $l3594:;
                    return $returnValue3575;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations3567, ((panda$core$Object*) decl3588));
            }
            $tmp3587 = -1;
            goto $l3585;
            $l3585:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3588));
            decl3588 = NULL;
            switch ($tmp3587) {
                case 0: goto $l3593;
                case -1: goto $l3596;
            }
            $l3596:;
        }
        goto $l3579;
        $l3580:;
        org$pandalanguage$pandac$ASTNode* $tmp3599 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3600, 47);
        panda$collections$ImmutableArray* $tmp3602 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations3567);
        $tmp3601 = $tmp3602;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3599, $tmp3600, start3546.position, kind3548, $tmp3601);
        $tmp3598 = $tmp3599;
        $tmp3597 = $tmp3598;
        $returnValue3575 = $tmp3597;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3597));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3598));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3601));
        $tmp3545 = 2;
        goto $l3543;
        $l3603:;
        return $returnValue3575;
    }
    $l3543:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3571));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations3567));
    declarations3567 = NULL;
    decl3571 = NULL;
    switch ($tmp3545) {
        case 1: goto $l3594;
        case 2: goto $l3603;
        case 0: goto $l3577;
    }
    $l3605:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3609;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3610;
    panda$core$Int64 $tmp3611;
    org$pandalanguage$pandac$ASTNode* $returnValue3614;
    org$pandalanguage$pandac$ASTNode* $tmp3615;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3618;
    panda$core$Int64 $tmp3619;
    org$pandalanguage$pandac$ASTNode* $tmp3622;
    panda$core$Object* $tmp3625;
    panda$core$Bit $tmp3626;
    org$pandalanguage$pandac$ASTNode* target3628 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3629;
    org$pandalanguage$pandac$ASTNode* $tmp3630;
    panda$core$Int64 $tmp3632;
    panda$core$String* $tmp3633;
    panda$collections$Array* args3635 = NULL;
    panda$collections$Array* $tmp3636;
    panda$collections$Array* $tmp3637;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3639;
    panda$core$Int64 $tmp3640;
    org$pandalanguage$pandac$ASTNode* expr3645 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3646;
    org$pandalanguage$pandac$ASTNode* $tmp3647;
    panda$core$Object* $tmp3649;
    org$pandalanguage$pandac$ASTNode* $tmp3651;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3658;
    panda$core$Int64 $tmp3659;
    org$pandalanguage$pandac$ASTNode* $tmp3661;
    org$pandalanguage$pandac$ASTNode* $tmp3662;
    org$pandalanguage$pandac$ASTNode* $tmp3663;
    panda$core$Object* $tmp3665;
    org$pandalanguage$pandac$ASTNode* $tmp3667;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3671;
    panda$core$Int64 $tmp3672;
    panda$core$Object* $tmp3675;
    org$pandalanguage$pandac$ASTNode* $tmp3677;
    panda$core$Object* $tmp3682;
    org$pandalanguage$pandac$ASTNode* $tmp3684;
    org$pandalanguage$pandac$ASTNode* $tmp3685;
    panda$core$Int64 $tmp3687;
    panda$collections$ImmutableArray* $tmp3688;
    int $tmp3608;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3611, 22);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3610, $tmp3611);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3613 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3610, &$s3612);
        start3609 = $tmp3613;
        if (((panda$core$Bit) { !start3609.nonnull }).value) {
        {
            $tmp3615 = NULL;
            $returnValue3614 = $tmp3615;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3615));
            $tmp3608 = 0;
            goto $l3606;
            $l3616:;
            return $returnValue3614;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3619, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3618, $tmp3619);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3621 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3618, &$s3620);
        if (((panda$core$Bit) { !$tmp3621.nonnull }).value) {
        {
            $tmp3622 = NULL;
            $returnValue3614 = $tmp3622;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3622));
            $tmp3608 = 1;
            goto $l3606;
            $l3623:;
            return $returnValue3614;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp3626, true);
        panda$core$Bit$wrapper* $tmp3627;
        $tmp3627 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp3627->value = $tmp3626;
        $tmp3625 = ((panda$core$Object*) $tmp3627);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp3625);
        panda$core$Panda$unref$panda$core$Object($tmp3625);
        org$pandalanguage$pandac$ASTNode* $tmp3631 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3632, 20);
        panda$core$String* $tmp3634 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3609.value));
        $tmp3633 = $tmp3634;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3631, $tmp3632, ((org$pandalanguage$pandac$parser$Token) start3609.value).position, $tmp3633);
        $tmp3630 = $tmp3631;
        $tmp3629 = $tmp3630;
        target3628 = $tmp3629;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3629));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3630));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3633));
        panda$collections$Array* $tmp3638 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3638);
        $tmp3637 = $tmp3638;
        $tmp3636 = $tmp3637;
        args3635 = $tmp3636;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3636));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3637));
        panda$core$Int64$init$builtin_int64(&$tmp3640, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3639, $tmp3640);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3641 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3639);
        if (((panda$core$Bit) { !$tmp3641.nonnull }).value) {
        {
            int $tmp3644;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3648 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3647 = $tmp3648;
                $tmp3646 = $tmp3647;
                expr3645 = $tmp3646;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3646));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3647));
                if (((panda$core$Bit) { expr3645 == NULL }).value) {
                {
                    panda$core$Object* $tmp3650 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3649 = $tmp3650;
                    panda$core$Panda$unref$panda$core$Object($tmp3649);
                    $tmp3651 = NULL;
                    $returnValue3614 = $tmp3651;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3651));
                    $tmp3644 = 0;
                    goto $l3642;
                    $l3652:;
                    $tmp3608 = 2;
                    goto $l3606;
                    $l3653:;
                    return $returnValue3614;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args3635, ((panda$core$Object*) expr3645));
                $l3655:;
                panda$core$Int64$init$builtin_int64(&$tmp3659, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3658, $tmp3659);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3660 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3658);
                bool $tmp3657 = ((panda$core$Bit) { $tmp3660.nonnull }).value;
                if (!$tmp3657) goto $l3656;
                {
                    {
                        $tmp3661 = expr3645;
                        org$pandalanguage$pandac$ASTNode* $tmp3664 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3663 = $tmp3664;
                        $tmp3662 = $tmp3663;
                        expr3645 = $tmp3662;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3662));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3663));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3661));
                    }
                    if (((panda$core$Bit) { expr3645 == NULL }).value) {
                    {
                        panda$core$Object* $tmp3666 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp3665 = $tmp3666;
                        panda$core$Panda$unref$panda$core$Object($tmp3665);
                        $tmp3667 = NULL;
                        $returnValue3614 = $tmp3667;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3667));
                        $tmp3644 = 1;
                        goto $l3642;
                        $l3668:;
                        $tmp3608 = 3;
                        goto $l3606;
                        $l3669:;
                        return $returnValue3614;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args3635, ((panda$core$Object*) expr3645));
                }
                goto $l3655;
                $l3656:;
                panda$core$Int64$init$builtin_int64(&$tmp3672, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3671, $tmp3672);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3674 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3671, &$s3673);
                if (((panda$core$Bit) { !$tmp3674.nonnull }).value) {
                {
                    panda$core$Object* $tmp3676 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3675 = $tmp3676;
                    panda$core$Panda$unref$panda$core$Object($tmp3675);
                    $tmp3677 = NULL;
                    $returnValue3614 = $tmp3677;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3677));
                    $tmp3644 = 2;
                    goto $l3642;
                    $l3678:;
                    $tmp3608 = 4;
                    goto $l3606;
                    $l3679:;
                    return $returnValue3614;
                }
                }
            }
            $tmp3644 = -1;
            goto $l3642;
            $l3642:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3645));
            expr3645 = NULL;
            switch ($tmp3644) {
                case -1: goto $l3681;
                case 1: goto $l3668;
                case 2: goto $l3678;
                case 0: goto $l3652;
            }
            $l3681:;
        }
        }
        panda$core$Object* $tmp3683 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp3682 = $tmp3683;
        panda$core$Panda$unref$panda$core$Object($tmp3682);
        org$pandalanguage$pandac$ASTNode* $tmp3686 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3687, 8);
        panda$collections$ImmutableArray* $tmp3689 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3635);
        $tmp3688 = $tmp3689;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3686, $tmp3687, ((org$pandalanguage$pandac$parser$Token) start3609.value).position, target3628, $tmp3688);
        $tmp3685 = $tmp3686;
        $tmp3684 = $tmp3685;
        $returnValue3614 = $tmp3684;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3684));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3685));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3688));
        $tmp3608 = 5;
        goto $l3606;
        $l3690:;
        return $returnValue3614;
    }
    $l3606:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args3635));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target3628));
    target3628 = NULL;
    args3635 = NULL;
    switch ($tmp3608) {
        case 4: goto $l3679;
        case 3: goto $l3669;
        case 5: goto $l3690;
        case 1: goto $l3623;
        case 2: goto $l3653;
        case 0: goto $l3616;
    }
    $l3692:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3693;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3694;
    panda$core$Int64 $tmp3695;
    org$pandalanguage$pandac$ASTNode* $returnValue3698;
    org$pandalanguage$pandac$ASTNode* $tmp3699;
    org$pandalanguage$pandac$parser$Token$nullable label3701;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3702;
    panda$core$Int64 $tmp3703;
    org$pandalanguage$pandac$ASTNode* $tmp3705;
    org$pandalanguage$pandac$ASTNode* $tmp3706;
    panda$core$Int64 $tmp3708;
    panda$core$String* $tmp3709;
    org$pandalanguage$pandac$ASTNode* $tmp3712;
    org$pandalanguage$pandac$ASTNode* $tmp3713;
    panda$core$Int64 $tmp3715;
    panda$core$Int64$init$builtin_int64(&$tmp3695, 28);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3694, $tmp3695);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3697 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3694, &$s3696);
    start3693 = $tmp3697;
    if (((panda$core$Bit) { !start3693.nonnull }).value) {
    {
        $tmp3699 = NULL;
        $returnValue3698 = $tmp3699;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3699));
        return $returnValue3698;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3703, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3702, $tmp3703);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3704 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3702);
    label3701 = $tmp3704;
    if (((panda$core$Bit) { label3701.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3707 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3708, 7);
        panda$core$String* $tmp3710 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3701.value));
        $tmp3709 = $tmp3710;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3707, $tmp3708, ((org$pandalanguage$pandac$parser$Token) start3693.value).position, $tmp3709);
        $tmp3706 = $tmp3707;
        $tmp3705 = $tmp3706;
        $returnValue3698 = $tmp3705;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3705));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3706));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3709));
        return $returnValue3698;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3714 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3715, 7);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3714, $tmp3715, ((org$pandalanguage$pandac$parser$Token) start3693.value).position, NULL);
    $tmp3713 = $tmp3714;
    $tmp3712 = $tmp3713;
    $returnValue3698 = $tmp3712;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3712));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3713));
    return $returnValue3698;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3717;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3718;
    panda$core$Int64 $tmp3719;
    org$pandalanguage$pandac$ASTNode* $returnValue3722;
    org$pandalanguage$pandac$ASTNode* $tmp3723;
    org$pandalanguage$pandac$parser$Token$nullable label3725;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3726;
    panda$core$Int64 $tmp3727;
    org$pandalanguage$pandac$ASTNode* $tmp3729;
    org$pandalanguage$pandac$ASTNode* $tmp3730;
    panda$core$Int64 $tmp3732;
    panda$core$String* $tmp3733;
    org$pandalanguage$pandac$ASTNode* $tmp3736;
    org$pandalanguage$pandac$ASTNode* $tmp3737;
    panda$core$Int64 $tmp3739;
    panda$core$Int64$init$builtin_int64(&$tmp3719, 29);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3718, $tmp3719);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3721 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3718, &$s3720);
    start3717 = $tmp3721;
    if (((panda$core$Bit) { !start3717.nonnull }).value) {
    {
        $tmp3723 = NULL;
        $returnValue3722 = $tmp3723;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3723));
        return $returnValue3722;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3727, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3726, $tmp3727);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3728 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3726);
    label3725 = $tmp3728;
    if (((panda$core$Bit) { label3725.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3731 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3732, 12);
        panda$core$String* $tmp3734 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3725.value));
        $tmp3733 = $tmp3734;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3731, $tmp3732, ((org$pandalanguage$pandac$parser$Token) start3717.value).position, $tmp3733);
        $tmp3730 = $tmp3731;
        $tmp3729 = $tmp3730;
        $returnValue3722 = $tmp3729;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3729));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3730));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3733));
        return $returnValue3722;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3738 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3739, 12);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3738, $tmp3739, ((org$pandalanguage$pandac$parser$Token) start3717.value).position, NULL);
    $tmp3737 = $tmp3738;
    $tmp3736 = $tmp3737;
    $returnValue3722 = $tmp3736;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3736));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3737));
    return $returnValue3722;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3741;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3742;
    panda$core$Int64 $tmp3743;
    org$pandalanguage$pandac$ASTNode* $returnValue3746;
    org$pandalanguage$pandac$ASTNode* $tmp3747;
    org$pandalanguage$pandac$parser$Token$Kind $match$1705_93749;
    panda$core$Int64 $tmp3753;
    panda$core$Int64 $tmp3756;
    panda$core$Int64 $tmp3760;
    org$pandalanguage$pandac$ASTNode* $tmp3763;
    org$pandalanguage$pandac$ASTNode* $tmp3764;
    panda$core$Int64 $tmp3766;
    panda$collections$Array* children3771 = NULL;
    panda$collections$Array* $tmp3772;
    panda$collections$Array* $tmp3773;
    org$pandalanguage$pandac$ASTNode* expr3775 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3776;
    org$pandalanguage$pandac$ASTNode* $tmp3777;
    org$pandalanguage$pandac$ASTNode* $tmp3779;
    org$pandalanguage$pandac$ASTNode* $tmp3782;
    org$pandalanguage$pandac$ASTNode* $tmp3783;
    panda$core$Int64 $tmp3785;
    panda$core$Int64$init$builtin_int64(&$tmp3743, 27);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3742, $tmp3743);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3745 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3742, &$s3744);
    start3741 = $tmp3745;
    if (((panda$core$Bit) { !start3741.nonnull }).value) {
    {
        $tmp3747 = NULL;
        $returnValue3746 = $tmp3747;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3747));
        return $returnValue3746;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp3750 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1705_93749 = $tmp3750.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3753, 100);
        panda$core$Bit $tmp3754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1705_93749.$rawValue, $tmp3753);
        bool $tmp3752 = $tmp3754.value;
        if ($tmp3752) goto $l3755;
        panda$core$Int64$init$builtin_int64(&$tmp3756, 39);
        panda$core$Bit $tmp3757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1705_93749.$rawValue, $tmp3756);
        $tmp3752 = $tmp3757.value;
        $l3755:;
        panda$core$Bit $tmp3758 = { $tmp3752 };
        bool $tmp3751 = $tmp3758.value;
        if ($tmp3751) goto $l3759;
        panda$core$Int64$init$builtin_int64(&$tmp3760, 40);
        panda$core$Bit $tmp3761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1705_93749.$rawValue, $tmp3760);
        $tmp3751 = $tmp3761.value;
        $l3759:;
        panda$core$Bit $tmp3762 = { $tmp3751 };
        if ($tmp3762.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3765 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3766, 36);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3765, $tmp3766, ((org$pandalanguage$pandac$parser$Token) start3741.value).position, NULL);
            $tmp3764 = $tmp3765;
            $tmp3763 = $tmp3764;
            $returnValue3746 = $tmp3763;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3763));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3764));
            return $returnValue3746;
        }
        }
        else {
        {
            int $tmp3770;
            {
                panda$collections$Array* $tmp3774 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp3774);
                $tmp3773 = $tmp3774;
                $tmp3772 = $tmp3773;
                children3771 = $tmp3772;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3772));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3773));
                org$pandalanguage$pandac$ASTNode* $tmp3778 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3777 = $tmp3778;
                $tmp3776 = $tmp3777;
                expr3775 = $tmp3776;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3776));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3777));
                if (((panda$core$Bit) { expr3775 == NULL }).value) {
                {
                    $tmp3779 = NULL;
                    $returnValue3746 = $tmp3779;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3779));
                    $tmp3770 = 0;
                    goto $l3768;
                    $l3780:;
                    return $returnValue3746;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3771, ((panda$core$Object*) expr3775));
                org$pandalanguage$pandac$ASTNode* $tmp3784 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp3785, 36);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3784, $tmp3785, ((org$pandalanguage$pandac$parser$Token) start3741.value).position, expr3775);
                $tmp3783 = $tmp3784;
                $tmp3782 = $tmp3783;
                $returnValue3746 = $tmp3782;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3782));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3783));
                $tmp3770 = 1;
                goto $l3768;
                $l3786:;
                return $returnValue3746;
            }
            $l3768:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3775));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children3771));
            children3771 = NULL;
            expr3775 = NULL;
            switch ($tmp3770) {
                case 0: goto $l3780;
                case 1: goto $l3786;
            }
            $l3788:;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1723_93789;
    panda$core$Int64 $tmp3791;
    org$pandalanguage$pandac$ASTNode* $returnValue3793;
    org$pandalanguage$pandac$ASTNode* $tmp3794;
    org$pandalanguage$pandac$ASTNode* $tmp3795;
    panda$core$Int64 $tmp3798;
    org$pandalanguage$pandac$ASTNode* $tmp3800;
    org$pandalanguage$pandac$ASTNode* $tmp3801;
    panda$core$Int64 $tmp3804;
    org$pandalanguage$pandac$ASTNode* $tmp3806;
    org$pandalanguage$pandac$ASTNode* $tmp3807;
    panda$core$Bit $tmp3810;
    {
        org$pandalanguage$pandac$parser$Token $tmp3790 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1723_93789 = $tmp3790.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3791, 28);
        panda$core$Bit $tmp3792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1723_93789.$rawValue, $tmp3791);
        if ($tmp3792.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3796 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3795 = $tmp3796;
            $tmp3794 = $tmp3795;
            $returnValue3793 = $tmp3794;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3794));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3795));
            return $returnValue3793;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3798, 29);
        panda$core$Bit $tmp3799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1723_93789.$rawValue, $tmp3798);
        if ($tmp3799.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3802 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3801 = $tmp3802;
            $tmp3800 = $tmp3801;
            $returnValue3793 = $tmp3800;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3800));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3801));
            return $returnValue3793;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3804, 27);
        panda$core$Bit $tmp3805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1723_93789.$rawValue, $tmp3804);
        if ($tmp3805.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3808 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3807 = $tmp3808;
            $tmp3806 = $tmp3807;
            $returnValue3793 = $tmp3806;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3806));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3807));
            return $returnValue3793;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp3810, false);
            if ($tmp3810.value) goto $l3811; else goto $l3812;
            $l3812:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3813, (panda$core$Int64) { 1727 });
            abort();
            $l3811:;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1735_93814;
    panda$core$Int64 $tmp3816;
    org$pandalanguage$pandac$ASTNode* $returnValue3818;
    org$pandalanguage$pandac$ASTNode* $tmp3819;
    org$pandalanguage$pandac$ASTNode* $tmp3820;
    panda$core$Int64 $tmp3823;
    org$pandalanguage$pandac$ASTNode* $tmp3825;
    org$pandalanguage$pandac$ASTNode* $tmp3826;
    panda$core$Int64 $tmp3829;
    org$pandalanguage$pandac$ASTNode* $tmp3831;
    org$pandalanguage$pandac$ASTNode* $tmp3832;
    panda$core$Int64 $tmp3835;
    org$pandalanguage$pandac$ASTNode* $tmp3837;
    org$pandalanguage$pandac$ASTNode* $tmp3838;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3841;
    panda$core$Int64 $tmp3842;
    org$pandalanguage$pandac$ASTNode* $tmp3844;
    {
        org$pandalanguage$pandac$parser$Token $tmp3815 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1735_93814 = $tmp3815.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3816, 30);
        panda$core$Bit $tmp3817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1735_93814.$rawValue, $tmp3816);
        if ($tmp3817.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3821 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3820 = $tmp3821;
            $tmp3819 = $tmp3820;
            $returnValue3818 = $tmp3819;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3819));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3820));
            return $returnValue3818;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3823, 32);
        panda$core$Bit $tmp3824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1735_93814.$rawValue, $tmp3823);
        if ($tmp3824.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3827 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3826 = $tmp3827;
            $tmp3825 = $tmp3826;
            $returnValue3818 = $tmp3825;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3825));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3826));
            return $returnValue3818;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3829, 35);
        panda$core$Bit $tmp3830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1735_93814.$rawValue, $tmp3829);
        if ($tmp3830.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3833 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3832 = $tmp3833;
            $tmp3831 = $tmp3832;
            $returnValue3818 = $tmp3831;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3831));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3832));
            return $returnValue3818;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3835, 31);
        panda$core$Bit $tmp3836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1735_93814.$rawValue, $tmp3835);
        if ($tmp3836.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3839 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3838 = $tmp3839;
            $tmp3837 = $tmp3838;
            $returnValue3818 = $tmp3837;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3837));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3838));
            return $returnValue3818;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3842, 30);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3841, $tmp3842);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3841, &$s3843);
            $tmp3844 = NULL;
            $returnValue3818 = $tmp3844;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3844));
            return $returnValue3818;
        }
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3849;
    org$pandalanguage$pandac$parser$Token$nullable start3850;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3851;
    panda$core$Int64 $tmp3852;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3854;
    panda$core$Int64 $tmp3855;
    org$pandalanguage$pandac$ASTNode* $returnValue3858;
    org$pandalanguage$pandac$ASTNode* $tmp3859;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3862;
    panda$core$Int64 $tmp3863;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3864;
    panda$core$Int64 $tmp3865;
    org$pandalanguage$pandac$parser$Token$nullable name3866;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3867;
    panda$core$Int64 $tmp3868;
    org$pandalanguage$pandac$ASTNode* $tmp3871;
    panda$collections$ImmutableArray* params3874 = NULL;
    panda$collections$ImmutableArray* $tmp3875;
    panda$collections$ImmutableArray* $tmp3876;
    org$pandalanguage$pandac$ASTNode* $tmp3878;
    org$pandalanguage$pandac$ASTNode* returnType3881 = NULL;
    panda$core$Int64 $tmp3883;
    org$pandalanguage$pandac$ASTNode* $tmp3885;
    org$pandalanguage$pandac$ASTNode* $tmp3886;
    org$pandalanguage$pandac$ASTNode* $tmp3887;
    org$pandalanguage$pandac$ASTNode* $tmp3889;
    org$pandalanguage$pandac$ASTNode* $tmp3892;
    org$pandalanguage$pandac$ASTNode* $tmp3893;
    panda$collections$ImmutableArray* body3894 = NULL;
    panda$collections$ImmutableArray* $tmp3895;
    panda$collections$ImmutableArray* $tmp3896;
    org$pandalanguage$pandac$ASTNode* $tmp3898;
    org$pandalanguage$pandac$ASTNode* $tmp3901;
    org$pandalanguage$pandac$ASTNode* $tmp3902;
    panda$core$Int64 $tmp3904;
    panda$collections$ImmutableArray* $tmp3905;
    panda$core$String* $tmp3907;
    int $tmp3848;
    {
        memset(&kind3849, 0, sizeof(kind3849));
        panda$core$Int64$init$builtin_int64(&$tmp3852, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3851, $tmp3852);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3853 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3851);
        start3850 = $tmp3853;
        if (((panda$core$Bit) { !start3850.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3855, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3854, $tmp3855);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3857 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3854, &$s3856);
            start3850 = $tmp3857;
            if (((panda$core$Bit) { !start3850.nonnull }).value) {
            {
                $tmp3859 = NULL;
                $returnValue3858 = $tmp3859;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3859));
                $tmp3848 = 0;
                goto $l3846;
                $l3860:;
                return $returnValue3858;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp3863, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3862, $tmp3863);
            kind3849 = $tmp3862;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3865, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3864, $tmp3865);
            kind3849 = $tmp3864;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3868, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3867, $tmp3868);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3870 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3867, &$s3869);
        name3866 = $tmp3870;
        if (((panda$core$Bit) { !name3866.nonnull }).value) {
        {
            $tmp3871 = NULL;
            $returnValue3858 = $tmp3871;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3871));
            $tmp3848 = 1;
            goto $l3846;
            $l3872:;
            return $returnValue3858;
        }
        }
        panda$collections$ImmutableArray* $tmp3877 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3876 = $tmp3877;
        $tmp3875 = $tmp3876;
        params3874 = $tmp3875;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3875));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3876));
        if (((panda$core$Bit) { params3874 == NULL }).value) {
        {
            $tmp3878 = NULL;
            $returnValue3858 = $tmp3878;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3878));
            $tmp3848 = 2;
            goto $l3846;
            $l3879:;
            return $returnValue3858;
        }
        }
        memset(&returnType3881, 0, sizeof(returnType3881));
        org$pandalanguage$pandac$parser$Token $tmp3882 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3883, 95);
        panda$core$Bit $tmp3884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3882.kind.$rawValue, $tmp3883);
        if ($tmp3884.value) {
        {
            {
                $tmp3885 = returnType3881;
                org$pandalanguage$pandac$ASTNode* $tmp3888 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3887 = $tmp3888;
                $tmp3886 = $tmp3887;
                returnType3881 = $tmp3886;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3886));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3887));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3885));
            }
            if (((panda$core$Bit) { returnType3881 == NULL }).value) {
            {
                $tmp3889 = NULL;
                $returnValue3858 = $tmp3889;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3889));
                $tmp3848 = 3;
                goto $l3846;
                $l3890:;
                return $returnValue3858;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3892 = returnType3881;
                $tmp3893 = NULL;
                returnType3881 = $tmp3893;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3893));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3892));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3897 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3896 = $tmp3897;
        $tmp3895 = $tmp3896;
        body3894 = $tmp3895;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3895));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3896));
        if (((panda$core$Bit) { body3894 == NULL }).value) {
        {
            $tmp3898 = NULL;
            $returnValue3858 = $tmp3898;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3898));
            $tmp3848 = 4;
            goto $l3846;
            $l3899:;
            return $returnValue3858;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3903 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3904, 26);
        panda$collections$ImmutableArray* $tmp3906 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3906);
        $tmp3905 = $tmp3906;
        panda$core$String* $tmp3908 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3866.value));
        $tmp3907 = $tmp3908;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3903, $tmp3904, ((org$pandalanguage$pandac$parser$Token) start3850.value).position, NULL, $tmp3905, kind3849, $tmp3907, NULL, params3874, returnType3881, body3894);
        $tmp3902 = $tmp3903;
        $tmp3901 = $tmp3902;
        $returnValue3858 = $tmp3901;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3901));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3902));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3907));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3905));
        $tmp3848 = 5;
        goto $l3846;
        $l3909:;
        return $returnValue3858;
    }
    $l3846:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3894));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3881));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3874));
    params3874 = NULL;
    body3894 = NULL;
    switch ($tmp3848) {
        case 4: goto $l3899;
        case 2: goto $l3879;
        case 1: goto $l3872;
        case 3: goto $l3890;
        case 5: goto $l3909;
        case 0: goto $l3860;
    }
    $l3911:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1794_93912;
    panda$core$Int64 $tmp3914;
    org$pandalanguage$pandac$ASTNode* $returnValue3916;
    org$pandalanguage$pandac$ASTNode* $tmp3917;
    org$pandalanguage$pandac$ASTNode* $tmp3918;
    panda$core$Int64 $tmp3921;
    org$pandalanguage$pandac$ASTNode* $tmp3923;
    org$pandalanguage$pandac$ASTNode* $tmp3924;
    panda$core$Int64 $tmp3927;
    org$pandalanguage$pandac$ASTNode* $tmp3929;
    org$pandalanguage$pandac$ASTNode* $tmp3930;
    panda$core$Int64 $tmp3933;
    org$pandalanguage$pandac$ASTNode* $tmp3935;
    org$pandalanguage$pandac$ASTNode* $tmp3936;
    panda$core$Int64 $tmp3939;
    org$pandalanguage$pandac$ASTNode* $tmp3941;
    org$pandalanguage$pandac$ASTNode* $tmp3942;
    panda$core$Int64 $tmp3945;
    org$pandalanguage$pandac$ASTNode* $tmp3947;
    org$pandalanguage$pandac$ASTNode* $tmp3948;
    panda$core$Int64 $tmp3951;
    org$pandalanguage$pandac$ASTNode* $tmp3953;
    org$pandalanguage$pandac$ASTNode* $tmp3954;
    panda$core$Int64 $tmp3957;
    org$pandalanguage$pandac$ASTNode* $tmp3959;
    org$pandalanguage$pandac$ASTNode* $tmp3960;
    panda$core$Int64 $tmp3963;
    org$pandalanguage$pandac$parser$Token id3965;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3967;
    panda$core$Int64 $tmp3968;
    org$pandalanguage$pandac$ASTNode* $tmp3970;
    org$pandalanguage$pandac$ASTNode* $tmp3971;
    panda$core$String* $tmp3972;
    org$pandalanguage$pandac$ASTNode* $tmp3976;
    org$pandalanguage$pandac$ASTNode* $tmp3977;
    panda$core$Int64 $tmp3981;
    panda$core$Int64 $tmp3984;
    org$pandalanguage$pandac$ASTNode* $tmp3987;
    org$pandalanguage$pandac$ASTNode* $tmp3988;
    panda$core$Int64 $tmp3994;
    panda$core$Int64 $tmp3997;
    panda$core$Int64 $tmp4001;
    panda$core$Int64 $tmp4005;
    org$pandalanguage$pandac$ASTNode* $tmp4008;
    org$pandalanguage$pandac$ASTNode* $tmp4009;
    panda$core$Int64 $tmp4012;
    org$pandalanguage$pandac$ASTNode* $tmp4014;
    org$pandalanguage$pandac$ASTNode* $tmp4015;
    panda$core$Int64 $tmp4019;
    panda$core$Int64 $tmp4022;
    org$pandalanguage$pandac$ASTNode* $tmp4025;
    org$pandalanguage$pandac$ASTNode* $tmp4026;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4029;
    panda$core$Int64 $tmp4030;
    org$pandalanguage$pandac$ASTNode* $tmp4032;
    {
        org$pandalanguage$pandac$parser$Token $tmp3913 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1794_93912 = $tmp3913.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3914, 36);
        panda$core$Bit $tmp3915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp3914);
        if ($tmp3915.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3919 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3918 = $tmp3919;
            $tmp3917 = $tmp3918;
            $returnValue3916 = $tmp3917;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3917));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3918));
            return $returnValue3916;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3921, 32);
        panda$core$Bit $tmp3922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp3921);
        if ($tmp3922.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3925 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3924 = $tmp3925;
            $tmp3923 = $tmp3924;
            $returnValue3916 = $tmp3923;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3923));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3924));
            return $returnValue3916;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3927, 31);
        panda$core$Bit $tmp3928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp3927);
        if ($tmp3928.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3931 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3930 = $tmp3931;
            $tmp3929 = $tmp3930;
            $returnValue3916 = $tmp3929;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3929));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3930));
            return $returnValue3916;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3933, 30);
        panda$core$Bit $tmp3934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp3933);
        if ($tmp3934.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3937 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3936 = $tmp3937;
            $tmp3935 = $tmp3936;
            $returnValue3916 = $tmp3935;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3935));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3936));
            return $returnValue3916;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3939, 35);
        panda$core$Bit $tmp3940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp3939);
        if ($tmp3940.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3943 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3942 = $tmp3943;
            $tmp3941 = $tmp3942;
            $returnValue3916 = $tmp3941;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3941));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3942));
            return $returnValue3916;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3945, 44);
        panda$core$Bit $tmp3946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp3945);
        if ($tmp3946.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3949 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3948 = $tmp3949;
            $tmp3947 = $tmp3948;
            $returnValue3916 = $tmp3947;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3947));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3948));
            return $returnValue3916;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3951, 38);
        panda$core$Bit $tmp3952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp3951);
        if ($tmp3952.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3955 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3954 = $tmp3955;
            $tmp3953 = $tmp3954;
            $returnValue3916 = $tmp3953;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3953));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3954));
            return $returnValue3916;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3957, 99);
        panda$core$Bit $tmp3958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp3957);
        if ($tmp3958.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3961 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3960 = $tmp3961;
            $tmp3959 = $tmp3960;
            $returnValue3916 = $tmp3959;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3959));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3960));
            return $returnValue3916;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3963, 48);
        panda$core$Bit $tmp3964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp3963);
        if ($tmp3964.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3966 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id3965 = $tmp3966;
            panda$core$Int64$init$builtin_int64(&$tmp3968, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3967, $tmp3968);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3969 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3967);
            if (((panda$core$Bit) { $tmp3969.nonnull }).value) {
            {
                panda$core$String* $tmp3973 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id3965);
                $tmp3972 = $tmp3973;
                org$pandalanguage$pandac$ASTNode* $tmp3974 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp3972);
                $tmp3971 = $tmp3974;
                $tmp3970 = $tmp3971;
                $returnValue3916 = $tmp3970;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3970));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3971));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3972));
                return $returnValue3916;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id3965);
            org$pandalanguage$pandac$ASTNode* $tmp3978 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3977 = $tmp3978;
            $tmp3976 = $tmp3977;
            $returnValue3916 = $tmp3976;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3976));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3977));
            return $returnValue3916;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3981, 46);
        panda$core$Bit $tmp3982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp3981);
        bool $tmp3980 = $tmp3982.value;
        if ($tmp3980) goto $l3983;
        panda$core$Int64$init$builtin_int64(&$tmp3984, 47);
        panda$core$Bit $tmp3985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp3984);
        $tmp3980 = $tmp3985.value;
        $l3983:;
        panda$core$Bit $tmp3986 = { $tmp3980 };
        if ($tmp3986.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3989 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3988 = $tmp3989;
            $tmp3987 = $tmp3988;
            $returnValue3916 = $tmp3987;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3987));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3988));
            return $returnValue3916;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3994, 23);
        panda$core$Bit $tmp3995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp3994);
        bool $tmp3993 = $tmp3995.value;
        if ($tmp3993) goto $l3996;
        panda$core$Int64$init$builtin_int64(&$tmp3997, 24);
        panda$core$Bit $tmp3998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp3997);
        $tmp3993 = $tmp3998.value;
        $l3996:;
        panda$core$Bit $tmp3999 = { $tmp3993 };
        bool $tmp3992 = $tmp3999.value;
        if ($tmp3992) goto $l4000;
        panda$core$Int64$init$builtin_int64(&$tmp4001, 25);
        panda$core$Bit $tmp4002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp4001);
        $tmp3992 = $tmp4002.value;
        $l4000:;
        panda$core$Bit $tmp4003 = { $tmp3992 };
        bool $tmp3991 = $tmp4003.value;
        if ($tmp3991) goto $l4004;
        panda$core$Int64$init$builtin_int64(&$tmp4005, 26);
        panda$core$Bit $tmp4006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp4005);
        $tmp3991 = $tmp4006.value;
        $l4004:;
        panda$core$Bit $tmp4007 = { $tmp3991 };
        if ($tmp4007.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4010 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4009 = $tmp4010;
            $tmp4008 = $tmp4009;
            $returnValue3916 = $tmp4008;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4008));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4009));
            return $returnValue3916;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4012, 22);
        panda$core$Bit $tmp4013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp4012);
        if ($tmp4013.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4016 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4015 = $tmp4016;
            $tmp4014 = $tmp4015;
            $returnValue3916 = $tmp4014;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4014));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4015));
            return $returnValue3916;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4019, 21);
        panda$core$Bit $tmp4020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp4019);
        bool $tmp4018 = $tmp4020.value;
        if ($tmp4018) goto $l4021;
        panda$core$Int64$init$builtin_int64(&$tmp4022, 20);
        panda$core$Bit $tmp4023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1794_93912.$rawValue, $tmp4022);
        $tmp4018 = $tmp4023.value;
        $l4021:;
        panda$core$Bit $tmp4024 = { $tmp4018 };
        if ($tmp4024.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4027 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4026 = $tmp4027;
            $tmp4025 = $tmp4026;
            $returnValue3916 = $tmp4025;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4025));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4026));
            return $returnValue3916;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4030, 36);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4029, $tmp4030);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4029, &$s4031);
            $tmp4032 = NULL;
            $returnValue3916 = $tmp4032;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4032));
            return $returnValue3916;
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
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4037;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4038;
    panda$core$Int64 $tmp4039;
    org$pandalanguage$pandac$ASTNode* $returnValue4042;
    org$pandalanguage$pandac$ASTNode* $tmp4043;
    org$pandalanguage$pandac$parser$Token$nullable next4046;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4047;
    panda$core$Int64 $tmp4048;
    org$pandalanguage$pandac$ASTNode* $tmp4051;
    panda$core$MutableString* name4054 = NULL;
    panda$core$MutableString* $tmp4055;
    panda$core$MutableString* $tmp4056;
    panda$core$String* $tmp4058;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4062;
    panda$core$Int64 $tmp4063;
    panda$core$Char8 $tmp4065;
    panda$core$UInt8 $tmp4066;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4067;
    panda$core$Int64 $tmp4068;
    org$pandalanguage$pandac$ASTNode* $tmp4071;
    panda$core$String* $tmp4074;
    org$pandalanguage$pandac$ASTNode* $tmp4076;
    org$pandalanguage$pandac$ASTNode* $tmp4077;
    panda$core$Int64 $tmp4079;
    panda$core$String* $tmp4080;
    int $tmp4036;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4039, 14);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4038, $tmp4039);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4041 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4038, &$s4040);
        start4037 = $tmp4041;
        if (((panda$core$Bit) { !start4037.nonnull }).value) {
        {
            $tmp4043 = NULL;
            $returnValue4042 = $tmp4043;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4043));
            $tmp4036 = 0;
            goto $l4034;
            $l4044:;
            return $returnValue4042;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4048, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4047, $tmp4048);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4050 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4047, &$s4049);
        next4046 = $tmp4050;
        if (((panda$core$Bit) { !next4046.nonnull }).value) {
        {
            $tmp4051 = NULL;
            $returnValue4042 = $tmp4051;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4051));
            $tmp4036 = 1;
            goto $l4034;
            $l4052:;
            return $returnValue4042;
        }
        }
        panda$core$MutableString* $tmp4057 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4059 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4046.value));
        $tmp4058 = $tmp4059;
        panda$core$MutableString$init$panda$core$String($tmp4057, $tmp4058);
        $tmp4056 = $tmp4057;
        $tmp4055 = $tmp4056;
        name4054 = $tmp4055;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4055));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4056));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4058));
        $l4060:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4063, 98);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4062, $tmp4063);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4064 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4062);
            next4046 = $tmp4064;
            if (((panda$core$Bit) { !next4046.nonnull }).value) {
            {
                goto $l4061;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4066, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4065, $tmp4066);
            panda$core$MutableString$append$panda$core$Char8(name4054, $tmp4065);
            panda$core$Int64$init$builtin_int64(&$tmp4068, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4067, $tmp4068);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4070 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4067, &$s4069);
            next4046 = $tmp4070;
            if (((panda$core$Bit) { !next4046.nonnull }).value) {
            {
                $tmp4071 = NULL;
                $returnValue4042 = $tmp4071;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4071));
                $tmp4036 = 2;
                goto $l4034;
                $l4072:;
                return $returnValue4042;
            }
            }
            panda$core$String* $tmp4075 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4046.value));
            $tmp4074 = $tmp4075;
            panda$core$MutableString$append$panda$core$String(name4054, $tmp4074);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4074));
        }
        }
        $l4061:;
        org$pandalanguage$pandac$ASTNode* $tmp4078 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4079, 30);
        panda$core$String* $tmp4081 = panda$core$MutableString$finish$R$panda$core$String(name4054);
        $tmp4080 = $tmp4081;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4078, $tmp4079, ((org$pandalanguage$pandac$parser$Token) start4037.value).position, $tmp4080);
        $tmp4077 = $tmp4078;
        $tmp4076 = $tmp4077;
        $returnValue4042 = $tmp4076;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4076));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4077));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4080));
        $tmp4036 = 3;
        goto $l4034;
        $l4082:;
        return $returnValue4042;
    }
    $l4034:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4054));
    name4054 = NULL;
    switch ($tmp4036) {
        case 3: goto $l4082;
        case 2: goto $l4072;
        case 0: goto $l4044;
        case 1: goto $l4052;
    }
    $l4084:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4088;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4089;
    panda$core$Int64 $tmp4090;
    org$pandalanguage$pandac$ASTNode* $returnValue4093;
    org$pandalanguage$pandac$ASTNode* $tmp4094;
    org$pandalanguage$pandac$parser$Token$nullable next4097;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4098;
    panda$core$Int64 $tmp4099;
    org$pandalanguage$pandac$ASTNode* $tmp4102;
    panda$core$MutableString* name4105 = NULL;
    panda$core$MutableString* $tmp4106;
    panda$core$MutableString* $tmp4107;
    panda$core$String* $tmp4109;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4113;
    panda$core$Int64 $tmp4114;
    panda$core$Char8 $tmp4116;
    panda$core$UInt8 $tmp4117;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4118;
    panda$core$Int64 $tmp4119;
    org$pandalanguage$pandac$ASTNode* $tmp4122;
    panda$core$String* $tmp4125;
    org$pandalanguage$pandac$ASTNode* $tmp4127;
    org$pandalanguage$pandac$ASTNode* $tmp4128;
    panda$core$Int64 $tmp4130;
    panda$core$String* $tmp4131;
    int $tmp4087;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4090, 15);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4089, $tmp4090);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4092 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4089, &$s4091);
        start4088 = $tmp4092;
        if (((panda$core$Bit) { !start4088.nonnull }).value) {
        {
            $tmp4094 = NULL;
            $returnValue4093 = $tmp4094;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4094));
            $tmp4087 = 0;
            goto $l4085;
            $l4095:;
            return $returnValue4093;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4099, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4098, $tmp4099);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4101 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4098, &$s4100);
        next4097 = $tmp4101;
        if (((panda$core$Bit) { !next4097.nonnull }).value) {
        {
            $tmp4102 = NULL;
            $returnValue4093 = $tmp4102;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4102));
            $tmp4087 = 1;
            goto $l4085;
            $l4103:;
            return $returnValue4093;
        }
        }
        panda$core$MutableString* $tmp4108 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4110 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4097.value));
        $tmp4109 = $tmp4110;
        panda$core$MutableString$init$panda$core$String($tmp4108, $tmp4109);
        $tmp4107 = $tmp4108;
        $tmp4106 = $tmp4107;
        name4105 = $tmp4106;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4106));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4109));
        $l4111:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4114, 98);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4113, $tmp4114);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4115 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4113);
            next4097 = $tmp4115;
            if (((panda$core$Bit) { !next4097.nonnull }).value) {
            {
                goto $l4112;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4117, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4116, $tmp4117);
            panda$core$MutableString$append$panda$core$Char8(name4105, $tmp4116);
            panda$core$Int64$init$builtin_int64(&$tmp4119, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4118, $tmp4119);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4121 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4118, &$s4120);
            next4097 = $tmp4121;
            if (((panda$core$Bit) { !next4097.nonnull }).value) {
            {
                $tmp4122 = NULL;
                $returnValue4093 = $tmp4122;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4122));
                $tmp4087 = 2;
                goto $l4085;
                $l4123:;
                return $returnValue4093;
            }
            }
            panda$core$String* $tmp4126 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4097.value));
            $tmp4125 = $tmp4126;
            panda$core$MutableString$append$panda$core$String(name4105, $tmp4125);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4125));
        }
        }
        $l4112:;
        org$pandalanguage$pandac$ASTNode* $tmp4129 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4130, 46);
        panda$core$String* $tmp4132 = panda$core$MutableString$finish$R$panda$core$String(name4105);
        $tmp4131 = $tmp4132;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4129, $tmp4130, ((org$pandalanguage$pandac$parser$Token) start4088.value).position, $tmp4131);
        $tmp4128 = $tmp4129;
        $tmp4127 = $tmp4128;
        $returnValue4093 = $tmp4127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4131));
        $tmp4087 = 3;
        goto $l4085;
        $l4133:;
        return $returnValue4093;
    }
    $l4085:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4105));
    name4105 = NULL;
    switch ($tmp4087) {
        case 1: goto $l4103;
        case 0: goto $l4095;
        case 3: goto $l4133;
        case 2: goto $l4123;
    }
    $l4135:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4139;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4140;
    panda$core$Int64 $tmp4141;
    panda$collections$ImmutableArray* $returnValue4144;
    panda$collections$ImmutableArray* $tmp4145;
    org$pandalanguage$pandac$parser$Token$nullable id4148;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4149;
    panda$core$Int64 $tmp4150;
    panda$collections$ImmutableArray* $tmp4153;
    panda$collections$Array* parameters4156 = NULL;
    panda$collections$Array* $tmp4157;
    panda$collections$Array* $tmp4158;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4160;
    panda$core$Int64 $tmp4161;
    org$pandalanguage$pandac$ASTNode* t4166 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4167;
    org$pandalanguage$pandac$ASTNode* $tmp4168;
    panda$collections$ImmutableArray* $tmp4170;
    org$pandalanguage$pandac$ASTNode* $tmp4174;
    panda$core$Int64 $tmp4176;
    panda$core$String* $tmp4177;
    org$pandalanguage$pandac$ASTNode* $tmp4180;
    panda$core$Int64 $tmp4182;
    panda$core$String* $tmp4183;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4188;
    panda$core$Int64 $tmp4189;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4191;
    panda$core$Int64 $tmp4192;
    panda$collections$ImmutableArray* $tmp4195;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4198;
    panda$core$Int64 $tmp4199;
    org$pandalanguage$pandac$ASTNode* t4204 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4205;
    org$pandalanguage$pandac$ASTNode* $tmp4206;
    panda$collections$ImmutableArray* $tmp4208;
    org$pandalanguage$pandac$ASTNode* $tmp4212;
    panda$core$Int64 $tmp4214;
    panda$core$String* $tmp4215;
    org$pandalanguage$pandac$ASTNode* $tmp4218;
    panda$core$Int64 $tmp4220;
    panda$core$String* $tmp4221;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4223;
    panda$core$Int64 $tmp4224;
    panda$collections$ImmutableArray* $tmp4227;
    panda$collections$ImmutableArray* $tmp4230;
    panda$collections$ImmutableArray* $tmp4231;
    int $tmp4138;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4141, 62);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4140, $tmp4141);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4143 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4140, &$s4142);
        start4139 = $tmp4143;
        if (((panda$core$Bit) { !start4139.nonnull }).value) {
        {
            $tmp4145 = NULL;
            $returnValue4144 = $tmp4145;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4145));
            $tmp4138 = 0;
            goto $l4136;
            $l4146:;
            return $returnValue4144;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4150, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4149, $tmp4150);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4152 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4149, &$s4151);
        id4148 = $tmp4152;
        if (((panda$core$Bit) { !id4148.nonnull }).value) {
        {
            $tmp4153 = NULL;
            $returnValue4144 = $tmp4153;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4153));
            $tmp4138 = 1;
            goto $l4136;
            $l4154:;
            return $returnValue4144;
        }
        }
        panda$collections$Array* $tmp4159 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4159);
        $tmp4158 = $tmp4159;
        $tmp4157 = $tmp4158;
        parameters4156 = $tmp4157;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4157));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4158));
        panda$core$Int64$init$builtin_int64(&$tmp4161, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4160, $tmp4161);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4162 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4160);
        if (((panda$core$Bit) { $tmp4162.nonnull }).value) {
        {
            int $tmp4165;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4169 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4168 = $tmp4169;
                $tmp4167 = $tmp4168;
                t4166 = $tmp4167;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4167));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4168));
                if (((panda$core$Bit) { t4166 == NULL }).value) {
                {
                    $tmp4170 = NULL;
                    $returnValue4144 = $tmp4170;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4170));
                    $tmp4165 = 0;
                    goto $l4163;
                    $l4171:;
                    $tmp4138 = 2;
                    goto $l4136;
                    $l4172:;
                    return $returnValue4144;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp4175 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4176, 44);
                panda$core$String* $tmp4178 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4148.value));
                $tmp4177 = $tmp4178;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4175, $tmp4176, ((org$pandalanguage$pandac$parser$Token) id4148.value).position, $tmp4177, t4166);
                $tmp4174 = $tmp4175;
                panda$collections$Array$add$panda$collections$Array$T(parameters4156, ((panda$core$Object*) $tmp4174));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4174));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4177));
            }
            $tmp4165 = -1;
            goto $l4163;
            $l4163:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4166));
            t4166 = NULL;
            switch ($tmp4165) {
                case -1: goto $l4179;
                case 0: goto $l4171;
            }
            $l4179:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4181 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp4182, 20);
            panda$core$String* $tmp4184 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4148.value));
            $tmp4183 = $tmp4184;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4181, $tmp4182, ((org$pandalanguage$pandac$parser$Token) id4148.value).position, $tmp4183);
            $tmp4180 = $tmp4181;
            panda$collections$Array$add$panda$collections$Array$T(parameters4156, ((panda$core$Object*) $tmp4180));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4180));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4183));
        }
        }
        $l4185:;
        panda$core$Int64$init$builtin_int64(&$tmp4189, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4188, $tmp4189);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4190 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4188);
        bool $tmp4187 = ((panda$core$Bit) { $tmp4190.nonnull }).value;
        if (!$tmp4187) goto $l4186;
        {
            panda$core$Int64$init$builtin_int64(&$tmp4192, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4191, $tmp4192);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4194 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4191, &$s4193);
            id4148 = $tmp4194;
            if (((panda$core$Bit) { !id4148.nonnull }).value) {
            {
                $tmp4195 = NULL;
                $returnValue4144 = $tmp4195;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4195));
                $tmp4138 = 3;
                goto $l4136;
                $l4196:;
                return $returnValue4144;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4199, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4198, $tmp4199);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4200 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4198);
            if (((panda$core$Bit) { $tmp4200.nonnull }).value) {
            {
                int $tmp4203;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4207 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4206 = $tmp4207;
                    $tmp4205 = $tmp4206;
                    t4204 = $tmp4205;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4205));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4206));
                    if (((panda$core$Bit) { t4204 == NULL }).value) {
                    {
                        $tmp4208 = NULL;
                        $returnValue4144 = $tmp4208;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4208));
                        $tmp4203 = 0;
                        goto $l4201;
                        $l4209:;
                        $tmp4138 = 4;
                        goto $l4136;
                        $l4210:;
                        return $returnValue4144;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp4213 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp4214, 44);
                    panda$core$String* $tmp4216 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4148.value));
                    $tmp4215 = $tmp4216;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4213, $tmp4214, ((org$pandalanguage$pandac$parser$Token) id4148.value).position, $tmp4215, t4204);
                    $tmp4212 = $tmp4213;
                    panda$collections$Array$add$panda$collections$Array$T(parameters4156, ((panda$core$Object*) $tmp4212));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4212));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4215));
                }
                $tmp4203 = -1;
                goto $l4201;
                $l4201:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4204));
                t4204 = NULL;
                switch ($tmp4203) {
                    case -1: goto $l4217;
                    case 0: goto $l4209;
                }
                $l4217:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4219 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4220, 20);
                panda$core$String* $tmp4222 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4148.value));
                $tmp4221 = $tmp4222;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4219, $tmp4220, ((org$pandalanguage$pandac$parser$Token) id4148.value).position, $tmp4221);
                $tmp4218 = $tmp4219;
                panda$collections$Array$add$panda$collections$Array$T(parameters4156, ((panda$core$Object*) $tmp4218));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4218));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4221));
            }
            }
        }
        goto $l4185;
        $l4186:;
        panda$core$Int64$init$builtin_int64(&$tmp4224, 63);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4223, $tmp4224);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4226 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4223, &$s4225);
        if (((panda$core$Bit) { !$tmp4226.nonnull }).value) {
        {
            $tmp4227 = NULL;
            $returnValue4144 = $tmp4227;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4227));
            $tmp4138 = 5;
            goto $l4136;
            $l4228:;
            return $returnValue4144;
        }
        }
        panda$collections$ImmutableArray* $tmp4232 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters4156);
        $tmp4231 = $tmp4232;
        $tmp4230 = $tmp4231;
        $returnValue4144 = $tmp4230;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4230));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4231));
        $tmp4138 = 6;
        goto $l4136;
        $l4233:;
        return $returnValue4144;
    }
    $l4136:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters4156));
    parameters4156 = NULL;
    switch ($tmp4138) {
        case 2: goto $l4172;
        case 3: goto $l4196;
        case 4: goto $l4210;
        case 5: goto $l4228;
        case 6: goto $l4233;
        case 1: goto $l4154;
        case 0: goto $l4146;
    }
    $l4235:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4239;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4240;
    panda$core$Int64 $tmp4241;
    panda$collections$ImmutableArray* $returnValue4244;
    panda$collections$ImmutableArray* $tmp4245;
    panda$collections$Array* result4248 = NULL;
    panda$collections$Array* $tmp4249;
    panda$collections$Array* $tmp4250;
    org$pandalanguage$pandac$ASTNode* t4252 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4253;
    org$pandalanguage$pandac$ASTNode* $tmp4254;
    panda$collections$ImmutableArray* $tmp4256;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4262;
    panda$core$Int64 $tmp4263;
    org$pandalanguage$pandac$ASTNode* $tmp4265;
    org$pandalanguage$pandac$ASTNode* $tmp4266;
    org$pandalanguage$pandac$ASTNode* $tmp4267;
    panda$collections$ImmutableArray* $tmp4269;
    panda$collections$ImmutableArray* $tmp4272;
    panda$collections$ImmutableArray* $tmp4273;
    int $tmp4238;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4241, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4240, $tmp4241);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4243 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4240, &$s4242);
        start4239 = $tmp4243;
        if (((panda$core$Bit) { !start4239.nonnull }).value) {
        {
            $tmp4245 = NULL;
            $returnValue4244 = $tmp4245;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4245));
            $tmp4238 = 0;
            goto $l4236;
            $l4246:;
            return $returnValue4244;
        }
        }
        panda$collections$Array* $tmp4251 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4251);
        $tmp4250 = $tmp4251;
        $tmp4249 = $tmp4250;
        result4248 = $tmp4249;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4249));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4250));
        org$pandalanguage$pandac$ASTNode* $tmp4255 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4254 = $tmp4255;
        $tmp4253 = $tmp4254;
        t4252 = $tmp4253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4254));
        if (((panda$core$Bit) { t4252 == NULL }).value) {
        {
            $tmp4256 = NULL;
            $returnValue4244 = $tmp4256;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4256));
            $tmp4238 = 1;
            goto $l4236;
            $l4257:;
            return $returnValue4244;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result4248, ((panda$core$Object*) t4252));
        $l4259:;
        panda$core$Int64$init$builtin_int64(&$tmp4263, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4262, $tmp4263);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4264 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4262);
        bool $tmp4261 = ((panda$core$Bit) { $tmp4264.nonnull }).value;
        if (!$tmp4261) goto $l4260;
        {
            {
                $tmp4265 = t4252;
                org$pandalanguage$pandac$ASTNode* $tmp4268 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4267 = $tmp4268;
                $tmp4266 = $tmp4267;
                t4252 = $tmp4266;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4266));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4267));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4265));
            }
            if (((panda$core$Bit) { t4252 == NULL }).value) {
            {
                $tmp4269 = NULL;
                $returnValue4244 = $tmp4269;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4269));
                $tmp4238 = 2;
                goto $l4236;
                $l4270:;
                return $returnValue4244;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result4248, ((panda$core$Object*) t4252));
        }
        goto $l4259;
        $l4260:;
        panda$collections$ImmutableArray* $tmp4274 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4248);
        $tmp4273 = $tmp4274;
        $tmp4272 = $tmp4273;
        $returnValue4244 = $tmp4272;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4272));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4273));
        $tmp4238 = 3;
        goto $l4236;
        $l4275:;
        return $returnValue4244;
    }
    $l4236:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4252));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4248));
    result4248 = NULL;
    t4252 = NULL;
    switch ($tmp4238) {
        case 2: goto $l4270;
        case 3: goto $l4275;
        case 1: goto $l4257;
        case 0: goto $l4246;
    }
    $l4277:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a4281;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4282;
    panda$core$Int64 $tmp4283;
    org$pandalanguage$pandac$ASTNode* expr4286 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4287;
    panda$core$Int64 $tmp4288;
    org$pandalanguage$pandac$ASTNode* $tmp4290;
    org$pandalanguage$pandac$ASTNode* $tmp4291;
    org$pandalanguage$pandac$ASTNode* $tmp4292;
    org$pandalanguage$pandac$ASTNode* $returnValue4294;
    org$pandalanguage$pandac$ASTNode* $tmp4295;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4298;
    panda$core$Int64 $tmp4299;
    org$pandalanguage$pandac$ASTNode* $tmp4301;
    org$pandalanguage$pandac$ASTNode* $tmp4302;
    panda$core$Int64 $tmp4304;
    panda$core$String* $tmp4305;
    int $tmp4280;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4283, 13);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4282, $tmp4283);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4285 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4282, &$s4284);
        a4281 = $tmp4285;
        memset(&expr4286, 0, sizeof(expr4286));
        panda$core$Int64$init$builtin_int64(&$tmp4288, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4287, $tmp4288);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4289 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4287);
        if (((panda$core$Bit) { $tmp4289.nonnull }).value) {
        {
            {
                $tmp4290 = expr4286;
                org$pandalanguage$pandac$ASTNode* $tmp4293 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4292 = $tmp4293;
                $tmp4291 = $tmp4292;
                expr4286 = $tmp4291;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4291));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4292));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4290));
            }
            if (((panda$core$Bit) { expr4286 == NULL }).value) {
            {
                $tmp4295 = NULL;
                $returnValue4294 = $tmp4295;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4295));
                $tmp4280 = 0;
                goto $l4278;
                $l4296:;
                return $returnValue4294;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4299, 104);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4298, $tmp4299);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4298, &$s4300);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4303 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4304, 0);
        panda$core$String* $tmp4306 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a4281.value));
        $tmp4305 = $tmp4306;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4303, $tmp4304, ((org$pandalanguage$pandac$parser$Token) a4281.value).position, $tmp4305, expr4286);
        $tmp4302 = $tmp4303;
        $tmp4301 = $tmp4302;
        $returnValue4294 = $tmp4301;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4301));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4305));
        $tmp4280 = 1;
        goto $l4278;
        $l4307:;
        return $returnValue4294;
    }
    $l4278:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr4286));
    switch ($tmp4280) {
        case 1: goto $l4307;
        case 0: goto $l4296;
    }
    $l4309:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result4313 = NULL;
    panda$collections$Array* $tmp4314;
    panda$collections$Array* $tmp4315;
    panda$core$Int64 $tmp4321;
    org$pandalanguage$pandac$ASTNode* a4326 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4327;
    org$pandalanguage$pandac$ASTNode* $tmp4328;
    panda$collections$ImmutableArray* $returnValue4332;
    panda$collections$ImmutableArray* $tmp4333;
    panda$collections$ImmutableArray* $tmp4334;
    int $tmp4312;
    {
        panda$collections$Array* $tmp4316 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4316);
        $tmp4315 = $tmp4316;
        $tmp4314 = $tmp4315;
        result4313 = $tmp4314;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4314));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4315));
        $l4317:;
        org$pandalanguage$pandac$parser$Token $tmp4320 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4321, 13);
        panda$core$Bit $tmp4322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4320.kind.$rawValue, $tmp4321);
        bool $tmp4319 = $tmp4322.value;
        if (!$tmp4319) goto $l4318;
        {
            int $tmp4325;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4329 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4328 = $tmp4329;
                $tmp4327 = $tmp4328;
                a4326 = $tmp4327;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4327));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4328));
                if (((panda$core$Bit) { a4326 == NULL }).value) {
                {
                    $tmp4325 = 0;
                    goto $l4323;
                    $l4330:;
                    goto $l4318;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4313, ((panda$core$Object*) a4326));
            }
            $tmp4325 = -1;
            goto $l4323;
            $l4323:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4326));
            a4326 = NULL;
            switch ($tmp4325) {
                case 0: goto $l4330;
                case -1: goto $l4331;
            }
            $l4331:;
        }
        goto $l4317;
        $l4318:;
        panda$collections$ImmutableArray* $tmp4335 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4313);
        $tmp4334 = $tmp4335;
        $tmp4333 = $tmp4334;
        $returnValue4332 = $tmp4333;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4333));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4334));
        $tmp4312 = 0;
        goto $l4310;
        $l4336:;
        return $returnValue4332;
    }
    $l4310:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4313));
    result4313 = NULL;
    switch ($tmp4312) {
        case 0: goto $l4336;
    }
    $l4338:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4342;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4343;
    panda$core$Int64 $tmp4344;
    org$pandalanguage$pandac$ASTNode* $returnValue4347;
    org$pandalanguage$pandac$ASTNode* $tmp4348;
    panda$core$MutableString* result4351 = NULL;
    panda$core$MutableString* $tmp4352;
    panda$core$MutableString* $tmp4353;
    org$pandalanguage$pandac$parser$Token next4357;
    panda$core$Int64 $tmp4359;
    panda$core$Int64 $tmp4361;
    org$pandalanguage$pandac$ASTNode* $tmp4364;
    panda$core$String* $tmp4367;
    org$pandalanguage$pandac$ASTNode* $tmp4369;
    org$pandalanguage$pandac$ASTNode* $tmp4370;
    panda$core$Int64 $tmp4372;
    panda$core$String* $tmp4373;
    int $tmp4341;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4344, 11);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4343, $tmp4344);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4346 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4343, &$s4345);
        start4342 = $tmp4346;
        if (((panda$core$Bit) { !start4342.nonnull }).value) {
        {
            $tmp4348 = NULL;
            $returnValue4347 = $tmp4348;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4348));
            $tmp4341 = 0;
            goto $l4339;
            $l4349:;
            return $returnValue4347;
        }
        }
        panda$core$MutableString* $tmp4354 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp4354);
        $tmp4353 = $tmp4354;
        $tmp4352 = $tmp4353;
        result4351 = $tmp4352;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4352));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4353));
        $l4355:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4358 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next4357 = $tmp4358;
            panda$core$Int64$init$builtin_int64(&$tmp4359, 11);
            panda$core$Bit $tmp4360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4357.kind.$rawValue, $tmp4359);
            if ($tmp4360.value) {
            {
                goto $l4356;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4361, 0);
            panda$core$Bit $tmp4362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4357.kind.$rawValue, $tmp4361);
            if ($tmp4362.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start4342.value), &$s4363);
                $tmp4364 = NULL;
                $returnValue4347 = $tmp4364;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4364));
                $tmp4341 = 1;
                goto $l4339;
                $l4365:;
                return $returnValue4347;
            }
            }
            panda$core$String* $tmp4368 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4357);
            $tmp4367 = $tmp4368;
            panda$core$MutableString$append$panda$core$String(result4351, $tmp4367);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4367));
        }
        }
        $l4356:;
        org$pandalanguage$pandac$ASTNode* $tmp4371 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4372, 38);
        panda$core$String* $tmp4374 = panda$core$MutableString$finish$R$panda$core$String(result4351);
        $tmp4373 = $tmp4374;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4371, $tmp4372, ((org$pandalanguage$pandac$parser$Token) start4342.value).position, $tmp4373);
        $tmp4370 = $tmp4371;
        $tmp4369 = $tmp4370;
        $returnValue4347 = $tmp4369;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4369));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4370));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4373));
        $tmp4341 = 2;
        goto $l4339;
        $l4375:;
        return $returnValue4347;
    }
    $l4339:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4351));
    result4351 = NULL;
    switch ($tmp4341) {
        case 1: goto $l4365;
        case 2: goto $l4375;
        case 0: goto $l4349;
    }
    $l4377:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id4381;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4382;
    panda$core$Int64 $tmp4383;
    org$pandalanguage$pandac$ASTNode* $returnValue4386;
    org$pandalanguage$pandac$ASTNode* $tmp4387;
    org$pandalanguage$pandac$ASTNode* t4390 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4391;
    org$pandalanguage$pandac$ASTNode* $tmp4392;
    org$pandalanguage$pandac$ASTNode* $tmp4394;
    org$pandalanguage$pandac$ASTNode* $tmp4397;
    org$pandalanguage$pandac$ASTNode* $tmp4398;
    panda$core$Int64 $tmp4400;
    panda$core$String* $tmp4401;
    int $tmp4380;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4383, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4382, $tmp4383);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4385 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4382, &$s4384);
        id4381 = $tmp4385;
        if (((panda$core$Bit) { !id4381.nonnull }).value) {
        {
            $tmp4387 = NULL;
            $returnValue4386 = $tmp4387;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4387));
            $tmp4380 = 0;
            goto $l4378;
            $l4388:;
            return $returnValue4386;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4393 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4392 = $tmp4393;
        $tmp4391 = $tmp4392;
        t4390 = $tmp4391;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4391));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4392));
        if (((panda$core$Bit) { t4390 == NULL }).value) {
        {
            $tmp4394 = NULL;
            $returnValue4386 = $tmp4394;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4394));
            $tmp4380 = 1;
            goto $l4378;
            $l4395:;
            return $returnValue4386;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4399 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4400, 31);
        panda$core$String* $tmp4402 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4381.value));
        $tmp4401 = $tmp4402;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4399, $tmp4400, ((org$pandalanguage$pandac$parser$Token) id4381.value).position, $tmp4401, t4390);
        $tmp4398 = $tmp4399;
        $tmp4397 = $tmp4398;
        $returnValue4386 = $tmp4397;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4397));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4398));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4401));
        $tmp4380 = 2;
        goto $l4378;
        $l4403:;
        return $returnValue4386;
    }
    $l4378:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4390));
    t4390 = NULL;
    switch ($tmp4380) {
        case 1: goto $l4395;
        case 2: goto $l4403;
        case 0: goto $l4388;
    }
    $l4405:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4409;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4410;
    panda$core$Int64 $tmp4411;
    panda$collections$ImmutableArray* $returnValue4414;
    panda$collections$ImmutableArray* $tmp4415;
    panda$collections$Array* result4418 = NULL;
    panda$collections$Array* $tmp4419;
    panda$collections$Array* $tmp4420;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4422;
    panda$core$Int64 $tmp4423;
    org$pandalanguage$pandac$ASTNode* param4428 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4429;
    org$pandalanguage$pandac$ASTNode* $tmp4430;
    panda$collections$ImmutableArray* $tmp4432;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4439;
    panda$core$Int64 $tmp4440;
    org$pandalanguage$pandac$ASTNode* $tmp4442;
    org$pandalanguage$pandac$ASTNode* $tmp4443;
    org$pandalanguage$pandac$ASTNode* $tmp4444;
    panda$collections$ImmutableArray* $tmp4446;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4450;
    panda$core$Int64 $tmp4451;
    panda$collections$ImmutableArray* $tmp4454;
    panda$collections$ImmutableArray* $tmp4459;
    panda$collections$ImmutableArray* $tmp4460;
    int $tmp4408;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4411, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4410, $tmp4411);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4413 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4410, &$s4412);
        start4409 = $tmp4413;
        if (((panda$core$Bit) { !start4409.nonnull }).value) {
        {
            $tmp4415 = NULL;
            $returnValue4414 = $tmp4415;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4415));
            $tmp4408 = 0;
            goto $l4406;
            $l4416:;
            return $returnValue4414;
        }
        }
        panda$collections$Array* $tmp4421 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4421);
        $tmp4420 = $tmp4421;
        $tmp4419 = $tmp4420;
        result4418 = $tmp4419;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4419));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4420));
        panda$core$Int64$init$builtin_int64(&$tmp4423, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4422, $tmp4423);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4424 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4422);
        if (((panda$core$Bit) { !$tmp4424.nonnull }).value) {
        {
            int $tmp4427;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4431 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4430 = $tmp4431;
                $tmp4429 = $tmp4430;
                param4428 = $tmp4429;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4429));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4430));
                if (((panda$core$Bit) { param4428 == NULL }).value) {
                {
                    $tmp4432 = NULL;
                    $returnValue4414 = $tmp4432;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4432));
                    $tmp4427 = 0;
                    goto $l4425;
                    $l4433:;
                    $tmp4408 = 1;
                    goto $l4406;
                    $l4434:;
                    return $returnValue4414;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4418, ((panda$core$Object*) param4428));
                $l4436:;
                panda$core$Int64$init$builtin_int64(&$tmp4440, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4439, $tmp4440);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4441 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4439);
                bool $tmp4438 = ((panda$core$Bit) { $tmp4441.nonnull }).value;
                if (!$tmp4438) goto $l4437;
                {
                    {
                        $tmp4442 = param4428;
                        org$pandalanguage$pandac$ASTNode* $tmp4445 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4444 = $tmp4445;
                        $tmp4443 = $tmp4444;
                        param4428 = $tmp4443;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4443));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4444));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4442));
                    }
                    if (((panda$core$Bit) { param4428 == NULL }).value) {
                    {
                        $tmp4446 = NULL;
                        $returnValue4414 = $tmp4446;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4446));
                        $tmp4427 = 1;
                        goto $l4425;
                        $l4447:;
                        $tmp4408 = 2;
                        goto $l4406;
                        $l4448:;
                        return $returnValue4414;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result4418, ((panda$core$Object*) param4428));
                }
                goto $l4436;
                $l4437:;
                panda$core$Int64$init$builtin_int64(&$tmp4451, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4450, $tmp4451);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4453 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4450, &$s4452);
                if (((panda$core$Bit) { !$tmp4453.nonnull }).value) {
                {
                    $tmp4454 = NULL;
                    $returnValue4414 = $tmp4454;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4454));
                    $tmp4427 = 2;
                    goto $l4425;
                    $l4455:;
                    $tmp4408 = 3;
                    goto $l4406;
                    $l4456:;
                    return $returnValue4414;
                }
                }
            }
            $tmp4427 = -1;
            goto $l4425;
            $l4425:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param4428));
            param4428 = NULL;
            switch ($tmp4427) {
                case 1: goto $l4447;
                case 2: goto $l4455;
                case -1: goto $l4458;
                case 0: goto $l4433;
            }
            $l4458:;
        }
        }
        panda$collections$ImmutableArray* $tmp4461 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4418);
        $tmp4460 = $tmp4461;
        $tmp4459 = $tmp4460;
        $returnValue4414 = $tmp4459;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4459));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4460));
        $tmp4408 = 4;
        goto $l4406;
        $l4462:;
        return $returnValue4414;
    }
    $l4406:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4418));
    result4418 = NULL;
    switch ($tmp4408) {
        case 4: goto $l4462;
        case 2: goto $l4448;
        case 3: goto $l4456;
        case 1: goto $l4434;
        case 0: goto $l4416;
    }
    $l4464:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4468;
    org$pandalanguage$pandac$parser$Token$nullable start4469;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4470;
    panda$core$Int64 $tmp4471;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4473;
    panda$core$Int64 $tmp4474;
    org$pandalanguage$pandac$ASTNode* $returnValue4477;
    org$pandalanguage$pandac$ASTNode* $tmp4478;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4481;
    panda$core$Int64 $tmp4482;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4483;
    panda$core$Int64 $tmp4484;
    panda$core$String* name4485 = NULL;
    panda$core$String* $tmp4486;
    panda$core$String* $tmp4487;
    org$pandalanguage$pandac$ASTNode* $tmp4489;
    panda$collections$ImmutableArray* generics4492 = NULL;
    panda$core$Int64 $tmp4494;
    panda$collections$ImmutableArray* $tmp4496;
    panda$collections$ImmutableArray* $tmp4497;
    panda$collections$ImmutableArray* $tmp4498;
    panda$collections$ImmutableArray* $tmp4500;
    panda$collections$ImmutableArray* $tmp4501;
    panda$collections$ImmutableArray* params4502 = NULL;
    panda$collections$ImmutableArray* $tmp4503;
    panda$collections$ImmutableArray* $tmp4504;
    org$pandalanguage$pandac$ASTNode* $tmp4506;
    org$pandalanguage$pandac$ASTNode* returnType4509 = NULL;
    panda$core$Int64 $tmp4511;
    org$pandalanguage$pandac$ASTNode* $tmp4513;
    org$pandalanguage$pandac$ASTNode* $tmp4514;
    org$pandalanguage$pandac$ASTNode* $tmp4515;
    org$pandalanguage$pandac$ASTNode* $tmp4517;
    org$pandalanguage$pandac$ASTNode* $tmp4520;
    org$pandalanguage$pandac$ASTNode* $tmp4521;
    panda$collections$ImmutableArray* body4522 = NULL;
    panda$core$Int64 $tmp4524;
    panda$collections$ImmutableArray* $tmp4526;
    panda$collections$ImmutableArray* $tmp4527;
    panda$collections$ImmutableArray* $tmp4528;
    org$pandalanguage$pandac$ASTNode* $tmp4530;
    panda$collections$ImmutableArray* $tmp4533;
    panda$collections$ImmutableArray* $tmp4534;
    org$pandalanguage$pandac$ASTNode* $tmp4535;
    org$pandalanguage$pandac$ASTNode* $tmp4536;
    panda$core$Int64 $tmp4538;
    int $tmp4467;
    {
        memset(&kind4468, 0, sizeof(kind4468));
        panda$core$Int64$init$builtin_int64(&$tmp4471, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4470, $tmp4471);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4472 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4470);
        start4469 = $tmp4472;
        if (((panda$core$Bit) { !start4469.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4474, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4473, $tmp4474);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4476 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4473, &$s4475);
            start4469 = $tmp4476;
            if (((panda$core$Bit) { !start4469.nonnull }).value) {
            {
                $tmp4478 = NULL;
                $returnValue4477 = $tmp4478;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4478));
                $tmp4467 = 0;
                goto $l4465;
                $l4479:;
                return $returnValue4477;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4482, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4481, $tmp4482);
            kind4468 = $tmp4481;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4484, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4483, $tmp4484);
            kind4468 = $tmp4483;
        }
        }
        panda$core$String* $tmp4488 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp4487 = $tmp4488;
        $tmp4486 = $tmp4487;
        name4485 = $tmp4486;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4486));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4487));
        if (((panda$core$Bit) { name4485 == NULL }).value) {
        {
            $tmp4489 = NULL;
            $returnValue4477 = $tmp4489;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4489));
            $tmp4467 = 1;
            goto $l4465;
            $l4490:;
            return $returnValue4477;
        }
        }
        memset(&generics4492, 0, sizeof(generics4492));
        org$pandalanguage$pandac$parser$Token $tmp4493 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4494, 62);
        panda$core$Bit $tmp4495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4493.kind.$rawValue, $tmp4494);
        if ($tmp4495.value) {
        {
            {
                $tmp4496 = generics4492;
                panda$collections$ImmutableArray* $tmp4499 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4498 = $tmp4499;
                $tmp4497 = $tmp4498;
                generics4492 = $tmp4497;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4497));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4498));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4496));
            }
        }
        }
        else {
        {
            {
                $tmp4500 = generics4492;
                $tmp4501 = NULL;
                generics4492 = $tmp4501;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4501));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4500));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4505 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4504 = $tmp4505;
        $tmp4503 = $tmp4504;
        params4502 = $tmp4503;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4503));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4504));
        if (((panda$core$Bit) { params4502 == NULL }).value) {
        {
            $tmp4506 = NULL;
            $returnValue4477 = $tmp4506;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4506));
            $tmp4467 = 2;
            goto $l4465;
            $l4507:;
            return $returnValue4477;
        }
        }
        memset(&returnType4509, 0, sizeof(returnType4509));
        org$pandalanguage$pandac$parser$Token $tmp4510 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4511, 95);
        panda$core$Bit $tmp4512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4510.kind.$rawValue, $tmp4511);
        if ($tmp4512.value) {
        {
            {
                $tmp4513 = returnType4509;
                org$pandalanguage$pandac$ASTNode* $tmp4516 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4515 = $tmp4516;
                $tmp4514 = $tmp4515;
                returnType4509 = $tmp4514;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4514));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4515));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4513));
            }
            if (((panda$core$Bit) { returnType4509 == NULL }).value) {
            {
                $tmp4517 = NULL;
                $returnValue4477 = $tmp4517;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4517));
                $tmp4467 = 3;
                goto $l4465;
                $l4518:;
                return $returnValue4477;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4520 = returnType4509;
                $tmp4521 = NULL;
                returnType4509 = $tmp4521;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4521));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4520));
            }
        }
        }
        memset(&body4522, 0, sizeof(body4522));
        org$pandalanguage$pandac$parser$Token $tmp4523 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4524, 99);
        panda$core$Bit $tmp4525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4523.kind.$rawValue, $tmp4524);
        if ($tmp4525.value) {
        {
            {
                $tmp4526 = body4522;
                panda$collections$ImmutableArray* $tmp4529 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4528 = $tmp4529;
                $tmp4527 = $tmp4528;
                body4522 = $tmp4527;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4527));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4528));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4526));
            }
            if (((panda$core$Bit) { body4522 == NULL }).value) {
            {
                $tmp4530 = NULL;
                $returnValue4477 = $tmp4530;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4530));
                $tmp4467 = 4;
                goto $l4465;
                $l4531:;
                return $returnValue4477;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4533 = body4522;
                $tmp4534 = NULL;
                body4522 = $tmp4534;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4534));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4533));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4537 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4538, 26);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4537, $tmp4538, ((org$pandalanguage$pandac$parser$Token) start4469.value).position, p_doccomment, p_annotations, kind4468, name4485, generics4492, params4502, returnType4509, body4522);
        $tmp4536 = $tmp4537;
        $tmp4535 = $tmp4536;
        $returnValue4477 = $tmp4535;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4535));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4536));
        $tmp4467 = 5;
        goto $l4465;
        $l4539:;
        return $returnValue4477;
    }
    $l4465:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4522));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4509));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4502));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4492));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4485));
    name4485 = NULL;
    params4502 = NULL;
    switch ($tmp4467) {
        case 3: goto $l4518;
        case 4: goto $l4531;
        case 1: goto $l4490;
        case 2: goto $l4507;
        case 5: goto $l4539;
        case 0: goto $l4479;
    }
    $l4541:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4545;
    org$pandalanguage$pandac$parser$Token$nullable start4546;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4547;
    panda$core$Int64 $tmp4548;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4550;
    panda$core$Int64 $tmp4551;
    org$pandalanguage$pandac$ASTNode* $returnValue4554;
    org$pandalanguage$pandac$ASTNode* $tmp4555;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4558;
    panda$core$Int64 $tmp4559;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4560;
    panda$core$Int64 $tmp4561;
    panda$collections$ImmutableArray* params4562 = NULL;
    panda$collections$ImmutableArray* $tmp4563;
    panda$collections$ImmutableArray* $tmp4564;
    org$pandalanguage$pandac$ASTNode* $tmp4566;
    org$pandalanguage$pandac$ASTNode* returnType4569 = NULL;
    panda$core$Int64 $tmp4571;
    org$pandalanguage$pandac$ASTNode* $tmp4573;
    org$pandalanguage$pandac$ASTNode* $tmp4574;
    org$pandalanguage$pandac$ASTNode* $tmp4575;
    org$pandalanguage$pandac$ASTNode* $tmp4577;
    org$pandalanguage$pandac$ASTNode* $tmp4580;
    org$pandalanguage$pandac$ASTNode* $tmp4581;
    panda$collections$ImmutableArray* body4582 = NULL;
    panda$collections$ImmutableArray* $tmp4583;
    panda$collections$ImmutableArray* $tmp4584;
    org$pandalanguage$pandac$ASTNode* $tmp4586;
    org$pandalanguage$pandac$ASTNode* $tmp4589;
    org$pandalanguage$pandac$ASTNode* $tmp4590;
    panda$core$Int64 $tmp4592;
    panda$collections$ImmutableArray* $tmp4593;
    int $tmp4544;
    {
        memset(&kind4545, 0, sizeof(kind4545));
        panda$core$Int64$init$builtin_int64(&$tmp4548, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4547, $tmp4548);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4549 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4547);
        start4546 = $tmp4549;
        if (((panda$core$Bit) { !start4546.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4551, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4550, $tmp4551);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4553 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4550, &$s4552);
            start4546 = $tmp4553;
            if (((panda$core$Bit) { !start4546.nonnull }).value) {
            {
                $tmp4555 = NULL;
                $returnValue4554 = $tmp4555;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4555));
                $tmp4544 = 0;
                goto $l4542;
                $l4556:;
                return $returnValue4554;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4559, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4558, $tmp4559);
            kind4545 = $tmp4558;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4561, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4560, $tmp4561);
            kind4545 = $tmp4560;
        }
        }
        panda$collections$ImmutableArray* $tmp4565 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4564 = $tmp4565;
        $tmp4563 = $tmp4564;
        params4562 = $tmp4563;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4563));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4564));
        if (((panda$core$Bit) { params4562 == NULL }).value) {
        {
            $tmp4566 = NULL;
            $returnValue4554 = $tmp4566;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4566));
            $tmp4544 = 1;
            goto $l4542;
            $l4567:;
            return $returnValue4554;
        }
        }
        memset(&returnType4569, 0, sizeof(returnType4569));
        org$pandalanguage$pandac$parser$Token $tmp4570 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4571, 95);
        panda$core$Bit $tmp4572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4570.kind.$rawValue, $tmp4571);
        if ($tmp4572.value) {
        {
            {
                $tmp4573 = returnType4569;
                org$pandalanguage$pandac$ASTNode* $tmp4576 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4575 = $tmp4576;
                $tmp4574 = $tmp4575;
                returnType4569 = $tmp4574;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4574));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4575));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4573));
            }
            if (((panda$core$Bit) { returnType4569 == NULL }).value) {
            {
                $tmp4577 = NULL;
                $returnValue4554 = $tmp4577;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4577));
                $tmp4544 = 2;
                goto $l4542;
                $l4578:;
                return $returnValue4554;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4580 = returnType4569;
                $tmp4581 = NULL;
                returnType4569 = $tmp4581;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4581));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4580));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4585 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4584 = $tmp4585;
        $tmp4583 = $tmp4584;
        body4582 = $tmp4583;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4583));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4584));
        if (((panda$core$Bit) { body4582 == NULL }).value) {
        {
            $tmp4586 = NULL;
            $returnValue4554 = $tmp4586;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4586));
            $tmp4544 = 3;
            goto $l4542;
            $l4587:;
            return $returnValue4554;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4591 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4592, 26);
        panda$collections$ImmutableArray* $tmp4594 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4594);
        $tmp4593 = $tmp4594;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4591, $tmp4592, ((org$pandalanguage$pandac$parser$Token) start4546.value).position, NULL, $tmp4593, kind4545, &$s4595, NULL, params4562, returnType4569, body4582);
        $tmp4590 = $tmp4591;
        $tmp4589 = $tmp4590;
        $returnValue4554 = $tmp4589;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4589));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4590));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4593));
        $tmp4544 = 4;
        goto $l4542;
        $l4596:;
        return $returnValue4554;
    }
    $l4542:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4582));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4569));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4562));
    params4562 = NULL;
    body4582 = NULL;
    switch ($tmp4544) {
        case 1: goto $l4567;
        case 2: goto $l4578;
        case 3: goto $l4587;
        case 0: goto $l4556;
        case 4: goto $l4596;
    }
    $l4598:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4602;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4603;
    panda$core$Int64 $tmp4604;
    org$pandalanguage$pandac$ASTNode* $returnValue4607;
    org$pandalanguage$pandac$ASTNode* $tmp4608;
    panda$collections$ImmutableArray* params4611 = NULL;
    panda$collections$ImmutableArray* $tmp4612;
    panda$collections$ImmutableArray* $tmp4613;
    org$pandalanguage$pandac$ASTNode* $tmp4615;
    panda$collections$ImmutableArray* b4618 = NULL;
    panda$collections$ImmutableArray* $tmp4619;
    panda$collections$ImmutableArray* $tmp4620;
    org$pandalanguage$pandac$ASTNode* $tmp4622;
    org$pandalanguage$pandac$ASTNode* $tmp4625;
    org$pandalanguage$pandac$ASTNode* $tmp4626;
    panda$core$Int64 $tmp4628;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4629;
    panda$core$Int64 $tmp4630;
    int $tmp4601;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4604, 22);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4603, $tmp4604);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4606 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4603, &$s4605);
        start4602 = $tmp4606;
        if (((panda$core$Bit) { !start4602.nonnull }).value) {
        {
            $tmp4608 = NULL;
            $returnValue4607 = $tmp4608;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4608));
            $tmp4601 = 0;
            goto $l4599;
            $l4609:;
            return $returnValue4607;
        }
        }
        panda$collections$ImmutableArray* $tmp4614 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4613 = $tmp4614;
        $tmp4612 = $tmp4613;
        params4611 = $tmp4612;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4612));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4613));
        if (((panda$core$Bit) { params4611 == NULL }).value) {
        {
            $tmp4615 = NULL;
            $returnValue4607 = $tmp4615;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4615));
            $tmp4601 = 1;
            goto $l4599;
            $l4616:;
            return $returnValue4607;
        }
        }
        panda$collections$ImmutableArray* $tmp4621 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4620 = $tmp4621;
        $tmp4619 = $tmp4620;
        b4618 = $tmp4619;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4619));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4620));
        if (((panda$core$Bit) { b4618 == NULL }).value) {
        {
            $tmp4622 = NULL;
            $returnValue4607 = $tmp4622;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4622));
            $tmp4601 = 2;
            goto $l4599;
            $l4623:;
            return $returnValue4607;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4627 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4628, 26);
        panda$core$Int64$init$builtin_int64(&$tmp4630, 2);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4629, $tmp4630);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4627, $tmp4628, ((org$pandalanguage$pandac$parser$Token) start4602.value).position, p_doccomment, p_annotations, $tmp4629, &$s4631, NULL, params4611, NULL, b4618);
        $tmp4626 = $tmp4627;
        $tmp4625 = $tmp4626;
        $returnValue4607 = $tmp4625;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4625));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4626));
        $tmp4601 = 3;
        goto $l4599;
        $l4632:;
        return $returnValue4607;
    }
    $l4599:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b4618));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4611));
    params4611 = NULL;
    b4618 = NULL;
    switch ($tmp4601) {
        case 3: goto $l4632;
        case 1: goto $l4616;
        case 2: goto $l4623;
        case 0: goto $l4609;
    }
    $l4634:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl4638 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4639;
    org$pandalanguage$pandac$ASTNode* $tmp4640;
    org$pandalanguage$pandac$ASTNode* $returnValue4642;
    org$pandalanguage$pandac$ASTNode* $tmp4643;
    org$pandalanguage$pandac$ASTNode* $tmp4646;
    org$pandalanguage$pandac$ASTNode* $tmp4647;
    panda$core$Int64 $tmp4649;
    int $tmp4637;
    {
        org$pandalanguage$pandac$ASTNode* $tmp4641 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4640 = $tmp4641;
        $tmp4639 = $tmp4640;
        decl4638 = $tmp4639;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4639));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4640));
        if (((panda$core$Bit) { decl4638 == NULL }).value) {
        {
            $tmp4643 = NULL;
            $returnValue4642 = $tmp4643;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4643));
            $tmp4637 = 0;
            goto $l4635;
            $l4644:;
            return $returnValue4642;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4648 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4649, 16);
        org$pandalanguage$pandac$Position $tmp4651 = (($fn4650) decl4638->$class->vtable[2])(decl4638);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4648, $tmp4649, $tmp4651, p_doccomment, p_annotations, decl4638);
        $tmp4647 = $tmp4648;
        $tmp4646 = $tmp4647;
        $returnValue4642 = $tmp4646;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4646));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4647));
        $tmp4637 = 1;
        goto $l4635;
        $l4652:;
        return $returnValue4642;
    }
    $l4635:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4638));
    decl4638 = NULL;
    switch ($tmp4637) {
        case 0: goto $l4644;
        case 1: goto $l4652;
    }
    $l4654:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name4658;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4659;
    panda$core$Int64 $tmp4660;
    org$pandalanguage$pandac$ASTNode* $returnValue4663;
    org$pandalanguage$pandac$ASTNode* $tmp4664;
    panda$collections$Array* fields4667 = NULL;
    panda$collections$Array* $tmp4668;
    panda$collections$Array* $tmp4669;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4671;
    panda$core$Int64 $tmp4672;
    panda$core$Int64 $tmp4675;
    org$pandalanguage$pandac$ASTNode* field4680 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4681;
    org$pandalanguage$pandac$ASTNode* $tmp4682;
    org$pandalanguage$pandac$ASTNode* $tmp4684;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4691;
    panda$core$Int64 $tmp4692;
    org$pandalanguage$pandac$ASTNode* $tmp4694;
    org$pandalanguage$pandac$ASTNode* $tmp4695;
    org$pandalanguage$pandac$ASTNode* $tmp4696;
    org$pandalanguage$pandac$ASTNode* $tmp4698;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4703;
    panda$core$Int64 $tmp4704;
    org$pandalanguage$pandac$ASTNode* $tmp4707;
    org$pandalanguage$pandac$ASTNode* $tmp4710;
    org$pandalanguage$pandac$ASTNode* $tmp4711;
    panda$core$Int64 $tmp4713;
    panda$core$String* $tmp4714;
    panda$collections$ImmutableArray* $tmp4716;
    int $tmp4657;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4660, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4659, $tmp4660);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4662 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4659, &$s4661);
        name4658 = $tmp4662;
        if (((panda$core$Bit) { !name4658.nonnull }).value) {
        {
            $tmp4664 = NULL;
            $returnValue4663 = $tmp4664;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4664));
            $tmp4657 = 0;
            goto $l4655;
            $l4665:;
            return $returnValue4663;
        }
        }
        panda$collections$Array* $tmp4670 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4670);
        $tmp4669 = $tmp4670;
        $tmp4668 = $tmp4669;
        fields4667 = $tmp4668;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4668));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4669));
        panda$core$Int64$init$builtin_int64(&$tmp4672, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4671, $tmp4672);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4673 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4671);
        if (((panda$core$Bit) { $tmp4673.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4674 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp4675, 104);
            panda$core$Bit $tmp4676 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4674.kind.$rawValue, $tmp4675);
            if ($tmp4676.value) {
            {
                int $tmp4679;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4683 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4682 = $tmp4683;
                    $tmp4681 = $tmp4682;
                    field4680 = $tmp4681;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4681));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4682));
                    if (((panda$core$Bit) { field4680 == NULL }).value) {
                    {
                        $tmp4684 = NULL;
                        $returnValue4663 = $tmp4684;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4684));
                        $tmp4679 = 0;
                        goto $l4677;
                        $l4685:;
                        $tmp4657 = 1;
                        goto $l4655;
                        $l4686:;
                        return $returnValue4663;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields4667, ((panda$core$Object*) field4680));
                    $l4688:;
                    panda$core$Int64$init$builtin_int64(&$tmp4692, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4691, $tmp4692);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp4693 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4691);
                    bool $tmp4690 = ((panda$core$Bit) { $tmp4693.nonnull }).value;
                    if (!$tmp4690) goto $l4689;
                    {
                        {
                            $tmp4694 = field4680;
                            org$pandalanguage$pandac$ASTNode* $tmp4697 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp4696 = $tmp4697;
                            $tmp4695 = $tmp4696;
                            field4680 = $tmp4695;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4695));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4696));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4694));
                        }
                        if (((panda$core$Bit) { field4680 == NULL }).value) {
                        {
                            $tmp4698 = NULL;
                            $returnValue4663 = $tmp4698;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4698));
                            $tmp4679 = 1;
                            goto $l4677;
                            $l4699:;
                            $tmp4657 = 2;
                            goto $l4655;
                            $l4700:;
                            return $returnValue4663;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields4667, ((panda$core$Object*) field4680));
                    }
                    goto $l4688;
                    $l4689:;
                }
                $tmp4679 = -1;
                goto $l4677;
                $l4677:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4680));
                field4680 = NULL;
                switch ($tmp4679) {
                    case 0: goto $l4685;
                    case 1: goto $l4699;
                    case -1: goto $l4702;
                }
                $l4702:;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4704, 104);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4703, $tmp4704);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4706 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4703, &$s4705);
            if (((panda$core$Bit) { !$tmp4706.nonnull }).value) {
            {
                $tmp4707 = NULL;
                $returnValue4663 = $tmp4707;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4707));
                $tmp4657 = 3;
                goto $l4655;
                $l4708:;
                return $returnValue4663;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4712 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4713, 9);
        panda$core$String* $tmp4715 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4658.value));
        $tmp4714 = $tmp4715;
        panda$collections$ImmutableArray* $tmp4717 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields4667);
        $tmp4716 = $tmp4717;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4712, $tmp4713, ((org$pandalanguage$pandac$parser$Token) name4658.value).position, p_doccomment, $tmp4714, $tmp4716);
        $tmp4711 = $tmp4712;
        $tmp4710 = $tmp4711;
        $returnValue4663 = $tmp4710;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4710));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4711));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4716));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4714));
        $tmp4657 = 4;
        goto $l4655;
        $l4718:;
        return $returnValue4663;
    }
    $l4655:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields4667));
    fields4667 = NULL;
    switch ($tmp4657) {
        case 3: goto $l4708;
        case 2: goto $l4700;
        case 1: goto $l4686;
        case 0: goto $l4665;
        case 4: goto $l4718;
    }
    $l4720:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4724;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4725;
    panda$core$Int64 $tmp4726;
    org$pandalanguage$pandac$ASTNode* $returnValue4729;
    org$pandalanguage$pandac$ASTNode* $tmp4730;
    org$pandalanguage$pandac$parser$Token$nullable name4733;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4734;
    panda$core$Int64 $tmp4735;
    org$pandalanguage$pandac$ASTNode* $tmp4738;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4741;
    panda$core$Int64 $tmp4742;
    org$pandalanguage$pandac$ASTNode* $tmp4745;
    panda$collections$Array* members4748 = NULL;
    panda$collections$Array* $tmp4749;
    panda$collections$Array* $tmp4750;
    org$pandalanguage$pandac$ASTNode* dc4752 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4753;
    org$pandalanguage$pandac$parser$Token next4756;
    org$pandalanguage$pandac$parser$Token$Kind $match$2221_134758;
    panda$core$Int64 $tmp4768;
    panda$core$Int64 $tmp4771;
    panda$core$Int64 $tmp4775;
    panda$core$Int64 $tmp4779;
    panda$core$Int64 $tmp4783;
    panda$core$Int64 $tmp4787;
    panda$core$Int64 $tmp4791;
    panda$core$Int64 $tmp4795;
    panda$core$Int64 $tmp4799;
    panda$core$Int64 $tmp4803;
    panda$core$Int64 $tmp4806;
    panda$core$String* $tmp4808;
    panda$core$String* $tmp4809;
    panda$core$String* $tmp4811;
    org$pandalanguage$pandac$ASTNode* $tmp4816;
    org$pandalanguage$pandac$ASTNode* $tmp4817;
    org$pandalanguage$pandac$ASTNode* $tmp4818;
    panda$core$Int64 $tmp4820;
    org$pandalanguage$pandac$ASTNode* c4825 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4826;
    org$pandalanguage$pandac$ASTNode* $tmp4827;
    org$pandalanguage$pandac$ASTNode* $tmp4829;
    org$pandalanguage$pandac$ASTNode* $tmp4833;
    org$pandalanguage$pandac$ASTNode* $tmp4834;
    panda$collections$ImmutableArray* a4836 = NULL;
    panda$collections$ImmutableArray* $tmp4837;
    panda$collections$ImmutableArray* $tmp4838;
    org$pandalanguage$pandac$parser$Token next4842;
    org$pandalanguage$pandac$parser$Token$Kind $match$2245_134844;
    panda$core$Int64 $tmp4845;
    panda$core$Int64 $tmp4848;
    panda$core$String* $tmp4850;
    panda$core$String* $tmp4851;
    panda$core$String* $tmp4853;
    org$pandalanguage$pandac$ASTNode* $tmp4858;
    panda$collections$ImmutableArray* $tmp4861;
    panda$collections$ImmutableArray* $tmp4862;
    panda$collections$ImmutableArray* $tmp4863;
    panda$core$Int64 $tmp4865;
    panda$core$Int64 $tmp4870;
    panda$core$String* $tmp4873;
    panda$core$String* $tmp4874;
    panda$core$String* $tmp4876;
    org$pandalanguage$pandac$ASTNode* $tmp4881;
    org$pandalanguage$pandac$ASTNode* $tmp4884;
    org$pandalanguage$pandac$ASTNode* $tmp4885;
    org$pandalanguage$pandac$ASTNode* $tmp4886;
    panda$core$Int64 $tmp4888;
    org$pandalanguage$pandac$ASTNode* decl4893 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4894;
    org$pandalanguage$pandac$ASTNode* $tmp4895;
    org$pandalanguage$pandac$ASTNode* $tmp4897;
    org$pandalanguage$pandac$ASTNode* $tmp4901;
    org$pandalanguage$pandac$ASTNode* $tmp4902;
    panda$collections$ImmutableArray* $tmp4903;
    panda$collections$ImmutableArray* $tmp4904;
    panda$collections$ImmutableArray* $tmp4905;
    panda$core$Int64 $tmp4908;
    org$pandalanguage$pandac$ASTNode* decl4913 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4914;
    org$pandalanguage$pandac$ASTNode* $tmp4915;
    org$pandalanguage$pandac$ASTNode* $tmp4917;
    org$pandalanguage$pandac$ASTNode* $tmp4921;
    org$pandalanguage$pandac$ASTNode* $tmp4922;
    panda$collections$ImmutableArray* $tmp4923;
    panda$collections$ImmutableArray* $tmp4924;
    panda$collections$ImmutableArray* $tmp4925;
    panda$core$Int64 $tmp4928;
    org$pandalanguage$pandac$ASTNode* decl4933 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4934;
    org$pandalanguage$pandac$ASTNode* $tmp4935;
    org$pandalanguage$pandac$ASTNode* $tmp4937;
    org$pandalanguage$pandac$ASTNode* $tmp4941;
    org$pandalanguage$pandac$ASTNode* $tmp4942;
    panda$collections$ImmutableArray* $tmp4943;
    panda$collections$ImmutableArray* $tmp4944;
    panda$collections$ImmutableArray* $tmp4945;
    panda$core$Int64 $tmp4949;
    panda$core$Int64 $tmp4952;
    org$pandalanguage$pandac$ASTNode* decl4958 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4959;
    org$pandalanguage$pandac$ASTNode* $tmp4960;
    org$pandalanguage$pandac$ASTNode* $tmp4962;
    org$pandalanguage$pandac$ASTNode* $tmp4966;
    org$pandalanguage$pandac$ASTNode* $tmp4967;
    panda$collections$ImmutableArray* $tmp4968;
    panda$collections$ImmutableArray* $tmp4969;
    panda$collections$ImmutableArray* $tmp4970;
    panda$core$Int64 $tmp4976;
    panda$core$Int64 $tmp4979;
    panda$core$Int64 $tmp4983;
    panda$core$Int64 $tmp4987;
    org$pandalanguage$pandac$ASTNode* decl4993 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4994;
    org$pandalanguage$pandac$ASTNode* $tmp4995;
    org$pandalanguage$pandac$ASTNode* $tmp4997;
    org$pandalanguage$pandac$ASTNode* $tmp5001;
    org$pandalanguage$pandac$ASTNode* $tmp5002;
    panda$collections$ImmutableArray* $tmp5003;
    panda$collections$ImmutableArray* $tmp5004;
    panda$collections$ImmutableArray* $tmp5005;
    panda$core$Int64 $tmp5008;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5010;
    panda$core$Int64 $tmp5011;
    panda$core$String* $tmp5013;
    panda$core$String* $tmp5014;
    panda$core$String* $tmp5016;
    org$pandalanguage$pandac$ASTNode* $tmp5021;
    org$pandalanguage$pandac$ASTNode* $tmp5024;
    org$pandalanguage$pandac$ASTNode* $tmp5025;
    panda$core$Int64 $tmp5027;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5028;
    panda$core$Int64 $tmp5029;
    panda$core$String* $tmp5030;
    panda$collections$ImmutableArray* $tmp5032;
    int $tmp4723;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4726, 19);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4725, $tmp4726);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4728 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4725, &$s4727);
        start4724 = $tmp4728;
        if (((panda$core$Bit) { !start4724.nonnull }).value) {
        {
            $tmp4730 = NULL;
            $returnValue4729 = $tmp4730;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4730));
            $tmp4723 = 0;
            goto $l4721;
            $l4731:;
            return $returnValue4729;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4735, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4734, $tmp4735);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4737 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4734, &$s4736);
        name4733 = $tmp4737;
        if (((panda$core$Bit) { !name4733.nonnull }).value) {
        {
            $tmp4738 = NULL;
            $returnValue4729 = $tmp4738;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4738));
            $tmp4723 = 1;
            goto $l4721;
            $l4739:;
            return $returnValue4729;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4742, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4741, $tmp4742);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4744 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4741, &$s4743);
        if (((panda$core$Bit) { !$tmp4744.nonnull }).value) {
        {
            $tmp4745 = NULL;
            $returnValue4729 = $tmp4745;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4745));
            $tmp4723 = 2;
            goto $l4721;
            $l4746:;
            return $returnValue4729;
        }
        }
        panda$collections$Array* $tmp4751 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4751);
        $tmp4750 = $tmp4751;
        $tmp4749 = $tmp4750;
        members4748 = $tmp4749;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4749));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4750));
        $tmp4753 = NULL;
        dc4752 = $tmp4753;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4753));
        $l4754:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4757 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4756 = $tmp4757;
            {
                $match$2221_134758 = next4756.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4768, 17);
                panda$core$Bit $tmp4769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134758.$rawValue, $tmp4768);
                bool $tmp4767 = $tmp4769.value;
                if ($tmp4767) goto $l4770;
                panda$core$Int64$init$builtin_int64(&$tmp4771, 18);
                panda$core$Bit $tmp4772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134758.$rawValue, $tmp4771);
                $tmp4767 = $tmp4772.value;
                $l4770:;
                panda$core$Bit $tmp4773 = { $tmp4767 };
                bool $tmp4766 = $tmp4773.value;
                if ($tmp4766) goto $l4774;
                panda$core$Int64$init$builtin_int64(&$tmp4775, 19);
                panda$core$Bit $tmp4776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134758.$rawValue, $tmp4775);
                $tmp4766 = $tmp4776.value;
                $l4774:;
                panda$core$Bit $tmp4777 = { $tmp4766 };
                bool $tmp4765 = $tmp4777.value;
                if ($tmp4765) goto $l4778;
                panda$core$Int64$init$builtin_int64(&$tmp4779, 21);
                panda$core$Bit $tmp4780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134758.$rawValue, $tmp4779);
                $tmp4765 = $tmp4780.value;
                $l4778:;
                panda$core$Bit $tmp4781 = { $tmp4765 };
                bool $tmp4764 = $tmp4781.value;
                if ($tmp4764) goto $l4782;
                panda$core$Int64$init$builtin_int64(&$tmp4783, 20);
                panda$core$Bit $tmp4784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134758.$rawValue, $tmp4783);
                $tmp4764 = $tmp4784.value;
                $l4782:;
                panda$core$Bit $tmp4785 = { $tmp4764 };
                bool $tmp4763 = $tmp4785.value;
                if ($tmp4763) goto $l4786;
                panda$core$Int64$init$builtin_int64(&$tmp4787, 13);
                panda$core$Bit $tmp4788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134758.$rawValue, $tmp4787);
                $tmp4763 = $tmp4788.value;
                $l4786:;
                panda$core$Bit $tmp4789 = { $tmp4763 };
                bool $tmp4762 = $tmp4789.value;
                if ($tmp4762) goto $l4790;
                panda$core$Int64$init$builtin_int64(&$tmp4791, 23);
                panda$core$Bit $tmp4792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134758.$rawValue, $tmp4791);
                $tmp4762 = $tmp4792.value;
                $l4790:;
                panda$core$Bit $tmp4793 = { $tmp4762 };
                bool $tmp4761 = $tmp4793.value;
                if ($tmp4761) goto $l4794;
                panda$core$Int64$init$builtin_int64(&$tmp4795, 24);
                panda$core$Bit $tmp4796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134758.$rawValue, $tmp4795);
                $tmp4761 = $tmp4796.value;
                $l4794:;
                panda$core$Bit $tmp4797 = { $tmp4761 };
                bool $tmp4760 = $tmp4797.value;
                if ($tmp4760) goto $l4798;
                panda$core$Int64$init$builtin_int64(&$tmp4799, 25);
                panda$core$Bit $tmp4800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134758.$rawValue, $tmp4799);
                $tmp4760 = $tmp4800.value;
                $l4798:;
                panda$core$Bit $tmp4801 = { $tmp4760 };
                bool $tmp4759 = $tmp4801.value;
                if ($tmp4759) goto $l4802;
                panda$core$Int64$init$builtin_int64(&$tmp4803, 26);
                panda$core$Bit $tmp4804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134758.$rawValue, $tmp4803);
                $tmp4759 = $tmp4804.value;
                $l4802:;
                panda$core$Bit $tmp4805 = { $tmp4759 };
                if ($tmp4805.value) {
                {
                    goto $l4755;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4806, 11);
                panda$core$Bit $tmp4807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134758.$rawValue, $tmp4806);
                if ($tmp4807.value) {
                {
                    if (((panda$core$Bit) { dc4752 != NULL }).value) {
                    {
                        panda$core$String* $tmp4812 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4756);
                        $tmp4811 = $tmp4812;
                        panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4810, $tmp4811);
                        $tmp4809 = $tmp4813;
                        panda$core$String* $tmp4815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4809, &$s4814);
                        $tmp4808 = $tmp4815;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4756, $tmp4808);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4808));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4809));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4811));
                    }
                    }
                    {
                        $tmp4816 = dc4752;
                        org$pandalanguage$pandac$ASTNode* $tmp4819 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4818 = $tmp4819;
                        $tmp4817 = $tmp4818;
                        dc4752 = $tmp4817;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4817));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4818));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4816));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4820, 48);
                panda$core$Bit $tmp4821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134758.$rawValue, $tmp4820);
                if ($tmp4821.value) {
                {
                    int $tmp4824;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4828 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4752);
                        $tmp4827 = $tmp4828;
                        $tmp4826 = $tmp4827;
                        c4825 = $tmp4826;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4826));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4827));
                        if (((panda$core$Bit) { c4825 == NULL }).value) {
                        {
                            $tmp4829 = NULL;
                            $returnValue4729 = $tmp4829;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4829));
                            $tmp4824 = 0;
                            goto $l4822;
                            $l4830:;
                            $tmp4723 = 3;
                            goto $l4721;
                            $l4831:;
                            return $returnValue4729;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4748, ((panda$core$Object*) c4825));
                        {
                            $tmp4833 = dc4752;
                            $tmp4834 = NULL;
                            dc4752 = $tmp4834;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4834));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4833));
                        }
                    }
                    $tmp4824 = -1;
                    goto $l4822;
                    $l4822:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c4825));
                    c4825 = NULL;
                    switch ($tmp4824) {
                        case 0: goto $l4830;
                        case -1: goto $l4835;
                    }
                    $l4835:;
                }
                }
                else {
                {
                    goto $l4755;
                }
                }
                }
                }
            }
        }
        }
        $l4755:;
        panda$collections$ImmutableArray* $tmp4839 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4839);
        $tmp4838 = $tmp4839;
        $tmp4837 = $tmp4838;
        a4836 = $tmp4837;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4837));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4838));
        $l4840:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4843 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4842 = $tmp4843;
            {
                $match$2245_134844 = next4842.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4845, 13);
                panda$core$Bit $tmp4846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2245_134844.$rawValue, $tmp4845);
                if ($tmp4846.value) {
                {
                    panda$core$Int64 $tmp4847 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4836);
                    panda$core$Int64$init$builtin_int64(&$tmp4848, 0);
                    panda$core$Bit $tmp4849 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4847, $tmp4848);
                    if ($tmp4849.value) {
                    {
                        panda$core$String* $tmp4854 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4842);
                        $tmp4853 = $tmp4854;
                        panda$core$String* $tmp4855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4852, $tmp4853);
                        $tmp4851 = $tmp4855;
                        panda$core$String* $tmp4857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4851, &$s4856);
                        $tmp4850 = $tmp4857;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4842, $tmp4850);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4850));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4851));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4853));
                        $tmp4858 = NULL;
                        $returnValue4729 = $tmp4858;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4858));
                        $tmp4723 = 4;
                        goto $l4721;
                        $l4859:;
                        return $returnValue4729;
                    }
                    }
                    {
                        $tmp4861 = a4836;
                        panda$collections$ImmutableArray* $tmp4864 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp4863 = $tmp4864;
                        $tmp4862 = $tmp4863;
                        a4836 = $tmp4862;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4862));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4863));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4861));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4865, 11);
                panda$core$Bit $tmp4866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2245_134844.$rawValue, $tmp4865);
                if ($tmp4866.value) {
                {
                    bool $tmp4867 = ((panda$core$Bit) { dc4752 != NULL }).value;
                    if ($tmp4867) goto $l4868;
                    panda$core$Int64 $tmp4869 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4836);
                    panda$core$Int64$init$builtin_int64(&$tmp4870, 0);
                    panda$core$Bit $tmp4871 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4869, $tmp4870);
                    $tmp4867 = $tmp4871.value;
                    $l4868:;
                    panda$core$Bit $tmp4872 = { $tmp4867 };
                    if ($tmp4872.value) {
                    {
                        panda$core$String* $tmp4877 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4842);
                        $tmp4876 = $tmp4877;
                        panda$core$String* $tmp4878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4875, $tmp4876);
                        $tmp4874 = $tmp4878;
                        panda$core$String* $tmp4880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4874, &$s4879);
                        $tmp4873 = $tmp4880;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4842, $tmp4873);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4873));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4874));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4876));
                        $tmp4881 = NULL;
                        $returnValue4729 = $tmp4881;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4881));
                        $tmp4723 = 5;
                        goto $l4721;
                        $l4882:;
                        return $returnValue4729;
                    }
                    }
                    {
                        $tmp4884 = dc4752;
                        org$pandalanguage$pandac$ASTNode* $tmp4887 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4886 = $tmp4887;
                        $tmp4885 = $tmp4886;
                        dc4752 = $tmp4885;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4885));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4886));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4884));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4888, 17);
                panda$core$Bit $tmp4889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2245_134844.$rawValue, $tmp4888);
                if ($tmp4889.value) {
                {
                    int $tmp4892;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4896 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4752, a4836);
                        $tmp4895 = $tmp4896;
                        $tmp4894 = $tmp4895;
                        decl4893 = $tmp4894;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4894));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4895));
                        if (((panda$core$Bit) { decl4893 == NULL }).value) {
                        {
                            $tmp4897 = NULL;
                            $returnValue4729 = $tmp4897;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4897));
                            $tmp4892 = 0;
                            goto $l4890;
                            $l4898:;
                            $tmp4723 = 6;
                            goto $l4721;
                            $l4899:;
                            return $returnValue4729;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4748, ((panda$core$Object*) decl4893));
                        {
                            $tmp4901 = dc4752;
                            $tmp4902 = NULL;
                            dc4752 = $tmp4902;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4902));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4901));
                        }
                        {
                            $tmp4903 = a4836;
                            panda$collections$ImmutableArray* $tmp4906 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4906);
                            $tmp4905 = $tmp4906;
                            $tmp4904 = $tmp4905;
                            a4836 = $tmp4904;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4904));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4905));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4903));
                        }
                    }
                    $tmp4892 = -1;
                    goto $l4890;
                    $l4890:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4893));
                    decl4893 = NULL;
                    switch ($tmp4892) {
                        case -1: goto $l4907;
                        case 0: goto $l4898;
                    }
                    $l4907:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4908, 18);
                panda$core$Bit $tmp4909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2245_134844.$rawValue, $tmp4908);
                if ($tmp4909.value) {
                {
                    int $tmp4912;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4916 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4752, a4836);
                        $tmp4915 = $tmp4916;
                        $tmp4914 = $tmp4915;
                        decl4913 = $tmp4914;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4914));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4915));
                        if (((panda$core$Bit) { decl4913 == NULL }).value) {
                        {
                            $tmp4917 = NULL;
                            $returnValue4729 = $tmp4917;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4917));
                            $tmp4912 = 0;
                            goto $l4910;
                            $l4918:;
                            $tmp4723 = 7;
                            goto $l4721;
                            $l4919:;
                            return $returnValue4729;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4748, ((panda$core$Object*) decl4913));
                        {
                            $tmp4921 = dc4752;
                            $tmp4922 = NULL;
                            dc4752 = $tmp4922;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4922));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4921));
                        }
                        {
                            $tmp4923 = a4836;
                            panda$collections$ImmutableArray* $tmp4926 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4926);
                            $tmp4925 = $tmp4926;
                            $tmp4924 = $tmp4925;
                            a4836 = $tmp4924;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4924));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4925));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4923));
                        }
                    }
                    $tmp4912 = -1;
                    goto $l4910;
                    $l4910:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4913));
                    decl4913 = NULL;
                    switch ($tmp4912) {
                        case -1: goto $l4927;
                        case 0: goto $l4918;
                    }
                    $l4927:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4928, 19);
                panda$core$Bit $tmp4929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2245_134844.$rawValue, $tmp4928);
                if ($tmp4929.value) {
                {
                    int $tmp4932;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4936 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4752, a4836);
                        $tmp4935 = $tmp4936;
                        $tmp4934 = $tmp4935;
                        decl4933 = $tmp4934;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4934));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4935));
                        if (((panda$core$Bit) { decl4933 == NULL }).value) {
                        {
                            $tmp4937 = NULL;
                            $returnValue4729 = $tmp4937;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4937));
                            $tmp4932 = 0;
                            goto $l4930;
                            $l4938:;
                            $tmp4723 = 8;
                            goto $l4721;
                            $l4939:;
                            return $returnValue4729;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4748, ((panda$core$Object*) decl4933));
                        {
                            $tmp4941 = dc4752;
                            $tmp4942 = NULL;
                            dc4752 = $tmp4942;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4942));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4941));
                        }
                        {
                            $tmp4943 = a4836;
                            panda$collections$ImmutableArray* $tmp4946 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4946);
                            $tmp4945 = $tmp4946;
                            $tmp4944 = $tmp4945;
                            a4836 = $tmp4944;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4944));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4945));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4943));
                        }
                    }
                    $tmp4932 = -1;
                    goto $l4930;
                    $l4930:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4933));
                    decl4933 = NULL;
                    switch ($tmp4932) {
                        case 0: goto $l4938;
                        case -1: goto $l4947;
                    }
                    $l4947:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4949, 21);
                panda$core$Bit $tmp4950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2245_134844.$rawValue, $tmp4949);
                bool $tmp4948 = $tmp4950.value;
                if ($tmp4948) goto $l4951;
                panda$core$Int64$init$builtin_int64(&$tmp4952, 20);
                panda$core$Bit $tmp4953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2245_134844.$rawValue, $tmp4952);
                $tmp4948 = $tmp4953.value;
                $l4951:;
                panda$core$Bit $tmp4954 = { $tmp4948 };
                if ($tmp4954.value) {
                {
                    int $tmp4957;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4961 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4752, a4836);
                        $tmp4960 = $tmp4961;
                        $tmp4959 = $tmp4960;
                        decl4958 = $tmp4959;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4959));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4960));
                        if (((panda$core$Bit) { decl4958 == NULL }).value) {
                        {
                            $tmp4962 = NULL;
                            $returnValue4729 = $tmp4962;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4962));
                            $tmp4957 = 0;
                            goto $l4955;
                            $l4963:;
                            $tmp4723 = 9;
                            goto $l4721;
                            $l4964:;
                            return $returnValue4729;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4748, ((panda$core$Object*) decl4958));
                        {
                            $tmp4966 = dc4752;
                            $tmp4967 = NULL;
                            dc4752 = $tmp4967;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4967));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4966));
                        }
                        {
                            $tmp4968 = a4836;
                            panda$collections$ImmutableArray* $tmp4971 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4971);
                            $tmp4970 = $tmp4971;
                            $tmp4969 = $tmp4970;
                            a4836 = $tmp4969;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4969));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4970));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4968));
                        }
                    }
                    $tmp4957 = -1;
                    goto $l4955;
                    $l4955:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4958));
                    decl4958 = NULL;
                    switch ($tmp4957) {
                        case -1: goto $l4972;
                        case 0: goto $l4963;
                    }
                    $l4972:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4976, 23);
                panda$core$Bit $tmp4977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2245_134844.$rawValue, $tmp4976);
                bool $tmp4975 = $tmp4977.value;
                if ($tmp4975) goto $l4978;
                panda$core$Int64$init$builtin_int64(&$tmp4979, 24);
                panda$core$Bit $tmp4980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2245_134844.$rawValue, $tmp4979);
                $tmp4975 = $tmp4980.value;
                $l4978:;
                panda$core$Bit $tmp4981 = { $tmp4975 };
                bool $tmp4974 = $tmp4981.value;
                if ($tmp4974) goto $l4982;
                panda$core$Int64$init$builtin_int64(&$tmp4983, 25);
                panda$core$Bit $tmp4984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2245_134844.$rawValue, $tmp4983);
                $tmp4974 = $tmp4984.value;
                $l4982:;
                panda$core$Bit $tmp4985 = { $tmp4974 };
                bool $tmp4973 = $tmp4985.value;
                if ($tmp4973) goto $l4986;
                panda$core$Int64$init$builtin_int64(&$tmp4987, 26);
                panda$core$Bit $tmp4988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2245_134844.$rawValue, $tmp4987);
                $tmp4973 = $tmp4988.value;
                $l4986:;
                panda$core$Bit $tmp4989 = { $tmp4973 };
                if ($tmp4989.value) {
                {
                    int $tmp4992;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4996 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4752, a4836);
                        $tmp4995 = $tmp4996;
                        $tmp4994 = $tmp4995;
                        decl4993 = $tmp4994;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4994));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4995));
                        if (((panda$core$Bit) { decl4993 == NULL }).value) {
                        {
                            $tmp4997 = NULL;
                            $returnValue4729 = $tmp4997;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4997));
                            $tmp4992 = 0;
                            goto $l4990;
                            $l4998:;
                            $tmp4723 = 10;
                            goto $l4721;
                            $l4999:;
                            return $returnValue4729;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4748, ((panda$core$Object*) decl4993));
                        {
                            $tmp5001 = dc4752;
                            $tmp5002 = NULL;
                            dc4752 = $tmp5002;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5002));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5001));
                        }
                        {
                            $tmp5003 = a4836;
                            panda$collections$ImmutableArray* $tmp5006 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5006);
                            $tmp5005 = $tmp5006;
                            $tmp5004 = $tmp5005;
                            a4836 = $tmp5004;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5004));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5005));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5003));
                        }
                    }
                    $tmp4992 = -1;
                    goto $l4990;
                    $l4990:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4993));
                    decl4993 = NULL;
                    switch ($tmp4992) {
                        case 0: goto $l4998;
                        case -1: goto $l5007;
                    }
                    $l5007:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5008, 100);
                panda$core$Bit $tmp5009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2245_134844.$rawValue, $tmp5008);
                if ($tmp5009.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp5011, 100);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5010, $tmp5011);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5010, &$s5012);
                    goto $l4841;
                }
                }
                else {
                {
                    panda$core$String* $tmp5017 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4842);
                    $tmp5016 = $tmp5017;
                    panda$core$String* $tmp5018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5015, $tmp5016);
                    $tmp5014 = $tmp5018;
                    panda$core$String* $tmp5020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5014, &$s5019);
                    $tmp5013 = $tmp5020;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4842, $tmp5013);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5013));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5014));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5016));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp5021 = NULL;
                    $returnValue4729 = $tmp5021;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5021));
                    $tmp4723 = 11;
                    goto $l4721;
                    $l5022:;
                    return $returnValue4729;
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
        $l4841:;
        org$pandalanguage$pandac$ASTNode* $tmp5026 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5027, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5029, 2);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5028, $tmp5029);
        panda$core$String* $tmp5031 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4733.value));
        $tmp5030 = $tmp5031;
        panda$collections$ImmutableArray* $tmp5033 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4748);
        $tmp5032 = $tmp5033;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5026, $tmp5027, ((org$pandalanguage$pandac$parser$Token) start4724.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp5028, $tmp5030, NULL, NULL, $tmp5032);
        $tmp5025 = $tmp5026;
        $tmp5024 = $tmp5025;
        $returnValue4729 = $tmp5024;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5024));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5025));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5032));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5030));
        $tmp4723 = 12;
        goto $l4721;
        $l5034:;
        return $returnValue4729;
    }
    $l4721:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4836));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4752));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4748));
    members4748 = NULL;
    a4836 = NULL;
    switch ($tmp4723) {
        case 2: goto $l4746;
        case 3: goto $l4831;
        case 7: goto $l4919;
        case 6: goto $l4899;
        case 12: goto $l5034;
        case 5: goto $l4882;
        case 4: goto $l4859;
        case 9: goto $l4964;
        case 10: goto $l4999;
        case 11: goto $l5022;
        case 8: goto $l4939;
        case 1: goto $l4739;
        case 0: goto $l4731;
    }
    $l5036:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start5040;
    org$pandalanguage$pandac$ASTNode* dc5042 = NULL;
    panda$core$Int64 $tmp5043;
    org$pandalanguage$pandac$ASTNode* $tmp5045;
    org$pandalanguage$pandac$ASTNode* $tmp5046;
    org$pandalanguage$pandac$ASTNode* $tmp5047;
    org$pandalanguage$pandac$ASTNode* $returnValue5049;
    org$pandalanguage$pandac$ASTNode* $tmp5050;
    org$pandalanguage$pandac$ASTNode* $tmp5053;
    org$pandalanguage$pandac$ASTNode* $tmp5054;
    panda$collections$ImmutableArray* a5055 = NULL;
    panda$collections$ImmutableArray* $tmp5056;
    panda$collections$ImmutableArray* $tmp5057;
    org$pandalanguage$pandac$ASTNode* $tmp5059;
    org$pandalanguage$pandac$parser$Token$Kind $match$2331_95062;
    panda$core$Int64 $tmp5064;
    org$pandalanguage$pandac$ASTNode* $tmp5066;
    org$pandalanguage$pandac$ASTNode* $tmp5067;
    panda$core$Int64 $tmp5071;
    org$pandalanguage$pandac$ASTNode* $tmp5073;
    org$pandalanguage$pandac$ASTNode* $tmp5074;
    panda$core$Int64 $tmp5078;
    org$pandalanguage$pandac$ASTNode* $tmp5080;
    org$pandalanguage$pandac$ASTNode* $tmp5081;
    panda$core$Int64 $tmp5086;
    panda$core$Int64 $tmp5089;
    org$pandalanguage$pandac$ASTNode* $tmp5092;
    org$pandalanguage$pandac$ASTNode* $tmp5093;
    panda$core$Int64 $tmp5097;
    org$pandalanguage$pandac$ASTNode* $tmp5099;
    org$pandalanguage$pandac$ASTNode* $tmp5100;
    panda$core$Int64 $tmp5107;
    panda$core$Int64 $tmp5110;
    panda$core$Int64 $tmp5114;
    panda$core$Int64 $tmp5118;
    org$pandalanguage$pandac$ASTNode* $tmp5121;
    org$pandalanguage$pandac$ASTNode* $tmp5122;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5126;
    panda$core$Int64 $tmp5127;
    org$pandalanguage$pandac$ASTNode* $tmp5129;
    int $tmp5039;
    {
        org$pandalanguage$pandac$parser$Token $tmp5041 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start5040 = $tmp5041;
        memset(&dc5042, 0, sizeof(dc5042));
        panda$core$Int64$init$builtin_int64(&$tmp5043, 11);
        panda$core$Bit $tmp5044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start5040.kind.$rawValue, $tmp5043);
        if ($tmp5044.value) {
        {
            {
                $tmp5045 = dc5042;
                org$pandalanguage$pandac$ASTNode* $tmp5048 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5047 = $tmp5048;
                $tmp5046 = $tmp5047;
                dc5042 = $tmp5046;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5046));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5047));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5045));
            }
            if (((panda$core$Bit) { dc5042 == NULL }).value) {
            {
                $tmp5050 = NULL;
                $returnValue5049 = $tmp5050;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5050));
                $tmp5039 = 0;
                goto $l5037;
                $l5051:;
                return $returnValue5049;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5053 = dc5042;
                $tmp5054 = NULL;
                dc5042 = $tmp5054;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5054));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5053));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp5058 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp5057 = $tmp5058;
        $tmp5056 = $tmp5057;
        a5055 = $tmp5056;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5056));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5057));
        if (((panda$core$Bit) { a5055 == NULL }).value) {
        {
            $tmp5059 = NULL;
            $returnValue5049 = $tmp5059;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5059));
            $tmp5039 = 1;
            goto $l5037;
            $l5060:;
            return $returnValue5049;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp5063 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2331_95062 = $tmp5063.kind;
            panda$core$Int64$init$builtin_int64(&$tmp5064, 17);
            panda$core$Bit $tmp5065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2331_95062.$rawValue, $tmp5064);
            if ($tmp5065.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5068 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5042, a5055);
                $tmp5067 = $tmp5068;
                $tmp5066 = $tmp5067;
                $returnValue5049 = $tmp5066;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5066));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5067));
                $tmp5039 = 2;
                goto $l5037;
                $l5069:;
                return $returnValue5049;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5071, 18);
            panda$core$Bit $tmp5072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2331_95062.$rawValue, $tmp5071);
            if ($tmp5072.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5075 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5042, a5055);
                $tmp5074 = $tmp5075;
                $tmp5073 = $tmp5074;
                $returnValue5049 = $tmp5073;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5073));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5074));
                $tmp5039 = 3;
                goto $l5037;
                $l5076:;
                return $returnValue5049;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5078, 19);
            panda$core$Bit $tmp5079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2331_95062.$rawValue, $tmp5078);
            if ($tmp5079.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5082 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5042, a5055);
                $tmp5081 = $tmp5082;
                $tmp5080 = $tmp5081;
                $returnValue5049 = $tmp5080;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5080));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5081));
                $tmp5039 = 4;
                goto $l5037;
                $l5083:;
                return $returnValue5049;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5086, 21);
            panda$core$Bit $tmp5087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2331_95062.$rawValue, $tmp5086);
            bool $tmp5085 = $tmp5087.value;
            if ($tmp5085) goto $l5088;
            panda$core$Int64$init$builtin_int64(&$tmp5089, 20);
            panda$core$Bit $tmp5090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2331_95062.$rawValue, $tmp5089);
            $tmp5085 = $tmp5090.value;
            $l5088:;
            panda$core$Bit $tmp5091 = { $tmp5085 };
            if ($tmp5091.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5094 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5042, a5055);
                $tmp5093 = $tmp5094;
                $tmp5092 = $tmp5093;
                $returnValue5049 = $tmp5092;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5092));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5093));
                $tmp5039 = 5;
                goto $l5037;
                $l5095:;
                return $returnValue5049;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5097, 22);
            panda$core$Bit $tmp5098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2331_95062.$rawValue, $tmp5097);
            if ($tmp5098.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5101 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5042, a5055);
                $tmp5100 = $tmp5101;
                $tmp5099 = $tmp5100;
                $returnValue5049 = $tmp5099;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5099));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5100));
                $tmp5039 = 6;
                goto $l5037;
                $l5102:;
                return $returnValue5049;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5107, 23);
            panda$core$Bit $tmp5108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2331_95062.$rawValue, $tmp5107);
            bool $tmp5106 = $tmp5108.value;
            if ($tmp5106) goto $l5109;
            panda$core$Int64$init$builtin_int64(&$tmp5110, 24);
            panda$core$Bit $tmp5111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2331_95062.$rawValue, $tmp5110);
            $tmp5106 = $tmp5111.value;
            $l5109:;
            panda$core$Bit $tmp5112 = { $tmp5106 };
            bool $tmp5105 = $tmp5112.value;
            if ($tmp5105) goto $l5113;
            panda$core$Int64$init$builtin_int64(&$tmp5114, 25);
            panda$core$Bit $tmp5115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2331_95062.$rawValue, $tmp5114);
            $tmp5105 = $tmp5115.value;
            $l5113:;
            panda$core$Bit $tmp5116 = { $tmp5105 };
            bool $tmp5104 = $tmp5116.value;
            if ($tmp5104) goto $l5117;
            panda$core$Int64$init$builtin_int64(&$tmp5118, 26);
            panda$core$Bit $tmp5119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2331_95062.$rawValue, $tmp5118);
            $tmp5104 = $tmp5119.value;
            $l5117:;
            panda$core$Bit $tmp5120 = { $tmp5104 };
            if ($tmp5120.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5123 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5042, a5055);
                $tmp5122 = $tmp5123;
                $tmp5121 = $tmp5122;
                $returnValue5049 = $tmp5121;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5121));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5122));
                $tmp5039 = 7;
                goto $l5037;
                $l5124:;
                return $returnValue5049;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp5127, 17);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5126, $tmp5127);
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5126, &$s5128);
                $tmp5129 = NULL;
                $returnValue5049 = $tmp5129;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5129));
                $tmp5039 = 8;
                goto $l5037;
                $l5130:;
                return $returnValue5049;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp5039 = -1;
    goto $l5037;
    $l5037:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a5055));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc5042));
    a5055 = NULL;
    switch ($tmp5039) {
        case 5: goto $l5095;
        case -1: goto $l5132;
        case 2: goto $l5069;
        case 1: goto $l5060;
        case 3: goto $l5076;
        case 7: goto $l5124;
        case 8: goto $l5130;
        case 6: goto $l5102;
        case 0: goto $l5051;
        case 4: goto $l5083;
    }
    $l5132:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5136;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5137;
    panda$core$Int64 $tmp5138;
    org$pandalanguage$pandac$ASTNode* $returnValue5141;
    org$pandalanguage$pandac$ASTNode* $tmp5142;
    org$pandalanguage$pandac$parser$Token$nullable name5145;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5146;
    panda$core$Int64 $tmp5147;
    org$pandalanguage$pandac$ASTNode* $tmp5150;
    panda$collections$ImmutableArray* generics5153 = NULL;
    panda$core$Int64 $tmp5155;
    panda$collections$ImmutableArray* $tmp5157;
    panda$collections$ImmutableArray* $tmp5158;
    panda$collections$ImmutableArray* $tmp5159;
    org$pandalanguage$pandac$ASTNode* $tmp5161;
    panda$collections$ImmutableArray* $tmp5164;
    panda$collections$ImmutableArray* $tmp5165;
    panda$collections$ImmutableArray* stypes5166 = NULL;
    panda$core$Int64 $tmp5168;
    panda$collections$ImmutableArray* $tmp5170;
    panda$collections$ImmutableArray* $tmp5171;
    panda$collections$ImmutableArray* $tmp5172;
    org$pandalanguage$pandac$ASTNode* $tmp5174;
    panda$collections$ImmutableArray* $tmp5177;
    panda$collections$ImmutableArray* $tmp5178;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5179;
    panda$core$Int64 $tmp5180;
    org$pandalanguage$pandac$ASTNode* $tmp5183;
    panda$collections$Array* members5186 = NULL;
    panda$collections$Array* $tmp5187;
    panda$collections$Array* $tmp5188;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5193;
    panda$core$Int64 $tmp5194;
    org$pandalanguage$pandac$ASTNode* member5199 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5200;
    org$pandalanguage$pandac$ASTNode* $tmp5201;
    org$pandalanguage$pandac$ASTNode* $tmp5203;
    org$pandalanguage$pandac$ASTNode* $tmp5208;
    org$pandalanguage$pandac$ASTNode* $tmp5209;
    panda$core$Int64 $tmp5211;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5212;
    panda$core$Int64 $tmp5213;
    panda$core$String* $tmp5214;
    panda$collections$ImmutableArray* $tmp5216;
    int $tmp5135;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5138, 17);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5137, $tmp5138);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5140 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5137, &$s5139);
        start5136 = $tmp5140;
        if (((panda$core$Bit) { !start5136.nonnull }).value) {
        {
            $tmp5142 = NULL;
            $returnValue5141 = $tmp5142;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5142));
            $tmp5135 = 0;
            goto $l5133;
            $l5143:;
            return $returnValue5141;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5147, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5146, $tmp5147);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5149 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5146, &$s5148);
        name5145 = $tmp5149;
        if (((panda$core$Bit) { !name5145.nonnull }).value) {
        {
            $tmp5150 = NULL;
            $returnValue5141 = $tmp5150;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5150));
            $tmp5135 = 1;
            goto $l5133;
            $l5151:;
            return $returnValue5141;
        }
        }
        memset(&generics5153, 0, sizeof(generics5153));
        org$pandalanguage$pandac$parser$Token $tmp5154 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5155, 62);
        panda$core$Bit $tmp5156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5154.kind.$rawValue, $tmp5155);
        if ($tmp5156.value) {
        {
            {
                $tmp5157 = generics5153;
                panda$collections$ImmutableArray* $tmp5160 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5159 = $tmp5160;
                $tmp5158 = $tmp5159;
                generics5153 = $tmp5158;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5158));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5159));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5157));
            }
            if (((panda$core$Bit) { generics5153 == NULL }).value) {
            {
                $tmp5161 = NULL;
                $returnValue5141 = $tmp5161;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5161));
                $tmp5135 = 2;
                goto $l5133;
                $l5162:;
                return $returnValue5141;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5164 = generics5153;
                $tmp5165 = NULL;
                generics5153 = $tmp5165;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5164));
            }
        }
        }
        memset(&stypes5166, 0, sizeof(stypes5166));
        org$pandalanguage$pandac$parser$Token $tmp5167 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5168, 95);
        panda$core$Bit $tmp5169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5167.kind.$rawValue, $tmp5168);
        if ($tmp5169.value) {
        {
            {
                $tmp5170 = stypes5166;
                panda$collections$ImmutableArray* $tmp5173 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5172 = $tmp5173;
                $tmp5171 = $tmp5172;
                stypes5166 = $tmp5171;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5171));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5172));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5170));
            }
            if (((panda$core$Bit) { stypes5166 == NULL }).value) {
            {
                $tmp5174 = NULL;
                $returnValue5141 = $tmp5174;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5174));
                $tmp5135 = 3;
                goto $l5133;
                $l5175:;
                return $returnValue5141;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5177 = stypes5166;
                $tmp5178 = NULL;
                stypes5166 = $tmp5178;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5177));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5180, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5179, $tmp5180);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5182 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5179, &$s5181);
        if (((panda$core$Bit) { !$tmp5182.nonnull }).value) {
        {
            $tmp5183 = NULL;
            $returnValue5141 = $tmp5183;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5183));
            $tmp5135 = 4;
            goto $l5133;
            $l5184:;
            return $returnValue5141;
        }
        }
        panda$collections$Array* $tmp5189 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5189);
        $tmp5188 = $tmp5189;
        $tmp5187 = $tmp5188;
        members5186 = $tmp5187;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5188));
        $l5190:;
        panda$core$Int64$init$builtin_int64(&$tmp5194, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5193, $tmp5194);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5195 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5193);
        bool $tmp5192 = ((panda$core$Bit) { !$tmp5195.nonnull }).value;
        if (!$tmp5192) goto $l5191;
        {
            int $tmp5198;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5202 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5201 = $tmp5202;
                $tmp5200 = $tmp5201;
                member5199 = $tmp5200;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5200));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5201));
                if (((panda$core$Bit) { member5199 == NULL }).value) {
                {
                    $tmp5203 = NULL;
                    $returnValue5141 = $tmp5203;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5203));
                    $tmp5198 = 0;
                    goto $l5196;
                    $l5204:;
                    $tmp5135 = 5;
                    goto $l5133;
                    $l5205:;
                    return $returnValue5141;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5186, ((panda$core$Object*) member5199));
            }
            $tmp5198 = -1;
            goto $l5196;
            $l5196:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5199));
            member5199 = NULL;
            switch ($tmp5198) {
                case -1: goto $l5207;
                case 0: goto $l5204;
            }
            $l5207:;
        }
        goto $l5190;
        $l5191:;
        org$pandalanguage$pandac$ASTNode* $tmp5210 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5211, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5213, 0);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5212, $tmp5213);
        panda$core$String* $tmp5215 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5145.value));
        $tmp5214 = $tmp5215;
        panda$collections$ImmutableArray* $tmp5217 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5186);
        $tmp5216 = $tmp5217;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5210, $tmp5211, ((org$pandalanguage$pandac$parser$Token) start5136.value).position, p_doccomment, p_annotations, $tmp5212, $tmp5214, generics5153, stypes5166, $tmp5216);
        $tmp5209 = $tmp5210;
        $tmp5208 = $tmp5209;
        $returnValue5141 = $tmp5208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5216));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5214));
        $tmp5135 = 6;
        goto $l5133;
        $l5218:;
        return $returnValue5141;
    }
    $l5133:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5186));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes5166));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5153));
    members5186 = NULL;
    switch ($tmp5135) {
        case 5: goto $l5205;
        case 4: goto $l5184;
        case 6: goto $l5218;
        case 3: goto $l5175;
        case 1: goto $l5151;
        case 2: goto $l5162;
        case 0: goto $l5143;
    }
    $l5220:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5224;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5225;
    panda$core$Int64 $tmp5226;
    org$pandalanguage$pandac$ASTNode* $returnValue5229;
    org$pandalanguage$pandac$ASTNode* $tmp5230;
    org$pandalanguage$pandac$parser$Token$nullable name5233;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5234;
    panda$core$Int64 $tmp5235;
    org$pandalanguage$pandac$ASTNode* $tmp5238;
    panda$collections$ImmutableArray* generics5241 = NULL;
    panda$core$Int64 $tmp5243;
    panda$collections$ImmutableArray* $tmp5245;
    panda$collections$ImmutableArray* $tmp5246;
    panda$collections$ImmutableArray* $tmp5247;
    org$pandalanguage$pandac$ASTNode* $tmp5249;
    panda$collections$ImmutableArray* $tmp5252;
    panda$collections$ImmutableArray* $tmp5253;
    panda$collections$ImmutableArray* $tmp5254;
    panda$collections$Array* intfs5256 = NULL;
    panda$collections$Array* $tmp5257;
    panda$collections$Array* $tmp5258;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5260;
    panda$core$Int64 $tmp5261;
    org$pandalanguage$pandac$ASTNode* t5266 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5267;
    org$pandalanguage$pandac$ASTNode* $tmp5268;
    org$pandalanguage$pandac$ASTNode* $tmp5270;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5277;
    panda$core$Int64 $tmp5278;
    org$pandalanguage$pandac$ASTNode* $tmp5280;
    org$pandalanguage$pandac$ASTNode* $tmp5281;
    org$pandalanguage$pandac$ASTNode* $tmp5282;
    org$pandalanguage$pandac$ASTNode* $tmp5284;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5289;
    panda$core$Int64 $tmp5290;
    org$pandalanguage$pandac$ASTNode* $tmp5293;
    panda$collections$Array* members5296 = NULL;
    panda$collections$Array* $tmp5297;
    panda$collections$Array* $tmp5298;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5303;
    panda$core$Int64 $tmp5304;
    org$pandalanguage$pandac$ASTNode* member5309 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5310;
    org$pandalanguage$pandac$ASTNode* $tmp5311;
    org$pandalanguage$pandac$ASTNode* $tmp5313;
    org$pandalanguage$pandac$ASTNode* $tmp5318;
    org$pandalanguage$pandac$ASTNode* $tmp5319;
    panda$core$Int64 $tmp5321;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5322;
    panda$core$Int64 $tmp5323;
    panda$core$String* $tmp5324;
    panda$collections$ImmutableArray* $tmp5326;
    panda$collections$ImmutableArray* $tmp5328;
    int $tmp5223;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5226, 18);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5225, $tmp5226);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5228 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5225, &$s5227);
        start5224 = $tmp5228;
        if (((panda$core$Bit) { !start5224.nonnull }).value) {
        {
            $tmp5230 = NULL;
            $returnValue5229 = $tmp5230;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5230));
            $tmp5223 = 0;
            goto $l5221;
            $l5231:;
            return $returnValue5229;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5235, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5234, $tmp5235);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5237 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5234, &$s5236);
        name5233 = $tmp5237;
        if (((panda$core$Bit) { !name5233.nonnull }).value) {
        {
            $tmp5238 = NULL;
            $returnValue5229 = $tmp5238;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5238));
            $tmp5223 = 1;
            goto $l5221;
            $l5239:;
            return $returnValue5229;
        }
        }
        memset(&generics5241, 0, sizeof(generics5241));
        org$pandalanguage$pandac$parser$Token $tmp5242 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5243, 62);
        panda$core$Bit $tmp5244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5242.kind.$rawValue, $tmp5243);
        if ($tmp5244.value) {
        {
            {
                $tmp5245 = generics5241;
                panda$collections$ImmutableArray* $tmp5248 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5247 = $tmp5248;
                $tmp5246 = $tmp5247;
                generics5241 = $tmp5246;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5246));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5247));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5245));
            }
            if (((panda$core$Bit) { generics5241 == NULL }).value) {
            {
                $tmp5249 = NULL;
                $returnValue5229 = $tmp5249;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5249));
                $tmp5223 = 2;
                goto $l5221;
                $l5250:;
                return $returnValue5229;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5252 = generics5241;
                panda$collections$ImmutableArray* $tmp5255 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp5255);
                $tmp5254 = $tmp5255;
                $tmp5253 = $tmp5254;
                generics5241 = $tmp5253;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5253));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5254));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5252));
            }
        }
        }
        panda$collections$Array* $tmp5259 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5259);
        $tmp5258 = $tmp5259;
        $tmp5257 = $tmp5258;
        intfs5256 = $tmp5257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5258));
        panda$core$Int64$init$builtin_int64(&$tmp5261, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5260, $tmp5261);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5262 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5260);
        if (((panda$core$Bit) { $tmp5262.nonnull }).value) {
        {
            int $tmp5265;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5269 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5268 = $tmp5269;
                $tmp5267 = $tmp5268;
                t5266 = $tmp5267;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5267));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5268));
                if (((panda$core$Bit) { t5266 == NULL }).value) {
                {
                    $tmp5270 = NULL;
                    $returnValue5229 = $tmp5270;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5270));
                    $tmp5265 = 0;
                    goto $l5263;
                    $l5271:;
                    $tmp5223 = 3;
                    goto $l5221;
                    $l5272:;
                    return $returnValue5229;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs5256, ((panda$core$Object*) t5266));
                $l5274:;
                panda$core$Int64$init$builtin_int64(&$tmp5278, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5277, $tmp5278);
                org$pandalanguage$pandac$parser$Token$nullable $tmp5279 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5277);
                bool $tmp5276 = ((panda$core$Bit) { $tmp5279.nonnull }).value;
                if (!$tmp5276) goto $l5275;
                {
                    {
                        $tmp5280 = t5266;
                        org$pandalanguage$pandac$ASTNode* $tmp5283 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5282 = $tmp5283;
                        $tmp5281 = $tmp5282;
                        t5266 = $tmp5281;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5281));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5282));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5280));
                    }
                    if (((panda$core$Bit) { t5266 == NULL }).value) {
                    {
                        $tmp5284 = NULL;
                        $returnValue5229 = $tmp5284;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5284));
                        $tmp5265 = 1;
                        goto $l5263;
                        $l5285:;
                        $tmp5223 = 4;
                        goto $l5221;
                        $l5286:;
                        return $returnValue5229;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs5256, ((panda$core$Object*) t5266));
                }
                goto $l5274;
                $l5275:;
            }
            $tmp5265 = -1;
            goto $l5263;
            $l5263:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t5266));
            t5266 = NULL;
            switch ($tmp5265) {
                case 0: goto $l5271;
                case 1: goto $l5285;
                case -1: goto $l5288;
            }
            $l5288:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5290, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5289, $tmp5290);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5292 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5289, &$s5291);
        if (((panda$core$Bit) { !$tmp5292.nonnull }).value) {
        {
            $tmp5293 = NULL;
            $returnValue5229 = $tmp5293;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5293));
            $tmp5223 = 5;
            goto $l5221;
            $l5294:;
            return $returnValue5229;
        }
        }
        panda$collections$Array* $tmp5299 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5299);
        $tmp5298 = $tmp5299;
        $tmp5297 = $tmp5298;
        members5296 = $tmp5297;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5297));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5298));
        $l5300:;
        panda$core$Int64$init$builtin_int64(&$tmp5304, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5303, $tmp5304);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5305 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5303);
        bool $tmp5302 = ((panda$core$Bit) { !$tmp5305.nonnull }).value;
        if (!$tmp5302) goto $l5301;
        {
            int $tmp5308;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5312 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5311 = $tmp5312;
                $tmp5310 = $tmp5311;
                member5309 = $tmp5310;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5310));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5311));
                if (((panda$core$Bit) { member5309 == NULL }).value) {
                {
                    $tmp5313 = NULL;
                    $returnValue5229 = $tmp5313;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5313));
                    $tmp5308 = 0;
                    goto $l5306;
                    $l5314:;
                    $tmp5223 = 6;
                    goto $l5221;
                    $l5315:;
                    return $returnValue5229;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5296, ((panda$core$Object*) member5309));
            }
            $tmp5308 = -1;
            goto $l5306;
            $l5306:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5309));
            member5309 = NULL;
            switch ($tmp5308) {
                case -1: goto $l5317;
                case 0: goto $l5314;
            }
            $l5317:;
        }
        goto $l5300;
        $l5301:;
        org$pandalanguage$pandac$ASTNode* $tmp5320 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5321, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5323, 1);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5322, $tmp5323);
        panda$core$String* $tmp5325 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5233.value));
        $tmp5324 = $tmp5325;
        panda$collections$ImmutableArray* $tmp5327 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs5256);
        $tmp5326 = $tmp5327;
        panda$collections$ImmutableArray* $tmp5329 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5296);
        $tmp5328 = $tmp5329;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5320, $tmp5321, ((org$pandalanguage$pandac$parser$Token) start5224.value).position, p_doccomment, p_annotations, $tmp5322, $tmp5324, generics5241, $tmp5326, $tmp5328);
        $tmp5319 = $tmp5320;
        $tmp5318 = $tmp5319;
        $returnValue5229 = $tmp5318;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5318));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5328));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5326));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5324));
        $tmp5223 = 7;
        goto $l5221;
        $l5330:;
        return $returnValue5229;
    }
    $l5221:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5296));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs5256));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5241));
    intfs5256 = NULL;
    members5296 = NULL;
    switch ($tmp5223) {
        case 3: goto $l5272;
        case 6: goto $l5315;
        case 7: goto $l5330;
        case 1: goto $l5239;
        case 5: goto $l5294;
        case 2: goto $l5250;
        case 0: goto $l5231;
        case 4: goto $l5286;
    }
    $l5332:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2455_95333;
    panda$core$Int64 $tmp5335;
    org$pandalanguage$pandac$ASTNode* $returnValue5337;
    org$pandalanguage$pandac$ASTNode* $tmp5338;
    org$pandalanguage$pandac$ASTNode* $tmp5339;
    panda$core$Int64 $tmp5342;
    org$pandalanguage$pandac$ASTNode* $tmp5344;
    org$pandalanguage$pandac$ASTNode* $tmp5345;
    org$pandalanguage$pandac$ASTNode* $tmp5348;
    org$pandalanguage$pandac$ASTNode* $tmp5349;
    {
        org$pandalanguage$pandac$parser$Token $tmp5334 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2455_95333 = $tmp5334.kind;
        panda$core$Int64$init$builtin_int64(&$tmp5335, 15);
        panda$core$Bit $tmp5336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2455_95333.$rawValue, $tmp5335);
        if ($tmp5336.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5340 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5339 = $tmp5340;
            $tmp5338 = $tmp5339;
            $returnValue5337 = $tmp5338;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5338));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5339));
            return $returnValue5337;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp5342, 14);
        panda$core$Bit $tmp5343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2455_95333.$rawValue, $tmp5342);
        if ($tmp5343.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5346 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5345 = $tmp5346;
            $tmp5344 = $tmp5345;
            $returnValue5337 = $tmp5344;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5344));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5345));
            return $returnValue5337;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5350 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5349 = $tmp5350;
            $tmp5348 = $tmp5349;
            $returnValue5337 = $tmp5348;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5348));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5349));
            return $returnValue5337;
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries5355 = NULL;
    panda$collections$Array* $tmp5356;
    panda$collections$Array* $tmp5357;
    panda$core$Int64 $tmp5363;
    org$pandalanguage$pandac$ASTNode* entry5368 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5369;
    org$pandalanguage$pandac$ASTNode* $tmp5370;
    org$pandalanguage$pandac$ASTNode* $returnValue5372;
    org$pandalanguage$pandac$ASTNode* $tmp5373;
    org$pandalanguage$pandac$ASTNode* $tmp5382;
    org$pandalanguage$pandac$ASTNode* $tmp5383;
    panda$core$Int64 $tmp5385;
    panda$collections$ImmutableArray* $tmp5386;
    int $tmp5354;
    {
        panda$collections$Array* $tmp5358 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5358);
        $tmp5357 = $tmp5358;
        $tmp5356 = $tmp5357;
        entries5355 = $tmp5356;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5356));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5357));
        $l5359:;
        org$pandalanguage$pandac$parser$Token $tmp5362 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5363, 0);
        panda$core$Bit $tmp5364 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5362.kind.$rawValue, $tmp5363);
        bool $tmp5361 = $tmp5364.value;
        if (!$tmp5361) goto $l5360;
        {
            int $tmp5367;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5371 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5370 = $tmp5371;
                $tmp5369 = $tmp5370;
                entry5368 = $tmp5369;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5369));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5370));
                if (((panda$core$Bit) { entry5368 == NULL }).value) {
                {
                    $tmp5373 = NULL;
                    $returnValue5372 = $tmp5373;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5373));
                    $tmp5367 = 0;
                    goto $l5365;
                    $l5374:;
                    $tmp5354 = 0;
                    goto $l5352;
                    $l5375:;
                    return $returnValue5372;
                }
                }
                panda$core$Bit $tmp5377 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                if ($tmp5377.value) goto $l5378; else goto $l5379;
                $l5379:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5380, (panda$core$Int64) { 2475 });
                abort();
                $l5378:;
                panda$collections$Array$add$panda$collections$Array$T(entries5355, ((panda$core$Object*) entry5368));
            }
            $tmp5367 = -1;
            goto $l5365;
            $l5365:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry5368));
            entry5368 = NULL;
            switch ($tmp5367) {
                case -1: goto $l5381;
                case 0: goto $l5374;
            }
            $l5381:;
        }
        goto $l5359;
        $l5360:;
        org$pandalanguage$pandac$ASTNode* $tmp5384 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5385, 17);
        panda$collections$ImmutableArray* $tmp5387 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries5355);
        $tmp5386 = $tmp5387;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5384, $tmp5385, $tmp5386);
        $tmp5383 = $tmp5384;
        $tmp5382 = $tmp5383;
        $returnValue5372 = $tmp5382;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5382));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5383));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5386));
        $tmp5354 = 1;
        goto $l5352;
        $l5388:;
        return $returnValue5372;
    }
    $l5352:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries5355));
    entries5355 = NULL;
    switch ($tmp5354) {
        case 1: goto $l5388;
        case 0: goto $l5375;
    }
    $l5390:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp5393;
    {
    }
    $tmp5393 = -1;
    goto $l5391;
    $l5391:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp5393) {
        case -1: goto $l5394;
    }
    $l5394:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->regexParser));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

