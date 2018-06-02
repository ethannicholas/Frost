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
typedef org$pandalanguage$pandac$Position (*$fn2181)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3441)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3468)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3518)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn4630)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s2876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s2927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s2965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 118, 5129537752972831981, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s3724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s3793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s4995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

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
    org$pandalanguage$pandac$parser$Token yields1703;
    org$pandalanguage$pandac$parser$Token$Kind $match$678_91705;
    panda$core$Int64 $tmp1709;
    panda$core$Int64 $tmp1712;
    panda$core$Int64 $tmp1716;
    panda$core$Int64 $tmp1720;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1726;
    panda$core$Int64 $tmp1727;
    org$pandalanguage$pandac$ASTNode* $tmp1730;
    panda$collections$Array* returnTypes1734 = NULL;
    panda$collections$Array* $tmp1735;
    panda$collections$Array* $tmp1736;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1738;
    panda$core$Int64 $tmp1739;
    org$pandalanguage$pandac$ASTNode* t1744 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1745;
    org$pandalanguage$pandac$ASTNode* $tmp1746;
    org$pandalanguage$pandac$ASTNode* $tmp1748;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1756;
    panda$core$Int64 $tmp1757;
    org$pandalanguage$pandac$ASTNode* $tmp1759;
    org$pandalanguage$pandac$ASTNode* $tmp1760;
    org$pandalanguage$pandac$ASTNode* $tmp1761;
    org$pandalanguage$pandac$ASTNode* $tmp1763;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1768;
    panda$core$Int64 $tmp1769;
    org$pandalanguage$pandac$ASTNode* returnType1772 = NULL;
    panda$core$Int64 $tmp1774;
    org$pandalanguage$pandac$ASTNode* $tmp1776;
    org$pandalanguage$pandac$ASTNode* $tmp1777;
    panda$core$Int64 $tmp1779;
    org$pandalanguage$pandac$ASTNode* $tmp1781;
    org$pandalanguage$pandac$ASTNode* $tmp1782;
    panda$core$Object* $tmp1783;
    panda$core$Int64 $tmp1784;
    org$pandalanguage$pandac$ASTNode* $tmp1786;
    org$pandalanguage$pandac$ASTNode* $tmp1787;
    org$pandalanguage$pandac$ASTNode* $tmp1788;
    panda$core$Int64 $tmp1790;
    panda$collections$ImmutableArray* $tmp1791;
    org$pandalanguage$pandac$ASTNode* $tmp1793;
    org$pandalanguage$pandac$ASTNode* $tmp1794;
    panda$core$Int64 $tmp1796;
    panda$collections$ImmutableArray* $tmp1797;
    org$pandalanguage$pandac$ASTNode* $tmp1803;
    org$pandalanguage$pandac$ASTNode* $tmp1804;
    panda$core$Int64 $tmp1806;
    panda$collections$ImmutableArray* $tmp1807;
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
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1699, &$s1701);
            }
            $tmp1676 = -1;
            goto $l1674;
            $l1674:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1677));
            t1677 = NULL;
            switch ($tmp1676) {
                case 0: goto $l1682;
                case 1: goto $l1696;
                case -1: goto $l1702;
            }
            $l1702:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1704 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1703 = $tmp1704;
        {
            $match$678_91705 = yields1703.kind;
            panda$core$Int64$init$builtin_int64(&$tmp1709, 90);
            panda$core$Bit $tmp1710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$678_91705.$rawValue, $tmp1709);
            bool $tmp1708 = $tmp1710.value;
            if ($tmp1708) goto $l1711;
            panda$core$Int64$init$builtin_int64(&$tmp1712, 91);
            panda$core$Bit $tmp1713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$678_91705.$rawValue, $tmp1712);
            $tmp1708 = $tmp1713.value;
            $l1711:;
            panda$core$Bit $tmp1714 = { $tmp1708 };
            bool $tmp1707 = $tmp1714.value;
            if ($tmp1707) goto $l1715;
            panda$core$Int64$init$builtin_int64(&$tmp1716, 92);
            panda$core$Bit $tmp1717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$678_91705.$rawValue, $tmp1716);
            $tmp1707 = $tmp1717.value;
            $l1715:;
            panda$core$Bit $tmp1718 = { $tmp1707 };
            bool $tmp1706 = $tmp1718.value;
            if ($tmp1706) goto $l1719;
            panda$core$Int64$init$builtin_int64(&$tmp1720, 93);
            panda$core$Bit $tmp1721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$678_91705.$rawValue, $tmp1720);
            $tmp1706 = $tmp1721.value;
            $l1719:;
            panda$core$Bit $tmp1722 = { $tmp1706 };
            if ($tmp1722.value) {
            {
                int $tmp1725;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp1727, 103);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1726, $tmp1727);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1729 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1726, &$s1728);
                    if (((panda$core$Bit) { !$tmp1729.nonnull }).value) {
                    {
                        $tmp1730 = NULL;
                        $returnValue1663 = $tmp1730;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1730));
                        $tmp1725 = 0;
                        goto $l1723;
                        $l1731:;
                        $tmp1657 = 3;
                        goto $l1655;
                        $l1732:;
                        return $returnValue1663;
                    }
                    }
                    panda$collections$Array* $tmp1737 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1737);
                    $tmp1736 = $tmp1737;
                    $tmp1735 = $tmp1736;
                    returnTypes1734 = $tmp1735;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1735));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
                    panda$core$Int64$init$builtin_int64(&$tmp1739, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1738, $tmp1739);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1740 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1738);
                    if (((panda$core$Bit) { !$tmp1740.nonnull }).value) {
                    {
                        int $tmp1743;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1747 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1746 = $tmp1747;
                            $tmp1745 = $tmp1746;
                            t1744 = $tmp1745;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1745));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1746));
                            if (((panda$core$Bit) { t1744 == NULL }).value) {
                            {
                                $tmp1748 = NULL;
                                $returnValue1663 = $tmp1748;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1748));
                                $tmp1743 = 0;
                                goto $l1741;
                                $l1749:;
                                $tmp1725 = 1;
                                goto $l1723;
                                $l1750:;
                                $tmp1657 = 4;
                                goto $l1655;
                                $l1751:;
                                return $returnValue1663;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1734, ((panda$core$Object*) t1744));
                            $l1753:;
                            panda$core$Int64$init$builtin_int64(&$tmp1757, 105);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1756, $tmp1757);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1758 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1756);
                            bool $tmp1755 = ((panda$core$Bit) { $tmp1758.nonnull }).value;
                            if (!$tmp1755) goto $l1754;
                            {
                                {
                                    $tmp1759 = t1744;
                                    org$pandalanguage$pandac$ASTNode* $tmp1762 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1761 = $tmp1762;
                                    $tmp1760 = $tmp1761;
                                    t1744 = $tmp1760;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1760));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1761));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1759));
                                }
                                if (((panda$core$Bit) { t1744 == NULL }).value) {
                                {
                                    $tmp1763 = NULL;
                                    $returnValue1663 = $tmp1763;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1763));
                                    $tmp1743 = 1;
                                    goto $l1741;
                                    $l1764:;
                                    $tmp1725 = 2;
                                    goto $l1723;
                                    $l1765:;
                                    $tmp1657 = 5;
                                    goto $l1655;
                                    $l1766:;
                                    return $returnValue1663;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1734, ((panda$core$Object*) t1744));
                            }
                            goto $l1753;
                            $l1754:;
                            panda$core$Int64$init$builtin_int64(&$tmp1769, 104);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1768, $tmp1769);
                            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1768, &$s1770);
                        }
                        $tmp1743 = -1;
                        goto $l1741;
                        $l1741:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1744));
                        t1744 = NULL;
                        switch ($tmp1743) {
                            case 1: goto $l1764;
                            case 0: goto $l1749;
                            case -1: goto $l1771;
                        }
                        $l1771:;
                    }
                    }
                    memset(&returnType1772, 0, sizeof(returnType1772));
                    panda$core$Int64 $tmp1773 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1734);
                    panda$core$Int64$init$builtin_int64(&$tmp1774, 0);
                    panda$core$Bit $tmp1775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1773, $tmp1774);
                    if ($tmp1775.value) {
                    {
                        {
                            $tmp1776 = returnType1772;
                            $tmp1777 = NULL;
                            returnType1772 = $tmp1777;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1777));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1776));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1778 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1734);
                    panda$core$Int64$init$builtin_int64(&$tmp1779, 1);
                    panda$core$Bit $tmp1780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1778, $tmp1779);
                    if ($tmp1780.value) {
                    {
                        {
                            $tmp1781 = returnType1772;
                            panda$core$Int64$init$builtin_int64(&$tmp1784, 0);
                            panda$core$Object* $tmp1785 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1734, $tmp1784);
                            $tmp1783 = $tmp1785;
                            $tmp1782 = ((org$pandalanguage$pandac$ASTNode*) $tmp1783);
                            returnType1772 = $tmp1782;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1782));
                            panda$core$Panda$unref$panda$core$Object($tmp1783);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1781));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1786 = returnType1772;
                            org$pandalanguage$pandac$ASTNode* $tmp1789 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp1790, 41);
                            panda$collections$ImmutableArray* $tmp1792 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(returnTypes1734);
                            $tmp1791 = $tmp1792;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1789, $tmp1790, ((org$pandalanguage$pandac$parser$Token) start1658.value).position, $tmp1791);
                            $tmp1788 = $tmp1789;
                            $tmp1787 = $tmp1788;
                            returnType1772 = $tmp1787;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1787));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1788));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1791));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1786));
                        }
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1795 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1796, 27);
                    panda$collections$ImmutableArray* $tmp1798 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1667);
                    $tmp1797 = $tmp1798;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1795, $tmp1796, ((org$pandalanguage$pandac$parser$Token) start1658.value).position, yields1703.kind, $tmp1797, returnType1772);
                    $tmp1794 = $tmp1795;
                    $tmp1793 = $tmp1794;
                    $returnValue1663 = $tmp1793;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1793));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1794));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1797));
                    $tmp1725 = 3;
                    goto $l1723;
                    $l1799:;
                    $tmp1657 = 6;
                    goto $l1655;
                    $l1800:;
                    return $returnValue1663;
                }
                $l1723:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1772));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1734));
                returnTypes1734 = NULL;
                switch ($tmp1725) {
                    case 2: goto $l1765;
                    case 0: goto $l1731;
                    case 3: goto $l1799;
                    case 1: goto $l1750;
                }
                $l1802:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1805 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1806, 41);
                panda$collections$ImmutableArray* $tmp1808 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1667);
                $tmp1807 = $tmp1808;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1805, $tmp1806, ((org$pandalanguage$pandac$parser$Token) start1658.value).position, $tmp1807);
                $tmp1804 = $tmp1805;
                $tmp1803 = $tmp1804;
                $returnValue1663 = $tmp1803;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1803));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1804));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1807));
                $tmp1657 = 7;
                goto $l1655;
                $l1809:;
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
        case 3: goto $l1732;
        case 1: goto $l1683;
        case 6: goto $l1800;
        case 7: goto $l1809;
        case 5: goto $l1766;
        case 2: goto $l1697;
        case 0: goto $l1665;
        case -1: goto $l1811;
        case 4: goto $l1751;
    }
    $l1811:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    panda$core$Int64 $tmp1816;
    org$pandalanguage$pandac$ASTNode* $returnValue1818;
    org$pandalanguage$pandac$ASTNode* $tmp1819;
    org$pandalanguage$pandac$ASTNode* $tmp1820;
    org$pandalanguage$pandac$parser$Token$nullable start1824;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1825;
    panda$core$Int64 $tmp1826;
    org$pandalanguage$pandac$ASTNode* $tmp1829;
    panda$core$MutableString* name1832 = NULL;
    panda$core$MutableString* $tmp1833;
    panda$core$MutableString* $tmp1834;
    panda$core$String* $tmp1836;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1841;
    panda$core$Int64 $tmp1842;
    org$pandalanguage$pandac$parser$Token$nullable id1844;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1845;
    panda$core$Int64 $tmp1846;
    org$pandalanguage$pandac$ASTNode* $tmp1849;
    panda$core$Char8 $tmp1852;
    panda$core$UInt8 $tmp1853;
    panda$core$String* $tmp1854;
    panda$core$String* finalName1856 = NULL;
    panda$core$String* $tmp1857;
    panda$core$String* $tmp1858;
    org$pandalanguage$pandac$ASTNode* result1860 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1861;
    org$pandalanguage$pandac$ASTNode* $tmp1862;
    panda$core$Int64 $tmp1864;
    panda$core$Int64 $tmp1866;
    panda$collections$Array* children1871 = NULL;
    panda$collections$Array* $tmp1872;
    panda$collections$Array* $tmp1873;
    org$pandalanguage$pandac$ASTNode* t1875 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1876;
    org$pandalanguage$pandac$ASTNode* $tmp1877;
    panda$core$Bit $tmp1878;
    org$pandalanguage$pandac$ASTNode* $tmp1880;
    org$pandalanguage$pandac$ASTNode* $tmp1884;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1891;
    panda$core$Int64 $tmp1892;
    org$pandalanguage$pandac$ASTNode* $tmp1894;
    org$pandalanguage$pandac$ASTNode* $tmp1895;
    org$pandalanguage$pandac$ASTNode* $tmp1896;
    panda$core$Bit $tmp1897;
    org$pandalanguage$pandac$ASTNode* $tmp1899;
    org$pandalanguage$pandac$ASTNode* $tmp1903;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1907;
    panda$core$Int64 $tmp1908;
    org$pandalanguage$pandac$ASTNode* $tmp1911;
    org$pandalanguage$pandac$ASTNode* $tmp1915;
    org$pandalanguage$pandac$ASTNode* $tmp1919;
    org$pandalanguage$pandac$ASTNode* $tmp1920;
    org$pandalanguage$pandac$ASTNode* $tmp1921;
    panda$core$Int64 $tmp1923;
    panda$collections$ImmutableArray* $tmp1924;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1927;
    panda$core$Int64 $tmp1928;
    org$pandalanguage$pandac$ASTNode* $tmp1930;
    org$pandalanguage$pandac$ASTNode* $tmp1931;
    org$pandalanguage$pandac$ASTNode* $tmp1932;
    panda$core$Int64 $tmp1934;
    org$pandalanguage$pandac$ASTNode* $tmp1935;
    int $tmp1814;
    {
        org$pandalanguage$pandac$parser$Token $tmp1815 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp1816, 103);
        panda$core$Bit $tmp1817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1815.kind.$rawValue, $tmp1816);
        if ($tmp1817.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1821 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1820 = $tmp1821;
            $tmp1819 = $tmp1820;
            $returnValue1818 = $tmp1819;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1819));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1820));
            $tmp1814 = 0;
            goto $l1812;
            $l1822:;
            return $returnValue1818;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1826, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1825, $tmp1826);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1828 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1825, &$s1827);
        start1824 = $tmp1828;
        if (((panda$core$Bit) { !start1824.nonnull }).value) {
        {
            $tmp1829 = NULL;
            $returnValue1818 = $tmp1829;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1829));
            $tmp1814 = 1;
            goto $l1812;
            $l1830:;
            return $returnValue1818;
        }
        }
        panda$core$MutableString* $tmp1835 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp1837 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1824.value));
        $tmp1836 = $tmp1837;
        panda$core$MutableString$init$panda$core$String($tmp1835, $tmp1836);
        $tmp1834 = $tmp1835;
        $tmp1833 = $tmp1834;
        name1832 = $tmp1833;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1833));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1834));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1836));
        $l1838:;
        panda$core$Int64$init$builtin_int64(&$tmp1842, 98);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1841, $tmp1842);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1843 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1841);
        bool $tmp1840 = ((panda$core$Bit) { $tmp1843.nonnull }).value;
        if (!$tmp1840) goto $l1839;
        {
            panda$core$Int64$init$builtin_int64(&$tmp1846, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1845, $tmp1846);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1848 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1845, &$s1847);
            id1844 = $tmp1848;
            if (((panda$core$Bit) { !id1844.nonnull }).value) {
            {
                $tmp1849 = NULL;
                $returnValue1818 = $tmp1849;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1849));
                $tmp1814 = 2;
                goto $l1812;
                $l1850:;
                return $returnValue1818;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp1853, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp1852, $tmp1853);
            panda$core$MutableString$append$panda$core$Char8(name1832, $tmp1852);
            panda$core$String* $tmp1855 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1844.value));
            $tmp1854 = $tmp1855;
            panda$core$MutableString$append$panda$core$String(name1832, $tmp1854);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1854));
        }
        goto $l1838;
        $l1839:;
        panda$core$String* $tmp1859 = panda$core$MutableString$finish$R$panda$core$String(name1832);
        $tmp1858 = $tmp1859;
        $tmp1857 = $tmp1858;
        finalName1856 = $tmp1857;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1857));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1858));
        org$pandalanguage$pandac$ASTNode* $tmp1863 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1864, 42);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1863, $tmp1864, ((org$pandalanguage$pandac$parser$Token) start1824.value).position, finalName1856);
        $tmp1862 = $tmp1863;
        $tmp1861 = $tmp1862;
        result1860 = $tmp1861;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1861));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1862));
        org$pandalanguage$pandac$parser$Token $tmp1865 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp1866, 62);
        panda$core$Bit $tmp1867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1865.kind.$rawValue, $tmp1866);
        if ($tmp1867.value) {
        {
            int $tmp1870;
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                }
                }
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$collections$Array* $tmp1874 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1874);
                $tmp1873 = $tmp1874;
                $tmp1872 = $tmp1873;
                children1871 = $tmp1872;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1872));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1873));
                panda$core$Bit$init$builtin_bit(&$tmp1878, false);
                org$pandalanguage$pandac$ASTNode* $tmp1879 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1878);
                $tmp1877 = $tmp1879;
                $tmp1876 = $tmp1877;
                t1875 = $tmp1876;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1876));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1877));
                if (((panda$core$Bit) { t1875 == NULL }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1880 = result1860;
                        $returnValue1818 = $tmp1880;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1880));
                        $tmp1870 = 0;
                        goto $l1868;
                        $l1881:;
                        $tmp1814 = 3;
                        goto $l1812;
                        $l1882:;
                        return $returnValue1818;
                    }
                    }
                    $tmp1884 = NULL;
                    $returnValue1818 = $tmp1884;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1884));
                    $tmp1870 = 1;
                    goto $l1868;
                    $l1885:;
                    $tmp1814 = 4;
                    goto $l1812;
                    $l1886:;
                    return $returnValue1818;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1871, ((panda$core$Object*) t1875));
                $l1888:;
                panda$core$Int64$init$builtin_int64(&$tmp1892, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1891, $tmp1892);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1893 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1891);
                bool $tmp1890 = ((panda$core$Bit) { $tmp1893.nonnull }).value;
                if (!$tmp1890) goto $l1889;
                {
                    {
                        $tmp1894 = t1875;
                        panda$core$Bit$init$builtin_bit(&$tmp1897, false);
                        org$pandalanguage$pandac$ASTNode* $tmp1898 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1897);
                        $tmp1896 = $tmp1898;
                        $tmp1895 = $tmp1896;
                        t1875 = $tmp1895;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1895));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1896));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1894));
                    }
                    if (((panda$core$Bit) { t1875 == NULL }).value) {
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            $tmp1899 = result1860;
                            $returnValue1818 = $tmp1899;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1899));
                            $tmp1870 = 2;
                            goto $l1868;
                            $l1900:;
                            $tmp1814 = 5;
                            goto $l1812;
                            $l1901:;
                            return $returnValue1818;
                        }
                        }
                        $tmp1903 = NULL;
                        $returnValue1818 = $tmp1903;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1903));
                        $tmp1870 = 3;
                        goto $l1868;
                        $l1904:;
                        $tmp1814 = 6;
                        goto $l1812;
                        $l1905:;
                        return $returnValue1818;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children1871, ((panda$core$Object*) t1875));
                }
                goto $l1888;
                $l1889:;
                panda$core$Int64$init$builtin_int64(&$tmp1908, 63);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1907, $tmp1908);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1910 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1907, &$s1909);
                if (((panda$core$Bit) { !$tmp1910.nonnull }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1911 = result1860;
                        $returnValue1818 = $tmp1911;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
                        $tmp1870 = 4;
                        goto $l1868;
                        $l1912:;
                        $tmp1814 = 7;
                        goto $l1812;
                        $l1913:;
                        return $returnValue1818;
                    }
                    }
                    $tmp1915 = NULL;
                    $returnValue1818 = $tmp1915;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1915));
                    $tmp1870 = 5;
                    goto $l1868;
                    $l1916:;
                    $tmp1814 = 8;
                    goto $l1812;
                    $l1917:;
                    return $returnValue1818;
                }
                }
                {
                    $tmp1919 = result1860;
                    org$pandalanguage$pandac$ASTNode* $tmp1922 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1923, 19);
                    panda$collections$ImmutableArray* $tmp1925 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1871);
                    $tmp1924 = $tmp1925;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1922, $tmp1923, ((org$pandalanguage$pandac$parser$Token) start1824.value).position, finalName1856, $tmp1924);
                    $tmp1921 = $tmp1922;
                    $tmp1920 = $tmp1921;
                    result1860 = $tmp1920;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1920));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1921));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1924));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1919));
                }
                org$pandalanguage$pandac$parser$Parser$accept(self);
            }
            $tmp1870 = -1;
            goto $l1868;
            $l1868:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1875));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1871));
            children1871 = NULL;
            t1875 = NULL;
            switch ($tmp1870) {
                case 5: goto $l1916;
                case 1: goto $l1885;
                case -1: goto $l1926;
                case 0: goto $l1881;
                case 3: goto $l1904;
                case 4: goto $l1912;
                case 2: goto $l1900;
            }
            $l1926:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1928, 94);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1927, $tmp1928);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1929 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1927);
        if (((panda$core$Bit) { $tmp1929.nonnull }).value) {
        {
            {
                $tmp1930 = result1860;
                org$pandalanguage$pandac$ASTNode* $tmp1933 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1934, 29);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1933, $tmp1934, ((org$pandalanguage$pandac$parser$Token) start1824.value).position, result1860);
                $tmp1932 = $tmp1933;
                $tmp1931 = $tmp1932;
                result1860 = $tmp1931;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1931));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1932));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1930));
            }
        }
        }
        $tmp1935 = result1860;
        $returnValue1818 = $tmp1935;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1935));
        $tmp1814 = 9;
        goto $l1812;
        $l1936:;
        return $returnValue1818;
    }
    $l1812:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1860));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1856));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1832));
    name1832 = NULL;
    finalName1856 = NULL;
    result1860 = NULL;
    switch ($tmp1814) {
        case 7: goto $l1913;
        case 9: goto $l1936;
        case 5: goto $l1901;
        case 3: goto $l1882;
        case 1: goto $l1830;
        case 4: goto $l1886;
        case 8: goto $l1917;
        case 0: goto $l1822;
        case 6: goto $l1905;
        case 2: goto $l1850;
    }
    $l1938:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1942 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1943;
    org$pandalanguage$pandac$ASTNode* $tmp1944;
    org$pandalanguage$pandac$ASTNode* $returnValue1946;
    org$pandalanguage$pandac$ASTNode* $tmp1947;
    org$pandalanguage$pandac$parser$Token token1952;
    org$pandalanguage$pandac$parser$Token$Kind $match$801_131954;
    panda$core$Int64 $tmp1955;
    panda$core$Object* $tmp1960;
    panda$core$Bit $tmp1961;
    panda$collections$Array* args1963 = NULL;
    panda$collections$Array* $tmp1964;
    panda$collections$Array* $tmp1965;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1967;
    panda$core$Int64 $tmp1968;
    org$pandalanguage$pandac$ASTNode* expr1973 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1974;
    org$pandalanguage$pandac$ASTNode* $tmp1975;
    panda$core$Object* $tmp1977;
    org$pandalanguage$pandac$ASTNode* $tmp1979;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1987;
    panda$core$Int64 $tmp1988;
    org$pandalanguage$pandac$ASTNode* $tmp1990;
    org$pandalanguage$pandac$ASTNode* $tmp1991;
    org$pandalanguage$pandac$ASTNode* $tmp1992;
    panda$core$Object* $tmp1994;
    org$pandalanguage$pandac$ASTNode* $tmp1996;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2001;
    panda$core$Int64 $tmp2002;
    panda$core$Object* $tmp2005;
    org$pandalanguage$pandac$ASTNode* $tmp2007;
    panda$core$Object* $tmp2013;
    org$pandalanguage$pandac$ASTNode* $tmp2015;
    org$pandalanguage$pandac$ASTNode* $tmp2016;
    org$pandalanguage$pandac$ASTNode* $tmp2017;
    panda$core$Int64 $tmp2019;
    panda$collections$ImmutableArray* $tmp2020;
    panda$core$Int64 $tmp2023;
    org$pandalanguage$pandac$ASTNode* arg2028 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2029;
    org$pandalanguage$pandac$ASTNode* $tmp2030;
    org$pandalanguage$pandac$ASTNode* $tmp2032;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2036;
    panda$core$Int64 $tmp2037;
    org$pandalanguage$pandac$ASTNode* $tmp2040;
    org$pandalanguage$pandac$ASTNode* $tmp2044;
    org$pandalanguage$pandac$ASTNode* $tmp2045;
    org$pandalanguage$pandac$ASTNode* $tmp2046;
    panda$core$Int64 $tmp2048;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2049;
    panda$core$Int64 $tmp2050;
    panda$core$Int64 $tmp2052;
    panda$core$String* name2057 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2058;
    panda$core$Int64 $tmp2059;
    panda$core$String* $tmp2061;
    panda$core$String* $tmp2062;
    panda$core$String* $tmp2064;
    panda$core$String* $tmp2065;
    panda$core$String* $tmp2066;
    org$pandalanguage$pandac$ASTNode* $tmp2068;
    org$pandalanguage$pandac$ASTNode* $tmp2072;
    org$pandalanguage$pandac$ASTNode* $tmp2073;
    org$pandalanguage$pandac$ASTNode* $tmp2074;
    panda$core$Int64 $tmp2076;
    panda$core$Int64 $tmp2078;
    org$pandalanguage$pandac$ASTNode* target2083 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2084;
    org$pandalanguage$pandac$ASTNode* $tmp2085;
    org$pandalanguage$pandac$ASTNode* $tmp2087;
    org$pandalanguage$pandac$ASTNode* $tmp2091;
    org$pandalanguage$pandac$ASTNode* $tmp2092;
    org$pandalanguage$pandac$ASTNode* $tmp2093;
    panda$core$Int64 $tmp2095;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2096;
    panda$core$Int64 $tmp2097;
    panda$core$Int64 $tmp2099;
    panda$core$String* name2104 = NULL;
    panda$core$String* $tmp2105;
    panda$core$String* $tmp2106;
    panda$collections$Array* types2111 = NULL;
    panda$collections$Array* $tmp2112;
    panda$collections$Array* $tmp2113;
    org$pandalanguage$pandac$ASTNode* t2115 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2116;
    org$pandalanguage$pandac$ASTNode* $tmp2117;
    panda$core$Bit $tmp2118;
    org$pandalanguage$pandac$ASTNode* $tmp2120;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2128;
    panda$core$Int64 $tmp2129;
    org$pandalanguage$pandac$ASTNode* $tmp2131;
    org$pandalanguage$pandac$ASTNode* $tmp2132;
    org$pandalanguage$pandac$ASTNode* $tmp2133;
    panda$core$Bit $tmp2134;
    org$pandalanguage$pandac$ASTNode* $tmp2136;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2141;
    panda$core$Int64 $tmp2142;
    org$pandalanguage$pandac$ASTNode* $tmp2145;
    panda$core$Bit shouldAccept2150;
    panda$core$Object* $tmp2151;
    panda$core$Int64 $tmp2152;
    org$pandalanguage$pandac$parser$Token$Kind $match$906_292154;
    panda$core$Int64 $tmp2159;
    panda$core$Int64 $tmp2162;
    panda$core$Int64 $tmp2166;
    panda$core$Int64 $tmp2170;
    panda$core$Bit $tmp2173;
    panda$core$Bit $tmp2174;
    panda$core$Bit $tmp2175;
    org$pandalanguage$pandac$ASTNode* $tmp2176;
    org$pandalanguage$pandac$ASTNode* $tmp2177;
    org$pandalanguage$pandac$ASTNode* $tmp2178;
    panda$core$Int64 $tmp2180;
    panda$collections$ImmutableArray* $tmp2183;
    org$pandalanguage$pandac$ASTNode* $tmp2187;
    org$pandalanguage$pandac$ASTNode* $tmp2193;
    org$pandalanguage$pandac$ASTNode* $tmp2198;
    int $tmp1941;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1945 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1944 = $tmp1945;
        $tmp1943 = $tmp1944;
        result1942 = $tmp1943;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1943));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1944));
        if (((panda$core$Bit) { result1942 == NULL }).value) {
        {
            $tmp1947 = NULL;
            $returnValue1946 = $tmp1947;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1947));
            $tmp1941 = 0;
            goto $l1939;
            $l1948:;
            return $returnValue1946;
        }
        }
        $l1950:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1953 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token1952 = $tmp1953;
            {
                $match$801_131954 = token1952.kind;
                panda$core$Int64$init$builtin_int64(&$tmp1955, 103);
                panda$core$Bit $tmp1956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$801_131954.$rawValue, $tmp1955);
                if ($tmp1956.value) {
                {
                    int $tmp1959;
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp1961, true);
                        panda$core$Bit$wrapper* $tmp1962;
                        $tmp1962 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp1962->value = $tmp1961;
                        $tmp1960 = ((panda$core$Object*) $tmp1962);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp1960);
                        panda$core$Panda$unref$panda$core$Object($tmp1960);
                        panda$collections$Array* $tmp1966 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1966);
                        $tmp1965 = $tmp1966;
                        $tmp1964 = $tmp1965;
                        args1963 = $tmp1964;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1964));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1965));
                        panda$core$Int64$init$builtin_int64(&$tmp1968, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1967, $tmp1968);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1969 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1967);
                        if (((panda$core$Bit) { !$tmp1969.nonnull }).value) {
                        {
                            int $tmp1972;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1976 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1975 = $tmp1976;
                                $tmp1974 = $tmp1975;
                                expr1973 = $tmp1974;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1974));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1975));
                                if (((panda$core$Bit) { expr1973 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp1978 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1977 = $tmp1978;
                                    panda$core$Panda$unref$panda$core$Object($tmp1977);
                                    $tmp1979 = NULL;
                                    $returnValue1946 = $tmp1979;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1979));
                                    $tmp1972 = 0;
                                    goto $l1970;
                                    $l1980:;
                                    $tmp1959 = 0;
                                    goto $l1957;
                                    $l1981:;
                                    $tmp1941 = 1;
                                    goto $l1939;
                                    $l1982:;
                                    return $returnValue1946;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args1963, ((panda$core$Object*) expr1973));
                                $l1984:;
                                panda$core$Int64$init$builtin_int64(&$tmp1988, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1987, $tmp1988);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1989 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1987);
                                bool $tmp1986 = ((panda$core$Bit) { $tmp1989.nonnull }).value;
                                if (!$tmp1986) goto $l1985;
                                {
                                    {
                                        $tmp1990 = expr1973;
                                        org$pandalanguage$pandac$ASTNode* $tmp1993 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp1992 = $tmp1993;
                                        $tmp1991 = $tmp1992;
                                        expr1973 = $tmp1991;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1991));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1992));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1990));
                                    }
                                    if (((panda$core$Bit) { expr1973 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp1995 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp1994 = $tmp1995;
                                        panda$core$Panda$unref$panda$core$Object($tmp1994);
                                        $tmp1996 = NULL;
                                        $returnValue1946 = $tmp1996;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1996));
                                        $tmp1972 = 1;
                                        goto $l1970;
                                        $l1997:;
                                        $tmp1959 = 1;
                                        goto $l1957;
                                        $l1998:;
                                        $tmp1941 = 2;
                                        goto $l1939;
                                        $l1999:;
                                        return $returnValue1946;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args1963, ((panda$core$Object*) expr1973));
                                }
                                goto $l1984;
                                $l1985:;
                                panda$core$Int64$init$builtin_int64(&$tmp2002, 104);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2001, $tmp2002);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2004 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2001, &$s2003);
                                if (((panda$core$Bit) { !$tmp2004.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp2006 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2005 = $tmp2006;
                                    panda$core$Panda$unref$panda$core$Object($tmp2005);
                                    $tmp2007 = NULL;
                                    $returnValue1946 = $tmp2007;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2007));
                                    $tmp1972 = 2;
                                    goto $l1970;
                                    $l2008:;
                                    $tmp1959 = 2;
                                    goto $l1957;
                                    $l2009:;
                                    $tmp1941 = 3;
                                    goto $l1939;
                                    $l2010:;
                                    return $returnValue1946;
                                }
                                }
                            }
                            $tmp1972 = -1;
                            goto $l1970;
                            $l1970:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1973));
                            expr1973 = NULL;
                            switch ($tmp1972) {
                                case 0: goto $l1980;
                                case 2: goto $l2008;
                                case 1: goto $l1997;
                                case -1: goto $l2012;
                            }
                            $l2012:;
                        }
                        }
                        panda$core$Object* $tmp2014 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2013 = $tmp2014;
                        panda$core$Panda$unref$panda$core$Object($tmp2013);
                        {
                            $tmp2015 = result1942;
                            org$pandalanguage$pandac$ASTNode* $tmp2018 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2019, 8);
                            panda$collections$ImmutableArray* $tmp2021 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1963);
                            $tmp2020 = $tmp2021;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2018, $tmp2019, token1952.position, result1942, $tmp2020);
                            $tmp2017 = $tmp2018;
                            $tmp2016 = $tmp2017;
                            result1942 = $tmp2016;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2016));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2017));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2020));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2015));
                        }
                    }
                    $tmp1959 = -1;
                    goto $l1957;
                    $l1957:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1963));
                    args1963 = NULL;
                    switch ($tmp1959) {
                        case 2: goto $l2009;
                        case 0: goto $l1981;
                        case -1: goto $l2022;
                        case 1: goto $l1998;
                    }
                    $l2022:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2023, 101);
                panda$core$Bit $tmp2024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$801_131954.$rawValue, $tmp2023);
                if ($tmp2024.value) {
                {
                    int $tmp2027;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2031 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2030 = $tmp2031;
                        $tmp2029 = $tmp2030;
                        arg2028 = $tmp2029;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2029));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2030));
                        if (((panda$core$Bit) { arg2028 == NULL }).value) {
                        {
                            $tmp2032 = NULL;
                            $returnValue1946 = $tmp2032;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2032));
                            $tmp2027 = 0;
                            goto $l2025;
                            $l2033:;
                            $tmp1941 = 4;
                            goto $l1939;
                            $l2034:;
                            return $returnValue1946;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp2037, 102);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2036, $tmp2037);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2039 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2036, &$s2038);
                        if (((panda$core$Bit) { !$tmp2039.nonnull }).value) {
                        {
                            $tmp2040 = NULL;
                            $returnValue1946 = $tmp2040;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2040));
                            $tmp2027 = 1;
                            goto $l2025;
                            $l2041:;
                            $tmp1941 = 5;
                            goto $l1939;
                            $l2042:;
                            return $returnValue1946;
                        }
                        }
                        {
                            $tmp2044 = result1942;
                            org$pandalanguage$pandac$ASTNode* $tmp2047 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2048, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2050, 101);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2049, $tmp2050);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2047, $tmp2048, token1952.position, result1942, $tmp2049, arg2028);
                            $tmp2046 = $tmp2047;
                            $tmp2045 = $tmp2046;
                            result1942 = $tmp2045;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2045));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2046));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2044));
                        }
                    }
                    $tmp2027 = -1;
                    goto $l2025;
                    $l2025:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2028));
                    arg2028 = NULL;
                    switch ($tmp2027) {
                        case -1: goto $l2051;
                        case 1: goto $l2041;
                        case 0: goto $l2033;
                    }
                    $l2051:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2052, 98);
                panda$core$Bit $tmp2053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$801_131954.$rawValue, $tmp2052);
                if ($tmp2053.value) {
                {
                    int $tmp2056;
                    {
                        memset(&name2057, 0, sizeof(name2057));
                        panda$core$Int64$init$builtin_int64(&$tmp2059, 22);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2058, $tmp2059);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2060 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2058);
                        if (((panda$core$Bit) { $tmp2060.nonnull }).value) {
                        {
                            {
                                $tmp2061 = name2057;
                                $tmp2062 = &$s2063;
                                name2057 = $tmp2062;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2062));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2061));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp2064 = name2057;
                                panda$core$String* $tmp2067 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp2066 = $tmp2067;
                                $tmp2065 = $tmp2066;
                                name2057 = $tmp2065;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2065));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2066));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2064));
                            }
                            if (((panda$core$Bit) { name2057 == NULL }).value) {
                            {
                                $tmp2068 = NULL;
                                $returnValue1946 = $tmp2068;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2068));
                                $tmp2056 = 0;
                                goto $l2054;
                                $l2069:;
                                $tmp1941 = 6;
                                goto $l1939;
                                $l2070:;
                                return $returnValue1946;
                            }
                            }
                        }
                        }
                        {
                            $tmp2072 = result1942;
                            org$pandalanguage$pandac$ASTNode* $tmp2075 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2076, 15);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2075, $tmp2076, token1952.position, result1942, name2057);
                            $tmp2074 = $tmp2075;
                            $tmp2073 = $tmp2074;
                            result1942 = $tmp2073;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2073));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2074));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2072));
                        }
                    }
                    $tmp2056 = -1;
                    goto $l2054;
                    $l2054:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2057));
                    switch ($tmp2056) {
                        case -1: goto $l2077;
                        case 0: goto $l2069;
                    }
                    $l2077:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2078, 89);
                panda$core$Bit $tmp2079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$801_131954.$rawValue, $tmp2078);
                if ($tmp2079.value) {
                {
                    int $tmp2082;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2086 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2085 = $tmp2086;
                        $tmp2084 = $tmp2085;
                        target2083 = $tmp2084;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2084));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2085));
                        if (((panda$core$Bit) { target2083 == NULL }).value) {
                        {
                            $tmp2087 = NULL;
                            $returnValue1946 = $tmp2087;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2087));
                            $tmp2082 = 0;
                            goto $l2080;
                            $l2088:;
                            $tmp1941 = 7;
                            goto $l1939;
                            $l2089:;
                            return $returnValue1946;
                        }
                        }
                        {
                            $tmp2091 = result1942;
                            org$pandalanguage$pandac$ASTNode* $tmp2094 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2095, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2097, 89);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2096, $tmp2097);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2094, $tmp2095, token1952.position, result1942, $tmp2096, target2083);
                            $tmp2093 = $tmp2094;
                            $tmp2092 = $tmp2093;
                            result1942 = $tmp2092;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2092));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2093));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2091));
                        }
                    }
                    $tmp2082 = -1;
                    goto $l2080;
                    $l2080:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2083));
                    target2083 = NULL;
                    switch ($tmp2082) {
                        case 0: goto $l2088;
                        case -1: goto $l2098;
                    }
                    $l2098:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2099, 62);
                panda$core$Bit $tmp2100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$801_131954.$rawValue, $tmp2099);
                if ($tmp2100.value) {
                {
                    int $tmp2103;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1952);
                        panda$core$String* $tmp2107 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result1942);
                        $tmp2106 = $tmp2107;
                        $tmp2105 = $tmp2106;
                        name2104 = $tmp2105;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2105));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2106));
                        if (((panda$core$Bit) { name2104 != NULL }).value) {
                        {
                            int $tmp2110;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp2114 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp2114);
                                $tmp2113 = $tmp2114;
                                $tmp2112 = $tmp2113;
                                types2111 = $tmp2112;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2112));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
                                panda$core$Bit$init$builtin_bit(&$tmp2118, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2119 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2118);
                                $tmp2117 = $tmp2119;
                                $tmp2116 = $tmp2117;
                                t2115 = $tmp2116;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2116));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2117));
                                if (((panda$core$Bit) { t2115 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2120 = result1942;
                                    $returnValue1946 = $tmp2120;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2120));
                                    $tmp2110 = 0;
                                    goto $l2108;
                                    $l2121:;
                                    $tmp2103 = 0;
                                    goto $l2101;
                                    $l2122:;
                                    $tmp1941 = 8;
                                    goto $l1939;
                                    $l2123:;
                                    return $returnValue1946;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types2111, ((panda$core$Object*) t2115));
                                $l2125:;
                                panda$core$Int64$init$builtin_int64(&$tmp2129, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2128, $tmp2129);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2130 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2128);
                                bool $tmp2127 = ((panda$core$Bit) { $tmp2130.nonnull }).value;
                                if (!$tmp2127) goto $l2126;
                                {
                                    {
                                        $tmp2131 = t2115;
                                        panda$core$Bit$init$builtin_bit(&$tmp2134, false);
                                        org$pandalanguage$pandac$ASTNode* $tmp2135 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2134);
                                        $tmp2133 = $tmp2135;
                                        $tmp2132 = $tmp2133;
                                        t2115 = $tmp2132;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2132));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2133));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2131));
                                    }
                                    if (((panda$core$Bit) { t2115 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp2136 = result1942;
                                        $returnValue1946 = $tmp2136;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2136));
                                        $tmp2110 = 1;
                                        goto $l2108;
                                        $l2137:;
                                        $tmp2103 = 1;
                                        goto $l2101;
                                        $l2138:;
                                        $tmp1941 = 9;
                                        goto $l1939;
                                        $l2139:;
                                        return $returnValue1946;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types2111, ((panda$core$Object*) t2115));
                                }
                                goto $l2125;
                                $l2126:;
                                panda$core$Int64$init$builtin_int64(&$tmp2142, 63);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2141, $tmp2142);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2144 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2141, &$s2143);
                                if (((panda$core$Bit) { !$tmp2144.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2145 = result1942;
                                    $returnValue1946 = $tmp2145;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2145));
                                    $tmp2110 = 2;
                                    goto $l2108;
                                    $l2146:;
                                    $tmp2103 = 2;
                                    goto $l2101;
                                    $l2147:;
                                    $tmp1941 = 10;
                                    goto $l1939;
                                    $l2148:;
                                    return $returnValue1946;
                                }
                                }
                                memset(&shouldAccept2150, 0, sizeof(shouldAccept2150));
                                panda$core$Int64$init$builtin_int64(&$tmp2152, 0);
                                panda$core$Object* $tmp2153 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2152);
                                $tmp2151 = $tmp2153;
                                panda$core$Panda$unref$panda$core$Object($tmp2151);
                                if (((panda$core$Bit$wrapper*) $tmp2151)->value.value) {
                                {
                                    {
                                        org$pandalanguage$pandac$parser$Token $tmp2155 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                                        $match$906_292154 = $tmp2155.kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2159, 98);
                                        panda$core$Bit $tmp2160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$906_292154.$rawValue, $tmp2159);
                                        bool $tmp2158 = $tmp2160.value;
                                        if ($tmp2158) goto $l2161;
                                        panda$core$Int64$init$builtin_int64(&$tmp2162, 103);
                                        panda$core$Bit $tmp2163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$906_292154.$rawValue, $tmp2162);
                                        $tmp2158 = $tmp2163.value;
                                        $l2161:;
                                        panda$core$Bit $tmp2164 = { $tmp2158 };
                                        bool $tmp2157 = $tmp2164.value;
                                        if ($tmp2157) goto $l2165;
                                        panda$core$Int64$init$builtin_int64(&$tmp2166, 105);
                                        panda$core$Bit $tmp2167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$906_292154.$rawValue, $tmp2166);
                                        $tmp2157 = $tmp2167.value;
                                        $l2165:;
                                        panda$core$Bit $tmp2168 = { $tmp2157 };
                                        bool $tmp2156 = $tmp2168.value;
                                        if ($tmp2156) goto $l2169;
                                        panda$core$Int64$init$builtin_int64(&$tmp2170, 89);
                                        panda$core$Bit $tmp2171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$906_292154.$rawValue, $tmp2170);
                                        $tmp2156 = $tmp2171.value;
                                        $l2169:;
                                        panda$core$Bit $tmp2172 = { $tmp2156 };
                                        if ($tmp2172.value) {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2173, true);
                                            shouldAccept2150 = $tmp2173;
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2174, false);
                                            shouldAccept2150 = $tmp2174;
                                        }
                                        }
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2175, true);
                                    shouldAccept2150 = $tmp2175;
                                }
                                }
                                if (shouldAccept2150.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp2176 = result1942;
                                        org$pandalanguage$pandac$ASTNode* $tmp2179 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        panda$core$Int64$init$builtin_int64(&$tmp2180, 19);
                                        org$pandalanguage$pandac$Position $tmp2182 = (($fn2181) result1942->$class->vtable[2])(result1942);
                                        panda$collections$ImmutableArray* $tmp2184 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types2111);
                                        $tmp2183 = $tmp2184;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2179, $tmp2180, $tmp2182, name2104, $tmp2183);
                                        $tmp2178 = $tmp2179;
                                        $tmp2177 = $tmp2178;
                                        result1942 = $tmp2177;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2177));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2178));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2183));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
                                    }
                                    $tmp2110 = 3;
                                    goto $l2108;
                                    $l2185:;
                                    $tmp2103 = 3;
                                    goto $l2101;
                                    $l2186:;
                                    goto $l1950;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2187 = result1942;
                                    $returnValue1946 = $tmp2187;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2187));
                                    $tmp2110 = 4;
                                    goto $l2108;
                                    $l2188:;
                                    $tmp2103 = 4;
                                    goto $l2101;
                                    $l2189:;
                                    $tmp1941 = 11;
                                    goto $l1939;
                                    $l2190:;
                                    return $returnValue1946;
                                }
                                }
                            }
                            $tmp2110 = -1;
                            goto $l2108;
                            $l2108:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2115));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types2111));
                            types2111 = NULL;
                            t2115 = NULL;
                            switch ($tmp2110) {
                                case -1: goto $l2192;
                                case 0: goto $l2121;
                                case 4: goto $l2188;
                                case 3: goto $l2185;
                                case 1: goto $l2137;
                                case 2: goto $l2146;
                            }
                            $l2192:;
                        }
                        }
                        $tmp2193 = result1942;
                        $returnValue1946 = $tmp2193;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2193));
                        $tmp2103 = 5;
                        goto $l2101;
                        $l2194:;
                        $tmp1941 = 12;
                        goto $l1939;
                        $l2195:;
                        return $returnValue1946;
                    }
                    $l2101:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2104));
                    name2104 = NULL;
                    switch ($tmp2103) {
                        case 5: goto $l2194;
                        case 1: goto $l2138;
                        case 0: goto $l2122;
                        case 2: goto $l2147;
                        case 3: goto $l2186;
                        case 4: goto $l2189;
                    }
                    $l2197:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1952);
                    $tmp2198 = result1942;
                    $returnValue1946 = $tmp2198;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2198));
                    $tmp1941 = 13;
                    goto $l1939;
                    $l2199:;
                    return $returnValue1946;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l1951:;
    }
    $tmp1941 = -1;
    goto $l1939;
    $l1939:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1942));
    result1942 = NULL;
    switch ($tmp1941) {
        case -1: goto $l2201;
        case 9: goto $l2139;
        case 3: goto $l2010;
        case 13: goto $l2199;
        case 10: goto $l2148;
        case 12: goto $l2195;
        case 5: goto $l2042;
        case 1: goto $l1982;
        case 6: goto $l2070;
        case 8: goto $l2123;
        case 2: goto $l1999;
        case 0: goto $l1948;
        case 7: goto $l2089;
        case 4: goto $l2034;
        case 11: goto $l2190;
    }
    $l2201:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2205 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2206;
    org$pandalanguage$pandac$ASTNode* $tmp2207;
    org$pandalanguage$pandac$ASTNode* $returnValue2209;
    org$pandalanguage$pandac$ASTNode* $tmp2210;
    org$pandalanguage$pandac$parser$Token$nullable op2218;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2219;
    panda$core$Int64 $tmp2220;
    org$pandalanguage$pandac$ASTNode* next2223 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2224;
    org$pandalanguage$pandac$ASTNode* $tmp2225;
    org$pandalanguage$pandac$ASTNode* $tmp2227;
    org$pandalanguage$pandac$ASTNode* $tmp2231;
    org$pandalanguage$pandac$ASTNode* $tmp2232;
    org$pandalanguage$pandac$ASTNode* $tmp2233;
    panda$core$Int64 $tmp2235;
    org$pandalanguage$pandac$ASTNode* $tmp2237;
    int $tmp2204;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2208 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2207 = $tmp2208;
        $tmp2206 = $tmp2207;
        result2205 = $tmp2206;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2207));
        if (((panda$core$Bit) { result2205 == NULL }).value) {
        {
            $tmp2210 = NULL;
            $returnValue2209 = $tmp2210;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2210));
            $tmp2204 = 0;
            goto $l2202;
            $l2211:;
            return $returnValue2209;
        }
        }
        $l2213:;
        while (true) {
        {
            int $tmp2217;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2220, 57);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2219, $tmp2220);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2221 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2219);
                op2218 = $tmp2221;
                if (((panda$core$Bit) { !op2218.nonnull }).value) {
                {
                    $tmp2217 = 0;
                    goto $l2215;
                    $l2222:;
                    goto $l2214;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2226 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2225 = $tmp2226;
                $tmp2224 = $tmp2225;
                next2223 = $tmp2224;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2224));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2225));
                if (((panda$core$Bit) { next2223 == NULL }).value) {
                {
                    $tmp2227 = NULL;
                    $returnValue2209 = $tmp2227;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2227));
                    $tmp2217 = 1;
                    goto $l2215;
                    $l2228:;
                    $tmp2204 = 1;
                    goto $l2202;
                    $l2229:;
                    return $returnValue2209;
                }
                }
                {
                    $tmp2231 = result2205;
                    org$pandalanguage$pandac$ASTNode* $tmp2234 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2235, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2234, $tmp2235, ((org$pandalanguage$pandac$parser$Token) op2218.value).position, result2205, ((org$pandalanguage$pandac$parser$Token) op2218.value).kind, next2223);
                    $tmp2233 = $tmp2234;
                    $tmp2232 = $tmp2233;
                    result2205 = $tmp2232;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2232));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2233));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2231));
                }
            }
            $tmp2217 = -1;
            goto $l2215;
            $l2215:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2223));
            next2223 = NULL;
            switch ($tmp2217) {
                case 0: goto $l2222;
                case 1: goto $l2228;
                case -1: goto $l2236;
            }
            $l2236:;
        }
        }
        $l2214:;
        $tmp2237 = result2205;
        $returnValue2209 = $tmp2237;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2237));
        $tmp2204 = 2;
        goto $l2202;
        $l2238:;
        return $returnValue2209;
    }
    $l2202:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2205));
    result2205 = NULL;
    switch ($tmp2204) {
        case 1: goto $l2229;
        case 2: goto $l2238;
        case 0: goto $l2211;
    }
    $l2240:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op2241;
    org$pandalanguage$pandac$parser$Token$Kind $match$962_92243;
    panda$core$Int64 $tmp2246;
    panda$core$Int64 $tmp2249;
    panda$core$Int64 $tmp2253;
    org$pandalanguage$pandac$ASTNode* base2259 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2260;
    org$pandalanguage$pandac$ASTNode* $tmp2261;
    org$pandalanguage$pandac$ASTNode* $returnValue2263;
    org$pandalanguage$pandac$ASTNode* $tmp2264;
    org$pandalanguage$pandac$ASTNode* $tmp2267;
    org$pandalanguage$pandac$ASTNode* $tmp2268;
    panda$core$Int64 $tmp2270;
    org$pandalanguage$pandac$ASTNode* $tmp2274;
    org$pandalanguage$pandac$ASTNode* $tmp2275;
    org$pandalanguage$pandac$parser$Token $tmp2242 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op2241 = $tmp2242;
    {
        $match$962_92243 = op2241.kind;
        panda$core$Int64$init$builtin_int64(&$tmp2246, 52);
        panda$core$Bit $tmp2247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$962_92243.$rawValue, $tmp2246);
        bool $tmp2245 = $tmp2247.value;
        if ($tmp2245) goto $l2248;
        panda$core$Int64$init$builtin_int64(&$tmp2249, 49);
        panda$core$Bit $tmp2250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$962_92243.$rawValue, $tmp2249);
        $tmp2245 = $tmp2250.value;
        $l2248:;
        panda$core$Bit $tmp2251 = { $tmp2245 };
        bool $tmp2244 = $tmp2251.value;
        if ($tmp2244) goto $l2252;
        panda$core$Int64$init$builtin_int64(&$tmp2253, 50);
        panda$core$Bit $tmp2254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$962_92243.$rawValue, $tmp2253);
        $tmp2244 = $tmp2254.value;
        $l2252:;
        panda$core$Bit $tmp2255 = { $tmp2244 };
        if ($tmp2255.value) {
        {
            int $tmp2258;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2262 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2261 = $tmp2262;
                $tmp2260 = $tmp2261;
                base2259 = $tmp2260;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2260));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2261));
                if (((panda$core$Bit) { base2259 == NULL }).value) {
                {
                    $tmp2264 = NULL;
                    $returnValue2263 = $tmp2264;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2264));
                    $tmp2258 = 0;
                    goto $l2256;
                    $l2265:;
                    return $returnValue2263;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2269 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2270, 32);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2269, $tmp2270, op2241.position, op2241.kind, base2259);
                $tmp2268 = $tmp2269;
                $tmp2267 = $tmp2268;
                $returnValue2263 = $tmp2267;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2267));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2268));
                $tmp2258 = 1;
                goto $l2256;
                $l2271:;
                return $returnValue2263;
            }
            $l2256:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base2259));
            base2259 = NULL;
            switch ($tmp2258) {
                case 0: goto $l2265;
                case 1: goto $l2271;
            }
            $l2273:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2241);
            org$pandalanguage$pandac$ASTNode* $tmp2276 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2275 = $tmp2276;
            $tmp2274 = $tmp2275;
            $returnValue2263 = $tmp2274;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2274));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2275));
            return $returnValue2263;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2281 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2282;
    org$pandalanguage$pandac$ASTNode* $tmp2283;
    org$pandalanguage$pandac$ASTNode* $returnValue2285;
    org$pandalanguage$pandac$ASTNode* $tmp2286;
    org$pandalanguage$pandac$parser$Token op2291;
    org$pandalanguage$pandac$parser$Token$Kind $match$988_132293;
    panda$core$Int64 $tmp2300;
    panda$core$Int64 $tmp2303;
    panda$core$Int64 $tmp2307;
    panda$core$Int64 $tmp2311;
    panda$core$Int64 $tmp2315;
    panda$core$Int64 $tmp2319;
    panda$core$Int64 $tmp2323;
    org$pandalanguage$pandac$ASTNode* next2329 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2330;
    org$pandalanguage$pandac$ASTNode* $tmp2331;
    org$pandalanguage$pandac$ASTNode* $tmp2333;
    org$pandalanguage$pandac$ASTNode* $tmp2337;
    org$pandalanguage$pandac$ASTNode* $tmp2338;
    org$pandalanguage$pandac$ASTNode* $tmp2339;
    panda$core$Int64 $tmp2341;
    panda$core$Int64 $tmp2343;
    org$pandalanguage$pandac$parser$Token nextToken2345;
    panda$core$Int64 $tmp2347;
    org$pandalanguage$pandac$ASTNode* next2352 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2353;
    org$pandalanguage$pandac$ASTNode* $tmp2354;
    org$pandalanguage$pandac$ASTNode* $tmp2356;
    org$pandalanguage$pandac$ASTNode* $tmp2360;
    org$pandalanguage$pandac$ASTNode* $tmp2361;
    org$pandalanguage$pandac$ASTNode* $tmp2362;
    panda$core$Int64 $tmp2364;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2365;
    panda$core$Int64 $tmp2366;
    org$pandalanguage$pandac$ASTNode* $tmp2368;
    org$pandalanguage$pandac$ASTNode* $tmp2371;
    int $tmp2280;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2284 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2283 = $tmp2284;
        $tmp2282 = $tmp2283;
        result2281 = $tmp2282;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2282));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2283));
        if (((panda$core$Bit) { result2281 == NULL }).value) {
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
        $l2289:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2292 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2291 = $tmp2292;
            {
                $match$988_132293 = op2291.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2300, 53);
                panda$core$Bit $tmp2301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$988_132293.$rawValue, $tmp2300);
                bool $tmp2299 = $tmp2301.value;
                if ($tmp2299) goto $l2302;
                panda$core$Int64$init$builtin_int64(&$tmp2303, 54);
                panda$core$Bit $tmp2304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$988_132293.$rawValue, $tmp2303);
                $tmp2299 = $tmp2304.value;
                $l2302:;
                panda$core$Bit $tmp2305 = { $tmp2299 };
                bool $tmp2298 = $tmp2305.value;
                if ($tmp2298) goto $l2306;
                panda$core$Int64$init$builtin_int64(&$tmp2307, 55);
                panda$core$Bit $tmp2308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$988_132293.$rawValue, $tmp2307);
                $tmp2298 = $tmp2308.value;
                $l2306:;
                panda$core$Bit $tmp2309 = { $tmp2298 };
                bool $tmp2297 = $tmp2309.value;
                if ($tmp2297) goto $l2310;
                panda$core$Int64$init$builtin_int64(&$tmp2311, 56);
                panda$core$Bit $tmp2312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$988_132293.$rawValue, $tmp2311);
                $tmp2297 = $tmp2312.value;
                $l2310:;
                panda$core$Bit $tmp2313 = { $tmp2297 };
                bool $tmp2296 = $tmp2313.value;
                if ($tmp2296) goto $l2314;
                panda$core$Int64$init$builtin_int64(&$tmp2315, 72);
                panda$core$Bit $tmp2316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$988_132293.$rawValue, $tmp2315);
                $tmp2296 = $tmp2316.value;
                $l2314:;
                panda$core$Bit $tmp2317 = { $tmp2296 };
                bool $tmp2295 = $tmp2317.value;
                if ($tmp2295) goto $l2318;
                panda$core$Int64$init$builtin_int64(&$tmp2319, 67);
                panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$988_132293.$rawValue, $tmp2319);
                $tmp2295 = $tmp2320.value;
                $l2318:;
                panda$core$Bit $tmp2321 = { $tmp2295 };
                bool $tmp2294 = $tmp2321.value;
                if ($tmp2294) goto $l2322;
                panda$core$Int64$init$builtin_int64(&$tmp2323, 69);
                panda$core$Bit $tmp2324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$988_132293.$rawValue, $tmp2323);
                $tmp2294 = $tmp2324.value;
                $l2322:;
                panda$core$Bit $tmp2325 = { $tmp2294 };
                if ($tmp2325.value) {
                {
                    int $tmp2328;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2332 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2331 = $tmp2332;
                        $tmp2330 = $tmp2331;
                        next2329 = $tmp2330;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2330));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2331));
                        if (((panda$core$Bit) { next2329 == NULL }).value) {
                        {
                            $tmp2333 = NULL;
                            $returnValue2285 = $tmp2333;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2333));
                            $tmp2328 = 0;
                            goto $l2326;
                            $l2334:;
                            $tmp2280 = 1;
                            goto $l2278;
                            $l2335:;
                            return $returnValue2285;
                        }
                        }
                        {
                            $tmp2337 = result2281;
                            org$pandalanguage$pandac$ASTNode* $tmp2340 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2341, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2340, $tmp2341, op2291.position, result2281, op2291.kind, next2329);
                            $tmp2339 = $tmp2340;
                            $tmp2338 = $tmp2339;
                            result2281 = $tmp2338;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2338));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2339));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2337));
                        }
                    }
                    $tmp2328 = -1;
                    goto $l2326;
                    $l2326:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2329));
                    next2329 = NULL;
                    switch ($tmp2328) {
                        case 0: goto $l2334;
                        case -1: goto $l2342;
                    }
                    $l2342:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2343, 63);
                panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$988_132293.$rawValue, $tmp2343);
                if ($tmp2344.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2346 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken2345 = $tmp2346;
                    panda$core$Int64$init$builtin_int64(&$tmp2347, 63);
                    panda$core$Bit $tmp2348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken2345.kind.$rawValue, $tmp2347);
                    if ($tmp2348.value) {
                    {
                        int $tmp2351;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2355 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2354 = $tmp2355;
                            $tmp2353 = $tmp2354;
                            next2352 = $tmp2353;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2353));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2354));
                            if (((panda$core$Bit) { next2352 == NULL }).value) {
                            {
                                $tmp2356 = NULL;
                                $returnValue2285 = $tmp2356;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2356));
                                $tmp2351 = 0;
                                goto $l2349;
                                $l2357:;
                                $tmp2280 = 2;
                                goto $l2278;
                                $l2358:;
                                return $returnValue2285;
                            }
                            }
                            {
                                $tmp2360 = result2281;
                                org$pandalanguage$pandac$ASTNode* $tmp2363 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp2364, 4);
                                panda$core$Int64$init$builtin_int64(&$tmp2366, 1);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2365, $tmp2366);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2363, $tmp2364, op2291.position, result2281, $tmp2365, next2352);
                                $tmp2362 = $tmp2363;
                                $tmp2361 = $tmp2362;
                                result2281 = $tmp2361;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2361));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2362));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2360));
                            }
                        }
                        $tmp2351 = -1;
                        goto $l2349;
                        $l2349:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2352));
                        next2352 = NULL;
                        switch ($tmp2351) {
                            case 0: goto $l2357;
                            case -1: goto $l2367;
                        }
                        $l2367:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken2345);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2291);
                        $tmp2368 = result2281;
                        $returnValue2285 = $tmp2368;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2368));
                        $tmp2280 = 3;
                        goto $l2278;
                        $l2369:;
                        return $returnValue2285;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2291);
                    $tmp2371 = result2281;
                    $returnValue2285 = $tmp2371;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2371));
                    $tmp2280 = 4;
                    goto $l2278;
                    $l2372:;
                    return $returnValue2285;
                }
                }
                }
            }
        }
        }
        $l2290:;
    }
    $tmp2280 = -1;
    goto $l2278;
    $l2278:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2281));
    result2281 = NULL;
    switch ($tmp2280) {
        case -1: goto $l2374;
        case 1: goto $l2335;
        case 4: goto $l2372;
        case 2: goto $l2358;
        case 0: goto $l2287;
        case 3: goto $l2369;
    }
    $l2374:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2378 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2379;
    org$pandalanguage$pandac$ASTNode* $tmp2380;
    org$pandalanguage$pandac$ASTNode* $returnValue2382;
    org$pandalanguage$pandac$ASTNode* $tmp2383;
    org$pandalanguage$pandac$parser$Token op2388;
    org$pandalanguage$pandac$parser$Token$Kind $match$1029_132390;
    panda$core$Int64 $tmp2393;
    panda$core$Int64 $tmp2396;
    panda$core$Int64 $tmp2400;
    org$pandalanguage$pandac$ASTNode* next2406 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2407;
    org$pandalanguage$pandac$ASTNode* $tmp2408;
    org$pandalanguage$pandac$ASTNode* $tmp2410;
    org$pandalanguage$pandac$ASTNode* $tmp2414;
    org$pandalanguage$pandac$ASTNode* $tmp2415;
    org$pandalanguage$pandac$ASTNode* $tmp2416;
    panda$core$Int64 $tmp2418;
    org$pandalanguage$pandac$ASTNode* $tmp2420;
    int $tmp2377;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2381 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2380 = $tmp2381;
        $tmp2379 = $tmp2380;
        result2378 = $tmp2379;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2380));
        if (((panda$core$Bit) { result2378 == NULL }).value) {
        {
            $tmp2383 = NULL;
            $returnValue2382 = $tmp2383;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2383));
            $tmp2377 = 0;
            goto $l2375;
            $l2384:;
            return $returnValue2382;
        }
        }
        $l2386:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2389 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2388 = $tmp2389;
            {
                $match$1029_132390 = op2388.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2393, 51);
                panda$core$Bit $tmp2394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1029_132390.$rawValue, $tmp2393);
                bool $tmp2392 = $tmp2394.value;
                if ($tmp2392) goto $l2395;
                panda$core$Int64$init$builtin_int64(&$tmp2396, 52);
                panda$core$Bit $tmp2397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1029_132390.$rawValue, $tmp2396);
                $tmp2392 = $tmp2397.value;
                $l2395:;
                panda$core$Bit $tmp2398 = { $tmp2392 };
                bool $tmp2391 = $tmp2398.value;
                if ($tmp2391) goto $l2399;
                panda$core$Int64$init$builtin_int64(&$tmp2400, 71);
                panda$core$Bit $tmp2401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1029_132390.$rawValue, $tmp2400);
                $tmp2391 = $tmp2401.value;
                $l2399:;
                panda$core$Bit $tmp2402 = { $tmp2391 };
                if ($tmp2402.value) {
                {
                    int $tmp2405;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2409 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2408 = $tmp2409;
                        $tmp2407 = $tmp2408;
                        next2406 = $tmp2407;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2407));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2408));
                        if (((panda$core$Bit) { next2406 == NULL }).value) {
                        {
                            $tmp2410 = NULL;
                            $returnValue2382 = $tmp2410;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2410));
                            $tmp2405 = 0;
                            goto $l2403;
                            $l2411:;
                            $tmp2377 = 1;
                            goto $l2375;
                            $l2412:;
                            return $returnValue2382;
                        }
                        }
                        {
                            $tmp2414 = result2378;
                            org$pandalanguage$pandac$ASTNode* $tmp2417 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2418, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2417, $tmp2418, op2388.position, result2378, op2388.kind, next2406);
                            $tmp2416 = $tmp2417;
                            $tmp2415 = $tmp2416;
                            result2378 = $tmp2415;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2415));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2416));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2414));
                        }
                    }
                    $tmp2405 = -1;
                    goto $l2403;
                    $l2403:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2406));
                    next2406 = NULL;
                    switch ($tmp2405) {
                        case 0: goto $l2411;
                        case -1: goto $l2419;
                    }
                    $l2419:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2388);
                    $tmp2420 = result2378;
                    $returnValue2382 = $tmp2420;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2420));
                    $tmp2377 = 2;
                    goto $l2375;
                    $l2421:;
                    return $returnValue2382;
                }
                }
            }
        }
        }
        $l2387:;
    }
    $tmp2377 = -1;
    goto $l2375;
    $l2375:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2378));
    result2378 = NULL;
    switch ($tmp2377) {
        case 2: goto $l2421;
        case -1: goto $l2423;
        case 1: goto $l2412;
        case 0: goto $l2384;
    }
    $l2423:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2427 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$1049_92428;
    panda$core$Int64 $tmp2431;
    panda$core$Int64 $tmp2434;
    org$pandalanguage$pandac$ASTNode* $tmp2437;
    org$pandalanguage$pandac$ASTNode* $tmp2438;
    org$pandalanguage$pandac$ASTNode* $tmp2439;
    org$pandalanguage$pandac$ASTNode* $tmp2440;
    org$pandalanguage$pandac$ASTNode* $tmp2441;
    org$pandalanguage$pandac$ASTNode* $returnValue2443;
    org$pandalanguage$pandac$ASTNode* $tmp2444;
    org$pandalanguage$pandac$parser$Token op2447;
    org$pandalanguage$pandac$parser$Token$Kind $match$1059_92449;
    panda$core$Int64 $tmp2451;
    panda$core$Int64 $tmp2454;
    org$pandalanguage$pandac$parser$Token next2460;
    org$pandalanguage$pandac$ASTNode* right2462 = NULL;
    panda$core$Int64 $tmp2465;
    panda$core$Int64 $tmp2468;
    panda$core$Int64 $tmp2472;
    org$pandalanguage$pandac$ASTNode* $tmp2475;
    org$pandalanguage$pandac$ASTNode* $tmp2476;
    org$pandalanguage$pandac$ASTNode* $tmp2477;
    org$pandalanguage$pandac$ASTNode* $tmp2479;
    org$pandalanguage$pandac$ASTNode* $tmp2483;
    org$pandalanguage$pandac$ASTNode* $tmp2484;
    org$pandalanguage$pandac$ASTNode* step2485 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2486;
    panda$core$Int64 $tmp2487;
    org$pandalanguage$pandac$ASTNode* $tmp2489;
    org$pandalanguage$pandac$ASTNode* $tmp2490;
    org$pandalanguage$pandac$ASTNode* $tmp2491;
    org$pandalanguage$pandac$ASTNode* $tmp2493;
    org$pandalanguage$pandac$ASTNode* $tmp2497;
    org$pandalanguage$pandac$ASTNode* $tmp2498;
    org$pandalanguage$pandac$ASTNode* $tmp2499;
    org$pandalanguage$pandac$ASTNode* $tmp2500;
    panda$core$Int64 $tmp2502;
    panda$core$Int64 $tmp2503;
    org$pandalanguage$pandac$ASTNode* $tmp2509;
    int $tmp2426;
    {
        memset(&result2427, 0, sizeof(result2427));
        {
            org$pandalanguage$pandac$parser$Token $tmp2429 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1049_92428 = $tmp2429.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2431, 97);
            panda$core$Bit $tmp2432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1049_92428.$rawValue, $tmp2431);
            bool $tmp2430 = $tmp2432.value;
            if ($tmp2430) goto $l2433;
            panda$core$Int64$init$builtin_int64(&$tmp2434, 96);
            panda$core$Bit $tmp2435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1049_92428.$rawValue, $tmp2434);
            $tmp2430 = $tmp2435.value;
            $l2433:;
            panda$core$Bit $tmp2436 = { $tmp2430 };
            if ($tmp2436.value) {
            {
                {
                    $tmp2437 = result2427;
                    $tmp2438 = NULL;
                    result2427 = $tmp2438;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2438));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2437));
                }
            }
            }
            else {
            {
                {
                    $tmp2439 = result2427;
                    org$pandalanguage$pandac$ASTNode* $tmp2442 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2441 = $tmp2442;
                    $tmp2440 = $tmp2441;
                    result2427 = $tmp2440;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2440));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2441));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2439));
                }
                if (((panda$core$Bit) { result2427 == NULL }).value) {
                {
                    $tmp2444 = NULL;
                    $returnValue2443 = $tmp2444;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2444));
                    $tmp2426 = 0;
                    goto $l2424;
                    $l2445:;
                    return $returnValue2443;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp2448 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op2447 = $tmp2448;
        {
            $match$1059_92449 = op2447.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2451, 97);
            panda$core$Bit $tmp2452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1059_92449.$rawValue, $tmp2451);
            bool $tmp2450 = $tmp2452.value;
            if ($tmp2450) goto $l2453;
            panda$core$Int64$init$builtin_int64(&$tmp2454, 96);
            panda$core$Bit $tmp2455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1059_92449.$rawValue, $tmp2454);
            $tmp2450 = $tmp2455.value;
            $l2453:;
            panda$core$Bit $tmp2456 = { $tmp2450 };
            if ($tmp2456.value) {
            {
                int $tmp2459;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2461 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next2460 = $tmp2461;
                    memset(&right2462, 0, sizeof(right2462));
                    panda$core$Int64$init$builtin_int64(&$tmp2465, 102);
                    panda$core$Bit $tmp2466 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2460.kind.$rawValue, $tmp2465);
                    bool $tmp2464 = $tmp2466.value;
                    if (!$tmp2464) goto $l2467;
                    panda$core$Int64$init$builtin_int64(&$tmp2468, 104);
                    panda$core$Bit $tmp2469 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2460.kind.$rawValue, $tmp2468);
                    $tmp2464 = $tmp2469.value;
                    $l2467:;
                    panda$core$Bit $tmp2470 = { $tmp2464 };
                    bool $tmp2463 = $tmp2470.value;
                    if (!$tmp2463) goto $l2471;
                    panda$core$Int64$init$builtin_int64(&$tmp2472, 33);
                    panda$core$Bit $tmp2473 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2460.kind.$rawValue, $tmp2472);
                    $tmp2463 = $tmp2473.value;
                    $l2471:;
                    panda$core$Bit $tmp2474 = { $tmp2463 };
                    if ($tmp2474.value) {
                    {
                        {
                            $tmp2475 = right2462;
                            org$pandalanguage$pandac$ASTNode* $tmp2478 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2477 = $tmp2478;
                            $tmp2476 = $tmp2477;
                            right2462 = $tmp2476;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2476));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2477));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2475));
                        }
                        if (((panda$core$Bit) { right2462 == NULL }).value) {
                        {
                            $tmp2479 = NULL;
                            $returnValue2443 = $tmp2479;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2479));
                            $tmp2459 = 0;
                            goto $l2457;
                            $l2480:;
                            $tmp2426 = 1;
                            goto $l2424;
                            $l2481:;
                            return $returnValue2443;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2483 = right2462;
                            $tmp2484 = NULL;
                            right2462 = $tmp2484;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2484));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2483));
                        }
                    }
                    }
                    memset(&step2485, 0, sizeof(step2485));
                    panda$core$Int64$init$builtin_int64(&$tmp2487, 33);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2486, $tmp2487);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2488 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2486);
                    if (((panda$core$Bit) { $tmp2488.nonnull }).value) {
                    {
                        {
                            $tmp2489 = step2485;
                            org$pandalanguage$pandac$ASTNode* $tmp2492 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2491 = $tmp2492;
                            $tmp2490 = $tmp2491;
                            step2485 = $tmp2490;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2490));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2491));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2489));
                        }
                        if (((panda$core$Bit) { step2485 == NULL }).value) {
                        {
                            $tmp2493 = NULL;
                            $returnValue2443 = $tmp2493;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2493));
                            $tmp2459 = 1;
                            goto $l2457;
                            $l2494:;
                            $tmp2426 = 2;
                            goto $l2424;
                            $l2495:;
                            return $returnValue2443;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2497 = step2485;
                            $tmp2498 = NULL;
                            step2485 = $tmp2498;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2498));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2501 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2502, 33);
                    panda$core$Int64$init$builtin_int64(&$tmp2503, 96);
                    panda$core$Bit $tmp2504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2447.kind.$rawValue, $tmp2503);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp2501, $tmp2502, op2447.position, result2427, right2462, $tmp2504, step2485);
                    $tmp2500 = $tmp2501;
                    $tmp2499 = $tmp2500;
                    $returnValue2443 = $tmp2499;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2499));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2500));
                    $tmp2459 = 2;
                    goto $l2457;
                    $l2505:;
                    $tmp2426 = 3;
                    goto $l2424;
                    $l2506:;
                    return $returnValue2443;
                }
                $l2457:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2485));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right2462));
                switch ($tmp2459) {
                    case 2: goto $l2505;
                    case 1: goto $l2494;
                    case 0: goto $l2480;
                }
                $l2508:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2447);
                $tmp2509 = result2427;
                $returnValue2443 = $tmp2509;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2509));
                $tmp2426 = 4;
                goto $l2424;
                $l2510:;
                return $returnValue2443;
            }
            }
        }
    }
    $tmp2426 = -1;
    goto $l2424;
    $l2424:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2427));
    switch ($tmp2426) {
        case 0: goto $l2445;
        case 4: goto $l2510;
        case 2: goto $l2495;
        case -1: goto $l2512;
        case 1: goto $l2481;
        case 3: goto $l2506;
    }
    $l2512:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2516 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2517;
    org$pandalanguage$pandac$ASTNode* $tmp2518;
    org$pandalanguage$pandac$ASTNode* $returnValue2520;
    org$pandalanguage$pandac$ASTNode* $tmp2521;
    org$pandalanguage$pandac$parser$Token op2526;
    org$pandalanguage$pandac$parser$Token$Kind $match$1102_132528;
    panda$core$Int64 $tmp2536;
    panda$core$Int64 $tmp2539;
    panda$core$Int64 $tmp2543;
    panda$core$Int64 $tmp2547;
    panda$core$Int64 $tmp2551;
    panda$core$Int64 $tmp2555;
    panda$core$Int64 $tmp2559;
    panda$core$Int64 $tmp2563;
    org$pandalanguage$pandac$ASTNode* next2569 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2570;
    org$pandalanguage$pandac$ASTNode* $tmp2571;
    org$pandalanguage$pandac$ASTNode* $tmp2573;
    org$pandalanguage$pandac$ASTNode* $tmp2577;
    org$pandalanguage$pandac$ASTNode* $tmp2578;
    org$pandalanguage$pandac$ASTNode* $tmp2579;
    panda$core$Int64 $tmp2581;
    org$pandalanguage$pandac$ASTNode* $tmp2583;
    int $tmp2515;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2519 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2518 = $tmp2519;
        $tmp2517 = $tmp2518;
        result2516 = $tmp2517;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2518));
        if (((panda$core$Bit) { result2516 == NULL }).value) {
        {
            $tmp2521 = NULL;
            $returnValue2520 = $tmp2521;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2521));
            $tmp2515 = 0;
            goto $l2513;
            $l2522:;
            return $returnValue2520;
        }
        }
        $l2524:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2527 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2526 = $tmp2527;
            {
                $match$1102_132528 = op2526.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2536, 58);
                panda$core$Bit $tmp2537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1102_132528.$rawValue, $tmp2536);
                bool $tmp2535 = $tmp2537.value;
                if ($tmp2535) goto $l2538;
                panda$core$Int64$init$builtin_int64(&$tmp2539, 59);
                panda$core$Bit $tmp2540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1102_132528.$rawValue, $tmp2539);
                $tmp2535 = $tmp2540.value;
                $l2538:;
                panda$core$Bit $tmp2541 = { $tmp2535 };
                bool $tmp2534 = $tmp2541.value;
                if ($tmp2534) goto $l2542;
                panda$core$Int64$init$builtin_int64(&$tmp2543, 60);
                panda$core$Bit $tmp2544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1102_132528.$rawValue, $tmp2543);
                $tmp2534 = $tmp2544.value;
                $l2542:;
                panda$core$Bit $tmp2545 = { $tmp2534 };
                bool $tmp2533 = $tmp2545.value;
                if ($tmp2533) goto $l2546;
                panda$core$Int64$init$builtin_int64(&$tmp2547, 61);
                panda$core$Bit $tmp2548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1102_132528.$rawValue, $tmp2547);
                $tmp2533 = $tmp2548.value;
                $l2546:;
                panda$core$Bit $tmp2549 = { $tmp2533 };
                bool $tmp2532 = $tmp2549.value;
                if ($tmp2532) goto $l2550;
                panda$core$Int64$init$builtin_int64(&$tmp2551, 62);
                panda$core$Bit $tmp2552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1102_132528.$rawValue, $tmp2551);
                $tmp2532 = $tmp2552.value;
                $l2550:;
                panda$core$Bit $tmp2553 = { $tmp2532 };
                bool $tmp2531 = $tmp2553.value;
                if ($tmp2531) goto $l2554;
                panda$core$Int64$init$builtin_int64(&$tmp2555, 63);
                panda$core$Bit $tmp2556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1102_132528.$rawValue, $tmp2555);
                $tmp2531 = $tmp2556.value;
                $l2554:;
                panda$core$Bit $tmp2557 = { $tmp2531 };
                bool $tmp2530 = $tmp2557.value;
                if ($tmp2530) goto $l2558;
                panda$core$Int64$init$builtin_int64(&$tmp2559, 64);
                panda$core$Bit $tmp2560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1102_132528.$rawValue, $tmp2559);
                $tmp2530 = $tmp2560.value;
                $l2558:;
                panda$core$Bit $tmp2561 = { $tmp2530 };
                bool $tmp2529 = $tmp2561.value;
                if ($tmp2529) goto $l2562;
                panda$core$Int64$init$builtin_int64(&$tmp2563, 65);
                panda$core$Bit $tmp2564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1102_132528.$rawValue, $tmp2563);
                $tmp2529 = $tmp2564.value;
                $l2562:;
                panda$core$Bit $tmp2565 = { $tmp2529 };
                if ($tmp2565.value) {
                {
                    int $tmp2568;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2572 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2571 = $tmp2572;
                        $tmp2570 = $tmp2571;
                        next2569 = $tmp2570;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2570));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2571));
                        if (((panda$core$Bit) { next2569 == NULL }).value) {
                        {
                            $tmp2573 = NULL;
                            $returnValue2520 = $tmp2573;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2573));
                            $tmp2568 = 0;
                            goto $l2566;
                            $l2574:;
                            $tmp2515 = 1;
                            goto $l2513;
                            $l2575:;
                            return $returnValue2520;
                        }
                        }
                        {
                            $tmp2577 = result2516;
                            org$pandalanguage$pandac$ASTNode* $tmp2580 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2581, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2580, $tmp2581, op2526.position, result2516, op2526.kind, next2569);
                            $tmp2579 = $tmp2580;
                            $tmp2578 = $tmp2579;
                            result2516 = $tmp2578;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2578));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2579));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2577));
                        }
                    }
                    $tmp2568 = -1;
                    goto $l2566;
                    $l2566:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2569));
                    next2569 = NULL;
                    switch ($tmp2568) {
                        case -1: goto $l2582;
                        case 0: goto $l2574;
                    }
                    $l2582:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2526);
                    $tmp2583 = result2516;
                    $returnValue2520 = $tmp2583;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2583));
                    $tmp2515 = 2;
                    goto $l2513;
                    $l2584:;
                    return $returnValue2520;
                }
                }
            }
        }
        }
        $l2525:;
    }
    $tmp2515 = -1;
    goto $l2513;
    $l2513:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2516));
    result2516 = NULL;
    switch ($tmp2515) {
        case -1: goto $l2586;
        case 2: goto $l2584;
        case 1: goto $l2575;
        case 0: goto $l2522;
    }
    $l2586:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2590 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2591;
    org$pandalanguage$pandac$ASTNode* $tmp2592;
    org$pandalanguage$pandac$ASTNode* $returnValue2594;
    org$pandalanguage$pandac$ASTNode* $tmp2595;
    org$pandalanguage$pandac$parser$Token op2600;
    org$pandalanguage$pandac$parser$Token$Kind $match$1133_132602;
    panda$core$Int64 $tmp2604;
    panda$core$Int64 $tmp2607;
    org$pandalanguage$pandac$ASTNode* next2613 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2614;
    org$pandalanguage$pandac$ASTNode* $tmp2615;
    org$pandalanguage$pandac$ASTNode* $tmp2617;
    org$pandalanguage$pandac$ASTNode* $tmp2621;
    org$pandalanguage$pandac$ASTNode* $tmp2622;
    org$pandalanguage$pandac$ASTNode* $tmp2623;
    panda$core$Int64 $tmp2625;
    org$pandalanguage$pandac$ASTNode* $tmp2627;
    int $tmp2589;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2593 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2592 = $tmp2593;
        $tmp2591 = $tmp2592;
        result2590 = $tmp2591;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2591));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2592));
        if (((panda$core$Bit) { result2590 == NULL }).value) {
        {
            $tmp2595 = NULL;
            $returnValue2594 = $tmp2595;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2595));
            $tmp2589 = 0;
            goto $l2587;
            $l2596:;
            return $returnValue2594;
        }
        }
        $l2598:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2601 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2600 = $tmp2601;
            {
                $match$1133_132602 = op2600.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2604, 66);
                panda$core$Bit $tmp2605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1133_132602.$rawValue, $tmp2604);
                bool $tmp2603 = $tmp2605.value;
                if ($tmp2603) goto $l2606;
                panda$core$Int64$init$builtin_int64(&$tmp2607, 70);
                panda$core$Bit $tmp2608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1133_132602.$rawValue, $tmp2607);
                $tmp2603 = $tmp2608.value;
                $l2606:;
                panda$core$Bit $tmp2609 = { $tmp2603 };
                if ($tmp2609.value) {
                {
                    int $tmp2612;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2616 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2615 = $tmp2616;
                        $tmp2614 = $tmp2615;
                        next2613 = $tmp2614;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2614));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2615));
                        if (((panda$core$Bit) { next2613 == NULL }).value) {
                        {
                            $tmp2617 = NULL;
                            $returnValue2594 = $tmp2617;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2617));
                            $tmp2612 = 0;
                            goto $l2610;
                            $l2618:;
                            $tmp2589 = 1;
                            goto $l2587;
                            $l2619:;
                            return $returnValue2594;
                        }
                        }
                        {
                            $tmp2621 = result2590;
                            org$pandalanguage$pandac$ASTNode* $tmp2624 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2625, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2624, $tmp2625, op2600.position, result2590, op2600.kind, next2613);
                            $tmp2623 = $tmp2624;
                            $tmp2622 = $tmp2623;
                            result2590 = $tmp2622;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2622));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2623));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2621));
                        }
                    }
                    $tmp2612 = -1;
                    goto $l2610;
                    $l2610:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2613));
                    next2613 = NULL;
                    switch ($tmp2612) {
                        case -1: goto $l2626;
                        case 0: goto $l2618;
                    }
                    $l2626:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2600);
                    $tmp2627 = result2590;
                    $returnValue2594 = $tmp2627;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2627));
                    $tmp2589 = 2;
                    goto $l2587;
                    $l2628:;
                    return $returnValue2594;
                }
                }
            }
        }
        }
        $l2599:;
    }
    $tmp2589 = -1;
    goto $l2587;
    $l2587:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2590));
    result2590 = NULL;
    switch ($tmp2589) {
        case 1: goto $l2619;
        case 0: goto $l2596;
        case -1: goto $l2630;
        case 2: goto $l2628;
    }
    $l2630:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2634 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2635;
    org$pandalanguage$pandac$ASTNode* $tmp2636;
    org$pandalanguage$pandac$ASTNode* $returnValue2638;
    org$pandalanguage$pandac$ASTNode* $tmp2639;
    org$pandalanguage$pandac$parser$Token$nullable op2647;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2648;
    panda$core$Int64 $tmp2649;
    org$pandalanguage$pandac$ASTNode* next2652 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2653;
    org$pandalanguage$pandac$ASTNode* $tmp2654;
    org$pandalanguage$pandac$ASTNode* $tmp2656;
    org$pandalanguage$pandac$ASTNode* $tmp2660;
    org$pandalanguage$pandac$ASTNode* $tmp2661;
    org$pandalanguage$pandac$ASTNode* $tmp2662;
    panda$core$Int64 $tmp2664;
    org$pandalanguage$pandac$ASTNode* $tmp2666;
    int $tmp2633;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2637 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2636 = $tmp2637;
        $tmp2635 = $tmp2636;
        result2634 = $tmp2635;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2636));
        if (((panda$core$Bit) { result2634 == NULL }).value) {
        {
            $tmp2639 = NULL;
            $returnValue2638 = $tmp2639;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2639));
            $tmp2633 = 0;
            goto $l2631;
            $l2640:;
            return $returnValue2638;
        }
        }
        $l2642:;
        while (true) {
        {
            int $tmp2646;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2649, 68);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2648, $tmp2649);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2650 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2648);
                op2647 = $tmp2650;
                if (((panda$core$Bit) { !op2647.nonnull }).value) {
                {
                    $tmp2646 = 0;
                    goto $l2644;
                    $l2651:;
                    goto $l2643;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2655 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2654 = $tmp2655;
                $tmp2653 = $tmp2654;
                next2652 = $tmp2653;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2654));
                if (((panda$core$Bit) { next2652 == NULL }).value) {
                {
                    $tmp2656 = NULL;
                    $returnValue2638 = $tmp2656;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2656));
                    $tmp2646 = 1;
                    goto $l2644;
                    $l2657:;
                    $tmp2633 = 1;
                    goto $l2631;
                    $l2658:;
                    return $returnValue2638;
                }
                }
                {
                    $tmp2660 = result2634;
                    org$pandalanguage$pandac$ASTNode* $tmp2663 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2664, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2663, $tmp2664, ((org$pandalanguage$pandac$parser$Token) op2647.value).position, result2634, ((org$pandalanguage$pandac$parser$Token) op2647.value).kind, next2652);
                    $tmp2662 = $tmp2663;
                    $tmp2661 = $tmp2662;
                    result2634 = $tmp2661;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2661));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2662));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2660));
                }
            }
            $tmp2646 = -1;
            goto $l2644;
            $l2644:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2652));
            next2652 = NULL;
            switch ($tmp2646) {
                case 1: goto $l2657;
                case 0: goto $l2651;
                case -1: goto $l2665;
            }
            $l2665:;
        }
        }
        $l2643:;
        $tmp2666 = result2634;
        $returnValue2638 = $tmp2666;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2666));
        $tmp2633 = 2;
        goto $l2631;
        $l2667:;
        return $returnValue2638;
    }
    $l2631:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2634));
    result2634 = NULL;
    switch ($tmp2633) {
        case 2: goto $l2667;
        case 1: goto $l2658;
        case 0: goto $l2640;
    }
    $l2669:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2673;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2674;
    panda$core$Int64 $tmp2675;
    org$pandalanguage$pandac$ASTNode* $returnValue2678;
    org$pandalanguage$pandac$ASTNode* $tmp2679;
    org$pandalanguage$pandac$ASTNode* test2682 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2683;
    org$pandalanguage$pandac$ASTNode* $tmp2684;
    org$pandalanguage$pandac$ASTNode* $tmp2686;
    panda$collections$ImmutableArray* ifTrue2689 = NULL;
    panda$collections$ImmutableArray* $tmp2690;
    panda$collections$ImmutableArray* $tmp2691;
    org$pandalanguage$pandac$ASTNode* $tmp2693;
    org$pandalanguage$pandac$ASTNode* ifFalse2696 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2697;
    panda$core$Int64 $tmp2698;
    panda$core$Int64 $tmp2701;
    org$pandalanguage$pandac$ASTNode* $tmp2703;
    org$pandalanguage$pandac$ASTNode* $tmp2704;
    org$pandalanguage$pandac$ASTNode* $tmp2705;
    org$pandalanguage$pandac$ASTNode* $tmp2707;
    org$pandalanguage$pandac$ASTNode* $tmp2710;
    org$pandalanguage$pandac$ASTNode* $tmp2711;
    org$pandalanguage$pandac$ASTNode* $tmp2712;
    org$pandalanguage$pandac$ASTNode* $tmp2714;
    org$pandalanguage$pandac$ASTNode* $tmp2717;
    org$pandalanguage$pandac$ASTNode* $tmp2718;
    org$pandalanguage$pandac$ASTNode* $tmp2719;
    org$pandalanguage$pandac$ASTNode* $tmp2720;
    panda$core$Int64 $tmp2722;
    int $tmp2672;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2675, 36);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2674, $tmp2675);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2677 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2674, &$s2676);
        start2673 = $tmp2677;
        if (((panda$core$Bit) { !start2673.nonnull }).value) {
        {
            $tmp2679 = NULL;
            $returnValue2678 = $tmp2679;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2679));
            $tmp2672 = 0;
            goto $l2670;
            $l2680:;
            return $returnValue2678;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2685 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2684 = $tmp2685;
        $tmp2683 = $tmp2684;
        test2682 = $tmp2683;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2684));
        if (((panda$core$Bit) { test2682 == NULL }).value) {
        {
            $tmp2686 = NULL;
            $returnValue2678 = $tmp2686;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2686));
            $tmp2672 = 1;
            goto $l2670;
            $l2687:;
            return $returnValue2678;
        }
        }
        panda$collections$ImmutableArray* $tmp2692 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2691 = $tmp2692;
        $tmp2690 = $tmp2691;
        ifTrue2689 = $tmp2690;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2690));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2691));
        if (((panda$core$Bit) { ifTrue2689 == NULL }).value) {
        {
            $tmp2693 = NULL;
            $returnValue2678 = $tmp2693;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2693));
            $tmp2672 = 2;
            goto $l2670;
            $l2694:;
            return $returnValue2678;
        }
        }
        memset(&ifFalse2696, 0, sizeof(ifFalse2696));
        panda$core$Int64$init$builtin_int64(&$tmp2698, 37);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2697, $tmp2698);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2699 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2697);
        if (((panda$core$Bit) { $tmp2699.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2700 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp2701, 36);
            panda$core$Bit $tmp2702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2700.kind.$rawValue, $tmp2701);
            if ($tmp2702.value) {
            {
                {
                    $tmp2703 = ifFalse2696;
                    org$pandalanguage$pandac$ASTNode* $tmp2706 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2705 = $tmp2706;
                    $tmp2704 = $tmp2705;
                    ifFalse2696 = $tmp2704;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2704));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2705));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2703));
                }
                if (((panda$core$Bit) { ifFalse2696 == NULL }).value) {
                {
                    $tmp2707 = NULL;
                    $returnValue2678 = $tmp2707;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2707));
                    $tmp2672 = 3;
                    goto $l2670;
                    $l2708:;
                    return $returnValue2678;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2710 = ifFalse2696;
                    org$pandalanguage$pandac$ASTNode* $tmp2713 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2712 = $tmp2713;
                    $tmp2711 = $tmp2712;
                    ifFalse2696 = $tmp2711;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2711));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2712));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2710));
                }
                if (((panda$core$Bit) { ifFalse2696 == NULL }).value) {
                {
                    $tmp2714 = NULL;
                    $returnValue2678 = $tmp2714;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2714));
                    $tmp2672 = 4;
                    goto $l2670;
                    $l2715:;
                    return $returnValue2678;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp2717 = ifFalse2696;
                $tmp2718 = NULL;
                ifFalse2696 = $tmp2718;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2718));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2717));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2721 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2722, 21);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2721, $tmp2722, ((org$pandalanguage$pandac$parser$Token) start2673.value).position, test2682, ifTrue2689, ifFalse2696);
        $tmp2720 = $tmp2721;
        $tmp2719 = $tmp2720;
        $returnValue2678 = $tmp2719;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2719));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2720));
        $tmp2672 = 5;
        goto $l2670;
        $l2723:;
        return $returnValue2678;
    }
    $l2670:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse2696));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue2689));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2682));
    test2682 = NULL;
    ifTrue2689 = NULL;
    switch ($tmp2672) {
        case 4: goto $l2715;
        case 2: goto $l2694;
        case 5: goto $l2723;
        case 1: goto $l2687;
        case 3: goto $l2708;
        case 0: goto $l2680;
    }
    $l2725:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp2726;
    panda$core$Int64 $tmp2727;
    org$pandalanguage$pandac$ASTNode* $returnValue2730;
    org$pandalanguage$pandac$ASTNode* $tmp2731;
    org$pandalanguage$pandac$ASTNode* $tmp2733;
    org$pandalanguage$pandac$ASTNode* $tmp2734;
    panda$core$Bit $tmp2735;
    panda$core$Int64$init$builtin_int64(&$tmp2727, 95);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2726, $tmp2727);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2729 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2726, &$s2728);
    if (((panda$core$Bit) { !$tmp2729.nonnull }).value) {
    {
        $tmp2731 = NULL;
        $returnValue2730 = $tmp2731;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2731));
        return $returnValue2730;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp2735, false);
    org$pandalanguage$pandac$ASTNode* $tmp2736 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2735);
    $tmp2734 = $tmp2736;
    $tmp2733 = $tmp2734;
    $returnValue2730 = $tmp2733;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2733));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2734));
    return $returnValue2730;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id2738;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2739;
    panda$core$Int64 $tmp2740;
    org$pandalanguage$pandac$ASTNode* $returnValue2743;
    org$pandalanguage$pandac$ASTNode* $tmp2744;
    panda$core$Int64 $tmp2747;
    org$pandalanguage$pandac$ASTNode* type2752 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2753;
    org$pandalanguage$pandac$ASTNode* $tmp2754;
    org$pandalanguage$pandac$ASTNode* $tmp2756;
    org$pandalanguage$pandac$ASTNode* $tmp2759;
    org$pandalanguage$pandac$ASTNode* $tmp2760;
    panda$core$Int64 $tmp2762;
    panda$core$String* $tmp2763;
    org$pandalanguage$pandac$ASTNode* $tmp2768;
    org$pandalanguage$pandac$ASTNode* $tmp2769;
    panda$core$Int64 $tmp2771;
    panda$core$String* $tmp2772;
    panda$core$Int64$init$builtin_int64(&$tmp2740, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2739, $tmp2740);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2742 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2739, &$s2741);
    id2738 = $tmp2742;
    if (((panda$core$Bit) { !id2738.nonnull }).value) {
    {
        $tmp2744 = NULL;
        $returnValue2743 = $tmp2744;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2744));
        return $returnValue2743;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2746 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Int64$init$builtin_int64(&$tmp2747, 95);
    panda$core$Bit $tmp2748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2746.kind.$rawValue, $tmp2747);
    if ($tmp2748.value) {
    {
        int $tmp2751;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2755 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2754 = $tmp2755;
            $tmp2753 = $tmp2754;
            type2752 = $tmp2753;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2753));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2754));
            if (((panda$core$Bit) { type2752 == NULL }).value) {
            {
                $tmp2756 = NULL;
                $returnValue2743 = $tmp2756;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2756));
                $tmp2751 = 0;
                goto $l2749;
                $l2757:;
                return $returnValue2743;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp2761 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp2762, 44);
            panda$core$String* $tmp2764 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2738.value));
            $tmp2763 = $tmp2764;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2761, $tmp2762, ((org$pandalanguage$pandac$parser$Token) id2738.value).position, $tmp2763, type2752);
            $tmp2760 = $tmp2761;
            $tmp2759 = $tmp2760;
            $returnValue2743 = $tmp2759;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2759));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2760));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2763));
            $tmp2751 = 1;
            goto $l2749;
            $l2765:;
            return $returnValue2743;
        }
        $l2749:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type2752));
        type2752 = NULL;
        switch ($tmp2751) {
            case 1: goto $l2765;
            case 0: goto $l2757;
        }
        $l2767:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2770 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp2771, 20);
    panda$core$String* $tmp2773 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2738.value));
    $tmp2772 = $tmp2773;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2770, $tmp2771, ((org$pandalanguage$pandac$parser$Token) id2738.value).position, $tmp2772);
    $tmp2769 = $tmp2770;
    $tmp2768 = $tmp2769;
    $returnValue2743 = $tmp2768;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2768));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2769));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2772));
    return $returnValue2743;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2778;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2779;
    panda$core$Int64 $tmp2780;
    org$pandalanguage$pandac$ASTNode* $returnValue2783;
    org$pandalanguage$pandac$ASTNode* $tmp2784;
    org$pandalanguage$pandac$ASTNode* t2787 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2788;
    org$pandalanguage$pandac$ASTNode* $tmp2789;
    org$pandalanguage$pandac$ASTNode* $tmp2791;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2794;
    panda$core$Int64 $tmp2795;
    org$pandalanguage$pandac$ASTNode* $tmp2798;
    org$pandalanguage$pandac$ASTNode* list2801 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2802;
    org$pandalanguage$pandac$ASTNode* $tmp2803;
    org$pandalanguage$pandac$ASTNode* $tmp2805;
    panda$collections$ImmutableArray* block2808 = NULL;
    panda$collections$ImmutableArray* $tmp2809;
    panda$collections$ImmutableArray* $tmp2810;
    org$pandalanguage$pandac$ASTNode* $tmp2812;
    org$pandalanguage$pandac$ASTNode* $tmp2815;
    org$pandalanguage$pandac$ASTNode* $tmp2816;
    panda$core$Int64 $tmp2818;
    int $tmp2777;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2780, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2779, $tmp2780);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2782 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2779, &$s2781);
        start2778 = $tmp2782;
        if (((panda$core$Bit) { !start2778.nonnull }).value) {
        {
            $tmp2784 = NULL;
            $returnValue2783 = $tmp2784;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2784));
            $tmp2777 = 0;
            goto $l2775;
            $l2785:;
            return $returnValue2783;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2790 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2789 = $tmp2790;
        $tmp2788 = $tmp2789;
        t2787 = $tmp2788;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2788));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2789));
        if (((panda$core$Bit) { t2787 == NULL }).value) {
        {
            $tmp2791 = NULL;
            $returnValue2783 = $tmp2791;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2791));
            $tmp2777 = 1;
            goto $l2775;
            $l2792:;
            return $returnValue2783;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2795, 34);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2794, $tmp2795);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2797 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2794, &$s2796);
        if (((panda$core$Bit) { !$tmp2797.nonnull }).value) {
        {
            $tmp2798 = NULL;
            $returnValue2783 = $tmp2798;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2798));
            $tmp2777 = 2;
            goto $l2775;
            $l2799:;
            return $returnValue2783;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2804 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2803 = $tmp2804;
        $tmp2802 = $tmp2803;
        list2801 = $tmp2802;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2802));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2803));
        if (((panda$core$Bit) { list2801 == NULL }).value) {
        {
            $tmp2805 = NULL;
            $returnValue2783 = $tmp2805;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2805));
            $tmp2777 = 3;
            goto $l2775;
            $l2806:;
            return $returnValue2783;
        }
        }
        panda$collections$ImmutableArray* $tmp2811 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2810 = $tmp2811;
        $tmp2809 = $tmp2810;
        block2808 = $tmp2809;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2809));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2810));
        if (((panda$core$Bit) { block2808 == NULL }).value) {
        {
            $tmp2812 = NULL;
            $returnValue2783 = $tmp2812;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2812));
            $tmp2777 = 4;
            goto $l2775;
            $l2813:;
            return $returnValue2783;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2817 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2818, 18);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2817, $tmp2818, ((org$pandalanguage$pandac$parser$Token) start2778.value).position, p_label, t2787, list2801, block2808);
        $tmp2816 = $tmp2817;
        $tmp2815 = $tmp2816;
        $returnValue2783 = $tmp2815;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2815));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2816));
        $tmp2777 = 5;
        goto $l2775;
        $l2819:;
        return $returnValue2783;
    }
    $l2775:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2808));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2801));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2787));
    t2787 = NULL;
    list2801 = NULL;
    block2808 = NULL;
    switch ($tmp2777) {
        case 5: goto $l2819;
        case 3: goto $l2806;
        case 4: goto $l2813;
        case 1: goto $l2792;
        case 2: goto $l2799;
        case 0: goto $l2785;
    }
    $l2821:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2825;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2826;
    panda$core$Int64 $tmp2827;
    org$pandalanguage$pandac$ASTNode* $returnValue2830;
    org$pandalanguage$pandac$ASTNode* $tmp2831;
    org$pandalanguage$pandac$ASTNode* test2834 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2835;
    org$pandalanguage$pandac$ASTNode* $tmp2836;
    org$pandalanguage$pandac$ASTNode* $tmp2838;
    panda$collections$ImmutableArray* body2841 = NULL;
    panda$collections$ImmutableArray* $tmp2842;
    panda$collections$ImmutableArray* $tmp2843;
    org$pandalanguage$pandac$ASTNode* $tmp2845;
    org$pandalanguage$pandac$ASTNode* $tmp2848;
    org$pandalanguage$pandac$ASTNode* $tmp2849;
    panda$core$Int64 $tmp2851;
    int $tmp2824;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2827, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2826, $tmp2827);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2829 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2826, &$s2828);
        start2825 = $tmp2829;
        if (((panda$core$Bit) { !start2825.nonnull }).value) {
        {
            $tmp2831 = NULL;
            $returnValue2830 = $tmp2831;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2831));
            $tmp2824 = 0;
            goto $l2822;
            $l2832:;
            return $returnValue2830;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2837 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2836 = $tmp2837;
        $tmp2835 = $tmp2836;
        test2834 = $tmp2835;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2835));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2836));
        if (((panda$core$Bit) { test2834 == NULL }).value) {
        {
            $tmp2838 = NULL;
            $returnValue2830 = $tmp2838;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2838));
            $tmp2824 = 1;
            goto $l2822;
            $l2839:;
            return $returnValue2830;
        }
        }
        panda$collections$ImmutableArray* $tmp2844 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2843 = $tmp2844;
        $tmp2842 = $tmp2843;
        body2841 = $tmp2842;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2842));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2843));
        if (((panda$core$Bit) { body2841 == NULL }).value) {
        {
            $tmp2845 = NULL;
            $returnValue2830 = $tmp2845;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2845));
            $tmp2824 = 2;
            goto $l2822;
            $l2846:;
            return $returnValue2830;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2850 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2851, 49);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2850, $tmp2851, ((org$pandalanguage$pandac$parser$Token) start2825.value).position, p_label, test2834, body2841);
        $tmp2849 = $tmp2850;
        $tmp2848 = $tmp2849;
        $returnValue2830 = $tmp2848;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2848));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2849));
        $tmp2824 = 3;
        goto $l2822;
        $l2852:;
        return $returnValue2830;
    }
    $l2822:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2841));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2834));
    test2834 = NULL;
    body2841 = NULL;
    switch ($tmp2824) {
        case 1: goto $l2839;
        case 3: goto $l2852;
        case 2: goto $l2846;
        case 0: goto $l2832;
    }
    $l2854:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2858;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2859;
    panda$core$Int64 $tmp2860;
    org$pandalanguage$pandac$ASTNode* $returnValue2863;
    org$pandalanguage$pandac$ASTNode* $tmp2864;
    panda$collections$ImmutableArray* body2867 = NULL;
    panda$collections$ImmutableArray* $tmp2868;
    panda$collections$ImmutableArray* $tmp2869;
    org$pandalanguage$pandac$ASTNode* $tmp2871;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2874;
    panda$core$Int64 $tmp2875;
    org$pandalanguage$pandac$ASTNode* $tmp2878;
    org$pandalanguage$pandac$ASTNode* test2881 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2882;
    org$pandalanguage$pandac$ASTNode* $tmp2883;
    org$pandalanguage$pandac$ASTNode* $tmp2885;
    org$pandalanguage$pandac$ASTNode* $tmp2888;
    org$pandalanguage$pandac$ASTNode* $tmp2889;
    panda$core$Int64 $tmp2891;
    int $tmp2857;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2860, 30);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2859, $tmp2860);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2862 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2859, &$s2861);
        start2858 = $tmp2862;
        if (((panda$core$Bit) { !start2858.nonnull }).value) {
        {
            $tmp2864 = NULL;
            $returnValue2863 = $tmp2864;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2864));
            $tmp2857 = 0;
            goto $l2855;
            $l2865:;
            return $returnValue2863;
        }
        }
        panda$collections$ImmutableArray* $tmp2870 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2869 = $tmp2870;
        $tmp2868 = $tmp2869;
        body2867 = $tmp2868;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2868));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2869));
        if (((panda$core$Bit) { body2867 == NULL }).value) {
        {
            $tmp2871 = NULL;
            $returnValue2863 = $tmp2871;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2871));
            $tmp2857 = 1;
            goto $l2855;
            $l2872:;
            return $returnValue2863;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2875, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2874, $tmp2875);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2877 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2874, &$s2876);
        if (((panda$core$Bit) { !$tmp2877.nonnull }).value) {
        {
            $tmp2878 = NULL;
            $returnValue2863 = $tmp2878;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2878));
            $tmp2857 = 2;
            goto $l2855;
            $l2879:;
            return $returnValue2863;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2884 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2883 = $tmp2884;
        $tmp2882 = $tmp2883;
        test2881 = $tmp2882;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2882));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2883));
        if (((panda$core$Bit) { test2881 == NULL }).value) {
        {
            $tmp2885 = NULL;
            $returnValue2863 = $tmp2885;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2885));
            $tmp2857 = 3;
            goto $l2855;
            $l2886:;
            return $returnValue2863;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2890 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2891, 14);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp2890, $tmp2891, ((org$pandalanguage$pandac$parser$Token) start2858.value).position, p_label, body2867, test2881);
        $tmp2889 = $tmp2890;
        $tmp2888 = $tmp2889;
        $returnValue2863 = $tmp2888;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2888));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2889));
        $tmp2857 = 4;
        goto $l2855;
        $l2892:;
        return $returnValue2863;
    }
    $l2855:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2881));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2867));
    body2867 = NULL;
    test2881 = NULL;
    switch ($tmp2857) {
        case 1: goto $l2872;
        case 4: goto $l2892;
        case 2: goto $l2879;
        case 0: goto $l2865;
        case 3: goto $l2886;
    }
    $l2894:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2898;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2899;
    panda$core$Int64 $tmp2900;
    org$pandalanguage$pandac$ASTNode* $returnValue2903;
    org$pandalanguage$pandac$ASTNode* $tmp2904;
    panda$collections$ImmutableArray* body2907 = NULL;
    panda$collections$ImmutableArray* $tmp2908;
    panda$collections$ImmutableArray* $tmp2909;
    org$pandalanguage$pandac$ASTNode* $tmp2911;
    org$pandalanguage$pandac$ASTNode* $tmp2914;
    org$pandalanguage$pandac$ASTNode* $tmp2915;
    panda$core$Int64 $tmp2917;
    int $tmp2897;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2900, 35);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2899, $tmp2900);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2902 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2899, &$s2901);
        start2898 = $tmp2902;
        if (((panda$core$Bit) { !start2898.nonnull }).value) {
        {
            $tmp2904 = NULL;
            $returnValue2903 = $tmp2904;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2904));
            $tmp2897 = 0;
            goto $l2895;
            $l2905:;
            return $returnValue2903;
        }
        }
        panda$collections$ImmutableArray* $tmp2910 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2909 = $tmp2910;
        $tmp2908 = $tmp2909;
        body2907 = $tmp2908;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2908));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2909));
        if (((panda$core$Bit) { body2907 == NULL }).value) {
        {
            $tmp2911 = NULL;
            $returnValue2903 = $tmp2911;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2911));
            $tmp2897 = 1;
            goto $l2895;
            $l2912:;
            return $returnValue2903;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2916 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2917, 24);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2916, $tmp2917, ((org$pandalanguage$pandac$parser$Token) start2898.value).position, p_label, body2907);
        $tmp2915 = $tmp2916;
        $tmp2914 = $tmp2915;
        $returnValue2903 = $tmp2914;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2914));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2915));
        $tmp2897 = 2;
        goto $l2895;
        $l2918:;
        return $returnValue2903;
    }
    $l2895:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2907));
    body2907 = NULL;
    switch ($tmp2897) {
        case 1: goto $l2912;
        case 2: goto $l2918;
        case 0: goto $l2905;
    }
    $l2920:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2924;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2925;
    panda$core$Int64 $tmp2926;
    org$pandalanguage$pandac$ASTNode* $returnValue2929;
    org$pandalanguage$pandac$ASTNode* $tmp2930;
    org$pandalanguage$pandac$ASTNode* expr2933 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2934;
    org$pandalanguage$pandac$ASTNode* $tmp2935;
    org$pandalanguage$pandac$ASTNode* $tmp2937;
    org$pandalanguage$pandac$ASTNode* message2940 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2941;
    panda$core$Int64 $tmp2942;
    org$pandalanguage$pandac$ASTNode* $tmp2944;
    org$pandalanguage$pandac$ASTNode* $tmp2945;
    org$pandalanguage$pandac$ASTNode* $tmp2946;
    org$pandalanguage$pandac$ASTNode* $tmp2948;
    org$pandalanguage$pandac$ASTNode* $tmp2951;
    org$pandalanguage$pandac$ASTNode* $tmp2952;
    org$pandalanguage$pandac$ASTNode* $tmp2953;
    org$pandalanguage$pandac$ASTNode* $tmp2954;
    panda$core$Int64 $tmp2956;
    int $tmp2923;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2926, 44);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2925, $tmp2926);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2928 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2925, &$s2927);
        start2924 = $tmp2928;
        if (((panda$core$Bit) { !start2924.nonnull }).value) {
        {
            $tmp2930 = NULL;
            $returnValue2929 = $tmp2930;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2930));
            $tmp2923 = 0;
            goto $l2921;
            $l2931:;
            return $returnValue2929;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2936 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2935 = $tmp2936;
        $tmp2934 = $tmp2935;
        expr2933 = $tmp2934;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2934));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2935));
        if (((panda$core$Bit) { expr2933 == NULL }).value) {
        {
            $tmp2937 = NULL;
            $returnValue2929 = $tmp2937;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2937));
            $tmp2923 = 1;
            goto $l2921;
            $l2938:;
            return $returnValue2929;
        }
        }
        memset(&message2940, 0, sizeof(message2940));
        panda$core$Int64$init$builtin_int64(&$tmp2942, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2941, $tmp2942);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2943 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2941);
        if (((panda$core$Bit) { $tmp2943.nonnull }).value) {
        {
            {
                $tmp2944 = message2940;
                org$pandalanguage$pandac$ASTNode* $tmp2947 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2946 = $tmp2947;
                $tmp2945 = $tmp2946;
                message2940 = $tmp2945;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2945));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2946));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2944));
            }
            if (((panda$core$Bit) { message2940 == NULL }).value) {
            {
                $tmp2948 = NULL;
                $returnValue2929 = $tmp2948;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2948));
                $tmp2923 = 2;
                goto $l2921;
                $l2949:;
                return $returnValue2929;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2951 = message2940;
                $tmp2952 = NULL;
                message2940 = $tmp2952;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2952));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2951));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2955 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2956, 1);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2955, $tmp2956, ((org$pandalanguage$pandac$parser$Token) start2924.value).position, expr2933, message2940);
        $tmp2954 = $tmp2955;
        $tmp2953 = $tmp2954;
        $returnValue2929 = $tmp2953;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2953));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2954));
        $tmp2923 = 3;
        goto $l2921;
        $l2957:;
        return $returnValue2929;
    }
    $l2921:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message2940));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2933));
    expr2933 = NULL;
    switch ($tmp2923) {
        case 3: goto $l2957;
        case 2: goto $l2949;
        case 1: goto $l2938;
        case 0: goto $l2931;
    }
    $l2959:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2970;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2971;
    panda$core$Int64 $tmp2972;
    org$pandalanguage$pandac$ASTNode* $returnValue2975;
    org$pandalanguage$pandac$ASTNode* $tmp2976;
    panda$core$Bit $tmp2980;
    panda$collections$Array* expressions2981 = NULL;
    panda$collections$Array* $tmp2982;
    panda$collections$Array* $tmp2983;
    org$pandalanguage$pandac$ASTNode* expr2985 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2986;
    org$pandalanguage$pandac$ASTNode* $tmp2987;
    panda$core$Bit $tmp2989;
    org$pandalanguage$pandac$ASTNode* $tmp2990;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2997;
    panda$core$Int64 $tmp2998;
    org$pandalanguage$pandac$ASTNode* $tmp3000;
    org$pandalanguage$pandac$ASTNode* $tmp3001;
    org$pandalanguage$pandac$ASTNode* $tmp3002;
    panda$core$Bit $tmp3004;
    org$pandalanguage$pandac$ASTNode* $tmp3005;
    panda$core$Bit $tmp3009;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3010;
    panda$core$Int64 $tmp3011;
    org$pandalanguage$pandac$ASTNode* $tmp3014;
    panda$collections$Array* statements3018 = NULL;
    panda$collections$Array* $tmp3019;
    panda$collections$Array* $tmp3020;
    org$pandalanguage$pandac$parser$Token$Kind $match$1373_133024;
    panda$core$Int64 $tmp3028;
    panda$core$Int64 $tmp3031;
    panda$core$Int64 $tmp3035;
    panda$core$Int64 $tmp3040;
    panda$core$Int64 $tmp3043;
    panda$core$Int64 $tmp3047;
    org$pandalanguage$pandac$ASTNode* stmt3053 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3054;
    org$pandalanguage$pandac$ASTNode* $tmp3055;
    org$pandalanguage$pandac$ASTNode* $tmp3057;
    org$pandalanguage$pandac$ASTNode* stmt3067 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3068;
    org$pandalanguage$pandac$ASTNode* $tmp3069;
    org$pandalanguage$pandac$ASTNode* $tmp3071;
    org$pandalanguage$pandac$ASTNode* $tmp3077;
    org$pandalanguage$pandac$ASTNode* $tmp3078;
    panda$core$Int64 $tmp3080;
    panda$collections$ImmutableArray* $tmp3081;
    panda$collections$ImmutableArray* $tmp3083;
    int $tmp2962;
    {
        if (self->allowLambdas.value) goto $l2963; else goto $l2964;
        $l2964:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2965, (panda$core$Int64) { 1346 }, &$s2966);
        abort();
        $l2963:;
        int $tmp2969;
        {
            panda$core$Int64$init$builtin_int64(&$tmp2972, 39);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2971, $tmp2972);
            org$pandalanguage$pandac$parser$Token$nullable $tmp2974 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2971, &$s2973);
            start2970 = $tmp2974;
            if (((panda$core$Bit) { !start2970.nonnull }).value) {
            {
                $tmp2976 = NULL;
                $returnValue2975 = $tmp2976;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2976));
                $tmp2969 = 0;
                goto $l2967;
                $l2977:;
                $tmp2962 = 0;
                goto $l2960;
                $l2978:;
                return $returnValue2975;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp2980, false);
            self->allowLambdas = $tmp2980;
            panda$collections$Array* $tmp2984 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2984);
            $tmp2983 = $tmp2984;
            $tmp2982 = $tmp2983;
            expressions2981 = $tmp2982;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2982));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2983));
            org$pandalanguage$pandac$ASTNode* $tmp2988 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2987 = $tmp2988;
            $tmp2986 = $tmp2987;
            expr2985 = $tmp2986;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2986));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2987));
            if (((panda$core$Bit) { expr2985 == NULL }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp2989, true);
                self->allowLambdas = $tmp2989;
                $tmp2990 = NULL;
                $returnValue2975 = $tmp2990;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2990));
                $tmp2969 = 1;
                goto $l2967;
                $l2991:;
                $tmp2962 = 1;
                goto $l2960;
                $l2992:;
                return $returnValue2975;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions2981, ((panda$core$Object*) expr2985));
            $l2994:;
            panda$core$Int64$init$builtin_int64(&$tmp2998, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2997, $tmp2998);
            org$pandalanguage$pandac$parser$Token$nullable $tmp2999 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2997);
            bool $tmp2996 = ((panda$core$Bit) { $tmp2999.nonnull }).value;
            if (!$tmp2996) goto $l2995;
            {
                {
                    $tmp3000 = expr2985;
                    org$pandalanguage$pandac$ASTNode* $tmp3003 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3002 = $tmp3003;
                    $tmp3001 = $tmp3002;
                    expr2985 = $tmp3001;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3001));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3002));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3000));
                }
                if (((panda$core$Bit) { expr2985 == NULL }).value) {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp3004, true);
                    self->allowLambdas = $tmp3004;
                    $tmp3005 = NULL;
                    $returnValue2975 = $tmp3005;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3005));
                    $tmp2969 = 2;
                    goto $l2967;
                    $l3006:;
                    $tmp2962 = 2;
                    goto $l2960;
                    $l3007:;
                    return $returnValue2975;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(expressions2981, ((panda$core$Object*) expr2985));
            }
            goto $l2994;
            $l2995:;
            panda$core$Bit$init$builtin_bit(&$tmp3009, true);
            self->allowLambdas = $tmp3009;
            panda$core$Int64$init$builtin_int64(&$tmp3011, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3010, $tmp3011);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3013 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3010, &$s3012);
            if (((panda$core$Bit) { !$tmp3013.nonnull }).value) {
            {
                $tmp3014 = NULL;
                $returnValue2975 = $tmp3014;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3014));
                $tmp2969 = 3;
                goto $l2967;
                $l3015:;
                $tmp2962 = 3;
                goto $l2960;
                $l3016:;
                return $returnValue2975;
            }
            }
            panda$collections$Array* $tmp3021 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3021);
            $tmp3020 = $tmp3021;
            $tmp3019 = $tmp3020;
            statements3018 = $tmp3019;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3019));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3020));
            $l3022:;
            while (true) {
            {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3025 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    $match$1373_133024 = $tmp3025.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp3028, 39);
                    panda$core$Bit $tmp3029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1373_133024.$rawValue, $tmp3028);
                    bool $tmp3027 = $tmp3029.value;
                    if ($tmp3027) goto $l3030;
                    panda$core$Int64$init$builtin_int64(&$tmp3031, 40);
                    panda$core$Bit $tmp3032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1373_133024.$rawValue, $tmp3031);
                    $tmp3027 = $tmp3032.value;
                    $l3030:;
                    panda$core$Bit $tmp3033 = { $tmp3027 };
                    bool $tmp3026 = $tmp3033.value;
                    if ($tmp3026) goto $l3034;
                    panda$core$Int64$init$builtin_int64(&$tmp3035, 100);
                    panda$core$Bit $tmp3036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1373_133024.$rawValue, $tmp3035);
                    $tmp3026 = $tmp3036.value;
                    $l3034:;
                    panda$core$Bit $tmp3037 = { $tmp3026 };
                    if ($tmp3037.value) {
                    {
                        goto $l3023;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3040, 28);
                    panda$core$Bit $tmp3041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1373_133024.$rawValue, $tmp3040);
                    bool $tmp3039 = $tmp3041.value;
                    if ($tmp3039) goto $l3042;
                    panda$core$Int64$init$builtin_int64(&$tmp3043, 29);
                    panda$core$Bit $tmp3044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1373_133024.$rawValue, $tmp3043);
                    $tmp3039 = $tmp3044.value;
                    $l3042:;
                    panda$core$Bit $tmp3045 = { $tmp3039 };
                    bool $tmp3038 = $tmp3045.value;
                    if ($tmp3038) goto $l3046;
                    panda$core$Int64$init$builtin_int64(&$tmp3047, 27);
                    panda$core$Bit $tmp3048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1373_133024.$rawValue, $tmp3047);
                    $tmp3038 = $tmp3048.value;
                    $l3046:;
                    panda$core$Bit $tmp3049 = { $tmp3038 };
                    if ($tmp3049.value) {
                    {
                        int $tmp3052;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp3056 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3055 = $tmp3056;
                            $tmp3054 = $tmp3055;
                            stmt3053 = $tmp3054;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3054));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3055));
                            if (((panda$core$Bit) { stmt3053 == NULL }).value) {
                            {
                                $tmp3057 = NULL;
                                $returnValue2975 = $tmp3057;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3057));
                                $tmp3052 = 0;
                                goto $l3050;
                                $l3058:;
                                $tmp2969 = 4;
                                goto $l2967;
                                $l3059:;
                                $tmp2962 = 4;
                                goto $l2960;
                                $l3060:;
                                return $returnValue2975;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements3018, ((panda$core$Object*) stmt3053));
                            $tmp3052 = 1;
                            goto $l3050;
                            $l3062:;
                            goto $l3023;
                        }
                        $l3050:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3053));
                        stmt3053 = NULL;
                        switch ($tmp3052) {
                            case 1: goto $l3062;
                            case 0: goto $l3058;
                        }
                        $l3063:;
                    }
                    }
                    else {
                    {
                        {
                            int $tmp3066;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp3070 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp3069 = $tmp3070;
                                $tmp3068 = $tmp3069;
                                stmt3067 = $tmp3068;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3068));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3069));
                                if (((panda$core$Bit) { stmt3067 == NULL }).value) {
                                {
                                    $tmp3071 = NULL;
                                    $returnValue2975 = $tmp3071;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3071));
                                    $tmp3066 = 0;
                                    goto $l3064;
                                    $l3072:;
                                    $tmp2969 = 5;
                                    goto $l2967;
                                    $l3073:;
                                    $tmp2962 = 5;
                                    goto $l2960;
                                    $l3074:;
                                    return $returnValue2975;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(statements3018, ((panda$core$Object*) stmt3067));
                            }
                            $tmp3066 = -1;
                            goto $l3064;
                            $l3064:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3067));
                            stmt3067 = NULL;
                            switch ($tmp3066) {
                                case -1: goto $l3076;
                                case 0: goto $l3072;
                            }
                            $l3076:;
                        }
                    }
                    }
                    }
                }
            }
            }
            $l3023:;
            org$pandalanguage$pandac$ASTNode* $tmp3079 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3080, 48);
            panda$collections$ImmutableArray* $tmp3082 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions2981);
            $tmp3081 = $tmp3082;
            panda$collections$ImmutableArray* $tmp3084 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements3018);
            $tmp3083 = $tmp3084;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3079, $tmp3080, ((org$pandalanguage$pandac$parser$Token) start2970.value).position, $tmp3081, $tmp3083);
            $tmp3078 = $tmp3079;
            $tmp3077 = $tmp3078;
            $returnValue2975 = $tmp3077;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3077));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3078));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3083));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3081));
            $tmp2969 = 6;
            goto $l2967;
            $l3085:;
            $tmp2962 = 6;
            goto $l2960;
            $l3086:;
            return $returnValue2975;
        }
        $l2967:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3018));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2985));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions2981));
        expressions2981 = NULL;
        expr2985 = NULL;
        statements3018 = NULL;
        switch ($tmp2969) {
            case 5: goto $l3073;
            case 1: goto $l2991;
            case 0: goto $l2977;
            case 6: goto $l3085;
            case 3: goto $l3015;
            case 2: goto $l3006;
            case 4: goto $l3059;
        }
        $l3088:;
    }
    $tmp2962 = -1;
    goto $l2960;
    $l2960:;
    if (self->allowLambdas.value) goto $l3090; else goto $l3091;
    $l3091:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3092, (panda$core$Int64) { 1346 }, &$s3093);
    abort();
    $l3090:;
    switch ($tmp2962) {
        case 6: goto $l3086;
        case 3: goto $l3016;
        case 5: goto $l3074;
        case 0: goto $l2978;
        case 1: goto $l2992;
        case -1: goto $l3089;
        case 4: goto $l3060;
        case 2: goto $l3007;
    }
    $l3089:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3097;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3098;
    panda$core$Int64 $tmp3099;
    org$pandalanguage$pandac$ASTNode* $returnValue3102;
    org$pandalanguage$pandac$ASTNode* $tmp3103;
    org$pandalanguage$pandac$ASTNode* expr3106 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3107;
    org$pandalanguage$pandac$ASTNode* $tmp3108;
    org$pandalanguage$pandac$ASTNode* $tmp3110;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3113;
    panda$core$Int64 $tmp3114;
    org$pandalanguage$pandac$ASTNode* $tmp3117;
    panda$collections$Array* whens3120 = NULL;
    panda$collections$Array* $tmp3121;
    panda$collections$Array* $tmp3122;
    panda$collections$Array* other3124 = NULL;
    panda$collections$Array* $tmp3125;
    org$pandalanguage$pandac$parser$Token token3128;
    org$pandalanguage$pandac$parser$Token$Kind $match$1414_133130;
    panda$core$Int64 $tmp3131;
    panda$core$Int64 $tmp3133;
    org$pandalanguage$pandac$ASTNode* w3138 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3139;
    org$pandalanguage$pandac$ASTNode* $tmp3140;
    org$pandalanguage$pandac$ASTNode* $tmp3142;
    panda$core$Int64 $tmp3147;
    org$pandalanguage$pandac$parser$Token o3149;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3151;
    panda$core$Int64 $tmp3152;
    org$pandalanguage$pandac$ASTNode* $tmp3155;
    panda$collections$Array* $tmp3158;
    panda$collections$Array* $tmp3159;
    panda$collections$Array* $tmp3160;
    org$pandalanguage$pandac$parser$Token$Kind $match$1430_253164;
    panda$core$Int64 $tmp3166;
    panda$core$Int64 $tmp3170;
    panda$core$Int64 $tmp3173;
    panda$core$Int64 $tmp3177;
    org$pandalanguage$pandac$ASTNode* stmt3183 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3184;
    org$pandalanguage$pandac$ASTNode* $tmp3185;
    org$pandalanguage$pandac$ASTNode* $tmp3187;
    org$pandalanguage$pandac$ASTNode* stmt3196 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3197;
    org$pandalanguage$pandac$ASTNode* $tmp3198;
    org$pandalanguage$pandac$ASTNode* $tmp3200;
    panda$core$String* $tmp3205;
    panda$core$String* $tmp3207;
    panda$core$String* $tmp3208;
    panda$core$String* $tmp3210;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3216;
    panda$core$Int64 $tmp3217;
    org$pandalanguage$pandac$ASTNode* $tmp3220;
    org$pandalanguage$pandac$ASTNode* $tmp3223;
    org$pandalanguage$pandac$ASTNode* $tmp3224;
    panda$core$Int64 $tmp3226;
    panda$collections$ImmutableArray* $tmp3227;
    panda$collections$ImmutableArray* $tmp3229;
    org$pandalanguage$pandac$ASTNode* $tmp3233;
    org$pandalanguage$pandac$ASTNode* $tmp3234;
    panda$core$Int64 $tmp3236;
    panda$collections$ImmutableArray* $tmp3237;
    int $tmp3096;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3099, 38);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3098, $tmp3099);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3101 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3098, &$s3100);
        start3097 = $tmp3101;
        if (((panda$core$Bit) { !start3097.nonnull }).value) {
        {
            $tmp3103 = NULL;
            $returnValue3102 = $tmp3103;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3103));
            $tmp3096 = 0;
            goto $l3094;
            $l3104:;
            return $returnValue3102;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3109 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3108 = $tmp3109;
        $tmp3107 = $tmp3108;
        expr3106 = $tmp3107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3108));
        if (((panda$core$Bit) { expr3106 == NULL }).value) {
        {
            $tmp3110 = NULL;
            $returnValue3102 = $tmp3110;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3110));
            $tmp3096 = 1;
            goto $l3094;
            $l3111:;
            return $returnValue3102;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3114, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3113, $tmp3114);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3116 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3113, &$s3115);
        if (((panda$core$Bit) { !$tmp3116.nonnull }).value) {
        {
            $tmp3117 = NULL;
            $returnValue3102 = $tmp3117;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3117));
            $tmp3096 = 2;
            goto $l3094;
            $l3118:;
            return $returnValue3102;
        }
        }
        panda$collections$Array* $tmp3123 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3123);
        $tmp3122 = $tmp3123;
        $tmp3121 = $tmp3122;
        whens3120 = $tmp3121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3122));
        $tmp3125 = NULL;
        other3124 = $tmp3125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3125));
        $l3126:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3129 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token3128 = $tmp3129;
            {
                $match$1414_133130 = token3128.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3131, 100);
                panda$core$Bit $tmp3132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1414_133130.$rawValue, $tmp3131);
                if ($tmp3132.value) {
                {
                    goto $l3127;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3133, 39);
                panda$core$Bit $tmp3134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1414_133130.$rawValue, $tmp3133);
                if ($tmp3134.value) {
                {
                    int $tmp3137;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3141 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3140 = $tmp3141;
                        $tmp3139 = $tmp3140;
                        w3138 = $tmp3139;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3139));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3140));
                        if (((panda$core$Bit) { w3138 == NULL }).value) {
                        {
                            $tmp3142 = NULL;
                            $returnValue3102 = $tmp3142;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3142));
                            $tmp3137 = 0;
                            goto $l3135;
                            $l3143:;
                            $tmp3096 = 3;
                            goto $l3094;
                            $l3144:;
                            return $returnValue3102;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens3120, ((panda$core$Object*) w3138));
                    }
                    $tmp3137 = -1;
                    goto $l3135;
                    $l3135:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3138));
                    w3138 = NULL;
                    switch ($tmp3137) {
                        case 0: goto $l3143;
                        case -1: goto $l3146;
                    }
                    $l3146:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3147, 40);
                panda$core$Bit $tmp3148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1414_133130.$rawValue, $tmp3147);
                if ($tmp3148.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3150 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o3149 = $tmp3150;
                    panda$core$Int64$init$builtin_int64(&$tmp3152, 95);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3151, $tmp3152);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3154 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3151, &$s3153);
                    if (((panda$core$Bit) { !$tmp3154.nonnull }).value) {
                    {
                        $tmp3155 = NULL;
                        $returnValue3102 = $tmp3155;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3155));
                        $tmp3096 = 4;
                        goto $l3094;
                        $l3156:;
                        return $returnValue3102;
                    }
                    }
                    {
                        $tmp3158 = other3124;
                        panda$collections$Array* $tmp3161 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp3161);
                        $tmp3160 = $tmp3161;
                        $tmp3159 = $tmp3160;
                        other3124 = $tmp3159;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3159));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3160));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3158));
                    }
                    $l3162:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp3165 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1430_253164 = $tmp3165.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp3166, 100);
                            panda$core$Bit $tmp3167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1430_253164.$rawValue, $tmp3166);
                            if ($tmp3167.value) {
                            {
                                goto $l3163;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp3170, 28);
                            panda$core$Bit $tmp3171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1430_253164.$rawValue, $tmp3170);
                            bool $tmp3169 = $tmp3171.value;
                            if ($tmp3169) goto $l3172;
                            panda$core$Int64$init$builtin_int64(&$tmp3173, 29);
                            panda$core$Bit $tmp3174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1430_253164.$rawValue, $tmp3173);
                            $tmp3169 = $tmp3174.value;
                            $l3172:;
                            panda$core$Bit $tmp3175 = { $tmp3169 };
                            bool $tmp3168 = $tmp3175.value;
                            if ($tmp3168) goto $l3176;
                            panda$core$Int64$init$builtin_int64(&$tmp3177, 27);
                            panda$core$Bit $tmp3178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1430_253164.$rawValue, $tmp3177);
                            $tmp3168 = $tmp3178.value;
                            $l3176:;
                            panda$core$Bit $tmp3179 = { $tmp3168 };
                            if ($tmp3179.value) {
                            {
                                int $tmp3182;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3186 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3185 = $tmp3186;
                                    $tmp3184 = $tmp3185;
                                    stmt3183 = $tmp3184;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3184));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3185));
                                    if (((panda$core$Bit) { stmt3183 == NULL }).value) {
                                    {
                                        $tmp3187 = NULL;
                                        $returnValue3102 = $tmp3187;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3187));
                                        $tmp3182 = 0;
                                        goto $l3180;
                                        $l3188:;
                                        $tmp3096 = 5;
                                        goto $l3094;
                                        $l3189:;
                                        return $returnValue3102;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3124, ((panda$core$Object*) stmt3183));
                                    $tmp3182 = 1;
                                    goto $l3180;
                                    $l3191:;
                                    goto $l3163;
                                }
                                $l3180:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3183));
                                stmt3183 = NULL;
                                switch ($tmp3182) {
                                    case 0: goto $l3188;
                                    case 1: goto $l3191;
                                }
                                $l3192:;
                            }
                            }
                            else {
                            {
                                int $tmp3195;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3199 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3198 = $tmp3199;
                                    $tmp3197 = $tmp3198;
                                    stmt3196 = $tmp3197;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3197));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3198));
                                    if (((panda$core$Bit) { stmt3196 == NULL }).value) {
                                    {
                                        $tmp3200 = NULL;
                                        $returnValue3102 = $tmp3200;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3200));
                                        $tmp3195 = 0;
                                        goto $l3193;
                                        $l3201:;
                                        $tmp3096 = 6;
                                        goto $l3094;
                                        $l3202:;
                                        return $returnValue3102;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3124, ((panda$core$Object*) stmt3196));
                                }
                                $tmp3195 = -1;
                                goto $l3193;
                                $l3193:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3196));
                                stmt3196 = NULL;
                                switch ($tmp3195) {
                                    case 0: goto $l3201;
                                    case -1: goto $l3204;
                                }
                                $l3204:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l3163:;
                    goto $l3127;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp3211 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3128);
                    $tmp3210 = $tmp3211;
                    panda$core$String* $tmp3212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3209, $tmp3210);
                    $tmp3208 = $tmp3212;
                    panda$core$String* $tmp3214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, &$s3213);
                    $tmp3207 = $tmp3214;
                    panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3206, $tmp3207);
                    $tmp3205 = $tmp3215;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token3128, $tmp3205);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3205));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3207));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3208));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3210));
                }
                }
                }
                }
            }
        }
        }
        $l3127:;
        panda$core$Int64$init$builtin_int64(&$tmp3217, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3216, $tmp3217);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3219 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3216, &$s3218);
        if (((panda$core$Bit) { !$tmp3219.nonnull }).value) {
        {
            $tmp3220 = NULL;
            $returnValue3102 = $tmp3220;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3220));
            $tmp3096 = 7;
            goto $l3094;
            $l3221:;
            return $returnValue3102;
        }
        }
        if (((panda$core$Bit) { other3124 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3225 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3226, 25);
            panda$collections$ImmutableArray* $tmp3228 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3120);
            $tmp3227 = $tmp3228;
            panda$collections$ImmutableArray* $tmp3230 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other3124);
            $tmp3229 = $tmp3230;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3225, $tmp3226, ((org$pandalanguage$pandac$parser$Token) start3097.value).position, expr3106, $tmp3227, $tmp3229);
            $tmp3224 = $tmp3225;
            $tmp3223 = $tmp3224;
            $returnValue3102 = $tmp3223;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3223));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3224));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3229));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3227));
            $tmp3096 = 8;
            goto $l3094;
            $l3231:;
            return $returnValue3102;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3235 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3236, 25);
        panda$collections$ImmutableArray* $tmp3238 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3120);
        $tmp3237 = $tmp3238;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3235, $tmp3236, ((org$pandalanguage$pandac$parser$Token) start3097.value).position, expr3106, $tmp3237, NULL);
        $tmp3234 = $tmp3235;
        $tmp3233 = $tmp3234;
        $returnValue3102 = $tmp3233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3234));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3237));
        $tmp3096 = 9;
        goto $l3094;
        $l3239:;
        return $returnValue3102;
    }
    $l3094:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other3124));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens3120));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3106));
    expr3106 = NULL;
    whens3120 = NULL;
    switch ($tmp3096) {
        case 6: goto $l3202;
        case 5: goto $l3189;
        case 1: goto $l3111;
        case 2: goto $l3118;
        case 9: goto $l3239;
        case 7: goto $l3221;
        case 4: goto $l3156;
        case 0: goto $l3104;
        case 3: goto $l3144;
        case 8: goto $l3231;
    }
    $l3241:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3245;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3246;
    panda$core$Int64 $tmp3247;
    panda$collections$ImmutableArray* $returnValue3250;
    panda$collections$ImmutableArray* $tmp3251;
    panda$collections$Array* result3254 = NULL;
    panda$collections$Array* $tmp3255;
    panda$collections$Array* $tmp3256;
    org$pandalanguage$pandac$parser$Token$Kind $match$1474_133260;
    panda$core$Int64 $tmp3262;
    panda$core$Int64 $tmp3266;
    panda$core$Int64 $tmp3269;
    panda$core$Int64 $tmp3273;
    org$pandalanguage$pandac$ASTNode* stmt3279 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3280;
    org$pandalanguage$pandac$ASTNode* $tmp3281;
    panda$collections$ImmutableArray* $tmp3283;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3287;
    panda$core$Int64 $tmp3288;
    panda$collections$ImmutableArray* $tmp3291;
    org$pandalanguage$pandac$ASTNode* stmt3300 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3301;
    org$pandalanguage$pandac$ASTNode* $tmp3302;
    panda$collections$ImmutableArray* $tmp3304;
    panda$collections$ImmutableArray* $tmp3309;
    panda$collections$ImmutableArray* $tmp3310;
    int $tmp3244;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3247, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3246, $tmp3247);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3249 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3246, &$s3248);
        start3245 = $tmp3249;
        if (((panda$core$Bit) { !start3245.nonnull }).value) {
        {
            $tmp3251 = NULL;
            $returnValue3250 = $tmp3251;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3251));
            $tmp3244 = 0;
            goto $l3242;
            $l3252:;
            return $returnValue3250;
        }
        }
        panda$collections$Array* $tmp3257 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3257);
        $tmp3256 = $tmp3257;
        $tmp3255 = $tmp3256;
        result3254 = $tmp3255;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3256));
        $l3258:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp3261 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1474_133260 = $tmp3261.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3262, 100);
                panda$core$Bit $tmp3263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1474_133260.$rawValue, $tmp3262);
                if ($tmp3263.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l3259;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3266, 28);
                panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1474_133260.$rawValue, $tmp3266);
                bool $tmp3265 = $tmp3267.value;
                if ($tmp3265) goto $l3268;
                panda$core$Int64$init$builtin_int64(&$tmp3269, 29);
                panda$core$Bit $tmp3270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1474_133260.$rawValue, $tmp3269);
                $tmp3265 = $tmp3270.value;
                $l3268:;
                panda$core$Bit $tmp3271 = { $tmp3265 };
                bool $tmp3264 = $tmp3271.value;
                if ($tmp3264) goto $l3272;
                panda$core$Int64$init$builtin_int64(&$tmp3273, 27);
                panda$core$Bit $tmp3274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1474_133260.$rawValue, $tmp3273);
                $tmp3264 = $tmp3274.value;
                $l3272:;
                panda$core$Bit $tmp3275 = { $tmp3264 };
                if ($tmp3275.value) {
                {
                    int $tmp3278;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3282 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3281 = $tmp3282;
                        $tmp3280 = $tmp3281;
                        stmt3279 = $tmp3280;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3280));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3281));
                        if (((panda$core$Bit) { stmt3279 == NULL }).value) {
                        {
                            $tmp3283 = NULL;
                            $returnValue3250 = $tmp3283;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3283));
                            $tmp3278 = 0;
                            goto $l3276;
                            $l3284:;
                            $tmp3244 = 1;
                            goto $l3242;
                            $l3285:;
                            return $returnValue3250;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp3288, 100);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3287, $tmp3288);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp3290 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3287, &$s3289);
                        if (((panda$core$Bit) { !$tmp3290.nonnull }).value) {
                        {
                            $tmp3291 = NULL;
                            $returnValue3250 = $tmp3291;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3291));
                            $tmp3278 = 1;
                            goto $l3276;
                            $l3292:;
                            $tmp3244 = 2;
                            goto $l3242;
                            $l3293:;
                            return $returnValue3250;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3254, ((panda$core$Object*) stmt3279));
                        $tmp3278 = 2;
                        goto $l3276;
                        $l3295:;
                        goto $l3259;
                    }
                    $l3276:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3279));
                    stmt3279 = NULL;
                    switch ($tmp3278) {
                        case 0: goto $l3284;
                        case 1: goto $l3292;
                        case 2: goto $l3295;
                    }
                    $l3296:;
                }
                }
                else {
                {
                    int $tmp3299;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3303 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3302 = $tmp3303;
                        $tmp3301 = $tmp3302;
                        stmt3300 = $tmp3301;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3301));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3302));
                        if (((panda$core$Bit) { stmt3300 == NULL }).value) {
                        {
                            $tmp3304 = NULL;
                            $returnValue3250 = $tmp3304;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3304));
                            $tmp3299 = 0;
                            goto $l3297;
                            $l3305:;
                            $tmp3244 = 3;
                            goto $l3242;
                            $l3306:;
                            return $returnValue3250;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3254, ((panda$core$Object*) stmt3300));
                    }
                    $tmp3299 = -1;
                    goto $l3297;
                    $l3297:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3300));
                    stmt3300 = NULL;
                    switch ($tmp3299) {
                        case -1: goto $l3308;
                        case 0: goto $l3305;
                    }
                    $l3308:;
                }
                }
                }
            }
        }
        }
        $l3259:;
        panda$collections$ImmutableArray* $tmp3311 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3254);
        $tmp3310 = $tmp3311;
        $tmp3309 = $tmp3310;
        $returnValue3250 = $tmp3309;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3309));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3310));
        $tmp3244 = 4;
        goto $l3242;
        $l3312:;
        return $returnValue3250;
    }
    $l3242:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3254));
    result3254 = NULL;
    switch ($tmp3244) {
        case 3: goto $l3306;
        case 1: goto $l3285;
        case 2: goto $l3293;
        case 4: goto $l3312;
        case 0: goto $l3252;
    }
    $l3314:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements3318 = NULL;
    panda$collections$ImmutableArray* $tmp3319;
    panda$collections$ImmutableArray* $tmp3320;
    org$pandalanguage$pandac$ASTNode* $returnValue3322;
    org$pandalanguage$pandac$ASTNode* $tmp3323;
    org$pandalanguage$pandac$ASTNode* $tmp3326;
    org$pandalanguage$pandac$ASTNode* $tmp3327;
    panda$core$Int64 $tmp3329;
    org$pandalanguage$pandac$Position $tmp3330;
    int $tmp3317;
    {
        panda$collections$ImmutableArray* $tmp3321 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3320 = $tmp3321;
        $tmp3319 = $tmp3320;
        statements3318 = $tmp3319;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3320));
        if (((panda$core$Bit) { statements3318 == NULL }).value) {
        {
            $tmp3323 = NULL;
            $returnValue3322 = $tmp3323;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3323));
            $tmp3317 = 0;
            goto $l3315;
            $l3324:;
            return $returnValue3322;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3328 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3329, 6);
        org$pandalanguage$pandac$Position$init(&$tmp3330);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3328, $tmp3329, $tmp3330, statements3318);
        $tmp3327 = $tmp3328;
        $tmp3326 = $tmp3327;
        $returnValue3322 = $tmp3326;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3326));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3327));
        $tmp3317 = 1;
        goto $l3315;
        $l3331:;
        return $returnValue3322;
    }
    $l3315:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3318));
    statements3318 = NULL;
    switch ($tmp3317) {
        case 1: goto $l3331;
        case 0: goto $l3324;
    }
    $l3333:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start3337 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3338;
    org$pandalanguage$pandac$ASTNode* $tmp3339;
    org$pandalanguage$pandac$ASTNode* $returnValue3341;
    org$pandalanguage$pandac$ASTNode* $tmp3342;
    org$pandalanguage$pandac$parser$Token$Kind $match$1518_93345;
    panda$core$Int64 $tmp3362;
    panda$core$Int64 $tmp3365;
    panda$core$Int64 $tmp3369;
    panda$core$Int64 $tmp3373;
    panda$core$Int64 $tmp3377;
    panda$core$Int64 $tmp3381;
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
    org$pandalanguage$pandac$parser$Token op3427;
    org$pandalanguage$pandac$ASTNode* rvalue3429 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3430;
    org$pandalanguage$pandac$ASTNode* $tmp3431;
    org$pandalanguage$pandac$ASTNode* $tmp3433;
    org$pandalanguage$pandac$ASTNode* $tmp3437;
    org$pandalanguage$pandac$ASTNode* $tmp3438;
    panda$core$Int64 $tmp3440;
    panda$core$Int64 $tmp3447;
    org$pandalanguage$pandac$parser$Token op3454;
    org$pandalanguage$pandac$ASTNode* rvalue3456 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3457;
    org$pandalanguage$pandac$ASTNode* $tmp3458;
    org$pandalanguage$pandac$ASTNode* $tmp3460;
    org$pandalanguage$pandac$ASTNode* $tmp3464;
    org$pandalanguage$pandac$ASTNode* $tmp3465;
    panda$core$Int64 $tmp3467;
    org$pandalanguage$pandac$ASTNode* $tmp3474;
    int $tmp3336;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3340 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3339 = $tmp3340;
        $tmp3338 = $tmp3339;
        start3337 = $tmp3338;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3338));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3339));
        if (((panda$core$Bit) { start3337 == NULL }).value) {
        {
            $tmp3342 = NULL;
            $returnValue3341 = $tmp3342;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3342));
            $tmp3336 = 0;
            goto $l3334;
            $l3343:;
            return $returnValue3341;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3346 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1518_93345 = $tmp3346.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3362, 73);
            panda$core$Bit $tmp3363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3362);
            bool $tmp3361 = $tmp3363.value;
            if ($tmp3361) goto $l3364;
            panda$core$Int64$init$builtin_int64(&$tmp3365, 74);
            panda$core$Bit $tmp3366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3365);
            $tmp3361 = $tmp3366.value;
            $l3364:;
            panda$core$Bit $tmp3367 = { $tmp3361 };
            bool $tmp3360 = $tmp3367.value;
            if ($tmp3360) goto $l3368;
            panda$core$Int64$init$builtin_int64(&$tmp3369, 75);
            panda$core$Bit $tmp3370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3369);
            $tmp3360 = $tmp3370.value;
            $l3368:;
            panda$core$Bit $tmp3371 = { $tmp3360 };
            bool $tmp3359 = $tmp3371.value;
            if ($tmp3359) goto $l3372;
            panda$core$Int64$init$builtin_int64(&$tmp3373, 76);
            panda$core$Bit $tmp3374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3373);
            $tmp3359 = $tmp3374.value;
            $l3372:;
            panda$core$Bit $tmp3375 = { $tmp3359 };
            bool $tmp3358 = $tmp3375.value;
            if ($tmp3358) goto $l3376;
            panda$core$Int64$init$builtin_int64(&$tmp3377, 77);
            panda$core$Bit $tmp3378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3377);
            $tmp3358 = $tmp3378.value;
            $l3376:;
            panda$core$Bit $tmp3379 = { $tmp3358 };
            bool $tmp3357 = $tmp3379.value;
            if ($tmp3357) goto $l3380;
            panda$core$Int64$init$builtin_int64(&$tmp3381, 78);
            panda$core$Bit $tmp3382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3381);
            $tmp3357 = $tmp3382.value;
            $l3380:;
            panda$core$Bit $tmp3383 = { $tmp3357 };
            bool $tmp3356 = $tmp3383.value;
            if ($tmp3356) goto $l3384;
            panda$core$Int64$init$builtin_int64(&$tmp3385, 79);
            panda$core$Bit $tmp3386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3385);
            $tmp3356 = $tmp3386.value;
            $l3384:;
            panda$core$Bit $tmp3387 = { $tmp3356 };
            bool $tmp3355 = $tmp3387.value;
            if ($tmp3355) goto $l3388;
            panda$core$Int64$init$builtin_int64(&$tmp3389, 80);
            panda$core$Bit $tmp3390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3389);
            $tmp3355 = $tmp3390.value;
            $l3388:;
            panda$core$Bit $tmp3391 = { $tmp3355 };
            bool $tmp3354 = $tmp3391.value;
            if ($tmp3354) goto $l3392;
            panda$core$Int64$init$builtin_int64(&$tmp3393, 81);
            panda$core$Bit $tmp3394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3393);
            $tmp3354 = $tmp3394.value;
            $l3392:;
            panda$core$Bit $tmp3395 = { $tmp3354 };
            bool $tmp3353 = $tmp3395.value;
            if ($tmp3353) goto $l3396;
            panda$core$Int64$init$builtin_int64(&$tmp3397, 82);
            panda$core$Bit $tmp3398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3397);
            $tmp3353 = $tmp3398.value;
            $l3396:;
            panda$core$Bit $tmp3399 = { $tmp3353 };
            bool $tmp3352 = $tmp3399.value;
            if ($tmp3352) goto $l3400;
            panda$core$Int64$init$builtin_int64(&$tmp3401, 83);
            panda$core$Bit $tmp3402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3401);
            $tmp3352 = $tmp3402.value;
            $l3400:;
            panda$core$Bit $tmp3403 = { $tmp3352 };
            bool $tmp3351 = $tmp3403.value;
            if ($tmp3351) goto $l3404;
            panda$core$Int64$init$builtin_int64(&$tmp3405, 84);
            panda$core$Bit $tmp3406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3405);
            $tmp3351 = $tmp3406.value;
            $l3404:;
            panda$core$Bit $tmp3407 = { $tmp3351 };
            bool $tmp3350 = $tmp3407.value;
            if ($tmp3350) goto $l3408;
            panda$core$Int64$init$builtin_int64(&$tmp3409, 85);
            panda$core$Bit $tmp3410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3409);
            $tmp3350 = $tmp3410.value;
            $l3408:;
            panda$core$Bit $tmp3411 = { $tmp3350 };
            bool $tmp3349 = $tmp3411.value;
            if ($tmp3349) goto $l3412;
            panda$core$Int64$init$builtin_int64(&$tmp3413, 86);
            panda$core$Bit $tmp3414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3413);
            $tmp3349 = $tmp3414.value;
            $l3412:;
            panda$core$Bit $tmp3415 = { $tmp3349 };
            bool $tmp3348 = $tmp3415.value;
            if ($tmp3348) goto $l3416;
            panda$core$Int64$init$builtin_int64(&$tmp3417, 87);
            panda$core$Bit $tmp3418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3417);
            $tmp3348 = $tmp3418.value;
            $l3416:;
            panda$core$Bit $tmp3419 = { $tmp3348 };
            bool $tmp3347 = $tmp3419.value;
            if ($tmp3347) goto $l3420;
            panda$core$Int64$init$builtin_int64(&$tmp3421, 88);
            panda$core$Bit $tmp3422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3421);
            $tmp3347 = $tmp3422.value;
            $l3420:;
            panda$core$Bit $tmp3423 = { $tmp3347 };
            if ($tmp3423.value) {
            {
                int $tmp3426;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3428 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3427 = $tmp3428;
                    org$pandalanguage$pandac$ASTNode* $tmp3432 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3431 = $tmp3432;
                    $tmp3430 = $tmp3431;
                    rvalue3429 = $tmp3430;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3430));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3431));
                    if (((panda$core$Bit) { rvalue3429 == NULL }).value) {
                    {
                        $tmp3433 = NULL;
                        $returnValue3341 = $tmp3433;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3433));
                        $tmp3426 = 0;
                        goto $l3424;
                        $l3434:;
                        $tmp3336 = 1;
                        goto $l3334;
                        $l3435:;
                        return $returnValue3341;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3439 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3440, 4);
                    org$pandalanguage$pandac$Position $tmp3442 = (($fn3441) start3337->$class->vtable[2])(start3337);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3439, $tmp3440, $tmp3442, start3337, op3427.kind, rvalue3429);
                    $tmp3438 = $tmp3439;
                    $tmp3437 = $tmp3438;
                    $returnValue3341 = $tmp3437;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3437));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3438));
                    $tmp3426 = 1;
                    goto $l3424;
                    $l3443:;
                    $tmp3336 = 2;
                    goto $l3334;
                    $l3444:;
                    return $returnValue3341;
                }
                $l3424:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3429));
                rvalue3429 = NULL;
                switch ($tmp3426) {
                    case 1: goto $l3443;
                    case 0: goto $l3434;
                }
                $l3446:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3447, 58);
            panda$core$Bit $tmp3448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_93345.$rawValue, $tmp3447);
            if ($tmp3448.value) {
            {
                int $tmp3451;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3452 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3452, &$s3453);
                    org$pandalanguage$pandac$parser$Token $tmp3455 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3454 = $tmp3455;
                    org$pandalanguage$pandac$ASTNode* $tmp3459 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3458 = $tmp3459;
                    $tmp3457 = $tmp3458;
                    rvalue3456 = $tmp3457;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3457));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3458));
                    if (((panda$core$Bit) { rvalue3456 == NULL }).value) {
                    {
                        $tmp3460 = NULL;
                        $returnValue3341 = $tmp3460;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3460));
                        $tmp3451 = 0;
                        goto $l3449;
                        $l3461:;
                        $tmp3336 = 3;
                        goto $l3334;
                        $l3462:;
                        return $returnValue3341;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3466 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3467, 4);
                    org$pandalanguage$pandac$Position $tmp3469 = (($fn3468) start3337->$class->vtable[2])(start3337);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3466, $tmp3467, $tmp3469, start3337, op3454.kind, rvalue3456);
                    $tmp3465 = $tmp3466;
                    $tmp3464 = $tmp3465;
                    $returnValue3341 = $tmp3464;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3464));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3465));
                    $tmp3451 = 1;
                    goto $l3449;
                    $l3470:;
                    $tmp3336 = 4;
                    goto $l3334;
                    $l3471:;
                    return $returnValue3341;
                }
                $l3449:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3456));
                rvalue3456 = NULL;
                switch ($tmp3451) {
                    case 0: goto $l3461;
                    case 1: goto $l3470;
                }
                $l3473:;
            }
            }
            else {
            {
                $tmp3474 = start3337;
                $returnValue3341 = $tmp3474;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3474));
                $tmp3336 = 5;
                goto $l3334;
                $l3475:;
                return $returnValue3341;
            }
            }
            }
        }
    }
    $tmp3336 = -1;
    goto $l3334;
    $l3334:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start3337));
    start3337 = NULL;
    switch ($tmp3336) {
        case 4: goto $l3471;
        case 2: goto $l3444;
        case -1: goto $l3477;
        case 1: goto $l3435;
        case 0: goto $l3343;
        case 5: goto $l3475;
        case 3: goto $l3462;
    }
    $l3477:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t3481 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3482;
    org$pandalanguage$pandac$ASTNode* $tmp3483;
    org$pandalanguage$pandac$ASTNode* $returnValue3485;
    org$pandalanguage$pandac$ASTNode* $tmp3486;
    org$pandalanguage$pandac$ASTNode* value3489 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3490;
    panda$core$Int64 $tmp3491;
    org$pandalanguage$pandac$ASTNode* $tmp3493;
    org$pandalanguage$pandac$ASTNode* $tmp3494;
    org$pandalanguage$pandac$ASTNode* $tmp3495;
    org$pandalanguage$pandac$ASTNode* $tmp3497;
    panda$core$Int64 $tmp3501;
    org$pandalanguage$pandac$ASTNode* $tmp3505;
    org$pandalanguage$pandac$ASTNode* $tmp3506;
    org$pandalanguage$pandac$ASTNode* $tmp3507;
    org$pandalanguage$pandac$ASTNode* $tmp3509;
    org$pandalanguage$pandac$ASTNode* $tmp3512;
    org$pandalanguage$pandac$ASTNode* $tmp3513;
    org$pandalanguage$pandac$ASTNode* $tmp3514;
    org$pandalanguage$pandac$ASTNode* $tmp3515;
    panda$core$Int64 $tmp3517;
    int $tmp3480;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3484 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3483 = $tmp3484;
        $tmp3482 = $tmp3483;
        t3481 = $tmp3482;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3482));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3483));
        if (((panda$core$Bit) { t3481 == NULL }).value) {
        {
            $tmp3486 = NULL;
            $returnValue3485 = $tmp3486;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3486));
            $tmp3480 = 0;
            goto $l3478;
            $l3487:;
            return $returnValue3485;
        }
        }
        memset(&value3489, 0, sizeof(value3489));
        panda$core$Int64$init$builtin_int64(&$tmp3491, 73);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3490, $tmp3491);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3492 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3490);
        if (((panda$core$Bit) { $tmp3492.nonnull }).value) {
        {
            {
                $tmp3493 = value3489;
                org$pandalanguage$pandac$ASTNode* $tmp3496 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3495 = $tmp3496;
                $tmp3494 = $tmp3495;
                value3489 = $tmp3494;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3494));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3495));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3493));
            }
            if (((panda$core$Bit) { value3489 == NULL }).value) {
            {
                $tmp3497 = NULL;
                $returnValue3485 = $tmp3497;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3497));
                $tmp3480 = 1;
                goto $l3478;
                $l3498:;
                return $returnValue3485;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp3500 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3501, 58);
        panda$core$Bit $tmp3502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3500.kind.$rawValue, $tmp3501);
        if ($tmp3502.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3503 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3503, &$s3504);
            {
                $tmp3505 = value3489;
                org$pandalanguage$pandac$ASTNode* $tmp3508 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3507 = $tmp3508;
                $tmp3506 = $tmp3507;
                value3489 = $tmp3506;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3506));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3507));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3505));
            }
            if (((panda$core$Bit) { value3489 == NULL }).value) {
            {
                $tmp3509 = NULL;
                $returnValue3485 = $tmp3509;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3509));
                $tmp3480 = 2;
                goto $l3478;
                $l3510:;
                return $returnValue3485;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3512 = value3489;
                $tmp3513 = NULL;
                value3489 = $tmp3513;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3513));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3512));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3516 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3517, 13);
        org$pandalanguage$pandac$Position $tmp3519 = (($fn3518) t3481->$class->vtable[2])(t3481);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3516, $tmp3517, $tmp3519, t3481, value3489);
        $tmp3515 = $tmp3516;
        $tmp3514 = $tmp3515;
        $returnValue3485 = $tmp3514;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3515));
        $tmp3480 = 3;
        goto $l3478;
        $l3520:;
        return $returnValue3485;
    }
    $l3478:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value3489));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3481));
    t3481 = NULL;
    switch ($tmp3480) {
        case 2: goto $l3510;
        case 3: goto $l3520;
        case 1: goto $l3498;
        case 0: goto $l3487;
    }
    $l3522:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3526;
    org$pandalanguage$pandac$Variable$Kind kind3528;
    org$pandalanguage$pandac$parser$Token$Kind $match$1577_93529;
    panda$core$Int64 $tmp3530;
    org$pandalanguage$pandac$Variable$Kind $tmp3532;
    panda$core$Int64 $tmp3533;
    panda$core$Int64 $tmp3534;
    org$pandalanguage$pandac$Variable$Kind $tmp3536;
    panda$core$Int64 $tmp3537;
    panda$core$Int64 $tmp3538;
    org$pandalanguage$pandac$Variable$Kind $tmp3540;
    panda$core$Int64 $tmp3541;
    panda$core$Int64 $tmp3542;
    org$pandalanguage$pandac$Variable$Kind $tmp3544;
    panda$core$Int64 $tmp3545;
    panda$collections$Array* declarations3547 = NULL;
    panda$collections$Array* $tmp3548;
    panda$collections$Array* $tmp3549;
    org$pandalanguage$pandac$ASTNode* decl3551 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3552;
    org$pandalanguage$pandac$ASTNode* $tmp3553;
    org$pandalanguage$pandac$ASTNode* $returnValue3555;
    org$pandalanguage$pandac$ASTNode* $tmp3556;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3562;
    panda$core$Int64 $tmp3563;
    org$pandalanguage$pandac$ASTNode* decl3568 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3569;
    org$pandalanguage$pandac$ASTNode* $tmp3570;
    org$pandalanguage$pandac$ASTNode* $tmp3572;
    org$pandalanguage$pandac$ASTNode* $tmp3577;
    org$pandalanguage$pandac$ASTNode* $tmp3578;
    panda$core$Int64 $tmp3580;
    panda$collections$ImmutableArray* $tmp3581;
    int $tmp3525;
    {
        org$pandalanguage$pandac$parser$Token $tmp3527 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start3526 = $tmp3527;
        memset(&kind3528, 0, sizeof(kind3528));
        {
            $match$1577_93529 = start3526.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3530, 23);
            panda$core$Bit $tmp3531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1577_93529.$rawValue, $tmp3530);
            if ($tmp3531.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3533, 0);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3532, $tmp3533);
                kind3528 = $tmp3532;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3534, 24);
            panda$core$Bit $tmp3535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1577_93529.$rawValue, $tmp3534);
            if ($tmp3535.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3537, 1);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3536, $tmp3537);
                kind3528 = $tmp3536;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3538, 25);
            panda$core$Bit $tmp3539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1577_93529.$rawValue, $tmp3538);
            if ($tmp3539.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3541, 3);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3540, $tmp3541);
                kind3528 = $tmp3540;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3542, 26);
            panda$core$Bit $tmp3543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1577_93529.$rawValue, $tmp3542);
            if ($tmp3543.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3545, 2);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3544, $tmp3545);
                kind3528 = $tmp3544;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start3526, &$s3546);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp3550 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3550);
        $tmp3549 = $tmp3550;
        $tmp3548 = $tmp3549;
        declarations3547 = $tmp3548;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3548));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3549));
        org$pandalanguage$pandac$ASTNode* $tmp3554 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3553 = $tmp3554;
        $tmp3552 = $tmp3553;
        decl3551 = $tmp3552;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3552));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3553));
        if (((panda$core$Bit) { decl3551 == NULL }).value) {
        {
            $tmp3556 = NULL;
            $returnValue3555 = $tmp3556;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3556));
            $tmp3525 = 0;
            goto $l3523;
            $l3557:;
            return $returnValue3555;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations3547, ((panda$core$Object*) decl3551));
        $l3559:;
        panda$core$Int64$init$builtin_int64(&$tmp3563, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3562, $tmp3563);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3564 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3562);
        bool $tmp3561 = ((panda$core$Bit) { $tmp3564.nonnull }).value;
        if (!$tmp3561) goto $l3560;
        {
            int $tmp3567;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3571 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3570 = $tmp3571;
                $tmp3569 = $tmp3570;
                decl3568 = $tmp3569;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3569));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3570));
                if (((panda$core$Bit) { decl3568 == NULL }).value) {
                {
                    $tmp3572 = NULL;
                    $returnValue3555 = $tmp3572;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3572));
                    $tmp3567 = 0;
                    goto $l3565;
                    $l3573:;
                    $tmp3525 = 1;
                    goto $l3523;
                    $l3574:;
                    return $returnValue3555;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations3547, ((panda$core$Object*) decl3568));
            }
            $tmp3567 = -1;
            goto $l3565;
            $l3565:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3568));
            decl3568 = NULL;
            switch ($tmp3567) {
                case 0: goto $l3573;
                case -1: goto $l3576;
            }
            $l3576:;
        }
        goto $l3559;
        $l3560:;
        org$pandalanguage$pandac$ASTNode* $tmp3579 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3580, 47);
        panda$collections$ImmutableArray* $tmp3582 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations3547);
        $tmp3581 = $tmp3582;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3579, $tmp3580, start3526.position, kind3528, $tmp3581);
        $tmp3578 = $tmp3579;
        $tmp3577 = $tmp3578;
        $returnValue3555 = $tmp3577;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3577));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3578));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3581));
        $tmp3525 = 2;
        goto $l3523;
        $l3583:;
        return $returnValue3555;
    }
    $l3523:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3551));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations3547));
    declarations3547 = NULL;
    decl3551 = NULL;
    switch ($tmp3525) {
        case 1: goto $l3574;
        case 2: goto $l3583;
        case 0: goto $l3557;
    }
    $l3585:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3589;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3590;
    panda$core$Int64 $tmp3591;
    org$pandalanguage$pandac$ASTNode* $returnValue3594;
    org$pandalanguage$pandac$ASTNode* $tmp3595;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3598;
    panda$core$Int64 $tmp3599;
    org$pandalanguage$pandac$ASTNode* $tmp3602;
    panda$core$Object* $tmp3605;
    panda$core$Bit $tmp3606;
    org$pandalanguage$pandac$ASTNode* target3608 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3609;
    org$pandalanguage$pandac$ASTNode* $tmp3610;
    panda$core$Int64 $tmp3612;
    panda$core$String* $tmp3613;
    panda$collections$Array* args3615 = NULL;
    panda$collections$Array* $tmp3616;
    panda$collections$Array* $tmp3617;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3619;
    panda$core$Int64 $tmp3620;
    org$pandalanguage$pandac$ASTNode* expr3625 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3626;
    org$pandalanguage$pandac$ASTNode* $tmp3627;
    panda$core$Object* $tmp3629;
    org$pandalanguage$pandac$ASTNode* $tmp3631;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3638;
    panda$core$Int64 $tmp3639;
    org$pandalanguage$pandac$ASTNode* $tmp3641;
    org$pandalanguage$pandac$ASTNode* $tmp3642;
    org$pandalanguage$pandac$ASTNode* $tmp3643;
    panda$core$Object* $tmp3645;
    org$pandalanguage$pandac$ASTNode* $tmp3647;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3651;
    panda$core$Int64 $tmp3652;
    panda$core$Object* $tmp3655;
    org$pandalanguage$pandac$ASTNode* $tmp3657;
    panda$core$Object* $tmp3662;
    org$pandalanguage$pandac$ASTNode* $tmp3664;
    org$pandalanguage$pandac$ASTNode* $tmp3665;
    panda$core$Int64 $tmp3667;
    panda$collections$ImmutableArray* $tmp3668;
    int $tmp3588;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3591, 22);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3590, $tmp3591);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3593 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3590, &$s3592);
        start3589 = $tmp3593;
        if (((panda$core$Bit) { !start3589.nonnull }).value) {
        {
            $tmp3595 = NULL;
            $returnValue3594 = $tmp3595;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3595));
            $tmp3588 = 0;
            goto $l3586;
            $l3596:;
            return $returnValue3594;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3599, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3598, $tmp3599);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3601 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3598, &$s3600);
        if (((panda$core$Bit) { !$tmp3601.nonnull }).value) {
        {
            $tmp3602 = NULL;
            $returnValue3594 = $tmp3602;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3602));
            $tmp3588 = 1;
            goto $l3586;
            $l3603:;
            return $returnValue3594;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp3606, true);
        panda$core$Bit$wrapper* $tmp3607;
        $tmp3607 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp3607->value = $tmp3606;
        $tmp3605 = ((panda$core$Object*) $tmp3607);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp3605);
        panda$core$Panda$unref$panda$core$Object($tmp3605);
        org$pandalanguage$pandac$ASTNode* $tmp3611 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3612, 20);
        panda$core$String* $tmp3614 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3589.value));
        $tmp3613 = $tmp3614;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3611, $tmp3612, ((org$pandalanguage$pandac$parser$Token) start3589.value).position, $tmp3613);
        $tmp3610 = $tmp3611;
        $tmp3609 = $tmp3610;
        target3608 = $tmp3609;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3609));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3610));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3613));
        panda$collections$Array* $tmp3618 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3618);
        $tmp3617 = $tmp3618;
        $tmp3616 = $tmp3617;
        args3615 = $tmp3616;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3616));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3617));
        panda$core$Int64$init$builtin_int64(&$tmp3620, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3619, $tmp3620);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3621 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3619);
        if (((panda$core$Bit) { !$tmp3621.nonnull }).value) {
        {
            int $tmp3624;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3628 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3627 = $tmp3628;
                $tmp3626 = $tmp3627;
                expr3625 = $tmp3626;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3626));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3627));
                if (((panda$core$Bit) { expr3625 == NULL }).value) {
                {
                    panda$core$Object* $tmp3630 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3629 = $tmp3630;
                    panda$core$Panda$unref$panda$core$Object($tmp3629);
                    $tmp3631 = NULL;
                    $returnValue3594 = $tmp3631;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3631));
                    $tmp3624 = 0;
                    goto $l3622;
                    $l3632:;
                    $tmp3588 = 2;
                    goto $l3586;
                    $l3633:;
                    return $returnValue3594;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args3615, ((panda$core$Object*) expr3625));
                $l3635:;
                panda$core$Int64$init$builtin_int64(&$tmp3639, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3638, $tmp3639);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3640 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3638);
                bool $tmp3637 = ((panda$core$Bit) { $tmp3640.nonnull }).value;
                if (!$tmp3637) goto $l3636;
                {
                    {
                        $tmp3641 = expr3625;
                        org$pandalanguage$pandac$ASTNode* $tmp3644 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3643 = $tmp3644;
                        $tmp3642 = $tmp3643;
                        expr3625 = $tmp3642;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3642));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3643));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3641));
                    }
                    if (((panda$core$Bit) { expr3625 == NULL }).value) {
                    {
                        panda$core$Object* $tmp3646 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp3645 = $tmp3646;
                        panda$core$Panda$unref$panda$core$Object($tmp3645);
                        $tmp3647 = NULL;
                        $returnValue3594 = $tmp3647;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3647));
                        $tmp3624 = 1;
                        goto $l3622;
                        $l3648:;
                        $tmp3588 = 3;
                        goto $l3586;
                        $l3649:;
                        return $returnValue3594;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args3615, ((panda$core$Object*) expr3625));
                }
                goto $l3635;
                $l3636:;
                panda$core$Int64$init$builtin_int64(&$tmp3652, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3651, $tmp3652);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3654 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3651, &$s3653);
                if (((panda$core$Bit) { !$tmp3654.nonnull }).value) {
                {
                    panda$core$Object* $tmp3656 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3655 = $tmp3656;
                    panda$core$Panda$unref$panda$core$Object($tmp3655);
                    $tmp3657 = NULL;
                    $returnValue3594 = $tmp3657;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3657));
                    $tmp3624 = 2;
                    goto $l3622;
                    $l3658:;
                    $tmp3588 = 4;
                    goto $l3586;
                    $l3659:;
                    return $returnValue3594;
                }
                }
            }
            $tmp3624 = -1;
            goto $l3622;
            $l3622:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3625));
            expr3625 = NULL;
            switch ($tmp3624) {
                case 2: goto $l3658;
                case 1: goto $l3648;
                case -1: goto $l3661;
                case 0: goto $l3632;
            }
            $l3661:;
        }
        }
        panda$core$Object* $tmp3663 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp3662 = $tmp3663;
        panda$core$Panda$unref$panda$core$Object($tmp3662);
        org$pandalanguage$pandac$ASTNode* $tmp3666 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3667, 8);
        panda$collections$ImmutableArray* $tmp3669 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3615);
        $tmp3668 = $tmp3669;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3666, $tmp3667, ((org$pandalanguage$pandac$parser$Token) start3589.value).position, target3608, $tmp3668);
        $tmp3665 = $tmp3666;
        $tmp3664 = $tmp3665;
        $returnValue3594 = $tmp3664;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3664));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3665));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3668));
        $tmp3588 = 5;
        goto $l3586;
        $l3670:;
        return $returnValue3594;
    }
    $l3586:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args3615));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target3608));
    target3608 = NULL;
    args3615 = NULL;
    switch ($tmp3588) {
        case 1: goto $l3603;
        case 3: goto $l3649;
        case 4: goto $l3659;
        case 2: goto $l3633;
        case 0: goto $l3596;
        case 5: goto $l3670;
    }
    $l3672:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3673;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3674;
    panda$core$Int64 $tmp3675;
    org$pandalanguage$pandac$ASTNode* $returnValue3678;
    org$pandalanguage$pandac$ASTNode* $tmp3679;
    org$pandalanguage$pandac$parser$Token$nullable label3681;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3682;
    panda$core$Int64 $tmp3683;
    org$pandalanguage$pandac$ASTNode* $tmp3685;
    org$pandalanguage$pandac$ASTNode* $tmp3686;
    panda$core$Int64 $tmp3688;
    panda$core$String* $tmp3689;
    org$pandalanguage$pandac$ASTNode* $tmp3692;
    org$pandalanguage$pandac$ASTNode* $tmp3693;
    panda$core$Int64 $tmp3695;
    panda$core$Int64$init$builtin_int64(&$tmp3675, 28);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3674, $tmp3675);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3677 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3674, &$s3676);
    start3673 = $tmp3677;
    if (((panda$core$Bit) { !start3673.nonnull }).value) {
    {
        $tmp3679 = NULL;
        $returnValue3678 = $tmp3679;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3679));
        return $returnValue3678;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3683, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3682, $tmp3683);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3684 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3682);
    label3681 = $tmp3684;
    if (((panda$core$Bit) { label3681.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3687 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3688, 7);
        panda$core$String* $tmp3690 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3681.value));
        $tmp3689 = $tmp3690;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3687, $tmp3688, ((org$pandalanguage$pandac$parser$Token) start3673.value).position, $tmp3689);
        $tmp3686 = $tmp3687;
        $tmp3685 = $tmp3686;
        $returnValue3678 = $tmp3685;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3685));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3686));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3689));
        return $returnValue3678;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3694 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3695, 7);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3694, $tmp3695, ((org$pandalanguage$pandac$parser$Token) start3673.value).position, NULL);
    $tmp3693 = $tmp3694;
    $tmp3692 = $tmp3693;
    $returnValue3678 = $tmp3692;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3692));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3693));
    return $returnValue3678;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3697;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3698;
    panda$core$Int64 $tmp3699;
    org$pandalanguage$pandac$ASTNode* $returnValue3702;
    org$pandalanguage$pandac$ASTNode* $tmp3703;
    org$pandalanguage$pandac$parser$Token$nullable label3705;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3706;
    panda$core$Int64 $tmp3707;
    org$pandalanguage$pandac$ASTNode* $tmp3709;
    org$pandalanguage$pandac$ASTNode* $tmp3710;
    panda$core$Int64 $tmp3712;
    panda$core$String* $tmp3713;
    org$pandalanguage$pandac$ASTNode* $tmp3716;
    org$pandalanguage$pandac$ASTNode* $tmp3717;
    panda$core$Int64 $tmp3719;
    panda$core$Int64$init$builtin_int64(&$tmp3699, 29);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3698, $tmp3699);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3701 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3698, &$s3700);
    start3697 = $tmp3701;
    if (((panda$core$Bit) { !start3697.nonnull }).value) {
    {
        $tmp3703 = NULL;
        $returnValue3702 = $tmp3703;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3703));
        return $returnValue3702;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3707, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3706, $tmp3707);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3708 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3706);
    label3705 = $tmp3708;
    if (((panda$core$Bit) { label3705.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3711 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3712, 12);
        panda$core$String* $tmp3714 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3705.value));
        $tmp3713 = $tmp3714;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3711, $tmp3712, ((org$pandalanguage$pandac$parser$Token) start3697.value).position, $tmp3713);
        $tmp3710 = $tmp3711;
        $tmp3709 = $tmp3710;
        $returnValue3702 = $tmp3709;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3709));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3710));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3713));
        return $returnValue3702;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3718 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3719, 12);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3718, $tmp3719, ((org$pandalanguage$pandac$parser$Token) start3697.value).position, NULL);
    $tmp3717 = $tmp3718;
    $tmp3716 = $tmp3717;
    $returnValue3702 = $tmp3716;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3716));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3717));
    return $returnValue3702;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3721;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3722;
    panda$core$Int64 $tmp3723;
    org$pandalanguage$pandac$ASTNode* $returnValue3726;
    org$pandalanguage$pandac$ASTNode* $tmp3727;
    org$pandalanguage$pandac$parser$Token$Kind $match$1681_93729;
    panda$core$Int64 $tmp3733;
    panda$core$Int64 $tmp3736;
    panda$core$Int64 $tmp3740;
    org$pandalanguage$pandac$ASTNode* $tmp3743;
    org$pandalanguage$pandac$ASTNode* $tmp3744;
    panda$core$Int64 $tmp3746;
    panda$collections$Array* children3751 = NULL;
    panda$collections$Array* $tmp3752;
    panda$collections$Array* $tmp3753;
    org$pandalanguage$pandac$ASTNode* expr3755 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3756;
    org$pandalanguage$pandac$ASTNode* $tmp3757;
    org$pandalanguage$pandac$ASTNode* $tmp3759;
    org$pandalanguage$pandac$ASTNode* $tmp3762;
    org$pandalanguage$pandac$ASTNode* $tmp3763;
    panda$core$Int64 $tmp3765;
    panda$core$Int64$init$builtin_int64(&$tmp3723, 27);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3722, $tmp3723);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3725 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3722, &$s3724);
    start3721 = $tmp3725;
    if (((panda$core$Bit) { !start3721.nonnull }).value) {
    {
        $tmp3727 = NULL;
        $returnValue3726 = $tmp3727;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3727));
        return $returnValue3726;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp3730 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1681_93729 = $tmp3730.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3733, 100);
        panda$core$Bit $tmp3734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1681_93729.$rawValue, $tmp3733);
        bool $tmp3732 = $tmp3734.value;
        if ($tmp3732) goto $l3735;
        panda$core$Int64$init$builtin_int64(&$tmp3736, 39);
        panda$core$Bit $tmp3737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1681_93729.$rawValue, $tmp3736);
        $tmp3732 = $tmp3737.value;
        $l3735:;
        panda$core$Bit $tmp3738 = { $tmp3732 };
        bool $tmp3731 = $tmp3738.value;
        if ($tmp3731) goto $l3739;
        panda$core$Int64$init$builtin_int64(&$tmp3740, 40);
        panda$core$Bit $tmp3741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1681_93729.$rawValue, $tmp3740);
        $tmp3731 = $tmp3741.value;
        $l3739:;
        panda$core$Bit $tmp3742 = { $tmp3731 };
        if ($tmp3742.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3745 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3746, 36);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3745, $tmp3746, ((org$pandalanguage$pandac$parser$Token) start3721.value).position, NULL);
            $tmp3744 = $tmp3745;
            $tmp3743 = $tmp3744;
            $returnValue3726 = $tmp3743;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3743));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3744));
            return $returnValue3726;
        }
        }
        else {
        {
            int $tmp3750;
            {
                panda$collections$Array* $tmp3754 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp3754);
                $tmp3753 = $tmp3754;
                $tmp3752 = $tmp3753;
                children3751 = $tmp3752;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3752));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3753));
                org$pandalanguage$pandac$ASTNode* $tmp3758 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3757 = $tmp3758;
                $tmp3756 = $tmp3757;
                expr3755 = $tmp3756;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3756));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3757));
                if (((panda$core$Bit) { expr3755 == NULL }).value) {
                {
                    $tmp3759 = NULL;
                    $returnValue3726 = $tmp3759;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3759));
                    $tmp3750 = 0;
                    goto $l3748;
                    $l3760:;
                    return $returnValue3726;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3751, ((panda$core$Object*) expr3755));
                org$pandalanguage$pandac$ASTNode* $tmp3764 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp3765, 36);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3764, $tmp3765, ((org$pandalanguage$pandac$parser$Token) start3721.value).position, expr3755);
                $tmp3763 = $tmp3764;
                $tmp3762 = $tmp3763;
                $returnValue3726 = $tmp3762;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3762));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3763));
                $tmp3750 = 1;
                goto $l3748;
                $l3766:;
                return $returnValue3726;
            }
            $l3748:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3755));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children3751));
            children3751 = NULL;
            expr3755 = NULL;
            switch ($tmp3750) {
                case 1: goto $l3766;
                case 0: goto $l3760;
            }
            $l3768:;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1699_93769;
    panda$core$Int64 $tmp3771;
    org$pandalanguage$pandac$ASTNode* $returnValue3773;
    org$pandalanguage$pandac$ASTNode* $tmp3774;
    org$pandalanguage$pandac$ASTNode* $tmp3775;
    panda$core$Int64 $tmp3778;
    org$pandalanguage$pandac$ASTNode* $tmp3780;
    org$pandalanguage$pandac$ASTNode* $tmp3781;
    panda$core$Int64 $tmp3784;
    org$pandalanguage$pandac$ASTNode* $tmp3786;
    org$pandalanguage$pandac$ASTNode* $tmp3787;
    panda$core$Bit $tmp3790;
    {
        org$pandalanguage$pandac$parser$Token $tmp3770 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1699_93769 = $tmp3770.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3771, 28);
        panda$core$Bit $tmp3772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1699_93769.$rawValue, $tmp3771);
        if ($tmp3772.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3776 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3775 = $tmp3776;
            $tmp3774 = $tmp3775;
            $returnValue3773 = $tmp3774;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3774));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3775));
            return $returnValue3773;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3778, 29);
        panda$core$Bit $tmp3779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1699_93769.$rawValue, $tmp3778);
        if ($tmp3779.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3782 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3781 = $tmp3782;
            $tmp3780 = $tmp3781;
            $returnValue3773 = $tmp3780;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3780));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3781));
            return $returnValue3773;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3784, 27);
        panda$core$Bit $tmp3785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1699_93769.$rawValue, $tmp3784);
        if ($tmp3785.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3788 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3787 = $tmp3788;
            $tmp3786 = $tmp3787;
            $returnValue3773 = $tmp3786;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3786));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3787));
            return $returnValue3773;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp3790, false);
            if ($tmp3790.value) goto $l3791; else goto $l3792;
            $l3792:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3793, (panda$core$Int64) { 1703 });
            abort();
            $l3791:;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1711_93794;
    panda$core$Int64 $tmp3796;
    org$pandalanguage$pandac$ASTNode* $returnValue3798;
    org$pandalanguage$pandac$ASTNode* $tmp3799;
    org$pandalanguage$pandac$ASTNode* $tmp3800;
    panda$core$Int64 $tmp3803;
    org$pandalanguage$pandac$ASTNode* $tmp3805;
    org$pandalanguage$pandac$ASTNode* $tmp3806;
    panda$core$Int64 $tmp3809;
    org$pandalanguage$pandac$ASTNode* $tmp3811;
    org$pandalanguage$pandac$ASTNode* $tmp3812;
    panda$core$Int64 $tmp3815;
    org$pandalanguage$pandac$ASTNode* $tmp3817;
    org$pandalanguage$pandac$ASTNode* $tmp3818;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3821;
    panda$core$Int64 $tmp3822;
    org$pandalanguage$pandac$ASTNode* $tmp3824;
    {
        org$pandalanguage$pandac$parser$Token $tmp3795 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1711_93794 = $tmp3795.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3796, 30);
        panda$core$Bit $tmp3797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1711_93794.$rawValue, $tmp3796);
        if ($tmp3797.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3801 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3800 = $tmp3801;
            $tmp3799 = $tmp3800;
            $returnValue3798 = $tmp3799;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3799));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3800));
            return $returnValue3798;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3803, 32);
        panda$core$Bit $tmp3804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1711_93794.$rawValue, $tmp3803);
        if ($tmp3804.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3807 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3806 = $tmp3807;
            $tmp3805 = $tmp3806;
            $returnValue3798 = $tmp3805;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3805));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3806));
            return $returnValue3798;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3809, 35);
        panda$core$Bit $tmp3810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1711_93794.$rawValue, $tmp3809);
        if ($tmp3810.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3813 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3812 = $tmp3813;
            $tmp3811 = $tmp3812;
            $returnValue3798 = $tmp3811;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3811));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3812));
            return $returnValue3798;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3815, 31);
        panda$core$Bit $tmp3816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1711_93794.$rawValue, $tmp3815);
        if ($tmp3816.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3819 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3818 = $tmp3819;
            $tmp3817 = $tmp3818;
            $returnValue3798 = $tmp3817;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3817));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3818));
            return $returnValue3798;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3822, 30);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3821, $tmp3822);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3821, &$s3823);
            $tmp3824 = NULL;
            $returnValue3798 = $tmp3824;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3824));
            return $returnValue3798;
        }
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3829;
    org$pandalanguage$pandac$parser$Token$nullable start3830;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3831;
    panda$core$Int64 $tmp3832;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3834;
    panda$core$Int64 $tmp3835;
    org$pandalanguage$pandac$ASTNode* $returnValue3838;
    org$pandalanguage$pandac$ASTNode* $tmp3839;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3842;
    panda$core$Int64 $tmp3843;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3844;
    panda$core$Int64 $tmp3845;
    org$pandalanguage$pandac$parser$Token$nullable name3846;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3847;
    panda$core$Int64 $tmp3848;
    org$pandalanguage$pandac$ASTNode* $tmp3851;
    panda$collections$ImmutableArray* params3854 = NULL;
    panda$collections$ImmutableArray* $tmp3855;
    panda$collections$ImmutableArray* $tmp3856;
    org$pandalanguage$pandac$ASTNode* $tmp3858;
    org$pandalanguage$pandac$ASTNode* returnType3861 = NULL;
    panda$core$Int64 $tmp3863;
    org$pandalanguage$pandac$ASTNode* $tmp3865;
    org$pandalanguage$pandac$ASTNode* $tmp3866;
    org$pandalanguage$pandac$ASTNode* $tmp3867;
    org$pandalanguage$pandac$ASTNode* $tmp3869;
    org$pandalanguage$pandac$ASTNode* $tmp3872;
    org$pandalanguage$pandac$ASTNode* $tmp3873;
    panda$collections$ImmutableArray* body3874 = NULL;
    panda$collections$ImmutableArray* $tmp3875;
    panda$collections$ImmutableArray* $tmp3876;
    org$pandalanguage$pandac$ASTNode* $tmp3878;
    org$pandalanguage$pandac$ASTNode* $tmp3881;
    org$pandalanguage$pandac$ASTNode* $tmp3882;
    panda$core$Int64 $tmp3884;
    panda$collections$ImmutableArray* $tmp3885;
    panda$core$String* $tmp3887;
    int $tmp3828;
    {
        memset(&kind3829, 0, sizeof(kind3829));
        panda$core$Int64$init$builtin_int64(&$tmp3832, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3831, $tmp3832);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3833 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3831);
        start3830 = $tmp3833;
        if (((panda$core$Bit) { !start3830.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3835, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3834, $tmp3835);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3837 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3834, &$s3836);
            start3830 = $tmp3837;
            if (((panda$core$Bit) { !start3830.nonnull }).value) {
            {
                $tmp3839 = NULL;
                $returnValue3838 = $tmp3839;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3839));
                $tmp3828 = 0;
                goto $l3826;
                $l3840:;
                return $returnValue3838;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp3843, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3842, $tmp3843);
            kind3829 = $tmp3842;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3845, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3844, $tmp3845);
            kind3829 = $tmp3844;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3848, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3847, $tmp3848);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3850 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3847, &$s3849);
        name3846 = $tmp3850;
        if (((panda$core$Bit) { !name3846.nonnull }).value) {
        {
            $tmp3851 = NULL;
            $returnValue3838 = $tmp3851;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3851));
            $tmp3828 = 1;
            goto $l3826;
            $l3852:;
            return $returnValue3838;
        }
        }
        panda$collections$ImmutableArray* $tmp3857 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3856 = $tmp3857;
        $tmp3855 = $tmp3856;
        params3854 = $tmp3855;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3855));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3856));
        if (((panda$core$Bit) { params3854 == NULL }).value) {
        {
            $tmp3858 = NULL;
            $returnValue3838 = $tmp3858;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3858));
            $tmp3828 = 2;
            goto $l3826;
            $l3859:;
            return $returnValue3838;
        }
        }
        memset(&returnType3861, 0, sizeof(returnType3861));
        org$pandalanguage$pandac$parser$Token $tmp3862 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3863, 95);
        panda$core$Bit $tmp3864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3862.kind.$rawValue, $tmp3863);
        if ($tmp3864.value) {
        {
            {
                $tmp3865 = returnType3861;
                org$pandalanguage$pandac$ASTNode* $tmp3868 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3867 = $tmp3868;
                $tmp3866 = $tmp3867;
                returnType3861 = $tmp3866;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3866));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3867));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3865));
            }
            if (((panda$core$Bit) { returnType3861 == NULL }).value) {
            {
                $tmp3869 = NULL;
                $returnValue3838 = $tmp3869;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3869));
                $tmp3828 = 3;
                goto $l3826;
                $l3870:;
                return $returnValue3838;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3872 = returnType3861;
                $tmp3873 = NULL;
                returnType3861 = $tmp3873;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3873));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3872));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3877 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3876 = $tmp3877;
        $tmp3875 = $tmp3876;
        body3874 = $tmp3875;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3875));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3876));
        if (((panda$core$Bit) { body3874 == NULL }).value) {
        {
            $tmp3878 = NULL;
            $returnValue3838 = $tmp3878;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3878));
            $tmp3828 = 4;
            goto $l3826;
            $l3879:;
            return $returnValue3838;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3883 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3884, 26);
        panda$collections$ImmutableArray* $tmp3886 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3886);
        $tmp3885 = $tmp3886;
        panda$core$String* $tmp3888 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3846.value));
        $tmp3887 = $tmp3888;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3883, $tmp3884, ((org$pandalanguage$pandac$parser$Token) start3830.value).position, NULL, $tmp3885, kind3829, $tmp3887, NULL, params3854, returnType3861, body3874);
        $tmp3882 = $tmp3883;
        $tmp3881 = $tmp3882;
        $returnValue3838 = $tmp3881;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3881));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3882));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3887));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3885));
        $tmp3828 = 5;
        goto $l3826;
        $l3889:;
        return $returnValue3838;
    }
    $l3826:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3874));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3861));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3854));
    params3854 = NULL;
    body3874 = NULL;
    switch ($tmp3828) {
        case 3: goto $l3870;
        case 4: goto $l3879;
        case 5: goto $l3889;
        case 2: goto $l3859;
        case 1: goto $l3852;
        case 0: goto $l3840;
    }
    $l3891:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1770_93892;
    panda$core$Int64 $tmp3894;
    org$pandalanguage$pandac$ASTNode* $returnValue3896;
    org$pandalanguage$pandac$ASTNode* $tmp3897;
    org$pandalanguage$pandac$ASTNode* $tmp3898;
    panda$core$Int64 $tmp3901;
    org$pandalanguage$pandac$ASTNode* $tmp3903;
    org$pandalanguage$pandac$ASTNode* $tmp3904;
    panda$core$Int64 $tmp3907;
    org$pandalanguage$pandac$ASTNode* $tmp3909;
    org$pandalanguage$pandac$ASTNode* $tmp3910;
    panda$core$Int64 $tmp3913;
    org$pandalanguage$pandac$ASTNode* $tmp3915;
    org$pandalanguage$pandac$ASTNode* $tmp3916;
    panda$core$Int64 $tmp3919;
    org$pandalanguage$pandac$ASTNode* $tmp3921;
    org$pandalanguage$pandac$ASTNode* $tmp3922;
    panda$core$Int64 $tmp3925;
    org$pandalanguage$pandac$ASTNode* $tmp3927;
    org$pandalanguage$pandac$ASTNode* $tmp3928;
    panda$core$Int64 $tmp3931;
    org$pandalanguage$pandac$ASTNode* $tmp3933;
    org$pandalanguage$pandac$ASTNode* $tmp3934;
    panda$core$Int64 $tmp3937;
    org$pandalanguage$pandac$ASTNode* $tmp3939;
    org$pandalanguage$pandac$ASTNode* $tmp3940;
    panda$core$Int64 $tmp3943;
    org$pandalanguage$pandac$parser$Token id3945;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3947;
    panda$core$Int64 $tmp3948;
    org$pandalanguage$pandac$ASTNode* $tmp3950;
    org$pandalanguage$pandac$ASTNode* $tmp3951;
    panda$core$String* $tmp3952;
    org$pandalanguage$pandac$ASTNode* $tmp3956;
    org$pandalanguage$pandac$ASTNode* $tmp3957;
    panda$core$Int64 $tmp3961;
    panda$core$Int64 $tmp3964;
    org$pandalanguage$pandac$ASTNode* $tmp3967;
    org$pandalanguage$pandac$ASTNode* $tmp3968;
    panda$core$Int64 $tmp3974;
    panda$core$Int64 $tmp3977;
    panda$core$Int64 $tmp3981;
    panda$core$Int64 $tmp3985;
    org$pandalanguage$pandac$ASTNode* $tmp3988;
    org$pandalanguage$pandac$ASTNode* $tmp3989;
    panda$core$Int64 $tmp3992;
    org$pandalanguage$pandac$ASTNode* $tmp3994;
    org$pandalanguage$pandac$ASTNode* $tmp3995;
    panda$core$Int64 $tmp3999;
    panda$core$Int64 $tmp4002;
    org$pandalanguage$pandac$ASTNode* $tmp4005;
    org$pandalanguage$pandac$ASTNode* $tmp4006;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4009;
    panda$core$Int64 $tmp4010;
    org$pandalanguage$pandac$ASTNode* $tmp4012;
    {
        org$pandalanguage$pandac$parser$Token $tmp3893 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1770_93892 = $tmp3893.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3894, 36);
        panda$core$Bit $tmp3895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3894);
        if ($tmp3895.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3899 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3898 = $tmp3899;
            $tmp3897 = $tmp3898;
            $returnValue3896 = $tmp3897;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3897));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3898));
            return $returnValue3896;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3901, 32);
        panda$core$Bit $tmp3902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3901);
        if ($tmp3902.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3905 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3904 = $tmp3905;
            $tmp3903 = $tmp3904;
            $returnValue3896 = $tmp3903;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3903));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3904));
            return $returnValue3896;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3907, 31);
        panda$core$Bit $tmp3908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3907);
        if ($tmp3908.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3911 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3910 = $tmp3911;
            $tmp3909 = $tmp3910;
            $returnValue3896 = $tmp3909;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3909));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3910));
            return $returnValue3896;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3913, 30);
        panda$core$Bit $tmp3914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3913);
        if ($tmp3914.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3917 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3916 = $tmp3917;
            $tmp3915 = $tmp3916;
            $returnValue3896 = $tmp3915;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3915));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3916));
            return $returnValue3896;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3919, 35);
        panda$core$Bit $tmp3920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3919);
        if ($tmp3920.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3923 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3922 = $tmp3923;
            $tmp3921 = $tmp3922;
            $returnValue3896 = $tmp3921;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3921));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3922));
            return $returnValue3896;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3925, 44);
        panda$core$Bit $tmp3926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3925);
        if ($tmp3926.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3929 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3928 = $tmp3929;
            $tmp3927 = $tmp3928;
            $returnValue3896 = $tmp3927;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3927));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3928));
            return $returnValue3896;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3931, 38);
        panda$core$Bit $tmp3932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3931);
        if ($tmp3932.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3935 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3934 = $tmp3935;
            $tmp3933 = $tmp3934;
            $returnValue3896 = $tmp3933;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3933));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3934));
            return $returnValue3896;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3937, 99);
        panda$core$Bit $tmp3938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3937);
        if ($tmp3938.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3941 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3940 = $tmp3941;
            $tmp3939 = $tmp3940;
            $returnValue3896 = $tmp3939;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3939));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3940));
            return $returnValue3896;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3943, 48);
        panda$core$Bit $tmp3944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3943);
        if ($tmp3944.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3946 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id3945 = $tmp3946;
            panda$core$Int64$init$builtin_int64(&$tmp3948, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3947, $tmp3948);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3949 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3947);
            if (((panda$core$Bit) { $tmp3949.nonnull }).value) {
            {
                panda$core$String* $tmp3953 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id3945);
                $tmp3952 = $tmp3953;
                org$pandalanguage$pandac$ASTNode* $tmp3954 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp3952);
                $tmp3951 = $tmp3954;
                $tmp3950 = $tmp3951;
                $returnValue3896 = $tmp3950;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3950));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3952));
                return $returnValue3896;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id3945);
            org$pandalanguage$pandac$ASTNode* $tmp3958 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3957 = $tmp3958;
            $tmp3956 = $tmp3957;
            $returnValue3896 = $tmp3956;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3956));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3957));
            return $returnValue3896;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3961, 46);
        panda$core$Bit $tmp3962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3961);
        bool $tmp3960 = $tmp3962.value;
        if ($tmp3960) goto $l3963;
        panda$core$Int64$init$builtin_int64(&$tmp3964, 47);
        panda$core$Bit $tmp3965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3964);
        $tmp3960 = $tmp3965.value;
        $l3963:;
        panda$core$Bit $tmp3966 = { $tmp3960 };
        if ($tmp3966.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3969 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3968 = $tmp3969;
            $tmp3967 = $tmp3968;
            $returnValue3896 = $tmp3967;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3967));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3968));
            return $returnValue3896;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3974, 23);
        panda$core$Bit $tmp3975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3974);
        bool $tmp3973 = $tmp3975.value;
        if ($tmp3973) goto $l3976;
        panda$core$Int64$init$builtin_int64(&$tmp3977, 24);
        panda$core$Bit $tmp3978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3977);
        $tmp3973 = $tmp3978.value;
        $l3976:;
        panda$core$Bit $tmp3979 = { $tmp3973 };
        bool $tmp3972 = $tmp3979.value;
        if ($tmp3972) goto $l3980;
        panda$core$Int64$init$builtin_int64(&$tmp3981, 25);
        panda$core$Bit $tmp3982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3981);
        $tmp3972 = $tmp3982.value;
        $l3980:;
        panda$core$Bit $tmp3983 = { $tmp3972 };
        bool $tmp3971 = $tmp3983.value;
        if ($tmp3971) goto $l3984;
        panda$core$Int64$init$builtin_int64(&$tmp3985, 26);
        panda$core$Bit $tmp3986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3985);
        $tmp3971 = $tmp3986.value;
        $l3984:;
        panda$core$Bit $tmp3987 = { $tmp3971 };
        if ($tmp3987.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3990 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3989 = $tmp3990;
            $tmp3988 = $tmp3989;
            $returnValue3896 = $tmp3988;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3988));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3989));
            return $returnValue3896;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3992, 22);
        panda$core$Bit $tmp3993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3992);
        if ($tmp3993.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3996 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3995 = $tmp3996;
            $tmp3994 = $tmp3995;
            $returnValue3896 = $tmp3994;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3994));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3995));
            return $returnValue3896;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3999, 21);
        panda$core$Bit $tmp4000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp3999);
        bool $tmp3998 = $tmp4000.value;
        if ($tmp3998) goto $l4001;
        panda$core$Int64$init$builtin_int64(&$tmp4002, 20);
        panda$core$Bit $tmp4003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1770_93892.$rawValue, $tmp4002);
        $tmp3998 = $tmp4003.value;
        $l4001:;
        panda$core$Bit $tmp4004 = { $tmp3998 };
        if ($tmp4004.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4007 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4006 = $tmp4007;
            $tmp4005 = $tmp4006;
            $returnValue3896 = $tmp4005;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4005));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4006));
            return $returnValue3896;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4010, 36);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4009, $tmp4010);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4009, &$s4011);
            $tmp4012 = NULL;
            $returnValue3896 = $tmp4012;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4012));
            return $returnValue3896;
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
    org$pandalanguage$pandac$parser$Token$nullable start4017;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4018;
    panda$core$Int64 $tmp4019;
    org$pandalanguage$pandac$ASTNode* $returnValue4022;
    org$pandalanguage$pandac$ASTNode* $tmp4023;
    org$pandalanguage$pandac$parser$Token$nullable next4026;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4027;
    panda$core$Int64 $tmp4028;
    org$pandalanguage$pandac$ASTNode* $tmp4031;
    panda$core$MutableString* name4034 = NULL;
    panda$core$MutableString* $tmp4035;
    panda$core$MutableString* $tmp4036;
    panda$core$String* $tmp4038;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4042;
    panda$core$Int64 $tmp4043;
    panda$core$Char8 $tmp4045;
    panda$core$UInt8 $tmp4046;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4047;
    panda$core$Int64 $tmp4048;
    org$pandalanguage$pandac$ASTNode* $tmp4051;
    panda$core$String* $tmp4054;
    org$pandalanguage$pandac$ASTNode* $tmp4056;
    org$pandalanguage$pandac$ASTNode* $tmp4057;
    panda$core$Int64 $tmp4059;
    panda$core$String* $tmp4060;
    int $tmp4016;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4019, 14);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4018, $tmp4019);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4021 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4018, &$s4020);
        start4017 = $tmp4021;
        if (((panda$core$Bit) { !start4017.nonnull }).value) {
        {
            $tmp4023 = NULL;
            $returnValue4022 = $tmp4023;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4023));
            $tmp4016 = 0;
            goto $l4014;
            $l4024:;
            return $returnValue4022;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4028, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4027, $tmp4028);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4030 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4027, &$s4029);
        next4026 = $tmp4030;
        if (((panda$core$Bit) { !next4026.nonnull }).value) {
        {
            $tmp4031 = NULL;
            $returnValue4022 = $tmp4031;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4031));
            $tmp4016 = 1;
            goto $l4014;
            $l4032:;
            return $returnValue4022;
        }
        }
        panda$core$MutableString* $tmp4037 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4039 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4026.value));
        $tmp4038 = $tmp4039;
        panda$core$MutableString$init$panda$core$String($tmp4037, $tmp4038);
        $tmp4036 = $tmp4037;
        $tmp4035 = $tmp4036;
        name4034 = $tmp4035;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4035));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4036));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4038));
        $l4040:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4043, 98);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4042, $tmp4043);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4044 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4042);
            next4026 = $tmp4044;
            if (((panda$core$Bit) { !next4026.nonnull }).value) {
            {
                goto $l4041;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4046, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4045, $tmp4046);
            panda$core$MutableString$append$panda$core$Char8(name4034, $tmp4045);
            panda$core$Int64$init$builtin_int64(&$tmp4048, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4047, $tmp4048);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4050 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4047, &$s4049);
            next4026 = $tmp4050;
            if (((panda$core$Bit) { !next4026.nonnull }).value) {
            {
                $tmp4051 = NULL;
                $returnValue4022 = $tmp4051;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4051));
                $tmp4016 = 2;
                goto $l4014;
                $l4052:;
                return $returnValue4022;
            }
            }
            panda$core$String* $tmp4055 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4026.value));
            $tmp4054 = $tmp4055;
            panda$core$MutableString$append$panda$core$String(name4034, $tmp4054);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4054));
        }
        }
        $l4041:;
        org$pandalanguage$pandac$ASTNode* $tmp4058 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4059, 30);
        panda$core$String* $tmp4061 = panda$core$MutableString$finish$R$panda$core$String(name4034);
        $tmp4060 = $tmp4061;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4058, $tmp4059, ((org$pandalanguage$pandac$parser$Token) start4017.value).position, $tmp4060);
        $tmp4057 = $tmp4058;
        $tmp4056 = $tmp4057;
        $returnValue4022 = $tmp4056;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4056));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4057));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4060));
        $tmp4016 = 3;
        goto $l4014;
        $l4062:;
        return $returnValue4022;
    }
    $l4014:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4034));
    name4034 = NULL;
    switch ($tmp4016) {
        case 1: goto $l4032;
        case 3: goto $l4062;
        case 2: goto $l4052;
        case 0: goto $l4024;
    }
    $l4064:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4068;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4069;
    panda$core$Int64 $tmp4070;
    org$pandalanguage$pandac$ASTNode* $returnValue4073;
    org$pandalanguage$pandac$ASTNode* $tmp4074;
    org$pandalanguage$pandac$parser$Token$nullable next4077;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4078;
    panda$core$Int64 $tmp4079;
    org$pandalanguage$pandac$ASTNode* $tmp4082;
    panda$core$MutableString* name4085 = NULL;
    panda$core$MutableString* $tmp4086;
    panda$core$MutableString* $tmp4087;
    panda$core$String* $tmp4089;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4093;
    panda$core$Int64 $tmp4094;
    panda$core$Char8 $tmp4096;
    panda$core$UInt8 $tmp4097;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4098;
    panda$core$Int64 $tmp4099;
    org$pandalanguage$pandac$ASTNode* $tmp4102;
    panda$core$String* $tmp4105;
    org$pandalanguage$pandac$ASTNode* $tmp4107;
    org$pandalanguage$pandac$ASTNode* $tmp4108;
    panda$core$Int64 $tmp4110;
    panda$core$String* $tmp4111;
    int $tmp4067;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4070, 15);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4069, $tmp4070);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4072 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4069, &$s4071);
        start4068 = $tmp4072;
        if (((panda$core$Bit) { !start4068.nonnull }).value) {
        {
            $tmp4074 = NULL;
            $returnValue4073 = $tmp4074;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4074));
            $tmp4067 = 0;
            goto $l4065;
            $l4075:;
            return $returnValue4073;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4079, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4078, $tmp4079);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4081 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4078, &$s4080);
        next4077 = $tmp4081;
        if (((panda$core$Bit) { !next4077.nonnull }).value) {
        {
            $tmp4082 = NULL;
            $returnValue4073 = $tmp4082;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4082));
            $tmp4067 = 1;
            goto $l4065;
            $l4083:;
            return $returnValue4073;
        }
        }
        panda$core$MutableString* $tmp4088 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4090 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4077.value));
        $tmp4089 = $tmp4090;
        panda$core$MutableString$init$panda$core$String($tmp4088, $tmp4089);
        $tmp4087 = $tmp4088;
        $tmp4086 = $tmp4087;
        name4085 = $tmp4086;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4086));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4087));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4089));
        $l4091:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4094, 98);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4093, $tmp4094);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4095 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4093);
            next4077 = $tmp4095;
            if (((panda$core$Bit) { !next4077.nonnull }).value) {
            {
                goto $l4092;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4097, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4096, $tmp4097);
            panda$core$MutableString$append$panda$core$Char8(name4085, $tmp4096);
            panda$core$Int64$init$builtin_int64(&$tmp4099, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4098, $tmp4099);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4101 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4098, &$s4100);
            next4077 = $tmp4101;
            if (((panda$core$Bit) { !next4077.nonnull }).value) {
            {
                $tmp4102 = NULL;
                $returnValue4073 = $tmp4102;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4102));
                $tmp4067 = 2;
                goto $l4065;
                $l4103:;
                return $returnValue4073;
            }
            }
            panda$core$String* $tmp4106 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4077.value));
            $tmp4105 = $tmp4106;
            panda$core$MutableString$append$panda$core$String(name4085, $tmp4105);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4105));
        }
        }
        $l4092:;
        org$pandalanguage$pandac$ASTNode* $tmp4109 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4110, 46);
        panda$core$String* $tmp4112 = panda$core$MutableString$finish$R$panda$core$String(name4085);
        $tmp4111 = $tmp4112;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4109, $tmp4110, ((org$pandalanguage$pandac$parser$Token) start4068.value).position, $tmp4111);
        $tmp4108 = $tmp4109;
        $tmp4107 = $tmp4108;
        $returnValue4073 = $tmp4107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4111));
        $tmp4067 = 3;
        goto $l4065;
        $l4113:;
        return $returnValue4073;
    }
    $l4065:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4085));
    name4085 = NULL;
    switch ($tmp4067) {
        case 1: goto $l4083;
        case 3: goto $l4113;
        case 2: goto $l4103;
        case 0: goto $l4075;
    }
    $l4115:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4119;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4120;
    panda$core$Int64 $tmp4121;
    panda$collections$ImmutableArray* $returnValue4124;
    panda$collections$ImmutableArray* $tmp4125;
    org$pandalanguage$pandac$parser$Token$nullable id4128;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4129;
    panda$core$Int64 $tmp4130;
    panda$collections$ImmutableArray* $tmp4133;
    panda$collections$Array* parameters4136 = NULL;
    panda$collections$Array* $tmp4137;
    panda$collections$Array* $tmp4138;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4140;
    panda$core$Int64 $tmp4141;
    org$pandalanguage$pandac$ASTNode* t4146 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4147;
    org$pandalanguage$pandac$ASTNode* $tmp4148;
    panda$collections$ImmutableArray* $tmp4150;
    org$pandalanguage$pandac$ASTNode* $tmp4154;
    panda$core$Int64 $tmp4156;
    panda$core$String* $tmp4157;
    org$pandalanguage$pandac$ASTNode* $tmp4160;
    panda$core$Int64 $tmp4162;
    panda$core$String* $tmp4163;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4168;
    panda$core$Int64 $tmp4169;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4171;
    panda$core$Int64 $tmp4172;
    panda$collections$ImmutableArray* $tmp4175;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4178;
    panda$core$Int64 $tmp4179;
    org$pandalanguage$pandac$ASTNode* t4184 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4185;
    org$pandalanguage$pandac$ASTNode* $tmp4186;
    panda$collections$ImmutableArray* $tmp4188;
    org$pandalanguage$pandac$ASTNode* $tmp4192;
    panda$core$Int64 $tmp4194;
    panda$core$String* $tmp4195;
    org$pandalanguage$pandac$ASTNode* $tmp4198;
    panda$core$Int64 $tmp4200;
    panda$core$String* $tmp4201;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4203;
    panda$core$Int64 $tmp4204;
    panda$collections$ImmutableArray* $tmp4207;
    panda$collections$ImmutableArray* $tmp4210;
    panda$collections$ImmutableArray* $tmp4211;
    int $tmp4118;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4121, 62);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4120, $tmp4121);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4123 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4120, &$s4122);
        start4119 = $tmp4123;
        if (((panda$core$Bit) { !start4119.nonnull }).value) {
        {
            $tmp4125 = NULL;
            $returnValue4124 = $tmp4125;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4125));
            $tmp4118 = 0;
            goto $l4116;
            $l4126:;
            return $returnValue4124;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4130, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4129, $tmp4130);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4132 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4129, &$s4131);
        id4128 = $tmp4132;
        if (((panda$core$Bit) { !id4128.nonnull }).value) {
        {
            $tmp4133 = NULL;
            $returnValue4124 = $tmp4133;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4133));
            $tmp4118 = 1;
            goto $l4116;
            $l4134:;
            return $returnValue4124;
        }
        }
        panda$collections$Array* $tmp4139 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4139);
        $tmp4138 = $tmp4139;
        $tmp4137 = $tmp4138;
        parameters4136 = $tmp4137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4137));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4138));
        panda$core$Int64$init$builtin_int64(&$tmp4141, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4140, $tmp4141);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4142 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4140);
        if (((panda$core$Bit) { $tmp4142.nonnull }).value) {
        {
            int $tmp4145;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4149 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4148 = $tmp4149;
                $tmp4147 = $tmp4148;
                t4146 = $tmp4147;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4147));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4148));
                if (((panda$core$Bit) { t4146 == NULL }).value) {
                {
                    $tmp4150 = NULL;
                    $returnValue4124 = $tmp4150;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4150));
                    $tmp4145 = 0;
                    goto $l4143;
                    $l4151:;
                    $tmp4118 = 2;
                    goto $l4116;
                    $l4152:;
                    return $returnValue4124;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp4155 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4156, 44);
                panda$core$String* $tmp4158 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4128.value));
                $tmp4157 = $tmp4158;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4155, $tmp4156, ((org$pandalanguage$pandac$parser$Token) id4128.value).position, $tmp4157, t4146);
                $tmp4154 = $tmp4155;
                panda$collections$Array$add$panda$collections$Array$T(parameters4136, ((panda$core$Object*) $tmp4154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4157));
            }
            $tmp4145 = -1;
            goto $l4143;
            $l4143:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4146));
            t4146 = NULL;
            switch ($tmp4145) {
                case -1: goto $l4159;
                case 0: goto $l4151;
            }
            $l4159:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4161 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp4162, 20);
            panda$core$String* $tmp4164 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4128.value));
            $tmp4163 = $tmp4164;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4161, $tmp4162, ((org$pandalanguage$pandac$parser$Token) id4128.value).position, $tmp4163);
            $tmp4160 = $tmp4161;
            panda$collections$Array$add$panda$collections$Array$T(parameters4136, ((panda$core$Object*) $tmp4160));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4160));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4163));
        }
        }
        $l4165:;
        panda$core$Int64$init$builtin_int64(&$tmp4169, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4168, $tmp4169);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4170 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4168);
        bool $tmp4167 = ((panda$core$Bit) { $tmp4170.nonnull }).value;
        if (!$tmp4167) goto $l4166;
        {
            panda$core$Int64$init$builtin_int64(&$tmp4172, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4171, $tmp4172);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4174 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4171, &$s4173);
            id4128 = $tmp4174;
            if (((panda$core$Bit) { !id4128.nonnull }).value) {
            {
                $tmp4175 = NULL;
                $returnValue4124 = $tmp4175;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4175));
                $tmp4118 = 3;
                goto $l4116;
                $l4176:;
                return $returnValue4124;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4179, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4178, $tmp4179);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4180 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4178);
            if (((panda$core$Bit) { $tmp4180.nonnull }).value) {
            {
                int $tmp4183;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4187 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4186 = $tmp4187;
                    $tmp4185 = $tmp4186;
                    t4184 = $tmp4185;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4185));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4186));
                    if (((panda$core$Bit) { t4184 == NULL }).value) {
                    {
                        $tmp4188 = NULL;
                        $returnValue4124 = $tmp4188;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4188));
                        $tmp4183 = 0;
                        goto $l4181;
                        $l4189:;
                        $tmp4118 = 4;
                        goto $l4116;
                        $l4190:;
                        return $returnValue4124;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp4193 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp4194, 44);
                    panda$core$String* $tmp4196 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4128.value));
                    $tmp4195 = $tmp4196;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4193, $tmp4194, ((org$pandalanguage$pandac$parser$Token) id4128.value).position, $tmp4195, t4184);
                    $tmp4192 = $tmp4193;
                    panda$collections$Array$add$panda$collections$Array$T(parameters4136, ((panda$core$Object*) $tmp4192));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4192));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4195));
                }
                $tmp4183 = -1;
                goto $l4181;
                $l4181:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4184));
                t4184 = NULL;
                switch ($tmp4183) {
                    case -1: goto $l4197;
                    case 0: goto $l4189;
                }
                $l4197:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4199 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4200, 20);
                panda$core$String* $tmp4202 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4128.value));
                $tmp4201 = $tmp4202;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4199, $tmp4200, ((org$pandalanguage$pandac$parser$Token) id4128.value).position, $tmp4201);
                $tmp4198 = $tmp4199;
                panda$collections$Array$add$panda$collections$Array$T(parameters4136, ((panda$core$Object*) $tmp4198));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4198));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4201));
            }
            }
        }
        goto $l4165;
        $l4166:;
        panda$core$Int64$init$builtin_int64(&$tmp4204, 63);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4203, $tmp4204);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4206 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4203, &$s4205);
        if (((panda$core$Bit) { !$tmp4206.nonnull }).value) {
        {
            $tmp4207 = NULL;
            $returnValue4124 = $tmp4207;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4207));
            $tmp4118 = 5;
            goto $l4116;
            $l4208:;
            return $returnValue4124;
        }
        }
        panda$collections$ImmutableArray* $tmp4212 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters4136);
        $tmp4211 = $tmp4212;
        $tmp4210 = $tmp4211;
        $returnValue4124 = $tmp4210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4211));
        $tmp4118 = 6;
        goto $l4116;
        $l4213:;
        return $returnValue4124;
    }
    $l4116:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters4136));
    parameters4136 = NULL;
    switch ($tmp4118) {
        case 4: goto $l4190;
        case 6: goto $l4213;
        case 2: goto $l4152;
        case 5: goto $l4208;
        case 0: goto $l4126;
        case 3: goto $l4176;
        case 1: goto $l4134;
    }
    $l4215:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4219;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4220;
    panda$core$Int64 $tmp4221;
    panda$collections$ImmutableArray* $returnValue4224;
    panda$collections$ImmutableArray* $tmp4225;
    panda$collections$Array* result4228 = NULL;
    panda$collections$Array* $tmp4229;
    panda$collections$Array* $tmp4230;
    org$pandalanguage$pandac$ASTNode* t4232 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4233;
    org$pandalanguage$pandac$ASTNode* $tmp4234;
    panda$collections$ImmutableArray* $tmp4236;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4242;
    panda$core$Int64 $tmp4243;
    org$pandalanguage$pandac$ASTNode* $tmp4245;
    org$pandalanguage$pandac$ASTNode* $tmp4246;
    org$pandalanguage$pandac$ASTNode* $tmp4247;
    panda$collections$ImmutableArray* $tmp4249;
    panda$collections$ImmutableArray* $tmp4252;
    panda$collections$ImmutableArray* $tmp4253;
    int $tmp4218;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4221, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4220, $tmp4221);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4223 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4220, &$s4222);
        start4219 = $tmp4223;
        if (((panda$core$Bit) { !start4219.nonnull }).value) {
        {
            $tmp4225 = NULL;
            $returnValue4224 = $tmp4225;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4225));
            $tmp4218 = 0;
            goto $l4216;
            $l4226:;
            return $returnValue4224;
        }
        }
        panda$collections$Array* $tmp4231 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4231);
        $tmp4230 = $tmp4231;
        $tmp4229 = $tmp4230;
        result4228 = $tmp4229;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4229));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4230));
        org$pandalanguage$pandac$ASTNode* $tmp4235 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4234 = $tmp4235;
        $tmp4233 = $tmp4234;
        t4232 = $tmp4233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4234));
        if (((panda$core$Bit) { t4232 == NULL }).value) {
        {
            $tmp4236 = NULL;
            $returnValue4224 = $tmp4236;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4236));
            $tmp4218 = 1;
            goto $l4216;
            $l4237:;
            return $returnValue4224;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result4228, ((panda$core$Object*) t4232));
        $l4239:;
        panda$core$Int64$init$builtin_int64(&$tmp4243, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4242, $tmp4243);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4244 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4242);
        bool $tmp4241 = ((panda$core$Bit) { $tmp4244.nonnull }).value;
        if (!$tmp4241) goto $l4240;
        {
            {
                $tmp4245 = t4232;
                org$pandalanguage$pandac$ASTNode* $tmp4248 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4247 = $tmp4248;
                $tmp4246 = $tmp4247;
                t4232 = $tmp4246;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4246));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4247));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4245));
            }
            if (((panda$core$Bit) { t4232 == NULL }).value) {
            {
                $tmp4249 = NULL;
                $returnValue4224 = $tmp4249;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4249));
                $tmp4218 = 2;
                goto $l4216;
                $l4250:;
                return $returnValue4224;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result4228, ((panda$core$Object*) t4232));
        }
        goto $l4239;
        $l4240:;
        panda$collections$ImmutableArray* $tmp4254 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4228);
        $tmp4253 = $tmp4254;
        $tmp4252 = $tmp4253;
        $returnValue4224 = $tmp4252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4253));
        $tmp4218 = 3;
        goto $l4216;
        $l4255:;
        return $returnValue4224;
    }
    $l4216:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4232));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4228));
    result4228 = NULL;
    t4232 = NULL;
    switch ($tmp4218) {
        case 2: goto $l4250;
        case 1: goto $l4237;
        case 3: goto $l4255;
        case 0: goto $l4226;
    }
    $l4257:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a4261;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4262;
    panda$core$Int64 $tmp4263;
    org$pandalanguage$pandac$ASTNode* expr4266 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4267;
    panda$core$Int64 $tmp4268;
    org$pandalanguage$pandac$ASTNode* $tmp4270;
    org$pandalanguage$pandac$ASTNode* $tmp4271;
    org$pandalanguage$pandac$ASTNode* $tmp4272;
    org$pandalanguage$pandac$ASTNode* $returnValue4274;
    org$pandalanguage$pandac$ASTNode* $tmp4275;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4278;
    panda$core$Int64 $tmp4279;
    org$pandalanguage$pandac$ASTNode* $tmp4281;
    org$pandalanguage$pandac$ASTNode* $tmp4282;
    panda$core$Int64 $tmp4284;
    panda$core$String* $tmp4285;
    int $tmp4260;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4263, 13);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4262, $tmp4263);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4265 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4262, &$s4264);
        a4261 = $tmp4265;
        memset(&expr4266, 0, sizeof(expr4266));
        panda$core$Int64$init$builtin_int64(&$tmp4268, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4267, $tmp4268);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4269 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4267);
        if (((panda$core$Bit) { $tmp4269.nonnull }).value) {
        {
            {
                $tmp4270 = expr4266;
                org$pandalanguage$pandac$ASTNode* $tmp4273 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4272 = $tmp4273;
                $tmp4271 = $tmp4272;
                expr4266 = $tmp4271;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4271));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4272));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4270));
            }
            if (((panda$core$Bit) { expr4266 == NULL }).value) {
            {
                $tmp4275 = NULL;
                $returnValue4274 = $tmp4275;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4275));
                $tmp4260 = 0;
                goto $l4258;
                $l4276:;
                return $returnValue4274;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4279, 104);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4278, $tmp4279);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4278, &$s4280);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4283 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4284, 0);
        panda$core$String* $tmp4286 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a4261.value));
        $tmp4285 = $tmp4286;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4283, $tmp4284, ((org$pandalanguage$pandac$parser$Token) a4261.value).position, $tmp4285, expr4266);
        $tmp4282 = $tmp4283;
        $tmp4281 = $tmp4282;
        $returnValue4274 = $tmp4281;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4281));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4282));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4285));
        $tmp4260 = 1;
        goto $l4258;
        $l4287:;
        return $returnValue4274;
    }
    $l4258:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr4266));
    switch ($tmp4260) {
        case 1: goto $l4287;
        case 0: goto $l4276;
    }
    $l4289:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result4293 = NULL;
    panda$collections$Array* $tmp4294;
    panda$collections$Array* $tmp4295;
    panda$core$Int64 $tmp4301;
    org$pandalanguage$pandac$ASTNode* a4306 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4307;
    org$pandalanguage$pandac$ASTNode* $tmp4308;
    panda$collections$ImmutableArray* $returnValue4312;
    panda$collections$ImmutableArray* $tmp4313;
    panda$collections$ImmutableArray* $tmp4314;
    int $tmp4292;
    {
        panda$collections$Array* $tmp4296 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4296);
        $tmp4295 = $tmp4296;
        $tmp4294 = $tmp4295;
        result4293 = $tmp4294;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4295));
        $l4297:;
        org$pandalanguage$pandac$parser$Token $tmp4300 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4301, 13);
        panda$core$Bit $tmp4302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4300.kind.$rawValue, $tmp4301);
        bool $tmp4299 = $tmp4302.value;
        if (!$tmp4299) goto $l4298;
        {
            int $tmp4305;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4309 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4308 = $tmp4309;
                $tmp4307 = $tmp4308;
                a4306 = $tmp4307;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4307));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4308));
                if (((panda$core$Bit) { a4306 == NULL }).value) {
                {
                    $tmp4305 = 0;
                    goto $l4303;
                    $l4310:;
                    goto $l4298;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4293, ((panda$core$Object*) a4306));
            }
            $tmp4305 = -1;
            goto $l4303;
            $l4303:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4306));
            a4306 = NULL;
            switch ($tmp4305) {
                case 0: goto $l4310;
                case -1: goto $l4311;
            }
            $l4311:;
        }
        goto $l4297;
        $l4298:;
        panda$collections$ImmutableArray* $tmp4315 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4293);
        $tmp4314 = $tmp4315;
        $tmp4313 = $tmp4314;
        $returnValue4312 = $tmp4313;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4313));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4314));
        $tmp4292 = 0;
        goto $l4290;
        $l4316:;
        return $returnValue4312;
    }
    $l4290:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4293));
    result4293 = NULL;
    switch ($tmp4292) {
        case 0: goto $l4316;
    }
    $l4318:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4322;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4323;
    panda$core$Int64 $tmp4324;
    org$pandalanguage$pandac$ASTNode* $returnValue4327;
    org$pandalanguage$pandac$ASTNode* $tmp4328;
    panda$core$MutableString* result4331 = NULL;
    panda$core$MutableString* $tmp4332;
    panda$core$MutableString* $tmp4333;
    org$pandalanguage$pandac$parser$Token next4337;
    panda$core$Int64 $tmp4339;
    panda$core$Int64 $tmp4341;
    org$pandalanguage$pandac$ASTNode* $tmp4344;
    panda$core$String* $tmp4347;
    org$pandalanguage$pandac$ASTNode* $tmp4349;
    org$pandalanguage$pandac$ASTNode* $tmp4350;
    panda$core$Int64 $tmp4352;
    panda$core$String* $tmp4353;
    int $tmp4321;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4324, 11);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4323, $tmp4324);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4326 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4323, &$s4325);
        start4322 = $tmp4326;
        if (((panda$core$Bit) { !start4322.nonnull }).value) {
        {
            $tmp4328 = NULL;
            $returnValue4327 = $tmp4328;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4328));
            $tmp4321 = 0;
            goto $l4319;
            $l4329:;
            return $returnValue4327;
        }
        }
        panda$core$MutableString* $tmp4334 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp4334);
        $tmp4333 = $tmp4334;
        $tmp4332 = $tmp4333;
        result4331 = $tmp4332;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4332));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4333));
        $l4335:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4338 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next4337 = $tmp4338;
            panda$core$Int64$init$builtin_int64(&$tmp4339, 11);
            panda$core$Bit $tmp4340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4337.kind.$rawValue, $tmp4339);
            if ($tmp4340.value) {
            {
                goto $l4336;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4341, 0);
            panda$core$Bit $tmp4342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4337.kind.$rawValue, $tmp4341);
            if ($tmp4342.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start4322.value), &$s4343);
                $tmp4344 = NULL;
                $returnValue4327 = $tmp4344;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4344));
                $tmp4321 = 1;
                goto $l4319;
                $l4345:;
                return $returnValue4327;
            }
            }
            panda$core$String* $tmp4348 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4337);
            $tmp4347 = $tmp4348;
            panda$core$MutableString$append$panda$core$String(result4331, $tmp4347);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4347));
        }
        }
        $l4336:;
        org$pandalanguage$pandac$ASTNode* $tmp4351 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4352, 38);
        panda$core$String* $tmp4354 = panda$core$MutableString$finish$R$panda$core$String(result4331);
        $tmp4353 = $tmp4354;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4351, $tmp4352, ((org$pandalanguage$pandac$parser$Token) start4322.value).position, $tmp4353);
        $tmp4350 = $tmp4351;
        $tmp4349 = $tmp4350;
        $returnValue4327 = $tmp4349;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4349));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4350));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4353));
        $tmp4321 = 2;
        goto $l4319;
        $l4355:;
        return $returnValue4327;
    }
    $l4319:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4331));
    result4331 = NULL;
    switch ($tmp4321) {
        case 2: goto $l4355;
        case 1: goto $l4345;
        case 0: goto $l4329;
    }
    $l4357:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id4361;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4362;
    panda$core$Int64 $tmp4363;
    org$pandalanguage$pandac$ASTNode* $returnValue4366;
    org$pandalanguage$pandac$ASTNode* $tmp4367;
    org$pandalanguage$pandac$ASTNode* t4370 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4371;
    org$pandalanguage$pandac$ASTNode* $tmp4372;
    org$pandalanguage$pandac$ASTNode* $tmp4374;
    org$pandalanguage$pandac$ASTNode* $tmp4377;
    org$pandalanguage$pandac$ASTNode* $tmp4378;
    panda$core$Int64 $tmp4380;
    panda$core$String* $tmp4381;
    int $tmp4360;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4363, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4362, $tmp4363);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4365 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4362, &$s4364);
        id4361 = $tmp4365;
        if (((panda$core$Bit) { !id4361.nonnull }).value) {
        {
            $tmp4367 = NULL;
            $returnValue4366 = $tmp4367;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4367));
            $tmp4360 = 0;
            goto $l4358;
            $l4368:;
            return $returnValue4366;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4373 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4372 = $tmp4373;
        $tmp4371 = $tmp4372;
        t4370 = $tmp4371;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4372));
        if (((panda$core$Bit) { t4370 == NULL }).value) {
        {
            $tmp4374 = NULL;
            $returnValue4366 = $tmp4374;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4374));
            $tmp4360 = 1;
            goto $l4358;
            $l4375:;
            return $returnValue4366;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4379 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4380, 31);
        panda$core$String* $tmp4382 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4361.value));
        $tmp4381 = $tmp4382;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4379, $tmp4380, ((org$pandalanguage$pandac$parser$Token) id4361.value).position, $tmp4381, t4370);
        $tmp4378 = $tmp4379;
        $tmp4377 = $tmp4378;
        $returnValue4366 = $tmp4377;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4377));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4378));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4381));
        $tmp4360 = 2;
        goto $l4358;
        $l4383:;
        return $returnValue4366;
    }
    $l4358:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4370));
    t4370 = NULL;
    switch ($tmp4360) {
        case 2: goto $l4383;
        case 1: goto $l4375;
        case 0: goto $l4368;
    }
    $l4385:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4389;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4390;
    panda$core$Int64 $tmp4391;
    panda$collections$ImmutableArray* $returnValue4394;
    panda$collections$ImmutableArray* $tmp4395;
    panda$collections$Array* result4398 = NULL;
    panda$collections$Array* $tmp4399;
    panda$collections$Array* $tmp4400;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4402;
    panda$core$Int64 $tmp4403;
    org$pandalanguage$pandac$ASTNode* param4408 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4409;
    org$pandalanguage$pandac$ASTNode* $tmp4410;
    panda$collections$ImmutableArray* $tmp4412;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4419;
    panda$core$Int64 $tmp4420;
    org$pandalanguage$pandac$ASTNode* $tmp4422;
    org$pandalanguage$pandac$ASTNode* $tmp4423;
    org$pandalanguage$pandac$ASTNode* $tmp4424;
    panda$collections$ImmutableArray* $tmp4426;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4430;
    panda$core$Int64 $tmp4431;
    panda$collections$ImmutableArray* $tmp4434;
    panda$collections$ImmutableArray* $tmp4439;
    panda$collections$ImmutableArray* $tmp4440;
    int $tmp4388;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4391, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4390, $tmp4391);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4393 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4390, &$s4392);
        start4389 = $tmp4393;
        if (((panda$core$Bit) { !start4389.nonnull }).value) {
        {
            $tmp4395 = NULL;
            $returnValue4394 = $tmp4395;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4395));
            $tmp4388 = 0;
            goto $l4386;
            $l4396:;
            return $returnValue4394;
        }
        }
        panda$collections$Array* $tmp4401 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4401);
        $tmp4400 = $tmp4401;
        $tmp4399 = $tmp4400;
        result4398 = $tmp4399;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4399));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4400));
        panda$core$Int64$init$builtin_int64(&$tmp4403, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4402, $tmp4403);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4404 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4402);
        if (((panda$core$Bit) { !$tmp4404.nonnull }).value) {
        {
            int $tmp4407;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4411 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4410 = $tmp4411;
                $tmp4409 = $tmp4410;
                param4408 = $tmp4409;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4409));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4410));
                if (((panda$core$Bit) { param4408 == NULL }).value) {
                {
                    $tmp4412 = NULL;
                    $returnValue4394 = $tmp4412;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4412));
                    $tmp4407 = 0;
                    goto $l4405;
                    $l4413:;
                    $tmp4388 = 1;
                    goto $l4386;
                    $l4414:;
                    return $returnValue4394;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4398, ((panda$core$Object*) param4408));
                $l4416:;
                panda$core$Int64$init$builtin_int64(&$tmp4420, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4419, $tmp4420);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4421 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4419);
                bool $tmp4418 = ((panda$core$Bit) { $tmp4421.nonnull }).value;
                if (!$tmp4418) goto $l4417;
                {
                    {
                        $tmp4422 = param4408;
                        org$pandalanguage$pandac$ASTNode* $tmp4425 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4424 = $tmp4425;
                        $tmp4423 = $tmp4424;
                        param4408 = $tmp4423;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4423));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4424));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4422));
                    }
                    if (((panda$core$Bit) { param4408 == NULL }).value) {
                    {
                        $tmp4426 = NULL;
                        $returnValue4394 = $tmp4426;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4426));
                        $tmp4407 = 1;
                        goto $l4405;
                        $l4427:;
                        $tmp4388 = 2;
                        goto $l4386;
                        $l4428:;
                        return $returnValue4394;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result4398, ((panda$core$Object*) param4408));
                }
                goto $l4416;
                $l4417:;
                panda$core$Int64$init$builtin_int64(&$tmp4431, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4430, $tmp4431);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4433 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4430, &$s4432);
                if (((panda$core$Bit) { !$tmp4433.nonnull }).value) {
                {
                    $tmp4434 = NULL;
                    $returnValue4394 = $tmp4434;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4434));
                    $tmp4407 = 2;
                    goto $l4405;
                    $l4435:;
                    $tmp4388 = 3;
                    goto $l4386;
                    $l4436:;
                    return $returnValue4394;
                }
                }
            }
            $tmp4407 = -1;
            goto $l4405;
            $l4405:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param4408));
            param4408 = NULL;
            switch ($tmp4407) {
                case -1: goto $l4438;
                case 2: goto $l4435;
                case 1: goto $l4427;
                case 0: goto $l4413;
            }
            $l4438:;
        }
        }
        panda$collections$ImmutableArray* $tmp4441 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4398);
        $tmp4440 = $tmp4441;
        $tmp4439 = $tmp4440;
        $returnValue4394 = $tmp4439;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4439));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4440));
        $tmp4388 = 4;
        goto $l4386;
        $l4442:;
        return $returnValue4394;
    }
    $l4386:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4398));
    result4398 = NULL;
    switch ($tmp4388) {
        case 3: goto $l4436;
        case 1: goto $l4414;
        case 2: goto $l4428;
        case 0: goto $l4396;
        case 4: goto $l4442;
    }
    $l4444:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4448;
    org$pandalanguage$pandac$parser$Token$nullable start4449;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4450;
    panda$core$Int64 $tmp4451;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4453;
    panda$core$Int64 $tmp4454;
    org$pandalanguage$pandac$ASTNode* $returnValue4457;
    org$pandalanguage$pandac$ASTNode* $tmp4458;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4461;
    panda$core$Int64 $tmp4462;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4463;
    panda$core$Int64 $tmp4464;
    panda$core$String* name4465 = NULL;
    panda$core$String* $tmp4466;
    panda$core$String* $tmp4467;
    org$pandalanguage$pandac$ASTNode* $tmp4469;
    panda$collections$ImmutableArray* generics4472 = NULL;
    panda$core$Int64 $tmp4474;
    panda$collections$ImmutableArray* $tmp4476;
    panda$collections$ImmutableArray* $tmp4477;
    panda$collections$ImmutableArray* $tmp4478;
    panda$collections$ImmutableArray* $tmp4480;
    panda$collections$ImmutableArray* $tmp4481;
    panda$collections$ImmutableArray* params4482 = NULL;
    panda$collections$ImmutableArray* $tmp4483;
    panda$collections$ImmutableArray* $tmp4484;
    org$pandalanguage$pandac$ASTNode* $tmp4486;
    org$pandalanguage$pandac$ASTNode* returnType4489 = NULL;
    panda$core$Int64 $tmp4491;
    org$pandalanguage$pandac$ASTNode* $tmp4493;
    org$pandalanguage$pandac$ASTNode* $tmp4494;
    org$pandalanguage$pandac$ASTNode* $tmp4495;
    org$pandalanguage$pandac$ASTNode* $tmp4497;
    org$pandalanguage$pandac$ASTNode* $tmp4500;
    org$pandalanguage$pandac$ASTNode* $tmp4501;
    panda$collections$ImmutableArray* body4502 = NULL;
    panda$core$Int64 $tmp4504;
    panda$collections$ImmutableArray* $tmp4506;
    panda$collections$ImmutableArray* $tmp4507;
    panda$collections$ImmutableArray* $tmp4508;
    org$pandalanguage$pandac$ASTNode* $tmp4510;
    panda$collections$ImmutableArray* $tmp4513;
    panda$collections$ImmutableArray* $tmp4514;
    org$pandalanguage$pandac$ASTNode* $tmp4515;
    org$pandalanguage$pandac$ASTNode* $tmp4516;
    panda$core$Int64 $tmp4518;
    int $tmp4447;
    {
        memset(&kind4448, 0, sizeof(kind4448));
        panda$core$Int64$init$builtin_int64(&$tmp4451, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4450, $tmp4451);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4452 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4450);
        start4449 = $tmp4452;
        if (((panda$core$Bit) { !start4449.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4454, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4453, $tmp4454);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4456 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4453, &$s4455);
            start4449 = $tmp4456;
            if (((panda$core$Bit) { !start4449.nonnull }).value) {
            {
                $tmp4458 = NULL;
                $returnValue4457 = $tmp4458;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4458));
                $tmp4447 = 0;
                goto $l4445;
                $l4459:;
                return $returnValue4457;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4462, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4461, $tmp4462);
            kind4448 = $tmp4461;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4464, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4463, $tmp4464);
            kind4448 = $tmp4463;
        }
        }
        panda$core$String* $tmp4468 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp4467 = $tmp4468;
        $tmp4466 = $tmp4467;
        name4465 = $tmp4466;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4466));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4467));
        if (((panda$core$Bit) { name4465 == NULL }).value) {
        {
            $tmp4469 = NULL;
            $returnValue4457 = $tmp4469;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4469));
            $tmp4447 = 1;
            goto $l4445;
            $l4470:;
            return $returnValue4457;
        }
        }
        memset(&generics4472, 0, sizeof(generics4472));
        org$pandalanguage$pandac$parser$Token $tmp4473 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4474, 62);
        panda$core$Bit $tmp4475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4473.kind.$rawValue, $tmp4474);
        if ($tmp4475.value) {
        {
            {
                $tmp4476 = generics4472;
                panda$collections$ImmutableArray* $tmp4479 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4478 = $tmp4479;
                $tmp4477 = $tmp4478;
                generics4472 = $tmp4477;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4477));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4478));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4476));
            }
        }
        }
        else {
        {
            {
                $tmp4480 = generics4472;
                $tmp4481 = NULL;
                generics4472 = $tmp4481;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4481));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4480));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4485 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4484 = $tmp4485;
        $tmp4483 = $tmp4484;
        params4482 = $tmp4483;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4483));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4484));
        if (((panda$core$Bit) { params4482 == NULL }).value) {
        {
            $tmp4486 = NULL;
            $returnValue4457 = $tmp4486;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4486));
            $tmp4447 = 2;
            goto $l4445;
            $l4487:;
            return $returnValue4457;
        }
        }
        memset(&returnType4489, 0, sizeof(returnType4489));
        org$pandalanguage$pandac$parser$Token $tmp4490 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4491, 95);
        panda$core$Bit $tmp4492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4490.kind.$rawValue, $tmp4491);
        if ($tmp4492.value) {
        {
            {
                $tmp4493 = returnType4489;
                org$pandalanguage$pandac$ASTNode* $tmp4496 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4495 = $tmp4496;
                $tmp4494 = $tmp4495;
                returnType4489 = $tmp4494;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4494));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4495));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4493));
            }
            if (((panda$core$Bit) { returnType4489 == NULL }).value) {
            {
                $tmp4497 = NULL;
                $returnValue4457 = $tmp4497;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4497));
                $tmp4447 = 3;
                goto $l4445;
                $l4498:;
                return $returnValue4457;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4500 = returnType4489;
                $tmp4501 = NULL;
                returnType4489 = $tmp4501;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4501));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4500));
            }
        }
        }
        memset(&body4502, 0, sizeof(body4502));
        org$pandalanguage$pandac$parser$Token $tmp4503 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4504, 99);
        panda$core$Bit $tmp4505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4503.kind.$rawValue, $tmp4504);
        if ($tmp4505.value) {
        {
            {
                $tmp4506 = body4502;
                panda$collections$ImmutableArray* $tmp4509 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4508 = $tmp4509;
                $tmp4507 = $tmp4508;
                body4502 = $tmp4507;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4507));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4508));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4506));
            }
            if (((panda$core$Bit) { body4502 == NULL }).value) {
            {
                $tmp4510 = NULL;
                $returnValue4457 = $tmp4510;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4510));
                $tmp4447 = 4;
                goto $l4445;
                $l4511:;
                return $returnValue4457;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4513 = body4502;
                $tmp4514 = NULL;
                body4502 = $tmp4514;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4514));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4513));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4517 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4518, 26);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4517, $tmp4518, ((org$pandalanguage$pandac$parser$Token) start4449.value).position, p_doccomment, p_annotations, kind4448, name4465, generics4472, params4482, returnType4489, body4502);
        $tmp4516 = $tmp4517;
        $tmp4515 = $tmp4516;
        $returnValue4457 = $tmp4515;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4515));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4516));
        $tmp4447 = 5;
        goto $l4445;
        $l4519:;
        return $returnValue4457;
    }
    $l4445:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4502));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4489));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4482));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4472));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4465));
    name4465 = NULL;
    params4482 = NULL;
    switch ($tmp4447) {
        case 1: goto $l4470;
        case 3: goto $l4498;
        case 5: goto $l4519;
        case 2: goto $l4487;
        case 0: goto $l4459;
        case 4: goto $l4511;
    }
    $l4521:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4525;
    org$pandalanguage$pandac$parser$Token$nullable start4526;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4527;
    panda$core$Int64 $tmp4528;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4530;
    panda$core$Int64 $tmp4531;
    org$pandalanguage$pandac$ASTNode* $returnValue4534;
    org$pandalanguage$pandac$ASTNode* $tmp4535;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4538;
    panda$core$Int64 $tmp4539;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4540;
    panda$core$Int64 $tmp4541;
    panda$collections$ImmutableArray* params4542 = NULL;
    panda$collections$ImmutableArray* $tmp4543;
    panda$collections$ImmutableArray* $tmp4544;
    org$pandalanguage$pandac$ASTNode* $tmp4546;
    org$pandalanguage$pandac$ASTNode* returnType4549 = NULL;
    panda$core$Int64 $tmp4551;
    org$pandalanguage$pandac$ASTNode* $tmp4553;
    org$pandalanguage$pandac$ASTNode* $tmp4554;
    org$pandalanguage$pandac$ASTNode* $tmp4555;
    org$pandalanguage$pandac$ASTNode* $tmp4557;
    org$pandalanguage$pandac$ASTNode* $tmp4560;
    org$pandalanguage$pandac$ASTNode* $tmp4561;
    panda$collections$ImmutableArray* body4562 = NULL;
    panda$collections$ImmutableArray* $tmp4563;
    panda$collections$ImmutableArray* $tmp4564;
    org$pandalanguage$pandac$ASTNode* $tmp4566;
    org$pandalanguage$pandac$ASTNode* $tmp4569;
    org$pandalanguage$pandac$ASTNode* $tmp4570;
    panda$core$Int64 $tmp4572;
    panda$collections$ImmutableArray* $tmp4573;
    int $tmp4524;
    {
        memset(&kind4525, 0, sizeof(kind4525));
        panda$core$Int64$init$builtin_int64(&$tmp4528, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4527, $tmp4528);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4529 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4527);
        start4526 = $tmp4529;
        if (((panda$core$Bit) { !start4526.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4531, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4530, $tmp4531);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4533 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4530, &$s4532);
            start4526 = $tmp4533;
            if (((panda$core$Bit) { !start4526.nonnull }).value) {
            {
                $tmp4535 = NULL;
                $returnValue4534 = $tmp4535;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4535));
                $tmp4524 = 0;
                goto $l4522;
                $l4536:;
                return $returnValue4534;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4539, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4538, $tmp4539);
            kind4525 = $tmp4538;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4541, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4540, $tmp4541);
            kind4525 = $tmp4540;
        }
        }
        panda$collections$ImmutableArray* $tmp4545 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4544 = $tmp4545;
        $tmp4543 = $tmp4544;
        params4542 = $tmp4543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4544));
        if (((panda$core$Bit) { params4542 == NULL }).value) {
        {
            $tmp4546 = NULL;
            $returnValue4534 = $tmp4546;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4546));
            $tmp4524 = 1;
            goto $l4522;
            $l4547:;
            return $returnValue4534;
        }
        }
        memset(&returnType4549, 0, sizeof(returnType4549));
        org$pandalanguage$pandac$parser$Token $tmp4550 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4551, 95);
        panda$core$Bit $tmp4552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4550.kind.$rawValue, $tmp4551);
        if ($tmp4552.value) {
        {
            {
                $tmp4553 = returnType4549;
                org$pandalanguage$pandac$ASTNode* $tmp4556 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4555 = $tmp4556;
                $tmp4554 = $tmp4555;
                returnType4549 = $tmp4554;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4554));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4555));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4553));
            }
            if (((panda$core$Bit) { returnType4549 == NULL }).value) {
            {
                $tmp4557 = NULL;
                $returnValue4534 = $tmp4557;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4557));
                $tmp4524 = 2;
                goto $l4522;
                $l4558:;
                return $returnValue4534;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4560 = returnType4549;
                $tmp4561 = NULL;
                returnType4549 = $tmp4561;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4561));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4560));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4565 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4564 = $tmp4565;
        $tmp4563 = $tmp4564;
        body4562 = $tmp4563;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4563));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4564));
        if (((panda$core$Bit) { body4562 == NULL }).value) {
        {
            $tmp4566 = NULL;
            $returnValue4534 = $tmp4566;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4566));
            $tmp4524 = 3;
            goto $l4522;
            $l4567:;
            return $returnValue4534;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4571 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4572, 26);
        panda$collections$ImmutableArray* $tmp4574 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4574);
        $tmp4573 = $tmp4574;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4571, $tmp4572, ((org$pandalanguage$pandac$parser$Token) start4526.value).position, NULL, $tmp4573, kind4525, &$s4575, NULL, params4542, returnType4549, body4562);
        $tmp4570 = $tmp4571;
        $tmp4569 = $tmp4570;
        $returnValue4534 = $tmp4569;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4569));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4570));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4573));
        $tmp4524 = 4;
        goto $l4522;
        $l4576:;
        return $returnValue4534;
    }
    $l4522:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4562));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4549));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4542));
    params4542 = NULL;
    body4562 = NULL;
    switch ($tmp4524) {
        case 2: goto $l4558;
        case 3: goto $l4567;
        case 4: goto $l4576;
        case 1: goto $l4547;
        case 0: goto $l4536;
    }
    $l4578:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4582;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4583;
    panda$core$Int64 $tmp4584;
    org$pandalanguage$pandac$ASTNode* $returnValue4587;
    org$pandalanguage$pandac$ASTNode* $tmp4588;
    panda$collections$ImmutableArray* params4591 = NULL;
    panda$collections$ImmutableArray* $tmp4592;
    panda$collections$ImmutableArray* $tmp4593;
    org$pandalanguage$pandac$ASTNode* $tmp4595;
    panda$collections$ImmutableArray* b4598 = NULL;
    panda$collections$ImmutableArray* $tmp4599;
    panda$collections$ImmutableArray* $tmp4600;
    org$pandalanguage$pandac$ASTNode* $tmp4602;
    org$pandalanguage$pandac$ASTNode* $tmp4605;
    org$pandalanguage$pandac$ASTNode* $tmp4606;
    panda$core$Int64 $tmp4608;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4609;
    panda$core$Int64 $tmp4610;
    int $tmp4581;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4584, 22);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4583, $tmp4584);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4586 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4583, &$s4585);
        start4582 = $tmp4586;
        if (((panda$core$Bit) { !start4582.nonnull }).value) {
        {
            $tmp4588 = NULL;
            $returnValue4587 = $tmp4588;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4588));
            $tmp4581 = 0;
            goto $l4579;
            $l4589:;
            return $returnValue4587;
        }
        }
        panda$collections$ImmutableArray* $tmp4594 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4593 = $tmp4594;
        $tmp4592 = $tmp4593;
        params4591 = $tmp4592;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4592));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4593));
        if (((panda$core$Bit) { params4591 == NULL }).value) {
        {
            $tmp4595 = NULL;
            $returnValue4587 = $tmp4595;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4595));
            $tmp4581 = 1;
            goto $l4579;
            $l4596:;
            return $returnValue4587;
        }
        }
        panda$collections$ImmutableArray* $tmp4601 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4600 = $tmp4601;
        $tmp4599 = $tmp4600;
        b4598 = $tmp4599;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4599));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4600));
        if (((panda$core$Bit) { b4598 == NULL }).value) {
        {
            $tmp4602 = NULL;
            $returnValue4587 = $tmp4602;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4602));
            $tmp4581 = 2;
            goto $l4579;
            $l4603:;
            return $returnValue4587;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4607 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4608, 26);
        panda$core$Int64$init$builtin_int64(&$tmp4610, 2);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4609, $tmp4610);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4607, $tmp4608, ((org$pandalanguage$pandac$parser$Token) start4582.value).position, p_doccomment, p_annotations, $tmp4609, &$s4611, NULL, params4591, NULL, b4598);
        $tmp4606 = $tmp4607;
        $tmp4605 = $tmp4606;
        $returnValue4587 = $tmp4605;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4605));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4606));
        $tmp4581 = 3;
        goto $l4579;
        $l4612:;
        return $returnValue4587;
    }
    $l4579:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b4598));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4591));
    params4591 = NULL;
    b4598 = NULL;
    switch ($tmp4581) {
        case 3: goto $l4612;
        case 2: goto $l4603;
        case 1: goto $l4596;
        case 0: goto $l4589;
    }
    $l4614:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl4618 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4619;
    org$pandalanguage$pandac$ASTNode* $tmp4620;
    org$pandalanguage$pandac$ASTNode* $returnValue4622;
    org$pandalanguage$pandac$ASTNode* $tmp4623;
    org$pandalanguage$pandac$ASTNode* $tmp4626;
    org$pandalanguage$pandac$ASTNode* $tmp4627;
    panda$core$Int64 $tmp4629;
    int $tmp4617;
    {
        org$pandalanguage$pandac$ASTNode* $tmp4621 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4620 = $tmp4621;
        $tmp4619 = $tmp4620;
        decl4618 = $tmp4619;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4619));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4620));
        if (((panda$core$Bit) { decl4618 == NULL }).value) {
        {
            $tmp4623 = NULL;
            $returnValue4622 = $tmp4623;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4623));
            $tmp4617 = 0;
            goto $l4615;
            $l4624:;
            return $returnValue4622;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4628 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4629, 16);
        org$pandalanguage$pandac$Position $tmp4631 = (($fn4630) decl4618->$class->vtable[2])(decl4618);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4628, $tmp4629, $tmp4631, p_doccomment, p_annotations, decl4618);
        $tmp4627 = $tmp4628;
        $tmp4626 = $tmp4627;
        $returnValue4622 = $tmp4626;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4626));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4627));
        $tmp4617 = 1;
        goto $l4615;
        $l4632:;
        return $returnValue4622;
    }
    $l4615:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4618));
    decl4618 = NULL;
    switch ($tmp4617) {
        case 1: goto $l4632;
        case 0: goto $l4624;
    }
    $l4634:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name4638;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4639;
    panda$core$Int64 $tmp4640;
    org$pandalanguage$pandac$ASTNode* $returnValue4643;
    org$pandalanguage$pandac$ASTNode* $tmp4644;
    panda$collections$Array* fields4647 = NULL;
    panda$collections$Array* $tmp4648;
    panda$collections$Array* $tmp4649;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4651;
    panda$core$Int64 $tmp4652;
    panda$core$Int64 $tmp4655;
    org$pandalanguage$pandac$ASTNode* field4660 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4661;
    org$pandalanguage$pandac$ASTNode* $tmp4662;
    org$pandalanguage$pandac$ASTNode* $tmp4664;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4671;
    panda$core$Int64 $tmp4672;
    org$pandalanguage$pandac$ASTNode* $tmp4674;
    org$pandalanguage$pandac$ASTNode* $tmp4675;
    org$pandalanguage$pandac$ASTNode* $tmp4676;
    org$pandalanguage$pandac$ASTNode* $tmp4678;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4683;
    panda$core$Int64 $tmp4684;
    org$pandalanguage$pandac$ASTNode* $tmp4687;
    org$pandalanguage$pandac$ASTNode* $tmp4690;
    org$pandalanguage$pandac$ASTNode* $tmp4691;
    panda$core$Int64 $tmp4693;
    panda$core$String* $tmp4694;
    panda$collections$ImmutableArray* $tmp4696;
    int $tmp4637;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4640, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4639, $tmp4640);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4642 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4639, &$s4641);
        name4638 = $tmp4642;
        if (((panda$core$Bit) { !name4638.nonnull }).value) {
        {
            $tmp4644 = NULL;
            $returnValue4643 = $tmp4644;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4644));
            $tmp4637 = 0;
            goto $l4635;
            $l4645:;
            return $returnValue4643;
        }
        }
        panda$collections$Array* $tmp4650 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4650);
        $tmp4649 = $tmp4650;
        $tmp4648 = $tmp4649;
        fields4647 = $tmp4648;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4648));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4649));
        panda$core$Int64$init$builtin_int64(&$tmp4652, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4651, $tmp4652);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4653 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4651);
        if (((panda$core$Bit) { $tmp4653.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4654 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp4655, 104);
            panda$core$Bit $tmp4656 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4654.kind.$rawValue, $tmp4655);
            if ($tmp4656.value) {
            {
                int $tmp4659;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4663 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4662 = $tmp4663;
                    $tmp4661 = $tmp4662;
                    field4660 = $tmp4661;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4661));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4662));
                    if (((panda$core$Bit) { field4660 == NULL }).value) {
                    {
                        $tmp4664 = NULL;
                        $returnValue4643 = $tmp4664;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4664));
                        $tmp4659 = 0;
                        goto $l4657;
                        $l4665:;
                        $tmp4637 = 1;
                        goto $l4635;
                        $l4666:;
                        return $returnValue4643;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields4647, ((panda$core$Object*) field4660));
                    $l4668:;
                    panda$core$Int64$init$builtin_int64(&$tmp4672, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4671, $tmp4672);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp4673 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4671);
                    bool $tmp4670 = ((panda$core$Bit) { $tmp4673.nonnull }).value;
                    if (!$tmp4670) goto $l4669;
                    {
                        {
                            $tmp4674 = field4660;
                            org$pandalanguage$pandac$ASTNode* $tmp4677 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp4676 = $tmp4677;
                            $tmp4675 = $tmp4676;
                            field4660 = $tmp4675;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4675));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4676));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4674));
                        }
                        if (((panda$core$Bit) { field4660 == NULL }).value) {
                        {
                            $tmp4678 = NULL;
                            $returnValue4643 = $tmp4678;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4678));
                            $tmp4659 = 1;
                            goto $l4657;
                            $l4679:;
                            $tmp4637 = 2;
                            goto $l4635;
                            $l4680:;
                            return $returnValue4643;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields4647, ((panda$core$Object*) field4660));
                    }
                    goto $l4668;
                    $l4669:;
                }
                $tmp4659 = -1;
                goto $l4657;
                $l4657:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4660));
                field4660 = NULL;
                switch ($tmp4659) {
                    case 0: goto $l4665;
                    case -1: goto $l4682;
                    case 1: goto $l4679;
                }
                $l4682:;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4684, 104);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4683, $tmp4684);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4686 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4683, &$s4685);
            if (((panda$core$Bit) { !$tmp4686.nonnull }).value) {
            {
                $tmp4687 = NULL;
                $returnValue4643 = $tmp4687;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4687));
                $tmp4637 = 3;
                goto $l4635;
                $l4688:;
                return $returnValue4643;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4692 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4693, 9);
        panda$core$String* $tmp4695 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4638.value));
        $tmp4694 = $tmp4695;
        panda$collections$ImmutableArray* $tmp4697 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields4647);
        $tmp4696 = $tmp4697;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4692, $tmp4693, ((org$pandalanguage$pandac$parser$Token) name4638.value).position, p_doccomment, $tmp4694, $tmp4696);
        $tmp4691 = $tmp4692;
        $tmp4690 = $tmp4691;
        $returnValue4643 = $tmp4690;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4690));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4691));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4696));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4694));
        $tmp4637 = 4;
        goto $l4635;
        $l4698:;
        return $returnValue4643;
    }
    $l4635:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields4647));
    fields4647 = NULL;
    switch ($tmp4637) {
        case 1: goto $l4666;
        case 3: goto $l4688;
        case 4: goto $l4698;
        case 0: goto $l4645;
        case 2: goto $l4680;
    }
    $l4700:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4704;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4705;
    panda$core$Int64 $tmp4706;
    org$pandalanguage$pandac$ASTNode* $returnValue4709;
    org$pandalanguage$pandac$ASTNode* $tmp4710;
    org$pandalanguage$pandac$parser$Token$nullable name4713;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4714;
    panda$core$Int64 $tmp4715;
    org$pandalanguage$pandac$ASTNode* $tmp4718;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4721;
    panda$core$Int64 $tmp4722;
    org$pandalanguage$pandac$ASTNode* $tmp4725;
    panda$collections$Array* members4728 = NULL;
    panda$collections$Array* $tmp4729;
    panda$collections$Array* $tmp4730;
    org$pandalanguage$pandac$ASTNode* dc4732 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4733;
    org$pandalanguage$pandac$parser$Token next4736;
    org$pandalanguage$pandac$parser$Token$Kind $match$2197_134738;
    panda$core$Int64 $tmp4748;
    panda$core$Int64 $tmp4751;
    panda$core$Int64 $tmp4755;
    panda$core$Int64 $tmp4759;
    panda$core$Int64 $tmp4763;
    panda$core$Int64 $tmp4767;
    panda$core$Int64 $tmp4771;
    panda$core$Int64 $tmp4775;
    panda$core$Int64 $tmp4779;
    panda$core$Int64 $tmp4783;
    panda$core$Int64 $tmp4786;
    panda$core$String* $tmp4788;
    panda$core$String* $tmp4789;
    panda$core$String* $tmp4791;
    org$pandalanguage$pandac$ASTNode* $tmp4796;
    org$pandalanguage$pandac$ASTNode* $tmp4797;
    org$pandalanguage$pandac$ASTNode* $tmp4798;
    panda$core$Int64 $tmp4800;
    org$pandalanguage$pandac$ASTNode* c4805 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4806;
    org$pandalanguage$pandac$ASTNode* $tmp4807;
    org$pandalanguage$pandac$ASTNode* $tmp4809;
    org$pandalanguage$pandac$ASTNode* $tmp4813;
    org$pandalanguage$pandac$ASTNode* $tmp4814;
    panda$collections$ImmutableArray* a4816 = NULL;
    panda$collections$ImmutableArray* $tmp4817;
    panda$collections$ImmutableArray* $tmp4818;
    org$pandalanguage$pandac$parser$Token next4822;
    org$pandalanguage$pandac$parser$Token$Kind $match$2221_134824;
    panda$core$Int64 $tmp4825;
    panda$core$Int64 $tmp4828;
    panda$core$String* $tmp4830;
    panda$core$String* $tmp4831;
    panda$core$String* $tmp4833;
    org$pandalanguage$pandac$ASTNode* $tmp4838;
    panda$collections$ImmutableArray* $tmp4841;
    panda$collections$ImmutableArray* $tmp4842;
    panda$collections$ImmutableArray* $tmp4843;
    panda$core$Int64 $tmp4845;
    panda$core$Int64 $tmp4850;
    panda$core$String* $tmp4853;
    panda$core$String* $tmp4854;
    panda$core$String* $tmp4856;
    org$pandalanguage$pandac$ASTNode* $tmp4861;
    org$pandalanguage$pandac$ASTNode* $tmp4864;
    org$pandalanguage$pandac$ASTNode* $tmp4865;
    org$pandalanguage$pandac$ASTNode* $tmp4866;
    panda$core$Int64 $tmp4868;
    org$pandalanguage$pandac$ASTNode* decl4873 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4874;
    org$pandalanguage$pandac$ASTNode* $tmp4875;
    org$pandalanguage$pandac$ASTNode* $tmp4877;
    org$pandalanguage$pandac$ASTNode* $tmp4881;
    org$pandalanguage$pandac$ASTNode* $tmp4882;
    panda$collections$ImmutableArray* $tmp4883;
    panda$collections$ImmutableArray* $tmp4884;
    panda$collections$ImmutableArray* $tmp4885;
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
    panda$core$Int64 $tmp4929;
    panda$core$Int64 $tmp4932;
    org$pandalanguage$pandac$ASTNode* decl4938 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4939;
    org$pandalanguage$pandac$ASTNode* $tmp4940;
    org$pandalanguage$pandac$ASTNode* $tmp4942;
    org$pandalanguage$pandac$ASTNode* $tmp4946;
    org$pandalanguage$pandac$ASTNode* $tmp4947;
    panda$collections$ImmutableArray* $tmp4948;
    panda$collections$ImmutableArray* $tmp4949;
    panda$collections$ImmutableArray* $tmp4950;
    panda$core$Int64 $tmp4956;
    panda$core$Int64 $tmp4959;
    panda$core$Int64 $tmp4963;
    panda$core$Int64 $tmp4967;
    org$pandalanguage$pandac$ASTNode* decl4973 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4974;
    org$pandalanguage$pandac$ASTNode* $tmp4975;
    org$pandalanguage$pandac$ASTNode* $tmp4977;
    org$pandalanguage$pandac$ASTNode* $tmp4981;
    org$pandalanguage$pandac$ASTNode* $tmp4982;
    panda$collections$ImmutableArray* $tmp4983;
    panda$collections$ImmutableArray* $tmp4984;
    panda$collections$ImmutableArray* $tmp4985;
    panda$core$Int64 $tmp4988;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4990;
    panda$core$Int64 $tmp4991;
    panda$core$String* $tmp4993;
    panda$core$String* $tmp4994;
    panda$core$String* $tmp4996;
    org$pandalanguage$pandac$ASTNode* $tmp5001;
    org$pandalanguage$pandac$ASTNode* $tmp5004;
    org$pandalanguage$pandac$ASTNode* $tmp5005;
    panda$core$Int64 $tmp5007;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5008;
    panda$core$Int64 $tmp5009;
    panda$core$String* $tmp5010;
    panda$collections$ImmutableArray* $tmp5012;
    int $tmp4703;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4706, 19);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4705, $tmp4706);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4708 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4705, &$s4707);
        start4704 = $tmp4708;
        if (((panda$core$Bit) { !start4704.nonnull }).value) {
        {
            $tmp4710 = NULL;
            $returnValue4709 = $tmp4710;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4710));
            $tmp4703 = 0;
            goto $l4701;
            $l4711:;
            return $returnValue4709;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4715, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4714, $tmp4715);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4717 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4714, &$s4716);
        name4713 = $tmp4717;
        if (((panda$core$Bit) { !name4713.nonnull }).value) {
        {
            $tmp4718 = NULL;
            $returnValue4709 = $tmp4718;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4718));
            $tmp4703 = 1;
            goto $l4701;
            $l4719:;
            return $returnValue4709;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4722, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4721, $tmp4722);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4724 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4721, &$s4723);
        if (((panda$core$Bit) { !$tmp4724.nonnull }).value) {
        {
            $tmp4725 = NULL;
            $returnValue4709 = $tmp4725;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4725));
            $tmp4703 = 2;
            goto $l4701;
            $l4726:;
            return $returnValue4709;
        }
        }
        panda$collections$Array* $tmp4731 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4731);
        $tmp4730 = $tmp4731;
        $tmp4729 = $tmp4730;
        members4728 = $tmp4729;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4729));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4730));
        $tmp4733 = NULL;
        dc4732 = $tmp4733;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4733));
        $l4734:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4737 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4736 = $tmp4737;
            {
                $match$2197_134738 = next4736.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4748, 17);
                panda$core$Bit $tmp4749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2197_134738.$rawValue, $tmp4748);
                bool $tmp4747 = $tmp4749.value;
                if ($tmp4747) goto $l4750;
                panda$core$Int64$init$builtin_int64(&$tmp4751, 18);
                panda$core$Bit $tmp4752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2197_134738.$rawValue, $tmp4751);
                $tmp4747 = $tmp4752.value;
                $l4750:;
                panda$core$Bit $tmp4753 = { $tmp4747 };
                bool $tmp4746 = $tmp4753.value;
                if ($tmp4746) goto $l4754;
                panda$core$Int64$init$builtin_int64(&$tmp4755, 19);
                panda$core$Bit $tmp4756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2197_134738.$rawValue, $tmp4755);
                $tmp4746 = $tmp4756.value;
                $l4754:;
                panda$core$Bit $tmp4757 = { $tmp4746 };
                bool $tmp4745 = $tmp4757.value;
                if ($tmp4745) goto $l4758;
                panda$core$Int64$init$builtin_int64(&$tmp4759, 21);
                panda$core$Bit $tmp4760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2197_134738.$rawValue, $tmp4759);
                $tmp4745 = $tmp4760.value;
                $l4758:;
                panda$core$Bit $tmp4761 = { $tmp4745 };
                bool $tmp4744 = $tmp4761.value;
                if ($tmp4744) goto $l4762;
                panda$core$Int64$init$builtin_int64(&$tmp4763, 20);
                panda$core$Bit $tmp4764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2197_134738.$rawValue, $tmp4763);
                $tmp4744 = $tmp4764.value;
                $l4762:;
                panda$core$Bit $tmp4765 = { $tmp4744 };
                bool $tmp4743 = $tmp4765.value;
                if ($tmp4743) goto $l4766;
                panda$core$Int64$init$builtin_int64(&$tmp4767, 13);
                panda$core$Bit $tmp4768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2197_134738.$rawValue, $tmp4767);
                $tmp4743 = $tmp4768.value;
                $l4766:;
                panda$core$Bit $tmp4769 = { $tmp4743 };
                bool $tmp4742 = $tmp4769.value;
                if ($tmp4742) goto $l4770;
                panda$core$Int64$init$builtin_int64(&$tmp4771, 23);
                panda$core$Bit $tmp4772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2197_134738.$rawValue, $tmp4771);
                $tmp4742 = $tmp4772.value;
                $l4770:;
                panda$core$Bit $tmp4773 = { $tmp4742 };
                bool $tmp4741 = $tmp4773.value;
                if ($tmp4741) goto $l4774;
                panda$core$Int64$init$builtin_int64(&$tmp4775, 24);
                panda$core$Bit $tmp4776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2197_134738.$rawValue, $tmp4775);
                $tmp4741 = $tmp4776.value;
                $l4774:;
                panda$core$Bit $tmp4777 = { $tmp4741 };
                bool $tmp4740 = $tmp4777.value;
                if ($tmp4740) goto $l4778;
                panda$core$Int64$init$builtin_int64(&$tmp4779, 25);
                panda$core$Bit $tmp4780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2197_134738.$rawValue, $tmp4779);
                $tmp4740 = $tmp4780.value;
                $l4778:;
                panda$core$Bit $tmp4781 = { $tmp4740 };
                bool $tmp4739 = $tmp4781.value;
                if ($tmp4739) goto $l4782;
                panda$core$Int64$init$builtin_int64(&$tmp4783, 26);
                panda$core$Bit $tmp4784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2197_134738.$rawValue, $tmp4783);
                $tmp4739 = $tmp4784.value;
                $l4782:;
                panda$core$Bit $tmp4785 = { $tmp4739 };
                if ($tmp4785.value) {
                {
                    goto $l4735;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4786, 11);
                panda$core$Bit $tmp4787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2197_134738.$rawValue, $tmp4786);
                if ($tmp4787.value) {
                {
                    if (((panda$core$Bit) { dc4732 != NULL }).value) {
                    {
                        panda$core$String* $tmp4792 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4736);
                        $tmp4791 = $tmp4792;
                        panda$core$String* $tmp4793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4790, $tmp4791);
                        $tmp4789 = $tmp4793;
                        panda$core$String* $tmp4795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4789, &$s4794);
                        $tmp4788 = $tmp4795;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4736, $tmp4788);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4788));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4789));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4791));
                    }
                    }
                    {
                        $tmp4796 = dc4732;
                        org$pandalanguage$pandac$ASTNode* $tmp4799 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4798 = $tmp4799;
                        $tmp4797 = $tmp4798;
                        dc4732 = $tmp4797;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4797));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4798));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4796));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4800, 48);
                panda$core$Bit $tmp4801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2197_134738.$rawValue, $tmp4800);
                if ($tmp4801.value) {
                {
                    int $tmp4804;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4808 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4732);
                        $tmp4807 = $tmp4808;
                        $tmp4806 = $tmp4807;
                        c4805 = $tmp4806;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4806));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4807));
                        if (((panda$core$Bit) { c4805 == NULL }).value) {
                        {
                            $tmp4809 = NULL;
                            $returnValue4709 = $tmp4809;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4809));
                            $tmp4804 = 0;
                            goto $l4802;
                            $l4810:;
                            $tmp4703 = 3;
                            goto $l4701;
                            $l4811:;
                            return $returnValue4709;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4728, ((panda$core$Object*) c4805));
                        {
                            $tmp4813 = dc4732;
                            $tmp4814 = NULL;
                            dc4732 = $tmp4814;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4814));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4813));
                        }
                    }
                    $tmp4804 = -1;
                    goto $l4802;
                    $l4802:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c4805));
                    c4805 = NULL;
                    switch ($tmp4804) {
                        case 0: goto $l4810;
                        case -1: goto $l4815;
                    }
                    $l4815:;
                }
                }
                else {
                {
                    goto $l4735;
                }
                }
                }
                }
            }
        }
        }
        $l4735:;
        panda$collections$ImmutableArray* $tmp4819 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4819);
        $tmp4818 = $tmp4819;
        $tmp4817 = $tmp4818;
        a4816 = $tmp4817;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4817));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4818));
        $l4820:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4823 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4822 = $tmp4823;
            {
                $match$2221_134824 = next4822.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4825, 13);
                panda$core$Bit $tmp4826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134824.$rawValue, $tmp4825);
                if ($tmp4826.value) {
                {
                    panda$core$Int64 $tmp4827 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4816);
                    panda$core$Int64$init$builtin_int64(&$tmp4828, 0);
                    panda$core$Bit $tmp4829 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4827, $tmp4828);
                    if ($tmp4829.value) {
                    {
                        panda$core$String* $tmp4834 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4822);
                        $tmp4833 = $tmp4834;
                        panda$core$String* $tmp4835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4832, $tmp4833);
                        $tmp4831 = $tmp4835;
                        panda$core$String* $tmp4837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4831, &$s4836);
                        $tmp4830 = $tmp4837;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4822, $tmp4830);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4830));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4831));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4833));
                        $tmp4838 = NULL;
                        $returnValue4709 = $tmp4838;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4838));
                        $tmp4703 = 4;
                        goto $l4701;
                        $l4839:;
                        return $returnValue4709;
                    }
                    }
                    {
                        $tmp4841 = a4816;
                        panda$collections$ImmutableArray* $tmp4844 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp4843 = $tmp4844;
                        $tmp4842 = $tmp4843;
                        a4816 = $tmp4842;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4842));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4843));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4841));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4845, 11);
                panda$core$Bit $tmp4846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134824.$rawValue, $tmp4845);
                if ($tmp4846.value) {
                {
                    bool $tmp4847 = ((panda$core$Bit) { dc4732 != NULL }).value;
                    if ($tmp4847) goto $l4848;
                    panda$core$Int64 $tmp4849 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4816);
                    panda$core$Int64$init$builtin_int64(&$tmp4850, 0);
                    panda$core$Bit $tmp4851 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4849, $tmp4850);
                    $tmp4847 = $tmp4851.value;
                    $l4848:;
                    panda$core$Bit $tmp4852 = { $tmp4847 };
                    if ($tmp4852.value) {
                    {
                        panda$core$String* $tmp4857 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4822);
                        $tmp4856 = $tmp4857;
                        panda$core$String* $tmp4858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4855, $tmp4856);
                        $tmp4854 = $tmp4858;
                        panda$core$String* $tmp4860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4854, &$s4859);
                        $tmp4853 = $tmp4860;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4822, $tmp4853);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4853));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4854));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4856));
                        $tmp4861 = NULL;
                        $returnValue4709 = $tmp4861;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4861));
                        $tmp4703 = 5;
                        goto $l4701;
                        $l4862:;
                        return $returnValue4709;
                    }
                    }
                    {
                        $tmp4864 = dc4732;
                        org$pandalanguage$pandac$ASTNode* $tmp4867 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4866 = $tmp4867;
                        $tmp4865 = $tmp4866;
                        dc4732 = $tmp4865;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4865));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4866));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4864));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4868, 17);
                panda$core$Bit $tmp4869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134824.$rawValue, $tmp4868);
                if ($tmp4869.value) {
                {
                    int $tmp4872;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4876 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4732, a4816);
                        $tmp4875 = $tmp4876;
                        $tmp4874 = $tmp4875;
                        decl4873 = $tmp4874;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4874));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4875));
                        if (((panda$core$Bit) { decl4873 == NULL }).value) {
                        {
                            $tmp4877 = NULL;
                            $returnValue4709 = $tmp4877;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4877));
                            $tmp4872 = 0;
                            goto $l4870;
                            $l4878:;
                            $tmp4703 = 6;
                            goto $l4701;
                            $l4879:;
                            return $returnValue4709;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4728, ((panda$core$Object*) decl4873));
                        {
                            $tmp4881 = dc4732;
                            $tmp4882 = NULL;
                            dc4732 = $tmp4882;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4882));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4881));
                        }
                        {
                            $tmp4883 = a4816;
                            panda$collections$ImmutableArray* $tmp4886 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4886);
                            $tmp4885 = $tmp4886;
                            $tmp4884 = $tmp4885;
                            a4816 = $tmp4884;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4884));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4885));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4883));
                        }
                    }
                    $tmp4872 = -1;
                    goto $l4870;
                    $l4870:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4873));
                    decl4873 = NULL;
                    switch ($tmp4872) {
                        case 0: goto $l4878;
                        case -1: goto $l4887;
                    }
                    $l4887:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4888, 18);
                panda$core$Bit $tmp4889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134824.$rawValue, $tmp4888);
                if ($tmp4889.value) {
                {
                    int $tmp4892;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4896 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4732, a4816);
                        $tmp4895 = $tmp4896;
                        $tmp4894 = $tmp4895;
                        decl4893 = $tmp4894;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4894));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4895));
                        if (((panda$core$Bit) { decl4893 == NULL }).value) {
                        {
                            $tmp4897 = NULL;
                            $returnValue4709 = $tmp4897;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4897));
                            $tmp4892 = 0;
                            goto $l4890;
                            $l4898:;
                            $tmp4703 = 7;
                            goto $l4701;
                            $l4899:;
                            return $returnValue4709;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4728, ((panda$core$Object*) decl4893));
                        {
                            $tmp4901 = dc4732;
                            $tmp4902 = NULL;
                            dc4732 = $tmp4902;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4902));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4901));
                        }
                        {
                            $tmp4903 = a4816;
                            panda$collections$ImmutableArray* $tmp4906 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4906);
                            $tmp4905 = $tmp4906;
                            $tmp4904 = $tmp4905;
                            a4816 = $tmp4904;
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
                        case 0: goto $l4898;
                        case -1: goto $l4907;
                    }
                    $l4907:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4908, 19);
                panda$core$Bit $tmp4909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134824.$rawValue, $tmp4908);
                if ($tmp4909.value) {
                {
                    int $tmp4912;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4916 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4732, a4816);
                        $tmp4915 = $tmp4916;
                        $tmp4914 = $tmp4915;
                        decl4913 = $tmp4914;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4914));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4915));
                        if (((panda$core$Bit) { decl4913 == NULL }).value) {
                        {
                            $tmp4917 = NULL;
                            $returnValue4709 = $tmp4917;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4917));
                            $tmp4912 = 0;
                            goto $l4910;
                            $l4918:;
                            $tmp4703 = 8;
                            goto $l4701;
                            $l4919:;
                            return $returnValue4709;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4728, ((panda$core$Object*) decl4913));
                        {
                            $tmp4921 = dc4732;
                            $tmp4922 = NULL;
                            dc4732 = $tmp4922;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4922));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4921));
                        }
                        {
                            $tmp4923 = a4816;
                            panda$collections$ImmutableArray* $tmp4926 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4926);
                            $tmp4925 = $tmp4926;
                            $tmp4924 = $tmp4925;
                            a4816 = $tmp4924;
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
                panda$core$Int64$init$builtin_int64(&$tmp4929, 21);
                panda$core$Bit $tmp4930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134824.$rawValue, $tmp4929);
                bool $tmp4928 = $tmp4930.value;
                if ($tmp4928) goto $l4931;
                panda$core$Int64$init$builtin_int64(&$tmp4932, 20);
                panda$core$Bit $tmp4933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134824.$rawValue, $tmp4932);
                $tmp4928 = $tmp4933.value;
                $l4931:;
                panda$core$Bit $tmp4934 = { $tmp4928 };
                if ($tmp4934.value) {
                {
                    int $tmp4937;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4941 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4732, a4816);
                        $tmp4940 = $tmp4941;
                        $tmp4939 = $tmp4940;
                        decl4938 = $tmp4939;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4939));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4940));
                        if (((panda$core$Bit) { decl4938 == NULL }).value) {
                        {
                            $tmp4942 = NULL;
                            $returnValue4709 = $tmp4942;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4942));
                            $tmp4937 = 0;
                            goto $l4935;
                            $l4943:;
                            $tmp4703 = 9;
                            goto $l4701;
                            $l4944:;
                            return $returnValue4709;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4728, ((panda$core$Object*) decl4938));
                        {
                            $tmp4946 = dc4732;
                            $tmp4947 = NULL;
                            dc4732 = $tmp4947;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4947));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4946));
                        }
                        {
                            $tmp4948 = a4816;
                            panda$collections$ImmutableArray* $tmp4951 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4951);
                            $tmp4950 = $tmp4951;
                            $tmp4949 = $tmp4950;
                            a4816 = $tmp4949;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4949));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4950));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4948));
                        }
                    }
                    $tmp4937 = -1;
                    goto $l4935;
                    $l4935:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4938));
                    decl4938 = NULL;
                    switch ($tmp4937) {
                        case -1: goto $l4952;
                        case 0: goto $l4943;
                    }
                    $l4952:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4956, 23);
                panda$core$Bit $tmp4957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134824.$rawValue, $tmp4956);
                bool $tmp4955 = $tmp4957.value;
                if ($tmp4955) goto $l4958;
                panda$core$Int64$init$builtin_int64(&$tmp4959, 24);
                panda$core$Bit $tmp4960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134824.$rawValue, $tmp4959);
                $tmp4955 = $tmp4960.value;
                $l4958:;
                panda$core$Bit $tmp4961 = { $tmp4955 };
                bool $tmp4954 = $tmp4961.value;
                if ($tmp4954) goto $l4962;
                panda$core$Int64$init$builtin_int64(&$tmp4963, 25);
                panda$core$Bit $tmp4964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134824.$rawValue, $tmp4963);
                $tmp4954 = $tmp4964.value;
                $l4962:;
                panda$core$Bit $tmp4965 = { $tmp4954 };
                bool $tmp4953 = $tmp4965.value;
                if ($tmp4953) goto $l4966;
                panda$core$Int64$init$builtin_int64(&$tmp4967, 26);
                panda$core$Bit $tmp4968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134824.$rawValue, $tmp4967);
                $tmp4953 = $tmp4968.value;
                $l4966:;
                panda$core$Bit $tmp4969 = { $tmp4953 };
                if ($tmp4969.value) {
                {
                    int $tmp4972;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4976 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4732, a4816);
                        $tmp4975 = $tmp4976;
                        $tmp4974 = $tmp4975;
                        decl4973 = $tmp4974;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4974));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4975));
                        if (((panda$core$Bit) { decl4973 == NULL }).value) {
                        {
                            $tmp4977 = NULL;
                            $returnValue4709 = $tmp4977;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4977));
                            $tmp4972 = 0;
                            goto $l4970;
                            $l4978:;
                            $tmp4703 = 10;
                            goto $l4701;
                            $l4979:;
                            return $returnValue4709;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4728, ((panda$core$Object*) decl4973));
                        {
                            $tmp4981 = dc4732;
                            $tmp4982 = NULL;
                            dc4732 = $tmp4982;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4982));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4981));
                        }
                        {
                            $tmp4983 = a4816;
                            panda$collections$ImmutableArray* $tmp4986 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4986);
                            $tmp4985 = $tmp4986;
                            $tmp4984 = $tmp4985;
                            a4816 = $tmp4984;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4984));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4985));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4983));
                        }
                    }
                    $tmp4972 = -1;
                    goto $l4970;
                    $l4970:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4973));
                    decl4973 = NULL;
                    switch ($tmp4972) {
                        case 0: goto $l4978;
                        case -1: goto $l4987;
                    }
                    $l4987:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4988, 100);
                panda$core$Bit $tmp4989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2221_134824.$rawValue, $tmp4988);
                if ($tmp4989.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp4991, 100);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4990, $tmp4991);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4990, &$s4992);
                    goto $l4821;
                }
                }
                else {
                {
                    panda$core$String* $tmp4997 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4822);
                    $tmp4996 = $tmp4997;
                    panda$core$String* $tmp4998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4995, $tmp4996);
                    $tmp4994 = $tmp4998;
                    panda$core$String* $tmp5000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4994, &$s4999);
                    $tmp4993 = $tmp5000;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4822, $tmp4993);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4993));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4994));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4996));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp5001 = NULL;
                    $returnValue4709 = $tmp5001;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5001));
                    $tmp4703 = 11;
                    goto $l4701;
                    $l5002:;
                    return $returnValue4709;
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
        $l4821:;
        org$pandalanguage$pandac$ASTNode* $tmp5006 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5007, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5009, 2);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5008, $tmp5009);
        panda$core$String* $tmp5011 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4713.value));
        $tmp5010 = $tmp5011;
        panda$collections$ImmutableArray* $tmp5013 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4728);
        $tmp5012 = $tmp5013;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5006, $tmp5007, ((org$pandalanguage$pandac$parser$Token) start4704.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp5008, $tmp5010, NULL, NULL, $tmp5012);
        $tmp5005 = $tmp5006;
        $tmp5004 = $tmp5005;
        $returnValue4709 = $tmp5004;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5004));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5005));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5012));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5010));
        $tmp4703 = 12;
        goto $l4701;
        $l5014:;
        return $returnValue4709;
    }
    $l4701:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4816));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4732));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4728));
    members4728 = NULL;
    a4816 = NULL;
    switch ($tmp4703) {
        case 11: goto $l5002;
        case 8: goto $l4919;
        case 10: goto $l4979;
        case 7: goto $l4899;
        case 12: goto $l5014;
        case 5: goto $l4862;
        case 6: goto $l4879;
        case 9: goto $l4944;
        case 4: goto $l4839;
        case 2: goto $l4726;
        case 3: goto $l4811;
        case 0: goto $l4711;
        case 1: goto $l4719;
    }
    $l5016:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start5020;
    org$pandalanguage$pandac$ASTNode* dc5022 = NULL;
    panda$core$Int64 $tmp5023;
    org$pandalanguage$pandac$ASTNode* $tmp5025;
    org$pandalanguage$pandac$ASTNode* $tmp5026;
    org$pandalanguage$pandac$ASTNode* $tmp5027;
    org$pandalanguage$pandac$ASTNode* $returnValue5029;
    org$pandalanguage$pandac$ASTNode* $tmp5030;
    org$pandalanguage$pandac$ASTNode* $tmp5033;
    org$pandalanguage$pandac$ASTNode* $tmp5034;
    panda$collections$ImmutableArray* a5035 = NULL;
    panda$collections$ImmutableArray* $tmp5036;
    panda$collections$ImmutableArray* $tmp5037;
    org$pandalanguage$pandac$ASTNode* $tmp5039;
    org$pandalanguage$pandac$parser$Token$Kind $match$2307_95042;
    panda$core$Int64 $tmp5044;
    org$pandalanguage$pandac$ASTNode* $tmp5046;
    org$pandalanguage$pandac$ASTNode* $tmp5047;
    panda$core$Int64 $tmp5051;
    org$pandalanguage$pandac$ASTNode* $tmp5053;
    org$pandalanguage$pandac$ASTNode* $tmp5054;
    panda$core$Int64 $tmp5058;
    org$pandalanguage$pandac$ASTNode* $tmp5060;
    org$pandalanguage$pandac$ASTNode* $tmp5061;
    panda$core$Int64 $tmp5066;
    panda$core$Int64 $tmp5069;
    org$pandalanguage$pandac$ASTNode* $tmp5072;
    org$pandalanguage$pandac$ASTNode* $tmp5073;
    panda$core$Int64 $tmp5077;
    org$pandalanguage$pandac$ASTNode* $tmp5079;
    org$pandalanguage$pandac$ASTNode* $tmp5080;
    panda$core$Int64 $tmp5087;
    panda$core$Int64 $tmp5090;
    panda$core$Int64 $tmp5094;
    panda$core$Int64 $tmp5098;
    org$pandalanguage$pandac$ASTNode* $tmp5101;
    org$pandalanguage$pandac$ASTNode* $tmp5102;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5106;
    panda$core$Int64 $tmp5107;
    org$pandalanguage$pandac$ASTNode* $tmp5109;
    int $tmp5019;
    {
        org$pandalanguage$pandac$parser$Token $tmp5021 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start5020 = $tmp5021;
        memset(&dc5022, 0, sizeof(dc5022));
        panda$core$Int64$init$builtin_int64(&$tmp5023, 11);
        panda$core$Bit $tmp5024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start5020.kind.$rawValue, $tmp5023);
        if ($tmp5024.value) {
        {
            {
                $tmp5025 = dc5022;
                org$pandalanguage$pandac$ASTNode* $tmp5028 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5027 = $tmp5028;
                $tmp5026 = $tmp5027;
                dc5022 = $tmp5026;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5026));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5027));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5025));
            }
            if (((panda$core$Bit) { dc5022 == NULL }).value) {
            {
                $tmp5030 = NULL;
                $returnValue5029 = $tmp5030;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5030));
                $tmp5019 = 0;
                goto $l5017;
                $l5031:;
                return $returnValue5029;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5033 = dc5022;
                $tmp5034 = NULL;
                dc5022 = $tmp5034;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5034));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5033));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp5038 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp5037 = $tmp5038;
        $tmp5036 = $tmp5037;
        a5035 = $tmp5036;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5036));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5037));
        if (((panda$core$Bit) { a5035 == NULL }).value) {
        {
            $tmp5039 = NULL;
            $returnValue5029 = $tmp5039;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5039));
            $tmp5019 = 1;
            goto $l5017;
            $l5040:;
            return $returnValue5029;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp5043 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2307_95042 = $tmp5043.kind;
            panda$core$Int64$init$builtin_int64(&$tmp5044, 17);
            panda$core$Bit $tmp5045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2307_95042.$rawValue, $tmp5044);
            if ($tmp5045.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5048 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5022, a5035);
                $tmp5047 = $tmp5048;
                $tmp5046 = $tmp5047;
                $returnValue5029 = $tmp5046;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5046));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5047));
                $tmp5019 = 2;
                goto $l5017;
                $l5049:;
                return $returnValue5029;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5051, 18);
            panda$core$Bit $tmp5052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2307_95042.$rawValue, $tmp5051);
            if ($tmp5052.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5055 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5022, a5035);
                $tmp5054 = $tmp5055;
                $tmp5053 = $tmp5054;
                $returnValue5029 = $tmp5053;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5053));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5054));
                $tmp5019 = 3;
                goto $l5017;
                $l5056:;
                return $returnValue5029;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5058, 19);
            panda$core$Bit $tmp5059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2307_95042.$rawValue, $tmp5058);
            if ($tmp5059.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5062 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5022, a5035);
                $tmp5061 = $tmp5062;
                $tmp5060 = $tmp5061;
                $returnValue5029 = $tmp5060;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5060));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5061));
                $tmp5019 = 4;
                goto $l5017;
                $l5063:;
                return $returnValue5029;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5066, 21);
            panda$core$Bit $tmp5067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2307_95042.$rawValue, $tmp5066);
            bool $tmp5065 = $tmp5067.value;
            if ($tmp5065) goto $l5068;
            panda$core$Int64$init$builtin_int64(&$tmp5069, 20);
            panda$core$Bit $tmp5070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2307_95042.$rawValue, $tmp5069);
            $tmp5065 = $tmp5070.value;
            $l5068:;
            panda$core$Bit $tmp5071 = { $tmp5065 };
            if ($tmp5071.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5074 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5022, a5035);
                $tmp5073 = $tmp5074;
                $tmp5072 = $tmp5073;
                $returnValue5029 = $tmp5072;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5072));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5073));
                $tmp5019 = 5;
                goto $l5017;
                $l5075:;
                return $returnValue5029;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5077, 22);
            panda$core$Bit $tmp5078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2307_95042.$rawValue, $tmp5077);
            if ($tmp5078.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5081 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5022, a5035);
                $tmp5080 = $tmp5081;
                $tmp5079 = $tmp5080;
                $returnValue5029 = $tmp5079;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5079));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5080));
                $tmp5019 = 6;
                goto $l5017;
                $l5082:;
                return $returnValue5029;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5087, 23);
            panda$core$Bit $tmp5088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2307_95042.$rawValue, $tmp5087);
            bool $tmp5086 = $tmp5088.value;
            if ($tmp5086) goto $l5089;
            panda$core$Int64$init$builtin_int64(&$tmp5090, 24);
            panda$core$Bit $tmp5091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2307_95042.$rawValue, $tmp5090);
            $tmp5086 = $tmp5091.value;
            $l5089:;
            panda$core$Bit $tmp5092 = { $tmp5086 };
            bool $tmp5085 = $tmp5092.value;
            if ($tmp5085) goto $l5093;
            panda$core$Int64$init$builtin_int64(&$tmp5094, 25);
            panda$core$Bit $tmp5095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2307_95042.$rawValue, $tmp5094);
            $tmp5085 = $tmp5095.value;
            $l5093:;
            panda$core$Bit $tmp5096 = { $tmp5085 };
            bool $tmp5084 = $tmp5096.value;
            if ($tmp5084) goto $l5097;
            panda$core$Int64$init$builtin_int64(&$tmp5098, 26);
            panda$core$Bit $tmp5099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2307_95042.$rawValue, $tmp5098);
            $tmp5084 = $tmp5099.value;
            $l5097:;
            panda$core$Bit $tmp5100 = { $tmp5084 };
            if ($tmp5100.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5103 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5022, a5035);
                $tmp5102 = $tmp5103;
                $tmp5101 = $tmp5102;
                $returnValue5029 = $tmp5101;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5102));
                $tmp5019 = 7;
                goto $l5017;
                $l5104:;
                return $returnValue5029;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp5107, 17);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5106, $tmp5107);
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5106, &$s5108);
                $tmp5109 = NULL;
                $returnValue5029 = $tmp5109;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5109));
                $tmp5019 = 8;
                goto $l5017;
                $l5110:;
                return $returnValue5029;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp5019 = -1;
    goto $l5017;
    $l5017:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a5035));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc5022));
    a5035 = NULL;
    switch ($tmp5019) {
        case 2: goto $l5049;
        case 8: goto $l5110;
        case 5: goto $l5075;
        case 4: goto $l5063;
        case 3: goto $l5056;
        case -1: goto $l5112;
        case 1: goto $l5040;
        case 0: goto $l5031;
        case 7: goto $l5104;
        case 6: goto $l5082;
    }
    $l5112:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5116;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5117;
    panda$core$Int64 $tmp5118;
    org$pandalanguage$pandac$ASTNode* $returnValue5121;
    org$pandalanguage$pandac$ASTNode* $tmp5122;
    org$pandalanguage$pandac$parser$Token$nullable name5125;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5126;
    panda$core$Int64 $tmp5127;
    org$pandalanguage$pandac$ASTNode* $tmp5130;
    panda$collections$ImmutableArray* generics5133 = NULL;
    panda$core$Int64 $tmp5135;
    panda$collections$ImmutableArray* $tmp5137;
    panda$collections$ImmutableArray* $tmp5138;
    panda$collections$ImmutableArray* $tmp5139;
    org$pandalanguage$pandac$ASTNode* $tmp5141;
    panda$collections$ImmutableArray* $tmp5144;
    panda$collections$ImmutableArray* $tmp5145;
    panda$collections$ImmutableArray* stypes5146 = NULL;
    panda$core$Int64 $tmp5148;
    panda$collections$ImmutableArray* $tmp5150;
    panda$collections$ImmutableArray* $tmp5151;
    panda$collections$ImmutableArray* $tmp5152;
    org$pandalanguage$pandac$ASTNode* $tmp5154;
    panda$collections$ImmutableArray* $tmp5157;
    panda$collections$ImmutableArray* $tmp5158;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5159;
    panda$core$Int64 $tmp5160;
    org$pandalanguage$pandac$ASTNode* $tmp5163;
    panda$collections$Array* members5166 = NULL;
    panda$collections$Array* $tmp5167;
    panda$collections$Array* $tmp5168;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5173;
    panda$core$Int64 $tmp5174;
    org$pandalanguage$pandac$ASTNode* member5179 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5180;
    org$pandalanguage$pandac$ASTNode* $tmp5181;
    org$pandalanguage$pandac$ASTNode* $tmp5183;
    org$pandalanguage$pandac$ASTNode* $tmp5188;
    org$pandalanguage$pandac$ASTNode* $tmp5189;
    panda$core$Int64 $tmp5191;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5192;
    panda$core$Int64 $tmp5193;
    panda$core$String* $tmp5194;
    panda$collections$ImmutableArray* $tmp5196;
    int $tmp5115;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5118, 17);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5117, $tmp5118);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5120 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5117, &$s5119);
        start5116 = $tmp5120;
        if (((panda$core$Bit) { !start5116.nonnull }).value) {
        {
            $tmp5122 = NULL;
            $returnValue5121 = $tmp5122;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5122));
            $tmp5115 = 0;
            goto $l5113;
            $l5123:;
            return $returnValue5121;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5127, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5126, $tmp5127);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5129 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5126, &$s5128);
        name5125 = $tmp5129;
        if (((panda$core$Bit) { !name5125.nonnull }).value) {
        {
            $tmp5130 = NULL;
            $returnValue5121 = $tmp5130;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5130));
            $tmp5115 = 1;
            goto $l5113;
            $l5131:;
            return $returnValue5121;
        }
        }
        memset(&generics5133, 0, sizeof(generics5133));
        org$pandalanguage$pandac$parser$Token $tmp5134 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5135, 62);
        panda$core$Bit $tmp5136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5134.kind.$rawValue, $tmp5135);
        if ($tmp5136.value) {
        {
            {
                $tmp5137 = generics5133;
                panda$collections$ImmutableArray* $tmp5140 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5139 = $tmp5140;
                $tmp5138 = $tmp5139;
                generics5133 = $tmp5138;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5138));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5139));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5137));
            }
            if (((panda$core$Bit) { generics5133 == NULL }).value) {
            {
                $tmp5141 = NULL;
                $returnValue5121 = $tmp5141;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5141));
                $tmp5115 = 2;
                goto $l5113;
                $l5142:;
                return $returnValue5121;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5144 = generics5133;
                $tmp5145 = NULL;
                generics5133 = $tmp5145;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5145));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5144));
            }
        }
        }
        memset(&stypes5146, 0, sizeof(stypes5146));
        org$pandalanguage$pandac$parser$Token $tmp5147 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5148, 95);
        panda$core$Bit $tmp5149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5147.kind.$rawValue, $tmp5148);
        if ($tmp5149.value) {
        {
            {
                $tmp5150 = stypes5146;
                panda$collections$ImmutableArray* $tmp5153 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5152 = $tmp5153;
                $tmp5151 = $tmp5152;
                stypes5146 = $tmp5151;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5151));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5150));
            }
            if (((panda$core$Bit) { stypes5146 == NULL }).value) {
            {
                $tmp5154 = NULL;
                $returnValue5121 = $tmp5154;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5154));
                $tmp5115 = 3;
                goto $l5113;
                $l5155:;
                return $returnValue5121;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5157 = stypes5146;
                $tmp5158 = NULL;
                stypes5146 = $tmp5158;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5158));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5157));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5160, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5159, $tmp5160);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5162 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5159, &$s5161);
        if (((panda$core$Bit) { !$tmp5162.nonnull }).value) {
        {
            $tmp5163 = NULL;
            $returnValue5121 = $tmp5163;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5163));
            $tmp5115 = 4;
            goto $l5113;
            $l5164:;
            return $returnValue5121;
        }
        }
        panda$collections$Array* $tmp5169 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5169);
        $tmp5168 = $tmp5169;
        $tmp5167 = $tmp5168;
        members5166 = $tmp5167;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5167));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5168));
        $l5170:;
        panda$core$Int64$init$builtin_int64(&$tmp5174, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5173, $tmp5174);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5175 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5173);
        bool $tmp5172 = ((panda$core$Bit) { !$tmp5175.nonnull }).value;
        if (!$tmp5172) goto $l5171;
        {
            int $tmp5178;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5182 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5181 = $tmp5182;
                $tmp5180 = $tmp5181;
                member5179 = $tmp5180;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5180));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5181));
                if (((panda$core$Bit) { member5179 == NULL }).value) {
                {
                    $tmp5183 = NULL;
                    $returnValue5121 = $tmp5183;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5183));
                    $tmp5178 = 0;
                    goto $l5176;
                    $l5184:;
                    $tmp5115 = 5;
                    goto $l5113;
                    $l5185:;
                    return $returnValue5121;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5166, ((panda$core$Object*) member5179));
            }
            $tmp5178 = -1;
            goto $l5176;
            $l5176:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5179));
            member5179 = NULL;
            switch ($tmp5178) {
                case -1: goto $l5187;
                case 0: goto $l5184;
            }
            $l5187:;
        }
        goto $l5170;
        $l5171:;
        org$pandalanguage$pandac$ASTNode* $tmp5190 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5191, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5193, 0);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5192, $tmp5193);
        panda$core$String* $tmp5195 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5125.value));
        $tmp5194 = $tmp5195;
        panda$collections$ImmutableArray* $tmp5197 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5166);
        $tmp5196 = $tmp5197;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5190, $tmp5191, ((org$pandalanguage$pandac$parser$Token) start5116.value).position, p_doccomment, p_annotations, $tmp5192, $tmp5194, generics5133, stypes5146, $tmp5196);
        $tmp5189 = $tmp5190;
        $tmp5188 = $tmp5189;
        $returnValue5121 = $tmp5188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5196));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5194));
        $tmp5115 = 6;
        goto $l5113;
        $l5198:;
        return $returnValue5121;
    }
    $l5113:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5166));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes5146));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5133));
    members5166 = NULL;
    switch ($tmp5115) {
        case 2: goto $l5142;
        case 5: goto $l5185;
        case 4: goto $l5164;
        case 3: goto $l5155;
        case 6: goto $l5198;
        case 1: goto $l5131;
        case 0: goto $l5123;
    }
    $l5200:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5204;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5205;
    panda$core$Int64 $tmp5206;
    org$pandalanguage$pandac$ASTNode* $returnValue5209;
    org$pandalanguage$pandac$ASTNode* $tmp5210;
    org$pandalanguage$pandac$parser$Token$nullable name5213;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5214;
    panda$core$Int64 $tmp5215;
    org$pandalanguage$pandac$ASTNode* $tmp5218;
    panda$collections$ImmutableArray* generics5221 = NULL;
    panda$core$Int64 $tmp5223;
    panda$collections$ImmutableArray* $tmp5225;
    panda$collections$ImmutableArray* $tmp5226;
    panda$collections$ImmutableArray* $tmp5227;
    org$pandalanguage$pandac$ASTNode* $tmp5229;
    panda$collections$ImmutableArray* $tmp5232;
    panda$collections$ImmutableArray* $tmp5233;
    panda$collections$ImmutableArray* $tmp5234;
    panda$collections$Array* intfs5236 = NULL;
    panda$collections$Array* $tmp5237;
    panda$collections$Array* $tmp5238;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5240;
    panda$core$Int64 $tmp5241;
    org$pandalanguage$pandac$ASTNode* t5246 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5247;
    org$pandalanguage$pandac$ASTNode* $tmp5248;
    org$pandalanguage$pandac$ASTNode* $tmp5250;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5257;
    panda$core$Int64 $tmp5258;
    org$pandalanguage$pandac$ASTNode* $tmp5260;
    org$pandalanguage$pandac$ASTNode* $tmp5261;
    org$pandalanguage$pandac$ASTNode* $tmp5262;
    org$pandalanguage$pandac$ASTNode* $tmp5264;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5269;
    panda$core$Int64 $tmp5270;
    org$pandalanguage$pandac$ASTNode* $tmp5273;
    panda$collections$Array* members5276 = NULL;
    panda$collections$Array* $tmp5277;
    panda$collections$Array* $tmp5278;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5283;
    panda$core$Int64 $tmp5284;
    org$pandalanguage$pandac$ASTNode* member5289 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5290;
    org$pandalanguage$pandac$ASTNode* $tmp5291;
    org$pandalanguage$pandac$ASTNode* $tmp5293;
    org$pandalanguage$pandac$ASTNode* $tmp5298;
    org$pandalanguage$pandac$ASTNode* $tmp5299;
    panda$core$Int64 $tmp5301;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5302;
    panda$core$Int64 $tmp5303;
    panda$core$String* $tmp5304;
    panda$collections$ImmutableArray* $tmp5306;
    panda$collections$ImmutableArray* $tmp5308;
    int $tmp5203;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5206, 18);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5205, $tmp5206);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5208 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5205, &$s5207);
        start5204 = $tmp5208;
        if (((panda$core$Bit) { !start5204.nonnull }).value) {
        {
            $tmp5210 = NULL;
            $returnValue5209 = $tmp5210;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5210));
            $tmp5203 = 0;
            goto $l5201;
            $l5211:;
            return $returnValue5209;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5215, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5214, $tmp5215);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5217 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5214, &$s5216);
        name5213 = $tmp5217;
        if (((panda$core$Bit) { !name5213.nonnull }).value) {
        {
            $tmp5218 = NULL;
            $returnValue5209 = $tmp5218;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5218));
            $tmp5203 = 1;
            goto $l5201;
            $l5219:;
            return $returnValue5209;
        }
        }
        memset(&generics5221, 0, sizeof(generics5221));
        org$pandalanguage$pandac$parser$Token $tmp5222 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5223, 62);
        panda$core$Bit $tmp5224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5222.kind.$rawValue, $tmp5223);
        if ($tmp5224.value) {
        {
            {
                $tmp5225 = generics5221;
                panda$collections$ImmutableArray* $tmp5228 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5227 = $tmp5228;
                $tmp5226 = $tmp5227;
                generics5221 = $tmp5226;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5226));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5227));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5225));
            }
            if (((panda$core$Bit) { generics5221 == NULL }).value) {
            {
                $tmp5229 = NULL;
                $returnValue5209 = $tmp5229;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5229));
                $tmp5203 = 2;
                goto $l5201;
                $l5230:;
                return $returnValue5209;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5232 = generics5221;
                panda$collections$ImmutableArray* $tmp5235 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp5235);
                $tmp5234 = $tmp5235;
                $tmp5233 = $tmp5234;
                generics5221 = $tmp5233;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5233));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5234));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5232));
            }
        }
        }
        panda$collections$Array* $tmp5239 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5239);
        $tmp5238 = $tmp5239;
        $tmp5237 = $tmp5238;
        intfs5236 = $tmp5237;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5237));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5238));
        panda$core$Int64$init$builtin_int64(&$tmp5241, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5240, $tmp5241);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5242 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5240);
        if (((panda$core$Bit) { $tmp5242.nonnull }).value) {
        {
            int $tmp5245;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5249 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5248 = $tmp5249;
                $tmp5247 = $tmp5248;
                t5246 = $tmp5247;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5247));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5248));
                if (((panda$core$Bit) { t5246 == NULL }).value) {
                {
                    $tmp5250 = NULL;
                    $returnValue5209 = $tmp5250;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5250));
                    $tmp5245 = 0;
                    goto $l5243;
                    $l5251:;
                    $tmp5203 = 3;
                    goto $l5201;
                    $l5252:;
                    return $returnValue5209;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs5236, ((panda$core$Object*) t5246));
                $l5254:;
                panda$core$Int64$init$builtin_int64(&$tmp5258, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5257, $tmp5258);
                org$pandalanguage$pandac$parser$Token$nullable $tmp5259 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5257);
                bool $tmp5256 = ((panda$core$Bit) { $tmp5259.nonnull }).value;
                if (!$tmp5256) goto $l5255;
                {
                    {
                        $tmp5260 = t5246;
                        org$pandalanguage$pandac$ASTNode* $tmp5263 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5262 = $tmp5263;
                        $tmp5261 = $tmp5262;
                        t5246 = $tmp5261;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5261));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5262));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5260));
                    }
                    if (((panda$core$Bit) { t5246 == NULL }).value) {
                    {
                        $tmp5264 = NULL;
                        $returnValue5209 = $tmp5264;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5264));
                        $tmp5245 = 1;
                        goto $l5243;
                        $l5265:;
                        $tmp5203 = 4;
                        goto $l5201;
                        $l5266:;
                        return $returnValue5209;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs5236, ((panda$core$Object*) t5246));
                }
                goto $l5254;
                $l5255:;
            }
            $tmp5245 = -1;
            goto $l5243;
            $l5243:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t5246));
            t5246 = NULL;
            switch ($tmp5245) {
                case 0: goto $l5251;
                case 1: goto $l5265;
                case -1: goto $l5268;
            }
            $l5268:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5270, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5269, $tmp5270);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5272 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5269, &$s5271);
        if (((panda$core$Bit) { !$tmp5272.nonnull }).value) {
        {
            $tmp5273 = NULL;
            $returnValue5209 = $tmp5273;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5273));
            $tmp5203 = 5;
            goto $l5201;
            $l5274:;
            return $returnValue5209;
        }
        }
        panda$collections$Array* $tmp5279 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5279);
        $tmp5278 = $tmp5279;
        $tmp5277 = $tmp5278;
        members5276 = $tmp5277;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5277));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5278));
        $l5280:;
        panda$core$Int64$init$builtin_int64(&$tmp5284, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5283, $tmp5284);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5285 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5283);
        bool $tmp5282 = ((panda$core$Bit) { !$tmp5285.nonnull }).value;
        if (!$tmp5282) goto $l5281;
        {
            int $tmp5288;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5292 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5291 = $tmp5292;
                $tmp5290 = $tmp5291;
                member5289 = $tmp5290;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5290));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5291));
                if (((panda$core$Bit) { member5289 == NULL }).value) {
                {
                    $tmp5293 = NULL;
                    $returnValue5209 = $tmp5293;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5293));
                    $tmp5288 = 0;
                    goto $l5286;
                    $l5294:;
                    $tmp5203 = 6;
                    goto $l5201;
                    $l5295:;
                    return $returnValue5209;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5276, ((panda$core$Object*) member5289));
            }
            $tmp5288 = -1;
            goto $l5286;
            $l5286:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5289));
            member5289 = NULL;
            switch ($tmp5288) {
                case 0: goto $l5294;
                case -1: goto $l5297;
            }
            $l5297:;
        }
        goto $l5280;
        $l5281:;
        org$pandalanguage$pandac$ASTNode* $tmp5300 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5301, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5303, 1);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5302, $tmp5303);
        panda$core$String* $tmp5305 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5213.value));
        $tmp5304 = $tmp5305;
        panda$collections$ImmutableArray* $tmp5307 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs5236);
        $tmp5306 = $tmp5307;
        panda$collections$ImmutableArray* $tmp5309 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5276);
        $tmp5308 = $tmp5309;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5300, $tmp5301, ((org$pandalanguage$pandac$parser$Token) start5204.value).position, p_doccomment, p_annotations, $tmp5302, $tmp5304, generics5221, $tmp5306, $tmp5308);
        $tmp5299 = $tmp5300;
        $tmp5298 = $tmp5299;
        $returnValue5209 = $tmp5298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5299));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5308));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5306));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5304));
        $tmp5203 = 7;
        goto $l5201;
        $l5310:;
        return $returnValue5209;
    }
    $l5201:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5276));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs5236));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5221));
    intfs5236 = NULL;
    members5276 = NULL;
    switch ($tmp5203) {
        case 7: goto $l5310;
        case 4: goto $l5266;
        case 3: goto $l5252;
        case 2: goto $l5230;
        case 1: goto $l5219;
        case 6: goto $l5295;
        case 0: goto $l5211;
        case 5: goto $l5274;
    }
    $l5312:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2431_95313;
    panda$core$Int64 $tmp5315;
    org$pandalanguage$pandac$ASTNode* $returnValue5317;
    org$pandalanguage$pandac$ASTNode* $tmp5318;
    org$pandalanguage$pandac$ASTNode* $tmp5319;
    panda$core$Int64 $tmp5322;
    org$pandalanguage$pandac$ASTNode* $tmp5324;
    org$pandalanguage$pandac$ASTNode* $tmp5325;
    org$pandalanguage$pandac$ASTNode* $tmp5328;
    org$pandalanguage$pandac$ASTNode* $tmp5329;
    {
        org$pandalanguage$pandac$parser$Token $tmp5314 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2431_95313 = $tmp5314.kind;
        panda$core$Int64$init$builtin_int64(&$tmp5315, 15);
        panda$core$Bit $tmp5316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2431_95313.$rawValue, $tmp5315);
        if ($tmp5316.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5320 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5319 = $tmp5320;
            $tmp5318 = $tmp5319;
            $returnValue5317 = $tmp5318;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5318));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5319));
            return $returnValue5317;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp5322, 14);
        panda$core$Bit $tmp5323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2431_95313.$rawValue, $tmp5322);
        if ($tmp5323.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5326 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5325 = $tmp5326;
            $tmp5324 = $tmp5325;
            $returnValue5317 = $tmp5324;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5324));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5325));
            return $returnValue5317;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5330 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5329 = $tmp5330;
            $tmp5328 = $tmp5329;
            $returnValue5317 = $tmp5328;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5329));
            return $returnValue5317;
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries5335 = NULL;
    panda$collections$Array* $tmp5336;
    panda$collections$Array* $tmp5337;
    panda$core$Int64 $tmp5343;
    org$pandalanguage$pandac$ASTNode* entry5348 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5349;
    org$pandalanguage$pandac$ASTNode* $tmp5350;
    org$pandalanguage$pandac$ASTNode* $returnValue5352;
    org$pandalanguage$pandac$ASTNode* $tmp5353;
    org$pandalanguage$pandac$ASTNode* $tmp5362;
    org$pandalanguage$pandac$ASTNode* $tmp5363;
    panda$core$Int64 $tmp5365;
    panda$collections$ImmutableArray* $tmp5366;
    int $tmp5334;
    {
        panda$collections$Array* $tmp5338 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5338);
        $tmp5337 = $tmp5338;
        $tmp5336 = $tmp5337;
        entries5335 = $tmp5336;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5336));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5337));
        $l5339:;
        org$pandalanguage$pandac$parser$Token $tmp5342 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5343, 0);
        panda$core$Bit $tmp5344 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5342.kind.$rawValue, $tmp5343);
        bool $tmp5341 = $tmp5344.value;
        if (!$tmp5341) goto $l5340;
        {
            int $tmp5347;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5351 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5350 = $tmp5351;
                $tmp5349 = $tmp5350;
                entry5348 = $tmp5349;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5349));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5350));
                if (((panda$core$Bit) { entry5348 == NULL }).value) {
                {
                    $tmp5353 = NULL;
                    $returnValue5352 = $tmp5353;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5353));
                    $tmp5347 = 0;
                    goto $l5345;
                    $l5354:;
                    $tmp5334 = 0;
                    goto $l5332;
                    $l5355:;
                    return $returnValue5352;
                }
                }
                panda$core$Bit $tmp5357 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                if ($tmp5357.value) goto $l5358; else goto $l5359;
                $l5359:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5360, (panda$core$Int64) { 2451 });
                abort();
                $l5358:;
                panda$collections$Array$add$panda$collections$Array$T(entries5335, ((panda$core$Object*) entry5348));
            }
            $tmp5347 = -1;
            goto $l5345;
            $l5345:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry5348));
            entry5348 = NULL;
            switch ($tmp5347) {
                case -1: goto $l5361;
                case 0: goto $l5354;
            }
            $l5361:;
        }
        goto $l5339;
        $l5340:;
        org$pandalanguage$pandac$ASTNode* $tmp5364 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5365, 17);
        panda$collections$ImmutableArray* $tmp5367 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries5335);
        $tmp5366 = $tmp5367;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5364, $tmp5365, $tmp5366);
        $tmp5363 = $tmp5364;
        $tmp5362 = $tmp5363;
        $returnValue5352 = $tmp5362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5362));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5363));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5366));
        $tmp5334 = 1;
        goto $l5332;
        $l5368:;
        return $returnValue5352;
    }
    $l5332:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries5335));
    entries5335 = NULL;
    switch ($tmp5334) {
        case 1: goto $l5368;
        case 0: goto $l5355;
    }
    $l5370:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp5373;
    {
    }
    $tmp5373 = -1;
    goto $l5371;
    $l5371:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp5373) {
        case -1: goto $l5374;
    }
    $l5374:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->regexParser));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

