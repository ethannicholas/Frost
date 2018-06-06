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

typedef org$pandalanguage$pandac$Position (*$fn178)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn245)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn367)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn447)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn455)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn464)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn472)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn572)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn656)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn664)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn673)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn688)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn715)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn723)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn738)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1955)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2203)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3463)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3490)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3540)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn4652)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x72\x69\x6e\x67\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 114, 5686317415756372741, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s2898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s2949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s2995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 118, 5129537752972831981, NULL };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s3746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s3815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

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
    panda$threads$MessageQueue* $tmp16;
    panda$threads$MessageQueue* $tmp17;
    panda$core$Object* $tmp18;
    panda$core$Bit $tmp19;
    org$pandalanguage$regex$RegexParser* $tmp21;
    org$pandalanguage$regex$RegexParser* $tmp22;
    org$pandalanguage$regex$RegexParser* $tmp23;
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
    {
        $tmp16 = self->errors;
        $tmp17 = p_errors;
        self->errors = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    }
    panda$core$Bit$init$builtin_bit(&$tmp19, false);
    panda$core$Bit$wrapper* $tmp20;
    $tmp20 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp20->value = $tmp19;
    $tmp18 = ((panda$core$Object*) $tmp20);
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp18);
    panda$core$Panda$unref$panda$core$Object($tmp18);
    {
        $tmp21 = self->regexParser;
        org$pandalanguage$regex$RegexParser* $tmp24 = (org$pandalanguage$regex$RegexParser*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$regex$RegexParser$class);
        org$pandalanguage$regex$RegexParser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp24, p_errors);
        $tmp23 = $tmp24;
        $tmp22 = $tmp23;
        self->regexParser = $tmp22;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    }
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    panda$io$File* $tmp25;
    panda$io$File* $tmp26;
    panda$core$String* $tmp27;
    panda$core$String* $tmp28;
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    {
        $tmp25 = self->path;
        $tmp26 = p_path;
        self->path = $tmp26;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
    }
    {
        $tmp27 = self->source;
        $tmp28 = p_source;
        self->source = $tmp28;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->pushbackBuffer);
    org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String(self->regexParser, p_path, p_source);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp30;
    panda$core$Int64 idx32;
    panda$core$Int64 $tmp34;
    org$pandalanguage$pandac$parser$Token result36;
    org$pandalanguage$pandac$parser$Token $returnValue38;
    org$pandalanguage$pandac$parser$Token result40;
    panda$core$Int64 $tmp29 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp30, 0);
    panda$core$Bit $tmp31 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp29, $tmp30);
    if ($tmp31.value) {
    {
        panda$core$Int64 $tmp33 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64$init$builtin_int64(&$tmp34, 1);
        panda$core$Int64 $tmp35 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp33, $tmp34);
        idx32 = $tmp35;
        org$pandalanguage$pandac$parser$Token $tmp37 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx32);
        result36 = $tmp37;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(self->pushbackBuffer, idx32);
        $returnValue38 = result36;
        return $returnValue38;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp41 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result40 = $tmp41;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result40);
    }
    }
    $returnValue38 = result40;
    return $returnValue38;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result45;
    org$pandalanguage$pandac$parser$Token$Kind $match$64_1347;
    panda$core$Int64 $tmp48;
    panda$core$Int64 $tmp50;
    org$pandalanguage$pandac$parser$Token next54;
    org$pandalanguage$pandac$parser$Token$Kind $match$70_2556;
    panda$core$Int64 $tmp57;
    panda$core$String* $tmp59;
    panda$core$Char8 $tmp61;
    panda$core$UInt8 $tmp62;
    panda$core$Int64 $tmp64;
    org$pandalanguage$pandac$parser$Token $returnValue66;
    panda$core$Int64 $tmp68;
    org$pandalanguage$pandac$parser$Token next72;
    org$pandalanguage$pandac$parser$Token$Kind $match$82_2574;
    panda$core$Int64 $tmp75;
    panda$core$Int64 $tmp77;
    $l43:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp46 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result45 = $tmp46;
        {
            $match$64_1347 = result45.kind;
            panda$core$Int64$init$builtin_int64(&$tmp48, 12);
            panda$core$Bit $tmp49 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_1347.$rawValue, $tmp48);
            if ($tmp49.value) {
            {
                goto $l43;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp50, 8);
            panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_1347.$rawValue, $tmp50);
            if ($tmp51.value) {
            {
                $l52:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp55 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next54 = $tmp55;
                    {
                        $match$70_2556 = next54.kind;
                        panda$core$Int64$init$builtin_int64(&$tmp57, 12);
                        panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$70_2556.$rawValue, $tmp57);
                        if ($tmp58.value) {
                        {
                            panda$core$String* $tmp60 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next54);
                            $tmp59 = $tmp60;
                            panda$core$UInt8$init$builtin_uint8(&$tmp62, 10);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp61, $tmp62);
                            panda$core$Bit $tmp63 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp59, $tmp61);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
                            if ($tmp63.value) {
                            {
                                goto $l43;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp64, 0);
                        panda$core$Bit $tmp65 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$70_2556.$rawValue, $tmp64);
                        if ($tmp65.value) {
                        {
                            $returnValue66 = next54;
                            return $returnValue66;
                        }
                        }
                        }
                    }
                }
                }
                $l53:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp68, 9);
            panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_1347.$rawValue, $tmp68);
            if ($tmp69.value) {
            {
                $l70:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp73 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next72 = $tmp73;
                    {
                        $match$82_2574 = next72.kind;
                        panda$core$Int64$init$builtin_int64(&$tmp75, 10);
                        panda$core$Bit $tmp76 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$82_2574.$rawValue, $tmp75);
                        if ($tmp76.value) {
                        {
                            goto $l43;
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp77, 0);
                        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$82_2574.$rawValue, $tmp77);
                        if ($tmp78.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result45, &$s79);
                            $returnValue66 = next72;
                            return $returnValue66;
                        }
                        }
                        }
                    }
                }
                }
                $l71:;
            }
            }
            else {
            {
                $returnValue66 = result45;
                return $returnValue66;
            }
            }
            }
            }
        }
    }
    }
    $l44:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp83;
    org$pandalanguage$pandac$parser$Token $returnValue86;
    panda$core$Int64 $tmp88;
    panda$core$Int64 $tmp82 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp83, 0);
    panda$core$Bit $tmp84 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp82, $tmp83);
    if ($tmp84.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp85 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp85);
    }
    }
    panda$core$Int64 $tmp87 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp88, 1);
    panda$core$Int64 $tmp89 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp87, $tmp88);
    org$pandalanguage$pandac$parser$Token $tmp90 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp89);
    $returnValue86 = $tmp90;
    return $returnValue86;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result92;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue95;
    org$pandalanguage$pandac$parser$Token $tmp93 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result92 = $tmp93;
    panda$core$Bit $tmp94 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result92.kind.$rawValue, p_kind.$rawValue);
    if ($tmp94.value) {
    {
        $returnValue95 = ((org$pandalanguage$pandac$parser$Token$nullable) { result92, true });
        return $returnValue95;
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result92);
    $returnValue95 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue95;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result98;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue101;
    panda$core$String* $tmp103;
    panda$core$String* $tmp104;
    panda$core$String* $tmp105;
    panda$core$String* $tmp106;
    panda$core$String* $tmp111;
    org$pandalanguage$pandac$parser$Token $tmp99 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result98 = $tmp99;
    panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result98.kind.$rawValue, p_kind.$rawValue);
    if ($tmp100.value) {
    {
        $returnValue101 = ((org$pandalanguage$pandac$parser$Token$nullable) { result98, true });
        return $returnValue101;
    }
    }
    panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s107, p_expected);
    $tmp106 = $tmp108;
    panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s109);
    $tmp105 = $tmp110;
    panda$core$String* $tmp112 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result98);
    $tmp111 = $tmp112;
    panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp105, $tmp111);
    $tmp104 = $tmp113;
    panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp104, &$s114);
    $tmp103 = $tmp115;
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result98, $tmp103);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
    $returnValue101 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue101;
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Compiler$Error* $tmp118;
    panda$core$Bit $tmp117 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp117.value) {
    {
        org$pandalanguage$pandac$Compiler$Error* $tmp119 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
        org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp119, self->path, p_token.position, p_msg);
        $tmp118 = $tmp119;
        panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp118));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp124;
    panda$core$Bit $tmp120 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp120.value) goto $l121; else goto $l122;
    $l122:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s123, (panda$core$Int64) { 132 });
    abort();
    $l121:;
    panda$core$Bit$init$builtin_bit(&$tmp124, true);
    self->inSpeculative = $tmp124;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp125;
    panda$core$Bit$init$builtin_bit(&$tmp125, false);
    self->inSpeculative = $tmp125;
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp126;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp127;
    panda$core$Int64 $tmp129;
    panda$core$Int64 $tmp131;
    panda$core$Int64 $tmp132;
    panda$core$Bit $tmp133;
    panda$core$Bit$init$builtin_bit(&$tmp126, false);
    self->inSpeculative = $tmp126;
    panda$core$Int64 $tmp128 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp129, 1);
    panda$core$Int64 $tmp130 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp128, $tmp129);
    panda$core$Int64$init$builtin_int64(&$tmp131, 0);
    panda$core$Int64$init$builtin_int64(&$tmp132, -1);
    panda$core$Bit$init$builtin_bit(&$tmp133, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp127, $tmp130, $tmp131, $tmp132, $tmp133);
    int64_t $tmp135 = $tmp127.start.value;
    panda$core$Int64 i134 = { $tmp135 };
    int64_t $tmp137 = $tmp127.end.value;
    int64_t $tmp138 = $tmp127.step.value;
    bool $tmp139 = $tmp127.inclusive.value;
    bool $tmp146 = $tmp138 > 0;
    if ($tmp146) goto $l144; else goto $l145;
    $l144:;
    if ($tmp139) goto $l147; else goto $l148;
    $l147:;
    if ($tmp135 <= $tmp137) goto $l140; else goto $l142;
    $l148:;
    if ($tmp135 < $tmp137) goto $l140; else goto $l142;
    $l145:;
    if ($tmp139) goto $l149; else goto $l150;
    $l149:;
    if ($tmp135 >= $tmp137) goto $l140; else goto $l142;
    $l150:;
    if ($tmp135 > $tmp137) goto $l140; else goto $l142;
    $l140:;
    {
        org$pandalanguage$pandac$parser$Token $tmp152 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i134);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp152);
    }
    $l143:;
    if ($tmp146) goto $l154; else goto $l155;
    $l154:;
    int64_t $tmp156 = $tmp137 - i134.value;
    if ($tmp139) goto $l157; else goto $l158;
    $l157:;
    if ((uint64_t) $tmp156 >= $tmp138) goto $l153; else goto $l142;
    $l158:;
    if ((uint64_t) $tmp156 > $tmp138) goto $l153; else goto $l142;
    $l155:;
    int64_t $tmp160 = i134.value - $tmp137;
    if ($tmp139) goto $l161; else goto $l162;
    $l161:;
    if ((uint64_t) $tmp160 >= -$tmp138) goto $l153; else goto $l142;
    $l162:;
    if ((uint64_t) $tmp160 > -$tmp138) goto $l153; else goto $l142;
    $l153:;
    i134.value += $tmp138;
    goto $l140;
    $l142:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue164;
    panda$core$String* $tmp165;
    panda$core$String* $tmp166;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp167;
    panda$core$Bit $tmp168;
    panda$core$Bit$init$builtin_bit(&$tmp168, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp167, p_token.start, p_token.end, $tmp168);
    panda$core$String* $tmp169 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp167);
    $tmp166 = $tmp169;
    $tmp165 = $tmp166;
    $returnValue164 = $tmp165;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
    return $returnValue164;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue171;
    org$pandalanguage$pandac$ASTNode* $tmp172;
    org$pandalanguage$pandac$ASTNode* $tmp174;
    org$pandalanguage$pandac$ASTNode* $tmp175;
    panda$core$Int64 $tmp177;
    org$pandalanguage$pandac$parser$Token$Kind $tmp180;
    panda$core$Int64 $tmp181;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp172 = p_chunk;
        $returnValue171 = $tmp172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
        return $returnValue171;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp176 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp177, 4);
    org$pandalanguage$pandac$Position $tmp179 = (($fn178) p_string->$class->vtable[2])(p_string);
    panda$core$Int64$init$builtin_int64(&$tmp181, 51);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp180, $tmp181);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp176, $tmp177, $tmp179, p_string, $tmp180, p_chunk);
    $tmp175 = $tmp176;
    $tmp174 = $tmp175;
    $returnValue171 = $tmp174;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp174));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
    return $returnValue171;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result186 = NULL;
    panda$core$MutableString* $tmp187;
    panda$core$MutableString* $tmp188;
    org$pandalanguage$pandac$parser$Token token192;
    org$pandalanguage$pandac$parser$Token$Kind $match$164_13194;
    panda$core$Int64 $tmp195;
    panda$core$String* str200 = NULL;
    panda$core$String* $tmp201;
    panda$core$String* $tmp202;
    panda$core$Char8 $tmp204;
    panda$core$UInt8 $tmp205;
    panda$core$String* $returnValue208;
    panda$core$String* $tmp209;
    panda$core$Int64 $tmp214;
    panda$core$String* $tmp217;
    panda$core$Int64 $tmp220;
    org$pandalanguage$pandac$parser$Token escape225;
    panda$core$Int64 $tmp227;
    panda$core$String* $tmp230;
    panda$core$String* escapeText234 = NULL;
    panda$core$String* $tmp235;
    panda$core$String* $tmp236;
    panda$core$Char8 c238;
    panda$core$Object* $tmp239;
    panda$collections$ListView* $tmp240;
    panda$core$Int64 $tmp242;
    panda$core$Char8 $match$183_21247;
    panda$core$Char8 $tmp248;
    panda$core$UInt8 $tmp249;
    panda$core$Char8 $tmp251;
    panda$core$UInt8 $tmp252;
    panda$core$Char8 $tmp253;
    panda$core$UInt8 $tmp254;
    panda$core$Char8 $tmp256;
    panda$core$UInt8 $tmp257;
    panda$core$Char8 $tmp258;
    panda$core$UInt8 $tmp259;
    panda$core$Char8 $tmp261;
    panda$core$UInt8 $tmp262;
    panda$core$Char8 $tmp263;
    panda$core$UInt8 $tmp264;
    panda$core$Char8 $tmp266;
    panda$core$UInt8 $tmp267;
    panda$core$Char8 $tmp268;
    panda$core$UInt8 $tmp269;
    panda$core$Char8 $tmp271;
    panda$core$UInt8 $tmp272;
    panda$core$Char8 $tmp273;
    panda$core$UInt8 $tmp274;
    panda$core$Char8 $tmp276;
    panda$core$UInt8 $tmp277;
    panda$core$Char8 $tmp278;
    panda$core$UInt8 $tmp279;
    panda$core$Char8 $tmp281;
    panda$core$UInt8 $tmp282;
    panda$core$String* $tmp284;
    panda$core$String* $tmp288;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp289;
    panda$core$Bit $tmp292;
    panda$core$Int64 $tmp295;
    panda$core$String* $tmp297;
    panda$core$String* $tmp298;
    panda$core$String* $tmp302;
    int $tmp185;
    {
        panda$core$MutableString* $tmp189 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp189);
        $tmp188 = $tmp189;
        $tmp187 = $tmp188;
        result186 = $tmp187;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
        $l190:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp193 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token192 = $tmp193;
            {
                $match$164_13194 = token192.kind;
                panda$core$Int64$init$builtin_int64(&$tmp195, 12);
                panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13194.$rawValue, $tmp195);
                if ($tmp196.value) {
                {
                    int $tmp199;
                    {
                        panda$core$String* $tmp203 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token192);
                        $tmp202 = $tmp203;
                        $tmp201 = $tmp202;
                        str200 = $tmp201;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
                        panda$core$UInt8$init$builtin_uint8(&$tmp205, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp204, $tmp205);
                        panda$core$Bit $tmp206 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str200, $tmp204);
                        if ($tmp206.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token192, &$s207);
                            $tmp209 = NULL;
                            $returnValue208 = $tmp209;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
                            $tmp199 = 0;
                            goto $l197;
                            $l210:;
                            $tmp185 = 0;
                            goto $l183;
                            $l211:;
                            return $returnValue208;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result186, str200);
                    }
                    $tmp199 = -1;
                    goto $l197;
                    $l197:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str200));
                    str200 = NULL;
                    switch ($tmp199) {
                        case -1: goto $l213;
                        case 0: goto $l210;
                    }
                    $l213:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp214, 0);
                panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13194.$rawValue, $tmp214);
                if ($tmp215.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token192, &$s216);
                    $tmp217 = NULL;
                    $returnValue208 = $tmp217;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
                    $tmp185 = 1;
                    goto $l183;
                    $l218:;
                    return $returnValue208;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp220, 106);
                panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13194.$rawValue, $tmp220);
                if ($tmp221.value) {
                {
                    int $tmp224;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp226 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape225 = $tmp226;
                        panda$core$Int64$init$builtin_int64(&$tmp227, 0);
                        panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape225.kind.$rawValue, $tmp227);
                        if ($tmp228.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token192, &$s229);
                            $tmp230 = NULL;
                            $returnValue208 = $tmp230;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp230));
                            $tmp224 = 0;
                            goto $l222;
                            $l231:;
                            $tmp185 = 2;
                            goto $l183;
                            $l232:;
                            return $returnValue208;
                        }
                        }
                        panda$core$String* $tmp237 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape225);
                        $tmp236 = $tmp237;
                        $tmp235 = $tmp236;
                        escapeText234 = $tmp235;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
                        panda$collections$ListView* $tmp241 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText234);
                        $tmp240 = $tmp241;
                        panda$core$Int64$init$builtin_int64(&$tmp242, 0);
                        ITable* $tmp243 = $tmp240->$class->itable;
                        while ($tmp243->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp243 = $tmp243->next;
                        }
                        $fn245 $tmp244 = $tmp243->methods[0];
                        panda$core$Object* $tmp246 = $tmp244($tmp240, $tmp242);
                        $tmp239 = $tmp246;
                        c238 = ((panda$core$Char8$wrapper*) $tmp239)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp239);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
                        {
                            $match$183_21247 = c238;
                            panda$core$UInt8$init$builtin_uint8(&$tmp249, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp248, $tmp249);
                            panda$core$Bit $tmp250 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21247, $tmp248);
                            if ($tmp250.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp252, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp251, $tmp252);
                                panda$core$MutableString$append$panda$core$Char8(result186, $tmp251);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp254, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp253, $tmp254);
                            panda$core$Bit $tmp255 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21247, $tmp253);
                            if ($tmp255.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp257, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp256, $tmp257);
                                panda$core$MutableString$append$panda$core$Char8(result186, $tmp256);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp259, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp258, $tmp259);
                            panda$core$Bit $tmp260 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21247, $tmp258);
                            if ($tmp260.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp262, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp261, $tmp262);
                                panda$core$MutableString$append$panda$core$Char8(result186, $tmp261);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp264, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp263, $tmp264);
                            panda$core$Bit $tmp265 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21247, $tmp263);
                            if ($tmp265.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp267, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp266, $tmp267);
                                panda$core$MutableString$append$panda$core$Char8(result186, $tmp266);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp269, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp268, $tmp269);
                            panda$core$Bit $tmp270 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21247, $tmp268);
                            if ($tmp270.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp272, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp271, $tmp272);
                                panda$core$MutableString$append$panda$core$Char8(result186, $tmp271);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp274, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp273, $tmp274);
                            panda$core$Bit $tmp275 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21247, $tmp273);
                            if ($tmp275.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp277, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp276, $tmp277);
                                panda$core$MutableString$append$panda$core$Char8(result186, $tmp276);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp279, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp278, $tmp279);
                            panda$core$Bit $tmp280 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21247, $tmp278);
                            if ($tmp280.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp282, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp281, $tmp282);
                                panda$core$MutableString$append$panda$core$Char8(result186, $tmp281);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token192, &$s283);
                                $tmp284 = NULL;
                                $returnValue208 = $tmp284;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
                                $tmp224 = 1;
                                goto $l222;
                                $l285:;
                                $tmp185 = 3;
                                goto $l183;
                                $l286:;
                                return $returnValue208;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp290 = panda$core$String$start$R$panda$core$String$Index(escapeText234);
                        panda$core$String$Index $tmp291 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText234, $tmp290);
                        panda$core$Bit$init$builtin_bit(&$tmp292, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp289, ((panda$core$String$Index$nullable) { $tmp291, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp292);
                        panda$core$String* $tmp293 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText234, $tmp289);
                        $tmp288 = $tmp293;
                        panda$core$MutableString$append$panda$core$String(result186, $tmp288);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
                    }
                    $tmp224 = -1;
                    goto $l222;
                    $l222:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText234));
                    escapeText234 = NULL;
                    switch ($tmp224) {
                        case -1: goto $l294;
                        case 1: goto $l285;
                        case 0: goto $l231;
                    }
                    $l294:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp295, 100);
                panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13194.$rawValue, $tmp295);
                if ($tmp296.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token192);
                    panda$core$String* $tmp299 = panda$core$MutableString$finish$R$panda$core$String(result186);
                    $tmp298 = $tmp299;
                    $tmp297 = $tmp298;
                    $returnValue208 = $tmp297;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
                    $tmp185 = 4;
                    goto $l183;
                    $l300:;
                    return $returnValue208;
                }
                }
                else {
                {
                    panda$core$String* $tmp303 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token192);
                    $tmp302 = $tmp303;
                    panda$core$MutableString$append$panda$core$String(result186, $tmp302);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
                }
                }
                }
                }
                }
            }
        }
        }
        $l191:;
    }
    $tmp185 = -1;
    goto $l183;
    $l183:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result186));
    result186 = NULL;
    switch ($tmp185) {
        case 0: goto $l211;
        case 3: goto $l286;
        case -1: goto $l304;
        case 1: goto $l218;
        case 2: goto $l232;
        case 4: goto $l300;
    }
    $l304:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result308 = NULL;
    panda$core$MutableString* $tmp309;
    panda$core$MutableString* $tmp310;
    org$pandalanguage$pandac$parser$Token token314;
    org$pandalanguage$pandac$parser$Token$Kind $match$209_13316;
    panda$core$Int64 $tmp317;
    panda$core$String* str322 = NULL;
    panda$core$String* $tmp323;
    panda$core$String* $tmp324;
    panda$core$Char8 $tmp326;
    panda$core$UInt8 $tmp327;
    panda$core$String* $returnValue330;
    panda$core$String* $tmp331;
    panda$core$Int64 $tmp336;
    panda$core$String* $tmp339;
    panda$core$Int64 $tmp342;
    org$pandalanguage$pandac$parser$Token escape347;
    panda$core$Int64 $tmp349;
    panda$core$String* $tmp352;
    panda$core$String* escapeText356 = NULL;
    panda$core$String* $tmp357;
    panda$core$String* $tmp358;
    panda$core$Char8 c360;
    panda$core$Object* $tmp361;
    panda$collections$ListView* $tmp362;
    panda$core$Int64 $tmp364;
    panda$core$Char8 $match$228_21369;
    panda$core$Char8 $tmp370;
    panda$core$UInt8 $tmp371;
    panda$core$Char8 $tmp373;
    panda$core$UInt8 $tmp374;
    panda$core$Char8 $tmp375;
    panda$core$UInt8 $tmp376;
    panda$core$Char8 $tmp378;
    panda$core$UInt8 $tmp379;
    panda$core$Char8 $tmp380;
    panda$core$UInt8 $tmp381;
    panda$core$Char8 $tmp383;
    panda$core$UInt8 $tmp384;
    panda$core$Char8 $tmp385;
    panda$core$UInt8 $tmp386;
    panda$core$Char8 $tmp388;
    panda$core$UInt8 $tmp389;
    panda$core$Char8 $tmp390;
    panda$core$UInt8 $tmp391;
    panda$core$Char8 $tmp393;
    panda$core$UInt8 $tmp394;
    panda$core$Char8 $tmp395;
    panda$core$UInt8 $tmp396;
    panda$core$Char8 $tmp398;
    panda$core$UInt8 $tmp399;
    panda$core$Char8 $tmp400;
    panda$core$UInt8 $tmp401;
    panda$core$Char8 $tmp403;
    panda$core$UInt8 $tmp404;
    panda$core$Char8 $tmp405;
    panda$core$UInt8 $tmp406;
    panda$core$Char8 $tmp408;
    panda$core$UInt8 $tmp409;
    panda$core$String* $tmp411;
    panda$core$String* $tmp415;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp416;
    panda$core$Bit $tmp419;
    panda$core$Int64 $tmp422;
    panda$core$String* $tmp424;
    panda$core$String* $tmp425;
    panda$core$Int64 $tmp429;
    panda$core$String* $tmp431;
    panda$core$String* $tmp432;
    panda$core$String* $tmp436;
    int $tmp307;
    {
        panda$core$MutableString* $tmp311 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp311);
        $tmp310 = $tmp311;
        $tmp309 = $tmp310;
        result308 = $tmp309;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp309));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
        $l312:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp315 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token314 = $tmp315;
            {
                $match$209_13316 = token314.kind;
                panda$core$Int64$init$builtin_int64(&$tmp317, 12);
                panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13316.$rawValue, $tmp317);
                if ($tmp318.value) {
                {
                    int $tmp321;
                    {
                        panda$core$String* $tmp325 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token314);
                        $tmp324 = $tmp325;
                        $tmp323 = $tmp324;
                        str322 = $tmp323;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp323));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
                        panda$core$UInt8$init$builtin_uint8(&$tmp327, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp326, $tmp327);
                        panda$core$Bit $tmp328 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str322, $tmp326);
                        if ($tmp328.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token314, &$s329);
                            $tmp331 = NULL;
                            $returnValue330 = $tmp331;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                            $tmp321 = 0;
                            goto $l319;
                            $l332:;
                            $tmp307 = 0;
                            goto $l305;
                            $l333:;
                            return $returnValue330;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result308, str322);
                    }
                    $tmp321 = -1;
                    goto $l319;
                    $l319:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str322));
                    str322 = NULL;
                    switch ($tmp321) {
                        case -1: goto $l335;
                        case 0: goto $l332;
                    }
                    $l335:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp336, 0);
                panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13316.$rawValue, $tmp336);
                if ($tmp337.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token314, &$s338);
                    $tmp339 = NULL;
                    $returnValue330 = $tmp339;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
                    $tmp307 = 1;
                    goto $l305;
                    $l340:;
                    return $returnValue330;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp342, 106);
                panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13316.$rawValue, $tmp342);
                if ($tmp343.value) {
                {
                    int $tmp346;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp348 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape347 = $tmp348;
                        panda$core$Int64$init$builtin_int64(&$tmp349, 0);
                        panda$core$Bit $tmp350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape347.kind.$rawValue, $tmp349);
                        if ($tmp350.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token314, &$s351);
                            $tmp352 = NULL;
                            $returnValue330 = $tmp352;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
                            $tmp346 = 0;
                            goto $l344;
                            $l353:;
                            $tmp307 = 2;
                            goto $l305;
                            $l354:;
                            return $returnValue330;
                        }
                        }
                        panda$core$String* $tmp359 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape347);
                        $tmp358 = $tmp359;
                        $tmp357 = $tmp358;
                        escapeText356 = $tmp357;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp357));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp358));
                        panda$collections$ListView* $tmp363 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText356);
                        $tmp362 = $tmp363;
                        panda$core$Int64$init$builtin_int64(&$tmp364, 0);
                        ITable* $tmp365 = $tmp362->$class->itable;
                        while ($tmp365->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp365 = $tmp365->next;
                        }
                        $fn367 $tmp366 = $tmp365->methods[0];
                        panda$core$Object* $tmp368 = $tmp366($tmp362, $tmp364);
                        $tmp361 = $tmp368;
                        c360 = ((panda$core$Char8$wrapper*) $tmp361)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp361);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
                        {
                            $match$228_21369 = c360;
                            panda$core$UInt8$init$builtin_uint8(&$tmp371, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp370, $tmp371);
                            panda$core$Bit $tmp372 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21369, $tmp370);
                            if ($tmp372.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp374, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp373, $tmp374);
                                panda$core$MutableString$append$panda$core$Char8(result308, $tmp373);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp376, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp375, $tmp376);
                            panda$core$Bit $tmp377 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21369, $tmp375);
                            if ($tmp377.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp379, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp378, $tmp379);
                                panda$core$MutableString$append$panda$core$Char8(result308, $tmp378);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp381, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp380, $tmp381);
                            panda$core$Bit $tmp382 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21369, $tmp380);
                            if ($tmp382.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp384, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp383, $tmp384);
                                panda$core$MutableString$append$panda$core$Char8(result308, $tmp383);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp386, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp385, $tmp386);
                            panda$core$Bit $tmp387 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21369, $tmp385);
                            if ($tmp387.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp389, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp388, $tmp389);
                                panda$core$MutableString$append$panda$core$Char8(result308, $tmp388);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp391, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp390, $tmp391);
                            panda$core$Bit $tmp392 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21369, $tmp390);
                            if ($tmp392.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp394, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp393, $tmp394);
                                panda$core$MutableString$append$panda$core$Char8(result308, $tmp393);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp396, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp395, $tmp396);
                            panda$core$Bit $tmp397 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21369, $tmp395);
                            if ($tmp397.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp399, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp398, $tmp399);
                                panda$core$MutableString$append$panda$core$Char8(result308, $tmp398);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp401, 58);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp400, $tmp401);
                            panda$core$Bit $tmp402 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21369, $tmp400);
                            if ($tmp402.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp404, 58);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp403, $tmp404);
                                panda$core$MutableString$append$panda$core$Char8(result308, $tmp403);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp406, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp405, $tmp406);
                            panda$core$Bit $tmp407 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21369, $tmp405);
                            if ($tmp407.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp409, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp408, $tmp409);
                                panda$core$MutableString$append$panda$core$Char8(result308, $tmp408);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token314, &$s410);
                                $tmp411 = NULL;
                                $returnValue330 = $tmp411;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
                                $tmp346 = 1;
                                goto $l344;
                                $l412:;
                                $tmp307 = 3;
                                goto $l305;
                                $l413:;
                                return $returnValue330;
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
                        panda$core$String$Index $tmp417 = panda$core$String$start$R$panda$core$String$Index(escapeText356);
                        panda$core$String$Index $tmp418 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText356, $tmp417);
                        panda$core$Bit$init$builtin_bit(&$tmp419, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp416, ((panda$core$String$Index$nullable) { $tmp418, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp419);
                        panda$core$String* $tmp420 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText356, $tmp416);
                        $tmp415 = $tmp420;
                        panda$core$MutableString$append$panda$core$String(result308, $tmp415);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
                    }
                    $tmp346 = -1;
                    goto $l344;
                    $l344:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText356));
                    escapeText356 = NULL;
                    switch ($tmp346) {
                        case -1: goto $l421;
                        case 0: goto $l353;
                        case 1: goto $l412;
                    }
                    $l421:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp422, 95);
                panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13316.$rawValue, $tmp422);
                if ($tmp423.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token314);
                    panda$core$String* $tmp426 = panda$core$MutableString$finish$R$panda$core$String(result308);
                    $tmp425 = $tmp426;
                    $tmp424 = $tmp425;
                    $returnValue330 = $tmp424;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp424));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
                    $tmp307 = 4;
                    goto $l305;
                    $l427:;
                    return $returnValue330;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp429, 100);
                panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13316.$rawValue, $tmp429);
                if ($tmp430.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token314);
                    panda$core$String* $tmp433 = panda$core$MutableString$finish$R$panda$core$String(result308);
                    $tmp432 = $tmp433;
                    $tmp431 = $tmp432;
                    $returnValue330 = $tmp431;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp431));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
                    $tmp307 = 5;
                    goto $l305;
                    $l434:;
                    return $returnValue330;
                }
                }
                else {
                {
                    panda$core$String* $tmp437 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token314);
                    $tmp436 = $tmp437;
                    panda$core$MutableString$append$panda$core$String(result308, $tmp436);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l313:;
    }
    $tmp307 = -1;
    goto $l305;
    $l305:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result308));
    result308 = NULL;
    switch ($tmp307) {
        case -1: goto $l438;
        case 4: goto $l427;
        case 1: goto $l340;
        case 3: goto $l413;
        case 0: goto $l333;
        case 5: goto $l434;
        case 2: goto $l354;
    }
    $l438:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot442 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp443;
    org$pandalanguage$pandac$ASTNode* $tmp444;
    panda$core$Int64 $tmp446;
    org$pandalanguage$pandac$ASTNode* call450 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp451;
    org$pandalanguage$pandac$ASTNode* $tmp452;
    panda$core$Int64 $tmp454;
    panda$collections$ImmutableArray* $tmp457;
    org$pandalanguage$pandac$ASTNode* stringType459 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp460;
    org$pandalanguage$pandac$ASTNode* $tmp461;
    panda$core$Int64 $tmp463;
    org$pandalanguage$pandac$ASTNode* $returnValue467;
    org$pandalanguage$pandac$ASTNode* $tmp468;
    org$pandalanguage$pandac$ASTNode* $tmp469;
    panda$core$Int64 $tmp471;
    org$pandalanguage$pandac$parser$Token$Kind $tmp474;
    panda$core$Int64 $tmp475;
    int $tmp441;
    {
        org$pandalanguage$pandac$ASTNode* $tmp445 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp446, 15);
        org$pandalanguage$pandac$Position $tmp448 = (($fn447) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp445, $tmp446, $tmp448, p_expr, &$s449);
        $tmp444 = $tmp445;
        $tmp443 = $tmp444;
        dot442 = $tmp443;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
        org$pandalanguage$pandac$ASTNode* $tmp453 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp454, 8);
        org$pandalanguage$pandac$Position $tmp456 = (($fn455) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp458 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp458);
        $tmp457 = $tmp458;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp453, $tmp454, $tmp456, dot442, $tmp457);
        $tmp452 = $tmp453;
        $tmp451 = $tmp452;
        call450 = $tmp451;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp451));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp457));
        org$pandalanguage$pandac$ASTNode* $tmp462 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp463, 42);
        org$pandalanguage$pandac$Position $tmp465 = (($fn464) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp462, $tmp463, $tmp465, &$s466);
        $tmp461 = $tmp462;
        $tmp460 = $tmp461;
        stringType459 = $tmp460;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp460));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
        org$pandalanguage$pandac$ASTNode* $tmp470 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp471, 4);
        org$pandalanguage$pandac$Position $tmp473 = (($fn472) p_expr->$class->vtable[2])(p_expr);
        panda$core$Int64$init$builtin_int64(&$tmp475, 89);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp474, $tmp475);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp470, $tmp471, $tmp473, call450, $tmp474, stringType459);
        $tmp469 = $tmp470;
        $tmp468 = $tmp469;
        $returnValue467 = $tmp468;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
        $tmp441 = 0;
        goto $l439;
        $l476:;
        return $returnValue467;
    }
    $l439:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType459));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call450));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot442));
    dot442 = NULL;
    call450 = NULL;
    stringType459 = NULL;
    switch ($tmp441) {
        case 0: goto $l476;
    }
    $l478:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $atPre1482;
    org$pandalanguage$pandac$parser$Token start486;
    panda$core$Int64 $tmp489;
    panda$core$Int64 $tmp492;
    panda$core$String* $tmp495;
    panda$core$String* $tmp496;
    panda$core$String* $tmp498;
    org$pandalanguage$pandac$ASTNode* $returnValue503;
    org$pandalanguage$pandac$ASTNode* $tmp504;
    org$pandalanguage$pandac$ASTNode* result508 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp509;
    panda$core$MutableString* chunk510 = NULL;
    panda$core$MutableString* $tmp511;
    panda$core$MutableString* $tmp512;
    org$pandalanguage$pandac$parser$Token token516;
    org$pandalanguage$pandac$parser$Token$Kind $match$276_13519;
    panda$core$Int64 $tmp520;
    panda$core$String* str525 = NULL;
    panda$core$String* $tmp526;
    panda$core$String* $tmp527;
    panda$core$Char8 $tmp529;
    panda$core$UInt8 $tmp530;
    org$pandalanguage$pandac$ASTNode* $tmp533;
    panda$core$Int64 $tmp539;
    org$pandalanguage$pandac$ASTNode* $tmp542;
    panda$core$Int64 $tmp546;
    org$pandalanguage$pandac$parser$Token escape551;
    panda$core$Int64 $tmp553;
    org$pandalanguage$pandac$ASTNode* $tmp556;
    panda$core$String* escapeText561 = NULL;
    panda$core$String* $tmp562;
    panda$core$String* $tmp563;
    panda$core$Char8 c565;
    panda$core$Object* $tmp566;
    panda$collections$ListView* $tmp567;
    panda$core$Int64 $tmp569;
    panda$core$Char8 $match$295_21574;
    panda$core$Char8 $tmp575;
    panda$core$UInt8 $tmp576;
    panda$core$Char8 $tmp578;
    panda$core$UInt8 $tmp579;
    panda$core$Char8 $tmp580;
    panda$core$UInt8 $tmp581;
    panda$core$Char8 $tmp583;
    panda$core$UInt8 $tmp584;
    panda$core$Char8 $tmp585;
    panda$core$UInt8 $tmp586;
    panda$core$Char8 $tmp588;
    panda$core$UInt8 $tmp589;
    panda$core$Char8 $tmp590;
    panda$core$UInt8 $tmp591;
    panda$core$Char8 $tmp593;
    panda$core$UInt8 $tmp594;
    panda$core$Char8 $tmp595;
    panda$core$UInt8 $tmp596;
    panda$core$Char8 $tmp598;
    panda$core$UInt8 $tmp599;
    panda$core$Char8 $tmp600;
    panda$core$UInt8 $tmp601;
    panda$core$Char8 $tmp603;
    panda$core$UInt8 $tmp604;
    panda$core$Char8 $tmp605;
    panda$core$UInt8 $tmp606;
    panda$core$Bit oldAllow611;
    panda$core$Bit $tmp612;
    org$pandalanguage$pandac$ASTNode* expr613 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp614;
    org$pandalanguage$pandac$ASTNode* $tmp615;
    org$pandalanguage$pandac$ASTNode* $tmp617;
    panda$core$String* align623 = NULL;
    panda$core$String* $tmp624;
    panda$core$String* format625 = NULL;
    panda$core$String* $tmp626;
    org$pandalanguage$pandac$parser$Token$Kind $tmp627;
    panda$core$Int64 $tmp628;
    panda$core$String* $tmp630;
    panda$core$String* $tmp631;
    panda$core$String* $tmp632;
    org$pandalanguage$pandac$parser$Token$Kind $tmp634;
    panda$core$Int64 $tmp635;
    panda$core$String* $tmp640;
    panda$core$String* $tmp641;
    panda$core$String* $tmp642;
    org$pandalanguage$pandac$ASTNode* $tmp644;
    org$pandalanguage$pandac$ASTNode* formattable651 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp652;
    org$pandalanguage$pandac$ASTNode* $tmp653;
    panda$core$Int64 $tmp655;
    org$pandalanguage$pandac$ASTNode* cast659 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp660;
    org$pandalanguage$pandac$ASTNode* $tmp661;
    panda$core$Int64 $tmp663;
    org$pandalanguage$pandac$parser$Token$Kind $tmp666;
    panda$core$Int64 $tmp667;
    org$pandalanguage$pandac$ASTNode* dot668 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp669;
    org$pandalanguage$pandac$ASTNode* $tmp670;
    panda$core$Int64 $tmp672;
    panda$collections$Array* callArgs676 = NULL;
    panda$collections$Array* $tmp677;
    panda$collections$Array* $tmp678;
    org$pandalanguage$pandac$ASTNode* $tmp680;
    panda$core$Int64 $tmp682;
    org$pandalanguage$pandac$ASTNode* $tmp683;
    org$pandalanguage$pandac$ASTNode* $tmp684;
    org$pandalanguage$pandac$ASTNode* $tmp685;
    panda$core$Int64 $tmp687;
    panda$collections$ImmutableArray* $tmp690;
    org$pandalanguage$pandac$parser$Token$Kind $tmp693;
    panda$core$Int64 $tmp694;
    org$pandalanguage$pandac$ASTNode* $tmp697;
    org$pandalanguage$pandac$ASTNode* $tmp706;
    org$pandalanguage$pandac$ASTNode* $tmp707;
    org$pandalanguage$pandac$ASTNode* $tmp708;
    org$pandalanguage$pandac$ASTNode* pandaType710 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp711;
    org$pandalanguage$pandac$ASTNode* $tmp712;
    panda$core$Int64 $tmp714;
    org$pandalanguage$pandac$ASTNode* callTarget718 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp719;
    org$pandalanguage$pandac$ASTNode* $tmp720;
    panda$core$Int64 $tmp722;
    panda$collections$Array* callArgs726 = NULL;
    panda$collections$Array* $tmp727;
    panda$collections$Array* $tmp728;
    org$pandalanguage$pandac$ASTNode* $tmp730;
    panda$core$Int64 $tmp732;
    org$pandalanguage$pandac$ASTNode* $tmp733;
    org$pandalanguage$pandac$ASTNode* $tmp734;
    org$pandalanguage$pandac$ASTNode* $tmp735;
    panda$core$Int64 $tmp737;
    panda$collections$ImmutableArray* $tmp740;
    panda$core$String* text743 = NULL;
    panda$core$String* $tmp744;
    panda$core$String* $tmp745;
    panda$core$MutableString* $tmp747;
    panda$core$MutableString* $tmp748;
    panda$core$MutableString* $tmp749;
    org$pandalanguage$pandac$ASTNode* $tmp756;
    org$pandalanguage$pandac$ASTNode* $tmp757;
    org$pandalanguage$pandac$ASTNode* $tmp758;
    org$pandalanguage$pandac$ASTNode* $tmp759;
    panda$core$Int64 $tmp761;
    org$pandalanguage$pandac$ASTNode* $tmp763;
    org$pandalanguage$pandac$ASTNode* $tmp764;
    org$pandalanguage$pandac$ASTNode* $tmp765;
    org$pandalanguage$pandac$ASTNode* $tmp767;
    org$pandalanguage$pandac$ASTNode* $tmp768;
    org$pandalanguage$pandac$ASTNode* $tmp769;
    org$pandalanguage$pandac$ASTNode* $tmp773;
    panda$core$String* $tmp778;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp779;
    panda$core$Bit $tmp782;
    panda$core$String* $tmp785;
    org$pandalanguage$pandac$ASTNode* $tmp787;
    org$pandalanguage$pandac$ASTNode* $tmp788;
    org$pandalanguage$pandac$ASTNode* $tmp789;
    panda$core$Int64 $tmp791;
    panda$core$String* $tmp792;
    int $tmp481;
    {
        $atPre1482 = self->allowLambdas;
        int $tmp485;
        {
            org$pandalanguage$pandac$parser$Token $tmp487 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            start486 = $tmp487;
            panda$core$Int64$init$builtin_int64(&$tmp489, 7);
            panda$core$Bit $tmp490 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start486.kind.$rawValue, $tmp489);
            bool $tmp488 = $tmp490.value;
            if (!$tmp488) goto $l491;
            panda$core$Int64$init$builtin_int64(&$tmp492, 6);
            panda$core$Bit $tmp493 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start486.kind.$rawValue, $tmp492);
            $tmp488 = $tmp493.value;
            $l491:;
            panda$core$Bit $tmp494 = { $tmp488 };
            if ($tmp494.value) {
            {
                panda$core$String* $tmp499 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start486);
                $tmp498 = $tmp499;
                panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s497, $tmp498);
                $tmp496 = $tmp500;
                panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp496, &$s501);
                $tmp495 = $tmp502;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start486, $tmp495);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp498));
                $tmp504 = NULL;
                $returnValue503 = $tmp504;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp504));
                $tmp485 = 0;
                goto $l483;
                $l505:;
                $tmp481 = 0;
                goto $l479;
                $l506:;
                return $returnValue503;
            }
            }
            $tmp509 = NULL;
            result508 = $tmp509;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp509));
            panda$core$MutableString* $tmp513 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp513);
            $tmp512 = $tmp513;
            $tmp511 = $tmp512;
            chunk510 = $tmp511;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp511));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp512));
            $l514:;
            while (true) {
            {
                org$pandalanguage$pandac$parser$Token $tmp517 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                token516 = $tmp517;
                panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token516.kind.$rawValue, start486.kind.$rawValue);
                if ($tmp518.value) {
                {
                    goto $l515;
                }
                }
                {
                    $match$276_13519 = token516.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp520, 12);
                    panda$core$Bit $tmp521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$276_13519.$rawValue, $tmp520);
                    if ($tmp521.value) {
                    {
                        int $tmp524;
                        {
                            panda$core$String* $tmp528 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token516);
                            $tmp527 = $tmp528;
                            $tmp526 = $tmp527;
                            str525 = $tmp526;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp526));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp527));
                            panda$core$UInt8$init$builtin_uint8(&$tmp530, 10);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp529, $tmp530);
                            panda$core$Bit $tmp531 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str525, $tmp529);
                            if ($tmp531.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start486, &$s532);
                                $tmp533 = NULL;
                                $returnValue503 = $tmp533;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp533));
                                $tmp524 = 0;
                                goto $l522;
                                $l534:;
                                $tmp485 = 1;
                                goto $l483;
                                $l535:;
                                $tmp481 = 1;
                                goto $l479;
                                $l536:;
                                return $returnValue503;
                            }
                            }
                            panda$core$MutableString$append$panda$core$String(chunk510, str525);
                        }
                        $tmp524 = -1;
                        goto $l522;
                        $l522:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str525));
                        str525 = NULL;
                        switch ($tmp524) {
                            case -1: goto $l538;
                            case 0: goto $l534;
                        }
                        $l538:;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp539, 0);
                    panda$core$Bit $tmp540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$276_13519.$rawValue, $tmp539);
                    if ($tmp540.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start486, &$s541);
                        $tmp542 = NULL;
                        $returnValue503 = $tmp542;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp542));
                        $tmp485 = 2;
                        goto $l483;
                        $l543:;
                        $tmp481 = 2;
                        goto $l479;
                        $l544:;
                        return $returnValue503;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp546, 106);
                    panda$core$Bit $tmp547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$276_13519.$rawValue, $tmp546);
                    if ($tmp547.value) {
                    {
                        int $tmp550;
                        {
                            org$pandalanguage$pandac$parser$Token $tmp552 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                            escape551 = $tmp552;
                            panda$core$Int64$init$builtin_int64(&$tmp553, 0);
                            panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape551.kind.$rawValue, $tmp553);
                            if ($tmp554.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start486, &$s555);
                                $tmp556 = NULL;
                                $returnValue503 = $tmp556;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp556));
                                $tmp550 = 0;
                                goto $l548;
                                $l557:;
                                $tmp485 = 3;
                                goto $l483;
                                $l558:;
                                $tmp481 = 3;
                                goto $l479;
                                $l559:;
                                return $returnValue503;
                            }
                            }
                            panda$core$String* $tmp564 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape551);
                            $tmp563 = $tmp564;
                            $tmp562 = $tmp563;
                            escapeText561 = $tmp562;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp562));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp563));
                            panda$collections$ListView* $tmp568 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText561);
                            $tmp567 = $tmp568;
                            panda$core$Int64$init$builtin_int64(&$tmp569, 0);
                            ITable* $tmp570 = $tmp567->$class->itable;
                            while ($tmp570->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp570 = $tmp570->next;
                            }
                            $fn572 $tmp571 = $tmp570->methods[0];
                            panda$core$Object* $tmp573 = $tmp571($tmp567, $tmp569);
                            $tmp566 = $tmp573;
                            c565 = ((panda$core$Char8$wrapper*) $tmp566)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp566);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
                            {
                                $match$295_21574 = c565;
                                panda$core$UInt8$init$builtin_uint8(&$tmp576, 110);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp575, $tmp576);
                                panda$core$Bit $tmp577 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21574, $tmp575);
                                if ($tmp577.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp579, 10);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp578, $tmp579);
                                    panda$core$MutableString$append$panda$core$Char8(chunk510, $tmp578);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp581, 114);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp580, $tmp581);
                                panda$core$Bit $tmp582 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21574, $tmp580);
                                if ($tmp582.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp584, 13);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp583, $tmp584);
                                    panda$core$MutableString$append$panda$core$Char8(chunk510, $tmp583);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp586, 116);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp585, $tmp586);
                                panda$core$Bit $tmp587 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21574, $tmp585);
                                if ($tmp587.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp589, 9);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp588, $tmp589);
                                    panda$core$MutableString$append$panda$core$Char8(chunk510, $tmp588);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp591, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp590, $tmp591);
                                panda$core$Bit $tmp592 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21574, $tmp590);
                                if ($tmp592.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp594, 39);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp593, $tmp594);
                                    panda$core$MutableString$append$panda$core$Char8(chunk510, $tmp593);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp596, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp595, $tmp596);
                                panda$core$Bit $tmp597 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21574, $tmp595);
                                if ($tmp597.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp599, 34);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp598, $tmp599);
                                    panda$core$MutableString$append$panda$core$Char8(chunk510, $tmp598);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp601, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp600, $tmp601);
                                panda$core$Bit $tmp602 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21574, $tmp600);
                                if ($tmp602.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp604, 92);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp603, $tmp604);
                                    panda$core$MutableString$append$panda$core$Char8(chunk510, $tmp603);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp606, 123);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp605, $tmp606);
                                panda$core$Bit $tmp607 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21574, $tmp605);
                                if ($tmp607.value) {
                                {
                                    {
                                        int $tmp610;
                                        {
                                            oldAllow611 = self->allowLambdas;
                                            panda$core$Bit$init$builtin_bit(&$tmp612, false);
                                            self->allowLambdas = $tmp612;
                                            org$pandalanguage$pandac$ASTNode* $tmp616 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                            $tmp615 = $tmp616;
                                            $tmp614 = $tmp615;
                                            expr613 = $tmp614;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp614));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                                            self->allowLambdas = oldAllow611;
                                            if (((panda$core$Bit) { expr613 == NULL }).value) {
                                            {
                                                $tmp617 = NULL;
                                                $returnValue503 = $tmp617;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
                                                $tmp610 = 0;
                                                goto $l608;
                                                $l618:;
                                                $tmp550 = 1;
                                                goto $l548;
                                                $l619:;
                                                $tmp485 = 4;
                                                goto $l483;
                                                $l620:;
                                                $tmp481 = 4;
                                                goto $l479;
                                                $l621:;
                                                return $returnValue503;
                                            }
                                            }
                                            $tmp624 = NULL;
                                            align623 = $tmp624;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp624));
                                            $tmp626 = NULL;
                                            format625 = $tmp626;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
                                            panda$core$Int64$init$builtin_int64(&$tmp628, 105);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp627, $tmp628);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp629 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp627);
                                            if (((panda$core$Bit) { $tmp629.nonnull }).value) {
                                            {
                                                {
                                                    $tmp630 = align623;
                                                    panda$core$String* $tmp633 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start486);
                                                    $tmp632 = $tmp633;
                                                    $tmp631 = $tmp632;
                                                    align623 = $tmp631;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp631));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                                                }
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp635, 95);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp634, $tmp635);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp636 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp634);
                                            if (((panda$core$Bit) { $tmp636.nonnull }).value) {
                                            {
                                                int $tmp639;
                                                {
                                                    {
                                                        $tmp640 = format625;
                                                        panda$core$String* $tmp643 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start486);
                                                        $tmp642 = $tmp643;
                                                        $tmp641 = $tmp642;
                                                        format625 = $tmp641;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp641));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
                                                    }
                                                    if (((panda$core$Bit) { format625 == NULL }).value) {
                                                    {
                                                        $tmp644 = NULL;
                                                        $returnValue503 = $tmp644;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp644));
                                                        $tmp639 = 0;
                                                        goto $l637;
                                                        $l645:;
                                                        $tmp610 = 1;
                                                        goto $l608;
                                                        $l646:;
                                                        $tmp550 = 2;
                                                        goto $l548;
                                                        $l647:;
                                                        $tmp485 = 5;
                                                        goto $l483;
                                                        $l648:;
                                                        $tmp481 = 5;
                                                        goto $l479;
                                                        $l649:;
                                                        return $returnValue503;
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp654 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp655, 42);
                                                    org$pandalanguage$pandac$Position $tmp657 = (($fn656) expr613->$class->vtable[2])(expr613);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp654, $tmp655, $tmp657, &$s658);
                                                    $tmp653 = $tmp654;
                                                    $tmp652 = $tmp653;
                                                    formattable651 = $tmp652;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp652));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp653));
                                                    org$pandalanguage$pandac$ASTNode* $tmp662 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp663, 4);
                                                    org$pandalanguage$pandac$Position $tmp665 = (($fn664) expr613->$class->vtable[2])(expr613);
                                                    panda$core$Int64$init$builtin_int64(&$tmp667, 89);
                                                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp666, $tmp667);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp662, $tmp663, $tmp665, expr613, $tmp666, formattable651);
                                                    $tmp661 = $tmp662;
                                                    $tmp660 = $tmp661;
                                                    cast659 = $tmp660;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp660));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp661));
                                                    org$pandalanguage$pandac$ASTNode* $tmp671 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp672, 15);
                                                    org$pandalanguage$pandac$Position $tmp674 = (($fn673) expr613->$class->vtable[2])(expr613);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp671, $tmp672, $tmp674, cast659, &$s675);
                                                    $tmp670 = $tmp671;
                                                    $tmp669 = $tmp670;
                                                    dot668 = $tmp669;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp669));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
                                                    panda$collections$Array* $tmp679 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp679);
                                                    $tmp678 = $tmp679;
                                                    $tmp677 = $tmp678;
                                                    callArgs676 = $tmp677;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp677));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp678));
                                                    org$pandalanguage$pandac$ASTNode* $tmp681 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp682, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp681, $tmp682, start486.position, format625);
                                                    $tmp680 = $tmp681;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs676, ((panda$core$Object*) $tmp680));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
                                                    {
                                                        $tmp683 = expr613;
                                                        org$pandalanguage$pandac$ASTNode* $tmp686 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp687, 8);
                                                        org$pandalanguage$pandac$Position $tmp689 = (($fn688) expr613->$class->vtable[2])(expr613);
                                                        panda$collections$ImmutableArray* $tmp691 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs676);
                                                        $tmp690 = $tmp691;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp686, $tmp687, $tmp689, dot668, $tmp690);
                                                        $tmp685 = $tmp686;
                                                        $tmp684 = $tmp685;
                                                        expr613 = $tmp684;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp684));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
                                                    }
                                                }
                                                $tmp639 = -1;
                                                goto $l637;
                                                $l637:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs676));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot668));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast659));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable651));
                                                formattable651 = NULL;
                                                cast659 = NULL;
                                                dot668 = NULL;
                                                callArgs676 = NULL;
                                                switch ($tmp639) {
                                                    case -1: goto $l692;
                                                    case 0: goto $l645;
                                                }
                                                $l692:;
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp694, 100);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp693, $tmp694);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp696 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp693, &$s695);
                                            if (((panda$core$Bit) { !$tmp696.nonnull }).value) {
                                            {
                                                $tmp697 = NULL;
                                                $returnValue503 = $tmp697;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp697));
                                                $tmp610 = 2;
                                                goto $l608;
                                                $l698:;
                                                $tmp550 = 3;
                                                goto $l548;
                                                $l699:;
                                                $tmp485 = 6;
                                                goto $l483;
                                                $l700:;
                                                $tmp481 = 6;
                                                goto $l479;
                                                $l701:;
                                                return $returnValue503;
                                            }
                                            }
                                            if (((panda$core$Bit) { align623 != NULL }).value) {
                                            {
                                                int $tmp705;
                                                {
                                                    if (((panda$core$Bit) { format625 == NULL }).value) {
                                                    {
                                                        {
                                                            $tmp706 = expr613;
                                                            org$pandalanguage$pandac$ASTNode* $tmp709 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr613);
                                                            $tmp708 = $tmp709;
                                                            $tmp707 = $tmp708;
                                                            expr613 = $tmp707;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp707));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp708));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp713 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp714, 42);
                                                    org$pandalanguage$pandac$Position $tmp716 = (($fn715) expr613->$class->vtable[2])(expr613);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp713, $tmp714, $tmp716, &$s717);
                                                    $tmp712 = $tmp713;
                                                    $tmp711 = $tmp712;
                                                    pandaType710 = $tmp711;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp711));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp712));
                                                    org$pandalanguage$pandac$ASTNode* $tmp721 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp722, 15);
                                                    org$pandalanguage$pandac$Position $tmp724 = (($fn723) expr613->$class->vtable[2])(expr613);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp721, $tmp722, $tmp724, pandaType710, &$s725);
                                                    $tmp720 = $tmp721;
                                                    $tmp719 = $tmp720;
                                                    callTarget718 = $tmp719;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp719));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp720));
                                                    panda$collections$Array* $tmp729 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp729);
                                                    $tmp728 = $tmp729;
                                                    $tmp727 = $tmp728;
                                                    callArgs726 = $tmp727;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp727));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs726, ((panda$core$Object*) expr613));
                                                    org$pandalanguage$pandac$ASTNode* $tmp731 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp732, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp731, $tmp732, start486.position, align623);
                                                    $tmp730 = $tmp731;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs726, ((panda$core$Object*) $tmp730));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
                                                    {
                                                        $tmp733 = expr613;
                                                        org$pandalanguage$pandac$ASTNode* $tmp736 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp737, 8);
                                                        org$pandalanguage$pandac$Position $tmp739 = (($fn738) expr613->$class->vtable[2])(expr613);
                                                        panda$collections$ImmutableArray* $tmp741 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs726);
                                                        $tmp740 = $tmp741;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp736, $tmp737, $tmp739, callTarget718, $tmp740);
                                                        $tmp735 = $tmp736;
                                                        $tmp734 = $tmp735;
                                                        expr613 = $tmp734;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp734));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp733));
                                                    }
                                                }
                                                $tmp705 = -1;
                                                goto $l703;
                                                $l703:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs726));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget718));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType710));
                                                pandaType710 = NULL;
                                                callTarget718 = NULL;
                                                callArgs726 = NULL;
                                                switch ($tmp705) {
                                                    case -1: goto $l742;
                                                }
                                                $l742:;
                                            }
                                            }
                                            panda$core$String* $tmp746 = panda$core$MutableString$finish$R$panda$core$String(chunk510);
                                            $tmp745 = $tmp746;
                                            $tmp744 = $tmp745;
                                            text743 = $tmp744;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp744));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp745));
                                            {
                                                $tmp747 = chunk510;
                                                panda$core$MutableString* $tmp750 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                                panda$core$MutableString$init($tmp750);
                                                $tmp749 = $tmp750;
                                                $tmp748 = $tmp749;
                                                chunk510 = $tmp748;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp748));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp749));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp747));
                                            }
                                            panda$core$Bit $tmp753 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text743, &$s752);
                                            bool $tmp751 = $tmp753.value;
                                            if ($tmp751) goto $l754;
                                            $tmp751 = ((panda$core$Bit) { result508 != NULL }).value;
                                            $l754:;
                                            panda$core$Bit $tmp755 = { $tmp751 };
                                            if ($tmp755.value) {
                                            {
                                                {
                                                    $tmp756 = result508;
                                                    org$pandalanguage$pandac$ASTNode* $tmp760 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp761, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp760, $tmp761, start486.position, text743);
                                                    $tmp759 = $tmp760;
                                                    org$pandalanguage$pandac$ASTNode* $tmp762 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result508, $tmp759);
                                                    $tmp758 = $tmp762;
                                                    $tmp757 = $tmp758;
                                                    result508 = $tmp757;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp757));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp758));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp759));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp756));
                                                }
                                                {
                                                    $tmp763 = result508;
                                                    org$pandalanguage$pandac$ASTNode* $tmp766 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result508, expr613);
                                                    $tmp765 = $tmp766;
                                                    $tmp764 = $tmp765;
                                                    result508 = $tmp764;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp764));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp765));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp763));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp767 = result508;
                                                    org$pandalanguage$pandac$ASTNode* $tmp770 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr613);
                                                    $tmp769 = $tmp770;
                                                    $tmp768 = $tmp769;
                                                    result508 = $tmp768;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp768));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp767));
                                                }
                                            }
                                            }
                                        }
                                        $tmp610 = -1;
                                        goto $l608;
                                        $l608:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text743));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format625));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align623));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr613));
                                        expr613 = NULL;
                                        text743 = NULL;
                                        switch ($tmp610) {
                                            case -1: goto $l771;
                                            case 2: goto $l698;
                                            case 0: goto $l618;
                                            case 1: goto $l646;
                                        }
                                        $l771:;
                                    }
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token516, &$s772);
                                    $tmp773 = NULL;
                                    $returnValue503 = $tmp773;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp773));
                                    $tmp550 = 4;
                                    goto $l548;
                                    $l774:;
                                    $tmp485 = 7;
                                    goto $l483;
                                    $l775:;
                                    $tmp481 = 7;
                                    goto $l479;
                                    $l776:;
                                    return $returnValue503;
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            panda$core$String$Index $tmp780 = panda$core$String$start$R$panda$core$String$Index(escapeText561);
                            panda$core$String$Index $tmp781 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText561, $tmp780);
                            panda$core$Bit$init$builtin_bit(&$tmp782, false);
                            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp779, ((panda$core$String$Index$nullable) { $tmp781, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp782);
                            panda$core$String* $tmp783 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText561, $tmp779);
                            $tmp778 = $tmp783;
                            panda$core$MutableString$append$panda$core$String(chunk510, $tmp778);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp778));
                        }
                        $tmp550 = -1;
                        goto $l548;
                        $l548:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText561));
                        escapeText561 = NULL;
                        switch ($tmp550) {
                            case 0: goto $l557;
                            case -1: goto $l784;
                            case 2: goto $l647;
                            case 1: goto $l619;
                            case 3: goto $l699;
                            case 4: goto $l774;
                        }
                        $l784:;
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp786 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token516);
                        $tmp785 = $tmp786;
                        panda$core$MutableString$append$panda$core$String(chunk510, $tmp785);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
                    }
                    }
                    }
                    }
                }
            }
            }
            $l515:;
            org$pandalanguage$pandac$ASTNode* $tmp790 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp791, 38);
            panda$core$String* $tmp793 = panda$core$MutableString$finish$R$panda$core$String(chunk510);
            $tmp792 = $tmp793;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp790, $tmp791, start486.position, $tmp792);
            $tmp789 = $tmp790;
            org$pandalanguage$pandac$ASTNode* $tmp794 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result508, $tmp789);
            $tmp788 = $tmp794;
            $tmp787 = $tmp788;
            $returnValue503 = $tmp787;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp787));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp788));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp789));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp792));
            $tmp485 = 8;
            goto $l483;
            $l795:;
            $tmp481 = 8;
            goto $l479;
            $l796:;
            return $returnValue503;
        }
        $l483:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result508));
        chunk510 = NULL;
        switch ($tmp485) {
            case 3: goto $l558;
            case 1: goto $l535;
            case 2: goto $l543;
            case 0: goto $l505;
            case 8: goto $l795;
            case 6: goto $l700;
            case 7: goto $l775;
            case 4: goto $l620;
            case 5: goto $l648;
        }
        $l798:;
    }
    $tmp481 = -1;
    goto $l479;
    $l479:;
    panda$core$Bit $tmp800 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->allowLambdas, $atPre1482);
    if ($tmp800.value) goto $l801; else goto $l802;
    $l802:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s803, (panda$core$Int64) { 263 }, &$s804);
    abort();
    $l801:;
    switch ($tmp481) {
        case 3: goto $l559;
        case 2: goto $l544;
        case 1: goto $l536;
        case 8: goto $l796;
        case 4: goto $l621;
        case 6: goto $l701;
        case 0: goto $l506;
        case -1: goto $l799;
        case 7: goto $l776;
        case 5: goto $l649;
    }
    $l799:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start808;
    org$pandalanguage$pandac$parser$Token$Kind $tmp809;
    panda$core$Int64 $tmp810;
    org$pandalanguage$pandac$ASTNode* $returnValue813;
    org$pandalanguage$pandac$ASTNode* $tmp814;
    org$pandalanguage$pandac$ASTNode* expr817 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp818;
    org$pandalanguage$pandac$ASTNode* $tmp819;
    org$pandalanguage$pandac$ASTNode* $tmp821;
    org$pandalanguage$pandac$ASTNode* $match$381_9827 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp828;
    panda$core$Int64 $tmp829;
    org$pandalanguage$pandac$Position firstPosition831;
    panda$core$String* firstName833 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp835;
    panda$core$Int64 $tmp836;
    panda$collections$Array* parameters841 = NULL;
    panda$collections$Array* $tmp842;
    panda$collections$Array* $tmp843;
    org$pandalanguage$pandac$ASTNode* firstType845 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp846;
    org$pandalanguage$pandac$ASTNode* $tmp847;
    org$pandalanguage$pandac$ASTNode* $tmp849;
    org$pandalanguage$pandac$ASTNode* $tmp854;
    panda$core$Int64 $tmp856;
    org$pandalanguage$pandac$parser$Token$Kind $tmp860;
    panda$core$Int64 $tmp861;
    org$pandalanguage$pandac$parser$Token$nullable nextName866;
    org$pandalanguage$pandac$parser$Token$Kind $tmp867;
    panda$core$Int64 $tmp868;
    org$pandalanguage$pandac$parser$Token$Kind $tmp871;
    panda$core$Int64 $tmp872;
    org$pandalanguage$pandac$ASTNode* $tmp875;
    org$pandalanguage$pandac$ASTNode* nextType881 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp882;
    org$pandalanguage$pandac$ASTNode* $tmp883;
    org$pandalanguage$pandac$ASTNode* $tmp885;
    org$pandalanguage$pandac$ASTNode* $tmp891;
    panda$core$Int64 $tmp893;
    panda$core$String* $tmp894;
    org$pandalanguage$pandac$parser$Token$Kind $tmp897;
    panda$core$Int64 $tmp898;
    org$pandalanguage$pandac$ASTNode* $tmp901;
    org$pandalanguage$pandac$parser$Token$Kind $tmp906;
    panda$core$Int64 $tmp907;
    org$pandalanguage$pandac$ASTNode* $tmp910;
    org$pandalanguage$pandac$ASTNode* body915 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp916;
    org$pandalanguage$pandac$ASTNode* $tmp917;
    org$pandalanguage$pandac$ASTNode* $tmp919;
    org$pandalanguage$pandac$ASTNode* $tmp924;
    org$pandalanguage$pandac$ASTNode* $tmp925;
    panda$core$Int64 $tmp927;
    panda$collections$ImmutableArray* $tmp928;
    org$pandalanguage$pandac$parser$Token$Kind $tmp935;
    panda$core$Int64 $tmp936;
    panda$collections$Array* parameters941 = NULL;
    panda$collections$Array* $tmp942;
    panda$collections$Array* $tmp943;
    panda$core$Bit validLambda945;
    panda$core$Bit $tmp946;
    org$pandalanguage$pandac$ASTNode* nextExpr952 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp953;
    org$pandalanguage$pandac$ASTNode* $tmp954;
    org$pandalanguage$pandac$ASTNode* $tmp956;
    org$pandalanguage$pandac$ASTNode* $tmp964;
    panda$core$Int64 $tmp969;
    panda$core$Bit $tmp971;
    org$pandalanguage$pandac$parser$Token$Kind $tmp975;
    panda$core$Int64 $tmp976;
    org$pandalanguage$pandac$parser$Token$Kind $tmp978;
    panda$core$Int64 $tmp979;
    org$pandalanguage$pandac$ASTNode* $tmp982;
    org$pandalanguage$pandac$parser$Token$Kind $tmp989;
    panda$core$Int64 $tmp990;
    org$pandalanguage$pandac$ASTNode* body996 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp997;
    org$pandalanguage$pandac$ASTNode* $tmp998;
    org$pandalanguage$pandac$ASTNode* $tmp1000;
    org$pandalanguage$pandac$ASTNode* $tmp1006;
    org$pandalanguage$pandac$ASTNode* $tmp1007;
    panda$core$Int64 $tmp1009;
    panda$collections$ImmutableArray* $tmp1010;
    org$pandalanguage$pandac$ASTNode* $tmp1018;
    org$pandalanguage$pandac$ASTNode* $tmp1019;
    panda$core$Int64 $tmp1021;
    panda$collections$ImmutableArray* $tmp1022;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1029;
    panda$core$Int64 $tmp1030;
    org$pandalanguage$pandac$ASTNode* $tmp1033;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1037;
    panda$core$Int64 $tmp1038;
    panda$collections$Array* parameters1043 = NULL;
    panda$collections$Array* $tmp1044;
    panda$collections$Array* $tmp1045;
    org$pandalanguage$pandac$ASTNode* body1047 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1048;
    org$pandalanguage$pandac$ASTNode* $tmp1049;
    org$pandalanguage$pandac$ASTNode* $tmp1051;
    org$pandalanguage$pandac$ASTNode* $tmp1056;
    org$pandalanguage$pandac$ASTNode* $tmp1057;
    panda$core$Int64 $tmp1059;
    panda$collections$ImmutableArray* $tmp1060;
    org$pandalanguage$pandac$ASTNode* $tmp1067;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1074;
    panda$core$Int64 $tmp1075;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1077;
    panda$core$Int64 $tmp1078;
    org$pandalanguage$pandac$ASTNode* $tmp1080;
    panda$collections$Array* arguments1085 = NULL;
    panda$collections$Array* $tmp1086;
    panda$collections$Array* $tmp1087;
    org$pandalanguage$pandac$ASTNode* nextExpr1094 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1095;
    org$pandalanguage$pandac$ASTNode* $tmp1096;
    org$pandalanguage$pandac$ASTNode* $tmp1098;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1106;
    panda$core$Int64 $tmp1107;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1109;
    panda$core$Int64 $tmp1110;
    org$pandalanguage$pandac$ASTNode* $tmp1112;
    org$pandalanguage$pandac$ASTNode* $tmp1113;
    panda$core$Int64 $tmp1115;
    panda$collections$ImmutableArray* $tmp1116;
    int $tmp807;
    {
        panda$core$Int64$init$builtin_int64(&$tmp810, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp809, $tmp810);
        org$pandalanguage$pandac$parser$Token$nullable $tmp812 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp809, &$s811);
        start808 = $tmp812;
        if (((panda$core$Bit) { !start808.nonnull }).value) {
        {
            $tmp814 = NULL;
            $returnValue813 = $tmp814;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp814));
            $tmp807 = 0;
            goto $l805;
            $l815:;
            return $returnValue813;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp820 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp819 = $tmp820;
        $tmp818 = $tmp819;
        expr817 = $tmp818;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp818));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp819));
        if (((panda$core$Bit) { expr817 == NULL }).value) {
        {
            $tmp821 = NULL;
            $returnValue813 = $tmp821;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp821));
            $tmp807 = 1;
            goto $l805;
            $l822:;
            return $returnValue813;
        }
        }
        int $tmp826;
        {
            $tmp828 = expr817;
            $match$381_9827 = $tmp828;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp828));
            panda$core$Int64$init$builtin_int64(&$tmp829, 20);
            panda$core$Bit $tmp830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_9827->$rawValue, $tmp829);
            if ($tmp830.value) {
            {
                org$pandalanguage$pandac$Position* $tmp832 = ((org$pandalanguage$pandac$Position*) ((char*) $match$381_9827->$data + 0));
                firstPosition831 = *$tmp832;
                panda$core$String** $tmp834 = ((panda$core$String**) ((char*) $match$381_9827->$data + 16));
                firstName833 = *$tmp834;
                panda$core$Int64$init$builtin_int64(&$tmp836, 95);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp835, $tmp836);
                org$pandalanguage$pandac$parser$Token$nullable $tmp837 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp835);
                if (((panda$core$Bit) { $tmp837.nonnull }).value) {
                {
                    int $tmp840;
                    {
                        panda$collections$Array* $tmp844 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp844);
                        $tmp843 = $tmp844;
                        $tmp842 = $tmp843;
                        parameters841 = $tmp842;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp842));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp843));
                        org$pandalanguage$pandac$ASTNode* $tmp848 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp847 = $tmp848;
                        $tmp846 = $tmp847;
                        firstType845 = $tmp846;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp846));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp847));
                        if (((panda$core$Bit) { firstType845 == NULL }).value) {
                        {
                            $tmp849 = NULL;
                            $returnValue813 = $tmp849;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp849));
                            $tmp840 = 0;
                            goto $l838;
                            $l850:;
                            $tmp826 = 0;
                            goto $l824;
                            $l851:;
                            $tmp807 = 2;
                            goto $l805;
                            $l852:;
                            return $returnValue813;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp855 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp856, 31);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp855, $tmp856, firstPosition831, firstName833, firstType845);
                        $tmp854 = $tmp855;
                        panda$collections$Array$add$panda$collections$Array$T(parameters841, ((panda$core$Object*) $tmp854));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp854));
                        $l857:;
                        panda$core$Int64$init$builtin_int64(&$tmp861, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp860, $tmp861);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp862 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp860);
                        bool $tmp859 = ((panda$core$Bit) { $tmp862.nonnull }).value;
                        if (!$tmp859) goto $l858;
                        {
                            int $tmp865;
                            {
                                panda$core$Int64$init$builtin_int64(&$tmp868, 48);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp867, $tmp868);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp870 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp867, &$s869);
                                nextName866 = $tmp870;
                                panda$core$Int64$init$builtin_int64(&$tmp872, 95);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp871, $tmp872);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp874 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp871, &$s873);
                                if (((panda$core$Bit) { !$tmp874.nonnull }).value) {
                                {
                                    $tmp875 = NULL;
                                    $returnValue813 = $tmp875;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp875));
                                    $tmp865 = 0;
                                    goto $l863;
                                    $l876:;
                                    $tmp840 = 1;
                                    goto $l838;
                                    $l877:;
                                    $tmp826 = 1;
                                    goto $l824;
                                    $l878:;
                                    $tmp807 = 3;
                                    goto $l805;
                                    $l879:;
                                    return $returnValue813;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp884 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp883 = $tmp884;
                                $tmp882 = $tmp883;
                                nextType881 = $tmp882;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp882));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp883));
                                if (((panda$core$Bit) { nextType881 == NULL }).value) {
                                {
                                    $tmp885 = NULL;
                                    $returnValue813 = $tmp885;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp885));
                                    $tmp865 = 1;
                                    goto $l863;
                                    $l886:;
                                    $tmp840 = 2;
                                    goto $l838;
                                    $l887:;
                                    $tmp826 = 2;
                                    goto $l824;
                                    $l888:;
                                    $tmp807 = 4;
                                    goto $l805;
                                    $l889:;
                                    return $returnValue813;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp892 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp893, 31);
                                panda$core$String* $tmp895 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) nextName866.value));
                                $tmp894 = $tmp895;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp892, $tmp893, ((org$pandalanguage$pandac$parser$Token) nextName866.value).position, $tmp894, nextType881);
                                $tmp891 = $tmp892;
                                panda$collections$Array$add$panda$collections$Array$T(parameters841, ((panda$core$Object*) $tmp891));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp891));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp894));
                            }
                            $tmp865 = -1;
                            goto $l863;
                            $l863:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextType881));
                            nextType881 = NULL;
                            switch ($tmp865) {
                                case 0: goto $l876;
                                case -1: goto $l896;
                                case 1: goto $l886;
                            }
                            $l896:;
                        }
                        goto $l857;
                        $l858:;
                        panda$core$Int64$init$builtin_int64(&$tmp898, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp897, $tmp898);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp900 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp897, &$s899);
                        if (((panda$core$Bit) { !$tmp900.nonnull }).value) {
                        {
                            $tmp901 = NULL;
                            $returnValue813 = $tmp901;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp901));
                            $tmp840 = 3;
                            goto $l838;
                            $l902:;
                            $tmp826 = 3;
                            goto $l824;
                            $l903:;
                            $tmp807 = 5;
                            goto $l805;
                            $l904:;
                            return $returnValue813;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp907, 90);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp906, $tmp907);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp909 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp906, &$s908);
                        if (((panda$core$Bit) { !$tmp909.nonnull }).value) {
                        {
                            $tmp910 = NULL;
                            $returnValue813 = $tmp910;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp910));
                            $tmp840 = 4;
                            goto $l838;
                            $l911:;
                            $tmp826 = 4;
                            goto $l824;
                            $l912:;
                            $tmp807 = 6;
                            goto $l805;
                            $l913:;
                            return $returnValue813;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp918 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp917 = $tmp918;
                        $tmp916 = $tmp917;
                        body915 = $tmp916;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp916));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp917));
                        if (((panda$core$Bit) { body915 == NULL }).value) {
                        {
                            $tmp919 = NULL;
                            $returnValue813 = $tmp919;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp919));
                            $tmp840 = 5;
                            goto $l838;
                            $l920:;
                            $tmp826 = 5;
                            goto $l824;
                            $l921:;
                            $tmp807 = 7;
                            goto $l805;
                            $l922:;
                            return $returnValue813;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp926 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp927, 43);
                        panda$collections$ImmutableArray* $tmp929 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters841);
                        $tmp928 = $tmp929;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp926, $tmp927, ((org$pandalanguage$pandac$parser$Token) start808.value).position, $tmp928, body915);
                        $tmp925 = $tmp926;
                        $tmp924 = $tmp925;
                        $returnValue813 = $tmp924;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp924));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp925));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp928));
                        $tmp840 = 6;
                        goto $l838;
                        $l930:;
                        $tmp826 = 6;
                        goto $l824;
                        $l931:;
                        $tmp807 = 8;
                        goto $l805;
                        $l932:;
                        return $returnValue813;
                    }
                    $l838:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body915));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) firstType845));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters841));
                    parameters841 = NULL;
                    firstType845 = NULL;
                    body915 = NULL;
                    switch ($tmp840) {
                        case 6: goto $l930;
                        case 1: goto $l877;
                        case 0: goto $l850;
                        case 4: goto $l911;
                        case 5: goto $l920;
                        case 2: goto $l887;
                        case 3: goto $l902;
                    }
                    $l934:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp936, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp935, $tmp936);
                org$pandalanguage$pandac$parser$Token$nullable $tmp937 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp935);
                if (((panda$core$Bit) { $tmp937.nonnull }).value) {
                {
                    int $tmp940;
                    {
                        panda$collections$Array* $tmp944 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp944);
                        $tmp943 = $tmp944;
                        $tmp942 = $tmp943;
                        parameters941 = $tmp942;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp942));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp943));
                        panda$collections$Array$add$panda$collections$Array$T(parameters941, ((panda$core$Object*) expr817));
                        panda$core$Bit$init$builtin_bit(&$tmp946, true);
                        validLambda945 = $tmp946;
                        $l947:;
                        {
                            int $tmp951;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp955 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp954 = $tmp955;
                                $tmp953 = $tmp954;
                                nextExpr952 = $tmp953;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp953));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
                                if (((panda$core$Bit) { nextExpr952 == NULL }).value) {
                                {
                                    $tmp956 = NULL;
                                    $returnValue813 = $tmp956;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp956));
                                    $tmp951 = 0;
                                    goto $l949;
                                    $l957:;
                                    $tmp940 = 0;
                                    goto $l938;
                                    $l958:;
                                    $tmp826 = 7;
                                    goto $l824;
                                    $l959:;
                                    $tmp807 = 9;
                                    goto $l805;
                                    $l960:;
                                    return $returnValue813;
                                }
                                }
                                bool $tmp962 = validLambda945.value;
                                if (!$tmp962) goto $l963;
                                $tmp964 = nextExpr952;
                                panda$core$Bit $tmp968;
                                if (((panda$core$Bit) { $tmp964 != NULL }).value) goto $l965; else goto $l966;
                                $l965:;
                                panda$core$Int64$init$builtin_int64(&$tmp969, 20);
                                panda$core$Bit $tmp970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp964->$rawValue, $tmp969);
                                $tmp968 = $tmp970;
                                goto $l967;
                                $l966:;
                                panda$core$Bit$init$builtin_bit(&$tmp971, false);
                                $tmp968 = $tmp971;
                                goto $l967;
                                $l967:;
                                $tmp962 = $tmp968.value;
                                $l963:;
                                panda$core$Bit $tmp972 = { $tmp962 };
                                validLambda945 = $tmp972;
                                panda$collections$Array$add$panda$collections$Array$T(parameters941, ((panda$core$Object*) nextExpr952));
                            }
                            $tmp951 = -1;
                            goto $l949;
                            $l949:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr952));
                            nextExpr952 = NULL;
                            switch ($tmp951) {
                                case -1: goto $l973;
                                case 0: goto $l957;
                            }
                            $l973:;
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp976, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp975, $tmp976);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp977 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp975);
                        bool $tmp974 = ((panda$core$Bit) { $tmp977.nonnull }).value;
                        if ($tmp974) goto $l947;
                        $l948:;
                        panda$core$Int64$init$builtin_int64(&$tmp979, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp978, $tmp979);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp981 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp978, &$s980);
                        if (((panda$core$Bit) { !$tmp981.nonnull }).value) {
                        {
                            $tmp982 = NULL;
                            $returnValue813 = $tmp982;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp982));
                            $tmp940 = 1;
                            goto $l938;
                            $l983:;
                            $tmp826 = 8;
                            goto $l824;
                            $l984:;
                            $tmp807 = 10;
                            goto $l805;
                            $l985:;
                            return $returnValue813;
                        }
                        }
                        bool $tmp987 = validLambda945.value;
                        if (!$tmp987) goto $l988;
                        panda$core$Int64$init$builtin_int64(&$tmp990, 90);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp989, $tmp990);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp991 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp989);
                        $tmp987 = ((panda$core$Bit) { $tmp991.nonnull }).value;
                        $l988:;
                        panda$core$Bit $tmp992 = { $tmp987 };
                        if ($tmp992.value) {
                        {
                            int $tmp995;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp999 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp998 = $tmp999;
                                $tmp997 = $tmp998;
                                body996 = $tmp997;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp997));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp998));
                                if (((panda$core$Bit) { body996 == NULL }).value) {
                                {
                                    $tmp1000 = NULL;
                                    $returnValue813 = $tmp1000;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1000));
                                    $tmp995 = 0;
                                    goto $l993;
                                    $l1001:;
                                    $tmp940 = 2;
                                    goto $l938;
                                    $l1002:;
                                    $tmp826 = 9;
                                    goto $l824;
                                    $l1003:;
                                    $tmp807 = 11;
                                    goto $l805;
                                    $l1004:;
                                    return $returnValue813;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1008 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1009, 45);
                                panda$collections$ImmutableArray* $tmp1011 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters941);
                                $tmp1010 = $tmp1011;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1008, $tmp1009, ((org$pandalanguage$pandac$parser$Token) start808.value).position, $tmp1010, body996);
                                $tmp1007 = $tmp1008;
                                $tmp1006 = $tmp1007;
                                $returnValue813 = $tmp1006;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1006));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1007));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1010));
                                $tmp995 = 1;
                                goto $l993;
                                $l1012:;
                                $tmp940 = 3;
                                goto $l938;
                                $l1013:;
                                $tmp826 = 10;
                                goto $l824;
                                $l1014:;
                                $tmp807 = 12;
                                goto $l805;
                                $l1015:;
                                return $returnValue813;
                            }
                            $l993:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body996));
                            body996 = NULL;
                            switch ($tmp995) {
                                case 0: goto $l1001;
                                case 1: goto $l1012;
                            }
                            $l1017:;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1020 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1021, 40);
                        panda$collections$ImmutableArray* $tmp1023 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters941);
                        $tmp1022 = $tmp1023;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1020, $tmp1021, ((org$pandalanguage$pandac$parser$Token) start808.value).position, $tmp1022);
                        $tmp1019 = $tmp1020;
                        $tmp1018 = $tmp1019;
                        $returnValue813 = $tmp1018;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1018));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1019));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1022));
                        $tmp940 = 4;
                        goto $l938;
                        $l1024:;
                        $tmp826 = 11;
                        goto $l824;
                        $l1025:;
                        $tmp807 = 13;
                        goto $l805;
                        $l1026:;
                        return $returnValue813;
                    }
                    $l938:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters941));
                    parameters941 = NULL;
                    switch ($tmp940) {
                        case 2: goto $l1002;
                        case 3: goto $l1013;
                        case 0: goto $l958;
                        case 4: goto $l1024;
                        case 1: goto $l983;
                    }
                    $l1028:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1030, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1029, $tmp1030);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1032 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1029, &$s1031);
                if (((panda$core$Bit) { !$tmp1032.nonnull }).value) {
                {
                    $tmp1033 = NULL;
                    $returnValue813 = $tmp1033;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1033));
                    $tmp826 = 12;
                    goto $l824;
                    $l1034:;
                    $tmp807 = 14;
                    goto $l805;
                    $l1035:;
                    return $returnValue813;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1038, 90);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1037, $tmp1038);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1039 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1037);
                if (((panda$core$Bit) { $tmp1039.nonnull }).value) {
                {
                    int $tmp1042;
                    {
                        panda$collections$Array* $tmp1046 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1046);
                        $tmp1045 = $tmp1046;
                        $tmp1044 = $tmp1045;
                        parameters1043 = $tmp1044;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1044));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1045));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1043, ((panda$core$Object*) expr817));
                        org$pandalanguage$pandac$ASTNode* $tmp1050 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1049 = $tmp1050;
                        $tmp1048 = $tmp1049;
                        body1047 = $tmp1048;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1048));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1049));
                        if (((panda$core$Bit) { body1047 == NULL }).value) {
                        {
                            $tmp1051 = NULL;
                            $returnValue813 = $tmp1051;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1051));
                            $tmp1042 = 0;
                            goto $l1040;
                            $l1052:;
                            $tmp826 = 13;
                            goto $l824;
                            $l1053:;
                            $tmp807 = 15;
                            goto $l805;
                            $l1054:;
                            return $returnValue813;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1058 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1059, 45);
                        panda$collections$ImmutableArray* $tmp1061 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1043);
                        $tmp1060 = $tmp1061;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1058, $tmp1059, ((org$pandalanguage$pandac$parser$Token) start808.value).position, $tmp1060, body1047);
                        $tmp1057 = $tmp1058;
                        $tmp1056 = $tmp1057;
                        $returnValue813 = $tmp1056;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1056));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1057));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1060));
                        $tmp1042 = 1;
                        goto $l1040;
                        $l1062:;
                        $tmp826 = 14;
                        goto $l824;
                        $l1063:;
                        $tmp807 = 16;
                        goto $l805;
                        $l1064:;
                        return $returnValue813;
                    }
                    $l1040:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1047));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1043));
                    parameters1043 = NULL;
                    body1047 = NULL;
                    switch ($tmp1042) {
                        case 1: goto $l1062;
                        case 0: goto $l1052;
                    }
                    $l1066:;
                }
                }
                $tmp1067 = expr817;
                $returnValue813 = $tmp1067;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1067));
                $tmp826 = 15;
                goto $l824;
                $l1068:;
                $tmp807 = 17;
                goto $l805;
                $l1069:;
                return $returnValue813;
            }
            }
            else {
            {
                int $tmp1073;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1075, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1074, $tmp1075);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1076 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1074);
                    if (((panda$core$Bit) { !$tmp1076.nonnull }).value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1078, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1077, $tmp1078);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1077, &$s1079);
                        $tmp1080 = expr817;
                        $returnValue813 = $tmp1080;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1080));
                        $tmp1073 = 0;
                        goto $l1071;
                        $l1081:;
                        $tmp826 = 16;
                        goto $l824;
                        $l1082:;
                        $tmp807 = 18;
                        goto $l805;
                        $l1083:;
                        return $returnValue813;
                    }
                    }
                    panda$collections$Array* $tmp1088 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1088);
                    $tmp1087 = $tmp1088;
                    $tmp1086 = $tmp1087;
                    arguments1085 = $tmp1086;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1086));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1087));
                    panda$collections$Array$add$panda$collections$Array$T(arguments1085, ((panda$core$Object*) expr817));
                    $l1089:;
                    {
                        int $tmp1093;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1097 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1096 = $tmp1097;
                            $tmp1095 = $tmp1096;
                            nextExpr1094 = $tmp1095;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1095));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1096));
                            if (((panda$core$Bit) { nextExpr1094 == NULL }).value) {
                            {
                                $tmp1098 = NULL;
                                $returnValue813 = $tmp1098;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1098));
                                $tmp1093 = 0;
                                goto $l1091;
                                $l1099:;
                                $tmp1073 = 1;
                                goto $l1071;
                                $l1100:;
                                $tmp826 = 17;
                                goto $l824;
                                $l1101:;
                                $tmp807 = 19;
                                goto $l805;
                                $l1102:;
                                return $returnValue813;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(arguments1085, ((panda$core$Object*) nextExpr1094));
                        }
                        $tmp1093 = -1;
                        goto $l1091;
                        $l1091:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr1094));
                        nextExpr1094 = NULL;
                        switch ($tmp1093) {
                            case -1: goto $l1104;
                            case 0: goto $l1099;
                        }
                        $l1104:;
                    }
                    panda$core$Int64$init$builtin_int64(&$tmp1107, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1106, $tmp1107);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1108 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1106);
                    bool $tmp1105 = ((panda$core$Bit) { $tmp1108.nonnull }).value;
                    if ($tmp1105) goto $l1089;
                    $l1090:;
                    panda$core$Int64$init$builtin_int64(&$tmp1110, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1109, $tmp1110);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1109, &$s1111);
                    org$pandalanguage$pandac$ASTNode* $tmp1114 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1115, 40);
                    panda$collections$ImmutableArray* $tmp1117 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(arguments1085);
                    $tmp1116 = $tmp1117;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1114, $tmp1115, ((org$pandalanguage$pandac$parser$Token) start808.value).position, $tmp1116);
                    $tmp1113 = $tmp1114;
                    $tmp1112 = $tmp1113;
                    $returnValue813 = $tmp1112;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1112));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1113));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1116));
                    $tmp1073 = 2;
                    goto $l1071;
                    $l1118:;
                    $tmp826 = 18;
                    goto $l824;
                    $l1119:;
                    $tmp807 = 20;
                    goto $l805;
                    $l1120:;
                    return $returnValue813;
                }
                $l1071:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arguments1085));
                arguments1085 = NULL;
                switch ($tmp1073) {
                    case 2: goto $l1118;
                    case 1: goto $l1100;
                    case 0: goto $l1081;
                }
                $l1122:;
            }
            }
        }
        $tmp826 = -1;
        goto $l824;
        $l824:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
        switch ($tmp826) {
            case 14: goto $l1063;
            case 5: goto $l921;
            case 3: goto $l903;
            case 8: goto $l984;
            case 16: goto $l1082;
            case 11: goto $l1025;
            case -1: goto $l1123;
            case 18: goto $l1119;
            case 7: goto $l959;
            case 12: goto $l1034;
            case 6: goto $l931;
            case 15: goto $l1068;
            case 17: goto $l1101;
            case 9: goto $l1003;
            case 1: goto $l878;
            case 10: goto $l1014;
            case 0: goto $l851;
            case 4: goto $l912;
            case 13: goto $l1053;
            case 2: goto $l888;
        }
        $l1123:;
    }
    $tmp807 = -1;
    goto $l805;
    $l805:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr817));
    expr817 = NULL;
    switch ($tmp807) {
        case 16: goto $l1064;
        case -1: goto $l1124;
        case 7: goto $l922;
        case 13: goto $l1026;
        case 5: goto $l904;
        case 20: goto $l1120;
        case 10: goto $l985;
        case 9: goto $l960;
        case 17: goto $l1069;
        case 14: goto $l1035;
        case 8: goto $l932;
        case 11: goto $l1004;
        case 19: goto $l1102;
        case 12: goto $l1015;
        case 1: goto $l822;
        case 2: goto $l852;
        case 15: goto $l1054;
        case 6: goto $l913;
        case 18: goto $l1083;
        case 0: goto $l815;
        case 4: goto $l889;
        case 3: goto $l879;
    }
    $l1124:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1128;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1129;
    panda$core$Int64 $tmp1130;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1133;
    panda$core$Int64 $tmp1134;
    org$pandalanguage$pandac$ASTNode* t1139 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1140;
    org$pandalanguage$pandac$ASTNode* $tmp1141;
    org$pandalanguage$pandac$ASTNode* $returnValue1143;
    org$pandalanguage$pandac$ASTNode* $tmp1144;
    panda$collections$Array* parameters1148 = NULL;
    panda$collections$Array* $tmp1149;
    panda$collections$Array* $tmp1150;
    org$pandalanguage$pandac$ASTNode* $tmp1152;
    panda$core$Int64 $tmp1154;
    panda$core$String* $tmp1155;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1157;
    panda$core$Int64 $tmp1158;
    org$pandalanguage$pandac$ASTNode* $tmp1161;
    org$pandalanguage$pandac$ASTNode* expr1165 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1166;
    org$pandalanguage$pandac$ASTNode* $tmp1167;
    org$pandalanguage$pandac$ASTNode* $tmp1169;
    org$pandalanguage$pandac$ASTNode* $tmp1173;
    org$pandalanguage$pandac$ASTNode* $tmp1174;
    panda$core$Int64 $tmp1176;
    panda$collections$ImmutableArray* $tmp1177;
    panda$collections$Array* parameters1183 = NULL;
    panda$collections$Array* $tmp1184;
    panda$collections$Array* $tmp1185;
    org$pandalanguage$pandac$ASTNode* $tmp1187;
    panda$core$Int64 $tmp1189;
    panda$core$String* $tmp1190;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1192;
    panda$core$Int64 $tmp1193;
    org$pandalanguage$pandac$ASTNode* $tmp1196;
    org$pandalanguage$pandac$ASTNode* expr1199 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1200;
    org$pandalanguage$pandac$ASTNode* $tmp1201;
    org$pandalanguage$pandac$ASTNode* $tmp1203;
    org$pandalanguage$pandac$ASTNode* $tmp1206;
    org$pandalanguage$pandac$ASTNode* $tmp1207;
    panda$core$Int64 $tmp1209;
    panda$collections$ImmutableArray* $tmp1210;
    int $tmp1127;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1130, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1129, $tmp1130);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1132 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1129, &$s1131);
        start1128 = $tmp1132;
        panda$core$Int64$init$builtin_int64(&$tmp1134, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1133, $tmp1134);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1135 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1133);
        if (((panda$core$Bit) { $tmp1135.nonnull }).value) {
        {
            int $tmp1138;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1142 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1141 = $tmp1142;
                $tmp1140 = $tmp1141;
                t1139 = $tmp1140;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1140));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1141));
                if (((panda$core$Bit) { t1139 == NULL }).value) {
                {
                    $tmp1144 = NULL;
                    $returnValue1143 = $tmp1144;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1144));
                    $tmp1138 = 0;
                    goto $l1136;
                    $l1145:;
                    $tmp1127 = 0;
                    goto $l1125;
                    $l1146:;
                    return $returnValue1143;
                }
                }
                panda$collections$Array* $tmp1151 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1151);
                $tmp1150 = $tmp1151;
                $tmp1149 = $tmp1150;
                parameters1148 = $tmp1149;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1149));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1150));
                org$pandalanguage$pandac$ASTNode* $tmp1153 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1154, 31);
                panda$core$String* $tmp1156 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1128.value));
                $tmp1155 = $tmp1156;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1153, $tmp1154, ((org$pandalanguage$pandac$parser$Token) start1128.value).position, $tmp1155, t1139);
                $tmp1152 = $tmp1153;
                panda$collections$Array$add$panda$collections$Array$T(parameters1148, ((panda$core$Object*) $tmp1152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1155));
                panda$core$Int64$init$builtin_int64(&$tmp1158, 90);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1157, $tmp1158);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1160 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1157, &$s1159);
                if (((panda$core$Bit) { !$tmp1160.nonnull }).value) {
                {
                    $tmp1161 = NULL;
                    $returnValue1143 = $tmp1161;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1161));
                    $tmp1138 = 1;
                    goto $l1136;
                    $l1162:;
                    $tmp1127 = 1;
                    goto $l1125;
                    $l1163:;
                    return $returnValue1143;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1168 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1167 = $tmp1168;
                $tmp1166 = $tmp1167;
                expr1165 = $tmp1166;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1166));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1167));
                if (((panda$core$Bit) { expr1165 == NULL }).value) {
                {
                    $tmp1169 = NULL;
                    $returnValue1143 = $tmp1169;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1169));
                    $tmp1138 = 2;
                    goto $l1136;
                    $l1170:;
                    $tmp1127 = 2;
                    goto $l1125;
                    $l1171:;
                    return $returnValue1143;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1175 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1176, 43);
                panda$collections$ImmutableArray* $tmp1178 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1148);
                $tmp1177 = $tmp1178;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1175, $tmp1176, ((org$pandalanguage$pandac$parser$Token) start1128.value).position, $tmp1177, expr1165);
                $tmp1174 = $tmp1175;
                $tmp1173 = $tmp1174;
                $returnValue1143 = $tmp1173;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1173));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1174));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1177));
                $tmp1138 = 3;
                goto $l1136;
                $l1179:;
                $tmp1127 = 3;
                goto $l1125;
                $l1180:;
                return $returnValue1143;
            }
            $l1136:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1165));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1148));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1139));
            t1139 = NULL;
            parameters1148 = NULL;
            expr1165 = NULL;
            switch ($tmp1138) {
                case 1: goto $l1162;
                case 2: goto $l1170;
                case 3: goto $l1179;
                case 0: goto $l1145;
            }
            $l1182:;
        }
        }
        panda$collections$Array* $tmp1186 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1186);
        $tmp1185 = $tmp1186;
        $tmp1184 = $tmp1185;
        parameters1183 = $tmp1184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1185));
        org$pandalanguage$pandac$ASTNode* $tmp1188 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1189, 20);
        panda$core$String* $tmp1191 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1128.value));
        $tmp1190 = $tmp1191;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1188, $tmp1189, ((org$pandalanguage$pandac$parser$Token) start1128.value).position, $tmp1190);
        $tmp1187 = $tmp1188;
        panda$collections$Array$add$panda$collections$Array$T(parameters1183, ((panda$core$Object*) $tmp1187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1190));
        panda$core$Int64$init$builtin_int64(&$tmp1193, 90);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1192, $tmp1193);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1195 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1192, &$s1194);
        if (((panda$core$Bit) { !$tmp1195.nonnull }).value) {
        {
            $tmp1196 = NULL;
            $returnValue1143 = $tmp1196;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1196));
            $tmp1127 = 4;
            goto $l1125;
            $l1197:;
            return $returnValue1143;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1202 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1201 = $tmp1202;
        $tmp1200 = $tmp1201;
        expr1199 = $tmp1200;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1200));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1201));
        if (((panda$core$Bit) { expr1199 == NULL }).value) {
        {
            $tmp1203 = NULL;
            $returnValue1143 = $tmp1203;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1203));
            $tmp1127 = 5;
            goto $l1125;
            $l1204:;
            return $returnValue1143;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1208 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1209, 45);
        panda$collections$ImmutableArray* $tmp1211 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1183);
        $tmp1210 = $tmp1211;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1208, $tmp1209, ((org$pandalanguage$pandac$parser$Token) start1128.value).position, $tmp1210, expr1199);
        $tmp1207 = $tmp1208;
        $tmp1206 = $tmp1207;
        $returnValue1143 = $tmp1206;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1207));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1210));
        $tmp1127 = 6;
        goto $l1125;
        $l1212:;
        return $returnValue1143;
    }
    $l1125:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1199));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1183));
    parameters1183 = NULL;
    expr1199 = NULL;
    switch ($tmp1127) {
        case 0: goto $l1146;
        case 3: goto $l1180;
        case 1: goto $l1163;
        case 4: goto $l1197;
        case 2: goto $l1171;
        case 5: goto $l1204;
        case 6: goto $l1212;
    }
    $l1214:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1218;
    panda$core$Int64 $tmp1219;
    org$pandalanguage$pandac$ASTNode* $returnValue1222;
    org$pandalanguage$pandac$ASTNode* $tmp1223;
    org$pandalanguage$pandac$ASTNode* regex1226 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1227;
    org$pandalanguage$pandac$ASTNode* $tmp1228;
    org$pandalanguage$pandac$ASTNode* $tmp1230;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1233;
    panda$core$Int64 $tmp1234;
    org$pandalanguage$pandac$ASTNode* $tmp1236;
    int $tmp1217;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1219, 54);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1218, $tmp1219);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1221 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1218, &$s1220);
        if (((panda$core$Bit) { !$tmp1221.nonnull }).value) {
        {
            $tmp1223 = NULL;
            $returnValue1222 = $tmp1223;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1223));
            $tmp1217 = 0;
            goto $l1215;
            $l1224:;
            return $returnValue1222;
        }
        }
        self->regexParser->lexer->dfa->offset = self->lexer->dfa->offset;
        self->regexParser->lexer->dfa->line = self->lexer->dfa->line;
        self->regexParser->lexer->dfa->column = self->lexer->dfa->column;
        org$pandalanguage$pandac$ASTNode* $tmp1229 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self->regexParser);
        $tmp1228 = $tmp1229;
        $tmp1227 = $tmp1228;
        regex1226 = $tmp1227;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1227));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1228));
        self->lexer->dfa->offset = self->regexParser->lexer->dfa->offset;
        self->lexer->dfa->line = self->regexParser->lexer->dfa->line;
        self->lexer->dfa->column = self->regexParser->lexer->dfa->column;
        if (((panda$core$Bit) { regex1226 == NULL }).value) {
        {
            $tmp1230 = NULL;
            $returnValue1222 = $tmp1230;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1230));
            $tmp1217 = 1;
            goto $l1215;
            $l1231:;
            return $returnValue1222;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1234, 54);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1233, $tmp1234);
        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1233, &$s1235);
        $tmp1236 = regex1226;
        $returnValue1222 = $tmp1236;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1236));
        $tmp1217 = 2;
        goto $l1215;
        $l1237:;
        return $returnValue1222;
    }
    $l1215:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) regex1226));
    regex1226 = NULL;
    switch ($tmp1217) {
        case 1: goto $l1231;
        case 2: goto $l1237;
        case 0: goto $l1224;
    }
    $l1239:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t1240;
    org$pandalanguage$pandac$parser$Token$Kind $match$537_91242;
    panda$core$Int64 $tmp1243;
    org$pandalanguage$pandac$parser$Token$Kind check1245;
    panda$core$Int64 $tmp1250;
    panda$core$Int64 $tmp1254;
    org$pandalanguage$pandac$ASTNode* $returnValue1257;
    org$pandalanguage$pandac$ASTNode* $tmp1258;
    org$pandalanguage$pandac$ASTNode* $tmp1259;
    org$pandalanguage$pandac$ASTNode* $tmp1262;
    org$pandalanguage$pandac$ASTNode* $tmp1263;
    panda$core$Int64 $tmp1265;
    panda$core$String* $tmp1266;
    panda$core$Int64 $tmp1269;
    org$pandalanguage$pandac$ASTNode* $tmp1271;
    org$pandalanguage$pandac$ASTNode* $tmp1272;
    panda$core$Int64 $tmp1274;
    panda$core$String* $tmp1275;
    panda$core$Int64 $tmp1279;
    org$pandalanguage$pandac$ASTNode* $tmp1281;
    org$pandalanguage$pandac$ASTNode* $tmp1282;
    panda$core$Int64 $tmp1284;
    panda$core$String* $tmp1285;
    panda$core$String* $tmp1286;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1288;
    panda$core$Int64 $tmp1289;
    panda$core$Bit $tmp1290;
    panda$core$Int64 $tmp1292;
    panda$core$Int64 $tmp1295;
    org$pandalanguage$pandac$ASTNode* $tmp1297;
    org$pandalanguage$pandac$ASTNode* $tmp1298;
    panda$core$Int64 $tmp1300;
    panda$core$String* $tmp1301;
    panda$core$String* $tmp1302;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1304;
    panda$core$Int64 $tmp1305;
    panda$core$Bit $tmp1306;
    panda$core$Int64 $tmp1308;
    panda$core$Int64 $tmp1311;
    org$pandalanguage$pandac$ASTNode* $tmp1313;
    org$pandalanguage$pandac$ASTNode* $tmp1314;
    panda$core$Int64 $tmp1316;
    panda$core$String* $tmp1317;
    panda$core$Int64 $tmp1321;
    org$pandalanguage$pandac$ASTNode* $tmp1323;
    org$pandalanguage$pandac$ASTNode* $tmp1324;
    panda$core$Int64 $tmp1326;
    panda$core$Int64 $tmp1328;
    org$pandalanguage$pandac$ASTNode* $tmp1330;
    org$pandalanguage$pandac$ASTNode* $tmp1331;
    panda$core$Int64 $tmp1333;
    panda$core$Int64 $tmp1335;
    org$pandalanguage$pandac$ASTNode* $tmp1337;
    org$pandalanguage$pandac$ASTNode* $tmp1338;
    panda$core$Int64 $tmp1340;
    panda$core$Int64 $tmp1342;
    org$pandalanguage$pandac$ASTNode* $tmp1344;
    org$pandalanguage$pandac$ASTNode* $tmp1345;
    panda$core$Int64 $tmp1347;
    panda$core$Bit $tmp1348;
    panda$core$Int64 $tmp1350;
    org$pandalanguage$pandac$ASTNode* $tmp1352;
    org$pandalanguage$pandac$ASTNode* $tmp1353;
    panda$core$Int64 $tmp1355;
    panda$core$Bit $tmp1356;
    panda$core$Int64 $tmp1359;
    panda$core$Int64 $tmp1362;
    org$pandalanguage$pandac$ASTNode* $tmp1365;
    org$pandalanguage$pandac$ASTNode* $tmp1366;
    panda$core$Int64 $tmp1369;
    org$pandalanguage$pandac$ASTNode* $tmp1371;
    org$pandalanguage$pandac$ASTNode* $tmp1372;
    panda$core$Int64 $tmp1375;
    panda$core$String* name1380 = NULL;
    panda$core$String* $tmp1381;
    panda$core$String* $tmp1382;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1389;
    panda$core$Int64 $tmp1390;
    org$pandalanguage$pandac$ASTNode* expr1392 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1393;
    org$pandalanguage$pandac$ASTNode* $tmp1394;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1396;
    panda$core$Int64 $tmp1397;
    org$pandalanguage$pandac$ASTNode* $tmp1399;
    org$pandalanguage$pandac$ASTNode* $tmp1400;
    panda$core$Int64 $tmp1402;
    org$pandalanguage$pandac$ASTNode* $tmp1409;
    org$pandalanguage$pandac$ASTNode* $tmp1410;
    panda$core$Int64 $tmp1412;
    panda$core$String* $tmp1415;
    panda$core$String* $tmp1416;
    org$pandalanguage$pandac$ASTNode* $tmp1421;
    panda$core$Int64 $tmp1426;
    panda$core$Int64 $tmp1429;
    org$pandalanguage$pandac$ASTNode* $tmp1432;
    org$pandalanguage$pandac$ASTNode* $tmp1433;
    panda$core$Int64 $tmp1436;
    org$pandalanguage$pandac$ASTNode* $tmp1438;
    org$pandalanguage$pandac$ASTNode* $tmp1439;
    panda$core$String* $tmp1442;
    panda$core$String* $tmp1443;
    panda$core$String* $tmp1445;
    org$pandalanguage$pandac$ASTNode* $tmp1450;
    org$pandalanguage$pandac$parser$Token $tmp1241 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t1240 = $tmp1241;
    {
        $match$537_91242 = t1240.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1243, 48);
        panda$core$Bit $tmp1244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1243);
        if ($tmp1244.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1246 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            check1245 = $tmp1246.kind;
            bool $tmp1248 = self->allowLambdas.value;
            if (!$tmp1248) goto $l1249;
            panda$core$Int64$init$builtin_int64(&$tmp1250, 95);
            panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1245.$rawValue, $tmp1250);
            $tmp1248 = $tmp1251.value;
            $l1249:;
            panda$core$Bit $tmp1252 = { $tmp1248 };
            bool $tmp1247 = $tmp1252.value;
            if ($tmp1247) goto $l1253;
            panda$core$Int64$init$builtin_int64(&$tmp1254, 90);
            panda$core$Bit $tmp1255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1245.$rawValue, $tmp1254);
            $tmp1247 = $tmp1255.value;
            $l1253:;
            panda$core$Bit $tmp1256 = { $tmp1247 };
            if ($tmp1256.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1240);
                org$pandalanguage$pandac$ASTNode* $tmp1260 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1259 = $tmp1260;
                $tmp1258 = $tmp1259;
                $returnValue1257 = $tmp1258;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1258));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1259));
                return $returnValue1257;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1264 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1265, 20);
            panda$core$String* $tmp1267 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1240);
            $tmp1266 = $tmp1267;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1264, $tmp1265, t1240.position, $tmp1266);
            $tmp1263 = $tmp1264;
            $tmp1262 = $tmp1263;
            $returnValue1257 = $tmp1262;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1262));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1266));
            return $returnValue1257;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1269, 2);
        panda$core$Bit $tmp1270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1269);
        if ($tmp1270.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1273 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1274, 22);
            panda$core$String* $tmp1276 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1240);
            $tmp1275 = $tmp1276;
            panda$core$UInt64$nullable $tmp1277 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1275);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1273, $tmp1274, t1240.position, ((panda$core$UInt64) $tmp1277.value));
            $tmp1272 = $tmp1273;
            $tmp1271 = $tmp1272;
            $returnValue1257 = $tmp1271;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1271));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1272));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1275));
            return $returnValue1257;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1279, 3);
        panda$core$Bit $tmp1280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1279);
        if ($tmp1280.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1283 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1284, 22);
            panda$core$String* $tmp1287 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1240);
            $tmp1286 = $tmp1287;
            panda$core$Int64$init$builtin_int64(&$tmp1289, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1290, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1288, ((panda$core$Int64$nullable) { $tmp1289, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1290);
            panda$core$String* $tmp1291 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1286, $tmp1288);
            $tmp1285 = $tmp1291;
            panda$core$Int64$init$builtin_int64(&$tmp1292, 2);
            panda$core$UInt64$nullable $tmp1293 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1285, $tmp1292);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1283, $tmp1284, t1240.position, ((panda$core$UInt64) $tmp1293.value));
            $tmp1282 = $tmp1283;
            $tmp1281 = $tmp1282;
            $returnValue1257 = $tmp1281;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1281));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1282));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1285));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1286));
            return $returnValue1257;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1295, 4);
        panda$core$Bit $tmp1296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1295);
        if ($tmp1296.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1299 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1300, 22);
            panda$core$String* $tmp1303 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1240);
            $tmp1302 = $tmp1303;
            panda$core$Int64$init$builtin_int64(&$tmp1305, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1306, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1304, ((panda$core$Int64$nullable) { $tmp1305, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1306);
            panda$core$String* $tmp1307 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1302, $tmp1304);
            $tmp1301 = $tmp1307;
            panda$core$Int64$init$builtin_int64(&$tmp1308, 16);
            panda$core$UInt64$nullable $tmp1309 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1301, $tmp1308);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1299, $tmp1300, t1240.position, ((panda$core$UInt64) $tmp1309.value));
            $tmp1298 = $tmp1299;
            $tmp1297 = $tmp1298;
            $returnValue1257 = $tmp1297;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1297));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1298));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1301));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1302));
            return $returnValue1257;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1311, 5);
        panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1311);
        if ($tmp1312.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1315 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1316, 34);
            panda$core$String* $tmp1318 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1240);
            $tmp1317 = $tmp1318;
            panda$core$Real64$nullable $tmp1319 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp1317);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1315, $tmp1316, t1240.position, ((panda$core$Real64) $tmp1319.value));
            $tmp1314 = $tmp1315;
            $tmp1313 = $tmp1314;
            $returnValue1257 = $tmp1313;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1313));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1314));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1317));
            return $returnValue1257;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1321, 46);
        panda$core$Bit $tmp1322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1321);
        if ($tmp1322.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1325 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1326, 37);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1325, $tmp1326, t1240.position);
            $tmp1324 = $tmp1325;
            $tmp1323 = $tmp1324;
            $returnValue1257 = $tmp1323;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1323));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1324));
            return $returnValue1257;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1328, 47);
        panda$core$Bit $tmp1329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1328);
        if ($tmp1329.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1332 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1333, 39);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1332, $tmp1333, t1240.position);
            $tmp1331 = $tmp1332;
            $tmp1330 = $tmp1331;
            $returnValue1257 = $tmp1330;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1330));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
            return $returnValue1257;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1335, 43);
        panda$core$Bit $tmp1336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1335);
        if ($tmp1336.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1339 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1340, 28);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1339, $tmp1340, t1240.position);
            $tmp1338 = $tmp1339;
            $tmp1337 = $tmp1338;
            $returnValue1257 = $tmp1337;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1337));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1338));
            return $returnValue1257;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1342, 41);
        panda$core$Bit $tmp1343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1342);
        if ($tmp1343.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1346 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1347, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1348, true);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1346, $tmp1347, t1240.position, $tmp1348);
            $tmp1345 = $tmp1346;
            $tmp1344 = $tmp1345;
            $returnValue1257 = $tmp1344;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1344));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1345));
            return $returnValue1257;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1350, 42);
        panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1350);
        if ($tmp1351.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1354 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1355, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1356, false);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1354, $tmp1355, t1240.position, $tmp1356);
            $tmp1353 = $tmp1354;
            $tmp1352 = $tmp1353;
            $returnValue1257 = $tmp1352;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1352));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
            return $returnValue1257;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1359, 7);
        panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1359);
        bool $tmp1358 = $tmp1360.value;
        if ($tmp1358) goto $l1361;
        panda$core$Int64$init$builtin_int64(&$tmp1362, 6);
        panda$core$Bit $tmp1363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1362);
        $tmp1358 = $tmp1363.value;
        $l1361:;
        panda$core$Bit $tmp1364 = { $tmp1358 };
        if ($tmp1364.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1240);
            org$pandalanguage$pandac$ASTNode* $tmp1367 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1366 = $tmp1367;
            $tmp1365 = $tmp1366;
            $returnValue1257 = $tmp1365;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1365));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1366));
            return $returnValue1257;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1369, 103);
        panda$core$Bit $tmp1370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1369);
        if ($tmp1370.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1240);
            org$pandalanguage$pandac$ASTNode* $tmp1373 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1372 = $tmp1373;
            $tmp1371 = $tmp1372;
            $returnValue1257 = $tmp1371;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
            return $returnValue1257;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1375, 13);
        panda$core$Bit $tmp1376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1375);
        if ($tmp1376.value) {
        {
            int $tmp1379;
            {
                panda$core$String* $tmp1383 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1240);
                $tmp1382 = $tmp1383;
                $tmp1381 = $tmp1382;
                name1380 = $tmp1381;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1381));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
                panda$core$Bit $tmp1385 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1380, &$s1384);
                if ($tmp1385.value) {
                {
                    int $tmp1388;
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1390, 103);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1389, $tmp1390);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1389, &$s1391);
                        org$pandalanguage$pandac$ASTNode* $tmp1395 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1394 = $tmp1395;
                        $tmp1393 = $tmp1394;
                        expr1392 = $tmp1393;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1393));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1394));
                        panda$core$Int64$init$builtin_int64(&$tmp1397, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1396, $tmp1397);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1396, &$s1398);
                        org$pandalanguage$pandac$ASTNode* $tmp1401 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1402, 2);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1401, $tmp1402, t1240.position, expr1392);
                        $tmp1400 = $tmp1401;
                        $tmp1399 = $tmp1400;
                        $returnValue1257 = $tmp1399;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1399));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1400));
                        $tmp1388 = 0;
                        goto $l1386;
                        $l1403:;
                        $tmp1379 = 0;
                        goto $l1377;
                        $l1404:;
                        return $returnValue1257;
                    }
                    $l1386:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1392));
                    expr1392 = NULL;
                    switch ($tmp1388) {
                        case 0: goto $l1403;
                    }
                    $l1406:;
                }
                }
                else {
                panda$core$Bit $tmp1408 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1380, &$s1407);
                if ($tmp1408.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1411 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1412, 3);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1411, $tmp1412, t1240.position);
                    $tmp1410 = $tmp1411;
                    $tmp1409 = $tmp1410;
                    $returnValue1257 = $tmp1409;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1409));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1410));
                    $tmp1379 = 1;
                    goto $l1377;
                    $l1413:;
                    return $returnValue1257;
                }
                }
                }
                panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1417, name1380);
                $tmp1416 = $tmp1418;
                panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, &$s1419);
                $tmp1415 = $tmp1420;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1240, $tmp1415);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1415));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1416));
                $tmp1421 = NULL;
                $returnValue1257 = $tmp1421;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1421));
                $tmp1379 = 2;
                goto $l1377;
                $l1422:;
                return $returnValue1257;
            }
            $l1377:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1380));
            name1380 = NULL;
            switch ($tmp1379) {
                case 1: goto $l1413;
                case 2: goto $l1422;
                case 0: goto $l1404;
            }
            $l1424:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1426, 20);
        panda$core$Bit $tmp1427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1426);
        bool $tmp1425 = $tmp1427.value;
        if ($tmp1425) goto $l1428;
        panda$core$Int64$init$builtin_int64(&$tmp1429, 21);
        panda$core$Bit $tmp1430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1429);
        $tmp1425 = $tmp1430.value;
        $l1428:;
        panda$core$Bit $tmp1431 = { $tmp1425 };
        if ($tmp1431.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1240);
            org$pandalanguage$pandac$ASTNode* $tmp1434 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1433 = $tmp1434;
            $tmp1432 = $tmp1433;
            $returnValue1257 = $tmp1432;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1432));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
            return $returnValue1257;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1436, 54);
        panda$core$Bit $tmp1437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$537_91242.$rawValue, $tmp1436);
        if ($tmp1437.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1240);
            org$pandalanguage$pandac$ASTNode* $tmp1440 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1439 = $tmp1440;
            $tmp1438 = $tmp1439;
            $returnValue1257 = $tmp1438;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1438));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1439));
            return $returnValue1257;
        }
        }
        else {
        {
            panda$core$String* $tmp1446 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1240);
            $tmp1445 = $tmp1446;
            panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1444, $tmp1445);
            $tmp1443 = $tmp1447;
            panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1443, &$s1448);
            $tmp1442 = $tmp1449;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1240, $tmp1442);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1442));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1443));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1445));
            $tmp1450 = NULL;
            $returnValue1257 = $tmp1450;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1450));
            return $returnValue1257;
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
    org$pandalanguage$pandac$ASTNode* $match$596_91455 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1456;
    panda$core$Int64 $tmp1457;
    panda$core$String* text1459 = NULL;
    panda$core$String* $returnValue1461;
    panda$core$String* $tmp1462;
    panda$core$Int64 $tmp1465;
    org$pandalanguage$pandac$ASTNode* base1467 = NULL;
    panda$core$String* field1469 = NULL;
    panda$core$String* result1474 = NULL;
    panda$core$String* $tmp1475;
    panda$core$String* $tmp1476;
    panda$core$String* $tmp1478;
    panda$core$String* $tmp1479;
    panda$core$String* $tmp1480;
    panda$core$String* $tmp1481;
    panda$core$String* $tmp1482;
    panda$core$String* $tmp1486;
    panda$core$String* $tmp1491;
    int $tmp1454;
    {
        $tmp1456 = p_expr;
        $match$596_91455 = $tmp1456;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1456));
        panda$core$Int64$init$builtin_int64(&$tmp1457, 20);
        panda$core$Bit $tmp1458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596_91455->$rawValue, $tmp1457);
        if ($tmp1458.value) {
        {
            panda$core$String** $tmp1460 = ((panda$core$String**) ((char*) $match$596_91455->$data + 16));
            text1459 = *$tmp1460;
            $tmp1462 = text1459;
            $returnValue1461 = $tmp1462;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1462));
            $tmp1454 = 0;
            goto $l1452;
            $l1463:;
            return $returnValue1461;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1465, 15);
        panda$core$Bit $tmp1466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$596_91455->$rawValue, $tmp1465);
        if ($tmp1466.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1468 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$596_91455->$data + 16));
            base1467 = *$tmp1468;
            panda$core$String** $tmp1470 = ((panda$core$String**) ((char*) $match$596_91455->$data + 24));
            field1469 = *$tmp1470;
            int $tmp1473;
            {
                panda$core$String* $tmp1477 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base1467);
                $tmp1476 = $tmp1477;
                $tmp1475 = $tmp1476;
                result1474 = $tmp1475;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1475));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
                if (((panda$core$Bit) { result1474 != NULL }).value) {
                {
                    {
                        $tmp1479 = result1474;
                        $tmp1478 = $tmp1479;
                        panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1483, field1469);
                        $tmp1482 = $tmp1484;
                        panda$core$String* $tmp1485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1474, $tmp1482);
                        $tmp1481 = $tmp1485;
                        $tmp1480 = $tmp1481;
                        result1474 = $tmp1480;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1482));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1478));
                    }
                }
                }
                $tmp1486 = result1474;
                $returnValue1461 = $tmp1486;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1486));
                $tmp1473 = 0;
                goto $l1471;
                $l1487:;
                $tmp1454 = 1;
                goto $l1452;
                $l1488:;
                return $returnValue1461;
            }
            $l1471:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1474));
            result1474 = NULL;
            switch ($tmp1473) {
                case 0: goto $l1487;
            }
            $l1490:;
        }
        }
        else {
        {
            $tmp1491 = NULL;
            $returnValue1461 = $tmp1491;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1491));
            $tmp1454 = 2;
            goto $l1452;
            $l1492:;
            return $returnValue1461;
        }
        }
        }
    }
    $tmp1454 = -1;
    goto $l1452;
    $l1452:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1456));
    switch ($tmp1454) {
        case 2: goto $l1492;
        case 1: goto $l1488;
        case -1: goto $l1494;
        case 0: goto $l1463;
    }
    $l1494:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name1495;
    org$pandalanguage$pandac$parser$Token$Kind $match$616_91497;
    panda$core$Int64 $tmp1519;
    panda$core$Int64 $tmp1522;
    panda$core$Int64 $tmp1526;
    panda$core$Int64 $tmp1530;
    panda$core$Int64 $tmp1534;
    panda$core$Int64 $tmp1538;
    panda$core$Int64 $tmp1542;
    panda$core$Int64 $tmp1546;
    panda$core$Int64 $tmp1550;
    panda$core$Int64 $tmp1554;
    panda$core$Int64 $tmp1558;
    panda$core$Int64 $tmp1562;
    panda$core$Int64 $tmp1566;
    panda$core$Int64 $tmp1570;
    panda$core$Int64 $tmp1574;
    panda$core$Int64 $tmp1578;
    panda$core$Int64 $tmp1582;
    panda$core$Int64 $tmp1586;
    panda$core$Int64 $tmp1590;
    panda$core$Int64 $tmp1594;
    panda$core$Int64 $tmp1598;
    panda$core$Int64 $tmp1602;
    panda$core$String* $returnValue1605;
    panda$core$String* $tmp1606;
    panda$core$String* $tmp1607;
    panda$core$Int64 $tmp1610;
    org$pandalanguage$pandac$parser$Token token1612;
    panda$core$Int64 $tmp1614;
    panda$core$String* $tmp1616;
    panda$core$String* $tmp1619;
    panda$core$Int64 $tmp1622;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1624;
    panda$core$Int64 $tmp1625;
    panda$core$String* $tmp1628;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1630;
    panda$core$Int64 $tmp1631;
    panda$core$String* $tmp1633;
    panda$core$String* $tmp1636;
    panda$core$String* $tmp1639;
    panda$core$String* $tmp1640;
    panda$core$String* $tmp1642;
    panda$core$String* $tmp1647;
    org$pandalanguage$pandac$parser$Token $tmp1496 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name1495 = $tmp1496;
    {
        $match$616_91497 = name1495.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1519, 48);
        panda$core$Bit $tmp1520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1519);
        bool $tmp1518 = $tmp1520.value;
        if ($tmp1518) goto $l1521;
        panda$core$Int64$init$builtin_int64(&$tmp1522, 51);
        panda$core$Bit $tmp1523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1522);
        $tmp1518 = $tmp1523.value;
        $l1521:;
        panda$core$Bit $tmp1524 = { $tmp1518 };
        bool $tmp1517 = $tmp1524.value;
        if ($tmp1517) goto $l1525;
        panda$core$Int64$init$builtin_int64(&$tmp1526, 52);
        panda$core$Bit $tmp1527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1526);
        $tmp1517 = $tmp1527.value;
        $l1525:;
        panda$core$Bit $tmp1528 = { $tmp1517 };
        bool $tmp1516 = $tmp1528.value;
        if ($tmp1516) goto $l1529;
        panda$core$Int64$init$builtin_int64(&$tmp1530, 53);
        panda$core$Bit $tmp1531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1530);
        $tmp1516 = $tmp1531.value;
        $l1529:;
        panda$core$Bit $tmp1532 = { $tmp1516 };
        bool $tmp1515 = $tmp1532.value;
        if ($tmp1515) goto $l1533;
        panda$core$Int64$init$builtin_int64(&$tmp1534, 54);
        panda$core$Bit $tmp1535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1534);
        $tmp1515 = $tmp1535.value;
        $l1533:;
        panda$core$Bit $tmp1536 = { $tmp1515 };
        bool $tmp1514 = $tmp1536.value;
        if ($tmp1514) goto $l1537;
        panda$core$Int64$init$builtin_int64(&$tmp1538, 55);
        panda$core$Bit $tmp1539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1538);
        $tmp1514 = $tmp1539.value;
        $l1537:;
        panda$core$Bit $tmp1540 = { $tmp1514 };
        bool $tmp1513 = $tmp1540.value;
        if ($tmp1513) goto $l1541;
        panda$core$Int64$init$builtin_int64(&$tmp1542, 57);
        panda$core$Bit $tmp1543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1542);
        $tmp1513 = $tmp1543.value;
        $l1541:;
        panda$core$Bit $tmp1544 = { $tmp1513 };
        bool $tmp1512 = $tmp1544.value;
        if ($tmp1512) goto $l1545;
        panda$core$Int64$init$builtin_int64(&$tmp1546, 58);
        panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1546);
        $tmp1512 = $tmp1547.value;
        $l1545:;
        panda$core$Bit $tmp1548 = { $tmp1512 };
        bool $tmp1511 = $tmp1548.value;
        if ($tmp1511) goto $l1549;
        panda$core$Int64$init$builtin_int64(&$tmp1550, 59);
        panda$core$Bit $tmp1551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1550);
        $tmp1511 = $tmp1551.value;
        $l1549:;
        panda$core$Bit $tmp1552 = { $tmp1511 };
        bool $tmp1510 = $tmp1552.value;
        if ($tmp1510) goto $l1553;
        panda$core$Int64$init$builtin_int64(&$tmp1554, 62);
        panda$core$Bit $tmp1555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1554);
        $tmp1510 = $tmp1555.value;
        $l1553:;
        panda$core$Bit $tmp1556 = { $tmp1510 };
        bool $tmp1509 = $tmp1556.value;
        if ($tmp1509) goto $l1557;
        panda$core$Int64$init$builtin_int64(&$tmp1558, 65);
        panda$core$Bit $tmp1559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1558);
        $tmp1509 = $tmp1559.value;
        $l1557:;
        panda$core$Bit $tmp1560 = { $tmp1509 };
        bool $tmp1508 = $tmp1560.value;
        if ($tmp1508) goto $l1561;
        panda$core$Int64$init$builtin_int64(&$tmp1562, 64);
        panda$core$Bit $tmp1563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1562);
        $tmp1508 = $tmp1563.value;
        $l1561:;
        panda$core$Bit $tmp1564 = { $tmp1508 };
        bool $tmp1507 = $tmp1564.value;
        if ($tmp1507) goto $l1565;
        panda$core$Int64$init$builtin_int64(&$tmp1566, 56);
        panda$core$Bit $tmp1567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1566);
        $tmp1507 = $tmp1567.value;
        $l1565:;
        panda$core$Bit $tmp1568 = { $tmp1507 };
        bool $tmp1506 = $tmp1568.value;
        if ($tmp1506) goto $l1569;
        panda$core$Int64$init$builtin_int64(&$tmp1570, 66);
        panda$core$Bit $tmp1571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1570);
        $tmp1506 = $tmp1571.value;
        $l1569:;
        panda$core$Bit $tmp1572 = { $tmp1506 };
        bool $tmp1505 = $tmp1572.value;
        if ($tmp1505) goto $l1573;
        panda$core$Int64$init$builtin_int64(&$tmp1574, 67);
        panda$core$Bit $tmp1575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1574);
        $tmp1505 = $tmp1575.value;
        $l1573:;
        panda$core$Bit $tmp1576 = { $tmp1505 };
        bool $tmp1504 = $tmp1576.value;
        if ($tmp1504) goto $l1577;
        panda$core$Int64$init$builtin_int64(&$tmp1578, 68);
        panda$core$Bit $tmp1579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1578);
        $tmp1504 = $tmp1579.value;
        $l1577:;
        panda$core$Bit $tmp1580 = { $tmp1504 };
        bool $tmp1503 = $tmp1580.value;
        if ($tmp1503) goto $l1581;
        panda$core$Int64$init$builtin_int64(&$tmp1582, 69);
        panda$core$Bit $tmp1583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1582);
        $tmp1503 = $tmp1583.value;
        $l1581:;
        panda$core$Bit $tmp1584 = { $tmp1503 };
        bool $tmp1502 = $tmp1584.value;
        if ($tmp1502) goto $l1585;
        panda$core$Int64$init$builtin_int64(&$tmp1586, 70);
        panda$core$Bit $tmp1587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1586);
        $tmp1502 = $tmp1587.value;
        $l1585:;
        panda$core$Bit $tmp1588 = { $tmp1502 };
        bool $tmp1501 = $tmp1588.value;
        if ($tmp1501) goto $l1589;
        panda$core$Int64$init$builtin_int64(&$tmp1590, 71);
        panda$core$Bit $tmp1591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1590);
        $tmp1501 = $tmp1591.value;
        $l1589:;
        panda$core$Bit $tmp1592 = { $tmp1501 };
        bool $tmp1500 = $tmp1592.value;
        if ($tmp1500) goto $l1593;
        panda$core$Int64$init$builtin_int64(&$tmp1594, 49);
        panda$core$Bit $tmp1595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1594);
        $tmp1500 = $tmp1595.value;
        $l1593:;
        panda$core$Bit $tmp1596 = { $tmp1500 };
        bool $tmp1499 = $tmp1596.value;
        if ($tmp1499) goto $l1597;
        panda$core$Int64$init$builtin_int64(&$tmp1598, 50);
        panda$core$Bit $tmp1599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1598);
        $tmp1499 = $tmp1599.value;
        $l1597:;
        panda$core$Bit $tmp1600 = { $tmp1499 };
        bool $tmp1498 = $tmp1600.value;
        if ($tmp1498) goto $l1601;
        panda$core$Int64$init$builtin_int64(&$tmp1602, 72);
        panda$core$Bit $tmp1603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1602);
        $tmp1498 = $tmp1603.value;
        $l1601:;
        panda$core$Bit $tmp1604 = { $tmp1498 };
        if ($tmp1604.value) {
        {
            panda$core$String* $tmp1608 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1495);
            $tmp1607 = $tmp1608;
            $tmp1606 = $tmp1607;
            $returnValue1605 = $tmp1606;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1606));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1607));
            return $returnValue1605;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1610, 63);
        panda$core$Bit $tmp1611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1610);
        if ($tmp1611.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1613 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token1612 = $tmp1613;
            panda$core$Int64$init$builtin_int64(&$tmp1614, 63);
            panda$core$Bit $tmp1615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1612.kind.$rawValue, $tmp1614);
            if ($tmp1615.value) {
            {
                $tmp1616 = &$s1617;
                $returnValue1605 = $tmp1616;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1616));
                return $returnValue1605;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1612);
                $tmp1619 = &$s1620;
                $returnValue1605 = $tmp1619;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1619));
                return $returnValue1605;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1622, 101);
        panda$core$Bit $tmp1623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91497.$rawValue, $tmp1622);
        if ($tmp1623.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1625, 102);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1624, $tmp1625);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1627 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1624, &$s1626);
            if (((panda$core$Bit) { !$tmp1627.nonnull }).value) {
            {
                $tmp1628 = NULL;
                $returnValue1605 = $tmp1628;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1628));
                return $returnValue1605;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp1631, 73);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1630, $tmp1631);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1632 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1630);
            if (((panda$core$Bit) { $tmp1632.nonnull }).value) {
            {
                $tmp1633 = &$s1634;
                $returnValue1605 = $tmp1633;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1633));
                return $returnValue1605;
            }
            }
            $tmp1636 = &$s1637;
            $returnValue1605 = $tmp1636;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1636));
            return $returnValue1605;
        }
        }
        else {
        {
            panda$core$String* $tmp1643 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1495);
            $tmp1642 = $tmp1643;
            panda$core$String* $tmp1644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1641, $tmp1642);
            $tmp1640 = $tmp1644;
            panda$core$String* $tmp1646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1640, &$s1645);
            $tmp1639 = $tmp1646;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name1495, $tmp1639);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1639));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1640));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1642));
            $tmp1647 = NULL;
            $returnValue1605 = $tmp1647;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1647));
            return $returnValue1605;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue1649;
    org$pandalanguage$pandac$ASTNode* $tmp1650;
    org$pandalanguage$pandac$ASTNode* $tmp1651;
    panda$core$Bit $tmp1652;
    panda$core$Bit$init$builtin_bit(&$tmp1652, true);
    org$pandalanguage$pandac$ASTNode* $tmp1653 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1652);
    $tmp1651 = $tmp1653;
    $tmp1650 = $tmp1651;
    $returnValue1649 = $tmp1650;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1650));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1651));
    return $returnValue1649;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1658;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1659;
    panda$core$Int64 $tmp1660;
    org$pandalanguage$pandac$ASTNode* $returnValue1663;
    org$pandalanguage$pandac$ASTNode* $tmp1664;
    panda$collections$Array* subtypes1667 = NULL;
    panda$collections$Array* $tmp1668;
    panda$collections$Array* $tmp1669;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1671;
    panda$core$Int64 $tmp1672;
    org$pandalanguage$pandac$ASTNode* t1677 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1678;
    org$pandalanguage$pandac$ASTNode* $tmp1679;
    org$pandalanguage$pandac$ASTNode* $tmp1681;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1688;
    panda$core$Int64 $tmp1689;
    org$pandalanguage$pandac$ASTNode* $tmp1691;
    org$pandalanguage$pandac$ASTNode* $tmp1692;
    org$pandalanguage$pandac$ASTNode* $tmp1693;
    org$pandalanguage$pandac$ASTNode* $tmp1695;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1699;
    panda$core$Int64 $tmp1700;
    org$pandalanguage$pandac$ASTNode* $tmp1703;
    org$pandalanguage$pandac$parser$Token yields1708;
    org$pandalanguage$pandac$parser$Token$Kind $match$680_91710;
    panda$core$Int64 $tmp1714;
    panda$core$Int64 $tmp1717;
    panda$core$Int64 $tmp1721;
    panda$core$Int64 $tmp1725;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1731;
    panda$core$Int64 $tmp1732;
    org$pandalanguage$pandac$ASTNode* $tmp1735;
    panda$collections$Array* returnTypes1739 = NULL;
    panda$collections$Array* $tmp1740;
    panda$collections$Array* $tmp1741;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1743;
    panda$core$Int64 $tmp1744;
    org$pandalanguage$pandac$ASTNode* t1749 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1750;
    org$pandalanguage$pandac$ASTNode* $tmp1751;
    org$pandalanguage$pandac$ASTNode* $tmp1753;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1761;
    panda$core$Int64 $tmp1762;
    org$pandalanguage$pandac$ASTNode* $tmp1764;
    org$pandalanguage$pandac$ASTNode* $tmp1765;
    org$pandalanguage$pandac$ASTNode* $tmp1766;
    org$pandalanguage$pandac$ASTNode* $tmp1768;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1773;
    panda$core$Int64 $tmp1774;
    org$pandalanguage$pandac$ASTNode* $tmp1777;
    org$pandalanguage$pandac$ASTNode* returnType1783 = NULL;
    panda$core$Int64 $tmp1785;
    org$pandalanguage$pandac$ASTNode* $tmp1787;
    org$pandalanguage$pandac$ASTNode* $tmp1788;
    panda$core$Int64 $tmp1790;
    org$pandalanguage$pandac$ASTNode* $tmp1792;
    org$pandalanguage$pandac$ASTNode* $tmp1793;
    panda$core$Object* $tmp1794;
    panda$core$Int64 $tmp1795;
    org$pandalanguage$pandac$ASTNode* $tmp1798;
    org$pandalanguage$pandac$ASTNode* $tmp1802;
    org$pandalanguage$pandac$ASTNode* $tmp1803;
    panda$core$Int64 $tmp1805;
    panda$collections$ImmutableArray* $tmp1806;
    org$pandalanguage$pandac$ASTNode* $tmp1813;
    int $tmp1657;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1660, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1659, $tmp1660);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1662 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1659, &$s1661);
        start1658 = $tmp1662;
        if (((panda$core$Bit) { !start1658.nonnull }).value) {
        {
            $tmp1664 = NULL;
            $returnValue1663 = $tmp1664;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1664));
            $tmp1657 = 0;
            goto $l1655;
            $l1665:;
            return $returnValue1663;
        }
        }
        panda$collections$Array* $tmp1670 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1670);
        $tmp1669 = $tmp1670;
        $tmp1668 = $tmp1669;
        subtypes1667 = $tmp1668;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1668));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1669));
        panda$core$Int64$init$builtin_int64(&$tmp1672, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1671, $tmp1672);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1673 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1671);
        if (((panda$core$Bit) { !$tmp1673.nonnull }).value) {
        {
            int $tmp1676;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1680 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1679 = $tmp1680;
                $tmp1678 = $tmp1679;
                t1677 = $tmp1678;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1678));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1679));
                if (((panda$core$Bit) { t1677 == NULL }).value) {
                {
                    $tmp1681 = NULL;
                    $returnValue1663 = $tmp1681;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1681));
                    $tmp1676 = 0;
                    goto $l1674;
                    $l1682:;
                    $tmp1657 = 1;
                    goto $l1655;
                    $l1683:;
                    return $returnValue1663;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1667, ((panda$core$Object*) t1677));
                $l1685:;
                panda$core$Int64$init$builtin_int64(&$tmp1689, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1688, $tmp1689);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1690 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1688);
                bool $tmp1687 = ((panda$core$Bit) { $tmp1690.nonnull }).value;
                if (!$tmp1687) goto $l1686;
                {
                    {
                        $tmp1691 = t1677;
                        org$pandalanguage$pandac$ASTNode* $tmp1694 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1693 = $tmp1694;
                        $tmp1692 = $tmp1693;
                        t1677 = $tmp1692;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1692));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1693));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1691));
                    }
                    if (((panda$core$Bit) { t1677 == NULL }).value) {
                    {
                        $tmp1695 = NULL;
                        $returnValue1663 = $tmp1695;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1695));
                        $tmp1676 = 1;
                        goto $l1674;
                        $l1696:;
                        $tmp1657 = 2;
                        goto $l1655;
                        $l1697:;
                        return $returnValue1663;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1667, ((panda$core$Object*) t1677));
                }
                goto $l1685;
                $l1686:;
                panda$core$Int64$init$builtin_int64(&$tmp1700, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1699, $tmp1700);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1702 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1699, &$s1701);
                if (((panda$core$Bit) { !$tmp1702.nonnull }).value) {
                {
                    $tmp1703 = NULL;
                    $returnValue1663 = $tmp1703;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1703));
                    $tmp1676 = 2;
                    goto $l1674;
                    $l1704:;
                    $tmp1657 = 3;
                    goto $l1655;
                    $l1705:;
                    return $returnValue1663;
                }
                }
            }
            $tmp1676 = -1;
            goto $l1674;
            $l1674:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1677));
            t1677 = NULL;
            switch ($tmp1676) {
                case 0: goto $l1682;
                case 1: goto $l1696;
                case -1: goto $l1707;
                case 2: goto $l1704;
            }
            $l1707:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1709 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1708 = $tmp1709;
        {
            $match$680_91710 = yields1708.kind;
            panda$core$Int64$init$builtin_int64(&$tmp1714, 90);
            panda$core$Bit $tmp1715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$680_91710.$rawValue, $tmp1714);
            bool $tmp1713 = $tmp1715.value;
            if ($tmp1713) goto $l1716;
            panda$core$Int64$init$builtin_int64(&$tmp1717, 91);
            panda$core$Bit $tmp1718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$680_91710.$rawValue, $tmp1717);
            $tmp1713 = $tmp1718.value;
            $l1716:;
            panda$core$Bit $tmp1719 = { $tmp1713 };
            bool $tmp1712 = $tmp1719.value;
            if ($tmp1712) goto $l1720;
            panda$core$Int64$init$builtin_int64(&$tmp1721, 92);
            panda$core$Bit $tmp1722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$680_91710.$rawValue, $tmp1721);
            $tmp1712 = $tmp1722.value;
            $l1720:;
            panda$core$Bit $tmp1723 = { $tmp1712 };
            bool $tmp1711 = $tmp1723.value;
            if ($tmp1711) goto $l1724;
            panda$core$Int64$init$builtin_int64(&$tmp1725, 93);
            panda$core$Bit $tmp1726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$680_91710.$rawValue, $tmp1725);
            $tmp1711 = $tmp1726.value;
            $l1724:;
            panda$core$Bit $tmp1727 = { $tmp1711 };
            if ($tmp1727.value) {
            {
                int $tmp1730;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp1732, 103);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1731, $tmp1732);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1734 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1731, &$s1733);
                    if (((panda$core$Bit) { !$tmp1734.nonnull }).value) {
                    {
                        $tmp1735 = NULL;
                        $returnValue1663 = $tmp1735;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1735));
                        $tmp1730 = 0;
                        goto $l1728;
                        $l1736:;
                        $tmp1657 = 4;
                        goto $l1655;
                        $l1737:;
                        return $returnValue1663;
                    }
                    }
                    panda$collections$Array* $tmp1742 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1742);
                    $tmp1741 = $tmp1742;
                    $tmp1740 = $tmp1741;
                    returnTypes1739 = $tmp1740;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1740));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1741));
                    panda$core$Int64$init$builtin_int64(&$tmp1744, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1743, $tmp1744);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1745 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1743);
                    if (((panda$core$Bit) { !$tmp1745.nonnull }).value) {
                    {
                        int $tmp1748;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1752 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1751 = $tmp1752;
                            $tmp1750 = $tmp1751;
                            t1749 = $tmp1750;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1750));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1751));
                            if (((panda$core$Bit) { t1749 == NULL }).value) {
                            {
                                $tmp1753 = NULL;
                                $returnValue1663 = $tmp1753;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1753));
                                $tmp1748 = 0;
                                goto $l1746;
                                $l1754:;
                                $tmp1730 = 1;
                                goto $l1728;
                                $l1755:;
                                $tmp1657 = 5;
                                goto $l1655;
                                $l1756:;
                                return $returnValue1663;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1739, ((panda$core$Object*) t1749));
                            $l1758:;
                            panda$core$Int64$init$builtin_int64(&$tmp1762, 105);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1761, $tmp1762);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1763 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1761);
                            bool $tmp1760 = ((panda$core$Bit) { $tmp1763.nonnull }).value;
                            if (!$tmp1760) goto $l1759;
                            {
                                {
                                    $tmp1764 = t1749;
                                    org$pandalanguage$pandac$ASTNode* $tmp1767 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1766 = $tmp1767;
                                    $tmp1765 = $tmp1766;
                                    t1749 = $tmp1765;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1765));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1766));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1764));
                                }
                                if (((panda$core$Bit) { t1749 == NULL }).value) {
                                {
                                    $tmp1768 = NULL;
                                    $returnValue1663 = $tmp1768;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1768));
                                    $tmp1748 = 1;
                                    goto $l1746;
                                    $l1769:;
                                    $tmp1730 = 2;
                                    goto $l1728;
                                    $l1770:;
                                    $tmp1657 = 6;
                                    goto $l1655;
                                    $l1771:;
                                    return $returnValue1663;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1739, ((panda$core$Object*) t1749));
                            }
                            goto $l1758;
                            $l1759:;
                            panda$core$Int64$init$builtin_int64(&$tmp1774, 104);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1773, $tmp1774);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1776 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1773, &$s1775);
                            if (((panda$core$Bit) { !$tmp1776.nonnull }).value) {
                            {
                                $tmp1777 = NULL;
                                $returnValue1663 = $tmp1777;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1777));
                                $tmp1748 = 2;
                                goto $l1746;
                                $l1778:;
                                $tmp1730 = 3;
                                goto $l1728;
                                $l1779:;
                                $tmp1657 = 7;
                                goto $l1655;
                                $l1780:;
                                return $returnValue1663;
                            }
                            }
                        }
                        $tmp1748 = -1;
                        goto $l1746;
                        $l1746:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1749));
                        t1749 = NULL;
                        switch ($tmp1748) {
                            case -1: goto $l1782;
                            case 1: goto $l1769;
                            case 2: goto $l1778;
                            case 0: goto $l1754;
                        }
                        $l1782:;
                    }
                    }
                    memset(&returnType1783, 0, sizeof(returnType1783));
                    panda$core$Int64 $tmp1784 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1739);
                    panda$core$Int64$init$builtin_int64(&$tmp1785, 0);
                    panda$core$Bit $tmp1786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1785);
                    if ($tmp1786.value) {
                    {
                        {
                            $tmp1787 = returnType1783;
                            $tmp1788 = NULL;
                            returnType1783 = $tmp1788;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1788));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1787));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1789 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1739);
                    panda$core$Int64$init$builtin_int64(&$tmp1790, 1);
                    panda$core$Bit $tmp1791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1789, $tmp1790);
                    if ($tmp1791.value) {
                    {
                        {
                            $tmp1792 = returnType1783;
                            panda$core$Int64$init$builtin_int64(&$tmp1795, 0);
                            panda$core$Object* $tmp1796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1739, $tmp1795);
                            $tmp1794 = $tmp1796;
                            $tmp1793 = ((org$pandalanguage$pandac$ASTNode*) $tmp1794);
                            returnType1783 = $tmp1793;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1793));
                            panda$core$Panda$unref$panda$core$Object($tmp1794);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1792));
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1658.value), &$s1797);
                        $tmp1798 = NULL;
                        $returnValue1663 = $tmp1798;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1798));
                        $tmp1730 = 4;
                        goto $l1728;
                        $l1799:;
                        $tmp1657 = 8;
                        goto $l1655;
                        $l1800:;
                        return $returnValue1663;
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1804 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1805, 27);
                    panda$collections$ImmutableArray* $tmp1807 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1667);
                    $tmp1806 = $tmp1807;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1804, $tmp1805, ((org$pandalanguage$pandac$parser$Token) start1658.value).position, yields1708.kind, $tmp1806, returnType1783);
                    $tmp1803 = $tmp1804;
                    $tmp1802 = $tmp1803;
                    $returnValue1663 = $tmp1802;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1802));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1803));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1806));
                    $tmp1730 = 5;
                    goto $l1728;
                    $l1808:;
                    $tmp1657 = 9;
                    goto $l1655;
                    $l1809:;
                    return $returnValue1663;
                }
                $l1728:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1783));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1739));
                returnTypes1739 = NULL;
                switch ($tmp1730) {
                    case 1: goto $l1755;
                    case 0: goto $l1736;
                    case 5: goto $l1808;
                    case 4: goto $l1799;
                    case 2: goto $l1770;
                    case 3: goto $l1779;
                }
                $l1811:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1658.value), &$s1812);
                $tmp1813 = NULL;
                $returnValue1663 = $tmp1813;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1813));
                $tmp1657 = 10;
                goto $l1655;
                $l1814:;
                return $returnValue1663;
            }
            }
        }
    }
    $tmp1657 = -1;
    goto $l1655;
    $l1655:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1667));
    subtypes1667 = NULL;
    switch ($tmp1657) {
        case 5: goto $l1756;
        case 8: goto $l1800;
        case -1: goto $l1816;
        case 6: goto $l1771;
        case 10: goto $l1814;
        case 3: goto $l1705;
        case 4: goto $l1737;
        case 9: goto $l1809;
        case 1: goto $l1683;
        case 0: goto $l1665;
        case 2: goto $l1697;
        case 7: goto $l1780;
    }
    $l1816:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* result1820 = NULL;
    panda$core$Int64 $tmp1822;
    org$pandalanguage$pandac$ASTNode* $tmp1824;
    org$pandalanguage$pandac$ASTNode* $tmp1825;
    org$pandalanguage$pandac$ASTNode* $tmp1826;
    org$pandalanguage$pandac$ASTNode* $returnValue1828;
    org$pandalanguage$pandac$ASTNode* $tmp1829;
    org$pandalanguage$pandac$parser$Token$nullable start1835;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1836;
    panda$core$Int64 $tmp1837;
    org$pandalanguage$pandac$ASTNode* $tmp1840;
    panda$core$MutableString* name1844 = NULL;
    panda$core$MutableString* $tmp1845;
    panda$core$MutableString* $tmp1846;
    panda$core$String* $tmp1848;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1853;
    panda$core$Int64 $tmp1854;
    org$pandalanguage$pandac$parser$Token$nullable id1856;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1857;
    panda$core$Int64 $tmp1858;
    org$pandalanguage$pandac$ASTNode* $tmp1861;
    panda$core$Char8 $tmp1865;
    panda$core$UInt8 $tmp1866;
    panda$core$String* $tmp1867;
    panda$core$String* finalName1869 = NULL;
    panda$core$String* $tmp1870;
    panda$core$String* $tmp1871;
    org$pandalanguage$pandac$ASTNode* $tmp1873;
    org$pandalanguage$pandac$ASTNode* $tmp1874;
    org$pandalanguage$pandac$ASTNode* $tmp1875;
    panda$core$Int64 $tmp1877;
    panda$core$Int64 $tmp1879;
    panda$collections$Array* children1884 = NULL;
    panda$collections$Array* $tmp1885;
    panda$collections$Array* $tmp1886;
    org$pandalanguage$pandac$ASTNode* t1888 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1889;
    org$pandalanguage$pandac$ASTNode* $tmp1890;
    panda$core$Bit $tmp1891;
    org$pandalanguage$pandac$ASTNode* $tmp1893;
    org$pandalanguage$pandac$ASTNode* $tmp1898;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1906;
    panda$core$Int64 $tmp1907;
    org$pandalanguage$pandac$ASTNode* $tmp1909;
    org$pandalanguage$pandac$ASTNode* $tmp1910;
    org$pandalanguage$pandac$ASTNode* $tmp1911;
    panda$core$Bit $tmp1912;
    org$pandalanguage$pandac$ASTNode* $tmp1914;
    org$pandalanguage$pandac$ASTNode* $tmp1919;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1924;
    panda$core$Int64 $tmp1925;
    org$pandalanguage$pandac$ASTNode* $tmp1928;
    org$pandalanguage$pandac$ASTNode* $tmp1933;
    org$pandalanguage$pandac$ASTNode* $tmp1938;
    org$pandalanguage$pandac$ASTNode* $tmp1939;
    org$pandalanguage$pandac$ASTNode* $tmp1940;
    panda$core$Int64 $tmp1942;
    panda$collections$ImmutableArray* $tmp1943;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1947;
    panda$core$Int64 $tmp1948;
    org$pandalanguage$pandac$ASTNode* $tmp1950;
    org$pandalanguage$pandac$ASTNode* $tmp1951;
    org$pandalanguage$pandac$ASTNode* $tmp1952;
    panda$core$Int64 $tmp1954;
    org$pandalanguage$pandac$ASTNode* $tmp1957;
    int $tmp1819;
    {
        memset(&result1820, 0, sizeof(result1820));
        org$pandalanguage$pandac$parser$Token $tmp1821 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp1822, 103);
        panda$core$Bit $tmp1823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1821.kind.$rawValue, $tmp1822);
        if ($tmp1823.value) {
        {
            {
                $tmp1824 = result1820;
                org$pandalanguage$pandac$ASTNode* $tmp1827 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1826 = $tmp1827;
                $tmp1825 = $tmp1826;
                result1820 = $tmp1825;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1825));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1826));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
            }
            if (((panda$core$Bit) { result1820 == NULL }).value) {
            {
                $tmp1829 = NULL;
                $returnValue1828 = $tmp1829;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1829));
                $tmp1819 = 0;
                goto $l1817;
                $l1830:;
                return $returnValue1828;
            }
            }
        }
        }
        else {
        {
            int $tmp1834;
            {
                panda$core$Int64$init$builtin_int64(&$tmp1837, 48);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1836, $tmp1837);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1839 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1836, &$s1838);
                start1835 = $tmp1839;
                if (((panda$core$Bit) { !start1835.nonnull }).value) {
                {
                    $tmp1840 = NULL;
                    $returnValue1828 = $tmp1840;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1840));
                    $tmp1834 = 0;
                    goto $l1832;
                    $l1841:;
                    $tmp1819 = 1;
                    goto $l1817;
                    $l1842:;
                    return $returnValue1828;
                }
                }
                panda$core$MutableString* $tmp1847 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1849 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1835.value));
                $tmp1848 = $tmp1849;
                panda$core$MutableString$init$panda$core$String($tmp1847, $tmp1848);
                $tmp1846 = $tmp1847;
                $tmp1845 = $tmp1846;
                name1844 = $tmp1845;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1845));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1846));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1848));
                $l1850:;
                panda$core$Int64$init$builtin_int64(&$tmp1854, 98);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1853, $tmp1854);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1855 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1853);
                bool $tmp1852 = ((panda$core$Bit) { $tmp1855.nonnull }).value;
                if (!$tmp1852) goto $l1851;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1858, 48);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1857, $tmp1858);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1860 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1857, &$s1859);
                    id1856 = $tmp1860;
                    if (((panda$core$Bit) { !id1856.nonnull }).value) {
                    {
                        $tmp1861 = NULL;
                        $returnValue1828 = $tmp1861;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1861));
                        $tmp1834 = 1;
                        goto $l1832;
                        $l1862:;
                        $tmp1819 = 2;
                        goto $l1817;
                        $l1863:;
                        return $returnValue1828;
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp1866, 46);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1865, $tmp1866);
                    panda$core$MutableString$append$panda$core$Char8(name1844, $tmp1865);
                    panda$core$String* $tmp1868 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1856.value));
                    $tmp1867 = $tmp1868;
                    panda$core$MutableString$append$panda$core$String(name1844, $tmp1867);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1867));
                }
                goto $l1850;
                $l1851:;
                panda$core$String* $tmp1872 = panda$core$MutableString$finish$R$panda$core$String(name1844);
                $tmp1871 = $tmp1872;
                $tmp1870 = $tmp1871;
                finalName1869 = $tmp1870;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1870));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1871));
                {
                    $tmp1873 = result1820;
                    org$pandalanguage$pandac$ASTNode* $tmp1876 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1877, 42);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1876, $tmp1877, ((org$pandalanguage$pandac$parser$Token) start1835.value).position, finalName1869);
                    $tmp1875 = $tmp1876;
                    $tmp1874 = $tmp1875;
                    result1820 = $tmp1874;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1874));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1875));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1873));
                }
                org$pandalanguage$pandac$parser$Token $tmp1878 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$Int64$init$builtin_int64(&$tmp1879, 62);
                panda$core$Bit $tmp1880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1878.kind.$rawValue, $tmp1879);
                if ($tmp1880.value) {
                {
                    int $tmp1883;
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                        panda$collections$Array* $tmp1887 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1887);
                        $tmp1886 = $tmp1887;
                        $tmp1885 = $tmp1886;
                        children1884 = $tmp1885;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1885));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1886));
                        panda$core$Bit$init$builtin_bit(&$tmp1891, false);
                        org$pandalanguage$pandac$ASTNode* $tmp1892 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1891);
                        $tmp1890 = $tmp1892;
                        $tmp1889 = $tmp1890;
                        t1888 = $tmp1889;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1889));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1890));
                        if (((panda$core$Bit) { t1888 == NULL }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp1893 = result1820;
                                $returnValue1828 = $tmp1893;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1893));
                                $tmp1883 = 0;
                                goto $l1881;
                                $l1894:;
                                $tmp1834 = 2;
                                goto $l1832;
                                $l1895:;
                                $tmp1819 = 3;
                                goto $l1817;
                                $l1896:;
                                return $returnValue1828;
                            }
                            }
                            $tmp1898 = NULL;
                            $returnValue1828 = $tmp1898;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1898));
                            $tmp1883 = 1;
                            goto $l1881;
                            $l1899:;
                            $tmp1834 = 3;
                            goto $l1832;
                            $l1900:;
                            $tmp1819 = 4;
                            goto $l1817;
                            $l1901:;
                            return $returnValue1828;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children1884, ((panda$core$Object*) t1888));
                        $l1903:;
                        panda$core$Int64$init$builtin_int64(&$tmp1907, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1906, $tmp1907);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1908 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1906);
                        bool $tmp1905 = ((panda$core$Bit) { $tmp1908.nonnull }).value;
                        if (!$tmp1905) goto $l1904;
                        {
                            {
                                $tmp1909 = t1888;
                                panda$core$Bit$init$builtin_bit(&$tmp1912, false);
                                org$pandalanguage$pandac$ASTNode* $tmp1913 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1912);
                                $tmp1911 = $tmp1913;
                                $tmp1910 = $tmp1911;
                                t1888 = $tmp1910;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1910));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1911));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1909));
                            }
                            if (((panda$core$Bit) { t1888 == NULL }).value) {
                            {
                                if (p_needSpeculativeParse.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1914 = result1820;
                                    $returnValue1828 = $tmp1914;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1914));
                                    $tmp1883 = 2;
                                    goto $l1881;
                                    $l1915:;
                                    $tmp1834 = 4;
                                    goto $l1832;
                                    $l1916:;
                                    $tmp1819 = 5;
                                    goto $l1817;
                                    $l1917:;
                                    return $returnValue1828;
                                }
                                }
                                $tmp1919 = NULL;
                                $returnValue1828 = $tmp1919;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1919));
                                $tmp1883 = 3;
                                goto $l1881;
                                $l1920:;
                                $tmp1834 = 5;
                                goto $l1832;
                                $l1921:;
                                $tmp1819 = 6;
                                goto $l1817;
                                $l1922:;
                                return $returnValue1828;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(children1884, ((panda$core$Object*) t1888));
                        }
                        goto $l1903;
                        $l1904:;
                        panda$core$Int64$init$builtin_int64(&$tmp1925, 63);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1924, $tmp1925);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1927 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1924, &$s1926);
                        if (((panda$core$Bit) { !$tmp1927.nonnull }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp1928 = result1820;
                                $returnValue1828 = $tmp1928;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1928));
                                $tmp1883 = 4;
                                goto $l1881;
                                $l1929:;
                                $tmp1834 = 6;
                                goto $l1832;
                                $l1930:;
                                $tmp1819 = 7;
                                goto $l1817;
                                $l1931:;
                                return $returnValue1828;
                            }
                            }
                            $tmp1933 = NULL;
                            $returnValue1828 = $tmp1933;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1933));
                            $tmp1883 = 5;
                            goto $l1881;
                            $l1934:;
                            $tmp1834 = 7;
                            goto $l1832;
                            $l1935:;
                            $tmp1819 = 8;
                            goto $l1817;
                            $l1936:;
                            return $returnValue1828;
                        }
                        }
                        {
                            $tmp1938 = result1820;
                            org$pandalanguage$pandac$ASTNode* $tmp1941 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp1942, 19);
                            panda$collections$ImmutableArray* $tmp1944 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1884);
                            $tmp1943 = $tmp1944;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1941, $tmp1942, ((org$pandalanguage$pandac$parser$Token) start1835.value).position, finalName1869, $tmp1943);
                            $tmp1940 = $tmp1941;
                            $tmp1939 = $tmp1940;
                            result1820 = $tmp1939;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1939));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1940));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1943));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1938));
                        }
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                    }
                    $tmp1883 = -1;
                    goto $l1881;
                    $l1881:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1888));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1884));
                    children1884 = NULL;
                    t1888 = NULL;
                    switch ($tmp1883) {
                        case -1: goto $l1945;
                        case 0: goto $l1894;
                        case 5: goto $l1934;
                        case 1: goto $l1899;
                        case 3: goto $l1920;
                        case 4: goto $l1929;
                        case 2: goto $l1915;
                    }
                    $l1945:;
                }
                }
            }
            $tmp1834 = -1;
            goto $l1832;
            $l1832:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1869));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1844));
            name1844 = NULL;
            finalName1869 = NULL;
            switch ($tmp1834) {
                case 0: goto $l1841;
                case -1: goto $l1946;
                case 7: goto $l1935;
                case 5: goto $l1921;
                case 2: goto $l1895;
                case 1: goto $l1862;
                case 6: goto $l1930;
                case 4: goto $l1916;
                case 3: goto $l1900;
            }
            $l1946:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1948, 94);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1947, $tmp1948);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1949 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1947);
        if (((panda$core$Bit) { $tmp1949.nonnull }).value) {
        {
            {
                $tmp1950 = result1820;
                org$pandalanguage$pandac$ASTNode* $tmp1953 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1954, 29);
                org$pandalanguage$pandac$Position $tmp1956 = (($fn1955) result1820->$class->vtable[2])(result1820);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1953, $tmp1954, $tmp1956, result1820);
                $tmp1952 = $tmp1953;
                $tmp1951 = $tmp1952;
                result1820 = $tmp1951;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1952));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1950));
            }
        }
        }
        $tmp1957 = result1820;
        $returnValue1828 = $tmp1957;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1957));
        $tmp1819 = 9;
        goto $l1817;
        $l1958:;
        return $returnValue1828;
    }
    $l1817:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1820));
    switch ($tmp1819) {
        case 4: goto $l1901;
        case 6: goto $l1922;
        case 2: goto $l1863;
        case 1: goto $l1842;
        case 9: goto $l1958;
        case 8: goto $l1936;
        case 7: goto $l1931;
        case 3: goto $l1896;
        case 5: goto $l1917;
        case 0: goto $l1830;
    }
    $l1960:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1964 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1965;
    org$pandalanguage$pandac$ASTNode* $tmp1966;
    org$pandalanguage$pandac$ASTNode* $returnValue1968;
    org$pandalanguage$pandac$ASTNode* $tmp1969;
    org$pandalanguage$pandac$parser$Token token1974;
    org$pandalanguage$pandac$parser$Token$Kind $match$816_131976;
    panda$core$Int64 $tmp1977;
    panda$core$Object* $tmp1982;
    panda$core$Bit $tmp1983;
    panda$collections$Array* args1985 = NULL;
    panda$collections$Array* $tmp1986;
    panda$collections$Array* $tmp1987;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1989;
    panda$core$Int64 $tmp1990;
    org$pandalanguage$pandac$ASTNode* expr1995 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1996;
    org$pandalanguage$pandac$ASTNode* $tmp1997;
    panda$core$Object* $tmp1999;
    org$pandalanguage$pandac$ASTNode* $tmp2001;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2009;
    panda$core$Int64 $tmp2010;
    org$pandalanguage$pandac$ASTNode* $tmp2012;
    org$pandalanguage$pandac$ASTNode* $tmp2013;
    org$pandalanguage$pandac$ASTNode* $tmp2014;
    panda$core$Object* $tmp2016;
    org$pandalanguage$pandac$ASTNode* $tmp2018;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2023;
    panda$core$Int64 $tmp2024;
    panda$core$Object* $tmp2027;
    org$pandalanguage$pandac$ASTNode* $tmp2029;
    panda$core$Object* $tmp2035;
    org$pandalanguage$pandac$ASTNode* $tmp2037;
    org$pandalanguage$pandac$ASTNode* $tmp2038;
    org$pandalanguage$pandac$ASTNode* $tmp2039;
    panda$core$Int64 $tmp2041;
    panda$collections$ImmutableArray* $tmp2042;
    panda$core$Int64 $tmp2045;
    org$pandalanguage$pandac$ASTNode* arg2050 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2051;
    org$pandalanguage$pandac$ASTNode* $tmp2052;
    org$pandalanguage$pandac$ASTNode* $tmp2054;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2058;
    panda$core$Int64 $tmp2059;
    org$pandalanguage$pandac$ASTNode* $tmp2062;
    org$pandalanguage$pandac$ASTNode* $tmp2066;
    org$pandalanguage$pandac$ASTNode* $tmp2067;
    org$pandalanguage$pandac$ASTNode* $tmp2068;
    panda$core$Int64 $tmp2070;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2071;
    panda$core$Int64 $tmp2072;
    panda$core$Int64 $tmp2074;
    panda$core$String* name2079 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2080;
    panda$core$Int64 $tmp2081;
    panda$core$String* $tmp2083;
    panda$core$String* $tmp2084;
    panda$core$String* $tmp2086;
    panda$core$String* $tmp2087;
    panda$core$String* $tmp2088;
    org$pandalanguage$pandac$ASTNode* $tmp2090;
    org$pandalanguage$pandac$ASTNode* $tmp2094;
    org$pandalanguage$pandac$ASTNode* $tmp2095;
    org$pandalanguage$pandac$ASTNode* $tmp2096;
    panda$core$Int64 $tmp2098;
    panda$core$Int64 $tmp2100;
    org$pandalanguage$pandac$ASTNode* target2105 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2106;
    org$pandalanguage$pandac$ASTNode* $tmp2107;
    org$pandalanguage$pandac$ASTNode* $tmp2109;
    org$pandalanguage$pandac$ASTNode* $tmp2113;
    org$pandalanguage$pandac$ASTNode* $tmp2114;
    org$pandalanguage$pandac$ASTNode* $tmp2115;
    panda$core$Int64 $tmp2117;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2118;
    panda$core$Int64 $tmp2119;
    panda$core$Int64 $tmp2121;
    panda$core$String* name2126 = NULL;
    panda$core$String* $tmp2127;
    panda$core$String* $tmp2128;
    panda$collections$Array* types2133 = NULL;
    panda$collections$Array* $tmp2134;
    panda$collections$Array* $tmp2135;
    org$pandalanguage$pandac$ASTNode* t2137 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2138;
    org$pandalanguage$pandac$ASTNode* $tmp2139;
    panda$core$Bit $tmp2140;
    org$pandalanguage$pandac$ASTNode* $tmp2142;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2150;
    panda$core$Int64 $tmp2151;
    org$pandalanguage$pandac$ASTNode* $tmp2153;
    org$pandalanguage$pandac$ASTNode* $tmp2154;
    org$pandalanguage$pandac$ASTNode* $tmp2155;
    panda$core$Bit $tmp2156;
    org$pandalanguage$pandac$ASTNode* $tmp2158;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2163;
    panda$core$Int64 $tmp2164;
    org$pandalanguage$pandac$ASTNode* $tmp2167;
    panda$core$Bit shouldAccept2172;
    panda$core$Object* $tmp2173;
    panda$core$Int64 $tmp2174;
    org$pandalanguage$pandac$parser$Token$Kind $match$921_292176;
    panda$core$Int64 $tmp2181;
    panda$core$Int64 $tmp2184;
    panda$core$Int64 $tmp2188;
    panda$core$Int64 $tmp2192;
    panda$core$Bit $tmp2195;
    panda$core$Bit $tmp2196;
    panda$core$Bit $tmp2197;
    org$pandalanguage$pandac$ASTNode* $tmp2198;
    org$pandalanguage$pandac$ASTNode* $tmp2199;
    org$pandalanguage$pandac$ASTNode* $tmp2200;
    panda$core$Int64 $tmp2202;
    panda$collections$ImmutableArray* $tmp2205;
    org$pandalanguage$pandac$ASTNode* $tmp2209;
    org$pandalanguage$pandac$ASTNode* $tmp2215;
    org$pandalanguage$pandac$ASTNode* $tmp2220;
    int $tmp1963;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1967 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1966 = $tmp1967;
        $tmp1965 = $tmp1966;
        result1964 = $tmp1965;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1965));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1966));
        if (((panda$core$Bit) { result1964 == NULL }).value) {
        {
            $tmp1969 = NULL;
            $returnValue1968 = $tmp1969;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1969));
            $tmp1963 = 0;
            goto $l1961;
            $l1970:;
            return $returnValue1968;
        }
        }
        $l1972:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1975 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token1974 = $tmp1975;
            {
                $match$816_131976 = token1974.kind;
                panda$core$Int64$init$builtin_int64(&$tmp1977, 103);
                panda$core$Bit $tmp1978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$816_131976.$rawValue, $tmp1977);
                if ($tmp1978.value) {
                {
                    int $tmp1981;
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp1983, true);
                        panda$core$Bit$wrapper* $tmp1984;
                        $tmp1984 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp1984->value = $tmp1983;
                        $tmp1982 = ((panda$core$Object*) $tmp1984);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp1982);
                        panda$core$Panda$unref$panda$core$Object($tmp1982);
                        panda$collections$Array* $tmp1988 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1988);
                        $tmp1987 = $tmp1988;
                        $tmp1986 = $tmp1987;
                        args1985 = $tmp1986;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1986));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1987));
                        panda$core$Int64$init$builtin_int64(&$tmp1990, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1989, $tmp1990);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1991 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1989);
                        if (((panda$core$Bit) { !$tmp1991.nonnull }).value) {
                        {
                            int $tmp1994;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1998 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1997 = $tmp1998;
                                $tmp1996 = $tmp1997;
                                expr1995 = $tmp1996;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1996));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1997));
                                if (((panda$core$Bit) { expr1995 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp2000 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1999 = $tmp2000;
                                    panda$core$Panda$unref$panda$core$Object($tmp1999);
                                    $tmp2001 = NULL;
                                    $returnValue1968 = $tmp2001;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2001));
                                    $tmp1994 = 0;
                                    goto $l1992;
                                    $l2002:;
                                    $tmp1981 = 0;
                                    goto $l1979;
                                    $l2003:;
                                    $tmp1963 = 1;
                                    goto $l1961;
                                    $l2004:;
                                    return $returnValue1968;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args1985, ((panda$core$Object*) expr1995));
                                $l2006:;
                                panda$core$Int64$init$builtin_int64(&$tmp2010, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2009, $tmp2010);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2011 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2009);
                                bool $tmp2008 = ((panda$core$Bit) { $tmp2011.nonnull }).value;
                                if (!$tmp2008) goto $l2007;
                                {
                                    {
                                        $tmp2012 = expr1995;
                                        org$pandalanguage$pandac$ASTNode* $tmp2015 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp2014 = $tmp2015;
                                        $tmp2013 = $tmp2014;
                                        expr1995 = $tmp2013;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2013));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2014));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2012));
                                    }
                                    if (((panda$core$Bit) { expr1995 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp2017 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp2016 = $tmp2017;
                                        panda$core$Panda$unref$panda$core$Object($tmp2016);
                                        $tmp2018 = NULL;
                                        $returnValue1968 = $tmp2018;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2018));
                                        $tmp1994 = 1;
                                        goto $l1992;
                                        $l2019:;
                                        $tmp1981 = 1;
                                        goto $l1979;
                                        $l2020:;
                                        $tmp1963 = 2;
                                        goto $l1961;
                                        $l2021:;
                                        return $returnValue1968;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args1985, ((panda$core$Object*) expr1995));
                                }
                                goto $l2006;
                                $l2007:;
                                panda$core$Int64$init$builtin_int64(&$tmp2024, 104);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2023, $tmp2024);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2026 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2023, &$s2025);
                                if (((panda$core$Bit) { !$tmp2026.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp2028 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2027 = $tmp2028;
                                    panda$core$Panda$unref$panda$core$Object($tmp2027);
                                    $tmp2029 = NULL;
                                    $returnValue1968 = $tmp2029;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2029));
                                    $tmp1994 = 2;
                                    goto $l1992;
                                    $l2030:;
                                    $tmp1981 = 2;
                                    goto $l1979;
                                    $l2031:;
                                    $tmp1963 = 3;
                                    goto $l1961;
                                    $l2032:;
                                    return $returnValue1968;
                                }
                                }
                            }
                            $tmp1994 = -1;
                            goto $l1992;
                            $l1992:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1995));
                            expr1995 = NULL;
                            switch ($tmp1994) {
                                case 0: goto $l2002;
                                case 2: goto $l2030;
                                case 1: goto $l2019;
                                case -1: goto $l2034;
                            }
                            $l2034:;
                        }
                        }
                        panda$core$Object* $tmp2036 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2035 = $tmp2036;
                        panda$core$Panda$unref$panda$core$Object($tmp2035);
                        {
                            $tmp2037 = result1964;
                            org$pandalanguage$pandac$ASTNode* $tmp2040 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2041, 8);
                            panda$collections$ImmutableArray* $tmp2043 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1985);
                            $tmp2042 = $tmp2043;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2040, $tmp2041, token1974.position, result1964, $tmp2042);
                            $tmp2039 = $tmp2040;
                            $tmp2038 = $tmp2039;
                            result1964 = $tmp2038;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2038));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2039));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2042));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2037));
                        }
                    }
                    $tmp1981 = -1;
                    goto $l1979;
                    $l1979:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1985));
                    args1985 = NULL;
                    switch ($tmp1981) {
                        case 1: goto $l2020;
                        case 2: goto $l2031;
                        case -1: goto $l2044;
                        case 0: goto $l2003;
                    }
                    $l2044:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2045, 101);
                panda$core$Bit $tmp2046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$816_131976.$rawValue, $tmp2045);
                if ($tmp2046.value) {
                {
                    int $tmp2049;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2053 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2052 = $tmp2053;
                        $tmp2051 = $tmp2052;
                        arg2050 = $tmp2051;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2051));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2052));
                        if (((panda$core$Bit) { arg2050 == NULL }).value) {
                        {
                            $tmp2054 = NULL;
                            $returnValue1968 = $tmp2054;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2054));
                            $tmp2049 = 0;
                            goto $l2047;
                            $l2055:;
                            $tmp1963 = 4;
                            goto $l1961;
                            $l2056:;
                            return $returnValue1968;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp2059, 102);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2058, $tmp2059);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2061 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2058, &$s2060);
                        if (((panda$core$Bit) { !$tmp2061.nonnull }).value) {
                        {
                            $tmp2062 = NULL;
                            $returnValue1968 = $tmp2062;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2062));
                            $tmp2049 = 1;
                            goto $l2047;
                            $l2063:;
                            $tmp1963 = 5;
                            goto $l1961;
                            $l2064:;
                            return $returnValue1968;
                        }
                        }
                        {
                            $tmp2066 = result1964;
                            org$pandalanguage$pandac$ASTNode* $tmp2069 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2070, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2072, 101);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2071, $tmp2072);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2069, $tmp2070, token1974.position, result1964, $tmp2071, arg2050);
                            $tmp2068 = $tmp2069;
                            $tmp2067 = $tmp2068;
                            result1964 = $tmp2067;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2067));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2068));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2066));
                        }
                    }
                    $tmp2049 = -1;
                    goto $l2047;
                    $l2047:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2050));
                    arg2050 = NULL;
                    switch ($tmp2049) {
                        case 1: goto $l2063;
                        case 0: goto $l2055;
                        case -1: goto $l2073;
                    }
                    $l2073:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2074, 98);
                panda$core$Bit $tmp2075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$816_131976.$rawValue, $tmp2074);
                if ($tmp2075.value) {
                {
                    int $tmp2078;
                    {
                        memset(&name2079, 0, sizeof(name2079));
                        panda$core$Int64$init$builtin_int64(&$tmp2081, 22);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2080, $tmp2081);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2082 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2080);
                        if (((panda$core$Bit) { $tmp2082.nonnull }).value) {
                        {
                            {
                                $tmp2083 = name2079;
                                $tmp2084 = &$s2085;
                                name2079 = $tmp2084;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2084));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2083));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp2086 = name2079;
                                panda$core$String* $tmp2089 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp2088 = $tmp2089;
                                $tmp2087 = $tmp2088;
                                name2079 = $tmp2087;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2087));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2088));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2086));
                            }
                            if (((panda$core$Bit) { name2079 == NULL }).value) {
                            {
                                $tmp2090 = NULL;
                                $returnValue1968 = $tmp2090;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2090));
                                $tmp2078 = 0;
                                goto $l2076;
                                $l2091:;
                                $tmp1963 = 6;
                                goto $l1961;
                                $l2092:;
                                return $returnValue1968;
                            }
                            }
                        }
                        }
                        {
                            $tmp2094 = result1964;
                            org$pandalanguage$pandac$ASTNode* $tmp2097 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2098, 15);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2097, $tmp2098, token1974.position, result1964, name2079);
                            $tmp2096 = $tmp2097;
                            $tmp2095 = $tmp2096;
                            result1964 = $tmp2095;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2095));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2096));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2094));
                        }
                    }
                    $tmp2078 = -1;
                    goto $l2076;
                    $l2076:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2079));
                    switch ($tmp2078) {
                        case -1: goto $l2099;
                        case 0: goto $l2091;
                    }
                    $l2099:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2100, 89);
                panda$core$Bit $tmp2101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$816_131976.$rawValue, $tmp2100);
                if ($tmp2101.value) {
                {
                    int $tmp2104;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2108 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2107 = $tmp2108;
                        $tmp2106 = $tmp2107;
                        target2105 = $tmp2106;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2106));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2107));
                        if (((panda$core$Bit) { target2105 == NULL }).value) {
                        {
                            $tmp2109 = NULL;
                            $returnValue1968 = $tmp2109;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2109));
                            $tmp2104 = 0;
                            goto $l2102;
                            $l2110:;
                            $tmp1963 = 7;
                            goto $l1961;
                            $l2111:;
                            return $returnValue1968;
                        }
                        }
                        {
                            $tmp2113 = result1964;
                            org$pandalanguage$pandac$ASTNode* $tmp2116 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2117, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2119, 89);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2118, $tmp2119);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2116, $tmp2117, token1974.position, result1964, $tmp2118, target2105);
                            $tmp2115 = $tmp2116;
                            $tmp2114 = $tmp2115;
                            result1964 = $tmp2114;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2114));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2115));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
                        }
                    }
                    $tmp2104 = -1;
                    goto $l2102;
                    $l2102:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2105));
                    target2105 = NULL;
                    switch ($tmp2104) {
                        case 0: goto $l2110;
                        case -1: goto $l2120;
                    }
                    $l2120:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2121, 62);
                panda$core$Bit $tmp2122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$816_131976.$rawValue, $tmp2121);
                if ($tmp2122.value) {
                {
                    int $tmp2125;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1974);
                        panda$core$String* $tmp2129 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result1964);
                        $tmp2128 = $tmp2129;
                        $tmp2127 = $tmp2128;
                        name2126 = $tmp2127;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2127));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2128));
                        if (((panda$core$Bit) { name2126 != NULL }).value) {
                        {
                            int $tmp2132;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp2136 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp2136);
                                $tmp2135 = $tmp2136;
                                $tmp2134 = $tmp2135;
                                types2133 = $tmp2134;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2134));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2135));
                                panda$core$Bit$init$builtin_bit(&$tmp2140, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2141 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2140);
                                $tmp2139 = $tmp2141;
                                $tmp2138 = $tmp2139;
                                t2137 = $tmp2138;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2138));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2139));
                                if (((panda$core$Bit) { t2137 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2142 = result1964;
                                    $returnValue1968 = $tmp2142;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2142));
                                    $tmp2132 = 0;
                                    goto $l2130;
                                    $l2143:;
                                    $tmp2125 = 0;
                                    goto $l2123;
                                    $l2144:;
                                    $tmp1963 = 8;
                                    goto $l1961;
                                    $l2145:;
                                    return $returnValue1968;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types2133, ((panda$core$Object*) t2137));
                                $l2147:;
                                panda$core$Int64$init$builtin_int64(&$tmp2151, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2150, $tmp2151);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2152 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2150);
                                bool $tmp2149 = ((panda$core$Bit) { $tmp2152.nonnull }).value;
                                if (!$tmp2149) goto $l2148;
                                {
                                    {
                                        $tmp2153 = t2137;
                                        panda$core$Bit$init$builtin_bit(&$tmp2156, false);
                                        org$pandalanguage$pandac$ASTNode* $tmp2157 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2156);
                                        $tmp2155 = $tmp2157;
                                        $tmp2154 = $tmp2155;
                                        t2137 = $tmp2154;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2154));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2155));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2153));
                                    }
                                    if (((panda$core$Bit) { t2137 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp2158 = result1964;
                                        $returnValue1968 = $tmp2158;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2158));
                                        $tmp2132 = 1;
                                        goto $l2130;
                                        $l2159:;
                                        $tmp2125 = 1;
                                        goto $l2123;
                                        $l2160:;
                                        $tmp1963 = 9;
                                        goto $l1961;
                                        $l2161:;
                                        return $returnValue1968;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types2133, ((panda$core$Object*) t2137));
                                }
                                goto $l2147;
                                $l2148:;
                                panda$core$Int64$init$builtin_int64(&$tmp2164, 63);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2163, $tmp2164);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2166 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2163, &$s2165);
                                if (((panda$core$Bit) { !$tmp2166.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2167 = result1964;
                                    $returnValue1968 = $tmp2167;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2167));
                                    $tmp2132 = 2;
                                    goto $l2130;
                                    $l2168:;
                                    $tmp2125 = 2;
                                    goto $l2123;
                                    $l2169:;
                                    $tmp1963 = 10;
                                    goto $l1961;
                                    $l2170:;
                                    return $returnValue1968;
                                }
                                }
                                memset(&shouldAccept2172, 0, sizeof(shouldAccept2172));
                                panda$core$Int64$init$builtin_int64(&$tmp2174, 0);
                                panda$core$Object* $tmp2175 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2174);
                                $tmp2173 = $tmp2175;
                                panda$core$Panda$unref$panda$core$Object($tmp2173);
                                if (((panda$core$Bit$wrapper*) $tmp2173)->value.value) {
                                {
                                    {
                                        org$pandalanguage$pandac$parser$Token $tmp2177 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                                        $match$921_292176 = $tmp2177.kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2181, 98);
                                        panda$core$Bit $tmp2182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$921_292176.$rawValue, $tmp2181);
                                        bool $tmp2180 = $tmp2182.value;
                                        if ($tmp2180) goto $l2183;
                                        panda$core$Int64$init$builtin_int64(&$tmp2184, 103);
                                        panda$core$Bit $tmp2185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$921_292176.$rawValue, $tmp2184);
                                        $tmp2180 = $tmp2185.value;
                                        $l2183:;
                                        panda$core$Bit $tmp2186 = { $tmp2180 };
                                        bool $tmp2179 = $tmp2186.value;
                                        if ($tmp2179) goto $l2187;
                                        panda$core$Int64$init$builtin_int64(&$tmp2188, 105);
                                        panda$core$Bit $tmp2189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$921_292176.$rawValue, $tmp2188);
                                        $tmp2179 = $tmp2189.value;
                                        $l2187:;
                                        panda$core$Bit $tmp2190 = { $tmp2179 };
                                        bool $tmp2178 = $tmp2190.value;
                                        if ($tmp2178) goto $l2191;
                                        panda$core$Int64$init$builtin_int64(&$tmp2192, 89);
                                        panda$core$Bit $tmp2193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$921_292176.$rawValue, $tmp2192);
                                        $tmp2178 = $tmp2193.value;
                                        $l2191:;
                                        panda$core$Bit $tmp2194 = { $tmp2178 };
                                        if ($tmp2194.value) {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2195, true);
                                            shouldAccept2172 = $tmp2195;
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2196, false);
                                            shouldAccept2172 = $tmp2196;
                                        }
                                        }
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2197, true);
                                    shouldAccept2172 = $tmp2197;
                                }
                                }
                                if (shouldAccept2172.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp2198 = result1964;
                                        org$pandalanguage$pandac$ASTNode* $tmp2201 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        panda$core$Int64$init$builtin_int64(&$tmp2202, 19);
                                        org$pandalanguage$pandac$Position $tmp2204 = (($fn2203) result1964->$class->vtable[2])(result1964);
                                        panda$collections$ImmutableArray* $tmp2206 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types2133);
                                        $tmp2205 = $tmp2206;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2201, $tmp2202, $tmp2204, name2126, $tmp2205);
                                        $tmp2200 = $tmp2201;
                                        $tmp2199 = $tmp2200;
                                        result1964 = $tmp2199;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2199));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2205));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2198));
                                    }
                                    $tmp2132 = 3;
                                    goto $l2130;
                                    $l2207:;
                                    $tmp2125 = 3;
                                    goto $l2123;
                                    $l2208:;
                                    goto $l1972;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2209 = result1964;
                                    $returnValue1968 = $tmp2209;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2209));
                                    $tmp2132 = 4;
                                    goto $l2130;
                                    $l2210:;
                                    $tmp2125 = 4;
                                    goto $l2123;
                                    $l2211:;
                                    $tmp1963 = 11;
                                    goto $l1961;
                                    $l2212:;
                                    return $returnValue1968;
                                }
                                }
                            }
                            $tmp2132 = -1;
                            goto $l2130;
                            $l2130:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2137));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types2133));
                            types2133 = NULL;
                            t2137 = NULL;
                            switch ($tmp2132) {
                                case -1: goto $l2214;
                                case 3: goto $l2207;
                                case 4: goto $l2210;
                                case 2: goto $l2168;
                                case 0: goto $l2143;
                                case 1: goto $l2159;
                            }
                            $l2214:;
                        }
                        }
                        $tmp2215 = result1964;
                        $returnValue1968 = $tmp2215;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2215));
                        $tmp2125 = 5;
                        goto $l2123;
                        $l2216:;
                        $tmp1963 = 12;
                        goto $l1961;
                        $l2217:;
                        return $returnValue1968;
                    }
                    $l2123:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2126));
                    name2126 = NULL;
                    switch ($tmp2125) {
                        case 5: goto $l2216;
                        case 4: goto $l2211;
                        case 3: goto $l2208;
                        case 2: goto $l2169;
                        case 1: goto $l2160;
                        case 0: goto $l2144;
                    }
                    $l2219:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1974);
                    $tmp2220 = result1964;
                    $returnValue1968 = $tmp2220;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2220));
                    $tmp1963 = 13;
                    goto $l1961;
                    $l2221:;
                    return $returnValue1968;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l1973:;
    }
    $tmp1963 = -1;
    goto $l1961;
    $l1961:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1964));
    result1964 = NULL;
    switch ($tmp1963) {
        case -1: goto $l2223;
        case 12: goto $l2217;
        case 13: goto $l2221;
        case 8: goto $l2145;
        case 10: goto $l2170;
        case 1: goto $l2004;
        case 2: goto $l2021;
        case 9: goto $l2161;
        case 7: goto $l2111;
        case 11: goto $l2212;
        case 4: goto $l2056;
        case 3: goto $l2032;
        case 5: goto $l2064;
        case 6: goto $l2092;
        case 0: goto $l1970;
    }
    $l2223:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2227 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2228;
    org$pandalanguage$pandac$ASTNode* $tmp2229;
    org$pandalanguage$pandac$ASTNode* $returnValue2231;
    org$pandalanguage$pandac$ASTNode* $tmp2232;
    org$pandalanguage$pandac$parser$Token$nullable op2240;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2241;
    panda$core$Int64 $tmp2242;
    org$pandalanguage$pandac$ASTNode* next2245 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2246;
    org$pandalanguage$pandac$ASTNode* $tmp2247;
    org$pandalanguage$pandac$ASTNode* $tmp2249;
    org$pandalanguage$pandac$ASTNode* $tmp2253;
    org$pandalanguage$pandac$ASTNode* $tmp2254;
    org$pandalanguage$pandac$ASTNode* $tmp2255;
    panda$core$Int64 $tmp2257;
    org$pandalanguage$pandac$ASTNode* $tmp2259;
    int $tmp2226;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2230 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2229 = $tmp2230;
        $tmp2228 = $tmp2229;
        result2227 = $tmp2228;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2228));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2229));
        if (((panda$core$Bit) { result2227 == NULL }).value) {
        {
            $tmp2232 = NULL;
            $returnValue2231 = $tmp2232;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2232));
            $tmp2226 = 0;
            goto $l2224;
            $l2233:;
            return $returnValue2231;
        }
        }
        $l2235:;
        while (true) {
        {
            int $tmp2239;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2242, 57);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2241, $tmp2242);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2243 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2241);
                op2240 = $tmp2243;
                if (((panda$core$Bit) { !op2240.nonnull }).value) {
                {
                    $tmp2239 = 0;
                    goto $l2237;
                    $l2244:;
                    goto $l2236;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2248 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2247 = $tmp2248;
                $tmp2246 = $tmp2247;
                next2245 = $tmp2246;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2246));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2247));
                if (((panda$core$Bit) { next2245 == NULL }).value) {
                {
                    $tmp2249 = NULL;
                    $returnValue2231 = $tmp2249;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2249));
                    $tmp2239 = 1;
                    goto $l2237;
                    $l2250:;
                    $tmp2226 = 1;
                    goto $l2224;
                    $l2251:;
                    return $returnValue2231;
                }
                }
                {
                    $tmp2253 = result2227;
                    org$pandalanguage$pandac$ASTNode* $tmp2256 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2257, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2256, $tmp2257, ((org$pandalanguage$pandac$parser$Token) op2240.value).position, result2227, ((org$pandalanguage$pandac$parser$Token) op2240.value).kind, next2245);
                    $tmp2255 = $tmp2256;
                    $tmp2254 = $tmp2255;
                    result2227 = $tmp2254;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2254));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2253));
                }
            }
            $tmp2239 = -1;
            goto $l2237;
            $l2237:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2245));
            next2245 = NULL;
            switch ($tmp2239) {
                case 1: goto $l2250;
                case -1: goto $l2258;
                case 0: goto $l2244;
            }
            $l2258:;
        }
        }
        $l2236:;
        $tmp2259 = result2227;
        $returnValue2231 = $tmp2259;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2259));
        $tmp2226 = 2;
        goto $l2224;
        $l2260:;
        return $returnValue2231;
    }
    $l2224:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2227));
    result2227 = NULL;
    switch ($tmp2226) {
        case 1: goto $l2251;
        case 2: goto $l2260;
        case 0: goto $l2233;
    }
    $l2262:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op2263;
    org$pandalanguage$pandac$parser$Token$Kind $match$977_92265;
    panda$core$Int64 $tmp2268;
    panda$core$Int64 $tmp2271;
    panda$core$Int64 $tmp2275;
    org$pandalanguage$pandac$ASTNode* base2281 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2282;
    org$pandalanguage$pandac$ASTNode* $tmp2283;
    org$pandalanguage$pandac$ASTNode* $returnValue2285;
    org$pandalanguage$pandac$ASTNode* $tmp2286;
    org$pandalanguage$pandac$ASTNode* $tmp2289;
    org$pandalanguage$pandac$ASTNode* $tmp2290;
    panda$core$Int64 $tmp2292;
    org$pandalanguage$pandac$ASTNode* $tmp2296;
    org$pandalanguage$pandac$ASTNode* $tmp2297;
    org$pandalanguage$pandac$parser$Token $tmp2264 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op2263 = $tmp2264;
    {
        $match$977_92265 = op2263.kind;
        panda$core$Int64$init$builtin_int64(&$tmp2268, 52);
        panda$core$Bit $tmp2269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$977_92265.$rawValue, $tmp2268);
        bool $tmp2267 = $tmp2269.value;
        if ($tmp2267) goto $l2270;
        panda$core$Int64$init$builtin_int64(&$tmp2271, 49);
        panda$core$Bit $tmp2272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$977_92265.$rawValue, $tmp2271);
        $tmp2267 = $tmp2272.value;
        $l2270:;
        panda$core$Bit $tmp2273 = { $tmp2267 };
        bool $tmp2266 = $tmp2273.value;
        if ($tmp2266) goto $l2274;
        panda$core$Int64$init$builtin_int64(&$tmp2275, 50);
        panda$core$Bit $tmp2276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$977_92265.$rawValue, $tmp2275);
        $tmp2266 = $tmp2276.value;
        $l2274:;
        panda$core$Bit $tmp2277 = { $tmp2266 };
        if ($tmp2277.value) {
        {
            int $tmp2280;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2284 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2283 = $tmp2284;
                $tmp2282 = $tmp2283;
                base2281 = $tmp2282;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2282));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2283));
                if (((panda$core$Bit) { base2281 == NULL }).value) {
                {
                    $tmp2286 = NULL;
                    $returnValue2285 = $tmp2286;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2286));
                    $tmp2280 = 0;
                    goto $l2278;
                    $l2287:;
                    return $returnValue2285;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2291 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2292, 32);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2291, $tmp2292, op2263.position, op2263.kind, base2281);
                $tmp2290 = $tmp2291;
                $tmp2289 = $tmp2290;
                $returnValue2285 = $tmp2289;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2289));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2290));
                $tmp2280 = 1;
                goto $l2278;
                $l2293:;
                return $returnValue2285;
            }
            $l2278:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base2281));
            base2281 = NULL;
            switch ($tmp2280) {
                case 1: goto $l2293;
                case 0: goto $l2287;
            }
            $l2295:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2263);
            org$pandalanguage$pandac$ASTNode* $tmp2298 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2297 = $tmp2298;
            $tmp2296 = $tmp2297;
            $returnValue2285 = $tmp2296;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2296));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2297));
            return $returnValue2285;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2303 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2304;
    org$pandalanguage$pandac$ASTNode* $tmp2305;
    org$pandalanguage$pandac$ASTNode* $returnValue2307;
    org$pandalanguage$pandac$ASTNode* $tmp2308;
    org$pandalanguage$pandac$parser$Token op2313;
    org$pandalanguage$pandac$parser$Token$Kind $match$1003_132315;
    panda$core$Int64 $tmp2322;
    panda$core$Int64 $tmp2325;
    panda$core$Int64 $tmp2329;
    panda$core$Int64 $tmp2333;
    panda$core$Int64 $tmp2337;
    panda$core$Int64 $tmp2341;
    panda$core$Int64 $tmp2345;
    org$pandalanguage$pandac$ASTNode* next2351 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2352;
    org$pandalanguage$pandac$ASTNode* $tmp2353;
    org$pandalanguage$pandac$ASTNode* $tmp2355;
    org$pandalanguage$pandac$ASTNode* $tmp2359;
    org$pandalanguage$pandac$ASTNode* $tmp2360;
    org$pandalanguage$pandac$ASTNode* $tmp2361;
    panda$core$Int64 $tmp2363;
    panda$core$Int64 $tmp2365;
    org$pandalanguage$pandac$parser$Token nextToken2367;
    panda$core$Int64 $tmp2369;
    org$pandalanguage$pandac$ASTNode* next2374 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2375;
    org$pandalanguage$pandac$ASTNode* $tmp2376;
    org$pandalanguage$pandac$ASTNode* $tmp2378;
    org$pandalanguage$pandac$ASTNode* $tmp2382;
    org$pandalanguage$pandac$ASTNode* $tmp2383;
    org$pandalanguage$pandac$ASTNode* $tmp2384;
    panda$core$Int64 $tmp2386;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2387;
    panda$core$Int64 $tmp2388;
    org$pandalanguage$pandac$ASTNode* $tmp2390;
    org$pandalanguage$pandac$ASTNode* $tmp2393;
    int $tmp2302;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2306 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2305 = $tmp2306;
        $tmp2304 = $tmp2305;
        result2303 = $tmp2304;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2304));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2305));
        if (((panda$core$Bit) { result2303 == NULL }).value) {
        {
            $tmp2308 = NULL;
            $returnValue2307 = $tmp2308;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2308));
            $tmp2302 = 0;
            goto $l2300;
            $l2309:;
            return $returnValue2307;
        }
        }
        $l2311:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2314 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2313 = $tmp2314;
            {
                $match$1003_132315 = op2313.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2322, 53);
                panda$core$Bit $tmp2323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1003_132315.$rawValue, $tmp2322);
                bool $tmp2321 = $tmp2323.value;
                if ($tmp2321) goto $l2324;
                panda$core$Int64$init$builtin_int64(&$tmp2325, 54);
                panda$core$Bit $tmp2326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1003_132315.$rawValue, $tmp2325);
                $tmp2321 = $tmp2326.value;
                $l2324:;
                panda$core$Bit $tmp2327 = { $tmp2321 };
                bool $tmp2320 = $tmp2327.value;
                if ($tmp2320) goto $l2328;
                panda$core$Int64$init$builtin_int64(&$tmp2329, 55);
                panda$core$Bit $tmp2330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1003_132315.$rawValue, $tmp2329);
                $tmp2320 = $tmp2330.value;
                $l2328:;
                panda$core$Bit $tmp2331 = { $tmp2320 };
                bool $tmp2319 = $tmp2331.value;
                if ($tmp2319) goto $l2332;
                panda$core$Int64$init$builtin_int64(&$tmp2333, 56);
                panda$core$Bit $tmp2334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1003_132315.$rawValue, $tmp2333);
                $tmp2319 = $tmp2334.value;
                $l2332:;
                panda$core$Bit $tmp2335 = { $tmp2319 };
                bool $tmp2318 = $tmp2335.value;
                if ($tmp2318) goto $l2336;
                panda$core$Int64$init$builtin_int64(&$tmp2337, 72);
                panda$core$Bit $tmp2338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1003_132315.$rawValue, $tmp2337);
                $tmp2318 = $tmp2338.value;
                $l2336:;
                panda$core$Bit $tmp2339 = { $tmp2318 };
                bool $tmp2317 = $tmp2339.value;
                if ($tmp2317) goto $l2340;
                panda$core$Int64$init$builtin_int64(&$tmp2341, 67);
                panda$core$Bit $tmp2342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1003_132315.$rawValue, $tmp2341);
                $tmp2317 = $tmp2342.value;
                $l2340:;
                panda$core$Bit $tmp2343 = { $tmp2317 };
                bool $tmp2316 = $tmp2343.value;
                if ($tmp2316) goto $l2344;
                panda$core$Int64$init$builtin_int64(&$tmp2345, 69);
                panda$core$Bit $tmp2346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1003_132315.$rawValue, $tmp2345);
                $tmp2316 = $tmp2346.value;
                $l2344:;
                panda$core$Bit $tmp2347 = { $tmp2316 };
                if ($tmp2347.value) {
                {
                    int $tmp2350;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2354 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2353 = $tmp2354;
                        $tmp2352 = $tmp2353;
                        next2351 = $tmp2352;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2352));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2353));
                        if (((panda$core$Bit) { next2351 == NULL }).value) {
                        {
                            $tmp2355 = NULL;
                            $returnValue2307 = $tmp2355;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2355));
                            $tmp2350 = 0;
                            goto $l2348;
                            $l2356:;
                            $tmp2302 = 1;
                            goto $l2300;
                            $l2357:;
                            return $returnValue2307;
                        }
                        }
                        {
                            $tmp2359 = result2303;
                            org$pandalanguage$pandac$ASTNode* $tmp2362 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2363, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2362, $tmp2363, op2313.position, result2303, op2313.kind, next2351);
                            $tmp2361 = $tmp2362;
                            $tmp2360 = $tmp2361;
                            result2303 = $tmp2360;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2360));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2361));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2359));
                        }
                    }
                    $tmp2350 = -1;
                    goto $l2348;
                    $l2348:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2351));
                    next2351 = NULL;
                    switch ($tmp2350) {
                        case 0: goto $l2356;
                        case -1: goto $l2364;
                    }
                    $l2364:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2365, 63);
                panda$core$Bit $tmp2366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1003_132315.$rawValue, $tmp2365);
                if ($tmp2366.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2368 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken2367 = $tmp2368;
                    panda$core$Int64$init$builtin_int64(&$tmp2369, 63);
                    panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken2367.kind.$rawValue, $tmp2369);
                    if ($tmp2370.value) {
                    {
                        int $tmp2373;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2377 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2376 = $tmp2377;
                            $tmp2375 = $tmp2376;
                            next2374 = $tmp2375;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2375));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
                            if (((panda$core$Bit) { next2374 == NULL }).value) {
                            {
                                $tmp2378 = NULL;
                                $returnValue2307 = $tmp2378;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2378));
                                $tmp2373 = 0;
                                goto $l2371;
                                $l2379:;
                                $tmp2302 = 2;
                                goto $l2300;
                                $l2380:;
                                return $returnValue2307;
                            }
                            }
                            {
                                $tmp2382 = result2303;
                                org$pandalanguage$pandac$ASTNode* $tmp2385 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp2386, 4);
                                panda$core$Int64$init$builtin_int64(&$tmp2388, 1);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2387, $tmp2388);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2385, $tmp2386, op2313.position, result2303, $tmp2387, next2374);
                                $tmp2384 = $tmp2385;
                                $tmp2383 = $tmp2384;
                                result2303 = $tmp2383;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2383));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2384));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2382));
                            }
                        }
                        $tmp2373 = -1;
                        goto $l2371;
                        $l2371:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2374));
                        next2374 = NULL;
                        switch ($tmp2373) {
                            case -1: goto $l2389;
                            case 0: goto $l2379;
                        }
                        $l2389:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken2367);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2313);
                        $tmp2390 = result2303;
                        $returnValue2307 = $tmp2390;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2390));
                        $tmp2302 = 3;
                        goto $l2300;
                        $l2391:;
                        return $returnValue2307;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2313);
                    $tmp2393 = result2303;
                    $returnValue2307 = $tmp2393;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2393));
                    $tmp2302 = 4;
                    goto $l2300;
                    $l2394:;
                    return $returnValue2307;
                }
                }
                }
            }
        }
        }
        $l2312:;
    }
    $tmp2302 = -1;
    goto $l2300;
    $l2300:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2303));
    result2303 = NULL;
    switch ($tmp2302) {
        case 3: goto $l2391;
        case 4: goto $l2394;
        case -1: goto $l2396;
        case 2: goto $l2380;
        case 1: goto $l2357;
        case 0: goto $l2309;
    }
    $l2396:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2400 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2401;
    org$pandalanguage$pandac$ASTNode* $tmp2402;
    org$pandalanguage$pandac$ASTNode* $returnValue2404;
    org$pandalanguage$pandac$ASTNode* $tmp2405;
    org$pandalanguage$pandac$parser$Token op2410;
    org$pandalanguage$pandac$parser$Token$Kind $match$1044_132412;
    panda$core$Int64 $tmp2415;
    panda$core$Int64 $tmp2418;
    panda$core$Int64 $tmp2422;
    org$pandalanguage$pandac$ASTNode* next2428 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2429;
    org$pandalanguage$pandac$ASTNode* $tmp2430;
    org$pandalanguage$pandac$ASTNode* $tmp2432;
    org$pandalanguage$pandac$ASTNode* $tmp2436;
    org$pandalanguage$pandac$ASTNode* $tmp2437;
    org$pandalanguage$pandac$ASTNode* $tmp2438;
    panda$core$Int64 $tmp2440;
    org$pandalanguage$pandac$ASTNode* $tmp2442;
    int $tmp2399;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2403 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2402 = $tmp2403;
        $tmp2401 = $tmp2402;
        result2400 = $tmp2401;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2402));
        if (((panda$core$Bit) { result2400 == NULL }).value) {
        {
            $tmp2405 = NULL;
            $returnValue2404 = $tmp2405;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2405));
            $tmp2399 = 0;
            goto $l2397;
            $l2406:;
            return $returnValue2404;
        }
        }
        $l2408:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2411 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2410 = $tmp2411;
            {
                $match$1044_132412 = op2410.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2415, 51);
                panda$core$Bit $tmp2416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1044_132412.$rawValue, $tmp2415);
                bool $tmp2414 = $tmp2416.value;
                if ($tmp2414) goto $l2417;
                panda$core$Int64$init$builtin_int64(&$tmp2418, 52);
                panda$core$Bit $tmp2419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1044_132412.$rawValue, $tmp2418);
                $tmp2414 = $tmp2419.value;
                $l2417:;
                panda$core$Bit $tmp2420 = { $tmp2414 };
                bool $tmp2413 = $tmp2420.value;
                if ($tmp2413) goto $l2421;
                panda$core$Int64$init$builtin_int64(&$tmp2422, 71);
                panda$core$Bit $tmp2423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1044_132412.$rawValue, $tmp2422);
                $tmp2413 = $tmp2423.value;
                $l2421:;
                panda$core$Bit $tmp2424 = { $tmp2413 };
                if ($tmp2424.value) {
                {
                    int $tmp2427;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2431 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2430 = $tmp2431;
                        $tmp2429 = $tmp2430;
                        next2428 = $tmp2429;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2429));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2430));
                        if (((panda$core$Bit) { next2428 == NULL }).value) {
                        {
                            $tmp2432 = NULL;
                            $returnValue2404 = $tmp2432;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2432));
                            $tmp2427 = 0;
                            goto $l2425;
                            $l2433:;
                            $tmp2399 = 1;
                            goto $l2397;
                            $l2434:;
                            return $returnValue2404;
                        }
                        }
                        {
                            $tmp2436 = result2400;
                            org$pandalanguage$pandac$ASTNode* $tmp2439 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2440, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2439, $tmp2440, op2410.position, result2400, op2410.kind, next2428);
                            $tmp2438 = $tmp2439;
                            $tmp2437 = $tmp2438;
                            result2400 = $tmp2437;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2437));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2438));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2436));
                        }
                    }
                    $tmp2427 = -1;
                    goto $l2425;
                    $l2425:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2428));
                    next2428 = NULL;
                    switch ($tmp2427) {
                        case -1: goto $l2441;
                        case 0: goto $l2433;
                    }
                    $l2441:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2410);
                    $tmp2442 = result2400;
                    $returnValue2404 = $tmp2442;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2442));
                    $tmp2399 = 2;
                    goto $l2397;
                    $l2443:;
                    return $returnValue2404;
                }
                }
            }
        }
        }
        $l2409:;
    }
    $tmp2399 = -1;
    goto $l2397;
    $l2397:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2400));
    result2400 = NULL;
    switch ($tmp2399) {
        case 1: goto $l2434;
        case 2: goto $l2443;
        case -1: goto $l2445;
        case 0: goto $l2406;
    }
    $l2445:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2449 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$1064_92450;
    panda$core$Int64 $tmp2453;
    panda$core$Int64 $tmp2456;
    org$pandalanguage$pandac$ASTNode* $tmp2459;
    org$pandalanguage$pandac$ASTNode* $tmp2460;
    org$pandalanguage$pandac$ASTNode* $tmp2461;
    org$pandalanguage$pandac$ASTNode* $tmp2462;
    org$pandalanguage$pandac$ASTNode* $tmp2463;
    org$pandalanguage$pandac$ASTNode* $returnValue2465;
    org$pandalanguage$pandac$ASTNode* $tmp2466;
    org$pandalanguage$pandac$parser$Token op2469;
    org$pandalanguage$pandac$parser$Token$Kind $match$1074_92471;
    panda$core$Int64 $tmp2473;
    panda$core$Int64 $tmp2476;
    org$pandalanguage$pandac$parser$Token next2482;
    org$pandalanguage$pandac$ASTNode* right2484 = NULL;
    panda$core$Int64 $tmp2487;
    panda$core$Int64 $tmp2490;
    panda$core$Int64 $tmp2494;
    org$pandalanguage$pandac$ASTNode* $tmp2497;
    org$pandalanguage$pandac$ASTNode* $tmp2498;
    org$pandalanguage$pandac$ASTNode* $tmp2499;
    org$pandalanguage$pandac$ASTNode* $tmp2501;
    org$pandalanguage$pandac$ASTNode* $tmp2505;
    org$pandalanguage$pandac$ASTNode* $tmp2506;
    org$pandalanguage$pandac$ASTNode* step2507 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2508;
    panda$core$Int64 $tmp2509;
    org$pandalanguage$pandac$ASTNode* $tmp2511;
    org$pandalanguage$pandac$ASTNode* $tmp2512;
    org$pandalanguage$pandac$ASTNode* $tmp2513;
    org$pandalanguage$pandac$ASTNode* $tmp2515;
    org$pandalanguage$pandac$ASTNode* $tmp2519;
    org$pandalanguage$pandac$ASTNode* $tmp2520;
    org$pandalanguage$pandac$ASTNode* $tmp2521;
    org$pandalanguage$pandac$ASTNode* $tmp2522;
    panda$core$Int64 $tmp2524;
    panda$core$Int64 $tmp2525;
    org$pandalanguage$pandac$ASTNode* $tmp2531;
    int $tmp2448;
    {
        memset(&result2449, 0, sizeof(result2449));
        {
            org$pandalanguage$pandac$parser$Token $tmp2451 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1064_92450 = $tmp2451.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2453, 97);
            panda$core$Bit $tmp2454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1064_92450.$rawValue, $tmp2453);
            bool $tmp2452 = $tmp2454.value;
            if ($tmp2452) goto $l2455;
            panda$core$Int64$init$builtin_int64(&$tmp2456, 96);
            panda$core$Bit $tmp2457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1064_92450.$rawValue, $tmp2456);
            $tmp2452 = $tmp2457.value;
            $l2455:;
            panda$core$Bit $tmp2458 = { $tmp2452 };
            if ($tmp2458.value) {
            {
                {
                    $tmp2459 = result2449;
                    $tmp2460 = NULL;
                    result2449 = $tmp2460;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2460));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2459));
                }
            }
            }
            else {
            {
                {
                    $tmp2461 = result2449;
                    org$pandalanguage$pandac$ASTNode* $tmp2464 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2463 = $tmp2464;
                    $tmp2462 = $tmp2463;
                    result2449 = $tmp2462;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2462));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2463));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2461));
                }
                if (((panda$core$Bit) { result2449 == NULL }).value) {
                {
                    $tmp2466 = NULL;
                    $returnValue2465 = $tmp2466;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2466));
                    $tmp2448 = 0;
                    goto $l2446;
                    $l2467:;
                    return $returnValue2465;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp2470 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op2469 = $tmp2470;
        {
            $match$1074_92471 = op2469.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2473, 97);
            panda$core$Bit $tmp2474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1074_92471.$rawValue, $tmp2473);
            bool $tmp2472 = $tmp2474.value;
            if ($tmp2472) goto $l2475;
            panda$core$Int64$init$builtin_int64(&$tmp2476, 96);
            panda$core$Bit $tmp2477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1074_92471.$rawValue, $tmp2476);
            $tmp2472 = $tmp2477.value;
            $l2475:;
            panda$core$Bit $tmp2478 = { $tmp2472 };
            if ($tmp2478.value) {
            {
                int $tmp2481;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2483 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next2482 = $tmp2483;
                    memset(&right2484, 0, sizeof(right2484));
                    panda$core$Int64$init$builtin_int64(&$tmp2487, 102);
                    panda$core$Bit $tmp2488 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2482.kind.$rawValue, $tmp2487);
                    bool $tmp2486 = $tmp2488.value;
                    if (!$tmp2486) goto $l2489;
                    panda$core$Int64$init$builtin_int64(&$tmp2490, 104);
                    panda$core$Bit $tmp2491 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2482.kind.$rawValue, $tmp2490);
                    $tmp2486 = $tmp2491.value;
                    $l2489:;
                    panda$core$Bit $tmp2492 = { $tmp2486 };
                    bool $tmp2485 = $tmp2492.value;
                    if (!$tmp2485) goto $l2493;
                    panda$core$Int64$init$builtin_int64(&$tmp2494, 33);
                    panda$core$Bit $tmp2495 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2482.kind.$rawValue, $tmp2494);
                    $tmp2485 = $tmp2495.value;
                    $l2493:;
                    panda$core$Bit $tmp2496 = { $tmp2485 };
                    if ($tmp2496.value) {
                    {
                        {
                            $tmp2497 = right2484;
                            org$pandalanguage$pandac$ASTNode* $tmp2500 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2499 = $tmp2500;
                            $tmp2498 = $tmp2499;
                            right2484 = $tmp2498;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2498));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2499));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
                        }
                        if (((panda$core$Bit) { right2484 == NULL }).value) {
                        {
                            $tmp2501 = NULL;
                            $returnValue2465 = $tmp2501;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2501));
                            $tmp2481 = 0;
                            goto $l2479;
                            $l2502:;
                            $tmp2448 = 1;
                            goto $l2446;
                            $l2503:;
                            return $returnValue2465;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2505 = right2484;
                            $tmp2506 = NULL;
                            right2484 = $tmp2506;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2506));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2505));
                        }
                    }
                    }
                    memset(&step2507, 0, sizeof(step2507));
                    panda$core$Int64$init$builtin_int64(&$tmp2509, 33);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2508, $tmp2509);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2510 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2508);
                    if (((panda$core$Bit) { $tmp2510.nonnull }).value) {
                    {
                        {
                            $tmp2511 = step2507;
                            org$pandalanguage$pandac$ASTNode* $tmp2514 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2513 = $tmp2514;
                            $tmp2512 = $tmp2513;
                            step2507 = $tmp2512;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2512));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2513));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2511));
                        }
                        if (((panda$core$Bit) { step2507 == NULL }).value) {
                        {
                            $tmp2515 = NULL;
                            $returnValue2465 = $tmp2515;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2515));
                            $tmp2481 = 1;
                            goto $l2479;
                            $l2516:;
                            $tmp2448 = 2;
                            goto $l2446;
                            $l2517:;
                            return $returnValue2465;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2519 = step2507;
                            $tmp2520 = NULL;
                            step2507 = $tmp2520;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2520));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2519));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2523 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2524, 33);
                    panda$core$Int64$init$builtin_int64(&$tmp2525, 96);
                    panda$core$Bit $tmp2526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2469.kind.$rawValue, $tmp2525);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp2523, $tmp2524, op2469.position, result2449, right2484, $tmp2526, step2507);
                    $tmp2522 = $tmp2523;
                    $tmp2521 = $tmp2522;
                    $returnValue2465 = $tmp2521;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2521));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2522));
                    $tmp2481 = 2;
                    goto $l2479;
                    $l2527:;
                    $tmp2448 = 3;
                    goto $l2446;
                    $l2528:;
                    return $returnValue2465;
                }
                $l2479:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2507));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right2484));
                switch ($tmp2481) {
                    case 1: goto $l2516;
                    case 2: goto $l2527;
                    case 0: goto $l2502;
                }
                $l2530:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2469);
                $tmp2531 = result2449;
                $returnValue2465 = $tmp2531;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2531));
                $tmp2448 = 4;
                goto $l2446;
                $l2532:;
                return $returnValue2465;
            }
            }
        }
    }
    $tmp2448 = -1;
    goto $l2446;
    $l2446:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2449));
    switch ($tmp2448) {
        case 0: goto $l2467;
        case 4: goto $l2532;
        case 3: goto $l2528;
        case 2: goto $l2517;
        case 1: goto $l2503;
        case -1: goto $l2534;
    }
    $l2534:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2538 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2539;
    org$pandalanguage$pandac$ASTNode* $tmp2540;
    org$pandalanguage$pandac$ASTNode* $returnValue2542;
    org$pandalanguage$pandac$ASTNode* $tmp2543;
    org$pandalanguage$pandac$parser$Token op2548;
    org$pandalanguage$pandac$parser$Token$Kind $match$1117_132550;
    panda$core$Int64 $tmp2558;
    panda$core$Int64 $tmp2561;
    panda$core$Int64 $tmp2565;
    panda$core$Int64 $tmp2569;
    panda$core$Int64 $tmp2573;
    panda$core$Int64 $tmp2577;
    panda$core$Int64 $tmp2581;
    panda$core$Int64 $tmp2585;
    org$pandalanguage$pandac$ASTNode* next2591 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2592;
    org$pandalanguage$pandac$ASTNode* $tmp2593;
    org$pandalanguage$pandac$ASTNode* $tmp2595;
    org$pandalanguage$pandac$ASTNode* $tmp2599;
    org$pandalanguage$pandac$ASTNode* $tmp2600;
    org$pandalanguage$pandac$ASTNode* $tmp2601;
    panda$core$Int64 $tmp2603;
    org$pandalanguage$pandac$ASTNode* $tmp2605;
    int $tmp2537;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2541 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2540 = $tmp2541;
        $tmp2539 = $tmp2540;
        result2538 = $tmp2539;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2539));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2540));
        if (((panda$core$Bit) { result2538 == NULL }).value) {
        {
            $tmp2543 = NULL;
            $returnValue2542 = $tmp2543;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2543));
            $tmp2537 = 0;
            goto $l2535;
            $l2544:;
            return $returnValue2542;
        }
        }
        $l2546:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2549 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2548 = $tmp2549;
            {
                $match$1117_132550 = op2548.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2558, 58);
                panda$core$Bit $tmp2559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1117_132550.$rawValue, $tmp2558);
                bool $tmp2557 = $tmp2559.value;
                if ($tmp2557) goto $l2560;
                panda$core$Int64$init$builtin_int64(&$tmp2561, 59);
                panda$core$Bit $tmp2562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1117_132550.$rawValue, $tmp2561);
                $tmp2557 = $tmp2562.value;
                $l2560:;
                panda$core$Bit $tmp2563 = { $tmp2557 };
                bool $tmp2556 = $tmp2563.value;
                if ($tmp2556) goto $l2564;
                panda$core$Int64$init$builtin_int64(&$tmp2565, 60);
                panda$core$Bit $tmp2566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1117_132550.$rawValue, $tmp2565);
                $tmp2556 = $tmp2566.value;
                $l2564:;
                panda$core$Bit $tmp2567 = { $tmp2556 };
                bool $tmp2555 = $tmp2567.value;
                if ($tmp2555) goto $l2568;
                panda$core$Int64$init$builtin_int64(&$tmp2569, 61);
                panda$core$Bit $tmp2570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1117_132550.$rawValue, $tmp2569);
                $tmp2555 = $tmp2570.value;
                $l2568:;
                panda$core$Bit $tmp2571 = { $tmp2555 };
                bool $tmp2554 = $tmp2571.value;
                if ($tmp2554) goto $l2572;
                panda$core$Int64$init$builtin_int64(&$tmp2573, 62);
                panda$core$Bit $tmp2574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1117_132550.$rawValue, $tmp2573);
                $tmp2554 = $tmp2574.value;
                $l2572:;
                panda$core$Bit $tmp2575 = { $tmp2554 };
                bool $tmp2553 = $tmp2575.value;
                if ($tmp2553) goto $l2576;
                panda$core$Int64$init$builtin_int64(&$tmp2577, 63);
                panda$core$Bit $tmp2578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1117_132550.$rawValue, $tmp2577);
                $tmp2553 = $tmp2578.value;
                $l2576:;
                panda$core$Bit $tmp2579 = { $tmp2553 };
                bool $tmp2552 = $tmp2579.value;
                if ($tmp2552) goto $l2580;
                panda$core$Int64$init$builtin_int64(&$tmp2581, 64);
                panda$core$Bit $tmp2582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1117_132550.$rawValue, $tmp2581);
                $tmp2552 = $tmp2582.value;
                $l2580:;
                panda$core$Bit $tmp2583 = { $tmp2552 };
                bool $tmp2551 = $tmp2583.value;
                if ($tmp2551) goto $l2584;
                panda$core$Int64$init$builtin_int64(&$tmp2585, 65);
                panda$core$Bit $tmp2586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1117_132550.$rawValue, $tmp2585);
                $tmp2551 = $tmp2586.value;
                $l2584:;
                panda$core$Bit $tmp2587 = { $tmp2551 };
                if ($tmp2587.value) {
                {
                    int $tmp2590;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2594 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2593 = $tmp2594;
                        $tmp2592 = $tmp2593;
                        next2591 = $tmp2592;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2592));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2593));
                        if (((panda$core$Bit) { next2591 == NULL }).value) {
                        {
                            $tmp2595 = NULL;
                            $returnValue2542 = $tmp2595;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2595));
                            $tmp2590 = 0;
                            goto $l2588;
                            $l2596:;
                            $tmp2537 = 1;
                            goto $l2535;
                            $l2597:;
                            return $returnValue2542;
                        }
                        }
                        {
                            $tmp2599 = result2538;
                            org$pandalanguage$pandac$ASTNode* $tmp2602 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2603, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2602, $tmp2603, op2548.position, result2538, op2548.kind, next2591);
                            $tmp2601 = $tmp2602;
                            $tmp2600 = $tmp2601;
                            result2538 = $tmp2600;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2600));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2601));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2599));
                        }
                    }
                    $tmp2590 = -1;
                    goto $l2588;
                    $l2588:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2591));
                    next2591 = NULL;
                    switch ($tmp2590) {
                        case -1: goto $l2604;
                        case 0: goto $l2596;
                    }
                    $l2604:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2548);
                    $tmp2605 = result2538;
                    $returnValue2542 = $tmp2605;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2605));
                    $tmp2537 = 2;
                    goto $l2535;
                    $l2606:;
                    return $returnValue2542;
                }
                }
            }
        }
        }
        $l2547:;
    }
    $tmp2537 = -1;
    goto $l2535;
    $l2535:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2538));
    result2538 = NULL;
    switch ($tmp2537) {
        case -1: goto $l2608;
        case 2: goto $l2606;
        case 1: goto $l2597;
        case 0: goto $l2544;
    }
    $l2608:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2612 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2613;
    org$pandalanguage$pandac$ASTNode* $tmp2614;
    org$pandalanguage$pandac$ASTNode* $returnValue2616;
    org$pandalanguage$pandac$ASTNode* $tmp2617;
    org$pandalanguage$pandac$parser$Token op2622;
    org$pandalanguage$pandac$parser$Token$Kind $match$1148_132624;
    panda$core$Int64 $tmp2626;
    panda$core$Int64 $tmp2629;
    org$pandalanguage$pandac$ASTNode* next2635 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2636;
    org$pandalanguage$pandac$ASTNode* $tmp2637;
    org$pandalanguage$pandac$ASTNode* $tmp2639;
    org$pandalanguage$pandac$ASTNode* $tmp2643;
    org$pandalanguage$pandac$ASTNode* $tmp2644;
    org$pandalanguage$pandac$ASTNode* $tmp2645;
    panda$core$Int64 $tmp2647;
    org$pandalanguage$pandac$ASTNode* $tmp2649;
    int $tmp2611;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2615 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2614 = $tmp2615;
        $tmp2613 = $tmp2614;
        result2612 = $tmp2613;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2613));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2614));
        if (((panda$core$Bit) { result2612 == NULL }).value) {
        {
            $tmp2617 = NULL;
            $returnValue2616 = $tmp2617;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2617));
            $tmp2611 = 0;
            goto $l2609;
            $l2618:;
            return $returnValue2616;
        }
        }
        $l2620:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2623 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2622 = $tmp2623;
            {
                $match$1148_132624 = op2622.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2626, 66);
                panda$core$Bit $tmp2627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1148_132624.$rawValue, $tmp2626);
                bool $tmp2625 = $tmp2627.value;
                if ($tmp2625) goto $l2628;
                panda$core$Int64$init$builtin_int64(&$tmp2629, 70);
                panda$core$Bit $tmp2630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1148_132624.$rawValue, $tmp2629);
                $tmp2625 = $tmp2630.value;
                $l2628:;
                panda$core$Bit $tmp2631 = { $tmp2625 };
                if ($tmp2631.value) {
                {
                    int $tmp2634;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2638 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2637 = $tmp2638;
                        $tmp2636 = $tmp2637;
                        next2635 = $tmp2636;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2636));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2637));
                        if (((panda$core$Bit) { next2635 == NULL }).value) {
                        {
                            $tmp2639 = NULL;
                            $returnValue2616 = $tmp2639;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2639));
                            $tmp2634 = 0;
                            goto $l2632;
                            $l2640:;
                            $tmp2611 = 1;
                            goto $l2609;
                            $l2641:;
                            return $returnValue2616;
                        }
                        }
                        {
                            $tmp2643 = result2612;
                            org$pandalanguage$pandac$ASTNode* $tmp2646 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2647, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2646, $tmp2647, op2622.position, result2612, op2622.kind, next2635);
                            $tmp2645 = $tmp2646;
                            $tmp2644 = $tmp2645;
                            result2612 = $tmp2644;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2644));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2645));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2643));
                        }
                    }
                    $tmp2634 = -1;
                    goto $l2632;
                    $l2632:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2635));
                    next2635 = NULL;
                    switch ($tmp2634) {
                        case -1: goto $l2648;
                        case 0: goto $l2640;
                    }
                    $l2648:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2622);
                    $tmp2649 = result2612;
                    $returnValue2616 = $tmp2649;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2649));
                    $tmp2611 = 2;
                    goto $l2609;
                    $l2650:;
                    return $returnValue2616;
                }
                }
            }
        }
        }
        $l2621:;
    }
    $tmp2611 = -1;
    goto $l2609;
    $l2609:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2612));
    result2612 = NULL;
    switch ($tmp2611) {
        case -1: goto $l2652;
        case 2: goto $l2650;
        case 0: goto $l2618;
        case 1: goto $l2641;
    }
    $l2652:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2656 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2657;
    org$pandalanguage$pandac$ASTNode* $tmp2658;
    org$pandalanguage$pandac$ASTNode* $returnValue2660;
    org$pandalanguage$pandac$ASTNode* $tmp2661;
    org$pandalanguage$pandac$parser$Token$nullable op2669;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2670;
    panda$core$Int64 $tmp2671;
    org$pandalanguage$pandac$ASTNode* next2674 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2675;
    org$pandalanguage$pandac$ASTNode* $tmp2676;
    org$pandalanguage$pandac$ASTNode* $tmp2678;
    org$pandalanguage$pandac$ASTNode* $tmp2682;
    org$pandalanguage$pandac$ASTNode* $tmp2683;
    org$pandalanguage$pandac$ASTNode* $tmp2684;
    panda$core$Int64 $tmp2686;
    org$pandalanguage$pandac$ASTNode* $tmp2688;
    int $tmp2655;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2659 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2658 = $tmp2659;
        $tmp2657 = $tmp2658;
        result2656 = $tmp2657;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2657));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2658));
        if (((panda$core$Bit) { result2656 == NULL }).value) {
        {
            $tmp2661 = NULL;
            $returnValue2660 = $tmp2661;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2661));
            $tmp2655 = 0;
            goto $l2653;
            $l2662:;
            return $returnValue2660;
        }
        }
        $l2664:;
        while (true) {
        {
            int $tmp2668;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2671, 68);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2670, $tmp2671);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2672 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2670);
                op2669 = $tmp2672;
                if (((panda$core$Bit) { !op2669.nonnull }).value) {
                {
                    $tmp2668 = 0;
                    goto $l2666;
                    $l2673:;
                    goto $l2665;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2677 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2676 = $tmp2677;
                $tmp2675 = $tmp2676;
                next2674 = $tmp2675;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2675));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2676));
                if (((panda$core$Bit) { next2674 == NULL }).value) {
                {
                    $tmp2678 = NULL;
                    $returnValue2660 = $tmp2678;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2678));
                    $tmp2668 = 1;
                    goto $l2666;
                    $l2679:;
                    $tmp2655 = 1;
                    goto $l2653;
                    $l2680:;
                    return $returnValue2660;
                }
                }
                {
                    $tmp2682 = result2656;
                    org$pandalanguage$pandac$ASTNode* $tmp2685 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2686, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2685, $tmp2686, ((org$pandalanguage$pandac$parser$Token) op2669.value).position, result2656, ((org$pandalanguage$pandac$parser$Token) op2669.value).kind, next2674);
                    $tmp2684 = $tmp2685;
                    $tmp2683 = $tmp2684;
                    result2656 = $tmp2683;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2683));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2684));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2682));
                }
            }
            $tmp2668 = -1;
            goto $l2666;
            $l2666:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2674));
            next2674 = NULL;
            switch ($tmp2668) {
                case 0: goto $l2673;
                case -1: goto $l2687;
                case 1: goto $l2679;
            }
            $l2687:;
        }
        }
        $l2665:;
        $tmp2688 = result2656;
        $returnValue2660 = $tmp2688;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2688));
        $tmp2655 = 2;
        goto $l2653;
        $l2689:;
        return $returnValue2660;
    }
    $l2653:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2656));
    result2656 = NULL;
    switch ($tmp2655) {
        case 1: goto $l2680;
        case 2: goto $l2689;
        case 0: goto $l2662;
    }
    $l2691:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2695;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2696;
    panda$core$Int64 $tmp2697;
    org$pandalanguage$pandac$ASTNode* $returnValue2700;
    org$pandalanguage$pandac$ASTNode* $tmp2701;
    org$pandalanguage$pandac$ASTNode* test2704 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2705;
    org$pandalanguage$pandac$ASTNode* $tmp2706;
    org$pandalanguage$pandac$ASTNode* $tmp2708;
    panda$collections$ImmutableArray* ifTrue2711 = NULL;
    panda$collections$ImmutableArray* $tmp2712;
    panda$collections$ImmutableArray* $tmp2713;
    org$pandalanguage$pandac$ASTNode* $tmp2715;
    org$pandalanguage$pandac$ASTNode* ifFalse2718 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2719;
    panda$core$Int64 $tmp2720;
    panda$core$Int64 $tmp2723;
    org$pandalanguage$pandac$ASTNode* $tmp2725;
    org$pandalanguage$pandac$ASTNode* $tmp2726;
    org$pandalanguage$pandac$ASTNode* $tmp2727;
    org$pandalanguage$pandac$ASTNode* $tmp2729;
    org$pandalanguage$pandac$ASTNode* $tmp2732;
    org$pandalanguage$pandac$ASTNode* $tmp2733;
    org$pandalanguage$pandac$ASTNode* $tmp2734;
    org$pandalanguage$pandac$ASTNode* $tmp2736;
    org$pandalanguage$pandac$ASTNode* $tmp2739;
    org$pandalanguage$pandac$ASTNode* $tmp2740;
    org$pandalanguage$pandac$ASTNode* $tmp2741;
    org$pandalanguage$pandac$ASTNode* $tmp2742;
    panda$core$Int64 $tmp2744;
    int $tmp2694;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2697, 36);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2696, $tmp2697);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2699 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2696, &$s2698);
        start2695 = $tmp2699;
        if (((panda$core$Bit) { !start2695.nonnull }).value) {
        {
            $tmp2701 = NULL;
            $returnValue2700 = $tmp2701;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2701));
            $tmp2694 = 0;
            goto $l2692;
            $l2702:;
            return $returnValue2700;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2707 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2706 = $tmp2707;
        $tmp2705 = $tmp2706;
        test2704 = $tmp2705;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2705));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2706));
        if (((panda$core$Bit) { test2704 == NULL }).value) {
        {
            $tmp2708 = NULL;
            $returnValue2700 = $tmp2708;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2708));
            $tmp2694 = 1;
            goto $l2692;
            $l2709:;
            return $returnValue2700;
        }
        }
        panda$collections$ImmutableArray* $tmp2714 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2713 = $tmp2714;
        $tmp2712 = $tmp2713;
        ifTrue2711 = $tmp2712;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2712));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2713));
        if (((panda$core$Bit) { ifTrue2711 == NULL }).value) {
        {
            $tmp2715 = NULL;
            $returnValue2700 = $tmp2715;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2715));
            $tmp2694 = 2;
            goto $l2692;
            $l2716:;
            return $returnValue2700;
        }
        }
        memset(&ifFalse2718, 0, sizeof(ifFalse2718));
        panda$core$Int64$init$builtin_int64(&$tmp2720, 37);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2719, $tmp2720);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2721 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2719);
        if (((panda$core$Bit) { $tmp2721.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2722 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp2723, 36);
            panda$core$Bit $tmp2724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2722.kind.$rawValue, $tmp2723);
            if ($tmp2724.value) {
            {
                {
                    $tmp2725 = ifFalse2718;
                    org$pandalanguage$pandac$ASTNode* $tmp2728 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2727 = $tmp2728;
                    $tmp2726 = $tmp2727;
                    ifFalse2718 = $tmp2726;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2726));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2727));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2725));
                }
                if (((panda$core$Bit) { ifFalse2718 == NULL }).value) {
                {
                    $tmp2729 = NULL;
                    $returnValue2700 = $tmp2729;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2729));
                    $tmp2694 = 3;
                    goto $l2692;
                    $l2730:;
                    return $returnValue2700;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2732 = ifFalse2718;
                    org$pandalanguage$pandac$ASTNode* $tmp2735 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2734 = $tmp2735;
                    $tmp2733 = $tmp2734;
                    ifFalse2718 = $tmp2733;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2733));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2734));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2732));
                }
                if (((panda$core$Bit) { ifFalse2718 == NULL }).value) {
                {
                    $tmp2736 = NULL;
                    $returnValue2700 = $tmp2736;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2736));
                    $tmp2694 = 4;
                    goto $l2692;
                    $l2737:;
                    return $returnValue2700;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp2739 = ifFalse2718;
                $tmp2740 = NULL;
                ifFalse2718 = $tmp2740;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2740));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2739));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2743 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2744, 21);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2743, $tmp2744, ((org$pandalanguage$pandac$parser$Token) start2695.value).position, test2704, ifTrue2711, ifFalse2718);
        $tmp2742 = $tmp2743;
        $tmp2741 = $tmp2742;
        $returnValue2700 = $tmp2741;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2741));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2742));
        $tmp2694 = 5;
        goto $l2692;
        $l2745:;
        return $returnValue2700;
    }
    $l2692:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse2718));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue2711));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2704));
    test2704 = NULL;
    ifTrue2711 = NULL;
    switch ($tmp2694) {
        case 2: goto $l2716;
        case 4: goto $l2737;
        case 3: goto $l2730;
        case 1: goto $l2709;
        case 0: goto $l2702;
        case 5: goto $l2745;
    }
    $l2747:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp2748;
    panda$core$Int64 $tmp2749;
    org$pandalanguage$pandac$ASTNode* $returnValue2752;
    org$pandalanguage$pandac$ASTNode* $tmp2753;
    org$pandalanguage$pandac$ASTNode* $tmp2755;
    org$pandalanguage$pandac$ASTNode* $tmp2756;
    panda$core$Bit $tmp2757;
    panda$core$Int64$init$builtin_int64(&$tmp2749, 95);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2748, $tmp2749);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2751 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2748, &$s2750);
    if (((panda$core$Bit) { !$tmp2751.nonnull }).value) {
    {
        $tmp2753 = NULL;
        $returnValue2752 = $tmp2753;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2753));
        return $returnValue2752;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp2757, false);
    org$pandalanguage$pandac$ASTNode* $tmp2758 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2757);
    $tmp2756 = $tmp2758;
    $tmp2755 = $tmp2756;
    $returnValue2752 = $tmp2755;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2755));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2756));
    return $returnValue2752;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id2760;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2761;
    panda$core$Int64 $tmp2762;
    org$pandalanguage$pandac$ASTNode* $returnValue2765;
    org$pandalanguage$pandac$ASTNode* $tmp2766;
    panda$core$Int64 $tmp2769;
    org$pandalanguage$pandac$ASTNode* type2774 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2775;
    org$pandalanguage$pandac$ASTNode* $tmp2776;
    org$pandalanguage$pandac$ASTNode* $tmp2778;
    org$pandalanguage$pandac$ASTNode* $tmp2781;
    org$pandalanguage$pandac$ASTNode* $tmp2782;
    panda$core$Int64 $tmp2784;
    panda$core$String* $tmp2785;
    org$pandalanguage$pandac$ASTNode* $tmp2790;
    org$pandalanguage$pandac$ASTNode* $tmp2791;
    panda$core$Int64 $tmp2793;
    panda$core$String* $tmp2794;
    panda$core$Int64$init$builtin_int64(&$tmp2762, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2761, $tmp2762);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2764 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2761, &$s2763);
    id2760 = $tmp2764;
    if (((panda$core$Bit) { !id2760.nonnull }).value) {
    {
        $tmp2766 = NULL;
        $returnValue2765 = $tmp2766;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2766));
        return $returnValue2765;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2768 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Int64$init$builtin_int64(&$tmp2769, 95);
    panda$core$Bit $tmp2770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2768.kind.$rawValue, $tmp2769);
    if ($tmp2770.value) {
    {
        int $tmp2773;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2777 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2776 = $tmp2777;
            $tmp2775 = $tmp2776;
            type2774 = $tmp2775;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2775));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2776));
            if (((panda$core$Bit) { type2774 == NULL }).value) {
            {
                $tmp2778 = NULL;
                $returnValue2765 = $tmp2778;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2778));
                $tmp2773 = 0;
                goto $l2771;
                $l2779:;
                return $returnValue2765;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp2783 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp2784, 44);
            panda$core$String* $tmp2786 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2760.value));
            $tmp2785 = $tmp2786;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2783, $tmp2784, ((org$pandalanguage$pandac$parser$Token) id2760.value).position, $tmp2785, type2774);
            $tmp2782 = $tmp2783;
            $tmp2781 = $tmp2782;
            $returnValue2765 = $tmp2781;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2781));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2782));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2785));
            $tmp2773 = 1;
            goto $l2771;
            $l2787:;
            return $returnValue2765;
        }
        $l2771:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type2774));
        type2774 = NULL;
        switch ($tmp2773) {
            case 1: goto $l2787;
            case 0: goto $l2779;
        }
        $l2789:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2792 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp2793, 20);
    panda$core$String* $tmp2795 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2760.value));
    $tmp2794 = $tmp2795;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2792, $tmp2793, ((org$pandalanguage$pandac$parser$Token) id2760.value).position, $tmp2794);
    $tmp2791 = $tmp2792;
    $tmp2790 = $tmp2791;
    $returnValue2765 = $tmp2790;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2790));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2791));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2794));
    return $returnValue2765;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2800;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2801;
    panda$core$Int64 $tmp2802;
    org$pandalanguage$pandac$ASTNode* $returnValue2805;
    org$pandalanguage$pandac$ASTNode* $tmp2806;
    org$pandalanguage$pandac$ASTNode* t2809 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2810;
    org$pandalanguage$pandac$ASTNode* $tmp2811;
    org$pandalanguage$pandac$ASTNode* $tmp2813;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2816;
    panda$core$Int64 $tmp2817;
    org$pandalanguage$pandac$ASTNode* $tmp2820;
    org$pandalanguage$pandac$ASTNode* list2823 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2824;
    org$pandalanguage$pandac$ASTNode* $tmp2825;
    org$pandalanguage$pandac$ASTNode* $tmp2827;
    panda$collections$ImmutableArray* block2830 = NULL;
    panda$collections$ImmutableArray* $tmp2831;
    panda$collections$ImmutableArray* $tmp2832;
    org$pandalanguage$pandac$ASTNode* $tmp2834;
    org$pandalanguage$pandac$ASTNode* $tmp2837;
    org$pandalanguage$pandac$ASTNode* $tmp2838;
    panda$core$Int64 $tmp2840;
    int $tmp2799;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2802, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2801, $tmp2802);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2804 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2801, &$s2803);
        start2800 = $tmp2804;
        if (((panda$core$Bit) { !start2800.nonnull }).value) {
        {
            $tmp2806 = NULL;
            $returnValue2805 = $tmp2806;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2806));
            $tmp2799 = 0;
            goto $l2797;
            $l2807:;
            return $returnValue2805;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2812 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2811 = $tmp2812;
        $tmp2810 = $tmp2811;
        t2809 = $tmp2810;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2810));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2811));
        if (((panda$core$Bit) { t2809 == NULL }).value) {
        {
            $tmp2813 = NULL;
            $returnValue2805 = $tmp2813;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2813));
            $tmp2799 = 1;
            goto $l2797;
            $l2814:;
            return $returnValue2805;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2817, 34);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2816, $tmp2817);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2819 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2816, &$s2818);
        if (((panda$core$Bit) { !$tmp2819.nonnull }).value) {
        {
            $tmp2820 = NULL;
            $returnValue2805 = $tmp2820;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2820));
            $tmp2799 = 2;
            goto $l2797;
            $l2821:;
            return $returnValue2805;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2826 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2825 = $tmp2826;
        $tmp2824 = $tmp2825;
        list2823 = $tmp2824;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2824));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2825));
        if (((panda$core$Bit) { list2823 == NULL }).value) {
        {
            $tmp2827 = NULL;
            $returnValue2805 = $tmp2827;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2827));
            $tmp2799 = 3;
            goto $l2797;
            $l2828:;
            return $returnValue2805;
        }
        }
        panda$collections$ImmutableArray* $tmp2833 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2832 = $tmp2833;
        $tmp2831 = $tmp2832;
        block2830 = $tmp2831;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2831));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2832));
        if (((panda$core$Bit) { block2830 == NULL }).value) {
        {
            $tmp2834 = NULL;
            $returnValue2805 = $tmp2834;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2834));
            $tmp2799 = 4;
            goto $l2797;
            $l2835:;
            return $returnValue2805;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2839 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2840, 18);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2839, $tmp2840, ((org$pandalanguage$pandac$parser$Token) start2800.value).position, p_label, t2809, list2823, block2830);
        $tmp2838 = $tmp2839;
        $tmp2837 = $tmp2838;
        $returnValue2805 = $tmp2837;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2837));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2838));
        $tmp2799 = 5;
        goto $l2797;
        $l2841:;
        return $returnValue2805;
    }
    $l2797:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2830));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2823));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2809));
    t2809 = NULL;
    list2823 = NULL;
    block2830 = NULL;
    switch ($tmp2799) {
        case 5: goto $l2841;
        case 3: goto $l2828;
        case 2: goto $l2821;
        case 4: goto $l2835;
        case 1: goto $l2814;
        case 0: goto $l2807;
    }
    $l2843:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2847;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2848;
    panda$core$Int64 $tmp2849;
    org$pandalanguage$pandac$ASTNode* $returnValue2852;
    org$pandalanguage$pandac$ASTNode* $tmp2853;
    org$pandalanguage$pandac$ASTNode* test2856 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2857;
    org$pandalanguage$pandac$ASTNode* $tmp2858;
    org$pandalanguage$pandac$ASTNode* $tmp2860;
    panda$collections$ImmutableArray* body2863 = NULL;
    panda$collections$ImmutableArray* $tmp2864;
    panda$collections$ImmutableArray* $tmp2865;
    org$pandalanguage$pandac$ASTNode* $tmp2867;
    org$pandalanguage$pandac$ASTNode* $tmp2870;
    org$pandalanguage$pandac$ASTNode* $tmp2871;
    panda$core$Int64 $tmp2873;
    int $tmp2846;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2849, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2848, $tmp2849);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2851 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2848, &$s2850);
        start2847 = $tmp2851;
        if (((panda$core$Bit) { !start2847.nonnull }).value) {
        {
            $tmp2853 = NULL;
            $returnValue2852 = $tmp2853;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2853));
            $tmp2846 = 0;
            goto $l2844;
            $l2854:;
            return $returnValue2852;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2859 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2858 = $tmp2859;
        $tmp2857 = $tmp2858;
        test2856 = $tmp2857;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2857));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2858));
        if (((panda$core$Bit) { test2856 == NULL }).value) {
        {
            $tmp2860 = NULL;
            $returnValue2852 = $tmp2860;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2860));
            $tmp2846 = 1;
            goto $l2844;
            $l2861:;
            return $returnValue2852;
        }
        }
        panda$collections$ImmutableArray* $tmp2866 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2865 = $tmp2866;
        $tmp2864 = $tmp2865;
        body2863 = $tmp2864;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2864));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2865));
        if (((panda$core$Bit) { body2863 == NULL }).value) {
        {
            $tmp2867 = NULL;
            $returnValue2852 = $tmp2867;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2867));
            $tmp2846 = 2;
            goto $l2844;
            $l2868:;
            return $returnValue2852;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2872 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2873, 49);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2872, $tmp2873, ((org$pandalanguage$pandac$parser$Token) start2847.value).position, p_label, test2856, body2863);
        $tmp2871 = $tmp2872;
        $tmp2870 = $tmp2871;
        $returnValue2852 = $tmp2870;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2870));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2871));
        $tmp2846 = 3;
        goto $l2844;
        $l2874:;
        return $returnValue2852;
    }
    $l2844:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2863));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2856));
    test2856 = NULL;
    body2863 = NULL;
    switch ($tmp2846) {
        case 2: goto $l2868;
        case 1: goto $l2861;
        case 0: goto $l2854;
        case 3: goto $l2874;
    }
    $l2876:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2880;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2881;
    panda$core$Int64 $tmp2882;
    org$pandalanguage$pandac$ASTNode* $returnValue2885;
    org$pandalanguage$pandac$ASTNode* $tmp2886;
    panda$collections$ImmutableArray* body2889 = NULL;
    panda$collections$ImmutableArray* $tmp2890;
    panda$collections$ImmutableArray* $tmp2891;
    org$pandalanguage$pandac$ASTNode* $tmp2893;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2896;
    panda$core$Int64 $tmp2897;
    org$pandalanguage$pandac$ASTNode* $tmp2900;
    org$pandalanguage$pandac$ASTNode* test2903 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2904;
    org$pandalanguage$pandac$ASTNode* $tmp2905;
    org$pandalanguage$pandac$ASTNode* $tmp2907;
    org$pandalanguage$pandac$ASTNode* $tmp2910;
    org$pandalanguage$pandac$ASTNode* $tmp2911;
    panda$core$Int64 $tmp2913;
    int $tmp2879;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2882, 30);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2881, $tmp2882);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2884 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2881, &$s2883);
        start2880 = $tmp2884;
        if (((panda$core$Bit) { !start2880.nonnull }).value) {
        {
            $tmp2886 = NULL;
            $returnValue2885 = $tmp2886;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2886));
            $tmp2879 = 0;
            goto $l2877;
            $l2887:;
            return $returnValue2885;
        }
        }
        panda$collections$ImmutableArray* $tmp2892 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2891 = $tmp2892;
        $tmp2890 = $tmp2891;
        body2889 = $tmp2890;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2890));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2891));
        if (((panda$core$Bit) { body2889 == NULL }).value) {
        {
            $tmp2893 = NULL;
            $returnValue2885 = $tmp2893;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2893));
            $tmp2879 = 1;
            goto $l2877;
            $l2894:;
            return $returnValue2885;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2897, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2896, $tmp2897);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2899 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2896, &$s2898);
        if (((panda$core$Bit) { !$tmp2899.nonnull }).value) {
        {
            $tmp2900 = NULL;
            $returnValue2885 = $tmp2900;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2900));
            $tmp2879 = 2;
            goto $l2877;
            $l2901:;
            return $returnValue2885;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2906 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2905 = $tmp2906;
        $tmp2904 = $tmp2905;
        test2903 = $tmp2904;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2904));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2905));
        if (((panda$core$Bit) { test2903 == NULL }).value) {
        {
            $tmp2907 = NULL;
            $returnValue2885 = $tmp2907;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2907));
            $tmp2879 = 3;
            goto $l2877;
            $l2908:;
            return $returnValue2885;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2912 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2913, 14);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp2912, $tmp2913, ((org$pandalanguage$pandac$parser$Token) start2880.value).position, p_label, body2889, test2903);
        $tmp2911 = $tmp2912;
        $tmp2910 = $tmp2911;
        $returnValue2885 = $tmp2910;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2910));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2911));
        $tmp2879 = 4;
        goto $l2877;
        $l2914:;
        return $returnValue2885;
    }
    $l2877:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2903));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2889));
    body2889 = NULL;
    test2903 = NULL;
    switch ($tmp2879) {
        case 2: goto $l2901;
        case 4: goto $l2914;
        case 1: goto $l2894;
        case 3: goto $l2908;
        case 0: goto $l2887;
    }
    $l2916:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2920;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2921;
    panda$core$Int64 $tmp2922;
    org$pandalanguage$pandac$ASTNode* $returnValue2925;
    org$pandalanguage$pandac$ASTNode* $tmp2926;
    panda$collections$ImmutableArray* body2929 = NULL;
    panda$collections$ImmutableArray* $tmp2930;
    panda$collections$ImmutableArray* $tmp2931;
    org$pandalanguage$pandac$ASTNode* $tmp2933;
    org$pandalanguage$pandac$ASTNode* $tmp2936;
    org$pandalanguage$pandac$ASTNode* $tmp2937;
    panda$core$Int64 $tmp2939;
    int $tmp2919;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2922, 35);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2921, $tmp2922);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2924 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2921, &$s2923);
        start2920 = $tmp2924;
        if (((panda$core$Bit) { !start2920.nonnull }).value) {
        {
            $tmp2926 = NULL;
            $returnValue2925 = $tmp2926;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2926));
            $tmp2919 = 0;
            goto $l2917;
            $l2927:;
            return $returnValue2925;
        }
        }
        panda$collections$ImmutableArray* $tmp2932 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2931 = $tmp2932;
        $tmp2930 = $tmp2931;
        body2929 = $tmp2930;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2930));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2931));
        if (((panda$core$Bit) { body2929 == NULL }).value) {
        {
            $tmp2933 = NULL;
            $returnValue2925 = $tmp2933;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2933));
            $tmp2919 = 1;
            goto $l2917;
            $l2934:;
            return $returnValue2925;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2938 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2939, 24);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2938, $tmp2939, ((org$pandalanguage$pandac$parser$Token) start2920.value).position, p_label, body2929);
        $tmp2937 = $tmp2938;
        $tmp2936 = $tmp2937;
        $returnValue2925 = $tmp2936;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2936));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2937));
        $tmp2919 = 2;
        goto $l2917;
        $l2940:;
        return $returnValue2925;
    }
    $l2917:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2929));
    body2929 = NULL;
    switch ($tmp2919) {
        case 1: goto $l2934;
        case 0: goto $l2927;
        case 2: goto $l2940;
    }
    $l2942:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2946;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2947;
    panda$core$Int64 $tmp2948;
    org$pandalanguage$pandac$ASTNode* $returnValue2951;
    org$pandalanguage$pandac$ASTNode* $tmp2952;
    org$pandalanguage$pandac$ASTNode* expr2955 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2956;
    org$pandalanguage$pandac$ASTNode* $tmp2957;
    org$pandalanguage$pandac$ASTNode* $tmp2959;
    org$pandalanguage$pandac$ASTNode* message2962 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2963;
    panda$core$Int64 $tmp2964;
    org$pandalanguage$pandac$ASTNode* $tmp2966;
    org$pandalanguage$pandac$ASTNode* $tmp2967;
    org$pandalanguage$pandac$ASTNode* $tmp2968;
    org$pandalanguage$pandac$ASTNode* $tmp2970;
    org$pandalanguage$pandac$ASTNode* $tmp2973;
    org$pandalanguage$pandac$ASTNode* $tmp2974;
    org$pandalanguage$pandac$ASTNode* $tmp2975;
    org$pandalanguage$pandac$ASTNode* $tmp2976;
    panda$core$Int64 $tmp2978;
    int $tmp2945;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2948, 44);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2947, $tmp2948);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2950 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2947, &$s2949);
        start2946 = $tmp2950;
        if (((panda$core$Bit) { !start2946.nonnull }).value) {
        {
            $tmp2952 = NULL;
            $returnValue2951 = $tmp2952;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2952));
            $tmp2945 = 0;
            goto $l2943;
            $l2953:;
            return $returnValue2951;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2958 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2957 = $tmp2958;
        $tmp2956 = $tmp2957;
        expr2955 = $tmp2956;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2956));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2957));
        if (((panda$core$Bit) { expr2955 == NULL }).value) {
        {
            $tmp2959 = NULL;
            $returnValue2951 = $tmp2959;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2959));
            $tmp2945 = 1;
            goto $l2943;
            $l2960:;
            return $returnValue2951;
        }
        }
        memset(&message2962, 0, sizeof(message2962));
        panda$core$Int64$init$builtin_int64(&$tmp2964, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2963, $tmp2964);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2965 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2963);
        if (((panda$core$Bit) { $tmp2965.nonnull }).value) {
        {
            {
                $tmp2966 = message2962;
                org$pandalanguage$pandac$ASTNode* $tmp2969 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2968 = $tmp2969;
                $tmp2967 = $tmp2968;
                message2962 = $tmp2967;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2967));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2968));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2966));
            }
            if (((panda$core$Bit) { message2962 == NULL }).value) {
            {
                $tmp2970 = NULL;
                $returnValue2951 = $tmp2970;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2970));
                $tmp2945 = 2;
                goto $l2943;
                $l2971:;
                return $returnValue2951;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2973 = message2962;
                $tmp2974 = NULL;
                message2962 = $tmp2974;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2974));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2973));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2977 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2978, 1);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2977, $tmp2978, ((org$pandalanguage$pandac$parser$Token) start2946.value).position, expr2955, message2962);
        $tmp2976 = $tmp2977;
        $tmp2975 = $tmp2976;
        $returnValue2951 = $tmp2975;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2975));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2976));
        $tmp2945 = 3;
        goto $l2943;
        $l2979:;
        return $returnValue2951;
    }
    $l2943:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message2962));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2955));
    expr2955 = NULL;
    switch ($tmp2945) {
        case 2: goto $l2971;
        case 3: goto $l2979;
        case 1: goto $l2960;
        case 0: goto $l2953;
    }
    $l2981:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2992;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2993;
    panda$core$Int64 $tmp2994;
    org$pandalanguage$pandac$ASTNode* $returnValue2997;
    org$pandalanguage$pandac$ASTNode* $tmp2998;
    panda$core$Bit $tmp3002;
    panda$collections$Array* expressions3003 = NULL;
    panda$collections$Array* $tmp3004;
    panda$collections$Array* $tmp3005;
    org$pandalanguage$pandac$ASTNode* expr3007 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3008;
    org$pandalanguage$pandac$ASTNode* $tmp3009;
    panda$core$Bit $tmp3011;
    org$pandalanguage$pandac$ASTNode* $tmp3012;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3019;
    panda$core$Int64 $tmp3020;
    org$pandalanguage$pandac$ASTNode* $tmp3022;
    org$pandalanguage$pandac$ASTNode* $tmp3023;
    org$pandalanguage$pandac$ASTNode* $tmp3024;
    panda$core$Bit $tmp3026;
    org$pandalanguage$pandac$ASTNode* $tmp3027;
    panda$core$Bit $tmp3031;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3032;
    panda$core$Int64 $tmp3033;
    org$pandalanguage$pandac$ASTNode* $tmp3036;
    panda$collections$Array* statements3040 = NULL;
    panda$collections$Array* $tmp3041;
    panda$collections$Array* $tmp3042;
    org$pandalanguage$pandac$parser$Token$Kind $match$1388_133046;
    panda$core$Int64 $tmp3050;
    panda$core$Int64 $tmp3053;
    panda$core$Int64 $tmp3057;
    panda$core$Int64 $tmp3062;
    panda$core$Int64 $tmp3065;
    panda$core$Int64 $tmp3069;
    org$pandalanguage$pandac$ASTNode* stmt3075 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3076;
    org$pandalanguage$pandac$ASTNode* $tmp3077;
    org$pandalanguage$pandac$ASTNode* $tmp3079;
    org$pandalanguage$pandac$ASTNode* stmt3089 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3090;
    org$pandalanguage$pandac$ASTNode* $tmp3091;
    org$pandalanguage$pandac$ASTNode* $tmp3093;
    org$pandalanguage$pandac$ASTNode* $tmp3099;
    org$pandalanguage$pandac$ASTNode* $tmp3100;
    panda$core$Int64 $tmp3102;
    panda$collections$ImmutableArray* $tmp3103;
    panda$collections$ImmutableArray* $tmp3105;
    int $tmp2984;
    {
        if (self->allowLambdas.value) goto $l2985; else goto $l2986;
        $l2986:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2987, (panda$core$Int64) { 1361 }, &$s2988);
        abort();
        $l2985:;
        int $tmp2991;
        {
            panda$core$Int64$init$builtin_int64(&$tmp2994, 39);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2993, $tmp2994);
            org$pandalanguage$pandac$parser$Token$nullable $tmp2996 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2993, &$s2995);
            start2992 = $tmp2996;
            if (((panda$core$Bit) { !start2992.nonnull }).value) {
            {
                $tmp2998 = NULL;
                $returnValue2997 = $tmp2998;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2998));
                $tmp2991 = 0;
                goto $l2989;
                $l2999:;
                $tmp2984 = 0;
                goto $l2982;
                $l3000:;
                return $returnValue2997;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp3002, false);
            self->allowLambdas = $tmp3002;
            panda$collections$Array* $tmp3006 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3006);
            $tmp3005 = $tmp3006;
            $tmp3004 = $tmp3005;
            expressions3003 = $tmp3004;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3004));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3005));
            org$pandalanguage$pandac$ASTNode* $tmp3010 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3009 = $tmp3010;
            $tmp3008 = $tmp3009;
            expr3007 = $tmp3008;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3008));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3009));
            if (((panda$core$Bit) { expr3007 == NULL }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp3011, true);
                self->allowLambdas = $tmp3011;
                $tmp3012 = NULL;
                $returnValue2997 = $tmp3012;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3012));
                $tmp2991 = 1;
                goto $l2989;
                $l3013:;
                $tmp2984 = 1;
                goto $l2982;
                $l3014:;
                return $returnValue2997;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions3003, ((panda$core$Object*) expr3007));
            $l3016:;
            panda$core$Int64$init$builtin_int64(&$tmp3020, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3019, $tmp3020);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3021 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3019);
            bool $tmp3018 = ((panda$core$Bit) { $tmp3021.nonnull }).value;
            if (!$tmp3018) goto $l3017;
            {
                {
                    $tmp3022 = expr3007;
                    org$pandalanguage$pandac$ASTNode* $tmp3025 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3024 = $tmp3025;
                    $tmp3023 = $tmp3024;
                    expr3007 = $tmp3023;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3023));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3024));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3022));
                }
                if (((panda$core$Bit) { expr3007 == NULL }).value) {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp3026, true);
                    self->allowLambdas = $tmp3026;
                    $tmp3027 = NULL;
                    $returnValue2997 = $tmp3027;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3027));
                    $tmp2991 = 2;
                    goto $l2989;
                    $l3028:;
                    $tmp2984 = 2;
                    goto $l2982;
                    $l3029:;
                    return $returnValue2997;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(expressions3003, ((panda$core$Object*) expr3007));
            }
            goto $l3016;
            $l3017:;
            panda$core$Bit$init$builtin_bit(&$tmp3031, true);
            self->allowLambdas = $tmp3031;
            panda$core$Int64$init$builtin_int64(&$tmp3033, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3032, $tmp3033);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3035 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3032, &$s3034);
            if (((panda$core$Bit) { !$tmp3035.nonnull }).value) {
            {
                $tmp3036 = NULL;
                $returnValue2997 = $tmp3036;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3036));
                $tmp2991 = 3;
                goto $l2989;
                $l3037:;
                $tmp2984 = 3;
                goto $l2982;
                $l3038:;
                return $returnValue2997;
            }
            }
            panda$collections$Array* $tmp3043 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3043);
            $tmp3042 = $tmp3043;
            $tmp3041 = $tmp3042;
            statements3040 = $tmp3041;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3041));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3042));
            $l3044:;
            while (true) {
            {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3047 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    $match$1388_133046 = $tmp3047.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp3050, 39);
                    panda$core$Bit $tmp3051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1388_133046.$rawValue, $tmp3050);
                    bool $tmp3049 = $tmp3051.value;
                    if ($tmp3049) goto $l3052;
                    panda$core$Int64$init$builtin_int64(&$tmp3053, 40);
                    panda$core$Bit $tmp3054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1388_133046.$rawValue, $tmp3053);
                    $tmp3049 = $tmp3054.value;
                    $l3052:;
                    panda$core$Bit $tmp3055 = { $tmp3049 };
                    bool $tmp3048 = $tmp3055.value;
                    if ($tmp3048) goto $l3056;
                    panda$core$Int64$init$builtin_int64(&$tmp3057, 100);
                    panda$core$Bit $tmp3058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1388_133046.$rawValue, $tmp3057);
                    $tmp3048 = $tmp3058.value;
                    $l3056:;
                    panda$core$Bit $tmp3059 = { $tmp3048 };
                    if ($tmp3059.value) {
                    {
                        goto $l3045;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3062, 28);
                    panda$core$Bit $tmp3063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1388_133046.$rawValue, $tmp3062);
                    bool $tmp3061 = $tmp3063.value;
                    if ($tmp3061) goto $l3064;
                    panda$core$Int64$init$builtin_int64(&$tmp3065, 29);
                    panda$core$Bit $tmp3066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1388_133046.$rawValue, $tmp3065);
                    $tmp3061 = $tmp3066.value;
                    $l3064:;
                    panda$core$Bit $tmp3067 = { $tmp3061 };
                    bool $tmp3060 = $tmp3067.value;
                    if ($tmp3060) goto $l3068;
                    panda$core$Int64$init$builtin_int64(&$tmp3069, 27);
                    panda$core$Bit $tmp3070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1388_133046.$rawValue, $tmp3069);
                    $tmp3060 = $tmp3070.value;
                    $l3068:;
                    panda$core$Bit $tmp3071 = { $tmp3060 };
                    if ($tmp3071.value) {
                    {
                        int $tmp3074;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp3078 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3077 = $tmp3078;
                            $tmp3076 = $tmp3077;
                            stmt3075 = $tmp3076;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3076));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3077));
                            if (((panda$core$Bit) { stmt3075 == NULL }).value) {
                            {
                                $tmp3079 = NULL;
                                $returnValue2997 = $tmp3079;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3079));
                                $tmp3074 = 0;
                                goto $l3072;
                                $l3080:;
                                $tmp2991 = 4;
                                goto $l2989;
                                $l3081:;
                                $tmp2984 = 4;
                                goto $l2982;
                                $l3082:;
                                return $returnValue2997;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements3040, ((panda$core$Object*) stmt3075));
                            $tmp3074 = 1;
                            goto $l3072;
                            $l3084:;
                            goto $l3045;
                        }
                        $l3072:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3075));
                        stmt3075 = NULL;
                        switch ($tmp3074) {
                            case 1: goto $l3084;
                            case 0: goto $l3080;
                        }
                        $l3085:;
                    }
                    }
                    else {
                    {
                        {
                            int $tmp3088;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp3092 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp3091 = $tmp3092;
                                $tmp3090 = $tmp3091;
                                stmt3089 = $tmp3090;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3090));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3091));
                                if (((panda$core$Bit) { stmt3089 == NULL }).value) {
                                {
                                    $tmp3093 = NULL;
                                    $returnValue2997 = $tmp3093;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3093));
                                    $tmp3088 = 0;
                                    goto $l3086;
                                    $l3094:;
                                    $tmp2991 = 5;
                                    goto $l2989;
                                    $l3095:;
                                    $tmp2984 = 5;
                                    goto $l2982;
                                    $l3096:;
                                    return $returnValue2997;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(statements3040, ((panda$core$Object*) stmt3089));
                            }
                            $tmp3088 = -1;
                            goto $l3086;
                            $l3086:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3089));
                            stmt3089 = NULL;
                            switch ($tmp3088) {
                                case 0: goto $l3094;
                                case -1: goto $l3098;
                            }
                            $l3098:;
                        }
                    }
                    }
                    }
                }
            }
            }
            $l3045:;
            org$pandalanguage$pandac$ASTNode* $tmp3101 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3102, 48);
            panda$collections$ImmutableArray* $tmp3104 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions3003);
            $tmp3103 = $tmp3104;
            panda$collections$ImmutableArray* $tmp3106 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements3040);
            $tmp3105 = $tmp3106;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3101, $tmp3102, ((org$pandalanguage$pandac$parser$Token) start2992.value).position, $tmp3103, $tmp3105);
            $tmp3100 = $tmp3101;
            $tmp3099 = $tmp3100;
            $returnValue2997 = $tmp3099;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3099));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3100));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3105));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3103));
            $tmp2991 = 6;
            goto $l2989;
            $l3107:;
            $tmp2984 = 6;
            goto $l2982;
            $l3108:;
            return $returnValue2997;
        }
        $l2989:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3040));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3007));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions3003));
        expressions3003 = NULL;
        expr3007 = NULL;
        statements3040 = NULL;
        switch ($tmp2991) {
            case 3: goto $l3037;
            case 4: goto $l3081;
            case 0: goto $l2999;
            case 2: goto $l3028;
            case 5: goto $l3095;
            case 1: goto $l3013;
            case 6: goto $l3107;
        }
        $l3110:;
    }
    $tmp2984 = -1;
    goto $l2982;
    $l2982:;
    if (self->allowLambdas.value) goto $l3112; else goto $l3113;
    $l3113:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3114, (panda$core$Int64) { 1361 }, &$s3115);
    abort();
    $l3112:;
    switch ($tmp2984) {
        case 5: goto $l3096;
        case 0: goto $l3000;
        case 4: goto $l3082;
        case -1: goto $l3111;
        case 2: goto $l3029;
        case 1: goto $l3014;
        case 6: goto $l3108;
        case 3: goto $l3038;
    }
    $l3111:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3119;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3120;
    panda$core$Int64 $tmp3121;
    org$pandalanguage$pandac$ASTNode* $returnValue3124;
    org$pandalanguage$pandac$ASTNode* $tmp3125;
    org$pandalanguage$pandac$ASTNode* expr3128 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3129;
    org$pandalanguage$pandac$ASTNode* $tmp3130;
    org$pandalanguage$pandac$ASTNode* $tmp3132;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3135;
    panda$core$Int64 $tmp3136;
    org$pandalanguage$pandac$ASTNode* $tmp3139;
    panda$collections$Array* whens3142 = NULL;
    panda$collections$Array* $tmp3143;
    panda$collections$Array* $tmp3144;
    panda$collections$Array* other3146 = NULL;
    panda$collections$Array* $tmp3147;
    org$pandalanguage$pandac$parser$Token token3150;
    org$pandalanguage$pandac$parser$Token$Kind $match$1429_133152;
    panda$core$Int64 $tmp3153;
    panda$core$Int64 $tmp3155;
    org$pandalanguage$pandac$ASTNode* w3160 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3161;
    org$pandalanguage$pandac$ASTNode* $tmp3162;
    org$pandalanguage$pandac$ASTNode* $tmp3164;
    panda$core$Int64 $tmp3169;
    org$pandalanguage$pandac$parser$Token o3171;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3173;
    panda$core$Int64 $tmp3174;
    org$pandalanguage$pandac$ASTNode* $tmp3177;
    panda$collections$Array* $tmp3180;
    panda$collections$Array* $tmp3181;
    panda$collections$Array* $tmp3182;
    org$pandalanguage$pandac$parser$Token$Kind $match$1445_253186;
    panda$core$Int64 $tmp3188;
    panda$core$Int64 $tmp3192;
    panda$core$Int64 $tmp3195;
    panda$core$Int64 $tmp3199;
    org$pandalanguage$pandac$ASTNode* stmt3205 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3206;
    org$pandalanguage$pandac$ASTNode* $tmp3207;
    org$pandalanguage$pandac$ASTNode* $tmp3209;
    org$pandalanguage$pandac$ASTNode* stmt3218 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3219;
    org$pandalanguage$pandac$ASTNode* $tmp3220;
    org$pandalanguage$pandac$ASTNode* $tmp3222;
    panda$core$String* $tmp3227;
    panda$core$String* $tmp3229;
    panda$core$String* $tmp3230;
    panda$core$String* $tmp3232;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3238;
    panda$core$Int64 $tmp3239;
    org$pandalanguage$pandac$ASTNode* $tmp3242;
    org$pandalanguage$pandac$ASTNode* $tmp3245;
    org$pandalanguage$pandac$ASTNode* $tmp3246;
    panda$core$Int64 $tmp3248;
    panda$collections$ImmutableArray* $tmp3249;
    panda$collections$ImmutableArray* $tmp3251;
    org$pandalanguage$pandac$ASTNode* $tmp3255;
    org$pandalanguage$pandac$ASTNode* $tmp3256;
    panda$core$Int64 $tmp3258;
    panda$collections$ImmutableArray* $tmp3259;
    int $tmp3118;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3121, 38);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3120, $tmp3121);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3123 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3120, &$s3122);
        start3119 = $tmp3123;
        if (((panda$core$Bit) { !start3119.nonnull }).value) {
        {
            $tmp3125 = NULL;
            $returnValue3124 = $tmp3125;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3125));
            $tmp3118 = 0;
            goto $l3116;
            $l3126:;
            return $returnValue3124;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3131 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3130 = $tmp3131;
        $tmp3129 = $tmp3130;
        expr3128 = $tmp3129;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3129));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3130));
        if (((panda$core$Bit) { expr3128 == NULL }).value) {
        {
            $tmp3132 = NULL;
            $returnValue3124 = $tmp3132;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3132));
            $tmp3118 = 1;
            goto $l3116;
            $l3133:;
            return $returnValue3124;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3136, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3135, $tmp3136);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3138 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3135, &$s3137);
        if (((panda$core$Bit) { !$tmp3138.nonnull }).value) {
        {
            $tmp3139 = NULL;
            $returnValue3124 = $tmp3139;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3139));
            $tmp3118 = 2;
            goto $l3116;
            $l3140:;
            return $returnValue3124;
        }
        }
        panda$collections$Array* $tmp3145 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3145);
        $tmp3144 = $tmp3145;
        $tmp3143 = $tmp3144;
        whens3142 = $tmp3143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3144));
        $tmp3147 = NULL;
        other3146 = $tmp3147;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3147));
        $l3148:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3151 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token3150 = $tmp3151;
            {
                $match$1429_133152 = token3150.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3153, 100);
                panda$core$Bit $tmp3154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1429_133152.$rawValue, $tmp3153);
                if ($tmp3154.value) {
                {
                    goto $l3149;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3155, 39);
                panda$core$Bit $tmp3156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1429_133152.$rawValue, $tmp3155);
                if ($tmp3156.value) {
                {
                    int $tmp3159;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3163 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3162 = $tmp3163;
                        $tmp3161 = $tmp3162;
                        w3160 = $tmp3161;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3161));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3162));
                        if (((panda$core$Bit) { w3160 == NULL }).value) {
                        {
                            $tmp3164 = NULL;
                            $returnValue3124 = $tmp3164;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3164));
                            $tmp3159 = 0;
                            goto $l3157;
                            $l3165:;
                            $tmp3118 = 3;
                            goto $l3116;
                            $l3166:;
                            return $returnValue3124;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens3142, ((panda$core$Object*) w3160));
                    }
                    $tmp3159 = -1;
                    goto $l3157;
                    $l3157:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3160));
                    w3160 = NULL;
                    switch ($tmp3159) {
                        case -1: goto $l3168;
                        case 0: goto $l3165;
                    }
                    $l3168:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3169, 40);
                panda$core$Bit $tmp3170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1429_133152.$rawValue, $tmp3169);
                if ($tmp3170.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3172 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o3171 = $tmp3172;
                    panda$core$Int64$init$builtin_int64(&$tmp3174, 95);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3173, $tmp3174);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3176 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3173, &$s3175);
                    if (((panda$core$Bit) { !$tmp3176.nonnull }).value) {
                    {
                        $tmp3177 = NULL;
                        $returnValue3124 = $tmp3177;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3177));
                        $tmp3118 = 4;
                        goto $l3116;
                        $l3178:;
                        return $returnValue3124;
                    }
                    }
                    {
                        $tmp3180 = other3146;
                        panda$collections$Array* $tmp3183 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp3183);
                        $tmp3182 = $tmp3183;
                        $tmp3181 = $tmp3182;
                        other3146 = $tmp3181;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3181));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3182));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3180));
                    }
                    $l3184:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp3187 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1445_253186 = $tmp3187.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp3188, 100);
                            panda$core$Bit $tmp3189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1445_253186.$rawValue, $tmp3188);
                            if ($tmp3189.value) {
                            {
                                goto $l3185;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp3192, 28);
                            panda$core$Bit $tmp3193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1445_253186.$rawValue, $tmp3192);
                            bool $tmp3191 = $tmp3193.value;
                            if ($tmp3191) goto $l3194;
                            panda$core$Int64$init$builtin_int64(&$tmp3195, 29);
                            panda$core$Bit $tmp3196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1445_253186.$rawValue, $tmp3195);
                            $tmp3191 = $tmp3196.value;
                            $l3194:;
                            panda$core$Bit $tmp3197 = { $tmp3191 };
                            bool $tmp3190 = $tmp3197.value;
                            if ($tmp3190) goto $l3198;
                            panda$core$Int64$init$builtin_int64(&$tmp3199, 27);
                            panda$core$Bit $tmp3200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1445_253186.$rawValue, $tmp3199);
                            $tmp3190 = $tmp3200.value;
                            $l3198:;
                            panda$core$Bit $tmp3201 = { $tmp3190 };
                            if ($tmp3201.value) {
                            {
                                int $tmp3204;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3208 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3207 = $tmp3208;
                                    $tmp3206 = $tmp3207;
                                    stmt3205 = $tmp3206;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3206));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3207));
                                    if (((panda$core$Bit) { stmt3205 == NULL }).value) {
                                    {
                                        $tmp3209 = NULL;
                                        $returnValue3124 = $tmp3209;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3209));
                                        $tmp3204 = 0;
                                        goto $l3202;
                                        $l3210:;
                                        $tmp3118 = 5;
                                        goto $l3116;
                                        $l3211:;
                                        return $returnValue3124;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3146, ((panda$core$Object*) stmt3205));
                                    $tmp3204 = 1;
                                    goto $l3202;
                                    $l3213:;
                                    goto $l3185;
                                }
                                $l3202:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3205));
                                stmt3205 = NULL;
                                switch ($tmp3204) {
                                    case 0: goto $l3210;
                                    case 1: goto $l3213;
                                }
                                $l3214:;
                            }
                            }
                            else {
                            {
                                int $tmp3217;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3221 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3220 = $tmp3221;
                                    $tmp3219 = $tmp3220;
                                    stmt3218 = $tmp3219;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3219));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3220));
                                    if (((panda$core$Bit) { stmt3218 == NULL }).value) {
                                    {
                                        $tmp3222 = NULL;
                                        $returnValue3124 = $tmp3222;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3222));
                                        $tmp3217 = 0;
                                        goto $l3215;
                                        $l3223:;
                                        $tmp3118 = 6;
                                        goto $l3116;
                                        $l3224:;
                                        return $returnValue3124;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3146, ((panda$core$Object*) stmt3218));
                                }
                                $tmp3217 = -1;
                                goto $l3215;
                                $l3215:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3218));
                                stmt3218 = NULL;
                                switch ($tmp3217) {
                                    case -1: goto $l3226;
                                    case 0: goto $l3223;
                                }
                                $l3226:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l3185:;
                    goto $l3149;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp3233 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3150);
                    $tmp3232 = $tmp3233;
                    panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3231, $tmp3232);
                    $tmp3230 = $tmp3234;
                    panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3230, &$s3235);
                    $tmp3229 = $tmp3236;
                    panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3228, $tmp3229);
                    $tmp3227 = $tmp3237;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token3150, $tmp3227);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3227));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3229));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3230));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3232));
                }
                }
                }
                }
            }
        }
        }
        $l3149:;
        panda$core$Int64$init$builtin_int64(&$tmp3239, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3238, $tmp3239);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3241 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3238, &$s3240);
        if (((panda$core$Bit) { !$tmp3241.nonnull }).value) {
        {
            $tmp3242 = NULL;
            $returnValue3124 = $tmp3242;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3242));
            $tmp3118 = 7;
            goto $l3116;
            $l3243:;
            return $returnValue3124;
        }
        }
        if (((panda$core$Bit) { other3146 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3247 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3248, 25);
            panda$collections$ImmutableArray* $tmp3250 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3142);
            $tmp3249 = $tmp3250;
            panda$collections$ImmutableArray* $tmp3252 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other3146);
            $tmp3251 = $tmp3252;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3247, $tmp3248, ((org$pandalanguage$pandac$parser$Token) start3119.value).position, expr3128, $tmp3249, $tmp3251);
            $tmp3246 = $tmp3247;
            $tmp3245 = $tmp3246;
            $returnValue3124 = $tmp3245;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3245));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3246));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3251));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3249));
            $tmp3118 = 8;
            goto $l3116;
            $l3253:;
            return $returnValue3124;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3257 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3258, 25);
        panda$collections$ImmutableArray* $tmp3260 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3142);
        $tmp3259 = $tmp3260;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3257, $tmp3258, ((org$pandalanguage$pandac$parser$Token) start3119.value).position, expr3128, $tmp3259, NULL);
        $tmp3256 = $tmp3257;
        $tmp3255 = $tmp3256;
        $returnValue3124 = $tmp3255;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3259));
        $tmp3118 = 9;
        goto $l3116;
        $l3261:;
        return $returnValue3124;
    }
    $l3116:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other3146));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens3142));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3128));
    expr3128 = NULL;
    whens3142 = NULL;
    switch ($tmp3118) {
        case 3: goto $l3166;
        case 9: goto $l3261;
        case 2: goto $l3140;
        case 5: goto $l3211;
        case 4: goto $l3178;
        case 7: goto $l3243;
        case 1: goto $l3133;
        case 8: goto $l3253;
        case 6: goto $l3224;
        case 0: goto $l3126;
    }
    $l3263:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3267;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3268;
    panda$core$Int64 $tmp3269;
    panda$collections$ImmutableArray* $returnValue3272;
    panda$collections$ImmutableArray* $tmp3273;
    panda$collections$Array* result3276 = NULL;
    panda$collections$Array* $tmp3277;
    panda$collections$Array* $tmp3278;
    org$pandalanguage$pandac$parser$Token$Kind $match$1489_133282;
    panda$core$Int64 $tmp3284;
    panda$core$Int64 $tmp3288;
    panda$core$Int64 $tmp3291;
    panda$core$Int64 $tmp3295;
    org$pandalanguage$pandac$ASTNode* stmt3301 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3302;
    org$pandalanguage$pandac$ASTNode* $tmp3303;
    panda$collections$ImmutableArray* $tmp3305;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3309;
    panda$core$Int64 $tmp3310;
    panda$collections$ImmutableArray* $tmp3313;
    org$pandalanguage$pandac$ASTNode* stmt3322 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3323;
    org$pandalanguage$pandac$ASTNode* $tmp3324;
    panda$collections$ImmutableArray* $tmp3326;
    panda$collections$ImmutableArray* $tmp3331;
    panda$collections$ImmutableArray* $tmp3332;
    int $tmp3266;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3269, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3268, $tmp3269);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3271 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3268, &$s3270);
        start3267 = $tmp3271;
        if (((panda$core$Bit) { !start3267.nonnull }).value) {
        {
            $tmp3273 = NULL;
            $returnValue3272 = $tmp3273;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3273));
            $tmp3266 = 0;
            goto $l3264;
            $l3274:;
            return $returnValue3272;
        }
        }
        panda$collections$Array* $tmp3279 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3279);
        $tmp3278 = $tmp3279;
        $tmp3277 = $tmp3278;
        result3276 = $tmp3277;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3277));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3278));
        $l3280:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp3283 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1489_133282 = $tmp3283.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3284, 100);
                panda$core$Bit $tmp3285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1489_133282.$rawValue, $tmp3284);
                if ($tmp3285.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l3281;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3288, 28);
                panda$core$Bit $tmp3289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1489_133282.$rawValue, $tmp3288);
                bool $tmp3287 = $tmp3289.value;
                if ($tmp3287) goto $l3290;
                panda$core$Int64$init$builtin_int64(&$tmp3291, 29);
                panda$core$Bit $tmp3292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1489_133282.$rawValue, $tmp3291);
                $tmp3287 = $tmp3292.value;
                $l3290:;
                panda$core$Bit $tmp3293 = { $tmp3287 };
                bool $tmp3286 = $tmp3293.value;
                if ($tmp3286) goto $l3294;
                panda$core$Int64$init$builtin_int64(&$tmp3295, 27);
                panda$core$Bit $tmp3296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1489_133282.$rawValue, $tmp3295);
                $tmp3286 = $tmp3296.value;
                $l3294:;
                panda$core$Bit $tmp3297 = { $tmp3286 };
                if ($tmp3297.value) {
                {
                    int $tmp3300;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3304 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3303 = $tmp3304;
                        $tmp3302 = $tmp3303;
                        stmt3301 = $tmp3302;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3302));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3303));
                        if (((panda$core$Bit) { stmt3301 == NULL }).value) {
                        {
                            $tmp3305 = NULL;
                            $returnValue3272 = $tmp3305;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3305));
                            $tmp3300 = 0;
                            goto $l3298;
                            $l3306:;
                            $tmp3266 = 1;
                            goto $l3264;
                            $l3307:;
                            return $returnValue3272;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp3310, 100);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3309, $tmp3310);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp3312 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3309, &$s3311);
                        if (((panda$core$Bit) { !$tmp3312.nonnull }).value) {
                        {
                            $tmp3313 = NULL;
                            $returnValue3272 = $tmp3313;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3313));
                            $tmp3300 = 1;
                            goto $l3298;
                            $l3314:;
                            $tmp3266 = 2;
                            goto $l3264;
                            $l3315:;
                            return $returnValue3272;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3276, ((panda$core$Object*) stmt3301));
                        $tmp3300 = 2;
                        goto $l3298;
                        $l3317:;
                        goto $l3281;
                    }
                    $l3298:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3301));
                    stmt3301 = NULL;
                    switch ($tmp3300) {
                        case 2: goto $l3317;
                        case 1: goto $l3314;
                        case 0: goto $l3306;
                    }
                    $l3318:;
                }
                }
                else {
                {
                    int $tmp3321;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3325 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3324 = $tmp3325;
                        $tmp3323 = $tmp3324;
                        stmt3322 = $tmp3323;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3323));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3324));
                        if (((panda$core$Bit) { stmt3322 == NULL }).value) {
                        {
                            $tmp3326 = NULL;
                            $returnValue3272 = $tmp3326;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3326));
                            $tmp3321 = 0;
                            goto $l3319;
                            $l3327:;
                            $tmp3266 = 3;
                            goto $l3264;
                            $l3328:;
                            return $returnValue3272;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3276, ((panda$core$Object*) stmt3322));
                    }
                    $tmp3321 = -1;
                    goto $l3319;
                    $l3319:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3322));
                    stmt3322 = NULL;
                    switch ($tmp3321) {
                        case -1: goto $l3330;
                        case 0: goto $l3327;
                    }
                    $l3330:;
                }
                }
                }
            }
        }
        }
        $l3281:;
        panda$collections$ImmutableArray* $tmp3333 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3276);
        $tmp3332 = $tmp3333;
        $tmp3331 = $tmp3332;
        $returnValue3272 = $tmp3331;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3331));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3332));
        $tmp3266 = 4;
        goto $l3264;
        $l3334:;
        return $returnValue3272;
    }
    $l3264:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3276));
    result3276 = NULL;
    switch ($tmp3266) {
        case 1: goto $l3307;
        case 2: goto $l3315;
        case 4: goto $l3334;
        case 3: goto $l3328;
        case 0: goto $l3274;
    }
    $l3336:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements3340 = NULL;
    panda$collections$ImmutableArray* $tmp3341;
    panda$collections$ImmutableArray* $tmp3342;
    org$pandalanguage$pandac$ASTNode* $returnValue3344;
    org$pandalanguage$pandac$ASTNode* $tmp3345;
    org$pandalanguage$pandac$ASTNode* $tmp3348;
    org$pandalanguage$pandac$ASTNode* $tmp3349;
    panda$core$Int64 $tmp3351;
    org$pandalanguage$pandac$Position $tmp3352;
    int $tmp3339;
    {
        panda$collections$ImmutableArray* $tmp3343 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3342 = $tmp3343;
        $tmp3341 = $tmp3342;
        statements3340 = $tmp3341;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3342));
        if (((panda$core$Bit) { statements3340 == NULL }).value) {
        {
            $tmp3345 = NULL;
            $returnValue3344 = $tmp3345;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3345));
            $tmp3339 = 0;
            goto $l3337;
            $l3346:;
            return $returnValue3344;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3350 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3351, 6);
        org$pandalanguage$pandac$Position$init(&$tmp3352);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3350, $tmp3351, $tmp3352, statements3340);
        $tmp3349 = $tmp3350;
        $tmp3348 = $tmp3349;
        $returnValue3344 = $tmp3348;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3348));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3349));
        $tmp3339 = 1;
        goto $l3337;
        $l3353:;
        return $returnValue3344;
    }
    $l3337:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3340));
    statements3340 = NULL;
    switch ($tmp3339) {
        case 1: goto $l3353;
        case 0: goto $l3346;
    }
    $l3355:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start3359 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3360;
    org$pandalanguage$pandac$ASTNode* $tmp3361;
    org$pandalanguage$pandac$ASTNode* $returnValue3363;
    org$pandalanguage$pandac$ASTNode* $tmp3364;
    org$pandalanguage$pandac$parser$Token$Kind $match$1533_93367;
    panda$core$Int64 $tmp3384;
    panda$core$Int64 $tmp3387;
    panda$core$Int64 $tmp3391;
    panda$core$Int64 $tmp3395;
    panda$core$Int64 $tmp3399;
    panda$core$Int64 $tmp3403;
    panda$core$Int64 $tmp3407;
    panda$core$Int64 $tmp3411;
    panda$core$Int64 $tmp3415;
    panda$core$Int64 $tmp3419;
    panda$core$Int64 $tmp3423;
    panda$core$Int64 $tmp3427;
    panda$core$Int64 $tmp3431;
    panda$core$Int64 $tmp3435;
    panda$core$Int64 $tmp3439;
    panda$core$Int64 $tmp3443;
    org$pandalanguage$pandac$parser$Token op3449;
    org$pandalanguage$pandac$ASTNode* rvalue3451 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3452;
    org$pandalanguage$pandac$ASTNode* $tmp3453;
    org$pandalanguage$pandac$ASTNode* $tmp3455;
    org$pandalanguage$pandac$ASTNode* $tmp3459;
    org$pandalanguage$pandac$ASTNode* $tmp3460;
    panda$core$Int64 $tmp3462;
    panda$core$Int64 $tmp3469;
    org$pandalanguage$pandac$parser$Token op3476;
    org$pandalanguage$pandac$ASTNode* rvalue3478 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3479;
    org$pandalanguage$pandac$ASTNode* $tmp3480;
    org$pandalanguage$pandac$ASTNode* $tmp3482;
    org$pandalanguage$pandac$ASTNode* $tmp3486;
    org$pandalanguage$pandac$ASTNode* $tmp3487;
    panda$core$Int64 $tmp3489;
    org$pandalanguage$pandac$ASTNode* $tmp3496;
    int $tmp3358;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3362 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3361 = $tmp3362;
        $tmp3360 = $tmp3361;
        start3359 = $tmp3360;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3360));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3361));
        if (((panda$core$Bit) { start3359 == NULL }).value) {
        {
            $tmp3364 = NULL;
            $returnValue3363 = $tmp3364;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3364));
            $tmp3358 = 0;
            goto $l3356;
            $l3365:;
            return $returnValue3363;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3368 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1533_93367 = $tmp3368.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3384, 73);
            panda$core$Bit $tmp3385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3384);
            bool $tmp3383 = $tmp3385.value;
            if ($tmp3383) goto $l3386;
            panda$core$Int64$init$builtin_int64(&$tmp3387, 74);
            panda$core$Bit $tmp3388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3387);
            $tmp3383 = $tmp3388.value;
            $l3386:;
            panda$core$Bit $tmp3389 = { $tmp3383 };
            bool $tmp3382 = $tmp3389.value;
            if ($tmp3382) goto $l3390;
            panda$core$Int64$init$builtin_int64(&$tmp3391, 75);
            panda$core$Bit $tmp3392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3391);
            $tmp3382 = $tmp3392.value;
            $l3390:;
            panda$core$Bit $tmp3393 = { $tmp3382 };
            bool $tmp3381 = $tmp3393.value;
            if ($tmp3381) goto $l3394;
            panda$core$Int64$init$builtin_int64(&$tmp3395, 76);
            panda$core$Bit $tmp3396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3395);
            $tmp3381 = $tmp3396.value;
            $l3394:;
            panda$core$Bit $tmp3397 = { $tmp3381 };
            bool $tmp3380 = $tmp3397.value;
            if ($tmp3380) goto $l3398;
            panda$core$Int64$init$builtin_int64(&$tmp3399, 77);
            panda$core$Bit $tmp3400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3399);
            $tmp3380 = $tmp3400.value;
            $l3398:;
            panda$core$Bit $tmp3401 = { $tmp3380 };
            bool $tmp3379 = $tmp3401.value;
            if ($tmp3379) goto $l3402;
            panda$core$Int64$init$builtin_int64(&$tmp3403, 78);
            panda$core$Bit $tmp3404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3403);
            $tmp3379 = $tmp3404.value;
            $l3402:;
            panda$core$Bit $tmp3405 = { $tmp3379 };
            bool $tmp3378 = $tmp3405.value;
            if ($tmp3378) goto $l3406;
            panda$core$Int64$init$builtin_int64(&$tmp3407, 79);
            panda$core$Bit $tmp3408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3407);
            $tmp3378 = $tmp3408.value;
            $l3406:;
            panda$core$Bit $tmp3409 = { $tmp3378 };
            bool $tmp3377 = $tmp3409.value;
            if ($tmp3377) goto $l3410;
            panda$core$Int64$init$builtin_int64(&$tmp3411, 80);
            panda$core$Bit $tmp3412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3411);
            $tmp3377 = $tmp3412.value;
            $l3410:;
            panda$core$Bit $tmp3413 = { $tmp3377 };
            bool $tmp3376 = $tmp3413.value;
            if ($tmp3376) goto $l3414;
            panda$core$Int64$init$builtin_int64(&$tmp3415, 81);
            panda$core$Bit $tmp3416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3415);
            $tmp3376 = $tmp3416.value;
            $l3414:;
            panda$core$Bit $tmp3417 = { $tmp3376 };
            bool $tmp3375 = $tmp3417.value;
            if ($tmp3375) goto $l3418;
            panda$core$Int64$init$builtin_int64(&$tmp3419, 82);
            panda$core$Bit $tmp3420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3419);
            $tmp3375 = $tmp3420.value;
            $l3418:;
            panda$core$Bit $tmp3421 = { $tmp3375 };
            bool $tmp3374 = $tmp3421.value;
            if ($tmp3374) goto $l3422;
            panda$core$Int64$init$builtin_int64(&$tmp3423, 83);
            panda$core$Bit $tmp3424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3423);
            $tmp3374 = $tmp3424.value;
            $l3422:;
            panda$core$Bit $tmp3425 = { $tmp3374 };
            bool $tmp3373 = $tmp3425.value;
            if ($tmp3373) goto $l3426;
            panda$core$Int64$init$builtin_int64(&$tmp3427, 84);
            panda$core$Bit $tmp3428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3427);
            $tmp3373 = $tmp3428.value;
            $l3426:;
            panda$core$Bit $tmp3429 = { $tmp3373 };
            bool $tmp3372 = $tmp3429.value;
            if ($tmp3372) goto $l3430;
            panda$core$Int64$init$builtin_int64(&$tmp3431, 85);
            panda$core$Bit $tmp3432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3431);
            $tmp3372 = $tmp3432.value;
            $l3430:;
            panda$core$Bit $tmp3433 = { $tmp3372 };
            bool $tmp3371 = $tmp3433.value;
            if ($tmp3371) goto $l3434;
            panda$core$Int64$init$builtin_int64(&$tmp3435, 86);
            panda$core$Bit $tmp3436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3435);
            $tmp3371 = $tmp3436.value;
            $l3434:;
            panda$core$Bit $tmp3437 = { $tmp3371 };
            bool $tmp3370 = $tmp3437.value;
            if ($tmp3370) goto $l3438;
            panda$core$Int64$init$builtin_int64(&$tmp3439, 87);
            panda$core$Bit $tmp3440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3439);
            $tmp3370 = $tmp3440.value;
            $l3438:;
            panda$core$Bit $tmp3441 = { $tmp3370 };
            bool $tmp3369 = $tmp3441.value;
            if ($tmp3369) goto $l3442;
            panda$core$Int64$init$builtin_int64(&$tmp3443, 88);
            panda$core$Bit $tmp3444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3443);
            $tmp3369 = $tmp3444.value;
            $l3442:;
            panda$core$Bit $tmp3445 = { $tmp3369 };
            if ($tmp3445.value) {
            {
                int $tmp3448;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3450 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3449 = $tmp3450;
                    org$pandalanguage$pandac$ASTNode* $tmp3454 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3453 = $tmp3454;
                    $tmp3452 = $tmp3453;
                    rvalue3451 = $tmp3452;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3452));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3453));
                    if (((panda$core$Bit) { rvalue3451 == NULL }).value) {
                    {
                        $tmp3455 = NULL;
                        $returnValue3363 = $tmp3455;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3455));
                        $tmp3448 = 0;
                        goto $l3446;
                        $l3456:;
                        $tmp3358 = 1;
                        goto $l3356;
                        $l3457:;
                        return $returnValue3363;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3461 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3462, 4);
                    org$pandalanguage$pandac$Position $tmp3464 = (($fn3463) start3359->$class->vtable[2])(start3359);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3461, $tmp3462, $tmp3464, start3359, op3449.kind, rvalue3451);
                    $tmp3460 = $tmp3461;
                    $tmp3459 = $tmp3460;
                    $returnValue3363 = $tmp3459;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3459));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3460));
                    $tmp3448 = 1;
                    goto $l3446;
                    $l3465:;
                    $tmp3358 = 2;
                    goto $l3356;
                    $l3466:;
                    return $returnValue3363;
                }
                $l3446:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3451));
                rvalue3451 = NULL;
                switch ($tmp3448) {
                    case 1: goto $l3465;
                    case 0: goto $l3456;
                }
                $l3468:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3469, 58);
            panda$core$Bit $tmp3470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1533_93367.$rawValue, $tmp3469);
            if ($tmp3470.value) {
            {
                int $tmp3473;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3474 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3474, &$s3475);
                    org$pandalanguage$pandac$parser$Token $tmp3477 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3476 = $tmp3477;
                    org$pandalanguage$pandac$ASTNode* $tmp3481 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3480 = $tmp3481;
                    $tmp3479 = $tmp3480;
                    rvalue3478 = $tmp3479;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3479));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3480));
                    if (((panda$core$Bit) { rvalue3478 == NULL }).value) {
                    {
                        $tmp3482 = NULL;
                        $returnValue3363 = $tmp3482;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3482));
                        $tmp3473 = 0;
                        goto $l3471;
                        $l3483:;
                        $tmp3358 = 3;
                        goto $l3356;
                        $l3484:;
                        return $returnValue3363;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3488 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3489, 4);
                    org$pandalanguage$pandac$Position $tmp3491 = (($fn3490) start3359->$class->vtable[2])(start3359);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3488, $tmp3489, $tmp3491, start3359, op3476.kind, rvalue3478);
                    $tmp3487 = $tmp3488;
                    $tmp3486 = $tmp3487;
                    $returnValue3363 = $tmp3486;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3486));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3487));
                    $tmp3473 = 1;
                    goto $l3471;
                    $l3492:;
                    $tmp3358 = 4;
                    goto $l3356;
                    $l3493:;
                    return $returnValue3363;
                }
                $l3471:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3478));
                rvalue3478 = NULL;
                switch ($tmp3473) {
                    case 0: goto $l3483;
                    case 1: goto $l3492;
                }
                $l3495:;
            }
            }
            else {
            {
                $tmp3496 = start3359;
                $returnValue3363 = $tmp3496;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3496));
                $tmp3358 = 5;
                goto $l3356;
                $l3497:;
                return $returnValue3363;
            }
            }
            }
        }
    }
    $tmp3358 = -1;
    goto $l3356;
    $l3356:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start3359));
    start3359 = NULL;
    switch ($tmp3358) {
        case -1: goto $l3499;
        case 3: goto $l3484;
        case 1: goto $l3457;
        case 2: goto $l3466;
        case 4: goto $l3493;
        case 0: goto $l3365;
        case 5: goto $l3497;
    }
    $l3499:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t3503 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3504;
    org$pandalanguage$pandac$ASTNode* $tmp3505;
    org$pandalanguage$pandac$ASTNode* $returnValue3507;
    org$pandalanguage$pandac$ASTNode* $tmp3508;
    org$pandalanguage$pandac$ASTNode* value3511 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3512;
    panda$core$Int64 $tmp3513;
    org$pandalanguage$pandac$ASTNode* $tmp3515;
    org$pandalanguage$pandac$ASTNode* $tmp3516;
    org$pandalanguage$pandac$ASTNode* $tmp3517;
    org$pandalanguage$pandac$ASTNode* $tmp3519;
    panda$core$Int64 $tmp3523;
    org$pandalanguage$pandac$ASTNode* $tmp3527;
    org$pandalanguage$pandac$ASTNode* $tmp3528;
    org$pandalanguage$pandac$ASTNode* $tmp3529;
    org$pandalanguage$pandac$ASTNode* $tmp3531;
    org$pandalanguage$pandac$ASTNode* $tmp3534;
    org$pandalanguage$pandac$ASTNode* $tmp3535;
    org$pandalanguage$pandac$ASTNode* $tmp3536;
    org$pandalanguage$pandac$ASTNode* $tmp3537;
    panda$core$Int64 $tmp3539;
    int $tmp3502;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3506 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3505 = $tmp3506;
        $tmp3504 = $tmp3505;
        t3503 = $tmp3504;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3504));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3505));
        if (((panda$core$Bit) { t3503 == NULL }).value) {
        {
            $tmp3508 = NULL;
            $returnValue3507 = $tmp3508;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3508));
            $tmp3502 = 0;
            goto $l3500;
            $l3509:;
            return $returnValue3507;
        }
        }
        memset(&value3511, 0, sizeof(value3511));
        panda$core$Int64$init$builtin_int64(&$tmp3513, 73);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3512, $tmp3513);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3514 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3512);
        if (((panda$core$Bit) { $tmp3514.nonnull }).value) {
        {
            {
                $tmp3515 = value3511;
                org$pandalanguage$pandac$ASTNode* $tmp3518 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3517 = $tmp3518;
                $tmp3516 = $tmp3517;
                value3511 = $tmp3516;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3516));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3517));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3515));
            }
            if (((panda$core$Bit) { value3511 == NULL }).value) {
            {
                $tmp3519 = NULL;
                $returnValue3507 = $tmp3519;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3519));
                $tmp3502 = 1;
                goto $l3500;
                $l3520:;
                return $returnValue3507;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp3522 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3523, 58);
        panda$core$Bit $tmp3524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3522.kind.$rawValue, $tmp3523);
        if ($tmp3524.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3525 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3525, &$s3526);
            {
                $tmp3527 = value3511;
                org$pandalanguage$pandac$ASTNode* $tmp3530 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3529 = $tmp3530;
                $tmp3528 = $tmp3529;
                value3511 = $tmp3528;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3528));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3529));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3527));
            }
            if (((panda$core$Bit) { value3511 == NULL }).value) {
            {
                $tmp3531 = NULL;
                $returnValue3507 = $tmp3531;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3531));
                $tmp3502 = 2;
                goto $l3500;
                $l3532:;
                return $returnValue3507;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3534 = value3511;
                $tmp3535 = NULL;
                value3511 = $tmp3535;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3535));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3534));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3538 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3539, 13);
        org$pandalanguage$pandac$Position $tmp3541 = (($fn3540) t3503->$class->vtable[2])(t3503);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3538, $tmp3539, $tmp3541, t3503, value3511);
        $tmp3537 = $tmp3538;
        $tmp3536 = $tmp3537;
        $returnValue3507 = $tmp3536;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3536));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3537));
        $tmp3502 = 3;
        goto $l3500;
        $l3542:;
        return $returnValue3507;
    }
    $l3500:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value3511));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3503));
    t3503 = NULL;
    switch ($tmp3502) {
        case 1: goto $l3520;
        case 3: goto $l3542;
        case 2: goto $l3532;
        case 0: goto $l3509;
    }
    $l3544:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3548;
    org$pandalanguage$pandac$Variable$Kind kind3550;
    org$pandalanguage$pandac$parser$Token$Kind $match$1592_93551;
    panda$core$Int64 $tmp3552;
    org$pandalanguage$pandac$Variable$Kind $tmp3554;
    panda$core$Int64 $tmp3555;
    panda$core$Int64 $tmp3556;
    org$pandalanguage$pandac$Variable$Kind $tmp3558;
    panda$core$Int64 $tmp3559;
    panda$core$Int64 $tmp3560;
    org$pandalanguage$pandac$Variable$Kind $tmp3562;
    panda$core$Int64 $tmp3563;
    panda$core$Int64 $tmp3564;
    org$pandalanguage$pandac$Variable$Kind $tmp3566;
    panda$core$Int64 $tmp3567;
    panda$collections$Array* declarations3569 = NULL;
    panda$collections$Array* $tmp3570;
    panda$collections$Array* $tmp3571;
    org$pandalanguage$pandac$ASTNode* decl3573 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3574;
    org$pandalanguage$pandac$ASTNode* $tmp3575;
    org$pandalanguage$pandac$ASTNode* $returnValue3577;
    org$pandalanguage$pandac$ASTNode* $tmp3578;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3584;
    panda$core$Int64 $tmp3585;
    org$pandalanguage$pandac$ASTNode* decl3590 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3591;
    org$pandalanguage$pandac$ASTNode* $tmp3592;
    org$pandalanguage$pandac$ASTNode* $tmp3594;
    org$pandalanguage$pandac$ASTNode* $tmp3599;
    org$pandalanguage$pandac$ASTNode* $tmp3600;
    panda$core$Int64 $tmp3602;
    panda$collections$ImmutableArray* $tmp3603;
    int $tmp3547;
    {
        org$pandalanguage$pandac$parser$Token $tmp3549 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start3548 = $tmp3549;
        memset(&kind3550, 0, sizeof(kind3550));
        {
            $match$1592_93551 = start3548.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3552, 23);
            panda$core$Bit $tmp3553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1592_93551.$rawValue, $tmp3552);
            if ($tmp3553.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3555, 0);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3554, $tmp3555);
                kind3550 = $tmp3554;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3556, 24);
            panda$core$Bit $tmp3557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1592_93551.$rawValue, $tmp3556);
            if ($tmp3557.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3559, 1);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3558, $tmp3559);
                kind3550 = $tmp3558;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3560, 25);
            panda$core$Bit $tmp3561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1592_93551.$rawValue, $tmp3560);
            if ($tmp3561.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3563, 3);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3562, $tmp3563);
                kind3550 = $tmp3562;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3564, 26);
            panda$core$Bit $tmp3565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1592_93551.$rawValue, $tmp3564);
            if ($tmp3565.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3567, 2);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3566, $tmp3567);
                kind3550 = $tmp3566;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start3548, &$s3568);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp3572 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3572);
        $tmp3571 = $tmp3572;
        $tmp3570 = $tmp3571;
        declarations3569 = $tmp3570;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3570));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3571));
        org$pandalanguage$pandac$ASTNode* $tmp3576 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3575 = $tmp3576;
        $tmp3574 = $tmp3575;
        decl3573 = $tmp3574;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3574));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3575));
        if (((panda$core$Bit) { decl3573 == NULL }).value) {
        {
            $tmp3578 = NULL;
            $returnValue3577 = $tmp3578;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3578));
            $tmp3547 = 0;
            goto $l3545;
            $l3579:;
            return $returnValue3577;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations3569, ((panda$core$Object*) decl3573));
        $l3581:;
        panda$core$Int64$init$builtin_int64(&$tmp3585, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3584, $tmp3585);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3586 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3584);
        bool $tmp3583 = ((panda$core$Bit) { $tmp3586.nonnull }).value;
        if (!$tmp3583) goto $l3582;
        {
            int $tmp3589;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3593 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3592 = $tmp3593;
                $tmp3591 = $tmp3592;
                decl3590 = $tmp3591;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3591));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3592));
                if (((panda$core$Bit) { decl3590 == NULL }).value) {
                {
                    $tmp3594 = NULL;
                    $returnValue3577 = $tmp3594;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3594));
                    $tmp3589 = 0;
                    goto $l3587;
                    $l3595:;
                    $tmp3547 = 1;
                    goto $l3545;
                    $l3596:;
                    return $returnValue3577;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations3569, ((panda$core$Object*) decl3590));
            }
            $tmp3589 = -1;
            goto $l3587;
            $l3587:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3590));
            decl3590 = NULL;
            switch ($tmp3589) {
                case -1: goto $l3598;
                case 0: goto $l3595;
            }
            $l3598:;
        }
        goto $l3581;
        $l3582:;
        org$pandalanguage$pandac$ASTNode* $tmp3601 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3602, 47);
        panda$collections$ImmutableArray* $tmp3604 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations3569);
        $tmp3603 = $tmp3604;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3601, $tmp3602, start3548.position, kind3550, $tmp3603);
        $tmp3600 = $tmp3601;
        $tmp3599 = $tmp3600;
        $returnValue3577 = $tmp3599;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3599));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3600));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3603));
        $tmp3547 = 2;
        goto $l3545;
        $l3605:;
        return $returnValue3577;
    }
    $l3545:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3573));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations3569));
    declarations3569 = NULL;
    decl3573 = NULL;
    switch ($tmp3547) {
        case 2: goto $l3605;
        case 1: goto $l3596;
        case 0: goto $l3579;
    }
    $l3607:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3611;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3612;
    panda$core$Int64 $tmp3613;
    org$pandalanguage$pandac$ASTNode* $returnValue3616;
    org$pandalanguage$pandac$ASTNode* $tmp3617;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3620;
    panda$core$Int64 $tmp3621;
    org$pandalanguage$pandac$ASTNode* $tmp3624;
    panda$core$Object* $tmp3627;
    panda$core$Bit $tmp3628;
    org$pandalanguage$pandac$ASTNode* target3630 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3631;
    org$pandalanguage$pandac$ASTNode* $tmp3632;
    panda$core$Int64 $tmp3634;
    panda$core$String* $tmp3635;
    panda$collections$Array* args3637 = NULL;
    panda$collections$Array* $tmp3638;
    panda$collections$Array* $tmp3639;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3641;
    panda$core$Int64 $tmp3642;
    org$pandalanguage$pandac$ASTNode* expr3647 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3648;
    org$pandalanguage$pandac$ASTNode* $tmp3649;
    panda$core$Object* $tmp3651;
    org$pandalanguage$pandac$ASTNode* $tmp3653;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3660;
    panda$core$Int64 $tmp3661;
    org$pandalanguage$pandac$ASTNode* $tmp3663;
    org$pandalanguage$pandac$ASTNode* $tmp3664;
    org$pandalanguage$pandac$ASTNode* $tmp3665;
    panda$core$Object* $tmp3667;
    org$pandalanguage$pandac$ASTNode* $tmp3669;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3673;
    panda$core$Int64 $tmp3674;
    panda$core$Object* $tmp3677;
    org$pandalanguage$pandac$ASTNode* $tmp3679;
    panda$core$Object* $tmp3684;
    org$pandalanguage$pandac$ASTNode* $tmp3686;
    org$pandalanguage$pandac$ASTNode* $tmp3687;
    panda$core$Int64 $tmp3689;
    panda$collections$ImmutableArray* $tmp3690;
    int $tmp3610;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3613, 22);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3612, $tmp3613);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3615 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3612, &$s3614);
        start3611 = $tmp3615;
        if (((panda$core$Bit) { !start3611.nonnull }).value) {
        {
            $tmp3617 = NULL;
            $returnValue3616 = $tmp3617;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3617));
            $tmp3610 = 0;
            goto $l3608;
            $l3618:;
            return $returnValue3616;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3621, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3620, $tmp3621);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3623 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3620, &$s3622);
        if (((panda$core$Bit) { !$tmp3623.nonnull }).value) {
        {
            $tmp3624 = NULL;
            $returnValue3616 = $tmp3624;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3624));
            $tmp3610 = 1;
            goto $l3608;
            $l3625:;
            return $returnValue3616;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp3628, true);
        panda$core$Bit$wrapper* $tmp3629;
        $tmp3629 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp3629->value = $tmp3628;
        $tmp3627 = ((panda$core$Object*) $tmp3629);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp3627);
        panda$core$Panda$unref$panda$core$Object($tmp3627);
        org$pandalanguage$pandac$ASTNode* $tmp3633 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3634, 20);
        panda$core$String* $tmp3636 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3611.value));
        $tmp3635 = $tmp3636;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3633, $tmp3634, ((org$pandalanguage$pandac$parser$Token) start3611.value).position, $tmp3635);
        $tmp3632 = $tmp3633;
        $tmp3631 = $tmp3632;
        target3630 = $tmp3631;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3631));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3632));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3635));
        panda$collections$Array* $tmp3640 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3640);
        $tmp3639 = $tmp3640;
        $tmp3638 = $tmp3639;
        args3637 = $tmp3638;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3638));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3639));
        panda$core$Int64$init$builtin_int64(&$tmp3642, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3641, $tmp3642);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3643 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3641);
        if (((panda$core$Bit) { !$tmp3643.nonnull }).value) {
        {
            int $tmp3646;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3650 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3649 = $tmp3650;
                $tmp3648 = $tmp3649;
                expr3647 = $tmp3648;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3648));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3649));
                if (((panda$core$Bit) { expr3647 == NULL }).value) {
                {
                    panda$core$Object* $tmp3652 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3651 = $tmp3652;
                    panda$core$Panda$unref$panda$core$Object($tmp3651);
                    $tmp3653 = NULL;
                    $returnValue3616 = $tmp3653;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3653));
                    $tmp3646 = 0;
                    goto $l3644;
                    $l3654:;
                    $tmp3610 = 2;
                    goto $l3608;
                    $l3655:;
                    return $returnValue3616;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args3637, ((panda$core$Object*) expr3647));
                $l3657:;
                panda$core$Int64$init$builtin_int64(&$tmp3661, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3660, $tmp3661);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3662 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3660);
                bool $tmp3659 = ((panda$core$Bit) { $tmp3662.nonnull }).value;
                if (!$tmp3659) goto $l3658;
                {
                    {
                        $tmp3663 = expr3647;
                        org$pandalanguage$pandac$ASTNode* $tmp3666 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3665 = $tmp3666;
                        $tmp3664 = $tmp3665;
                        expr3647 = $tmp3664;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3664));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3665));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3663));
                    }
                    if (((panda$core$Bit) { expr3647 == NULL }).value) {
                    {
                        panda$core$Object* $tmp3668 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp3667 = $tmp3668;
                        panda$core$Panda$unref$panda$core$Object($tmp3667);
                        $tmp3669 = NULL;
                        $returnValue3616 = $tmp3669;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3669));
                        $tmp3646 = 1;
                        goto $l3644;
                        $l3670:;
                        $tmp3610 = 3;
                        goto $l3608;
                        $l3671:;
                        return $returnValue3616;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args3637, ((panda$core$Object*) expr3647));
                }
                goto $l3657;
                $l3658:;
                panda$core$Int64$init$builtin_int64(&$tmp3674, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3673, $tmp3674);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3676 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3673, &$s3675);
                if (((panda$core$Bit) { !$tmp3676.nonnull }).value) {
                {
                    panda$core$Object* $tmp3678 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3677 = $tmp3678;
                    panda$core$Panda$unref$panda$core$Object($tmp3677);
                    $tmp3679 = NULL;
                    $returnValue3616 = $tmp3679;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3679));
                    $tmp3646 = 2;
                    goto $l3644;
                    $l3680:;
                    $tmp3610 = 4;
                    goto $l3608;
                    $l3681:;
                    return $returnValue3616;
                }
                }
            }
            $tmp3646 = -1;
            goto $l3644;
            $l3644:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3647));
            expr3647 = NULL;
            switch ($tmp3646) {
                case -1: goto $l3683;
                case 1: goto $l3670;
                case 2: goto $l3680;
                case 0: goto $l3654;
            }
            $l3683:;
        }
        }
        panda$core$Object* $tmp3685 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp3684 = $tmp3685;
        panda$core$Panda$unref$panda$core$Object($tmp3684);
        org$pandalanguage$pandac$ASTNode* $tmp3688 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3689, 8);
        panda$collections$ImmutableArray* $tmp3691 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3637);
        $tmp3690 = $tmp3691;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3688, $tmp3689, ((org$pandalanguage$pandac$parser$Token) start3611.value).position, target3630, $tmp3690);
        $tmp3687 = $tmp3688;
        $tmp3686 = $tmp3687;
        $returnValue3616 = $tmp3686;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3686));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3687));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3690));
        $tmp3610 = 5;
        goto $l3608;
        $l3692:;
        return $returnValue3616;
    }
    $l3608:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args3637));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target3630));
    target3630 = NULL;
    args3637 = NULL;
    switch ($tmp3610) {
        case 4: goto $l3681;
        case 3: goto $l3671;
        case 1: goto $l3625;
        case 0: goto $l3618;
        case 5: goto $l3692;
        case 2: goto $l3655;
    }
    $l3694:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3695;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3696;
    panda$core$Int64 $tmp3697;
    org$pandalanguage$pandac$ASTNode* $returnValue3700;
    org$pandalanguage$pandac$ASTNode* $tmp3701;
    org$pandalanguage$pandac$parser$Token$nullable label3703;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3704;
    panda$core$Int64 $tmp3705;
    org$pandalanguage$pandac$ASTNode* $tmp3707;
    org$pandalanguage$pandac$ASTNode* $tmp3708;
    panda$core$Int64 $tmp3710;
    panda$core$String* $tmp3711;
    org$pandalanguage$pandac$ASTNode* $tmp3714;
    org$pandalanguage$pandac$ASTNode* $tmp3715;
    panda$core$Int64 $tmp3717;
    panda$core$Int64$init$builtin_int64(&$tmp3697, 28);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3696, $tmp3697);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3699 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3696, &$s3698);
    start3695 = $tmp3699;
    if (((panda$core$Bit) { !start3695.nonnull }).value) {
    {
        $tmp3701 = NULL;
        $returnValue3700 = $tmp3701;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3701));
        return $returnValue3700;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3705, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3704, $tmp3705);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3706 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3704);
    label3703 = $tmp3706;
    if (((panda$core$Bit) { label3703.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3709 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3710, 7);
        panda$core$String* $tmp3712 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3703.value));
        $tmp3711 = $tmp3712;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3709, $tmp3710, ((org$pandalanguage$pandac$parser$Token) start3695.value).position, $tmp3711);
        $tmp3708 = $tmp3709;
        $tmp3707 = $tmp3708;
        $returnValue3700 = $tmp3707;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3707));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3708));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3711));
        return $returnValue3700;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3716 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3717, 7);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3716, $tmp3717, ((org$pandalanguage$pandac$parser$Token) start3695.value).position, NULL);
    $tmp3715 = $tmp3716;
    $tmp3714 = $tmp3715;
    $returnValue3700 = $tmp3714;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3714));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3715));
    return $returnValue3700;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3719;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3720;
    panda$core$Int64 $tmp3721;
    org$pandalanguage$pandac$ASTNode* $returnValue3724;
    org$pandalanguage$pandac$ASTNode* $tmp3725;
    org$pandalanguage$pandac$parser$Token$nullable label3727;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3728;
    panda$core$Int64 $tmp3729;
    org$pandalanguage$pandac$ASTNode* $tmp3731;
    org$pandalanguage$pandac$ASTNode* $tmp3732;
    panda$core$Int64 $tmp3734;
    panda$core$String* $tmp3735;
    org$pandalanguage$pandac$ASTNode* $tmp3738;
    org$pandalanguage$pandac$ASTNode* $tmp3739;
    panda$core$Int64 $tmp3741;
    panda$core$Int64$init$builtin_int64(&$tmp3721, 29);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3720, $tmp3721);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3723 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3720, &$s3722);
    start3719 = $tmp3723;
    if (((panda$core$Bit) { !start3719.nonnull }).value) {
    {
        $tmp3725 = NULL;
        $returnValue3724 = $tmp3725;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3725));
        return $returnValue3724;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3729, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3728, $tmp3729);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3730 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3728);
    label3727 = $tmp3730;
    if (((panda$core$Bit) { label3727.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3733 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3734, 12);
        panda$core$String* $tmp3736 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3727.value));
        $tmp3735 = $tmp3736;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3733, $tmp3734, ((org$pandalanguage$pandac$parser$Token) start3719.value).position, $tmp3735);
        $tmp3732 = $tmp3733;
        $tmp3731 = $tmp3732;
        $returnValue3724 = $tmp3731;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3731));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3732));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3735));
        return $returnValue3724;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3740 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3741, 12);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3740, $tmp3741, ((org$pandalanguage$pandac$parser$Token) start3719.value).position, NULL);
    $tmp3739 = $tmp3740;
    $tmp3738 = $tmp3739;
    $returnValue3724 = $tmp3738;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3738));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3739));
    return $returnValue3724;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3743;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3744;
    panda$core$Int64 $tmp3745;
    org$pandalanguage$pandac$ASTNode* $returnValue3748;
    org$pandalanguage$pandac$ASTNode* $tmp3749;
    org$pandalanguage$pandac$parser$Token$Kind $match$1696_93751;
    panda$core$Int64 $tmp3755;
    panda$core$Int64 $tmp3758;
    panda$core$Int64 $tmp3762;
    org$pandalanguage$pandac$ASTNode* $tmp3765;
    org$pandalanguage$pandac$ASTNode* $tmp3766;
    panda$core$Int64 $tmp3768;
    panda$collections$Array* children3773 = NULL;
    panda$collections$Array* $tmp3774;
    panda$collections$Array* $tmp3775;
    org$pandalanguage$pandac$ASTNode* expr3777 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3778;
    org$pandalanguage$pandac$ASTNode* $tmp3779;
    org$pandalanguage$pandac$ASTNode* $tmp3781;
    org$pandalanguage$pandac$ASTNode* $tmp3784;
    org$pandalanguage$pandac$ASTNode* $tmp3785;
    panda$core$Int64 $tmp3787;
    panda$core$Int64$init$builtin_int64(&$tmp3745, 27);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3744, $tmp3745);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3747 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3744, &$s3746);
    start3743 = $tmp3747;
    if (((panda$core$Bit) { !start3743.nonnull }).value) {
    {
        $tmp3749 = NULL;
        $returnValue3748 = $tmp3749;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3749));
        return $returnValue3748;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp3752 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1696_93751 = $tmp3752.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3755, 100);
        panda$core$Bit $tmp3756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1696_93751.$rawValue, $tmp3755);
        bool $tmp3754 = $tmp3756.value;
        if ($tmp3754) goto $l3757;
        panda$core$Int64$init$builtin_int64(&$tmp3758, 39);
        panda$core$Bit $tmp3759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1696_93751.$rawValue, $tmp3758);
        $tmp3754 = $tmp3759.value;
        $l3757:;
        panda$core$Bit $tmp3760 = { $tmp3754 };
        bool $tmp3753 = $tmp3760.value;
        if ($tmp3753) goto $l3761;
        panda$core$Int64$init$builtin_int64(&$tmp3762, 40);
        panda$core$Bit $tmp3763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1696_93751.$rawValue, $tmp3762);
        $tmp3753 = $tmp3763.value;
        $l3761:;
        panda$core$Bit $tmp3764 = { $tmp3753 };
        if ($tmp3764.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3767 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3768, 36);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3767, $tmp3768, ((org$pandalanguage$pandac$parser$Token) start3743.value).position, NULL);
            $tmp3766 = $tmp3767;
            $tmp3765 = $tmp3766;
            $returnValue3748 = $tmp3765;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3765));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3766));
            return $returnValue3748;
        }
        }
        else {
        {
            int $tmp3772;
            {
                panda$collections$Array* $tmp3776 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp3776);
                $tmp3775 = $tmp3776;
                $tmp3774 = $tmp3775;
                children3773 = $tmp3774;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3774));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3775));
                org$pandalanguage$pandac$ASTNode* $tmp3780 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3779 = $tmp3780;
                $tmp3778 = $tmp3779;
                expr3777 = $tmp3778;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3778));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3779));
                if (((panda$core$Bit) { expr3777 == NULL }).value) {
                {
                    $tmp3781 = NULL;
                    $returnValue3748 = $tmp3781;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3781));
                    $tmp3772 = 0;
                    goto $l3770;
                    $l3782:;
                    return $returnValue3748;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3773, ((panda$core$Object*) expr3777));
                org$pandalanguage$pandac$ASTNode* $tmp3786 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp3787, 36);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3786, $tmp3787, ((org$pandalanguage$pandac$parser$Token) start3743.value).position, expr3777);
                $tmp3785 = $tmp3786;
                $tmp3784 = $tmp3785;
                $returnValue3748 = $tmp3784;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3784));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3785));
                $tmp3772 = 1;
                goto $l3770;
                $l3788:;
                return $returnValue3748;
            }
            $l3770:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3777));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children3773));
            children3773 = NULL;
            expr3777 = NULL;
            switch ($tmp3772) {
                case 0: goto $l3782;
                case 1: goto $l3788;
            }
            $l3790:;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1714_93791;
    panda$core$Int64 $tmp3793;
    org$pandalanguage$pandac$ASTNode* $returnValue3795;
    org$pandalanguage$pandac$ASTNode* $tmp3796;
    org$pandalanguage$pandac$ASTNode* $tmp3797;
    panda$core$Int64 $tmp3800;
    org$pandalanguage$pandac$ASTNode* $tmp3802;
    org$pandalanguage$pandac$ASTNode* $tmp3803;
    panda$core$Int64 $tmp3806;
    org$pandalanguage$pandac$ASTNode* $tmp3808;
    org$pandalanguage$pandac$ASTNode* $tmp3809;
    panda$core$Bit $tmp3812;
    {
        org$pandalanguage$pandac$parser$Token $tmp3792 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1714_93791 = $tmp3792.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3793, 28);
        panda$core$Bit $tmp3794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1714_93791.$rawValue, $tmp3793);
        if ($tmp3794.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3798 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3797 = $tmp3798;
            $tmp3796 = $tmp3797;
            $returnValue3795 = $tmp3796;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3796));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3797));
            return $returnValue3795;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3800, 29);
        panda$core$Bit $tmp3801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1714_93791.$rawValue, $tmp3800);
        if ($tmp3801.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3804 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3803 = $tmp3804;
            $tmp3802 = $tmp3803;
            $returnValue3795 = $tmp3802;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3802));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3803));
            return $returnValue3795;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3806, 27);
        panda$core$Bit $tmp3807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1714_93791.$rawValue, $tmp3806);
        if ($tmp3807.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3810 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3809 = $tmp3810;
            $tmp3808 = $tmp3809;
            $returnValue3795 = $tmp3808;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3808));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3809));
            return $returnValue3795;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp3812, false);
            if ($tmp3812.value) goto $l3813; else goto $l3814;
            $l3814:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3815, (panda$core$Int64) { 1718 });
            abort();
            $l3813:;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1726_93816;
    panda$core$Int64 $tmp3818;
    org$pandalanguage$pandac$ASTNode* $returnValue3820;
    org$pandalanguage$pandac$ASTNode* $tmp3821;
    org$pandalanguage$pandac$ASTNode* $tmp3822;
    panda$core$Int64 $tmp3825;
    org$pandalanguage$pandac$ASTNode* $tmp3827;
    org$pandalanguage$pandac$ASTNode* $tmp3828;
    panda$core$Int64 $tmp3831;
    org$pandalanguage$pandac$ASTNode* $tmp3833;
    org$pandalanguage$pandac$ASTNode* $tmp3834;
    panda$core$Int64 $tmp3837;
    org$pandalanguage$pandac$ASTNode* $tmp3839;
    org$pandalanguage$pandac$ASTNode* $tmp3840;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3843;
    panda$core$Int64 $tmp3844;
    org$pandalanguage$pandac$ASTNode* $tmp3846;
    {
        org$pandalanguage$pandac$parser$Token $tmp3817 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1726_93816 = $tmp3817.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3818, 30);
        panda$core$Bit $tmp3819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1726_93816.$rawValue, $tmp3818);
        if ($tmp3819.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3823 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3822 = $tmp3823;
            $tmp3821 = $tmp3822;
            $returnValue3820 = $tmp3821;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3821));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3822));
            return $returnValue3820;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3825, 32);
        panda$core$Bit $tmp3826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1726_93816.$rawValue, $tmp3825);
        if ($tmp3826.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3829 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3828 = $tmp3829;
            $tmp3827 = $tmp3828;
            $returnValue3820 = $tmp3827;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3827));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3828));
            return $returnValue3820;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3831, 35);
        panda$core$Bit $tmp3832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1726_93816.$rawValue, $tmp3831);
        if ($tmp3832.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3835 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3834 = $tmp3835;
            $tmp3833 = $tmp3834;
            $returnValue3820 = $tmp3833;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3833));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3834));
            return $returnValue3820;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3837, 31);
        panda$core$Bit $tmp3838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1726_93816.$rawValue, $tmp3837);
        if ($tmp3838.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3841 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3840 = $tmp3841;
            $tmp3839 = $tmp3840;
            $returnValue3820 = $tmp3839;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3839));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3840));
            return $returnValue3820;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3844, 30);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3843, $tmp3844);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3843, &$s3845);
            $tmp3846 = NULL;
            $returnValue3820 = $tmp3846;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3846));
            return $returnValue3820;
        }
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3851;
    org$pandalanguage$pandac$parser$Token$nullable start3852;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3853;
    panda$core$Int64 $tmp3854;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3856;
    panda$core$Int64 $tmp3857;
    org$pandalanguage$pandac$ASTNode* $returnValue3860;
    org$pandalanguage$pandac$ASTNode* $tmp3861;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3864;
    panda$core$Int64 $tmp3865;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3866;
    panda$core$Int64 $tmp3867;
    org$pandalanguage$pandac$parser$Token$nullable name3868;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3869;
    panda$core$Int64 $tmp3870;
    org$pandalanguage$pandac$ASTNode* $tmp3873;
    panda$collections$ImmutableArray* params3876 = NULL;
    panda$collections$ImmutableArray* $tmp3877;
    panda$collections$ImmutableArray* $tmp3878;
    org$pandalanguage$pandac$ASTNode* $tmp3880;
    org$pandalanguage$pandac$ASTNode* returnType3883 = NULL;
    panda$core$Int64 $tmp3885;
    org$pandalanguage$pandac$ASTNode* $tmp3887;
    org$pandalanguage$pandac$ASTNode* $tmp3888;
    org$pandalanguage$pandac$ASTNode* $tmp3889;
    org$pandalanguage$pandac$ASTNode* $tmp3891;
    org$pandalanguage$pandac$ASTNode* $tmp3894;
    org$pandalanguage$pandac$ASTNode* $tmp3895;
    panda$collections$ImmutableArray* body3896 = NULL;
    panda$collections$ImmutableArray* $tmp3897;
    panda$collections$ImmutableArray* $tmp3898;
    org$pandalanguage$pandac$ASTNode* $tmp3900;
    org$pandalanguage$pandac$ASTNode* $tmp3903;
    org$pandalanguage$pandac$ASTNode* $tmp3904;
    panda$core$Int64 $tmp3906;
    panda$collections$ImmutableArray* $tmp3907;
    panda$core$String* $tmp3909;
    int $tmp3850;
    {
        memset(&kind3851, 0, sizeof(kind3851));
        panda$core$Int64$init$builtin_int64(&$tmp3854, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3853, $tmp3854);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3855 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3853);
        start3852 = $tmp3855;
        if (((panda$core$Bit) { !start3852.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3857, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3856, $tmp3857);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3859 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3856, &$s3858);
            start3852 = $tmp3859;
            if (((panda$core$Bit) { !start3852.nonnull }).value) {
            {
                $tmp3861 = NULL;
                $returnValue3860 = $tmp3861;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3861));
                $tmp3850 = 0;
                goto $l3848;
                $l3862:;
                return $returnValue3860;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp3865, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3864, $tmp3865);
            kind3851 = $tmp3864;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3867, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3866, $tmp3867);
            kind3851 = $tmp3866;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3870, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3869, $tmp3870);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3872 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3869, &$s3871);
        name3868 = $tmp3872;
        if (((panda$core$Bit) { !name3868.nonnull }).value) {
        {
            $tmp3873 = NULL;
            $returnValue3860 = $tmp3873;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3873));
            $tmp3850 = 1;
            goto $l3848;
            $l3874:;
            return $returnValue3860;
        }
        }
        panda$collections$ImmutableArray* $tmp3879 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3878 = $tmp3879;
        $tmp3877 = $tmp3878;
        params3876 = $tmp3877;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3877));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3878));
        if (((panda$core$Bit) { params3876 == NULL }).value) {
        {
            $tmp3880 = NULL;
            $returnValue3860 = $tmp3880;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3880));
            $tmp3850 = 2;
            goto $l3848;
            $l3881:;
            return $returnValue3860;
        }
        }
        memset(&returnType3883, 0, sizeof(returnType3883));
        org$pandalanguage$pandac$parser$Token $tmp3884 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3885, 95);
        panda$core$Bit $tmp3886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3884.kind.$rawValue, $tmp3885);
        if ($tmp3886.value) {
        {
            {
                $tmp3887 = returnType3883;
                org$pandalanguage$pandac$ASTNode* $tmp3890 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3889 = $tmp3890;
                $tmp3888 = $tmp3889;
                returnType3883 = $tmp3888;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3888));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3889));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3887));
            }
            if (((panda$core$Bit) { returnType3883 == NULL }).value) {
            {
                $tmp3891 = NULL;
                $returnValue3860 = $tmp3891;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3891));
                $tmp3850 = 3;
                goto $l3848;
                $l3892:;
                return $returnValue3860;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3894 = returnType3883;
                $tmp3895 = NULL;
                returnType3883 = $tmp3895;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3895));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3894));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3899 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3898 = $tmp3899;
        $tmp3897 = $tmp3898;
        body3896 = $tmp3897;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3897));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3898));
        if (((panda$core$Bit) { body3896 == NULL }).value) {
        {
            $tmp3900 = NULL;
            $returnValue3860 = $tmp3900;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3900));
            $tmp3850 = 4;
            goto $l3848;
            $l3901:;
            return $returnValue3860;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3905 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3906, 26);
        panda$collections$ImmutableArray* $tmp3908 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3908);
        $tmp3907 = $tmp3908;
        panda$core$String* $tmp3910 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3868.value));
        $tmp3909 = $tmp3910;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3905, $tmp3906, ((org$pandalanguage$pandac$parser$Token) start3852.value).position, NULL, $tmp3907, kind3851, $tmp3909, NULL, params3876, returnType3883, body3896);
        $tmp3904 = $tmp3905;
        $tmp3903 = $tmp3904;
        $returnValue3860 = $tmp3903;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3903));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3904));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3909));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3907));
        $tmp3850 = 5;
        goto $l3848;
        $l3911:;
        return $returnValue3860;
    }
    $l3848:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3896));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3883));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3876));
    params3876 = NULL;
    body3896 = NULL;
    switch ($tmp3850) {
        case 2: goto $l3881;
        case 4: goto $l3901;
        case 5: goto $l3911;
        case 3: goto $l3892;
        case 1: goto $l3874;
        case 0: goto $l3862;
    }
    $l3913:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1785_93914;
    panda$core$Int64 $tmp3916;
    org$pandalanguage$pandac$ASTNode* $returnValue3918;
    org$pandalanguage$pandac$ASTNode* $tmp3919;
    org$pandalanguage$pandac$ASTNode* $tmp3920;
    panda$core$Int64 $tmp3923;
    org$pandalanguage$pandac$ASTNode* $tmp3925;
    org$pandalanguage$pandac$ASTNode* $tmp3926;
    panda$core$Int64 $tmp3929;
    org$pandalanguage$pandac$ASTNode* $tmp3931;
    org$pandalanguage$pandac$ASTNode* $tmp3932;
    panda$core$Int64 $tmp3935;
    org$pandalanguage$pandac$ASTNode* $tmp3937;
    org$pandalanguage$pandac$ASTNode* $tmp3938;
    panda$core$Int64 $tmp3941;
    org$pandalanguage$pandac$ASTNode* $tmp3943;
    org$pandalanguage$pandac$ASTNode* $tmp3944;
    panda$core$Int64 $tmp3947;
    org$pandalanguage$pandac$ASTNode* $tmp3949;
    org$pandalanguage$pandac$ASTNode* $tmp3950;
    panda$core$Int64 $tmp3953;
    org$pandalanguage$pandac$ASTNode* $tmp3955;
    org$pandalanguage$pandac$ASTNode* $tmp3956;
    panda$core$Int64 $tmp3959;
    org$pandalanguage$pandac$ASTNode* $tmp3961;
    org$pandalanguage$pandac$ASTNode* $tmp3962;
    panda$core$Int64 $tmp3965;
    org$pandalanguage$pandac$parser$Token id3967;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3969;
    panda$core$Int64 $tmp3970;
    org$pandalanguage$pandac$ASTNode* $tmp3972;
    org$pandalanguage$pandac$ASTNode* $tmp3973;
    panda$core$String* $tmp3974;
    org$pandalanguage$pandac$ASTNode* $tmp3978;
    org$pandalanguage$pandac$ASTNode* $tmp3979;
    panda$core$Int64 $tmp3983;
    panda$core$Int64 $tmp3986;
    org$pandalanguage$pandac$ASTNode* $tmp3989;
    org$pandalanguage$pandac$ASTNode* $tmp3990;
    panda$core$Int64 $tmp3996;
    panda$core$Int64 $tmp3999;
    panda$core$Int64 $tmp4003;
    panda$core$Int64 $tmp4007;
    org$pandalanguage$pandac$ASTNode* $tmp4010;
    org$pandalanguage$pandac$ASTNode* $tmp4011;
    panda$core$Int64 $tmp4014;
    org$pandalanguage$pandac$ASTNode* $tmp4016;
    org$pandalanguage$pandac$ASTNode* $tmp4017;
    panda$core$Int64 $tmp4021;
    panda$core$Int64 $tmp4024;
    org$pandalanguage$pandac$ASTNode* $tmp4027;
    org$pandalanguage$pandac$ASTNode* $tmp4028;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4031;
    panda$core$Int64 $tmp4032;
    org$pandalanguage$pandac$ASTNode* $tmp4034;
    {
        org$pandalanguage$pandac$parser$Token $tmp3915 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1785_93914 = $tmp3915.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3916, 36);
        panda$core$Bit $tmp3917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp3916);
        if ($tmp3917.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3921 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3920 = $tmp3921;
            $tmp3919 = $tmp3920;
            $returnValue3918 = $tmp3919;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3919));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3920));
            return $returnValue3918;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3923, 32);
        panda$core$Bit $tmp3924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp3923);
        if ($tmp3924.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3927 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3926 = $tmp3927;
            $tmp3925 = $tmp3926;
            $returnValue3918 = $tmp3925;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3925));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3926));
            return $returnValue3918;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3929, 31);
        panda$core$Bit $tmp3930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp3929);
        if ($tmp3930.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3933 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3932 = $tmp3933;
            $tmp3931 = $tmp3932;
            $returnValue3918 = $tmp3931;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3931));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3932));
            return $returnValue3918;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3935, 30);
        panda$core$Bit $tmp3936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp3935);
        if ($tmp3936.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3939 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3938 = $tmp3939;
            $tmp3937 = $tmp3938;
            $returnValue3918 = $tmp3937;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3937));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3938));
            return $returnValue3918;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3941, 35);
        panda$core$Bit $tmp3942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp3941);
        if ($tmp3942.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3945 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3944 = $tmp3945;
            $tmp3943 = $tmp3944;
            $returnValue3918 = $tmp3943;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3943));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3944));
            return $returnValue3918;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3947, 44);
        panda$core$Bit $tmp3948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp3947);
        if ($tmp3948.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3951 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3950 = $tmp3951;
            $tmp3949 = $tmp3950;
            $returnValue3918 = $tmp3949;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3949));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3950));
            return $returnValue3918;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3953, 38);
        panda$core$Bit $tmp3954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp3953);
        if ($tmp3954.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3957 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3956 = $tmp3957;
            $tmp3955 = $tmp3956;
            $returnValue3918 = $tmp3955;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3955));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3956));
            return $returnValue3918;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3959, 99);
        panda$core$Bit $tmp3960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp3959);
        if ($tmp3960.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3963 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3962 = $tmp3963;
            $tmp3961 = $tmp3962;
            $returnValue3918 = $tmp3961;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3961));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3962));
            return $returnValue3918;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3965, 48);
        panda$core$Bit $tmp3966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp3965);
        if ($tmp3966.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3968 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id3967 = $tmp3968;
            panda$core$Int64$init$builtin_int64(&$tmp3970, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3969, $tmp3970);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3971 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3969);
            if (((panda$core$Bit) { $tmp3971.nonnull }).value) {
            {
                panda$core$String* $tmp3975 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id3967);
                $tmp3974 = $tmp3975;
                org$pandalanguage$pandac$ASTNode* $tmp3976 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp3974);
                $tmp3973 = $tmp3976;
                $tmp3972 = $tmp3973;
                $returnValue3918 = $tmp3972;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3972));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3973));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3974));
                return $returnValue3918;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id3967);
            org$pandalanguage$pandac$ASTNode* $tmp3980 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3979 = $tmp3980;
            $tmp3978 = $tmp3979;
            $returnValue3918 = $tmp3978;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3978));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3979));
            return $returnValue3918;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3983, 46);
        panda$core$Bit $tmp3984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp3983);
        bool $tmp3982 = $tmp3984.value;
        if ($tmp3982) goto $l3985;
        panda$core$Int64$init$builtin_int64(&$tmp3986, 47);
        panda$core$Bit $tmp3987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp3986);
        $tmp3982 = $tmp3987.value;
        $l3985:;
        panda$core$Bit $tmp3988 = { $tmp3982 };
        if ($tmp3988.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3991 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3990 = $tmp3991;
            $tmp3989 = $tmp3990;
            $returnValue3918 = $tmp3989;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3989));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3990));
            return $returnValue3918;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3996, 23);
        panda$core$Bit $tmp3997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp3996);
        bool $tmp3995 = $tmp3997.value;
        if ($tmp3995) goto $l3998;
        panda$core$Int64$init$builtin_int64(&$tmp3999, 24);
        panda$core$Bit $tmp4000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp3999);
        $tmp3995 = $tmp4000.value;
        $l3998:;
        panda$core$Bit $tmp4001 = { $tmp3995 };
        bool $tmp3994 = $tmp4001.value;
        if ($tmp3994) goto $l4002;
        panda$core$Int64$init$builtin_int64(&$tmp4003, 25);
        panda$core$Bit $tmp4004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp4003);
        $tmp3994 = $tmp4004.value;
        $l4002:;
        panda$core$Bit $tmp4005 = { $tmp3994 };
        bool $tmp3993 = $tmp4005.value;
        if ($tmp3993) goto $l4006;
        panda$core$Int64$init$builtin_int64(&$tmp4007, 26);
        panda$core$Bit $tmp4008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp4007);
        $tmp3993 = $tmp4008.value;
        $l4006:;
        panda$core$Bit $tmp4009 = { $tmp3993 };
        if ($tmp4009.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4012 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4011 = $tmp4012;
            $tmp4010 = $tmp4011;
            $returnValue3918 = $tmp4010;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4010));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4011));
            return $returnValue3918;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4014, 22);
        panda$core$Bit $tmp4015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp4014);
        if ($tmp4015.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4018 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4017 = $tmp4018;
            $tmp4016 = $tmp4017;
            $returnValue3918 = $tmp4016;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4016));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4017));
            return $returnValue3918;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4021, 21);
        panda$core$Bit $tmp4022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp4021);
        bool $tmp4020 = $tmp4022.value;
        if ($tmp4020) goto $l4023;
        panda$core$Int64$init$builtin_int64(&$tmp4024, 20);
        panda$core$Bit $tmp4025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1785_93914.$rawValue, $tmp4024);
        $tmp4020 = $tmp4025.value;
        $l4023:;
        panda$core$Bit $tmp4026 = { $tmp4020 };
        if ($tmp4026.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4029 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4028 = $tmp4029;
            $tmp4027 = $tmp4028;
            $returnValue3918 = $tmp4027;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4027));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4028));
            return $returnValue3918;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4032, 36);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4031, $tmp4032);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4031, &$s4033);
            $tmp4034 = NULL;
            $returnValue3918 = $tmp4034;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4034));
            return $returnValue3918;
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
    org$pandalanguage$pandac$parser$Token$nullable start4039;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4040;
    panda$core$Int64 $tmp4041;
    org$pandalanguage$pandac$ASTNode* $returnValue4044;
    org$pandalanguage$pandac$ASTNode* $tmp4045;
    org$pandalanguage$pandac$parser$Token$nullable next4048;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4049;
    panda$core$Int64 $tmp4050;
    org$pandalanguage$pandac$ASTNode* $tmp4053;
    panda$core$MutableString* name4056 = NULL;
    panda$core$MutableString* $tmp4057;
    panda$core$MutableString* $tmp4058;
    panda$core$String* $tmp4060;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4064;
    panda$core$Int64 $tmp4065;
    panda$core$Char8 $tmp4067;
    panda$core$UInt8 $tmp4068;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4069;
    panda$core$Int64 $tmp4070;
    org$pandalanguage$pandac$ASTNode* $tmp4073;
    panda$core$String* $tmp4076;
    org$pandalanguage$pandac$ASTNode* $tmp4078;
    org$pandalanguage$pandac$ASTNode* $tmp4079;
    panda$core$Int64 $tmp4081;
    panda$core$String* $tmp4082;
    int $tmp4038;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4041, 14);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4040, $tmp4041);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4043 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4040, &$s4042);
        start4039 = $tmp4043;
        if (((panda$core$Bit) { !start4039.nonnull }).value) {
        {
            $tmp4045 = NULL;
            $returnValue4044 = $tmp4045;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4045));
            $tmp4038 = 0;
            goto $l4036;
            $l4046:;
            return $returnValue4044;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4050, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4049, $tmp4050);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4052 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4049, &$s4051);
        next4048 = $tmp4052;
        if (((panda$core$Bit) { !next4048.nonnull }).value) {
        {
            $tmp4053 = NULL;
            $returnValue4044 = $tmp4053;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4053));
            $tmp4038 = 1;
            goto $l4036;
            $l4054:;
            return $returnValue4044;
        }
        }
        panda$core$MutableString* $tmp4059 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4061 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4048.value));
        $tmp4060 = $tmp4061;
        panda$core$MutableString$init$panda$core$String($tmp4059, $tmp4060);
        $tmp4058 = $tmp4059;
        $tmp4057 = $tmp4058;
        name4056 = $tmp4057;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4057));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4058));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4060));
        $l4062:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4065, 98);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4064, $tmp4065);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4066 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4064);
            next4048 = $tmp4066;
            if (((panda$core$Bit) { !next4048.nonnull }).value) {
            {
                goto $l4063;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4068, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4067, $tmp4068);
            panda$core$MutableString$append$panda$core$Char8(name4056, $tmp4067);
            panda$core$Int64$init$builtin_int64(&$tmp4070, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4069, $tmp4070);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4072 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4069, &$s4071);
            next4048 = $tmp4072;
            if (((panda$core$Bit) { !next4048.nonnull }).value) {
            {
                $tmp4073 = NULL;
                $returnValue4044 = $tmp4073;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4073));
                $tmp4038 = 2;
                goto $l4036;
                $l4074:;
                return $returnValue4044;
            }
            }
            panda$core$String* $tmp4077 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4048.value));
            $tmp4076 = $tmp4077;
            panda$core$MutableString$append$panda$core$String(name4056, $tmp4076);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4076));
        }
        }
        $l4063:;
        org$pandalanguage$pandac$ASTNode* $tmp4080 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4081, 30);
        panda$core$String* $tmp4083 = panda$core$MutableString$finish$R$panda$core$String(name4056);
        $tmp4082 = $tmp4083;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4080, $tmp4081, ((org$pandalanguage$pandac$parser$Token) start4039.value).position, $tmp4082);
        $tmp4079 = $tmp4080;
        $tmp4078 = $tmp4079;
        $returnValue4044 = $tmp4078;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4078));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4079));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4082));
        $tmp4038 = 3;
        goto $l4036;
        $l4084:;
        return $returnValue4044;
    }
    $l4036:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4056));
    name4056 = NULL;
    switch ($tmp4038) {
        case 3: goto $l4084;
        case 2: goto $l4074;
        case 1: goto $l4054;
        case 0: goto $l4046;
    }
    $l4086:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4090;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4091;
    panda$core$Int64 $tmp4092;
    org$pandalanguage$pandac$ASTNode* $returnValue4095;
    org$pandalanguage$pandac$ASTNode* $tmp4096;
    org$pandalanguage$pandac$parser$Token$nullable next4099;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4100;
    panda$core$Int64 $tmp4101;
    org$pandalanguage$pandac$ASTNode* $tmp4104;
    panda$core$MutableString* name4107 = NULL;
    panda$core$MutableString* $tmp4108;
    panda$core$MutableString* $tmp4109;
    panda$core$String* $tmp4111;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4115;
    panda$core$Int64 $tmp4116;
    panda$core$Char8 $tmp4118;
    panda$core$UInt8 $tmp4119;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4120;
    panda$core$Int64 $tmp4121;
    org$pandalanguage$pandac$ASTNode* $tmp4124;
    panda$core$String* $tmp4127;
    org$pandalanguage$pandac$ASTNode* $tmp4129;
    org$pandalanguage$pandac$ASTNode* $tmp4130;
    panda$core$Int64 $tmp4132;
    panda$core$String* $tmp4133;
    int $tmp4089;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4092, 15);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4091, $tmp4092);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4094 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4091, &$s4093);
        start4090 = $tmp4094;
        if (((panda$core$Bit) { !start4090.nonnull }).value) {
        {
            $tmp4096 = NULL;
            $returnValue4095 = $tmp4096;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4096));
            $tmp4089 = 0;
            goto $l4087;
            $l4097:;
            return $returnValue4095;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4101, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4100, $tmp4101);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4103 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4100, &$s4102);
        next4099 = $tmp4103;
        if (((panda$core$Bit) { !next4099.nonnull }).value) {
        {
            $tmp4104 = NULL;
            $returnValue4095 = $tmp4104;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4104));
            $tmp4089 = 1;
            goto $l4087;
            $l4105:;
            return $returnValue4095;
        }
        }
        panda$core$MutableString* $tmp4110 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4112 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4099.value));
        $tmp4111 = $tmp4112;
        panda$core$MutableString$init$panda$core$String($tmp4110, $tmp4111);
        $tmp4109 = $tmp4110;
        $tmp4108 = $tmp4109;
        name4107 = $tmp4108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4109));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4111));
        $l4113:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4116, 98);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4115, $tmp4116);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4117 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4115);
            next4099 = $tmp4117;
            if (((panda$core$Bit) { !next4099.nonnull }).value) {
            {
                goto $l4114;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4119, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4118, $tmp4119);
            panda$core$MutableString$append$panda$core$Char8(name4107, $tmp4118);
            panda$core$Int64$init$builtin_int64(&$tmp4121, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4120, $tmp4121);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4123 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4120, &$s4122);
            next4099 = $tmp4123;
            if (((panda$core$Bit) { !next4099.nonnull }).value) {
            {
                $tmp4124 = NULL;
                $returnValue4095 = $tmp4124;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4124));
                $tmp4089 = 2;
                goto $l4087;
                $l4125:;
                return $returnValue4095;
            }
            }
            panda$core$String* $tmp4128 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4099.value));
            $tmp4127 = $tmp4128;
            panda$core$MutableString$append$panda$core$String(name4107, $tmp4127);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4127));
        }
        }
        $l4114:;
        org$pandalanguage$pandac$ASTNode* $tmp4131 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4132, 46);
        panda$core$String* $tmp4134 = panda$core$MutableString$finish$R$panda$core$String(name4107);
        $tmp4133 = $tmp4134;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4131, $tmp4132, ((org$pandalanguage$pandac$parser$Token) start4090.value).position, $tmp4133);
        $tmp4130 = $tmp4131;
        $tmp4129 = $tmp4130;
        $returnValue4095 = $tmp4129;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4129));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4133));
        $tmp4089 = 3;
        goto $l4087;
        $l4135:;
        return $returnValue4095;
    }
    $l4087:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4107));
    name4107 = NULL;
    switch ($tmp4089) {
        case 1: goto $l4105;
        case 3: goto $l4135;
        case 2: goto $l4125;
        case 0: goto $l4097;
    }
    $l4137:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4141;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4142;
    panda$core$Int64 $tmp4143;
    panda$collections$ImmutableArray* $returnValue4146;
    panda$collections$ImmutableArray* $tmp4147;
    org$pandalanguage$pandac$parser$Token$nullable id4150;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4151;
    panda$core$Int64 $tmp4152;
    panda$collections$ImmutableArray* $tmp4155;
    panda$collections$Array* parameters4158 = NULL;
    panda$collections$Array* $tmp4159;
    panda$collections$Array* $tmp4160;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4162;
    panda$core$Int64 $tmp4163;
    org$pandalanguage$pandac$ASTNode* t4168 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4169;
    org$pandalanguage$pandac$ASTNode* $tmp4170;
    panda$collections$ImmutableArray* $tmp4172;
    org$pandalanguage$pandac$ASTNode* $tmp4176;
    panda$core$Int64 $tmp4178;
    panda$core$String* $tmp4179;
    org$pandalanguage$pandac$ASTNode* $tmp4182;
    panda$core$Int64 $tmp4184;
    panda$core$String* $tmp4185;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4190;
    panda$core$Int64 $tmp4191;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4193;
    panda$core$Int64 $tmp4194;
    panda$collections$ImmutableArray* $tmp4197;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4200;
    panda$core$Int64 $tmp4201;
    org$pandalanguage$pandac$ASTNode* t4206 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4207;
    org$pandalanguage$pandac$ASTNode* $tmp4208;
    panda$collections$ImmutableArray* $tmp4210;
    org$pandalanguage$pandac$ASTNode* $tmp4214;
    panda$core$Int64 $tmp4216;
    panda$core$String* $tmp4217;
    org$pandalanguage$pandac$ASTNode* $tmp4220;
    panda$core$Int64 $tmp4222;
    panda$core$String* $tmp4223;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4225;
    panda$core$Int64 $tmp4226;
    panda$collections$ImmutableArray* $tmp4229;
    panda$collections$ImmutableArray* $tmp4232;
    panda$collections$ImmutableArray* $tmp4233;
    int $tmp4140;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4143, 62);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4142, $tmp4143);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4145 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4142, &$s4144);
        start4141 = $tmp4145;
        if (((panda$core$Bit) { !start4141.nonnull }).value) {
        {
            $tmp4147 = NULL;
            $returnValue4146 = $tmp4147;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4147));
            $tmp4140 = 0;
            goto $l4138;
            $l4148:;
            return $returnValue4146;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4152, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4151, $tmp4152);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4154 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4151, &$s4153);
        id4150 = $tmp4154;
        if (((panda$core$Bit) { !id4150.nonnull }).value) {
        {
            $tmp4155 = NULL;
            $returnValue4146 = $tmp4155;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4155));
            $tmp4140 = 1;
            goto $l4138;
            $l4156:;
            return $returnValue4146;
        }
        }
        panda$collections$Array* $tmp4161 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4161);
        $tmp4160 = $tmp4161;
        $tmp4159 = $tmp4160;
        parameters4158 = $tmp4159;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4159));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4160));
        panda$core$Int64$init$builtin_int64(&$tmp4163, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4162, $tmp4163);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4164 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4162);
        if (((panda$core$Bit) { $tmp4164.nonnull }).value) {
        {
            int $tmp4167;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4171 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4170 = $tmp4171;
                $tmp4169 = $tmp4170;
                t4168 = $tmp4169;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4169));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4170));
                if (((panda$core$Bit) { t4168 == NULL }).value) {
                {
                    $tmp4172 = NULL;
                    $returnValue4146 = $tmp4172;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4172));
                    $tmp4167 = 0;
                    goto $l4165;
                    $l4173:;
                    $tmp4140 = 2;
                    goto $l4138;
                    $l4174:;
                    return $returnValue4146;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp4177 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4178, 44);
                panda$core$String* $tmp4180 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4150.value));
                $tmp4179 = $tmp4180;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4177, $tmp4178, ((org$pandalanguage$pandac$parser$Token) id4150.value).position, $tmp4179, t4168);
                $tmp4176 = $tmp4177;
                panda$collections$Array$add$panda$collections$Array$T(parameters4158, ((panda$core$Object*) $tmp4176));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4176));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4179));
            }
            $tmp4167 = -1;
            goto $l4165;
            $l4165:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4168));
            t4168 = NULL;
            switch ($tmp4167) {
                case -1: goto $l4181;
                case 0: goto $l4173;
            }
            $l4181:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4183 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp4184, 20);
            panda$core$String* $tmp4186 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4150.value));
            $tmp4185 = $tmp4186;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4183, $tmp4184, ((org$pandalanguage$pandac$parser$Token) id4150.value).position, $tmp4185);
            $tmp4182 = $tmp4183;
            panda$collections$Array$add$panda$collections$Array$T(parameters4158, ((panda$core$Object*) $tmp4182));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4182));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4185));
        }
        }
        $l4187:;
        panda$core$Int64$init$builtin_int64(&$tmp4191, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4190, $tmp4191);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4192 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4190);
        bool $tmp4189 = ((panda$core$Bit) { $tmp4192.nonnull }).value;
        if (!$tmp4189) goto $l4188;
        {
            panda$core$Int64$init$builtin_int64(&$tmp4194, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4193, $tmp4194);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4196 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4193, &$s4195);
            id4150 = $tmp4196;
            if (((panda$core$Bit) { !id4150.nonnull }).value) {
            {
                $tmp4197 = NULL;
                $returnValue4146 = $tmp4197;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4197));
                $tmp4140 = 3;
                goto $l4138;
                $l4198:;
                return $returnValue4146;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4201, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4200, $tmp4201);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4202 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4200);
            if (((panda$core$Bit) { $tmp4202.nonnull }).value) {
            {
                int $tmp4205;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4209 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4208 = $tmp4209;
                    $tmp4207 = $tmp4208;
                    t4206 = $tmp4207;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4207));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4208));
                    if (((panda$core$Bit) { t4206 == NULL }).value) {
                    {
                        $tmp4210 = NULL;
                        $returnValue4146 = $tmp4210;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4210));
                        $tmp4205 = 0;
                        goto $l4203;
                        $l4211:;
                        $tmp4140 = 4;
                        goto $l4138;
                        $l4212:;
                        return $returnValue4146;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp4215 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp4216, 44);
                    panda$core$String* $tmp4218 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4150.value));
                    $tmp4217 = $tmp4218;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4215, $tmp4216, ((org$pandalanguage$pandac$parser$Token) id4150.value).position, $tmp4217, t4206);
                    $tmp4214 = $tmp4215;
                    panda$collections$Array$add$panda$collections$Array$T(parameters4158, ((panda$core$Object*) $tmp4214));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4214));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4217));
                }
                $tmp4205 = -1;
                goto $l4203;
                $l4203:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4206));
                t4206 = NULL;
                switch ($tmp4205) {
                    case -1: goto $l4219;
                    case 0: goto $l4211;
                }
                $l4219:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4221 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4222, 20);
                panda$core$String* $tmp4224 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4150.value));
                $tmp4223 = $tmp4224;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4221, $tmp4222, ((org$pandalanguage$pandac$parser$Token) id4150.value).position, $tmp4223);
                $tmp4220 = $tmp4221;
                panda$collections$Array$add$panda$collections$Array$T(parameters4158, ((panda$core$Object*) $tmp4220));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4220));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4223));
            }
            }
        }
        goto $l4187;
        $l4188:;
        panda$core$Int64$init$builtin_int64(&$tmp4226, 63);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4225, $tmp4226);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4228 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4225, &$s4227);
        if (((panda$core$Bit) { !$tmp4228.nonnull }).value) {
        {
            $tmp4229 = NULL;
            $returnValue4146 = $tmp4229;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4229));
            $tmp4140 = 5;
            goto $l4138;
            $l4230:;
            return $returnValue4146;
        }
        }
        panda$collections$ImmutableArray* $tmp4234 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters4158);
        $tmp4233 = $tmp4234;
        $tmp4232 = $tmp4233;
        $returnValue4146 = $tmp4232;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4232));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4233));
        $tmp4140 = 6;
        goto $l4138;
        $l4235:;
        return $returnValue4146;
    }
    $l4138:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters4158));
    parameters4158 = NULL;
    switch ($tmp4140) {
        case 6: goto $l4235;
        case 5: goto $l4230;
        case 2: goto $l4174;
        case 4: goto $l4212;
        case 3: goto $l4198;
        case 1: goto $l4156;
        case 0: goto $l4148;
    }
    $l4237:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4241;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4242;
    panda$core$Int64 $tmp4243;
    panda$collections$ImmutableArray* $returnValue4246;
    panda$collections$ImmutableArray* $tmp4247;
    panda$collections$Array* result4250 = NULL;
    panda$collections$Array* $tmp4251;
    panda$collections$Array* $tmp4252;
    org$pandalanguage$pandac$ASTNode* t4254 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4255;
    org$pandalanguage$pandac$ASTNode* $tmp4256;
    panda$collections$ImmutableArray* $tmp4258;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4264;
    panda$core$Int64 $tmp4265;
    org$pandalanguage$pandac$ASTNode* $tmp4267;
    org$pandalanguage$pandac$ASTNode* $tmp4268;
    org$pandalanguage$pandac$ASTNode* $tmp4269;
    panda$collections$ImmutableArray* $tmp4271;
    panda$collections$ImmutableArray* $tmp4274;
    panda$collections$ImmutableArray* $tmp4275;
    int $tmp4240;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4243, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4242, $tmp4243);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4245 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4242, &$s4244);
        start4241 = $tmp4245;
        if (((panda$core$Bit) { !start4241.nonnull }).value) {
        {
            $tmp4247 = NULL;
            $returnValue4246 = $tmp4247;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4247));
            $tmp4240 = 0;
            goto $l4238;
            $l4248:;
            return $returnValue4246;
        }
        }
        panda$collections$Array* $tmp4253 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4253);
        $tmp4252 = $tmp4253;
        $tmp4251 = $tmp4252;
        result4250 = $tmp4251;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4252));
        org$pandalanguage$pandac$ASTNode* $tmp4257 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4256 = $tmp4257;
        $tmp4255 = $tmp4256;
        t4254 = $tmp4255;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4256));
        if (((panda$core$Bit) { t4254 == NULL }).value) {
        {
            $tmp4258 = NULL;
            $returnValue4246 = $tmp4258;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4258));
            $tmp4240 = 1;
            goto $l4238;
            $l4259:;
            return $returnValue4246;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result4250, ((panda$core$Object*) t4254));
        $l4261:;
        panda$core$Int64$init$builtin_int64(&$tmp4265, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4264, $tmp4265);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4266 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4264);
        bool $tmp4263 = ((panda$core$Bit) { $tmp4266.nonnull }).value;
        if (!$tmp4263) goto $l4262;
        {
            {
                $tmp4267 = t4254;
                org$pandalanguage$pandac$ASTNode* $tmp4270 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4269 = $tmp4270;
                $tmp4268 = $tmp4269;
                t4254 = $tmp4268;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4268));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4269));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4267));
            }
            if (((panda$core$Bit) { t4254 == NULL }).value) {
            {
                $tmp4271 = NULL;
                $returnValue4246 = $tmp4271;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4271));
                $tmp4240 = 2;
                goto $l4238;
                $l4272:;
                return $returnValue4246;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result4250, ((panda$core$Object*) t4254));
        }
        goto $l4261;
        $l4262:;
        panda$collections$ImmutableArray* $tmp4276 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4250);
        $tmp4275 = $tmp4276;
        $tmp4274 = $tmp4275;
        $returnValue4246 = $tmp4274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4275));
        $tmp4240 = 3;
        goto $l4238;
        $l4277:;
        return $returnValue4246;
    }
    $l4238:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4254));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4250));
    result4250 = NULL;
    t4254 = NULL;
    switch ($tmp4240) {
        case 3: goto $l4277;
        case 2: goto $l4272;
        case 0: goto $l4248;
        case 1: goto $l4259;
    }
    $l4279:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a4283;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4284;
    panda$core$Int64 $tmp4285;
    org$pandalanguage$pandac$ASTNode* expr4288 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4289;
    panda$core$Int64 $tmp4290;
    org$pandalanguage$pandac$ASTNode* $tmp4292;
    org$pandalanguage$pandac$ASTNode* $tmp4293;
    org$pandalanguage$pandac$ASTNode* $tmp4294;
    org$pandalanguage$pandac$ASTNode* $returnValue4296;
    org$pandalanguage$pandac$ASTNode* $tmp4297;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4300;
    panda$core$Int64 $tmp4301;
    org$pandalanguage$pandac$ASTNode* $tmp4303;
    org$pandalanguage$pandac$ASTNode* $tmp4304;
    panda$core$Int64 $tmp4306;
    panda$core$String* $tmp4307;
    int $tmp4282;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4285, 13);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4284, $tmp4285);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4287 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4284, &$s4286);
        a4283 = $tmp4287;
        memset(&expr4288, 0, sizeof(expr4288));
        panda$core$Int64$init$builtin_int64(&$tmp4290, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4289, $tmp4290);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4291 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4289);
        if (((panda$core$Bit) { $tmp4291.nonnull }).value) {
        {
            {
                $tmp4292 = expr4288;
                org$pandalanguage$pandac$ASTNode* $tmp4295 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4294 = $tmp4295;
                $tmp4293 = $tmp4294;
                expr4288 = $tmp4293;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4293));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4294));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4292));
            }
            if (((panda$core$Bit) { expr4288 == NULL }).value) {
            {
                $tmp4297 = NULL;
                $returnValue4296 = $tmp4297;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4297));
                $tmp4282 = 0;
                goto $l4280;
                $l4298:;
                return $returnValue4296;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4301, 104);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4300, $tmp4301);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4300, &$s4302);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4305 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4306, 0);
        panda$core$String* $tmp4308 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a4283.value));
        $tmp4307 = $tmp4308;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4305, $tmp4306, ((org$pandalanguage$pandac$parser$Token) a4283.value).position, $tmp4307, expr4288);
        $tmp4304 = $tmp4305;
        $tmp4303 = $tmp4304;
        $returnValue4296 = $tmp4303;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4303));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4304));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4307));
        $tmp4282 = 1;
        goto $l4280;
        $l4309:;
        return $returnValue4296;
    }
    $l4280:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr4288));
    switch ($tmp4282) {
        case 1: goto $l4309;
        case 0: goto $l4298;
    }
    $l4311:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result4315 = NULL;
    panda$collections$Array* $tmp4316;
    panda$collections$Array* $tmp4317;
    panda$core$Int64 $tmp4323;
    org$pandalanguage$pandac$ASTNode* a4328 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4329;
    org$pandalanguage$pandac$ASTNode* $tmp4330;
    panda$collections$ImmutableArray* $returnValue4334;
    panda$collections$ImmutableArray* $tmp4335;
    panda$collections$ImmutableArray* $tmp4336;
    int $tmp4314;
    {
        panda$collections$Array* $tmp4318 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4318);
        $tmp4317 = $tmp4318;
        $tmp4316 = $tmp4317;
        result4315 = $tmp4316;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4316));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4317));
        $l4319:;
        org$pandalanguage$pandac$parser$Token $tmp4322 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4323, 13);
        panda$core$Bit $tmp4324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4322.kind.$rawValue, $tmp4323);
        bool $tmp4321 = $tmp4324.value;
        if (!$tmp4321) goto $l4320;
        {
            int $tmp4327;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4331 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4330 = $tmp4331;
                $tmp4329 = $tmp4330;
                a4328 = $tmp4329;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4329));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4330));
                if (((panda$core$Bit) { a4328 == NULL }).value) {
                {
                    $tmp4327 = 0;
                    goto $l4325;
                    $l4332:;
                    goto $l4320;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4315, ((panda$core$Object*) a4328));
            }
            $tmp4327 = -1;
            goto $l4325;
            $l4325:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4328));
            a4328 = NULL;
            switch ($tmp4327) {
                case -1: goto $l4333;
                case 0: goto $l4332;
            }
            $l4333:;
        }
        goto $l4319;
        $l4320:;
        panda$collections$ImmutableArray* $tmp4337 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4315);
        $tmp4336 = $tmp4337;
        $tmp4335 = $tmp4336;
        $returnValue4334 = $tmp4335;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4335));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4336));
        $tmp4314 = 0;
        goto $l4312;
        $l4338:;
        return $returnValue4334;
    }
    $l4312:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4315));
    result4315 = NULL;
    switch ($tmp4314) {
        case 0: goto $l4338;
    }
    $l4340:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4344;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4345;
    panda$core$Int64 $tmp4346;
    org$pandalanguage$pandac$ASTNode* $returnValue4349;
    org$pandalanguage$pandac$ASTNode* $tmp4350;
    panda$core$MutableString* result4353 = NULL;
    panda$core$MutableString* $tmp4354;
    panda$core$MutableString* $tmp4355;
    org$pandalanguage$pandac$parser$Token next4359;
    panda$core$Int64 $tmp4361;
    panda$core$Int64 $tmp4363;
    org$pandalanguage$pandac$ASTNode* $tmp4366;
    panda$core$String* $tmp4369;
    org$pandalanguage$pandac$ASTNode* $tmp4371;
    org$pandalanguage$pandac$ASTNode* $tmp4372;
    panda$core$Int64 $tmp4374;
    panda$core$String* $tmp4375;
    int $tmp4343;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4346, 11);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4345, $tmp4346);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4348 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4345, &$s4347);
        start4344 = $tmp4348;
        if (((panda$core$Bit) { !start4344.nonnull }).value) {
        {
            $tmp4350 = NULL;
            $returnValue4349 = $tmp4350;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4350));
            $tmp4343 = 0;
            goto $l4341;
            $l4351:;
            return $returnValue4349;
        }
        }
        panda$core$MutableString* $tmp4356 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp4356);
        $tmp4355 = $tmp4356;
        $tmp4354 = $tmp4355;
        result4353 = $tmp4354;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4354));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4355));
        $l4357:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4360 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next4359 = $tmp4360;
            panda$core$Int64$init$builtin_int64(&$tmp4361, 11);
            panda$core$Bit $tmp4362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4359.kind.$rawValue, $tmp4361);
            if ($tmp4362.value) {
            {
                goto $l4358;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4363, 0);
            panda$core$Bit $tmp4364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4359.kind.$rawValue, $tmp4363);
            if ($tmp4364.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start4344.value), &$s4365);
                $tmp4366 = NULL;
                $returnValue4349 = $tmp4366;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4366));
                $tmp4343 = 1;
                goto $l4341;
                $l4367:;
                return $returnValue4349;
            }
            }
            panda$core$String* $tmp4370 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4359);
            $tmp4369 = $tmp4370;
            panda$core$MutableString$append$panda$core$String(result4353, $tmp4369);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4369));
        }
        }
        $l4358:;
        org$pandalanguage$pandac$ASTNode* $tmp4373 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4374, 38);
        panda$core$String* $tmp4376 = panda$core$MutableString$finish$R$panda$core$String(result4353);
        $tmp4375 = $tmp4376;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4373, $tmp4374, ((org$pandalanguage$pandac$parser$Token) start4344.value).position, $tmp4375);
        $tmp4372 = $tmp4373;
        $tmp4371 = $tmp4372;
        $returnValue4349 = $tmp4371;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4372));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4375));
        $tmp4343 = 2;
        goto $l4341;
        $l4377:;
        return $returnValue4349;
    }
    $l4341:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4353));
    result4353 = NULL;
    switch ($tmp4343) {
        case 1: goto $l4367;
        case 2: goto $l4377;
        case 0: goto $l4351;
    }
    $l4379:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id4383;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4384;
    panda$core$Int64 $tmp4385;
    org$pandalanguage$pandac$ASTNode* $returnValue4388;
    org$pandalanguage$pandac$ASTNode* $tmp4389;
    org$pandalanguage$pandac$ASTNode* t4392 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4393;
    org$pandalanguage$pandac$ASTNode* $tmp4394;
    org$pandalanguage$pandac$ASTNode* $tmp4396;
    org$pandalanguage$pandac$ASTNode* $tmp4399;
    org$pandalanguage$pandac$ASTNode* $tmp4400;
    panda$core$Int64 $tmp4402;
    panda$core$String* $tmp4403;
    int $tmp4382;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4385, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4384, $tmp4385);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4387 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4384, &$s4386);
        id4383 = $tmp4387;
        if (((panda$core$Bit) { !id4383.nonnull }).value) {
        {
            $tmp4389 = NULL;
            $returnValue4388 = $tmp4389;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4389));
            $tmp4382 = 0;
            goto $l4380;
            $l4390:;
            return $returnValue4388;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4395 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4394 = $tmp4395;
        $tmp4393 = $tmp4394;
        t4392 = $tmp4393;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4393));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4394));
        if (((panda$core$Bit) { t4392 == NULL }).value) {
        {
            $tmp4396 = NULL;
            $returnValue4388 = $tmp4396;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4396));
            $tmp4382 = 1;
            goto $l4380;
            $l4397:;
            return $returnValue4388;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4401 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4402, 31);
        panda$core$String* $tmp4404 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4383.value));
        $tmp4403 = $tmp4404;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4401, $tmp4402, ((org$pandalanguage$pandac$parser$Token) id4383.value).position, $tmp4403, t4392);
        $tmp4400 = $tmp4401;
        $tmp4399 = $tmp4400;
        $returnValue4388 = $tmp4399;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4399));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4400));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4403));
        $tmp4382 = 2;
        goto $l4380;
        $l4405:;
        return $returnValue4388;
    }
    $l4380:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4392));
    t4392 = NULL;
    switch ($tmp4382) {
        case 1: goto $l4397;
        case 2: goto $l4405;
        case 0: goto $l4390;
    }
    $l4407:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4411;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4412;
    panda$core$Int64 $tmp4413;
    panda$collections$ImmutableArray* $returnValue4416;
    panda$collections$ImmutableArray* $tmp4417;
    panda$collections$Array* result4420 = NULL;
    panda$collections$Array* $tmp4421;
    panda$collections$Array* $tmp4422;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4424;
    panda$core$Int64 $tmp4425;
    org$pandalanguage$pandac$ASTNode* param4430 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4431;
    org$pandalanguage$pandac$ASTNode* $tmp4432;
    panda$collections$ImmutableArray* $tmp4434;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4441;
    panda$core$Int64 $tmp4442;
    org$pandalanguage$pandac$ASTNode* $tmp4444;
    org$pandalanguage$pandac$ASTNode* $tmp4445;
    org$pandalanguage$pandac$ASTNode* $tmp4446;
    panda$collections$ImmutableArray* $tmp4448;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4452;
    panda$core$Int64 $tmp4453;
    panda$collections$ImmutableArray* $tmp4456;
    panda$collections$ImmutableArray* $tmp4461;
    panda$collections$ImmutableArray* $tmp4462;
    int $tmp4410;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4413, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4412, $tmp4413);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4415 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4412, &$s4414);
        start4411 = $tmp4415;
        if (((panda$core$Bit) { !start4411.nonnull }).value) {
        {
            $tmp4417 = NULL;
            $returnValue4416 = $tmp4417;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4417));
            $tmp4410 = 0;
            goto $l4408;
            $l4418:;
            return $returnValue4416;
        }
        }
        panda$collections$Array* $tmp4423 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4423);
        $tmp4422 = $tmp4423;
        $tmp4421 = $tmp4422;
        result4420 = $tmp4421;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4422));
        panda$core$Int64$init$builtin_int64(&$tmp4425, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4424, $tmp4425);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4426 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4424);
        if (((panda$core$Bit) { !$tmp4426.nonnull }).value) {
        {
            int $tmp4429;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4433 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4432 = $tmp4433;
                $tmp4431 = $tmp4432;
                param4430 = $tmp4431;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4431));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4432));
                if (((panda$core$Bit) { param4430 == NULL }).value) {
                {
                    $tmp4434 = NULL;
                    $returnValue4416 = $tmp4434;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4434));
                    $tmp4429 = 0;
                    goto $l4427;
                    $l4435:;
                    $tmp4410 = 1;
                    goto $l4408;
                    $l4436:;
                    return $returnValue4416;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4420, ((panda$core$Object*) param4430));
                $l4438:;
                panda$core$Int64$init$builtin_int64(&$tmp4442, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4441, $tmp4442);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4443 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4441);
                bool $tmp4440 = ((panda$core$Bit) { $tmp4443.nonnull }).value;
                if (!$tmp4440) goto $l4439;
                {
                    {
                        $tmp4444 = param4430;
                        org$pandalanguage$pandac$ASTNode* $tmp4447 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4446 = $tmp4447;
                        $tmp4445 = $tmp4446;
                        param4430 = $tmp4445;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4445));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4446));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4444));
                    }
                    if (((panda$core$Bit) { param4430 == NULL }).value) {
                    {
                        $tmp4448 = NULL;
                        $returnValue4416 = $tmp4448;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4448));
                        $tmp4429 = 1;
                        goto $l4427;
                        $l4449:;
                        $tmp4410 = 2;
                        goto $l4408;
                        $l4450:;
                        return $returnValue4416;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result4420, ((panda$core$Object*) param4430));
                }
                goto $l4438;
                $l4439:;
                panda$core$Int64$init$builtin_int64(&$tmp4453, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4452, $tmp4453);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4455 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4452, &$s4454);
                if (((panda$core$Bit) { !$tmp4455.nonnull }).value) {
                {
                    $tmp4456 = NULL;
                    $returnValue4416 = $tmp4456;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4456));
                    $tmp4429 = 2;
                    goto $l4427;
                    $l4457:;
                    $tmp4410 = 3;
                    goto $l4408;
                    $l4458:;
                    return $returnValue4416;
                }
                }
            }
            $tmp4429 = -1;
            goto $l4427;
            $l4427:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param4430));
            param4430 = NULL;
            switch ($tmp4429) {
                case -1: goto $l4460;
                case 1: goto $l4449;
                case 2: goto $l4457;
                case 0: goto $l4435;
            }
            $l4460:;
        }
        }
        panda$collections$ImmutableArray* $tmp4463 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4420);
        $tmp4462 = $tmp4463;
        $tmp4461 = $tmp4462;
        $returnValue4416 = $tmp4461;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4461));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4462));
        $tmp4410 = 4;
        goto $l4408;
        $l4464:;
        return $returnValue4416;
    }
    $l4408:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4420));
    result4420 = NULL;
    switch ($tmp4410) {
        case 3: goto $l4458;
        case 2: goto $l4450;
        case 1: goto $l4436;
        case 4: goto $l4464;
        case 0: goto $l4418;
    }
    $l4466:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4470;
    org$pandalanguage$pandac$parser$Token$nullable start4471;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4472;
    panda$core$Int64 $tmp4473;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4475;
    panda$core$Int64 $tmp4476;
    org$pandalanguage$pandac$ASTNode* $returnValue4479;
    org$pandalanguage$pandac$ASTNode* $tmp4480;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4483;
    panda$core$Int64 $tmp4484;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4485;
    panda$core$Int64 $tmp4486;
    panda$core$String* name4487 = NULL;
    panda$core$String* $tmp4488;
    panda$core$String* $tmp4489;
    org$pandalanguage$pandac$ASTNode* $tmp4491;
    panda$collections$ImmutableArray* generics4494 = NULL;
    panda$core$Int64 $tmp4496;
    panda$collections$ImmutableArray* $tmp4498;
    panda$collections$ImmutableArray* $tmp4499;
    panda$collections$ImmutableArray* $tmp4500;
    panda$collections$ImmutableArray* $tmp4502;
    panda$collections$ImmutableArray* $tmp4503;
    panda$collections$ImmutableArray* params4504 = NULL;
    panda$collections$ImmutableArray* $tmp4505;
    panda$collections$ImmutableArray* $tmp4506;
    org$pandalanguage$pandac$ASTNode* $tmp4508;
    org$pandalanguage$pandac$ASTNode* returnType4511 = NULL;
    panda$core$Int64 $tmp4513;
    org$pandalanguage$pandac$ASTNode* $tmp4515;
    org$pandalanguage$pandac$ASTNode* $tmp4516;
    org$pandalanguage$pandac$ASTNode* $tmp4517;
    org$pandalanguage$pandac$ASTNode* $tmp4519;
    org$pandalanguage$pandac$ASTNode* $tmp4522;
    org$pandalanguage$pandac$ASTNode* $tmp4523;
    panda$collections$ImmutableArray* body4524 = NULL;
    panda$core$Int64 $tmp4526;
    panda$collections$ImmutableArray* $tmp4528;
    panda$collections$ImmutableArray* $tmp4529;
    panda$collections$ImmutableArray* $tmp4530;
    org$pandalanguage$pandac$ASTNode* $tmp4532;
    panda$collections$ImmutableArray* $tmp4535;
    panda$collections$ImmutableArray* $tmp4536;
    org$pandalanguage$pandac$ASTNode* $tmp4537;
    org$pandalanguage$pandac$ASTNode* $tmp4538;
    panda$core$Int64 $tmp4540;
    int $tmp4469;
    {
        memset(&kind4470, 0, sizeof(kind4470));
        panda$core$Int64$init$builtin_int64(&$tmp4473, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4472, $tmp4473);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4474 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4472);
        start4471 = $tmp4474;
        if (((panda$core$Bit) { !start4471.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4476, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4475, $tmp4476);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4478 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4475, &$s4477);
            start4471 = $tmp4478;
            if (((panda$core$Bit) { !start4471.nonnull }).value) {
            {
                $tmp4480 = NULL;
                $returnValue4479 = $tmp4480;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4480));
                $tmp4469 = 0;
                goto $l4467;
                $l4481:;
                return $returnValue4479;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4484, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4483, $tmp4484);
            kind4470 = $tmp4483;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4486, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4485, $tmp4486);
            kind4470 = $tmp4485;
        }
        }
        panda$core$String* $tmp4490 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp4489 = $tmp4490;
        $tmp4488 = $tmp4489;
        name4487 = $tmp4488;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4489));
        if (((panda$core$Bit) { name4487 == NULL }).value) {
        {
            $tmp4491 = NULL;
            $returnValue4479 = $tmp4491;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4491));
            $tmp4469 = 1;
            goto $l4467;
            $l4492:;
            return $returnValue4479;
        }
        }
        memset(&generics4494, 0, sizeof(generics4494));
        org$pandalanguage$pandac$parser$Token $tmp4495 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4496, 62);
        panda$core$Bit $tmp4497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4495.kind.$rawValue, $tmp4496);
        if ($tmp4497.value) {
        {
            {
                $tmp4498 = generics4494;
                panda$collections$ImmutableArray* $tmp4501 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4500 = $tmp4501;
                $tmp4499 = $tmp4500;
                generics4494 = $tmp4499;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4499));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4500));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4498));
            }
        }
        }
        else {
        {
            {
                $tmp4502 = generics4494;
                $tmp4503 = NULL;
                generics4494 = $tmp4503;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4503));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4502));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4507 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4506 = $tmp4507;
        $tmp4505 = $tmp4506;
        params4504 = $tmp4505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4506));
        if (((panda$core$Bit) { params4504 == NULL }).value) {
        {
            $tmp4508 = NULL;
            $returnValue4479 = $tmp4508;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4508));
            $tmp4469 = 2;
            goto $l4467;
            $l4509:;
            return $returnValue4479;
        }
        }
        memset(&returnType4511, 0, sizeof(returnType4511));
        org$pandalanguage$pandac$parser$Token $tmp4512 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4513, 95);
        panda$core$Bit $tmp4514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4512.kind.$rawValue, $tmp4513);
        if ($tmp4514.value) {
        {
            {
                $tmp4515 = returnType4511;
                org$pandalanguage$pandac$ASTNode* $tmp4518 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4517 = $tmp4518;
                $tmp4516 = $tmp4517;
                returnType4511 = $tmp4516;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4516));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4517));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4515));
            }
            if (((panda$core$Bit) { returnType4511 == NULL }).value) {
            {
                $tmp4519 = NULL;
                $returnValue4479 = $tmp4519;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4519));
                $tmp4469 = 3;
                goto $l4467;
                $l4520:;
                return $returnValue4479;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4522 = returnType4511;
                $tmp4523 = NULL;
                returnType4511 = $tmp4523;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4523));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4522));
            }
        }
        }
        memset(&body4524, 0, sizeof(body4524));
        org$pandalanguage$pandac$parser$Token $tmp4525 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4526, 99);
        panda$core$Bit $tmp4527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4525.kind.$rawValue, $tmp4526);
        if ($tmp4527.value) {
        {
            {
                $tmp4528 = body4524;
                panda$collections$ImmutableArray* $tmp4531 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4530 = $tmp4531;
                $tmp4529 = $tmp4530;
                body4524 = $tmp4529;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4529));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4530));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4528));
            }
            if (((panda$core$Bit) { body4524 == NULL }).value) {
            {
                $tmp4532 = NULL;
                $returnValue4479 = $tmp4532;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4532));
                $tmp4469 = 4;
                goto $l4467;
                $l4533:;
                return $returnValue4479;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4535 = body4524;
                $tmp4536 = NULL;
                body4524 = $tmp4536;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4536));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4535));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4539 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4540, 26);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4539, $tmp4540, ((org$pandalanguage$pandac$parser$Token) start4471.value).position, p_doccomment, p_annotations, kind4470, name4487, generics4494, params4504, returnType4511, body4524);
        $tmp4538 = $tmp4539;
        $tmp4537 = $tmp4538;
        $returnValue4479 = $tmp4537;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4537));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4538));
        $tmp4469 = 5;
        goto $l4467;
        $l4541:;
        return $returnValue4479;
    }
    $l4467:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4524));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4511));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4504));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4494));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4487));
    name4487 = NULL;
    params4504 = NULL;
    switch ($tmp4469) {
        case 3: goto $l4520;
        case 2: goto $l4509;
        case 1: goto $l4492;
        case 0: goto $l4481;
        case 4: goto $l4533;
        case 5: goto $l4541;
    }
    $l4543:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4547;
    org$pandalanguage$pandac$parser$Token$nullable start4548;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4549;
    panda$core$Int64 $tmp4550;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4552;
    panda$core$Int64 $tmp4553;
    org$pandalanguage$pandac$ASTNode* $returnValue4556;
    org$pandalanguage$pandac$ASTNode* $tmp4557;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4560;
    panda$core$Int64 $tmp4561;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4562;
    panda$core$Int64 $tmp4563;
    panda$collections$ImmutableArray* params4564 = NULL;
    panda$collections$ImmutableArray* $tmp4565;
    panda$collections$ImmutableArray* $tmp4566;
    org$pandalanguage$pandac$ASTNode* $tmp4568;
    org$pandalanguage$pandac$ASTNode* returnType4571 = NULL;
    panda$core$Int64 $tmp4573;
    org$pandalanguage$pandac$ASTNode* $tmp4575;
    org$pandalanguage$pandac$ASTNode* $tmp4576;
    org$pandalanguage$pandac$ASTNode* $tmp4577;
    org$pandalanguage$pandac$ASTNode* $tmp4579;
    org$pandalanguage$pandac$ASTNode* $tmp4582;
    org$pandalanguage$pandac$ASTNode* $tmp4583;
    panda$collections$ImmutableArray* body4584 = NULL;
    panda$collections$ImmutableArray* $tmp4585;
    panda$collections$ImmutableArray* $tmp4586;
    org$pandalanguage$pandac$ASTNode* $tmp4588;
    org$pandalanguage$pandac$ASTNode* $tmp4591;
    org$pandalanguage$pandac$ASTNode* $tmp4592;
    panda$core$Int64 $tmp4594;
    panda$collections$ImmutableArray* $tmp4595;
    int $tmp4546;
    {
        memset(&kind4547, 0, sizeof(kind4547));
        panda$core$Int64$init$builtin_int64(&$tmp4550, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4549, $tmp4550);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4551 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4549);
        start4548 = $tmp4551;
        if (((panda$core$Bit) { !start4548.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4553, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4552, $tmp4553);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4555 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4552, &$s4554);
            start4548 = $tmp4555;
            if (((panda$core$Bit) { !start4548.nonnull }).value) {
            {
                $tmp4557 = NULL;
                $returnValue4556 = $tmp4557;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4557));
                $tmp4546 = 0;
                goto $l4544;
                $l4558:;
                return $returnValue4556;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4561, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4560, $tmp4561);
            kind4547 = $tmp4560;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4563, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4562, $tmp4563);
            kind4547 = $tmp4562;
        }
        }
        panda$collections$ImmutableArray* $tmp4567 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4566 = $tmp4567;
        $tmp4565 = $tmp4566;
        params4564 = $tmp4565;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4565));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4566));
        if (((panda$core$Bit) { params4564 == NULL }).value) {
        {
            $tmp4568 = NULL;
            $returnValue4556 = $tmp4568;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4568));
            $tmp4546 = 1;
            goto $l4544;
            $l4569:;
            return $returnValue4556;
        }
        }
        memset(&returnType4571, 0, sizeof(returnType4571));
        org$pandalanguage$pandac$parser$Token $tmp4572 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4573, 95);
        panda$core$Bit $tmp4574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4572.kind.$rawValue, $tmp4573);
        if ($tmp4574.value) {
        {
            {
                $tmp4575 = returnType4571;
                org$pandalanguage$pandac$ASTNode* $tmp4578 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4577 = $tmp4578;
                $tmp4576 = $tmp4577;
                returnType4571 = $tmp4576;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4576));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4577));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4575));
            }
            if (((panda$core$Bit) { returnType4571 == NULL }).value) {
            {
                $tmp4579 = NULL;
                $returnValue4556 = $tmp4579;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4579));
                $tmp4546 = 2;
                goto $l4544;
                $l4580:;
                return $returnValue4556;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4582 = returnType4571;
                $tmp4583 = NULL;
                returnType4571 = $tmp4583;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4583));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4582));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4587 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4586 = $tmp4587;
        $tmp4585 = $tmp4586;
        body4584 = $tmp4585;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4585));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4586));
        if (((panda$core$Bit) { body4584 == NULL }).value) {
        {
            $tmp4588 = NULL;
            $returnValue4556 = $tmp4588;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4588));
            $tmp4546 = 3;
            goto $l4544;
            $l4589:;
            return $returnValue4556;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4593 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4594, 26);
        panda$collections$ImmutableArray* $tmp4596 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4596);
        $tmp4595 = $tmp4596;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4593, $tmp4594, ((org$pandalanguage$pandac$parser$Token) start4548.value).position, NULL, $tmp4595, kind4547, &$s4597, NULL, params4564, returnType4571, body4584);
        $tmp4592 = $tmp4593;
        $tmp4591 = $tmp4592;
        $returnValue4556 = $tmp4591;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4591));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4592));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4595));
        $tmp4546 = 4;
        goto $l4544;
        $l4598:;
        return $returnValue4556;
    }
    $l4544:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4584));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4571));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4564));
    params4564 = NULL;
    body4584 = NULL;
    switch ($tmp4546) {
        case 2: goto $l4580;
        case 1: goto $l4569;
        case 3: goto $l4589;
        case 4: goto $l4598;
        case 0: goto $l4558;
    }
    $l4600:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4604;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4605;
    panda$core$Int64 $tmp4606;
    org$pandalanguage$pandac$ASTNode* $returnValue4609;
    org$pandalanguage$pandac$ASTNode* $tmp4610;
    panda$collections$ImmutableArray* params4613 = NULL;
    panda$collections$ImmutableArray* $tmp4614;
    panda$collections$ImmutableArray* $tmp4615;
    org$pandalanguage$pandac$ASTNode* $tmp4617;
    panda$collections$ImmutableArray* b4620 = NULL;
    panda$collections$ImmutableArray* $tmp4621;
    panda$collections$ImmutableArray* $tmp4622;
    org$pandalanguage$pandac$ASTNode* $tmp4624;
    org$pandalanguage$pandac$ASTNode* $tmp4627;
    org$pandalanguage$pandac$ASTNode* $tmp4628;
    panda$core$Int64 $tmp4630;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4631;
    panda$core$Int64 $tmp4632;
    int $tmp4603;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4606, 22);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4605, $tmp4606);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4608 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4605, &$s4607);
        start4604 = $tmp4608;
        if (((panda$core$Bit) { !start4604.nonnull }).value) {
        {
            $tmp4610 = NULL;
            $returnValue4609 = $tmp4610;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4610));
            $tmp4603 = 0;
            goto $l4601;
            $l4611:;
            return $returnValue4609;
        }
        }
        panda$collections$ImmutableArray* $tmp4616 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4615 = $tmp4616;
        $tmp4614 = $tmp4615;
        params4613 = $tmp4614;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4614));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4615));
        if (((panda$core$Bit) { params4613 == NULL }).value) {
        {
            $tmp4617 = NULL;
            $returnValue4609 = $tmp4617;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4617));
            $tmp4603 = 1;
            goto $l4601;
            $l4618:;
            return $returnValue4609;
        }
        }
        panda$collections$ImmutableArray* $tmp4623 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4622 = $tmp4623;
        $tmp4621 = $tmp4622;
        b4620 = $tmp4621;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4621));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4622));
        if (((panda$core$Bit) { b4620 == NULL }).value) {
        {
            $tmp4624 = NULL;
            $returnValue4609 = $tmp4624;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4624));
            $tmp4603 = 2;
            goto $l4601;
            $l4625:;
            return $returnValue4609;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4629 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4630, 26);
        panda$core$Int64$init$builtin_int64(&$tmp4632, 2);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4631, $tmp4632);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4629, $tmp4630, ((org$pandalanguage$pandac$parser$Token) start4604.value).position, p_doccomment, p_annotations, $tmp4631, &$s4633, NULL, params4613, NULL, b4620);
        $tmp4628 = $tmp4629;
        $tmp4627 = $tmp4628;
        $returnValue4609 = $tmp4627;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4627));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4628));
        $tmp4603 = 3;
        goto $l4601;
        $l4634:;
        return $returnValue4609;
    }
    $l4601:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b4620));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4613));
    params4613 = NULL;
    b4620 = NULL;
    switch ($tmp4603) {
        case 2: goto $l4625;
        case 3: goto $l4634;
        case 1: goto $l4618;
        case 0: goto $l4611;
    }
    $l4636:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl4640 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4641;
    org$pandalanguage$pandac$ASTNode* $tmp4642;
    org$pandalanguage$pandac$ASTNode* $returnValue4644;
    org$pandalanguage$pandac$ASTNode* $tmp4645;
    org$pandalanguage$pandac$ASTNode* $tmp4648;
    org$pandalanguage$pandac$ASTNode* $tmp4649;
    panda$core$Int64 $tmp4651;
    int $tmp4639;
    {
        org$pandalanguage$pandac$ASTNode* $tmp4643 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4642 = $tmp4643;
        $tmp4641 = $tmp4642;
        decl4640 = $tmp4641;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4641));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4642));
        if (((panda$core$Bit) { decl4640 == NULL }).value) {
        {
            $tmp4645 = NULL;
            $returnValue4644 = $tmp4645;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4645));
            $tmp4639 = 0;
            goto $l4637;
            $l4646:;
            return $returnValue4644;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4650 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4651, 16);
        org$pandalanguage$pandac$Position $tmp4653 = (($fn4652) decl4640->$class->vtable[2])(decl4640);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4650, $tmp4651, $tmp4653, p_doccomment, p_annotations, decl4640);
        $tmp4649 = $tmp4650;
        $tmp4648 = $tmp4649;
        $returnValue4644 = $tmp4648;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4648));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4649));
        $tmp4639 = 1;
        goto $l4637;
        $l4654:;
        return $returnValue4644;
    }
    $l4637:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4640));
    decl4640 = NULL;
    switch ($tmp4639) {
        case 1: goto $l4654;
        case 0: goto $l4646;
    }
    $l4656:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name4660;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4661;
    panda$core$Int64 $tmp4662;
    org$pandalanguage$pandac$ASTNode* $returnValue4665;
    org$pandalanguage$pandac$ASTNode* $tmp4666;
    panda$collections$Array* fields4669 = NULL;
    panda$collections$Array* $tmp4670;
    panda$collections$Array* $tmp4671;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4673;
    panda$core$Int64 $tmp4674;
    panda$core$Int64 $tmp4677;
    org$pandalanguage$pandac$ASTNode* field4682 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4683;
    org$pandalanguage$pandac$ASTNode* $tmp4684;
    org$pandalanguage$pandac$ASTNode* $tmp4686;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4693;
    panda$core$Int64 $tmp4694;
    org$pandalanguage$pandac$ASTNode* $tmp4696;
    org$pandalanguage$pandac$ASTNode* $tmp4697;
    org$pandalanguage$pandac$ASTNode* $tmp4698;
    org$pandalanguage$pandac$ASTNode* $tmp4700;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4705;
    panda$core$Int64 $tmp4706;
    org$pandalanguage$pandac$ASTNode* $tmp4709;
    org$pandalanguage$pandac$ASTNode* $tmp4712;
    org$pandalanguage$pandac$ASTNode* $tmp4713;
    panda$core$Int64 $tmp4715;
    panda$core$String* $tmp4716;
    panda$collections$ImmutableArray* $tmp4718;
    int $tmp4659;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4662, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4661, $tmp4662);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4664 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4661, &$s4663);
        name4660 = $tmp4664;
        if (((panda$core$Bit) { !name4660.nonnull }).value) {
        {
            $tmp4666 = NULL;
            $returnValue4665 = $tmp4666;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4666));
            $tmp4659 = 0;
            goto $l4657;
            $l4667:;
            return $returnValue4665;
        }
        }
        panda$collections$Array* $tmp4672 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4672);
        $tmp4671 = $tmp4672;
        $tmp4670 = $tmp4671;
        fields4669 = $tmp4670;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4670));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4671));
        panda$core$Int64$init$builtin_int64(&$tmp4674, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4673, $tmp4674);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4675 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4673);
        if (((panda$core$Bit) { $tmp4675.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4676 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp4677, 104);
            panda$core$Bit $tmp4678 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4676.kind.$rawValue, $tmp4677);
            if ($tmp4678.value) {
            {
                int $tmp4681;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4685 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4684 = $tmp4685;
                    $tmp4683 = $tmp4684;
                    field4682 = $tmp4683;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4683));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4684));
                    if (((panda$core$Bit) { field4682 == NULL }).value) {
                    {
                        $tmp4686 = NULL;
                        $returnValue4665 = $tmp4686;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4686));
                        $tmp4681 = 0;
                        goto $l4679;
                        $l4687:;
                        $tmp4659 = 1;
                        goto $l4657;
                        $l4688:;
                        return $returnValue4665;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields4669, ((panda$core$Object*) field4682));
                    $l4690:;
                    panda$core$Int64$init$builtin_int64(&$tmp4694, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4693, $tmp4694);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp4695 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4693);
                    bool $tmp4692 = ((panda$core$Bit) { $tmp4695.nonnull }).value;
                    if (!$tmp4692) goto $l4691;
                    {
                        {
                            $tmp4696 = field4682;
                            org$pandalanguage$pandac$ASTNode* $tmp4699 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp4698 = $tmp4699;
                            $tmp4697 = $tmp4698;
                            field4682 = $tmp4697;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4697));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4698));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4696));
                        }
                        if (((panda$core$Bit) { field4682 == NULL }).value) {
                        {
                            $tmp4700 = NULL;
                            $returnValue4665 = $tmp4700;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4700));
                            $tmp4681 = 1;
                            goto $l4679;
                            $l4701:;
                            $tmp4659 = 2;
                            goto $l4657;
                            $l4702:;
                            return $returnValue4665;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields4669, ((panda$core$Object*) field4682));
                    }
                    goto $l4690;
                    $l4691:;
                }
                $tmp4681 = -1;
                goto $l4679;
                $l4679:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4682));
                field4682 = NULL;
                switch ($tmp4681) {
                    case 1: goto $l4701;
                    case -1: goto $l4704;
                    case 0: goto $l4687;
                }
                $l4704:;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4706, 104);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4705, $tmp4706);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4708 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4705, &$s4707);
            if (((panda$core$Bit) { !$tmp4708.nonnull }).value) {
            {
                $tmp4709 = NULL;
                $returnValue4665 = $tmp4709;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4709));
                $tmp4659 = 3;
                goto $l4657;
                $l4710:;
                return $returnValue4665;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4714 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4715, 9);
        panda$core$String* $tmp4717 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4660.value));
        $tmp4716 = $tmp4717;
        panda$collections$ImmutableArray* $tmp4719 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields4669);
        $tmp4718 = $tmp4719;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4714, $tmp4715, ((org$pandalanguage$pandac$parser$Token) name4660.value).position, p_doccomment, $tmp4716, $tmp4718);
        $tmp4713 = $tmp4714;
        $tmp4712 = $tmp4713;
        $returnValue4665 = $tmp4712;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4712));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4713));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4718));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4716));
        $tmp4659 = 4;
        goto $l4657;
        $l4720:;
        return $returnValue4665;
    }
    $l4657:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields4669));
    fields4669 = NULL;
    switch ($tmp4659) {
        case 2: goto $l4702;
        case 3: goto $l4710;
        case 1: goto $l4688;
        case 4: goto $l4720;
        case 0: goto $l4667;
    }
    $l4722:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4726;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4727;
    panda$core$Int64 $tmp4728;
    org$pandalanguage$pandac$ASTNode* $returnValue4731;
    org$pandalanguage$pandac$ASTNode* $tmp4732;
    org$pandalanguage$pandac$parser$Token$nullable name4735;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4736;
    panda$core$Int64 $tmp4737;
    org$pandalanguage$pandac$ASTNode* $tmp4740;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4743;
    panda$core$Int64 $tmp4744;
    org$pandalanguage$pandac$ASTNode* $tmp4747;
    panda$collections$Array* members4750 = NULL;
    panda$collections$Array* $tmp4751;
    panda$collections$Array* $tmp4752;
    org$pandalanguage$pandac$ASTNode* dc4754 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4755;
    org$pandalanguage$pandac$parser$Token next4758;
    org$pandalanguage$pandac$parser$Token$Kind $match$2212_134760;
    panda$core$Int64 $tmp4770;
    panda$core$Int64 $tmp4773;
    panda$core$Int64 $tmp4777;
    panda$core$Int64 $tmp4781;
    panda$core$Int64 $tmp4785;
    panda$core$Int64 $tmp4789;
    panda$core$Int64 $tmp4793;
    panda$core$Int64 $tmp4797;
    panda$core$Int64 $tmp4801;
    panda$core$Int64 $tmp4805;
    panda$core$Int64 $tmp4808;
    panda$core$String* $tmp4810;
    panda$core$String* $tmp4811;
    panda$core$String* $tmp4813;
    org$pandalanguage$pandac$ASTNode* $tmp4818;
    org$pandalanguage$pandac$ASTNode* $tmp4819;
    org$pandalanguage$pandac$ASTNode* $tmp4820;
    panda$core$Int64 $tmp4822;
    org$pandalanguage$pandac$ASTNode* c4827 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4828;
    org$pandalanguage$pandac$ASTNode* $tmp4829;
    org$pandalanguage$pandac$ASTNode* $tmp4831;
    org$pandalanguage$pandac$ASTNode* $tmp4835;
    org$pandalanguage$pandac$ASTNode* $tmp4836;
    panda$collections$ImmutableArray* a4838 = NULL;
    panda$collections$ImmutableArray* $tmp4839;
    panda$collections$ImmutableArray* $tmp4840;
    org$pandalanguage$pandac$parser$Token next4844;
    org$pandalanguage$pandac$parser$Token$Kind $match$2236_134846;
    panda$core$Int64 $tmp4847;
    panda$core$Int64 $tmp4850;
    panda$core$String* $tmp4852;
    panda$core$String* $tmp4853;
    panda$core$String* $tmp4855;
    org$pandalanguage$pandac$ASTNode* $tmp4860;
    panda$collections$ImmutableArray* $tmp4863;
    panda$collections$ImmutableArray* $tmp4864;
    panda$collections$ImmutableArray* $tmp4865;
    panda$core$Int64 $tmp4867;
    panda$core$Int64 $tmp4872;
    panda$core$String* $tmp4875;
    panda$core$String* $tmp4876;
    panda$core$String* $tmp4878;
    org$pandalanguage$pandac$ASTNode* $tmp4883;
    org$pandalanguage$pandac$ASTNode* $tmp4886;
    org$pandalanguage$pandac$ASTNode* $tmp4887;
    org$pandalanguage$pandac$ASTNode* $tmp4888;
    panda$core$Int64 $tmp4890;
    org$pandalanguage$pandac$ASTNode* decl4895 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4896;
    org$pandalanguage$pandac$ASTNode* $tmp4897;
    org$pandalanguage$pandac$ASTNode* $tmp4899;
    org$pandalanguage$pandac$ASTNode* $tmp4903;
    org$pandalanguage$pandac$ASTNode* $tmp4904;
    panda$collections$ImmutableArray* $tmp4905;
    panda$collections$ImmutableArray* $tmp4906;
    panda$collections$ImmutableArray* $tmp4907;
    panda$core$Int64 $tmp4910;
    org$pandalanguage$pandac$ASTNode* decl4915 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4916;
    org$pandalanguage$pandac$ASTNode* $tmp4917;
    org$pandalanguage$pandac$ASTNode* $tmp4919;
    org$pandalanguage$pandac$ASTNode* $tmp4923;
    org$pandalanguage$pandac$ASTNode* $tmp4924;
    panda$collections$ImmutableArray* $tmp4925;
    panda$collections$ImmutableArray* $tmp4926;
    panda$collections$ImmutableArray* $tmp4927;
    panda$core$Int64 $tmp4930;
    org$pandalanguage$pandac$ASTNode* decl4935 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4936;
    org$pandalanguage$pandac$ASTNode* $tmp4937;
    org$pandalanguage$pandac$ASTNode* $tmp4939;
    org$pandalanguage$pandac$ASTNode* $tmp4943;
    org$pandalanguage$pandac$ASTNode* $tmp4944;
    panda$collections$ImmutableArray* $tmp4945;
    panda$collections$ImmutableArray* $tmp4946;
    panda$collections$ImmutableArray* $tmp4947;
    panda$core$Int64 $tmp4951;
    panda$core$Int64 $tmp4954;
    org$pandalanguage$pandac$ASTNode* decl4960 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4961;
    org$pandalanguage$pandac$ASTNode* $tmp4962;
    org$pandalanguage$pandac$ASTNode* $tmp4964;
    org$pandalanguage$pandac$ASTNode* $tmp4968;
    org$pandalanguage$pandac$ASTNode* $tmp4969;
    panda$collections$ImmutableArray* $tmp4970;
    panda$collections$ImmutableArray* $tmp4971;
    panda$collections$ImmutableArray* $tmp4972;
    panda$core$Int64 $tmp4978;
    panda$core$Int64 $tmp4981;
    panda$core$Int64 $tmp4985;
    panda$core$Int64 $tmp4989;
    org$pandalanguage$pandac$ASTNode* decl4995 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4996;
    org$pandalanguage$pandac$ASTNode* $tmp4997;
    org$pandalanguage$pandac$ASTNode* $tmp4999;
    org$pandalanguage$pandac$ASTNode* $tmp5003;
    org$pandalanguage$pandac$ASTNode* $tmp5004;
    panda$collections$ImmutableArray* $tmp5005;
    panda$collections$ImmutableArray* $tmp5006;
    panda$collections$ImmutableArray* $tmp5007;
    panda$core$Int64 $tmp5010;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5012;
    panda$core$Int64 $tmp5013;
    panda$core$String* $tmp5015;
    panda$core$String* $tmp5016;
    panda$core$String* $tmp5018;
    org$pandalanguage$pandac$ASTNode* $tmp5023;
    org$pandalanguage$pandac$ASTNode* $tmp5026;
    org$pandalanguage$pandac$ASTNode* $tmp5027;
    panda$core$Int64 $tmp5029;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5030;
    panda$core$Int64 $tmp5031;
    panda$core$String* $tmp5032;
    panda$collections$ImmutableArray* $tmp5034;
    int $tmp4725;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4728, 19);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4727, $tmp4728);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4730 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4727, &$s4729);
        start4726 = $tmp4730;
        if (((panda$core$Bit) { !start4726.nonnull }).value) {
        {
            $tmp4732 = NULL;
            $returnValue4731 = $tmp4732;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4732));
            $tmp4725 = 0;
            goto $l4723;
            $l4733:;
            return $returnValue4731;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4737, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4736, $tmp4737);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4739 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4736, &$s4738);
        name4735 = $tmp4739;
        if (((panda$core$Bit) { !name4735.nonnull }).value) {
        {
            $tmp4740 = NULL;
            $returnValue4731 = $tmp4740;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4740));
            $tmp4725 = 1;
            goto $l4723;
            $l4741:;
            return $returnValue4731;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4744, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4743, $tmp4744);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4746 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4743, &$s4745);
        if (((panda$core$Bit) { !$tmp4746.nonnull }).value) {
        {
            $tmp4747 = NULL;
            $returnValue4731 = $tmp4747;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4747));
            $tmp4725 = 2;
            goto $l4723;
            $l4748:;
            return $returnValue4731;
        }
        }
        panda$collections$Array* $tmp4753 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4753);
        $tmp4752 = $tmp4753;
        $tmp4751 = $tmp4752;
        members4750 = $tmp4751;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4751));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4752));
        $tmp4755 = NULL;
        dc4754 = $tmp4755;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4755));
        $l4756:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4759 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4758 = $tmp4759;
            {
                $match$2212_134760 = next4758.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4770, 17);
                panda$core$Bit $tmp4771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2212_134760.$rawValue, $tmp4770);
                bool $tmp4769 = $tmp4771.value;
                if ($tmp4769) goto $l4772;
                panda$core$Int64$init$builtin_int64(&$tmp4773, 18);
                panda$core$Bit $tmp4774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2212_134760.$rawValue, $tmp4773);
                $tmp4769 = $tmp4774.value;
                $l4772:;
                panda$core$Bit $tmp4775 = { $tmp4769 };
                bool $tmp4768 = $tmp4775.value;
                if ($tmp4768) goto $l4776;
                panda$core$Int64$init$builtin_int64(&$tmp4777, 19);
                panda$core$Bit $tmp4778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2212_134760.$rawValue, $tmp4777);
                $tmp4768 = $tmp4778.value;
                $l4776:;
                panda$core$Bit $tmp4779 = { $tmp4768 };
                bool $tmp4767 = $tmp4779.value;
                if ($tmp4767) goto $l4780;
                panda$core$Int64$init$builtin_int64(&$tmp4781, 21);
                panda$core$Bit $tmp4782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2212_134760.$rawValue, $tmp4781);
                $tmp4767 = $tmp4782.value;
                $l4780:;
                panda$core$Bit $tmp4783 = { $tmp4767 };
                bool $tmp4766 = $tmp4783.value;
                if ($tmp4766) goto $l4784;
                panda$core$Int64$init$builtin_int64(&$tmp4785, 20);
                panda$core$Bit $tmp4786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2212_134760.$rawValue, $tmp4785);
                $tmp4766 = $tmp4786.value;
                $l4784:;
                panda$core$Bit $tmp4787 = { $tmp4766 };
                bool $tmp4765 = $tmp4787.value;
                if ($tmp4765) goto $l4788;
                panda$core$Int64$init$builtin_int64(&$tmp4789, 13);
                panda$core$Bit $tmp4790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2212_134760.$rawValue, $tmp4789);
                $tmp4765 = $tmp4790.value;
                $l4788:;
                panda$core$Bit $tmp4791 = { $tmp4765 };
                bool $tmp4764 = $tmp4791.value;
                if ($tmp4764) goto $l4792;
                panda$core$Int64$init$builtin_int64(&$tmp4793, 23);
                panda$core$Bit $tmp4794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2212_134760.$rawValue, $tmp4793);
                $tmp4764 = $tmp4794.value;
                $l4792:;
                panda$core$Bit $tmp4795 = { $tmp4764 };
                bool $tmp4763 = $tmp4795.value;
                if ($tmp4763) goto $l4796;
                panda$core$Int64$init$builtin_int64(&$tmp4797, 24);
                panda$core$Bit $tmp4798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2212_134760.$rawValue, $tmp4797);
                $tmp4763 = $tmp4798.value;
                $l4796:;
                panda$core$Bit $tmp4799 = { $tmp4763 };
                bool $tmp4762 = $tmp4799.value;
                if ($tmp4762) goto $l4800;
                panda$core$Int64$init$builtin_int64(&$tmp4801, 25);
                panda$core$Bit $tmp4802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2212_134760.$rawValue, $tmp4801);
                $tmp4762 = $tmp4802.value;
                $l4800:;
                panda$core$Bit $tmp4803 = { $tmp4762 };
                bool $tmp4761 = $tmp4803.value;
                if ($tmp4761) goto $l4804;
                panda$core$Int64$init$builtin_int64(&$tmp4805, 26);
                panda$core$Bit $tmp4806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2212_134760.$rawValue, $tmp4805);
                $tmp4761 = $tmp4806.value;
                $l4804:;
                panda$core$Bit $tmp4807 = { $tmp4761 };
                if ($tmp4807.value) {
                {
                    goto $l4757;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4808, 11);
                panda$core$Bit $tmp4809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2212_134760.$rawValue, $tmp4808);
                if ($tmp4809.value) {
                {
                    if (((panda$core$Bit) { dc4754 != NULL }).value) {
                    {
                        panda$core$String* $tmp4814 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4758);
                        $tmp4813 = $tmp4814;
                        panda$core$String* $tmp4815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4812, $tmp4813);
                        $tmp4811 = $tmp4815;
                        panda$core$String* $tmp4817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4811, &$s4816);
                        $tmp4810 = $tmp4817;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4758, $tmp4810);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4810));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4811));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4813));
                    }
                    }
                    {
                        $tmp4818 = dc4754;
                        org$pandalanguage$pandac$ASTNode* $tmp4821 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4820 = $tmp4821;
                        $tmp4819 = $tmp4820;
                        dc4754 = $tmp4819;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4819));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4820));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4818));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4822, 48);
                panda$core$Bit $tmp4823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2212_134760.$rawValue, $tmp4822);
                if ($tmp4823.value) {
                {
                    int $tmp4826;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4830 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4754);
                        $tmp4829 = $tmp4830;
                        $tmp4828 = $tmp4829;
                        c4827 = $tmp4828;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4828));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4829));
                        if (((panda$core$Bit) { c4827 == NULL }).value) {
                        {
                            $tmp4831 = NULL;
                            $returnValue4731 = $tmp4831;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4831));
                            $tmp4826 = 0;
                            goto $l4824;
                            $l4832:;
                            $tmp4725 = 3;
                            goto $l4723;
                            $l4833:;
                            return $returnValue4731;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4750, ((panda$core$Object*) c4827));
                        {
                            $tmp4835 = dc4754;
                            $tmp4836 = NULL;
                            dc4754 = $tmp4836;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4836));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4835));
                        }
                    }
                    $tmp4826 = -1;
                    goto $l4824;
                    $l4824:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c4827));
                    c4827 = NULL;
                    switch ($tmp4826) {
                        case -1: goto $l4837;
                        case 0: goto $l4832;
                    }
                    $l4837:;
                }
                }
                else {
                {
                    goto $l4757;
                }
                }
                }
                }
            }
        }
        }
        $l4757:;
        panda$collections$ImmutableArray* $tmp4841 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4841);
        $tmp4840 = $tmp4841;
        $tmp4839 = $tmp4840;
        a4838 = $tmp4839;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4839));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4840));
        $l4842:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4845 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4844 = $tmp4845;
            {
                $match$2236_134846 = next4844.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4847, 13);
                panda$core$Bit $tmp4848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2236_134846.$rawValue, $tmp4847);
                if ($tmp4848.value) {
                {
                    panda$core$Int64 $tmp4849 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4838);
                    panda$core$Int64$init$builtin_int64(&$tmp4850, 0);
                    panda$core$Bit $tmp4851 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4849, $tmp4850);
                    if ($tmp4851.value) {
                    {
                        panda$core$String* $tmp4856 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4844);
                        $tmp4855 = $tmp4856;
                        panda$core$String* $tmp4857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4854, $tmp4855);
                        $tmp4853 = $tmp4857;
                        panda$core$String* $tmp4859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4853, &$s4858);
                        $tmp4852 = $tmp4859;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4844, $tmp4852);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4852));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4853));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4855));
                        $tmp4860 = NULL;
                        $returnValue4731 = $tmp4860;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4860));
                        $tmp4725 = 4;
                        goto $l4723;
                        $l4861:;
                        return $returnValue4731;
                    }
                    }
                    {
                        $tmp4863 = a4838;
                        panda$collections$ImmutableArray* $tmp4866 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp4865 = $tmp4866;
                        $tmp4864 = $tmp4865;
                        a4838 = $tmp4864;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4864));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4865));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4863));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4867, 11);
                panda$core$Bit $tmp4868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2236_134846.$rawValue, $tmp4867);
                if ($tmp4868.value) {
                {
                    bool $tmp4869 = ((panda$core$Bit) { dc4754 != NULL }).value;
                    if ($tmp4869) goto $l4870;
                    panda$core$Int64 $tmp4871 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4838);
                    panda$core$Int64$init$builtin_int64(&$tmp4872, 0);
                    panda$core$Bit $tmp4873 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4871, $tmp4872);
                    $tmp4869 = $tmp4873.value;
                    $l4870:;
                    panda$core$Bit $tmp4874 = { $tmp4869 };
                    if ($tmp4874.value) {
                    {
                        panda$core$String* $tmp4879 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4844);
                        $tmp4878 = $tmp4879;
                        panda$core$String* $tmp4880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4877, $tmp4878);
                        $tmp4876 = $tmp4880;
                        panda$core$String* $tmp4882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4876, &$s4881);
                        $tmp4875 = $tmp4882;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4844, $tmp4875);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4875));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4876));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4878));
                        $tmp4883 = NULL;
                        $returnValue4731 = $tmp4883;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4883));
                        $tmp4725 = 5;
                        goto $l4723;
                        $l4884:;
                        return $returnValue4731;
                    }
                    }
                    {
                        $tmp4886 = dc4754;
                        org$pandalanguage$pandac$ASTNode* $tmp4889 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4888 = $tmp4889;
                        $tmp4887 = $tmp4888;
                        dc4754 = $tmp4887;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4887));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4888));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4886));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4890, 17);
                panda$core$Bit $tmp4891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2236_134846.$rawValue, $tmp4890);
                if ($tmp4891.value) {
                {
                    int $tmp4894;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4898 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4754, a4838);
                        $tmp4897 = $tmp4898;
                        $tmp4896 = $tmp4897;
                        decl4895 = $tmp4896;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4896));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4897));
                        if (((panda$core$Bit) { decl4895 == NULL }).value) {
                        {
                            $tmp4899 = NULL;
                            $returnValue4731 = $tmp4899;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4899));
                            $tmp4894 = 0;
                            goto $l4892;
                            $l4900:;
                            $tmp4725 = 6;
                            goto $l4723;
                            $l4901:;
                            return $returnValue4731;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4750, ((panda$core$Object*) decl4895));
                        {
                            $tmp4903 = dc4754;
                            $tmp4904 = NULL;
                            dc4754 = $tmp4904;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4904));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4903));
                        }
                        {
                            $tmp4905 = a4838;
                            panda$collections$ImmutableArray* $tmp4908 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4908);
                            $tmp4907 = $tmp4908;
                            $tmp4906 = $tmp4907;
                            a4838 = $tmp4906;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4906));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4907));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4905));
                        }
                    }
                    $tmp4894 = -1;
                    goto $l4892;
                    $l4892:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4895));
                    decl4895 = NULL;
                    switch ($tmp4894) {
                        case 0: goto $l4900;
                        case -1: goto $l4909;
                    }
                    $l4909:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4910, 18);
                panda$core$Bit $tmp4911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2236_134846.$rawValue, $tmp4910);
                if ($tmp4911.value) {
                {
                    int $tmp4914;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4918 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4754, a4838);
                        $tmp4917 = $tmp4918;
                        $tmp4916 = $tmp4917;
                        decl4915 = $tmp4916;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4916));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4917));
                        if (((panda$core$Bit) { decl4915 == NULL }).value) {
                        {
                            $tmp4919 = NULL;
                            $returnValue4731 = $tmp4919;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4919));
                            $tmp4914 = 0;
                            goto $l4912;
                            $l4920:;
                            $tmp4725 = 7;
                            goto $l4723;
                            $l4921:;
                            return $returnValue4731;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4750, ((panda$core$Object*) decl4915));
                        {
                            $tmp4923 = dc4754;
                            $tmp4924 = NULL;
                            dc4754 = $tmp4924;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4924));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4923));
                        }
                        {
                            $tmp4925 = a4838;
                            panda$collections$ImmutableArray* $tmp4928 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4928);
                            $tmp4927 = $tmp4928;
                            $tmp4926 = $tmp4927;
                            a4838 = $tmp4926;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4926));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4927));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4925));
                        }
                    }
                    $tmp4914 = -1;
                    goto $l4912;
                    $l4912:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4915));
                    decl4915 = NULL;
                    switch ($tmp4914) {
                        case -1: goto $l4929;
                        case 0: goto $l4920;
                    }
                    $l4929:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4930, 19);
                panda$core$Bit $tmp4931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2236_134846.$rawValue, $tmp4930);
                if ($tmp4931.value) {
                {
                    int $tmp4934;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4938 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4754, a4838);
                        $tmp4937 = $tmp4938;
                        $tmp4936 = $tmp4937;
                        decl4935 = $tmp4936;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4936));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4937));
                        if (((panda$core$Bit) { decl4935 == NULL }).value) {
                        {
                            $tmp4939 = NULL;
                            $returnValue4731 = $tmp4939;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4939));
                            $tmp4934 = 0;
                            goto $l4932;
                            $l4940:;
                            $tmp4725 = 8;
                            goto $l4723;
                            $l4941:;
                            return $returnValue4731;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4750, ((panda$core$Object*) decl4935));
                        {
                            $tmp4943 = dc4754;
                            $tmp4944 = NULL;
                            dc4754 = $tmp4944;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4944));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4943));
                        }
                        {
                            $tmp4945 = a4838;
                            panda$collections$ImmutableArray* $tmp4948 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4948);
                            $tmp4947 = $tmp4948;
                            $tmp4946 = $tmp4947;
                            a4838 = $tmp4946;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4946));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4947));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4945));
                        }
                    }
                    $tmp4934 = -1;
                    goto $l4932;
                    $l4932:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4935));
                    decl4935 = NULL;
                    switch ($tmp4934) {
                        case -1: goto $l4949;
                        case 0: goto $l4940;
                    }
                    $l4949:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4951, 21);
                panda$core$Bit $tmp4952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2236_134846.$rawValue, $tmp4951);
                bool $tmp4950 = $tmp4952.value;
                if ($tmp4950) goto $l4953;
                panda$core$Int64$init$builtin_int64(&$tmp4954, 20);
                panda$core$Bit $tmp4955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2236_134846.$rawValue, $tmp4954);
                $tmp4950 = $tmp4955.value;
                $l4953:;
                panda$core$Bit $tmp4956 = { $tmp4950 };
                if ($tmp4956.value) {
                {
                    int $tmp4959;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4963 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4754, a4838);
                        $tmp4962 = $tmp4963;
                        $tmp4961 = $tmp4962;
                        decl4960 = $tmp4961;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4961));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4962));
                        if (((panda$core$Bit) { decl4960 == NULL }).value) {
                        {
                            $tmp4964 = NULL;
                            $returnValue4731 = $tmp4964;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4964));
                            $tmp4959 = 0;
                            goto $l4957;
                            $l4965:;
                            $tmp4725 = 9;
                            goto $l4723;
                            $l4966:;
                            return $returnValue4731;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4750, ((panda$core$Object*) decl4960));
                        {
                            $tmp4968 = dc4754;
                            $tmp4969 = NULL;
                            dc4754 = $tmp4969;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4969));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4968));
                        }
                        {
                            $tmp4970 = a4838;
                            panda$collections$ImmutableArray* $tmp4973 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4973);
                            $tmp4972 = $tmp4973;
                            $tmp4971 = $tmp4972;
                            a4838 = $tmp4971;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4971));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4972));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4970));
                        }
                    }
                    $tmp4959 = -1;
                    goto $l4957;
                    $l4957:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4960));
                    decl4960 = NULL;
                    switch ($tmp4959) {
                        case -1: goto $l4974;
                        case 0: goto $l4965;
                    }
                    $l4974:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4978, 23);
                panda$core$Bit $tmp4979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2236_134846.$rawValue, $tmp4978);
                bool $tmp4977 = $tmp4979.value;
                if ($tmp4977) goto $l4980;
                panda$core$Int64$init$builtin_int64(&$tmp4981, 24);
                panda$core$Bit $tmp4982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2236_134846.$rawValue, $tmp4981);
                $tmp4977 = $tmp4982.value;
                $l4980:;
                panda$core$Bit $tmp4983 = { $tmp4977 };
                bool $tmp4976 = $tmp4983.value;
                if ($tmp4976) goto $l4984;
                panda$core$Int64$init$builtin_int64(&$tmp4985, 25);
                panda$core$Bit $tmp4986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2236_134846.$rawValue, $tmp4985);
                $tmp4976 = $tmp4986.value;
                $l4984:;
                panda$core$Bit $tmp4987 = { $tmp4976 };
                bool $tmp4975 = $tmp4987.value;
                if ($tmp4975) goto $l4988;
                panda$core$Int64$init$builtin_int64(&$tmp4989, 26);
                panda$core$Bit $tmp4990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2236_134846.$rawValue, $tmp4989);
                $tmp4975 = $tmp4990.value;
                $l4988:;
                panda$core$Bit $tmp4991 = { $tmp4975 };
                if ($tmp4991.value) {
                {
                    int $tmp4994;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4998 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4754, a4838);
                        $tmp4997 = $tmp4998;
                        $tmp4996 = $tmp4997;
                        decl4995 = $tmp4996;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4996));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4997));
                        if (((panda$core$Bit) { decl4995 == NULL }).value) {
                        {
                            $tmp4999 = NULL;
                            $returnValue4731 = $tmp4999;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4999));
                            $tmp4994 = 0;
                            goto $l4992;
                            $l5000:;
                            $tmp4725 = 10;
                            goto $l4723;
                            $l5001:;
                            return $returnValue4731;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4750, ((panda$core$Object*) decl4995));
                        {
                            $tmp5003 = dc4754;
                            $tmp5004 = NULL;
                            dc4754 = $tmp5004;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5004));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5003));
                        }
                        {
                            $tmp5005 = a4838;
                            panda$collections$ImmutableArray* $tmp5008 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5008);
                            $tmp5007 = $tmp5008;
                            $tmp5006 = $tmp5007;
                            a4838 = $tmp5006;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5006));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5007));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5005));
                        }
                    }
                    $tmp4994 = -1;
                    goto $l4992;
                    $l4992:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4995));
                    decl4995 = NULL;
                    switch ($tmp4994) {
                        case 0: goto $l5000;
                        case -1: goto $l5009;
                    }
                    $l5009:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5010, 100);
                panda$core$Bit $tmp5011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2236_134846.$rawValue, $tmp5010);
                if ($tmp5011.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp5013, 100);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5012, $tmp5013);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5012, &$s5014);
                    goto $l4843;
                }
                }
                else {
                {
                    panda$core$String* $tmp5019 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4844);
                    $tmp5018 = $tmp5019;
                    panda$core$String* $tmp5020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5017, $tmp5018);
                    $tmp5016 = $tmp5020;
                    panda$core$String* $tmp5022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5016, &$s5021);
                    $tmp5015 = $tmp5022;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4844, $tmp5015);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5015));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5016));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5018));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp5023 = NULL;
                    $returnValue4731 = $tmp5023;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5023));
                    $tmp4725 = 11;
                    goto $l4723;
                    $l5024:;
                    return $returnValue4731;
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
        $l4843:;
        org$pandalanguage$pandac$ASTNode* $tmp5028 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5029, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5031, 2);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5030, $tmp5031);
        panda$core$String* $tmp5033 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4735.value));
        $tmp5032 = $tmp5033;
        panda$collections$ImmutableArray* $tmp5035 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4750);
        $tmp5034 = $tmp5035;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5028, $tmp5029, ((org$pandalanguage$pandac$parser$Token) start4726.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp5030, $tmp5032, NULL, NULL, $tmp5034);
        $tmp5027 = $tmp5028;
        $tmp5026 = $tmp5027;
        $returnValue4731 = $tmp5026;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5026));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5027));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5034));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5032));
        $tmp4725 = 12;
        goto $l4723;
        $l5036:;
        return $returnValue4731;
    }
    $l4723:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4838));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4754));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4750));
    members4750 = NULL;
    a4838 = NULL;
    switch ($tmp4725) {
        case 7: goto $l4921;
        case 3: goto $l4833;
        case 12: goto $l5036;
        case 4: goto $l4861;
        case 10: goto $l5001;
        case 11: goto $l5024;
        case 9: goto $l4966;
        case 8: goto $l4941;
        case 5: goto $l4884;
        case 1: goto $l4741;
        case 6: goto $l4901;
        case 0: goto $l4733;
        case 2: goto $l4748;
    }
    $l5038:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start5042;
    org$pandalanguage$pandac$ASTNode* dc5044 = NULL;
    panda$core$Int64 $tmp5045;
    org$pandalanguage$pandac$ASTNode* $tmp5047;
    org$pandalanguage$pandac$ASTNode* $tmp5048;
    org$pandalanguage$pandac$ASTNode* $tmp5049;
    org$pandalanguage$pandac$ASTNode* $returnValue5051;
    org$pandalanguage$pandac$ASTNode* $tmp5052;
    org$pandalanguage$pandac$ASTNode* $tmp5055;
    org$pandalanguage$pandac$ASTNode* $tmp5056;
    panda$collections$ImmutableArray* a5057 = NULL;
    panda$collections$ImmutableArray* $tmp5058;
    panda$collections$ImmutableArray* $tmp5059;
    org$pandalanguage$pandac$ASTNode* $tmp5061;
    org$pandalanguage$pandac$parser$Token$Kind $match$2322_95064;
    panda$core$Int64 $tmp5066;
    org$pandalanguage$pandac$ASTNode* $tmp5068;
    org$pandalanguage$pandac$ASTNode* $tmp5069;
    panda$core$Int64 $tmp5073;
    org$pandalanguage$pandac$ASTNode* $tmp5075;
    org$pandalanguage$pandac$ASTNode* $tmp5076;
    panda$core$Int64 $tmp5080;
    org$pandalanguage$pandac$ASTNode* $tmp5082;
    org$pandalanguage$pandac$ASTNode* $tmp5083;
    panda$core$Int64 $tmp5088;
    panda$core$Int64 $tmp5091;
    org$pandalanguage$pandac$ASTNode* $tmp5094;
    org$pandalanguage$pandac$ASTNode* $tmp5095;
    panda$core$Int64 $tmp5099;
    org$pandalanguage$pandac$ASTNode* $tmp5101;
    org$pandalanguage$pandac$ASTNode* $tmp5102;
    panda$core$Int64 $tmp5109;
    panda$core$Int64 $tmp5112;
    panda$core$Int64 $tmp5116;
    panda$core$Int64 $tmp5120;
    org$pandalanguage$pandac$ASTNode* $tmp5123;
    org$pandalanguage$pandac$ASTNode* $tmp5124;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5128;
    panda$core$Int64 $tmp5129;
    org$pandalanguage$pandac$ASTNode* $tmp5131;
    int $tmp5041;
    {
        org$pandalanguage$pandac$parser$Token $tmp5043 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start5042 = $tmp5043;
        memset(&dc5044, 0, sizeof(dc5044));
        panda$core$Int64$init$builtin_int64(&$tmp5045, 11);
        panda$core$Bit $tmp5046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start5042.kind.$rawValue, $tmp5045);
        if ($tmp5046.value) {
        {
            {
                $tmp5047 = dc5044;
                org$pandalanguage$pandac$ASTNode* $tmp5050 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5049 = $tmp5050;
                $tmp5048 = $tmp5049;
                dc5044 = $tmp5048;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5048));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5049));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5047));
            }
            if (((panda$core$Bit) { dc5044 == NULL }).value) {
            {
                $tmp5052 = NULL;
                $returnValue5051 = $tmp5052;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5052));
                $tmp5041 = 0;
                goto $l5039;
                $l5053:;
                return $returnValue5051;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5055 = dc5044;
                $tmp5056 = NULL;
                dc5044 = $tmp5056;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5056));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5055));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp5060 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp5059 = $tmp5060;
        $tmp5058 = $tmp5059;
        a5057 = $tmp5058;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5058));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5059));
        if (((panda$core$Bit) { a5057 == NULL }).value) {
        {
            $tmp5061 = NULL;
            $returnValue5051 = $tmp5061;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5061));
            $tmp5041 = 1;
            goto $l5039;
            $l5062:;
            return $returnValue5051;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp5065 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2322_95064 = $tmp5065.kind;
            panda$core$Int64$init$builtin_int64(&$tmp5066, 17);
            panda$core$Bit $tmp5067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2322_95064.$rawValue, $tmp5066);
            if ($tmp5067.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5070 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5044, a5057);
                $tmp5069 = $tmp5070;
                $tmp5068 = $tmp5069;
                $returnValue5051 = $tmp5068;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5068));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5069));
                $tmp5041 = 2;
                goto $l5039;
                $l5071:;
                return $returnValue5051;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5073, 18);
            panda$core$Bit $tmp5074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2322_95064.$rawValue, $tmp5073);
            if ($tmp5074.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5077 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5044, a5057);
                $tmp5076 = $tmp5077;
                $tmp5075 = $tmp5076;
                $returnValue5051 = $tmp5075;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5075));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5076));
                $tmp5041 = 3;
                goto $l5039;
                $l5078:;
                return $returnValue5051;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5080, 19);
            panda$core$Bit $tmp5081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2322_95064.$rawValue, $tmp5080);
            if ($tmp5081.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5084 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5044, a5057);
                $tmp5083 = $tmp5084;
                $tmp5082 = $tmp5083;
                $returnValue5051 = $tmp5082;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5082));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5083));
                $tmp5041 = 4;
                goto $l5039;
                $l5085:;
                return $returnValue5051;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5088, 21);
            panda$core$Bit $tmp5089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2322_95064.$rawValue, $tmp5088);
            bool $tmp5087 = $tmp5089.value;
            if ($tmp5087) goto $l5090;
            panda$core$Int64$init$builtin_int64(&$tmp5091, 20);
            panda$core$Bit $tmp5092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2322_95064.$rawValue, $tmp5091);
            $tmp5087 = $tmp5092.value;
            $l5090:;
            panda$core$Bit $tmp5093 = { $tmp5087 };
            if ($tmp5093.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5096 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5044, a5057);
                $tmp5095 = $tmp5096;
                $tmp5094 = $tmp5095;
                $returnValue5051 = $tmp5094;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5094));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5095));
                $tmp5041 = 5;
                goto $l5039;
                $l5097:;
                return $returnValue5051;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5099, 22);
            panda$core$Bit $tmp5100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2322_95064.$rawValue, $tmp5099);
            if ($tmp5100.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5103 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5044, a5057);
                $tmp5102 = $tmp5103;
                $tmp5101 = $tmp5102;
                $returnValue5051 = $tmp5101;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5102));
                $tmp5041 = 6;
                goto $l5039;
                $l5104:;
                return $returnValue5051;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5109, 23);
            panda$core$Bit $tmp5110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2322_95064.$rawValue, $tmp5109);
            bool $tmp5108 = $tmp5110.value;
            if ($tmp5108) goto $l5111;
            panda$core$Int64$init$builtin_int64(&$tmp5112, 24);
            panda$core$Bit $tmp5113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2322_95064.$rawValue, $tmp5112);
            $tmp5108 = $tmp5113.value;
            $l5111:;
            panda$core$Bit $tmp5114 = { $tmp5108 };
            bool $tmp5107 = $tmp5114.value;
            if ($tmp5107) goto $l5115;
            panda$core$Int64$init$builtin_int64(&$tmp5116, 25);
            panda$core$Bit $tmp5117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2322_95064.$rawValue, $tmp5116);
            $tmp5107 = $tmp5117.value;
            $l5115:;
            panda$core$Bit $tmp5118 = { $tmp5107 };
            bool $tmp5106 = $tmp5118.value;
            if ($tmp5106) goto $l5119;
            panda$core$Int64$init$builtin_int64(&$tmp5120, 26);
            panda$core$Bit $tmp5121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2322_95064.$rawValue, $tmp5120);
            $tmp5106 = $tmp5121.value;
            $l5119:;
            panda$core$Bit $tmp5122 = { $tmp5106 };
            if ($tmp5122.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5125 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5044, a5057);
                $tmp5124 = $tmp5125;
                $tmp5123 = $tmp5124;
                $returnValue5051 = $tmp5123;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5123));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5124));
                $tmp5041 = 7;
                goto $l5039;
                $l5126:;
                return $returnValue5051;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp5129, 17);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5128, $tmp5129);
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5128, &$s5130);
                $tmp5131 = NULL;
                $returnValue5051 = $tmp5131;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5131));
                $tmp5041 = 8;
                goto $l5039;
                $l5132:;
                return $returnValue5051;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp5041 = -1;
    goto $l5039;
    $l5039:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a5057));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc5044));
    a5057 = NULL;
    switch ($tmp5041) {
        case 2: goto $l5071;
        case 3: goto $l5078;
        case -1: goto $l5134;
        case 1: goto $l5062;
        case 5: goto $l5097;
        case 4: goto $l5085;
        case 7: goto $l5126;
        case 0: goto $l5053;
        case 8: goto $l5132;
        case 6: goto $l5104;
    }
    $l5134:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5138;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5139;
    panda$core$Int64 $tmp5140;
    org$pandalanguage$pandac$ASTNode* $returnValue5143;
    org$pandalanguage$pandac$ASTNode* $tmp5144;
    org$pandalanguage$pandac$parser$Token$nullable name5147;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5148;
    panda$core$Int64 $tmp5149;
    org$pandalanguage$pandac$ASTNode* $tmp5152;
    panda$collections$ImmutableArray* generics5155 = NULL;
    panda$core$Int64 $tmp5157;
    panda$collections$ImmutableArray* $tmp5159;
    panda$collections$ImmutableArray* $tmp5160;
    panda$collections$ImmutableArray* $tmp5161;
    org$pandalanguage$pandac$ASTNode* $tmp5163;
    panda$collections$ImmutableArray* $tmp5166;
    panda$collections$ImmutableArray* $tmp5167;
    panda$collections$ImmutableArray* stypes5168 = NULL;
    panda$core$Int64 $tmp5170;
    panda$collections$ImmutableArray* $tmp5172;
    panda$collections$ImmutableArray* $tmp5173;
    panda$collections$ImmutableArray* $tmp5174;
    org$pandalanguage$pandac$ASTNode* $tmp5176;
    panda$collections$ImmutableArray* $tmp5179;
    panda$collections$ImmutableArray* $tmp5180;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5181;
    panda$core$Int64 $tmp5182;
    org$pandalanguage$pandac$ASTNode* $tmp5185;
    panda$collections$Array* members5188 = NULL;
    panda$collections$Array* $tmp5189;
    panda$collections$Array* $tmp5190;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5195;
    panda$core$Int64 $tmp5196;
    org$pandalanguage$pandac$ASTNode* member5201 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5202;
    org$pandalanguage$pandac$ASTNode* $tmp5203;
    org$pandalanguage$pandac$ASTNode* $tmp5205;
    org$pandalanguage$pandac$ASTNode* $tmp5210;
    org$pandalanguage$pandac$ASTNode* $tmp5211;
    panda$core$Int64 $tmp5213;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5214;
    panda$core$Int64 $tmp5215;
    panda$core$String* $tmp5216;
    panda$collections$ImmutableArray* $tmp5218;
    int $tmp5137;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5140, 17);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5139, $tmp5140);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5142 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5139, &$s5141);
        start5138 = $tmp5142;
        if (((panda$core$Bit) { !start5138.nonnull }).value) {
        {
            $tmp5144 = NULL;
            $returnValue5143 = $tmp5144;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5144));
            $tmp5137 = 0;
            goto $l5135;
            $l5145:;
            return $returnValue5143;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5149, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5148, $tmp5149);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5151 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5148, &$s5150);
        name5147 = $tmp5151;
        if (((panda$core$Bit) { !name5147.nonnull }).value) {
        {
            $tmp5152 = NULL;
            $returnValue5143 = $tmp5152;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5152));
            $tmp5137 = 1;
            goto $l5135;
            $l5153:;
            return $returnValue5143;
        }
        }
        memset(&generics5155, 0, sizeof(generics5155));
        org$pandalanguage$pandac$parser$Token $tmp5156 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5157, 62);
        panda$core$Bit $tmp5158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5156.kind.$rawValue, $tmp5157);
        if ($tmp5158.value) {
        {
            {
                $tmp5159 = generics5155;
                panda$collections$ImmutableArray* $tmp5162 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5161 = $tmp5162;
                $tmp5160 = $tmp5161;
                generics5155 = $tmp5160;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5160));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5161));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5159));
            }
            if (((panda$core$Bit) { generics5155 == NULL }).value) {
            {
                $tmp5163 = NULL;
                $returnValue5143 = $tmp5163;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5163));
                $tmp5137 = 2;
                goto $l5135;
                $l5164:;
                return $returnValue5143;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5166 = generics5155;
                $tmp5167 = NULL;
                generics5155 = $tmp5167;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5167));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5166));
            }
        }
        }
        memset(&stypes5168, 0, sizeof(stypes5168));
        org$pandalanguage$pandac$parser$Token $tmp5169 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5170, 95);
        panda$core$Bit $tmp5171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5169.kind.$rawValue, $tmp5170);
        if ($tmp5171.value) {
        {
            {
                $tmp5172 = stypes5168;
                panda$collections$ImmutableArray* $tmp5175 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5174 = $tmp5175;
                $tmp5173 = $tmp5174;
                stypes5168 = $tmp5173;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5173));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5174));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5172));
            }
            if (((panda$core$Bit) { stypes5168 == NULL }).value) {
            {
                $tmp5176 = NULL;
                $returnValue5143 = $tmp5176;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5176));
                $tmp5137 = 3;
                goto $l5135;
                $l5177:;
                return $returnValue5143;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5179 = stypes5168;
                $tmp5180 = NULL;
                stypes5168 = $tmp5180;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5180));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5179));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5182, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5181, $tmp5182);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5184 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5181, &$s5183);
        if (((panda$core$Bit) { !$tmp5184.nonnull }).value) {
        {
            $tmp5185 = NULL;
            $returnValue5143 = $tmp5185;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5185));
            $tmp5137 = 4;
            goto $l5135;
            $l5186:;
            return $returnValue5143;
        }
        }
        panda$collections$Array* $tmp5191 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5191);
        $tmp5190 = $tmp5191;
        $tmp5189 = $tmp5190;
        members5188 = $tmp5189;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5190));
        $l5192:;
        panda$core$Int64$init$builtin_int64(&$tmp5196, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5195, $tmp5196);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5197 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5195);
        bool $tmp5194 = ((panda$core$Bit) { !$tmp5197.nonnull }).value;
        if (!$tmp5194) goto $l5193;
        {
            int $tmp5200;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5204 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5203 = $tmp5204;
                $tmp5202 = $tmp5203;
                member5201 = $tmp5202;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5202));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5203));
                if (((panda$core$Bit) { member5201 == NULL }).value) {
                {
                    $tmp5205 = NULL;
                    $returnValue5143 = $tmp5205;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5205));
                    $tmp5200 = 0;
                    goto $l5198;
                    $l5206:;
                    $tmp5137 = 5;
                    goto $l5135;
                    $l5207:;
                    return $returnValue5143;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5188, ((panda$core$Object*) member5201));
            }
            $tmp5200 = -1;
            goto $l5198;
            $l5198:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5201));
            member5201 = NULL;
            switch ($tmp5200) {
                case 0: goto $l5206;
                case -1: goto $l5209;
            }
            $l5209:;
        }
        goto $l5192;
        $l5193:;
        org$pandalanguage$pandac$ASTNode* $tmp5212 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5213, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5215, 0);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5214, $tmp5215);
        panda$core$String* $tmp5217 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5147.value));
        $tmp5216 = $tmp5217;
        panda$collections$ImmutableArray* $tmp5219 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5188);
        $tmp5218 = $tmp5219;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5212, $tmp5213, ((org$pandalanguage$pandac$parser$Token) start5138.value).position, p_doccomment, p_annotations, $tmp5214, $tmp5216, generics5155, stypes5168, $tmp5218);
        $tmp5211 = $tmp5212;
        $tmp5210 = $tmp5211;
        $returnValue5143 = $tmp5210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5211));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5218));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5216));
        $tmp5137 = 6;
        goto $l5135;
        $l5220:;
        return $returnValue5143;
    }
    $l5135:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5188));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes5168));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5155));
    members5188 = NULL;
    switch ($tmp5137) {
        case 6: goto $l5220;
        case 5: goto $l5207;
        case 1: goto $l5153;
        case 3: goto $l5177;
        case 4: goto $l5186;
        case 2: goto $l5164;
        case 0: goto $l5145;
    }
    $l5222:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5226;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5227;
    panda$core$Int64 $tmp5228;
    org$pandalanguage$pandac$ASTNode* $returnValue5231;
    org$pandalanguage$pandac$ASTNode* $tmp5232;
    org$pandalanguage$pandac$parser$Token$nullable name5235;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5236;
    panda$core$Int64 $tmp5237;
    org$pandalanguage$pandac$ASTNode* $tmp5240;
    panda$collections$ImmutableArray* generics5243 = NULL;
    panda$core$Int64 $tmp5245;
    panda$collections$ImmutableArray* $tmp5247;
    panda$collections$ImmutableArray* $tmp5248;
    panda$collections$ImmutableArray* $tmp5249;
    org$pandalanguage$pandac$ASTNode* $tmp5251;
    panda$collections$ImmutableArray* $tmp5254;
    panda$collections$ImmutableArray* $tmp5255;
    panda$collections$ImmutableArray* $tmp5256;
    panda$collections$Array* intfs5258 = NULL;
    panda$collections$Array* $tmp5259;
    panda$collections$Array* $tmp5260;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5262;
    panda$core$Int64 $tmp5263;
    org$pandalanguage$pandac$ASTNode* t5268 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5269;
    org$pandalanguage$pandac$ASTNode* $tmp5270;
    org$pandalanguage$pandac$ASTNode* $tmp5272;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5279;
    panda$core$Int64 $tmp5280;
    org$pandalanguage$pandac$ASTNode* $tmp5282;
    org$pandalanguage$pandac$ASTNode* $tmp5283;
    org$pandalanguage$pandac$ASTNode* $tmp5284;
    org$pandalanguage$pandac$ASTNode* $tmp5286;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5291;
    panda$core$Int64 $tmp5292;
    org$pandalanguage$pandac$ASTNode* $tmp5295;
    panda$collections$Array* members5298 = NULL;
    panda$collections$Array* $tmp5299;
    panda$collections$Array* $tmp5300;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5305;
    panda$core$Int64 $tmp5306;
    org$pandalanguage$pandac$ASTNode* member5311 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5312;
    org$pandalanguage$pandac$ASTNode* $tmp5313;
    org$pandalanguage$pandac$ASTNode* $tmp5315;
    org$pandalanguage$pandac$ASTNode* $tmp5320;
    org$pandalanguage$pandac$ASTNode* $tmp5321;
    panda$core$Int64 $tmp5323;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5324;
    panda$core$Int64 $tmp5325;
    panda$core$String* $tmp5326;
    panda$collections$ImmutableArray* $tmp5328;
    panda$collections$ImmutableArray* $tmp5330;
    int $tmp5225;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5228, 18);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5227, $tmp5228);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5230 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5227, &$s5229);
        start5226 = $tmp5230;
        if (((panda$core$Bit) { !start5226.nonnull }).value) {
        {
            $tmp5232 = NULL;
            $returnValue5231 = $tmp5232;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5232));
            $tmp5225 = 0;
            goto $l5223;
            $l5233:;
            return $returnValue5231;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5237, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5236, $tmp5237);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5239 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5236, &$s5238);
        name5235 = $tmp5239;
        if (((panda$core$Bit) { !name5235.nonnull }).value) {
        {
            $tmp5240 = NULL;
            $returnValue5231 = $tmp5240;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5240));
            $tmp5225 = 1;
            goto $l5223;
            $l5241:;
            return $returnValue5231;
        }
        }
        memset(&generics5243, 0, sizeof(generics5243));
        org$pandalanguage$pandac$parser$Token $tmp5244 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5245, 62);
        panda$core$Bit $tmp5246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5244.kind.$rawValue, $tmp5245);
        if ($tmp5246.value) {
        {
            {
                $tmp5247 = generics5243;
                panda$collections$ImmutableArray* $tmp5250 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5249 = $tmp5250;
                $tmp5248 = $tmp5249;
                generics5243 = $tmp5248;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5248));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5249));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5247));
            }
            if (((panda$core$Bit) { generics5243 == NULL }).value) {
            {
                $tmp5251 = NULL;
                $returnValue5231 = $tmp5251;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5251));
                $tmp5225 = 2;
                goto $l5223;
                $l5252:;
                return $returnValue5231;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5254 = generics5243;
                panda$collections$ImmutableArray* $tmp5257 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp5257);
                $tmp5256 = $tmp5257;
                $tmp5255 = $tmp5256;
                generics5243 = $tmp5255;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5255));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5256));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5254));
            }
        }
        }
        panda$collections$Array* $tmp5261 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5261);
        $tmp5260 = $tmp5261;
        $tmp5259 = $tmp5260;
        intfs5258 = $tmp5259;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5259));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5260));
        panda$core$Int64$init$builtin_int64(&$tmp5263, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5262, $tmp5263);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5264 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5262);
        if (((panda$core$Bit) { $tmp5264.nonnull }).value) {
        {
            int $tmp5267;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5271 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5270 = $tmp5271;
                $tmp5269 = $tmp5270;
                t5268 = $tmp5269;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5269));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5270));
                if (((panda$core$Bit) { t5268 == NULL }).value) {
                {
                    $tmp5272 = NULL;
                    $returnValue5231 = $tmp5272;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5272));
                    $tmp5267 = 0;
                    goto $l5265;
                    $l5273:;
                    $tmp5225 = 3;
                    goto $l5223;
                    $l5274:;
                    return $returnValue5231;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs5258, ((panda$core$Object*) t5268));
                $l5276:;
                panda$core$Int64$init$builtin_int64(&$tmp5280, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5279, $tmp5280);
                org$pandalanguage$pandac$parser$Token$nullable $tmp5281 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5279);
                bool $tmp5278 = ((panda$core$Bit) { $tmp5281.nonnull }).value;
                if (!$tmp5278) goto $l5277;
                {
                    {
                        $tmp5282 = t5268;
                        org$pandalanguage$pandac$ASTNode* $tmp5285 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5284 = $tmp5285;
                        $tmp5283 = $tmp5284;
                        t5268 = $tmp5283;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5283));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5284));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5282));
                    }
                    if (((panda$core$Bit) { t5268 == NULL }).value) {
                    {
                        $tmp5286 = NULL;
                        $returnValue5231 = $tmp5286;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5286));
                        $tmp5267 = 1;
                        goto $l5265;
                        $l5287:;
                        $tmp5225 = 4;
                        goto $l5223;
                        $l5288:;
                        return $returnValue5231;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs5258, ((panda$core$Object*) t5268));
                }
                goto $l5276;
                $l5277:;
            }
            $tmp5267 = -1;
            goto $l5265;
            $l5265:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t5268));
            t5268 = NULL;
            switch ($tmp5267) {
                case 0: goto $l5273;
                case -1: goto $l5290;
                case 1: goto $l5287;
            }
            $l5290:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5292, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5291, $tmp5292);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5294 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5291, &$s5293);
        if (((panda$core$Bit) { !$tmp5294.nonnull }).value) {
        {
            $tmp5295 = NULL;
            $returnValue5231 = $tmp5295;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5295));
            $tmp5225 = 5;
            goto $l5223;
            $l5296:;
            return $returnValue5231;
        }
        }
        panda$collections$Array* $tmp5301 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5301);
        $tmp5300 = $tmp5301;
        $tmp5299 = $tmp5300;
        members5298 = $tmp5299;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5299));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5300));
        $l5302:;
        panda$core$Int64$init$builtin_int64(&$tmp5306, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5305, $tmp5306);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5307 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5305);
        bool $tmp5304 = ((panda$core$Bit) { !$tmp5307.nonnull }).value;
        if (!$tmp5304) goto $l5303;
        {
            int $tmp5310;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5314 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5313 = $tmp5314;
                $tmp5312 = $tmp5313;
                member5311 = $tmp5312;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5312));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5313));
                if (((panda$core$Bit) { member5311 == NULL }).value) {
                {
                    $tmp5315 = NULL;
                    $returnValue5231 = $tmp5315;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5315));
                    $tmp5310 = 0;
                    goto $l5308;
                    $l5316:;
                    $tmp5225 = 6;
                    goto $l5223;
                    $l5317:;
                    return $returnValue5231;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5298, ((panda$core$Object*) member5311));
            }
            $tmp5310 = -1;
            goto $l5308;
            $l5308:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5311));
            member5311 = NULL;
            switch ($tmp5310) {
                case 0: goto $l5316;
                case -1: goto $l5319;
            }
            $l5319:;
        }
        goto $l5302;
        $l5303:;
        org$pandalanguage$pandac$ASTNode* $tmp5322 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5323, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5325, 1);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5324, $tmp5325);
        panda$core$String* $tmp5327 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5235.value));
        $tmp5326 = $tmp5327;
        panda$collections$ImmutableArray* $tmp5329 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs5258);
        $tmp5328 = $tmp5329;
        panda$collections$ImmutableArray* $tmp5331 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5298);
        $tmp5330 = $tmp5331;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5322, $tmp5323, ((org$pandalanguage$pandac$parser$Token) start5226.value).position, p_doccomment, p_annotations, $tmp5324, $tmp5326, generics5243, $tmp5328, $tmp5330);
        $tmp5321 = $tmp5322;
        $tmp5320 = $tmp5321;
        $returnValue5231 = $tmp5320;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5320));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5321));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5330));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5328));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5326));
        $tmp5225 = 7;
        goto $l5223;
        $l5332:;
        return $returnValue5231;
    }
    $l5223:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5298));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs5258));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5243));
    intfs5258 = NULL;
    members5298 = NULL;
    switch ($tmp5225) {
        case 3: goto $l5274;
        case 2: goto $l5252;
        case 1: goto $l5241;
        case 7: goto $l5332;
        case 5: goto $l5296;
        case 6: goto $l5317;
        case 4: goto $l5288;
        case 0: goto $l5233;
    }
    $l5334:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2446_95335;
    panda$core$Int64 $tmp5337;
    org$pandalanguage$pandac$ASTNode* $returnValue5339;
    org$pandalanguage$pandac$ASTNode* $tmp5340;
    org$pandalanguage$pandac$ASTNode* $tmp5341;
    panda$core$Int64 $tmp5344;
    org$pandalanguage$pandac$ASTNode* $tmp5346;
    org$pandalanguage$pandac$ASTNode* $tmp5347;
    org$pandalanguage$pandac$ASTNode* $tmp5350;
    org$pandalanguage$pandac$ASTNode* $tmp5351;
    {
        org$pandalanguage$pandac$parser$Token $tmp5336 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2446_95335 = $tmp5336.kind;
        panda$core$Int64$init$builtin_int64(&$tmp5337, 15);
        panda$core$Bit $tmp5338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2446_95335.$rawValue, $tmp5337);
        if ($tmp5338.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5342 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5341 = $tmp5342;
            $tmp5340 = $tmp5341;
            $returnValue5339 = $tmp5340;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5341));
            return $returnValue5339;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp5344, 14);
        panda$core$Bit $tmp5345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2446_95335.$rawValue, $tmp5344);
        if ($tmp5345.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5348 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5347 = $tmp5348;
            $tmp5346 = $tmp5347;
            $returnValue5339 = $tmp5346;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5346));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5347));
            return $returnValue5339;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5352 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5351 = $tmp5352;
            $tmp5350 = $tmp5351;
            $returnValue5339 = $tmp5350;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5351));
            return $returnValue5339;
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries5357 = NULL;
    panda$collections$Array* $tmp5358;
    panda$collections$Array* $tmp5359;
    panda$core$Int64 $tmp5365;
    org$pandalanguage$pandac$ASTNode* entry5370 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5371;
    org$pandalanguage$pandac$ASTNode* $tmp5372;
    org$pandalanguage$pandac$ASTNode* $returnValue5374;
    org$pandalanguage$pandac$ASTNode* $tmp5375;
    org$pandalanguage$pandac$ASTNode* $tmp5384;
    org$pandalanguage$pandac$ASTNode* $tmp5385;
    panda$core$Int64 $tmp5387;
    panda$collections$ImmutableArray* $tmp5388;
    int $tmp5356;
    {
        panda$collections$Array* $tmp5360 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5360);
        $tmp5359 = $tmp5360;
        $tmp5358 = $tmp5359;
        entries5357 = $tmp5358;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5358));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5359));
        $l5361:;
        org$pandalanguage$pandac$parser$Token $tmp5364 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5365, 0);
        panda$core$Bit $tmp5366 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5364.kind.$rawValue, $tmp5365);
        bool $tmp5363 = $tmp5366.value;
        if (!$tmp5363) goto $l5362;
        {
            int $tmp5369;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5373 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5372 = $tmp5373;
                $tmp5371 = $tmp5372;
                entry5370 = $tmp5371;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5371));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5372));
                if (((panda$core$Bit) { entry5370 == NULL }).value) {
                {
                    $tmp5375 = NULL;
                    $returnValue5374 = $tmp5375;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5375));
                    $tmp5369 = 0;
                    goto $l5367;
                    $l5376:;
                    $tmp5356 = 0;
                    goto $l5354;
                    $l5377:;
                    return $returnValue5374;
                }
                }
                panda$core$Bit $tmp5379 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                if ($tmp5379.value) goto $l5380; else goto $l5381;
                $l5381:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5382, (panda$core$Int64) { 2466 });
                abort();
                $l5380:;
                panda$collections$Array$add$panda$collections$Array$T(entries5357, ((panda$core$Object*) entry5370));
            }
            $tmp5369 = -1;
            goto $l5367;
            $l5367:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry5370));
            entry5370 = NULL;
            switch ($tmp5369) {
                case -1: goto $l5383;
                case 0: goto $l5376;
            }
            $l5383:;
        }
        goto $l5361;
        $l5362:;
        org$pandalanguage$pandac$ASTNode* $tmp5386 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5387, 17);
        panda$collections$ImmutableArray* $tmp5389 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries5357);
        $tmp5388 = $tmp5389;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5386, $tmp5387, $tmp5388);
        $tmp5385 = $tmp5386;
        $tmp5384 = $tmp5385;
        $returnValue5374 = $tmp5384;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5384));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5385));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5388));
        $tmp5356 = 1;
        goto $l5354;
        $l5390:;
        return $returnValue5374;
    }
    $l5354:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries5357));
    entries5357 = NULL;
    switch ($tmp5356) {
        case 1: goto $l5390;
        case 0: goto $l5377;
    }
    $l5392:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp5395;
    {
    }
    $tmp5395 = -1;
    goto $l5393;
    $l5393:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp5395) {
        case -1: goto $l5396;
    }
    $l5396:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->regexParser));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

