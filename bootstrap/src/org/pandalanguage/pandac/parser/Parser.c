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
#include "panda/io/Console.h"
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

typedef org$pandalanguage$pandac$Position (*$fn154)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn214)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn314)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn374)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn381)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn389)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn396)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn487)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn554)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn561)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn568)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn581)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn606)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn613)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn626)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1864)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3004)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3029)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3076)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn4062)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x72\x69\x6e\x67\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 114, 5686317415756372741, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x61\x76\x65\x20\x74\x75\x70\x6c\x65\x20\x61\x74\x20", 14, -2110090616446303392, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 118, 5129537752972831981, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s2799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s3315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s3509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s3517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s3562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s3607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s3688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s3742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s3800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s4391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s4500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s4508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s4588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

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
    org$pandalanguage$regex$RegexParser* $tmp18;
    org$pandalanguage$regex$RegexParser* $tmp19;
    org$pandalanguage$regex$RegexParser* $tmp20;
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
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp13 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp13);
    $tmp12 = $tmp13;
    $tmp11 = $tmp12;
    self->speculativeBuffer = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    self->allowLambdas = ((panda$core$Bit) { true });
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
    {
        $tmp18 = self->regexParser;
        org$pandalanguage$regex$RegexParser* $tmp21 = (org$pandalanguage$regex$RegexParser*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$regex$RegexParser$class);
        org$pandalanguage$regex$RegexParser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp21, p_errors);
        $tmp20 = $tmp21;
        $tmp19 = $tmp20;
        self->regexParser = $tmp19;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    }
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    panda$io$File* $tmp22;
    panda$io$File* $tmp23;
    panda$core$String* $tmp24;
    panda$core$String* $tmp25;
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    {
        $tmp22 = self->path;
        $tmp23 = p_path;
        self->path = $tmp23;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    }
    {
        $tmp24 = self->source;
        $tmp25 = p_source;
        self->source = $tmp25;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->pushbackBuffer);
    org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String(self->regexParser, p_path, p_source);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 idx28;
    org$pandalanguage$pandac$parser$Token result31;
    org$pandalanguage$pandac$parser$Token $returnValue33;
    org$pandalanguage$pandac$parser$Token result35;
    panda$core$Int64 $tmp26 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp27 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp26, ((panda$core$Int64) { 0 }));
    if ($tmp27.value) {
    {
        panda$core$Int64 $tmp29 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp30 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp29, ((panda$core$Int64) { 1 }));
        idx28 = $tmp30;
        org$pandalanguage$pandac$parser$Token $tmp32 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx28);
        result31 = $tmp32;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(self->pushbackBuffer, idx28);
        $returnValue33 = result31;
        return $returnValue33;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp36 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result35 = $tmp36;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result35);
    }
    }
    $returnValue33 = result35;
    return $returnValue33;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result40;
    org$pandalanguage$pandac$parser$Token$Kind $match$64_1342;
    org$pandalanguage$pandac$parser$Token next47;
    org$pandalanguage$pandac$parser$Token$Kind $match$70_2549;
    panda$core$String* $tmp51;
    panda$core$Char8 $tmp53;
    org$pandalanguage$pandac$parser$Token $returnValue56;
    org$pandalanguage$pandac$parser$Token next61;
    org$pandalanguage$pandac$parser$Token$Kind $match$82_2563;
    $l38:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp41 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result40 = $tmp41;
        {
            $match$64_1342 = result40.kind;
            panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_1342.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp43.value) {
            {
                goto $l38;
            }
            }
            else {
            panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_1342.$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp44.value) {
            {
                $l45:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp48 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next47 = $tmp48;
                    {
                        $match$70_2549 = next47.kind;
                        panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$70_2549.$rawValue, ((panda$core$Int64) { 12 }));
                        if ($tmp50.value) {
                        {
                            panda$core$String* $tmp52 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next47);
                            $tmp51 = $tmp52;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp53, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp54 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp51, $tmp53);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
                            if ($tmp54.value) {
                            {
                                goto $l38;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp55 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$70_2549.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp55.value) {
                        {
                            $returnValue56 = next47;
                            return $returnValue56;
                        }
                        }
                        }
                    }
                }
                }
                $l46:;
            }
            }
            else {
            panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_1342.$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp58.value) {
            {
                $l59:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp62 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next61 = $tmp62;
                    {
                        $match$82_2563 = next61.kind;
                        panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$82_2563.$rawValue, ((panda$core$Int64) { 10 }));
                        if ($tmp64.value) {
                        {
                            goto $l38;
                        }
                        }
                        else {
                        panda$core$Bit $tmp65 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$82_2563.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp65.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result40, &$s66);
                            $returnValue56 = next61;
                            return $returnValue56;
                        }
                        }
                        }
                    }
                }
                }
                $l60:;
            }
            }
            else {
            {
                $returnValue56 = result40;
                return $returnValue56;
            }
            }
            }
            }
        }
    }
    }
    $l39:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $returnValue72;
    panda$core$Int64 $tmp69 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, ((panda$core$Int64) { 0 }));
    if ($tmp70.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp71 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp71);
    }
    }
    panda$core$Int64 $tmp73 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp74 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp73, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp75 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp74);
    $returnValue72 = $tmp75;
    return $returnValue72;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result77;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue80;
    org$pandalanguage$pandac$parser$Token $tmp78 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result77 = $tmp78;
    panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result77.kind.$rawValue, p_kind.$rawValue);
    if ($tmp79.value) {
    {
        $returnValue80 = ((org$pandalanguage$pandac$parser$Token$nullable) { result77, true });
        return $returnValue80;
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result77);
    $returnValue80 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue80;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result83;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue86;
    panda$core$String* $tmp88;
    panda$core$String* $tmp89;
    panda$core$String* $tmp90;
    panda$core$String* $tmp91;
    panda$core$String* $tmp96;
    org$pandalanguage$pandac$parser$Token $tmp84 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result83 = $tmp84;
    panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result83.kind.$rawValue, p_kind.$rawValue);
    if ($tmp85.value) {
    {
        $returnValue86 = ((org$pandalanguage$pandac$parser$Token$nullable) { result83, true });
        return $returnValue86;
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
    $returnValue86 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue86;
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Compiler$Error* $tmp103;
    panda$core$Bit $tmp102 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp102.value) {
    {
        org$pandalanguage$pandac$Compiler$Error* $tmp104 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
        org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp104, self->path, p_token.position, p_msg);
        $tmp103 = $tmp104;
        panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp105 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp105.value) goto $l106; else goto $l107;
    $l107:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s108, (panda$core$Int64) { 132 });
    abort();
    $l106:;
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp109;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp110 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp111 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp110, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp109, $tmp111, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp113 = $tmp109.start.value;
    panda$core$Int64 i112 = { $tmp113 };
    int64_t $tmp115 = $tmp109.end.value;
    int64_t $tmp116 = $tmp109.step.value;
    bool $tmp117 = $tmp109.inclusive.value;
    bool $tmp124 = $tmp116 > 0;
    if ($tmp124) goto $l122; else goto $l123;
    $l122:;
    if ($tmp117) goto $l125; else goto $l126;
    $l125:;
    if ($tmp113 <= $tmp115) goto $l118; else goto $l120;
    $l126:;
    if ($tmp113 < $tmp115) goto $l118; else goto $l120;
    $l123:;
    if ($tmp117) goto $l127; else goto $l128;
    $l127:;
    if ($tmp113 >= $tmp115) goto $l118; else goto $l120;
    $l128:;
    if ($tmp113 > $tmp115) goto $l118; else goto $l120;
    $l118:;
    {
        org$pandalanguage$pandac$parser$Token $tmp130 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i112);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp130);
    }
    $l121:;
    if ($tmp124) goto $l132; else goto $l133;
    $l132:;
    int64_t $tmp134 = $tmp115 - i112.value;
    if ($tmp117) goto $l135; else goto $l136;
    $l135:;
    if ((uint64_t) $tmp134 >= $tmp116) goto $l131; else goto $l120;
    $l136:;
    if ((uint64_t) $tmp134 > $tmp116) goto $l131; else goto $l120;
    $l133:;
    int64_t $tmp138 = i112.value - $tmp115;
    if ($tmp117) goto $l139; else goto $l140;
    $l139:;
    if ((uint64_t) $tmp138 >= -$tmp116) goto $l131; else goto $l120;
    $l140:;
    if ((uint64_t) $tmp138 > -$tmp116) goto $l131; else goto $l120;
    $l131:;
    i112.value += $tmp116;
    goto $l118;
    $l120:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue142;
    panda$core$String* $tmp143;
    panda$core$String* $tmp144;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp145;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp145, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp146 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp145);
    $tmp144 = $tmp146;
    $tmp143 = $tmp144;
    $returnValue142 = $tmp143;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
    return $returnValue142;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue148;
    org$pandalanguage$pandac$ASTNode* $tmp149;
    org$pandalanguage$pandac$ASTNode* $tmp151;
    org$pandalanguage$pandac$ASTNode* $tmp152;
    org$pandalanguage$pandac$parser$Token$Kind $tmp156;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp149 = p_chunk;
        $returnValue148 = $tmp149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
        return $returnValue148;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp153 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp155 = (($fn154) p_string->$class->vtable[2])(p_string);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp156, ((panda$core$Int64) { 51 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp153, ((panda$core$Int64) { 4 }), $tmp155, p_string, $tmp156, p_chunk);
    $tmp152 = $tmp153;
    $tmp151 = $tmp152;
    $returnValue148 = $tmp151;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
    return $returnValue148;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result161 = NULL;
    panda$core$MutableString* $tmp162;
    panda$core$MutableString* $tmp163;
    org$pandalanguage$pandac$parser$Token token167;
    org$pandalanguage$pandac$parser$Token$Kind $match$164_13169;
    panda$core$String* str174 = NULL;
    panda$core$String* $tmp175;
    panda$core$String* $tmp176;
    panda$core$Char8 $tmp178;
    panda$core$String* $returnValue181;
    panda$core$String* $tmp182;
    panda$core$String* $tmp189;
    org$pandalanguage$pandac$parser$Token escape196;
    panda$core$String* $tmp200;
    panda$core$String* escapeText204 = NULL;
    panda$core$String* $tmp205;
    panda$core$String* $tmp206;
    panda$core$Char8 c208;
    panda$core$Object* $tmp209;
    panda$collections$ListView* $tmp210;
    panda$core$Char8 $match$183_21216;
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
    panda$core$Char8 $tmp232;
    panda$core$Char8 $tmp234;
    panda$core$Char8 $tmp235;
    panda$core$Char8 $tmp237;
    panda$core$String* $tmp239;
    panda$core$String* $tmp243;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp244;
    panda$core$String* $tmp250;
    panda$core$String* $tmp251;
    panda$core$String* $tmp255;
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
                $match$164_13169 = token167.kind;
                panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13169.$rawValue, ((panda$core$Int64) { 12 }));
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
                            $returnValue181 = $tmp182;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
                            $tmp173 = 0;
                            goto $l171;
                            $l183:;
                            $tmp160 = 0;
                            goto $l158;
                            $l184:;
                            return $returnValue181;
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
                panda$core$Bit $tmp187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13169.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp187.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token167, &$s188);
                    $tmp189 = NULL;
                    $returnValue181 = $tmp189;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
                    $tmp160 = 1;
                    goto $l158;
                    $l190:;
                    return $returnValue181;
                }
                }
                else {
                panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13169.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp192.value) {
                {
                    int $tmp195;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp197 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape196 = $tmp197;
                        panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape196.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp198.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token167, &$s199);
                            $tmp200 = NULL;
                            $returnValue181 = $tmp200;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
                            $tmp195 = 0;
                            goto $l193;
                            $l201:;
                            $tmp160 = 2;
                            goto $l158;
                            $l202:;
                            return $returnValue181;
                        }
                        }
                        panda$core$String* $tmp207 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape196);
                        $tmp206 = $tmp207;
                        $tmp205 = $tmp206;
                        escapeText204 = $tmp205;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
                        panda$collections$ListView* $tmp211 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText204);
                        $tmp210 = $tmp211;
                        ITable* $tmp212 = $tmp210->$class->itable;
                        while ($tmp212->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp212 = $tmp212->next;
                        }
                        $fn214 $tmp213 = $tmp212->methods[0];
                        panda$core$Object* $tmp215 = $tmp213($tmp210, ((panda$core$Int64) { 0 }));
                        $tmp209 = $tmp215;
                        c208 = ((panda$core$Char8$wrapper*) $tmp209)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp209);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
                        {
                            $match$183_21216 = c208;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp217, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp218 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21216, $tmp217);
                            if ($tmp218.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp219, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp219);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp220, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp221 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21216, $tmp220);
                            if ($tmp221.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp222, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp222);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp223, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp224 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21216, $tmp223);
                            if ($tmp224.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp225, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp225);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp226, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp227 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21216, $tmp226);
                            if ($tmp227.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp228, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp228);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp229, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp230 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21216, $tmp229);
                            if ($tmp230.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp231, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp231);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp232, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp233 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21216, $tmp232);
                            if ($tmp233.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp234, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp234);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp235, ((panda$core$UInt8) { 125 }));
                            panda$core$Bit $tmp236 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21216, $tmp235);
                            if ($tmp236.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp237, ((panda$core$UInt8) { 125 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp237);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token167, &$s238);
                                $tmp239 = NULL;
                                $returnValue181 = $tmp239;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp239));
                                $tmp195 = 1;
                                goto $l193;
                                $l240:;
                                $tmp160 = 3;
                                goto $l158;
                                $l241:;
                                return $returnValue181;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp245 = panda$core$String$start$R$panda$core$String$Index(escapeText204);
                        panda$core$String$Index $tmp246 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText204, $tmp245);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp244, ((panda$core$String$Index$nullable) { $tmp246, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp247 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText204, $tmp244);
                        $tmp243 = $tmp247;
                        panda$core$MutableString$append$panda$core$String(result161, $tmp243);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                    }
                    $tmp195 = -1;
                    goto $l193;
                    $l193:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText204));
                    escapeText204 = NULL;
                    switch ($tmp195) {
                        case 1: goto $l240;
                        case 0: goto $l201;
                        case -1: goto $l248;
                    }
                    $l248:;
                }
                }
                else {
                panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13169.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp249.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token167);
                    panda$core$String* $tmp252 = panda$core$MutableString$finish$R$panda$core$String(result161);
                    $tmp251 = $tmp252;
                    $tmp250 = $tmp251;
                    $returnValue181 = $tmp250;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp250));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
                    $tmp160 = 4;
                    goto $l158;
                    $l253:;
                    return $returnValue181;
                }
                }
                else {
                {
                    panda$core$String* $tmp256 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token167);
                    $tmp255 = $tmp256;
                    panda$core$MutableString$append$panda$core$String(result161, $tmp255);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
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
        case 3: goto $l241;
        case 0: goto $l184;
        case 2: goto $l202;
        case 1: goto $l190;
        case 4: goto $l253;
        case -1: goto $l257;
    }
    $l257:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result261 = NULL;
    panda$core$MutableString* $tmp262;
    panda$core$MutableString* $tmp263;
    org$pandalanguage$pandac$parser$Token token267;
    org$pandalanguage$pandac$parser$Token$Kind $match$209_13269;
    panda$core$String* str274 = NULL;
    panda$core$String* $tmp275;
    panda$core$String* $tmp276;
    panda$core$Char8 $tmp278;
    panda$core$String* $returnValue281;
    panda$core$String* $tmp282;
    panda$core$String* $tmp289;
    org$pandalanguage$pandac$parser$Token escape296;
    panda$core$String* $tmp300;
    panda$core$String* escapeText304 = NULL;
    panda$core$String* $tmp305;
    panda$core$String* $tmp306;
    panda$core$Char8 c308;
    panda$core$Object* $tmp309;
    panda$collections$ListView* $tmp310;
    panda$core$Char8 $match$228_21316;
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
    panda$core$Char8 $tmp335;
    panda$core$Char8 $tmp337;
    panda$core$Char8 $tmp338;
    panda$core$Char8 $tmp340;
    panda$core$String* $tmp342;
    panda$core$String* $tmp346;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp347;
    panda$core$String* $tmp353;
    panda$core$String* $tmp354;
    panda$core$String* $tmp359;
    panda$core$String* $tmp360;
    panda$core$String* $tmp364;
    int $tmp260;
    {
        panda$core$MutableString* $tmp264 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp264);
        $tmp263 = $tmp264;
        $tmp262 = $tmp263;
        result261 = $tmp262;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
        $l265:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp268 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token267 = $tmp268;
            {
                $match$209_13269 = token267.kind;
                panda$core$Bit $tmp270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13269.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp270.value) {
                {
                    int $tmp273;
                    {
                        panda$core$String* $tmp277 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token267);
                        $tmp276 = $tmp277;
                        $tmp275 = $tmp276;
                        str274 = $tmp275;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp278, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp279 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str274, $tmp278);
                        if ($tmp279.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token267, &$s280);
                            $tmp282 = NULL;
                            $returnValue281 = $tmp282;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp282));
                            $tmp273 = 0;
                            goto $l271;
                            $l283:;
                            $tmp260 = 0;
                            goto $l258;
                            $l284:;
                            return $returnValue281;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result261, str274);
                    }
                    $tmp273 = -1;
                    goto $l271;
                    $l271:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str274));
                    str274 = NULL;
                    switch ($tmp273) {
                        case 0: goto $l283;
                        case -1: goto $l286;
                    }
                    $l286:;
                }
                }
                else {
                panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13269.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp287.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token267, &$s288);
                    $tmp289 = NULL;
                    $returnValue281 = $tmp289;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp289));
                    $tmp260 = 1;
                    goto $l258;
                    $l290:;
                    return $returnValue281;
                }
                }
                else {
                panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13269.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp292.value) {
                {
                    int $tmp295;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp297 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape296 = $tmp297;
                        panda$core$Bit $tmp298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape296.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp298.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token267, &$s299);
                            $tmp300 = NULL;
                            $returnValue281 = $tmp300;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
                            $tmp295 = 0;
                            goto $l293;
                            $l301:;
                            $tmp260 = 2;
                            goto $l258;
                            $l302:;
                            return $returnValue281;
                        }
                        }
                        panda$core$String* $tmp307 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape296);
                        $tmp306 = $tmp307;
                        $tmp305 = $tmp306;
                        escapeText304 = $tmp305;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp305));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
                        panda$collections$ListView* $tmp311 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText304);
                        $tmp310 = $tmp311;
                        ITable* $tmp312 = $tmp310->$class->itable;
                        while ($tmp312->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp312 = $tmp312->next;
                        }
                        $fn314 $tmp313 = $tmp312->methods[0];
                        panda$core$Object* $tmp315 = $tmp313($tmp310, ((panda$core$Int64) { 0 }));
                        $tmp309 = $tmp315;
                        c308 = ((panda$core$Char8$wrapper*) $tmp309)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp309);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
                        {
                            $match$228_21316 = c308;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp317, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp318 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21316, $tmp317);
                            if ($tmp318.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp319, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(result261, $tmp319);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp320, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp321 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21316, $tmp320);
                            if ($tmp321.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp322, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(result261, $tmp322);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp323, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp324 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21316, $tmp323);
                            if ($tmp324.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp325, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(result261, $tmp325);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp326, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp327 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21316, $tmp326);
                            if ($tmp327.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp328, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(result261, $tmp328);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp329, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp330 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21316, $tmp329);
                            if ($tmp330.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp331, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(result261, $tmp331);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp332, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp333 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21316, $tmp332);
                            if ($tmp333.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp334, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(result261, $tmp334);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp335, ((panda$core$UInt8) { 58 }));
                            panda$core$Bit $tmp336 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21316, $tmp335);
                            if ($tmp336.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp337, ((panda$core$UInt8) { 58 }));
                                panda$core$MutableString$append$panda$core$Char8(result261, $tmp337);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp338, ((panda$core$UInt8) { 125 }));
                            panda$core$Bit $tmp339 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21316, $tmp338);
                            if ($tmp339.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp340, ((panda$core$UInt8) { 125 }));
                                panda$core$MutableString$append$panda$core$Char8(result261, $tmp340);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token267, &$s341);
                                $tmp342 = NULL;
                                $returnValue281 = $tmp342;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
                                $tmp295 = 1;
                                goto $l293;
                                $l343:;
                                $tmp260 = 3;
                                goto $l258;
                                $l344:;
                                return $returnValue281;
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
                        panda$core$String$Index $tmp348 = panda$core$String$start$R$panda$core$String$Index(escapeText304);
                        panda$core$String$Index $tmp349 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText304, $tmp348);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp347, ((panda$core$String$Index$nullable) { $tmp349, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp350 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText304, $tmp347);
                        $tmp346 = $tmp350;
                        panda$core$MutableString$append$panda$core$String(result261, $tmp346);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
                    }
                    $tmp295 = -1;
                    goto $l293;
                    $l293:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText304));
                    escapeText304 = NULL;
                    switch ($tmp295) {
                        case -1: goto $l351;
                        case 0: goto $l301;
                        case 1: goto $l343;
                    }
                    $l351:;
                }
                }
                else {
                panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13269.$rawValue, ((panda$core$Int64) { 95 }));
                if ($tmp352.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token267);
                    panda$core$String* $tmp355 = panda$core$MutableString$finish$R$panda$core$String(result261);
                    $tmp354 = $tmp355;
                    $tmp353 = $tmp354;
                    $returnValue281 = $tmp353;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp353));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
                    $tmp260 = 4;
                    goto $l258;
                    $l356:;
                    return $returnValue281;
                }
                }
                else {
                panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13269.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp358.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token267);
                    panda$core$String* $tmp361 = panda$core$MutableString$finish$R$panda$core$String(result261);
                    $tmp360 = $tmp361;
                    $tmp359 = $tmp360;
                    $returnValue281 = $tmp359;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp359));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp360));
                    $tmp260 = 5;
                    goto $l258;
                    $l362:;
                    return $returnValue281;
                }
                }
                else {
                {
                    panda$core$String* $tmp365 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token267);
                    $tmp364 = $tmp365;
                    panda$core$MutableString$append$panda$core$String(result261, $tmp364);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l266:;
    }
    $tmp260 = -1;
    goto $l258;
    $l258:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result261));
    result261 = NULL;
    switch ($tmp260) {
        case -1: goto $l366;
        case 1: goto $l290;
        case 0: goto $l284;
        case 4: goto $l356;
        case 5: goto $l362;
        case 3: goto $l344;
        case 2: goto $l302;
    }
    $l366:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot370 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp371;
    org$pandalanguage$pandac$ASTNode* $tmp372;
    org$pandalanguage$pandac$ASTNode* call377 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp378;
    org$pandalanguage$pandac$ASTNode* $tmp379;
    panda$collections$ImmutableArray* $tmp383;
    org$pandalanguage$pandac$ASTNode* stringType385 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp386;
    org$pandalanguage$pandac$ASTNode* $tmp387;
    org$pandalanguage$pandac$ASTNode* $returnValue392;
    org$pandalanguage$pandac$ASTNode* $tmp393;
    org$pandalanguage$pandac$ASTNode* $tmp394;
    org$pandalanguage$pandac$parser$Token$Kind $tmp398;
    int $tmp369;
    {
        org$pandalanguage$pandac$ASTNode* $tmp373 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp375 = (($fn374) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp373, ((panda$core$Int64) { 15 }), $tmp375, p_expr, &$s376);
        $tmp372 = $tmp373;
        $tmp371 = $tmp372;
        dot370 = $tmp371;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
        org$pandalanguage$pandac$ASTNode* $tmp380 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp382 = (($fn381) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp384 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp384);
        $tmp383 = $tmp384;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp380, ((panda$core$Int64) { 8 }), $tmp382, dot370, $tmp383);
        $tmp379 = $tmp380;
        $tmp378 = $tmp379;
        call377 = $tmp378;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
        org$pandalanguage$pandac$ASTNode* $tmp388 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp390 = (($fn389) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp388, ((panda$core$Int64) { 42 }), $tmp390, &$s391);
        $tmp387 = $tmp388;
        $tmp386 = $tmp387;
        stringType385 = $tmp386;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
        org$pandalanguage$pandac$ASTNode* $tmp395 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp397 = (($fn396) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp398, ((panda$core$Int64) { 89 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp395, ((panda$core$Int64) { 4 }), $tmp397, call377, $tmp398, stringType385);
        $tmp394 = $tmp395;
        $tmp393 = $tmp394;
        $returnValue392 = $tmp393;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp393));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
        $tmp369 = 0;
        goto $l367;
        $l399:;
        return $returnValue392;
    }
    $l367:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType385));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call377));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot370));
    dot370 = NULL;
    call377 = NULL;
    stringType385 = NULL;
    switch ($tmp369) {
        case 0: goto $l399;
    }
    $l401:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $atPre1405;
    org$pandalanguage$pandac$parser$Token start409;
    panda$core$String* $tmp416;
    panda$core$String* $tmp417;
    panda$core$String* $tmp419;
    org$pandalanguage$pandac$ASTNode* $returnValue424;
    org$pandalanguage$pandac$ASTNode* $tmp425;
    org$pandalanguage$pandac$ASTNode* result429 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp430;
    panda$core$MutableString* chunk431 = NULL;
    panda$core$MutableString* $tmp432;
    panda$core$MutableString* $tmp433;
    org$pandalanguage$pandac$parser$Token token437;
    org$pandalanguage$pandac$parser$Token$Kind $match$276_13440;
    panda$core$String* str445 = NULL;
    panda$core$String* $tmp446;
    panda$core$String* $tmp447;
    panda$core$Char8 $tmp449;
    org$pandalanguage$pandac$ASTNode* $tmp452;
    org$pandalanguage$pandac$ASTNode* $tmp460;
    org$pandalanguage$pandac$parser$Token escape468;
    org$pandalanguage$pandac$ASTNode* $tmp472;
    panda$core$String* escapeText477 = NULL;
    panda$core$String* $tmp478;
    panda$core$String* $tmp479;
    panda$core$Char8 c481;
    panda$core$Object* $tmp482;
    panda$collections$ListView* $tmp483;
    panda$core$Char8 $match$295_21489;
    panda$core$Char8 $tmp490;
    panda$core$Char8 $tmp492;
    panda$core$Char8 $tmp493;
    panda$core$Char8 $tmp495;
    panda$core$Char8 $tmp496;
    panda$core$Char8 $tmp498;
    panda$core$Char8 $tmp499;
    panda$core$Char8 $tmp501;
    panda$core$Char8 $tmp502;
    panda$core$Char8 $tmp504;
    panda$core$Char8 $tmp505;
    panda$core$Char8 $tmp507;
    panda$core$Char8 $tmp508;
    panda$core$Bit oldAllow513;
    org$pandalanguage$pandac$ASTNode* expr514 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp515;
    org$pandalanguage$pandac$ASTNode* $tmp516;
    org$pandalanguage$pandac$ASTNode* $tmp518;
    panda$core$String* align524 = NULL;
    panda$core$String* $tmp525;
    panda$core$String* format526 = NULL;
    panda$core$String* $tmp527;
    org$pandalanguage$pandac$parser$Token$Kind $tmp528;
    panda$core$String* $tmp530;
    panda$core$String* $tmp531;
    panda$core$String* $tmp532;
    org$pandalanguage$pandac$parser$Token$Kind $tmp534;
    panda$core$String* $tmp539;
    panda$core$String* $tmp540;
    panda$core$String* $tmp541;
    org$pandalanguage$pandac$ASTNode* $tmp543;
    org$pandalanguage$pandac$ASTNode* formattable550 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp551;
    org$pandalanguage$pandac$ASTNode* $tmp552;
    org$pandalanguage$pandac$ASTNode* cast557 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp558;
    org$pandalanguage$pandac$ASTNode* $tmp559;
    org$pandalanguage$pandac$parser$Token$Kind $tmp563;
    org$pandalanguage$pandac$ASTNode* dot564 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp565;
    org$pandalanguage$pandac$ASTNode* $tmp566;
    panda$collections$Array* callArgs571 = NULL;
    panda$collections$Array* $tmp572;
    panda$collections$Array* $tmp573;
    org$pandalanguage$pandac$ASTNode* $tmp575;
    org$pandalanguage$pandac$ASTNode* $tmp577;
    org$pandalanguage$pandac$ASTNode* $tmp578;
    org$pandalanguage$pandac$ASTNode* $tmp579;
    panda$collections$ImmutableArray* $tmp583;
    org$pandalanguage$pandac$parser$Token$Kind $tmp586;
    org$pandalanguage$pandac$ASTNode* $tmp589;
    org$pandalanguage$pandac$ASTNode* $tmp598;
    org$pandalanguage$pandac$ASTNode* $tmp599;
    org$pandalanguage$pandac$ASTNode* $tmp600;
    org$pandalanguage$pandac$ASTNode* pandaType602 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp603;
    org$pandalanguage$pandac$ASTNode* $tmp604;
    org$pandalanguage$pandac$ASTNode* callTarget609 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp610;
    org$pandalanguage$pandac$ASTNode* $tmp611;
    panda$collections$Array* callArgs616 = NULL;
    panda$collections$Array* $tmp617;
    panda$collections$Array* $tmp618;
    org$pandalanguage$pandac$ASTNode* $tmp620;
    org$pandalanguage$pandac$ASTNode* $tmp622;
    org$pandalanguage$pandac$ASTNode* $tmp623;
    org$pandalanguage$pandac$ASTNode* $tmp624;
    panda$collections$ImmutableArray* $tmp628;
    panda$core$String* text631 = NULL;
    panda$core$String* $tmp632;
    panda$core$String* $tmp633;
    panda$core$MutableString* $tmp635;
    panda$core$MutableString* $tmp636;
    panda$core$MutableString* $tmp637;
    org$pandalanguage$pandac$ASTNode* $tmp644;
    org$pandalanguage$pandac$ASTNode* $tmp645;
    org$pandalanguage$pandac$ASTNode* $tmp646;
    org$pandalanguage$pandac$ASTNode* $tmp647;
    org$pandalanguage$pandac$ASTNode* $tmp650;
    org$pandalanguage$pandac$ASTNode* $tmp651;
    org$pandalanguage$pandac$ASTNode* $tmp652;
    org$pandalanguage$pandac$ASTNode* $tmp654;
    org$pandalanguage$pandac$ASTNode* $tmp655;
    org$pandalanguage$pandac$ASTNode* $tmp656;
    org$pandalanguage$pandac$ASTNode* $tmp660;
    panda$core$String* $tmp665;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp666;
    panda$core$String* $tmp671;
    org$pandalanguage$pandac$ASTNode* $tmp673;
    org$pandalanguage$pandac$ASTNode* $tmp674;
    org$pandalanguage$pandac$ASTNode* $tmp675;
    panda$core$String* $tmp677;
    int $tmp404;
    {
        $atPre1405 = self->allowLambdas;
        int $tmp408;
        {
            org$pandalanguage$pandac$parser$Token $tmp410 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            start409 = $tmp410;
            panda$core$Bit $tmp412 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start409.kind.$rawValue, ((panda$core$Int64) { 7 }));
            bool $tmp411 = $tmp412.value;
            if (!$tmp411) goto $l413;
            panda$core$Bit $tmp414 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start409.kind.$rawValue, ((panda$core$Int64) { 6 }));
            $tmp411 = $tmp414.value;
            $l413:;
            panda$core$Bit $tmp415 = { $tmp411 };
            if ($tmp415.value) {
            {
                panda$core$String* $tmp420 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start409);
                $tmp419 = $tmp420;
                panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s418, $tmp419);
                $tmp417 = $tmp421;
                panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s422);
                $tmp416 = $tmp423;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start409, $tmp416);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
                $tmp425 = NULL;
                $returnValue424 = $tmp425;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp425));
                $tmp408 = 0;
                goto $l406;
                $l426:;
                $tmp404 = 0;
                goto $l402;
                $l427:;
                return $returnValue424;
            }
            }
            $tmp430 = NULL;
            result429 = $tmp430;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
            panda$core$MutableString* $tmp434 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp434);
            $tmp433 = $tmp434;
            $tmp432 = $tmp433;
            chunk431 = $tmp432;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
            $l435:;
            while (true) {
            {
                org$pandalanguage$pandac$parser$Token $tmp438 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                token437 = $tmp438;
                panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token437.kind.$rawValue, start409.kind.$rawValue);
                if ($tmp439.value) {
                {
                    goto $l436;
                }
                }
                {
                    $match$276_13440 = token437.kind;
                    panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$276_13440.$rawValue, ((panda$core$Int64) { 12 }));
                    if ($tmp441.value) {
                    {
                        int $tmp444;
                        {
                            panda$core$String* $tmp448 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token437);
                            $tmp447 = $tmp448;
                            $tmp446 = $tmp447;
                            str445 = $tmp446;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp446));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
                            panda$core$Char8$init$panda$core$UInt8(&$tmp449, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp450 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str445, $tmp449);
                            if ($tmp450.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start409, &$s451);
                                $tmp452 = NULL;
                                $returnValue424 = $tmp452;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp452));
                                $tmp444 = 0;
                                goto $l442;
                                $l453:;
                                $tmp408 = 1;
                                goto $l406;
                                $l454:;
                                $tmp404 = 1;
                                goto $l402;
                                $l455:;
                                return $returnValue424;
                            }
                            }
                            panda$core$MutableString$append$panda$core$String(chunk431, str445);
                        }
                        $tmp444 = -1;
                        goto $l442;
                        $l442:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str445));
                        str445 = NULL;
                        switch ($tmp444) {
                            case 0: goto $l453;
                            case -1: goto $l457;
                        }
                        $l457:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$276_13440.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp458.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start409, &$s459);
                        $tmp460 = NULL;
                        $returnValue424 = $tmp460;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp460));
                        $tmp408 = 2;
                        goto $l406;
                        $l461:;
                        $tmp404 = 2;
                        goto $l402;
                        $l462:;
                        return $returnValue424;
                    }
                    }
                    else {
                    panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$276_13440.$rawValue, ((panda$core$Int64) { 106 }));
                    if ($tmp464.value) {
                    {
                        int $tmp467;
                        {
                            org$pandalanguage$pandac$parser$Token $tmp469 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                            escape468 = $tmp469;
                            panda$core$Bit $tmp470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape468.kind.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp470.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start409, &$s471);
                                $tmp472 = NULL;
                                $returnValue424 = $tmp472;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp472));
                                $tmp467 = 0;
                                goto $l465;
                                $l473:;
                                $tmp408 = 3;
                                goto $l406;
                                $l474:;
                                $tmp404 = 3;
                                goto $l402;
                                $l475:;
                                return $returnValue424;
                            }
                            }
                            panda$core$String* $tmp480 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape468);
                            $tmp479 = $tmp480;
                            $tmp478 = $tmp479;
                            escapeText477 = $tmp478;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp478));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
                            panda$collections$ListView* $tmp484 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText477);
                            $tmp483 = $tmp484;
                            ITable* $tmp485 = $tmp483->$class->itable;
                            while ($tmp485->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp485 = $tmp485->next;
                            }
                            $fn487 $tmp486 = $tmp485->methods[0];
                            panda$core$Object* $tmp488 = $tmp486($tmp483, ((panda$core$Int64) { 0 }));
                            $tmp482 = $tmp488;
                            c481 = ((panda$core$Char8$wrapper*) $tmp482)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp482);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
                            {
                                $match$295_21489 = c481;
                                panda$core$Char8$init$panda$core$UInt8(&$tmp490, ((panda$core$UInt8) { 110 }));
                                panda$core$Bit $tmp491 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21489, $tmp490);
                                if ($tmp491.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp492, ((panda$core$UInt8) { 10 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk431, $tmp492);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp493, ((panda$core$UInt8) { 114 }));
                                panda$core$Bit $tmp494 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21489, $tmp493);
                                if ($tmp494.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp495, ((panda$core$UInt8) { 13 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk431, $tmp495);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp496, ((panda$core$UInt8) { 116 }));
                                panda$core$Bit $tmp497 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21489, $tmp496);
                                if ($tmp497.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp498, ((panda$core$UInt8) { 9 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk431, $tmp498);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp499, ((panda$core$UInt8) { 39 }));
                                panda$core$Bit $tmp500 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21489, $tmp499);
                                if ($tmp500.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp501, ((panda$core$UInt8) { 39 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk431, $tmp501);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp502, ((panda$core$UInt8) { 34 }));
                                panda$core$Bit $tmp503 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21489, $tmp502);
                                if ($tmp503.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp504, ((panda$core$UInt8) { 34 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk431, $tmp504);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp505, ((panda$core$UInt8) { 92 }));
                                panda$core$Bit $tmp506 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21489, $tmp505);
                                if ($tmp506.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp507, ((panda$core$UInt8) { 92 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk431, $tmp507);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp508, ((panda$core$UInt8) { 123 }));
                                panda$core$Bit $tmp509 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21489, $tmp508);
                                if ($tmp509.value) {
                                {
                                    {
                                        int $tmp512;
                                        {
                                            oldAllow513 = self->allowLambdas;
                                            self->allowLambdas = ((panda$core$Bit) { false });
                                            org$pandalanguage$pandac$ASTNode* $tmp517 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                            $tmp516 = $tmp517;
                                            $tmp515 = $tmp516;
                                            expr514 = $tmp515;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
                                            self->allowLambdas = oldAllow513;
                                            if (((panda$core$Bit) { expr514 == NULL }).value) {
                                            {
                                                $tmp518 = NULL;
                                                $returnValue424 = $tmp518;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp518));
                                                $tmp512 = 0;
                                                goto $l510;
                                                $l519:;
                                                $tmp467 = 1;
                                                goto $l465;
                                                $l520:;
                                                $tmp408 = 4;
                                                goto $l406;
                                                $l521:;
                                                $tmp404 = 4;
                                                goto $l402;
                                                $l522:;
                                                return $returnValue424;
                                            }
                                            }
                                            $tmp525 = NULL;
                                            align524 = $tmp525;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp525));
                                            $tmp527 = NULL;
                                            format526 = $tmp527;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp528, ((panda$core$Int64) { 105 }));
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp529 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp528);
                                            if (((panda$core$Bit) { $tmp529.nonnull }).value) {
                                            {
                                                {
                                                    $tmp530 = align524;
                                                    panda$core$String* $tmp533 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start409);
                                                    $tmp532 = $tmp533;
                                                    $tmp531 = $tmp532;
                                                    align524 = $tmp531;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp531));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp532));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp530));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp534, ((panda$core$Int64) { 95 }));
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp535 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp534);
                                            if (((panda$core$Bit) { $tmp535.nonnull }).value) {
                                            {
                                                int $tmp538;
                                                {
                                                    {
                                                        $tmp539 = format526;
                                                        panda$core$String* $tmp542 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start409);
                                                        $tmp541 = $tmp542;
                                                        $tmp540 = $tmp541;
                                                        format526 = $tmp540;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp540));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp539));
                                                    }
                                                    if (((panda$core$Bit) { format526 == NULL }).value) {
                                                    {
                                                        $tmp543 = NULL;
                                                        $returnValue424 = $tmp543;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp543));
                                                        $tmp538 = 0;
                                                        goto $l536;
                                                        $l544:;
                                                        $tmp512 = 1;
                                                        goto $l510;
                                                        $l545:;
                                                        $tmp467 = 2;
                                                        goto $l465;
                                                        $l546:;
                                                        $tmp408 = 5;
                                                        goto $l406;
                                                        $l547:;
                                                        $tmp404 = 5;
                                                        goto $l402;
                                                        $l548:;
                                                        return $returnValue424;
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp553 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp555 = (($fn554) expr514->$class->vtable[2])(expr514);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp553, ((panda$core$Int64) { 42 }), $tmp555, &$s556);
                                                    $tmp552 = $tmp553;
                                                    $tmp551 = $tmp552;
                                                    formattable550 = $tmp551;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp551));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
                                                    org$pandalanguage$pandac$ASTNode* $tmp560 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp562 = (($fn561) expr514->$class->vtable[2])(expr514);
                                                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp563, ((panda$core$Int64) { 89 }));
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp560, ((panda$core$Int64) { 4 }), $tmp562, expr514, $tmp563, formattable550);
                                                    $tmp559 = $tmp560;
                                                    $tmp558 = $tmp559;
                                                    cast557 = $tmp558;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp558));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
                                                    org$pandalanguage$pandac$ASTNode* $tmp567 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp569 = (($fn568) expr514->$class->vtable[2])(expr514);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp567, ((panda$core$Int64) { 15 }), $tmp569, cast557, &$s570);
                                                    $tmp566 = $tmp567;
                                                    $tmp565 = $tmp566;
                                                    dot564 = $tmp565;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp565));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
                                                    panda$collections$Array* $tmp574 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp574);
                                                    $tmp573 = $tmp574;
                                                    $tmp572 = $tmp573;
                                                    callArgs571 = $tmp572;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp572));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
                                                    org$pandalanguage$pandac$ASTNode* $tmp576 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp576, ((panda$core$Int64) { 38 }), start409.position, format526);
                                                    $tmp575 = $tmp576;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs571, ((panda$core$Object*) $tmp575));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp575));
                                                    {
                                                        $tmp577 = expr514;
                                                        org$pandalanguage$pandac$ASTNode* $tmp580 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        org$pandalanguage$pandac$Position $tmp582 = (($fn581) expr514->$class->vtable[2])(expr514);
                                                        panda$collections$ImmutableArray* $tmp584 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs571);
                                                        $tmp583 = $tmp584;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp580, ((panda$core$Int64) { 8 }), $tmp582, dot564, $tmp583);
                                                        $tmp579 = $tmp580;
                                                        $tmp578 = $tmp579;
                                                        expr514 = $tmp578;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp578));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp577));
                                                    }
                                                }
                                                $tmp538 = -1;
                                                goto $l536;
                                                $l536:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs571));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot564));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast557));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable550));
                                                formattable550 = NULL;
                                                cast557 = NULL;
                                                dot564 = NULL;
                                                callArgs571 = NULL;
                                                switch ($tmp538) {
                                                    case -1: goto $l585;
                                                    case 0: goto $l544;
                                                }
                                                $l585:;
                                            }
                                            }
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp586, ((panda$core$Int64) { 100 }));
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp588 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp586, &$s587);
                                            if (((panda$core$Bit) { !$tmp588.nonnull }).value) {
                                            {
                                                $tmp589 = NULL;
                                                $returnValue424 = $tmp589;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp589));
                                                $tmp512 = 2;
                                                goto $l510;
                                                $l590:;
                                                $tmp467 = 3;
                                                goto $l465;
                                                $l591:;
                                                $tmp408 = 6;
                                                goto $l406;
                                                $l592:;
                                                $tmp404 = 6;
                                                goto $l402;
                                                $l593:;
                                                return $returnValue424;
                                            }
                                            }
                                            if (((panda$core$Bit) { align524 != NULL }).value) {
                                            {
                                                int $tmp597;
                                                {
                                                    if (((panda$core$Bit) { format526 == NULL }).value) {
                                                    {
                                                        {
                                                            $tmp598 = expr514;
                                                            org$pandalanguage$pandac$ASTNode* $tmp601 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr514);
                                                            $tmp600 = $tmp601;
                                                            $tmp599 = $tmp600;
                                                            expr514 = $tmp599;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp599));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp605 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp607 = (($fn606) expr514->$class->vtable[2])(expr514);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp605, ((panda$core$Int64) { 42 }), $tmp607, &$s608);
                                                    $tmp604 = $tmp605;
                                                    $tmp603 = $tmp604;
                                                    pandaType602 = $tmp603;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp603));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
                                                    org$pandalanguage$pandac$ASTNode* $tmp612 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp614 = (($fn613) expr514->$class->vtable[2])(expr514);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp612, ((panda$core$Int64) { 15 }), $tmp614, pandaType602, &$s615);
                                                    $tmp611 = $tmp612;
                                                    $tmp610 = $tmp611;
                                                    callTarget609 = $tmp610;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp610));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
                                                    panda$collections$Array* $tmp619 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp619);
                                                    $tmp618 = $tmp619;
                                                    $tmp617 = $tmp618;
                                                    callArgs616 = $tmp617;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs616, ((panda$core$Object*) expr514));
                                                    org$pandalanguage$pandac$ASTNode* $tmp621 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp621, ((panda$core$Int64) { 38 }), start409.position, align524);
                                                    $tmp620 = $tmp621;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs616, ((panda$core$Object*) $tmp620));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
                                                    {
                                                        $tmp622 = expr514;
                                                        org$pandalanguage$pandac$ASTNode* $tmp625 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        org$pandalanguage$pandac$Position $tmp627 = (($fn626) expr514->$class->vtable[2])(expr514);
                                                        panda$collections$ImmutableArray* $tmp629 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs616);
                                                        $tmp628 = $tmp629;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp625, ((panda$core$Int64) { 8 }), $tmp627, callTarget609, $tmp628);
                                                        $tmp624 = $tmp625;
                                                        $tmp623 = $tmp624;
                                                        expr514 = $tmp623;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp623));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
                                                    }
                                                }
                                                $tmp597 = -1;
                                                goto $l595;
                                                $l595:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs616));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget609));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType602));
                                                pandaType602 = NULL;
                                                callTarget609 = NULL;
                                                callArgs616 = NULL;
                                                switch ($tmp597) {
                                                    case -1: goto $l630;
                                                }
                                                $l630:;
                                            }
                                            }
                                            panda$core$String* $tmp634 = panda$core$MutableString$finish$R$panda$core$String(chunk431);
                                            $tmp633 = $tmp634;
                                            $tmp632 = $tmp633;
                                            text631 = $tmp632;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp632));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp633));
                                            {
                                                $tmp635 = chunk431;
                                                panda$core$MutableString* $tmp638 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                                panda$core$MutableString$init($tmp638);
                                                $tmp637 = $tmp638;
                                                $tmp636 = $tmp637;
                                                chunk431 = $tmp636;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp636));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
                                            }
                                            panda$core$Bit $tmp641 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text631, &$s640);
                                            bool $tmp639 = $tmp641.value;
                                            if ($tmp639) goto $l642;
                                            $tmp639 = ((panda$core$Bit) { result429 != NULL }).value;
                                            $l642:;
                                            panda$core$Bit $tmp643 = { $tmp639 };
                                            if ($tmp643.value) {
                                            {
                                                {
                                                    $tmp644 = result429;
                                                    org$pandalanguage$pandac$ASTNode* $tmp648 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp648, ((panda$core$Int64) { 38 }), start409.position, text631);
                                                    $tmp647 = $tmp648;
                                                    org$pandalanguage$pandac$ASTNode* $tmp649 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result429, $tmp647);
                                                    $tmp646 = $tmp649;
                                                    $tmp645 = $tmp646;
                                                    result429 = $tmp645;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp645));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp647));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
                                                }
                                                {
                                                    $tmp650 = result429;
                                                    org$pandalanguage$pandac$ASTNode* $tmp653 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result429, expr514);
                                                    $tmp652 = $tmp653;
                                                    $tmp651 = $tmp652;
                                                    result429 = $tmp651;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp651));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp652));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp650));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp654 = result429;
                                                    org$pandalanguage$pandac$ASTNode* $tmp657 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr514);
                                                    $tmp656 = $tmp657;
                                                    $tmp655 = $tmp656;
                                                    result429 = $tmp655;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp655));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp656));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
                                                }
                                            }
                                            }
                                        }
                                        $tmp512 = -1;
                                        goto $l510;
                                        $l510:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text631));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format526));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align524));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr514));
                                        expr514 = NULL;
                                        text631 = NULL;
                                        switch ($tmp512) {
                                            case 0: goto $l519;
                                            case 1: goto $l545;
                                            case -1: goto $l658;
                                            case 2: goto $l590;
                                        }
                                        $l658:;
                                    }
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token437, &$s659);
                                    $tmp660 = NULL;
                                    $returnValue424 = $tmp660;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp660));
                                    $tmp467 = 4;
                                    goto $l465;
                                    $l661:;
                                    $tmp408 = 7;
                                    goto $l406;
                                    $l662:;
                                    $tmp404 = 7;
                                    goto $l402;
                                    $l663:;
                                    return $returnValue424;
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            panda$core$String$Index $tmp667 = panda$core$String$start$R$panda$core$String$Index(escapeText477);
                            panda$core$String$Index $tmp668 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText477, $tmp667);
                            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp666, ((panda$core$String$Index$nullable) { $tmp668, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                            panda$core$String* $tmp669 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText477, $tmp666);
                            $tmp665 = $tmp669;
                            panda$core$MutableString$append$panda$core$String(chunk431, $tmp665);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp665));
                        }
                        $tmp467 = -1;
                        goto $l465;
                        $l465:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText477));
                        escapeText477 = NULL;
                        switch ($tmp467) {
                            case 0: goto $l473;
                            case 1: goto $l520;
                            case 2: goto $l546;
                            case 3: goto $l591;
                            case -1: goto $l670;
                            case 4: goto $l661;
                        }
                        $l670:;
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp672 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token437);
                        $tmp671 = $tmp672;
                        panda$core$MutableString$append$panda$core$String(chunk431, $tmp671);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
                    }
                    }
                    }
                    }
                }
            }
            }
            $l436:;
            org$pandalanguage$pandac$ASTNode* $tmp676 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp678 = panda$core$MutableString$finish$R$panda$core$String(chunk431);
            $tmp677 = $tmp678;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp676, ((panda$core$Int64) { 38 }), start409.position, $tmp677);
            $tmp675 = $tmp676;
            org$pandalanguage$pandac$ASTNode* $tmp679 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result429, $tmp675);
            $tmp674 = $tmp679;
            $tmp673 = $tmp674;
            $returnValue424 = $tmp673;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp673));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp674));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp675));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
            $tmp408 = 8;
            goto $l406;
            $l680:;
            $tmp404 = 8;
            goto $l402;
            $l681:;
            return $returnValue424;
        }
        $l406:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk431));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result429));
        chunk431 = NULL;
        switch ($tmp408) {
            case 8: goto $l680;
            case 5: goto $l547;
            case 0: goto $l426;
            case 1: goto $l454;
            case 4: goto $l521;
            case 2: goto $l461;
            case 7: goto $l662;
            case 6: goto $l592;
            case 3: goto $l474;
        }
        $l683:;
    }
    $tmp404 = -1;
    goto $l402;
    $l402:;
    panda$core$Bit $tmp685 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->allowLambdas, $atPre1405);
    if ($tmp685.value) goto $l686; else goto $l687;
    $l687:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s688, (panda$core$Int64) { 263 }, &$s689);
    abort();
    $l686:;
    switch ($tmp404) {
        case 8: goto $l681;
        case 3: goto $l475;
        case 2: goto $l462;
        case 5: goto $l548;
        case 1: goto $l455;
        case -1: goto $l684;
        case 4: goto $l522;
        case 6: goto $l593;
        case 0: goto $l427;
        case 7: goto $l663;
    }
    $l684:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start693;
    org$pandalanguage$pandac$parser$Token$Kind $tmp694;
    org$pandalanguage$pandac$ASTNode* $returnValue697;
    org$pandalanguage$pandac$ASTNode* $tmp698;
    org$pandalanguage$pandac$ASTNode* expr701 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp702;
    org$pandalanguage$pandac$ASTNode* $tmp703;
    org$pandalanguage$pandac$ASTNode* $tmp705;
    org$pandalanguage$pandac$ASTNode* $match$381_9711 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp712;
    org$pandalanguage$pandac$Position firstPosition714;
    panda$core$String* firstName716 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp718;
    panda$collections$Array* parameters723 = NULL;
    panda$collections$Array* $tmp724;
    panda$collections$Array* $tmp725;
    org$pandalanguage$pandac$ASTNode* firstType727 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp728;
    org$pandalanguage$pandac$ASTNode* $tmp729;
    org$pandalanguage$pandac$ASTNode* $tmp731;
    org$pandalanguage$pandac$ASTNode* $tmp736;
    org$pandalanguage$pandac$parser$Token$Kind $tmp741;
    org$pandalanguage$pandac$parser$Token$nullable nextName746;
    org$pandalanguage$pandac$parser$Token$Kind $tmp747;
    org$pandalanguage$pandac$parser$Token$Kind $tmp750;
    org$pandalanguage$pandac$ASTNode* $tmp753;
    org$pandalanguage$pandac$ASTNode* nextType759 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp760;
    org$pandalanguage$pandac$ASTNode* $tmp761;
    org$pandalanguage$pandac$ASTNode* $tmp763;
    org$pandalanguage$pandac$ASTNode* $tmp769;
    panda$core$String* $tmp771;
    org$pandalanguage$pandac$parser$Token$Kind $tmp774;
    org$pandalanguage$pandac$ASTNode* $tmp777;
    org$pandalanguage$pandac$parser$Token$Kind $tmp782;
    org$pandalanguage$pandac$ASTNode* $tmp785;
    org$pandalanguage$pandac$ASTNode* body790 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp791;
    org$pandalanguage$pandac$ASTNode* $tmp792;
    org$pandalanguage$pandac$ASTNode* $tmp794;
    org$pandalanguage$pandac$ASTNode* $tmp799;
    org$pandalanguage$pandac$ASTNode* $tmp800;
    panda$collections$ImmutableArray* $tmp802;
    org$pandalanguage$pandac$parser$Token$Kind $tmp809;
    panda$collections$Array* parameters814 = NULL;
    panda$collections$Array* $tmp815;
    panda$collections$Array* $tmp816;
    panda$core$Bit validLambda818;
    org$pandalanguage$pandac$ASTNode* nextExpr824 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp825;
    org$pandalanguage$pandac$ASTNode* $tmp826;
    org$pandalanguage$pandac$ASTNode* $tmp828;
    org$pandalanguage$pandac$ASTNode* $tmp836;
    org$pandalanguage$pandac$parser$Token$Kind $tmp845;
    org$pandalanguage$pandac$parser$Token$Kind $tmp847;
    org$pandalanguage$pandac$ASTNode* $tmp850;
    org$pandalanguage$pandac$parser$Token$Kind $tmp857;
    org$pandalanguage$pandac$ASTNode* body863 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp864;
    org$pandalanguage$pandac$ASTNode* $tmp865;
    org$pandalanguage$pandac$ASTNode* $tmp867;
    org$pandalanguage$pandac$ASTNode* $tmp873;
    org$pandalanguage$pandac$ASTNode* $tmp874;
    panda$collections$ImmutableArray* $tmp876;
    panda$core$String* $tmp884;
    panda$core$String* $tmp885;
    panda$core$Object* $tmp887;
    org$pandalanguage$pandac$ASTNode* $tmp892;
    org$pandalanguage$pandac$ASTNode* $tmp893;
    panda$collections$ImmutableArray* $tmp895;
    org$pandalanguage$pandac$parser$Token$Kind $tmp905;
    org$pandalanguage$pandac$parser$Token$Kind $tmp907;
    org$pandalanguage$pandac$ASTNode* $tmp909;
    panda$collections$Array* arguments914 = NULL;
    panda$collections$Array* $tmp915;
    panda$collections$Array* $tmp916;
    org$pandalanguage$pandac$ASTNode* nextExpr923 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp924;
    org$pandalanguage$pandac$ASTNode* $tmp925;
    org$pandalanguage$pandac$ASTNode* $tmp927;
    org$pandalanguage$pandac$parser$Token$Kind $tmp935;
    org$pandalanguage$pandac$parser$Token$Kind $tmp937;
    org$pandalanguage$pandac$ASTNode* $tmp939;
    org$pandalanguage$pandac$ASTNode* $tmp940;
    panda$collections$ImmutableArray* $tmp942;
    int $tmp692;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp694, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp696 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp694, &$s695);
        start693 = $tmp696;
        if (((panda$core$Bit) { !start693.nonnull }).value) {
        {
            $tmp698 = NULL;
            $returnValue697 = $tmp698;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp698));
            $tmp692 = 0;
            goto $l690;
            $l699:;
            return $returnValue697;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp704 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp703 = $tmp704;
        $tmp702 = $tmp703;
        expr701 = $tmp702;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp702));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp703));
        if (((panda$core$Bit) { expr701 == NULL }).value) {
        {
            $tmp705 = NULL;
            $returnValue697 = $tmp705;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp705));
            $tmp692 = 1;
            goto $l690;
            $l706:;
            return $returnValue697;
        }
        }
        int $tmp710;
        {
            $tmp712 = expr701;
            $match$381_9711 = $tmp712;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp712));
            panda$core$Bit $tmp713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_9711->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp713.value) {
            {
                org$pandalanguage$pandac$Position* $tmp715 = ((org$pandalanguage$pandac$Position*) ((char*) $match$381_9711->$data + 0));
                firstPosition714 = *$tmp715;
                panda$core$String** $tmp717 = ((panda$core$String**) ((char*) $match$381_9711->$data + 16));
                firstName716 = *$tmp717;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp718, ((panda$core$Int64) { 95 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp719 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp718);
                if (((panda$core$Bit) { $tmp719.nonnull }).value) {
                {
                    int $tmp722;
                    {
                        panda$collections$Array* $tmp726 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp726);
                        $tmp725 = $tmp726;
                        $tmp724 = $tmp725;
                        parameters723 = $tmp724;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp724));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
                        org$pandalanguage$pandac$ASTNode* $tmp730 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp729 = $tmp730;
                        $tmp728 = $tmp729;
                        firstType727 = $tmp728;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp728));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp729));
                        if (((panda$core$Bit) { firstType727 == NULL }).value) {
                        {
                            $tmp731 = NULL;
                            $returnValue697 = $tmp731;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp731));
                            $tmp722 = 0;
                            goto $l720;
                            $l732:;
                            $tmp710 = 0;
                            goto $l708;
                            $l733:;
                            $tmp692 = 2;
                            goto $l690;
                            $l734:;
                            return $returnValue697;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp737 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp737, ((panda$core$Int64) { 31 }), firstPosition714, firstName716, firstType727);
                        $tmp736 = $tmp737;
                        panda$collections$Array$add$panda$collections$Array$T(parameters723, ((panda$core$Object*) $tmp736));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp736));
                        $l738:;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp741, ((panda$core$Int64) { 105 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp742 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp741);
                        bool $tmp740 = ((panda$core$Bit) { $tmp742.nonnull }).value;
                        if (!$tmp740) goto $l739;
                        {
                            int $tmp745;
                            {
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp747, ((panda$core$Int64) { 48 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp749 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp747, &$s748);
                                nextName746 = $tmp749;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp750, ((panda$core$Int64) { 95 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp752 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp750, &$s751);
                                if (((panda$core$Bit) { !$tmp752.nonnull }).value) {
                                {
                                    $tmp753 = NULL;
                                    $returnValue697 = $tmp753;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp753));
                                    $tmp745 = 0;
                                    goto $l743;
                                    $l754:;
                                    $tmp722 = 1;
                                    goto $l720;
                                    $l755:;
                                    $tmp710 = 1;
                                    goto $l708;
                                    $l756:;
                                    $tmp692 = 3;
                                    goto $l690;
                                    $l757:;
                                    return $returnValue697;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp762 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp761 = $tmp762;
                                $tmp760 = $tmp761;
                                nextType759 = $tmp760;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp760));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp761));
                                if (((panda$core$Bit) { nextType759 == NULL }).value) {
                                {
                                    $tmp763 = NULL;
                                    $returnValue697 = $tmp763;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp763));
                                    $tmp745 = 1;
                                    goto $l743;
                                    $l764:;
                                    $tmp722 = 2;
                                    goto $l720;
                                    $l765:;
                                    $tmp710 = 2;
                                    goto $l708;
                                    $l766:;
                                    $tmp692 = 4;
                                    goto $l690;
                                    $l767:;
                                    return $returnValue697;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp770 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$String* $tmp772 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) nextName746.value));
                                $tmp771 = $tmp772;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp770, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) nextName746.value).position, $tmp771, nextType759);
                                $tmp769 = $tmp770;
                                panda$collections$Array$add$panda$collections$Array$T(parameters723, ((panda$core$Object*) $tmp769));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp771));
                            }
                            $tmp745 = -1;
                            goto $l743;
                            $l743:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextType759));
                            nextType759 = NULL;
                            switch ($tmp745) {
                                case -1: goto $l773;
                                case 1: goto $l764;
                                case 0: goto $l754;
                            }
                            $l773:;
                        }
                        goto $l738;
                        $l739:;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp774, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp776 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp774, &$s775);
                        if (((panda$core$Bit) { !$tmp776.nonnull }).value) {
                        {
                            $tmp777 = NULL;
                            $returnValue697 = $tmp777;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp777));
                            $tmp722 = 3;
                            goto $l720;
                            $l778:;
                            $tmp710 = 3;
                            goto $l708;
                            $l779:;
                            $tmp692 = 5;
                            goto $l690;
                            $l780:;
                            return $returnValue697;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp782, ((panda$core$Int64) { 90 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp784 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp782, &$s783);
                        if (((panda$core$Bit) { !$tmp784.nonnull }).value) {
                        {
                            $tmp785 = NULL;
                            $returnValue697 = $tmp785;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp785));
                            $tmp722 = 4;
                            goto $l720;
                            $l786:;
                            $tmp710 = 4;
                            goto $l708;
                            $l787:;
                            $tmp692 = 6;
                            goto $l690;
                            $l788:;
                            return $returnValue697;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp793 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp792 = $tmp793;
                        $tmp791 = $tmp792;
                        body790 = $tmp791;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp791));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp792));
                        if (((panda$core$Bit) { body790 == NULL }).value) {
                        {
                            $tmp794 = NULL;
                            $returnValue697 = $tmp794;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp794));
                            $tmp722 = 5;
                            goto $l720;
                            $l795:;
                            $tmp710 = 5;
                            goto $l708;
                            $l796:;
                            $tmp692 = 7;
                            goto $l690;
                            $l797:;
                            return $returnValue697;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp801 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$collections$ImmutableArray* $tmp803 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters723);
                        $tmp802 = $tmp803;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp801, ((panda$core$Int64) { 43 }), ((org$pandalanguage$pandac$parser$Token) start693.value).position, $tmp802, body790);
                        $tmp800 = $tmp801;
                        $tmp799 = $tmp800;
                        $returnValue697 = $tmp799;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp799));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp800));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp802));
                        $tmp722 = 6;
                        goto $l720;
                        $l804:;
                        $tmp710 = 6;
                        goto $l708;
                        $l805:;
                        $tmp692 = 8;
                        goto $l690;
                        $l806:;
                        return $returnValue697;
                    }
                    $l720:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body790));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) firstType727));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters723));
                    parameters723 = NULL;
                    firstType727 = NULL;
                    body790 = NULL;
                    switch ($tmp722) {
                        case 3: goto $l778;
                        case 1: goto $l755;
                        case 0: goto $l732;
                        case 4: goto $l786;
                        case 6: goto $l804;
                        case 5: goto $l795;
                        case 2: goto $l765;
                    }
                    $l808:;
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp809, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp810 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp809);
                if (((panda$core$Bit) { $tmp810.nonnull }).value) {
                {
                    int $tmp813;
                    {
                        panda$collections$Array* $tmp817 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp817);
                        $tmp816 = $tmp817;
                        $tmp815 = $tmp816;
                        parameters814 = $tmp815;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp815));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp816));
                        panda$collections$Array$add$panda$collections$Array$T(parameters814, ((panda$core$Object*) expr701));
                        validLambda818 = ((panda$core$Bit) { true });
                        $l819:;
                        {
                            int $tmp823;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp827 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp826 = $tmp827;
                                $tmp825 = $tmp826;
                                nextExpr824 = $tmp825;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp825));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp826));
                                if (((panda$core$Bit) { nextExpr824 == NULL }).value) {
                                {
                                    $tmp828 = NULL;
                                    $returnValue697 = $tmp828;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp828));
                                    $tmp823 = 0;
                                    goto $l821;
                                    $l829:;
                                    $tmp813 = 0;
                                    goto $l811;
                                    $l830:;
                                    $tmp710 = 7;
                                    goto $l708;
                                    $l831:;
                                    $tmp692 = 9;
                                    goto $l690;
                                    $l832:;
                                    return $returnValue697;
                                }
                                }
                                bool $tmp834 = validLambda818.value;
                                if (!$tmp834) goto $l835;
                                $tmp836 = nextExpr824;
                                panda$core$Bit $tmp840;
                                if (((panda$core$Bit) { $tmp836 != NULL }).value) goto $l837; else goto $l838;
                                $l837:;
                                panda$core$Bit $tmp841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp836->$rawValue, ((panda$core$Int64) { 20 }));
                                $tmp840 = $tmp841;
                                goto $l839;
                                $l838:;
                                $tmp840 = ((panda$core$Bit) { false });
                                goto $l839;
                                $l839:;
                                $tmp834 = $tmp840.value;
                                $l835:;
                                panda$core$Bit $tmp842 = { $tmp834 };
                                validLambda818 = $tmp842;
                                panda$collections$Array$add$panda$collections$Array$T(parameters814, ((panda$core$Object*) nextExpr824));
                            }
                            $tmp823 = -1;
                            goto $l821;
                            $l821:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr824));
                            nextExpr824 = NULL;
                            switch ($tmp823) {
                                case 0: goto $l829;
                                case -1: goto $l843;
                            }
                            $l843:;
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp845, ((panda$core$Int64) { 105 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp846 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp845);
                        bool $tmp844 = ((panda$core$Bit) { $tmp846.nonnull }).value;
                        if ($tmp844) goto $l819;
                        $l820:;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp847, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp849 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp847, &$s848);
                        if (((panda$core$Bit) { !$tmp849.nonnull }).value) {
                        {
                            $tmp850 = NULL;
                            $returnValue697 = $tmp850;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp850));
                            $tmp813 = 1;
                            goto $l811;
                            $l851:;
                            $tmp710 = 8;
                            goto $l708;
                            $l852:;
                            $tmp692 = 10;
                            goto $l690;
                            $l853:;
                            return $returnValue697;
                        }
                        }
                        bool $tmp855 = validLambda818.value;
                        if (!$tmp855) goto $l856;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp857, ((panda$core$Int64) { 90 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp858 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp857);
                        $tmp855 = ((panda$core$Bit) { $tmp858.nonnull }).value;
                        $l856:;
                        panda$core$Bit $tmp859 = { $tmp855 };
                        if ($tmp859.value) {
                        {
                            int $tmp862;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp866 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp865 = $tmp866;
                                $tmp864 = $tmp865;
                                body863 = $tmp864;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp864));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp865));
                                if (((panda$core$Bit) { body863 == NULL }).value) {
                                {
                                    $tmp867 = NULL;
                                    $returnValue697 = $tmp867;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp867));
                                    $tmp862 = 0;
                                    goto $l860;
                                    $l868:;
                                    $tmp813 = 2;
                                    goto $l811;
                                    $l869:;
                                    $tmp710 = 9;
                                    goto $l708;
                                    $l870:;
                                    $tmp692 = 11;
                                    goto $l690;
                                    $l871:;
                                    return $returnValue697;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp875 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$collections$ImmutableArray* $tmp877 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters814);
                                $tmp876 = $tmp877;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp875, ((panda$core$Int64) { 45 }), ((org$pandalanguage$pandac$parser$Token) start693.value).position, $tmp876, body863);
                                $tmp874 = $tmp875;
                                $tmp873 = $tmp874;
                                $returnValue697 = $tmp873;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp873));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp874));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp876));
                                $tmp862 = 1;
                                goto $l860;
                                $l878:;
                                $tmp813 = 3;
                                goto $l811;
                                $l879:;
                                $tmp710 = 10;
                                goto $l708;
                                $l880:;
                                $tmp692 = 12;
                                goto $l690;
                                $l881:;
                                return $returnValue697;
                            }
                            $l860:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body863));
                            body863 = NULL;
                            switch ($tmp862) {
                                case 1: goto $l878;
                                case 0: goto $l868;
                            }
                            $l883:;
                        }
                        }
                        org$pandalanguage$pandac$Position$wrapper* $tmp888;
                        $tmp888 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp888->value = ((org$pandalanguage$pandac$parser$Token) start693.value).position;
                        $tmp887 = ((panda$core$Object*) $tmp888);
                        panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s886, $tmp887);
                        $tmp885 = $tmp889;
                        panda$core$String* $tmp891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp885, &$s890);
                        $tmp884 = $tmp891;
                        panda$io$Console$printLine$panda$core$String($tmp884);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp884));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp885));
                        panda$core$Panda$unref$panda$core$Object($tmp887);
                        org$pandalanguage$pandac$ASTNode* $tmp894 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$collections$ImmutableArray* $tmp896 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters814);
                        $tmp895 = $tmp896;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp894, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start693.value).position, $tmp895);
                        $tmp893 = $tmp894;
                        $tmp892 = $tmp893;
                        $returnValue697 = $tmp892;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp892));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp893));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp895));
                        $tmp813 = 4;
                        goto $l811;
                        $l897:;
                        $tmp710 = 11;
                        goto $l708;
                        $l898:;
                        $tmp692 = 13;
                        goto $l690;
                        $l899:;
                        return $returnValue697;
                    }
                    $l811:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters814));
                    parameters814 = NULL;
                    switch ($tmp813) {
                        case 4: goto $l897;
                        case 0: goto $l830;
                        case 1: goto $l851;
                        case 3: goto $l879;
                        case 2: goto $l869;
                    }
                    $l901:;
                }
                }
            }
            }
            else {
            {
                int $tmp904;
                {
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp905, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp906 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp905);
                    if (((panda$core$Bit) { !$tmp906.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp907, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp907, &$s908);
                        $tmp909 = expr701;
                        $returnValue697 = $tmp909;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp909));
                        $tmp904 = 0;
                        goto $l902;
                        $l910:;
                        $tmp710 = 12;
                        goto $l708;
                        $l911:;
                        $tmp692 = 14;
                        goto $l690;
                        $l912:;
                        return $returnValue697;
                    }
                    }
                    panda$collections$Array* $tmp917 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp917);
                    $tmp916 = $tmp917;
                    $tmp915 = $tmp916;
                    arguments914 = $tmp915;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp915));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
                    panda$collections$Array$add$panda$collections$Array$T(arguments914, ((panda$core$Object*) expr701));
                    $l918:;
                    {
                        int $tmp922;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp926 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp925 = $tmp926;
                            $tmp924 = $tmp925;
                            nextExpr923 = $tmp924;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp924));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp925));
                            if (((panda$core$Bit) { nextExpr923 == NULL }).value) {
                            {
                                $tmp927 = NULL;
                                $returnValue697 = $tmp927;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp927));
                                $tmp922 = 0;
                                goto $l920;
                                $l928:;
                                $tmp904 = 1;
                                goto $l902;
                                $l929:;
                                $tmp710 = 13;
                                goto $l708;
                                $l930:;
                                $tmp692 = 15;
                                goto $l690;
                                $l931:;
                                return $returnValue697;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(arguments914, ((panda$core$Object*) nextExpr923));
                        }
                        $tmp922 = -1;
                        goto $l920;
                        $l920:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr923));
                        nextExpr923 = NULL;
                        switch ($tmp922) {
                            case 0: goto $l928;
                            case -1: goto $l933;
                        }
                        $l933:;
                    }
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp935, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp936 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp935);
                    bool $tmp934 = ((panda$core$Bit) { $tmp936.nonnull }).value;
                    if ($tmp934) goto $l918;
                    $l919:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp937, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp937, &$s938);
                    org$pandalanguage$pandac$ASTNode* $tmp941 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp943 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(arguments914);
                    $tmp942 = $tmp943;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp941, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start693.value).position, $tmp942);
                    $tmp940 = $tmp941;
                    $tmp939 = $tmp940;
                    $returnValue697 = $tmp939;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp939));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp940));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp942));
                    $tmp904 = 2;
                    goto $l902;
                    $l944:;
                    $tmp710 = 14;
                    goto $l708;
                    $l945:;
                    $tmp692 = 16;
                    goto $l690;
                    $l946:;
                    return $returnValue697;
                }
                $l902:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arguments914));
                arguments914 = NULL;
                switch ($tmp904) {
                    case 2: goto $l944;
                    case 1: goto $l929;
                    case 0: goto $l910;
                }
                $l948:;
            }
            }
        }
        $tmp710 = -1;
        goto $l708;
        $l708:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp712));
        switch ($tmp710) {
            case 5: goto $l796;
            case 0: goto $l733;
            case 3: goto $l779;
            case 4: goto $l787;
            case 13: goto $l930;
            case -1: goto $l949;
            case 6: goto $l805;
            case 2: goto $l766;
            case 7: goto $l831;
            case 1: goto $l756;
            case 14: goto $l945;
            case 8: goto $l852;
            case 9: goto $l870;
            case 12: goto $l911;
            case 10: goto $l880;
            case 11: goto $l898;
        }
        $l949:;
    }
    $tmp692 = -1;
    goto $l690;
    $l690:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr701));
    expr701 = NULL;
    switch ($tmp692) {
        case 4: goto $l767;
        case 7: goto $l797;
        case 2: goto $l734;
        case 6: goto $l788;
        case -1: goto $l950;
        case 15: goto $l931;
        case 8: goto $l806;
        case 5: goto $l780;
        case 9: goto $l832;
        case 3: goto $l757;
        case 12: goto $l881;
        case 11: goto $l871;
        case 16: goto $l946;
        case 14: goto $l912;
        case 10: goto $l853;
        case 13: goto $l899;
        case 1: goto $l706;
        case 0: goto $l699;
    }
    $l950:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start954;
    org$pandalanguage$pandac$parser$Token$Kind $tmp955;
    org$pandalanguage$pandac$parser$Token$Kind $tmp958;
    org$pandalanguage$pandac$ASTNode* t963 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp964;
    org$pandalanguage$pandac$ASTNode* $tmp965;
    org$pandalanguage$pandac$ASTNode* $returnValue967;
    org$pandalanguage$pandac$ASTNode* $tmp968;
    panda$collections$Array* parameters972 = NULL;
    panda$collections$Array* $tmp973;
    panda$collections$Array* $tmp974;
    org$pandalanguage$pandac$ASTNode* $tmp976;
    panda$core$String* $tmp978;
    org$pandalanguage$pandac$parser$Token$Kind $tmp980;
    org$pandalanguage$pandac$ASTNode* $tmp983;
    org$pandalanguage$pandac$ASTNode* expr987 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp988;
    org$pandalanguage$pandac$ASTNode* $tmp989;
    org$pandalanguage$pandac$ASTNode* $tmp991;
    org$pandalanguage$pandac$ASTNode* $tmp995;
    org$pandalanguage$pandac$ASTNode* $tmp996;
    panda$collections$ImmutableArray* $tmp998;
    panda$collections$Array* parameters1004 = NULL;
    panda$collections$Array* $tmp1005;
    panda$collections$Array* $tmp1006;
    org$pandalanguage$pandac$ASTNode* $tmp1008;
    panda$core$String* $tmp1010;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1012;
    org$pandalanguage$pandac$ASTNode* $tmp1015;
    org$pandalanguage$pandac$ASTNode* expr1018 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1019;
    org$pandalanguage$pandac$ASTNode* $tmp1020;
    org$pandalanguage$pandac$ASTNode* $tmp1022;
    org$pandalanguage$pandac$ASTNode* $tmp1025;
    org$pandalanguage$pandac$ASTNode* $tmp1026;
    panda$collections$ImmutableArray* $tmp1028;
    int $tmp953;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp955, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp957 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp955, &$s956);
        start954 = $tmp957;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp958, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp959 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp958);
        if (((panda$core$Bit) { $tmp959.nonnull }).value) {
        {
            int $tmp962;
            {
                org$pandalanguage$pandac$ASTNode* $tmp966 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp965 = $tmp966;
                $tmp964 = $tmp965;
                t963 = $tmp964;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp964));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp965));
                if (((panda$core$Bit) { t963 == NULL }).value) {
                {
                    $tmp968 = NULL;
                    $returnValue967 = $tmp968;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp968));
                    $tmp962 = 0;
                    goto $l960;
                    $l969:;
                    $tmp953 = 0;
                    goto $l951;
                    $l970:;
                    return $returnValue967;
                }
                }
                panda$collections$Array* $tmp975 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp975);
                $tmp974 = $tmp975;
                $tmp973 = $tmp974;
                parameters972 = $tmp973;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp973));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp974));
                org$pandalanguage$pandac$ASTNode* $tmp977 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp979 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start954.value));
                $tmp978 = $tmp979;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp977, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start954.value).position, $tmp978, t963);
                $tmp976 = $tmp977;
                panda$collections$Array$add$panda$collections$Array$T(parameters972, ((panda$core$Object*) $tmp976));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp976));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp978));
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp980, ((panda$core$Int64) { 90 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp982 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp980, &$s981);
                if (((panda$core$Bit) { !$tmp982.nonnull }).value) {
                {
                    $tmp983 = NULL;
                    $returnValue967 = $tmp983;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp983));
                    $tmp962 = 1;
                    goto $l960;
                    $l984:;
                    $tmp953 = 1;
                    goto $l951;
                    $l985:;
                    return $returnValue967;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp990 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp989 = $tmp990;
                $tmp988 = $tmp989;
                expr987 = $tmp988;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp988));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
                if (((panda$core$Bit) { expr987 == NULL }).value) {
                {
                    $tmp991 = NULL;
                    $returnValue967 = $tmp991;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp991));
                    $tmp962 = 2;
                    goto $l960;
                    $l992:;
                    $tmp953 = 2;
                    goto $l951;
                    $l993:;
                    return $returnValue967;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp997 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$collections$ImmutableArray* $tmp999 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters972);
                $tmp998 = $tmp999;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp997, ((panda$core$Int64) { 43 }), ((org$pandalanguage$pandac$parser$Token) start954.value).position, $tmp998, expr987);
                $tmp996 = $tmp997;
                $tmp995 = $tmp996;
                $returnValue967 = $tmp995;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp995));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp996));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp998));
                $tmp962 = 3;
                goto $l960;
                $l1000:;
                $tmp953 = 3;
                goto $l951;
                $l1001:;
                return $returnValue967;
            }
            $l960:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr987));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters972));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t963));
            t963 = NULL;
            parameters972 = NULL;
            expr987 = NULL;
            switch ($tmp962) {
                case 2: goto $l992;
                case 1: goto $l984;
                case 3: goto $l1000;
                case 0: goto $l969;
            }
            $l1003:;
        }
        }
        panda$collections$Array* $tmp1007 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1007);
        $tmp1006 = $tmp1007;
        $tmp1005 = $tmp1006;
        parameters1004 = $tmp1005;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1005));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
        org$pandalanguage$pandac$ASTNode* $tmp1009 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1011 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start954.value));
        $tmp1010 = $tmp1011;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1009, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) start954.value).position, $tmp1010);
        $tmp1008 = $tmp1009;
        panda$collections$Array$add$panda$collections$Array$T(parameters1004, ((panda$core$Object*) $tmp1008));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1008));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1010));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1012, ((panda$core$Int64) { 90 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1014 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1012, &$s1013);
        if (((panda$core$Bit) { !$tmp1014.nonnull }).value) {
        {
            $tmp1015 = NULL;
            $returnValue967 = $tmp1015;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1015));
            $tmp953 = 4;
            goto $l951;
            $l1016:;
            return $returnValue967;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1021 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1020 = $tmp1021;
        $tmp1019 = $tmp1020;
        expr1018 = $tmp1019;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1019));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1020));
        if (((panda$core$Bit) { expr1018 == NULL }).value) {
        {
            $tmp1022 = NULL;
            $returnValue967 = $tmp1022;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1022));
            $tmp953 = 5;
            goto $l951;
            $l1023:;
            return $returnValue967;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1027 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp1029 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1004);
        $tmp1028 = $tmp1029;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1027, ((panda$core$Int64) { 45 }), ((org$pandalanguage$pandac$parser$Token) start954.value).position, $tmp1028, expr1018);
        $tmp1026 = $tmp1027;
        $tmp1025 = $tmp1026;
        $returnValue967 = $tmp1025;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1025));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1026));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1028));
        $tmp953 = 6;
        goto $l951;
        $l1030:;
        return $returnValue967;
    }
    $l951:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1018));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1004));
    parameters1004 = NULL;
    expr1018 = NULL;
    switch ($tmp953) {
        case 3: goto $l1001;
        case 6: goto $l1030;
        case 0: goto $l970;
        case 1: goto $l985;
        case 2: goto $l993;
        case 5: goto $l1023;
        case 4: goto $l1016;
    }
    $l1032:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1036;
    org$pandalanguage$pandac$ASTNode* $returnValue1039;
    org$pandalanguage$pandac$ASTNode* $tmp1040;
    org$pandalanguage$pandac$ASTNode* regex1043 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1044;
    org$pandalanguage$pandac$ASTNode* $tmp1045;
    org$pandalanguage$pandac$ASTNode* $tmp1047;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1050;
    org$pandalanguage$pandac$ASTNode* $tmp1052;
    int $tmp1035;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1036, ((panda$core$Int64) { 54 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1038 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1036, &$s1037);
        if (((panda$core$Bit) { !$tmp1038.nonnull }).value) {
        {
            $tmp1040 = NULL;
            $returnValue1039 = $tmp1040;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1040));
            $tmp1035 = 0;
            goto $l1033;
            $l1041:;
            return $returnValue1039;
        }
        }
        self->regexParser->lexer->dfa->offset = self->lexer->dfa->offset;
        self->regexParser->lexer->dfa->line = self->lexer->dfa->line;
        self->regexParser->lexer->dfa->column = self->lexer->dfa->column;
        org$pandalanguage$pandac$ASTNode* $tmp1046 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self->regexParser);
        $tmp1045 = $tmp1046;
        $tmp1044 = $tmp1045;
        regex1043 = $tmp1044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1045));
        self->lexer->dfa->offset = self->regexParser->lexer->dfa->offset;
        self->lexer->dfa->line = self->regexParser->lexer->dfa->line;
        self->lexer->dfa->column = self->regexParser->lexer->dfa->column;
        if (((panda$core$Bit) { regex1043 == NULL }).value) {
        {
            $tmp1047 = NULL;
            $returnValue1039 = $tmp1047;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1047));
            $tmp1035 = 1;
            goto $l1033;
            $l1048:;
            return $returnValue1039;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1050, ((panda$core$Int64) { 54 }));
        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1050, &$s1051);
        $tmp1052 = regex1043;
        $returnValue1039 = $tmp1052;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1052));
        $tmp1035 = 2;
        goto $l1033;
        $l1053:;
        return $returnValue1039;
    }
    $l1033:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) regex1043));
    regex1043 = NULL;
    switch ($tmp1035) {
        case 2: goto $l1053;
        case 1: goto $l1048;
        case 0: goto $l1041;
    }
    $l1055:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t1056;
    org$pandalanguage$pandac$parser$Token$Kind $match$524_91058;
    org$pandalanguage$pandac$parser$Token$Kind check1060;
    org$pandalanguage$pandac$ASTNode* $returnValue1070;
    org$pandalanguage$pandac$ASTNode* $tmp1071;
    org$pandalanguage$pandac$ASTNode* $tmp1072;
    org$pandalanguage$pandac$ASTNode* $tmp1075;
    org$pandalanguage$pandac$ASTNode* $tmp1076;
    panda$core$String* $tmp1078;
    org$pandalanguage$pandac$ASTNode* $tmp1082;
    org$pandalanguage$pandac$ASTNode* $tmp1083;
    panda$core$String* $tmp1085;
    org$pandalanguage$pandac$ASTNode* $tmp1090;
    org$pandalanguage$pandac$ASTNode* $tmp1091;
    panda$core$String* $tmp1093;
    panda$core$String* $tmp1094;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1096;
    org$pandalanguage$pandac$ASTNode* $tmp1101;
    org$pandalanguage$pandac$ASTNode* $tmp1102;
    panda$core$String* $tmp1104;
    panda$core$String* $tmp1105;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1107;
    org$pandalanguage$pandac$ASTNode* $tmp1112;
    org$pandalanguage$pandac$ASTNode* $tmp1113;
    panda$core$String* $tmp1115;
    org$pandalanguage$pandac$ASTNode* $tmp1120;
    org$pandalanguage$pandac$ASTNode* $tmp1121;
    org$pandalanguage$pandac$ASTNode* $tmp1125;
    org$pandalanguage$pandac$ASTNode* $tmp1126;
    org$pandalanguage$pandac$ASTNode* $tmp1130;
    org$pandalanguage$pandac$ASTNode* $tmp1131;
    org$pandalanguage$pandac$ASTNode* $tmp1135;
    org$pandalanguage$pandac$ASTNode* $tmp1136;
    org$pandalanguage$pandac$ASTNode* $tmp1140;
    org$pandalanguage$pandac$ASTNode* $tmp1141;
    org$pandalanguage$pandac$ASTNode* $tmp1149;
    org$pandalanguage$pandac$ASTNode* $tmp1150;
    org$pandalanguage$pandac$ASTNode* $tmp1154;
    org$pandalanguage$pandac$ASTNode* $tmp1155;
    panda$core$String* name1162 = NULL;
    panda$core$String* $tmp1163;
    panda$core$String* $tmp1164;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1171;
    org$pandalanguage$pandac$ASTNode* expr1173 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1174;
    org$pandalanguage$pandac$ASTNode* $tmp1175;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1177;
    org$pandalanguage$pandac$ASTNode* $tmp1179;
    org$pandalanguage$pandac$ASTNode* $tmp1180;
    org$pandalanguage$pandac$ASTNode* $tmp1188;
    org$pandalanguage$pandac$ASTNode* $tmp1189;
    panda$core$String* $tmp1193;
    panda$core$String* $tmp1194;
    org$pandalanguage$pandac$ASTNode* $tmp1199;
    org$pandalanguage$pandac$ASTNode* $tmp1208;
    org$pandalanguage$pandac$ASTNode* $tmp1209;
    org$pandalanguage$pandac$ASTNode* $tmp1213;
    org$pandalanguage$pandac$ASTNode* $tmp1214;
    panda$core$String* $tmp1217;
    panda$core$String* $tmp1218;
    panda$core$String* $tmp1220;
    org$pandalanguage$pandac$ASTNode* $tmp1225;
    org$pandalanguage$pandac$parser$Token $tmp1057 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t1056 = $tmp1057;
    {
        $match$524_91058 = t1056.kind;
        panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1059.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1061 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            check1060 = $tmp1061.kind;
            bool $tmp1063 = self->allowLambdas.value;
            if (!$tmp1063) goto $l1064;
            panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1060.$rawValue, ((panda$core$Int64) { 95 }));
            $tmp1063 = $tmp1065.value;
            $l1064:;
            panda$core$Bit $tmp1066 = { $tmp1063 };
            bool $tmp1062 = $tmp1066.value;
            if ($tmp1062) goto $l1067;
            panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1060.$rawValue, ((panda$core$Int64) { 90 }));
            $tmp1062 = $tmp1068.value;
            $l1067:;
            panda$core$Bit $tmp1069 = { $tmp1062 };
            if ($tmp1069.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1056);
                org$pandalanguage$pandac$ASTNode* $tmp1073 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1072 = $tmp1073;
                $tmp1071 = $tmp1072;
                $returnValue1070 = $tmp1071;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1071));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1072));
                return $returnValue1070;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1077 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1079 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1056);
            $tmp1078 = $tmp1079;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1077, ((panda$core$Int64) { 20 }), t1056.position, $tmp1078);
            $tmp1076 = $tmp1077;
            $tmp1075 = $tmp1076;
            $returnValue1070 = $tmp1075;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1075));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1076));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1078));
            return $returnValue1070;
        }
        }
        else {
        panda$core$Bit $tmp1081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1081.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1084 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1086 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1056);
            $tmp1085 = $tmp1086;
            panda$core$UInt64$nullable $tmp1087 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1085);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1084, ((panda$core$Int64) { 22 }), t1056.position, ((panda$core$UInt64) $tmp1087.value));
            $tmp1083 = $tmp1084;
            $tmp1082 = $tmp1083;
            $returnValue1070 = $tmp1082;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1082));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1085));
            return $returnValue1070;
        }
        }
        else {
        panda$core$Bit $tmp1089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1089.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1092 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1095 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1056);
            $tmp1094 = $tmp1095;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1096, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1097 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1094, $tmp1096);
            $tmp1093 = $tmp1097;
            panda$core$UInt64$nullable $tmp1098 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1093, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1092, ((panda$core$Int64) { 22 }), t1056.position, ((panda$core$UInt64) $tmp1098.value));
            $tmp1091 = $tmp1092;
            $tmp1090 = $tmp1091;
            $returnValue1070 = $tmp1090;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1090));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1091));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1093));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1094));
            return $returnValue1070;
        }
        }
        else {
        panda$core$Bit $tmp1100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1100.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1103 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1106 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1056);
            $tmp1105 = $tmp1106;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1107, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1108 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1105, $tmp1107);
            $tmp1104 = $tmp1108;
            panda$core$UInt64$nullable $tmp1109 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1104, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1103, ((panda$core$Int64) { 22 }), t1056.position, ((panda$core$UInt64) $tmp1109.value));
            $tmp1102 = $tmp1103;
            $tmp1101 = $tmp1102;
            $returnValue1070 = $tmp1101;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1101));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1102));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1104));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1105));
            return $returnValue1070;
        }
        }
        else {
        panda$core$Bit $tmp1111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1111.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1114 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1116 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1056);
            $tmp1115 = $tmp1116;
            panda$core$Real64$nullable $tmp1117 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp1115);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1114, ((panda$core$Int64) { 34 }), t1056.position, ((panda$core$Real64) $tmp1117.value));
            $tmp1113 = $tmp1114;
            $tmp1112 = $tmp1113;
            $returnValue1070 = $tmp1112;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1112));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1113));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1115));
            return $returnValue1070;
        }
        }
        else {
        panda$core$Bit $tmp1119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp1119.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1122 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1122, ((panda$core$Int64) { 37 }), t1056.position);
            $tmp1121 = $tmp1122;
            $tmp1120 = $tmp1121;
            $returnValue1070 = $tmp1120;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1120));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1121));
            return $returnValue1070;
        }
        }
        else {
        panda$core$Bit $tmp1124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp1124.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1127 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1127, ((panda$core$Int64) { 39 }), t1056.position);
            $tmp1126 = $tmp1127;
            $tmp1125 = $tmp1126;
            $returnValue1070 = $tmp1125;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1125));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
            return $returnValue1070;
        }
        }
        else {
        panda$core$Bit $tmp1129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1129.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1132 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1132, ((panda$core$Int64) { 28 }), t1056.position);
            $tmp1131 = $tmp1132;
            $tmp1130 = $tmp1131;
            $returnValue1070 = $tmp1130;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1130));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1131));
            return $returnValue1070;
        }
        }
        else {
        panda$core$Bit $tmp1134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1134.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1137 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1137, ((panda$core$Int64) { 5 }), t1056.position, ((panda$core$Bit) { true }));
            $tmp1136 = $tmp1137;
            $tmp1135 = $tmp1136;
            $returnValue1070 = $tmp1135;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1135));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1136));
            return $returnValue1070;
        }
        }
        else {
        panda$core$Bit $tmp1139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1139.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1142 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1142, ((panda$core$Int64) { 5 }), t1056.position, ((panda$core$Bit) { false }));
            $tmp1141 = $tmp1142;
            $tmp1140 = $tmp1141;
            $returnValue1070 = $tmp1140;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1140));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1141));
            return $returnValue1070;
        }
        }
        else {
        panda$core$Bit $tmp1145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp1144 = $tmp1145.value;
        if ($tmp1144) goto $l1146;
        panda$core$Bit $tmp1147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp1144 = $tmp1147.value;
        $l1146:;
        panda$core$Bit $tmp1148 = { $tmp1144 };
        if ($tmp1148.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1056);
            org$pandalanguage$pandac$ASTNode* $tmp1151 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1150 = $tmp1151;
            $tmp1149 = $tmp1150;
            $returnValue1070 = $tmp1149;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1149));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1150));
            return $returnValue1070;
        }
        }
        else {
        panda$core$Bit $tmp1153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp1153.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1056);
            org$pandalanguage$pandac$ASTNode* $tmp1156 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1155 = $tmp1156;
            $tmp1154 = $tmp1155;
            $returnValue1070 = $tmp1154;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1154));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1155));
            return $returnValue1070;
        }
        }
        else {
        panda$core$Bit $tmp1158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1158.value) {
        {
            int $tmp1161;
            {
                panda$core$String* $tmp1165 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1056);
                $tmp1164 = $tmp1165;
                $tmp1163 = $tmp1164;
                name1162 = $tmp1163;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1163));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1164));
                panda$core$Bit $tmp1167 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1162, &$s1166);
                if ($tmp1167.value) {
                {
                    int $tmp1170;
                    {
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1171, ((panda$core$Int64) { 103 }));
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1171, &$s1172);
                        org$pandalanguage$pandac$ASTNode* $tmp1176 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1175 = $tmp1176;
                        $tmp1174 = $tmp1175;
                        expr1173 = $tmp1174;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1174));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1175));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1177, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1177, &$s1178);
                        org$pandalanguage$pandac$ASTNode* $tmp1181 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1181, ((panda$core$Int64) { 2 }), t1056.position, expr1173);
                        $tmp1180 = $tmp1181;
                        $tmp1179 = $tmp1180;
                        $returnValue1070 = $tmp1179;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1179));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1180));
                        $tmp1170 = 0;
                        goto $l1168;
                        $l1182:;
                        $tmp1161 = 0;
                        goto $l1159;
                        $l1183:;
                        return $returnValue1070;
                    }
                    $l1168:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1173));
                    expr1173 = NULL;
                    switch ($tmp1170) {
                        case 0: goto $l1182;
                    }
                    $l1185:;
                }
                }
                else {
                panda$core$Bit $tmp1187 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1162, &$s1186);
                if ($tmp1187.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1190 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1190, ((panda$core$Int64) { 3 }), t1056.position);
                    $tmp1189 = $tmp1190;
                    $tmp1188 = $tmp1189;
                    $returnValue1070 = $tmp1188;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1188));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1189));
                    $tmp1161 = 1;
                    goto $l1159;
                    $l1191:;
                    return $returnValue1070;
                }
                }
                }
                panda$core$String* $tmp1196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1195, name1162);
                $tmp1194 = $tmp1196;
                panda$core$String* $tmp1198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1194, &$s1197);
                $tmp1193 = $tmp1198;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1056, $tmp1193);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1193));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1194));
                $tmp1199 = NULL;
                $returnValue1070 = $tmp1199;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1199));
                $tmp1161 = 2;
                goto $l1159;
                $l1200:;
                return $returnValue1070;
            }
            $l1159:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1162));
            name1162 = NULL;
            switch ($tmp1161) {
                case 2: goto $l1200;
                case 1: goto $l1191;
                case 0: goto $l1183;
            }
            $l1202:;
        }
        }
        else {
        panda$core$Bit $tmp1204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 20 }));
        bool $tmp1203 = $tmp1204.value;
        if ($tmp1203) goto $l1205;
        panda$core$Bit $tmp1206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp1203 = $tmp1206.value;
        $l1205:;
        panda$core$Bit $tmp1207 = { $tmp1203 };
        if ($tmp1207.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1056);
            org$pandalanguage$pandac$ASTNode* $tmp1210 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1209 = $tmp1210;
            $tmp1208 = $tmp1209;
            $returnValue1070 = $tmp1208;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1208));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1209));
            return $returnValue1070;
        }
        }
        else {
        panda$core$Bit $tmp1212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91058.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp1212.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1056);
            org$pandalanguage$pandac$ASTNode* $tmp1215 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1214 = $tmp1215;
            $tmp1213 = $tmp1214;
            $returnValue1070 = $tmp1213;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1213));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1214));
            return $returnValue1070;
        }
        }
        else {
        {
            panda$core$String* $tmp1221 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1056);
            $tmp1220 = $tmp1221;
            panda$core$String* $tmp1222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1219, $tmp1220);
            $tmp1218 = $tmp1222;
            panda$core$String* $tmp1224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1218, &$s1223);
            $tmp1217 = $tmp1224;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1056, $tmp1217);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1217));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1218));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1220));
            $tmp1225 = NULL;
            $returnValue1070 = $tmp1225;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1225));
            return $returnValue1070;
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
    org$pandalanguage$pandac$ASTNode* $match$583_91230 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1231;
    panda$core$String* text1233 = NULL;
    panda$core$String* $returnValue1235;
    panda$core$String* $tmp1236;
    org$pandalanguage$pandac$ASTNode* base1240 = NULL;
    panda$core$String* field1242 = NULL;
    panda$core$String* result1247 = NULL;
    panda$core$String* $tmp1248;
    panda$core$String* $tmp1249;
    panda$core$String* $tmp1251;
    panda$core$String* $tmp1252;
    panda$core$String* $tmp1253;
    panda$core$String* $tmp1254;
    panda$core$String* $tmp1255;
    panda$core$String* $tmp1259;
    panda$core$String* $tmp1264;
    int $tmp1229;
    {
        $tmp1231 = p_expr;
        $match$583_91230 = $tmp1231;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1231));
        panda$core$Bit $tmp1232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$583_91230->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1232.value) {
        {
            panda$core$String** $tmp1234 = ((panda$core$String**) ((char*) $match$583_91230->$data + 16));
            text1233 = *$tmp1234;
            $tmp1236 = text1233;
            $returnValue1235 = $tmp1236;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1236));
            $tmp1229 = 0;
            goto $l1227;
            $l1237:;
            return $returnValue1235;
        }
        }
        else {
        panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$583_91230->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1239.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1241 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$583_91230->$data + 16));
            base1240 = *$tmp1241;
            panda$core$String** $tmp1243 = ((panda$core$String**) ((char*) $match$583_91230->$data + 24));
            field1242 = *$tmp1243;
            int $tmp1246;
            {
                panda$core$String* $tmp1250 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base1240);
                $tmp1249 = $tmp1250;
                $tmp1248 = $tmp1249;
                result1247 = $tmp1248;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1249));
                if (((panda$core$Bit) { result1247 != NULL }).value) {
                {
                    {
                        $tmp1252 = result1247;
                        $tmp1251 = $tmp1252;
                        panda$core$String* $tmp1257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1256, field1242);
                        $tmp1255 = $tmp1257;
                        panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1247, $tmp1255);
                        $tmp1254 = $tmp1258;
                        $tmp1253 = $tmp1254;
                        result1247 = $tmp1253;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1253));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1254));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1255));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1251));
                    }
                }
                }
                $tmp1259 = result1247;
                $returnValue1235 = $tmp1259;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1259));
                $tmp1246 = 0;
                goto $l1244;
                $l1260:;
                $tmp1229 = 1;
                goto $l1227;
                $l1261:;
                return $returnValue1235;
            }
            $l1244:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1247));
            result1247 = NULL;
            switch ($tmp1246) {
                case 0: goto $l1260;
            }
            $l1263:;
        }
        }
        else {
        {
            $tmp1264 = NULL;
            $returnValue1235 = $tmp1264;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1264));
            $tmp1229 = 2;
            goto $l1227;
            $l1265:;
            return $returnValue1235;
        }
        }
        }
    }
    $tmp1229 = -1;
    goto $l1227;
    $l1227:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1231));
    switch ($tmp1229) {
        case 1: goto $l1261;
        case 2: goto $l1265;
        case 0: goto $l1237;
        case -1: goto $l1267;
    }
    $l1267:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name1268;
    org$pandalanguage$pandac$parser$Token$Kind $match$603_91270;
    panda$core$String* $returnValue1356;
    panda$core$String* $tmp1357;
    panda$core$String* $tmp1358;
    org$pandalanguage$pandac$parser$Token token1362;
    panda$core$String* $tmp1365;
    panda$core$String* $tmp1368;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1372;
    panda$core$String* $tmp1375;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1377;
    panda$core$String* $tmp1379;
    panda$core$String* $tmp1382;
    panda$core$String* $tmp1385;
    panda$core$String* $tmp1386;
    panda$core$String* $tmp1388;
    panda$core$String* $tmp1393;
    org$pandalanguage$pandac$parser$Token $tmp1269 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name1268 = $tmp1269;
    {
        $match$603_91270 = name1268.kind;
        panda$core$Bit $tmp1292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp1291 = $tmp1292.value;
        if ($tmp1291) goto $l1293;
        panda$core$Bit $tmp1294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp1291 = $tmp1294.value;
        $l1293:;
        panda$core$Bit $tmp1295 = { $tmp1291 };
        bool $tmp1290 = $tmp1295.value;
        if ($tmp1290) goto $l1296;
        panda$core$Bit $tmp1297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp1290 = $tmp1297.value;
        $l1296:;
        panda$core$Bit $tmp1298 = { $tmp1290 };
        bool $tmp1289 = $tmp1298.value;
        if ($tmp1289) goto $l1299;
        panda$core$Bit $tmp1300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp1289 = $tmp1300.value;
        $l1299:;
        panda$core$Bit $tmp1301 = { $tmp1289 };
        bool $tmp1288 = $tmp1301.value;
        if ($tmp1288) goto $l1302;
        panda$core$Bit $tmp1303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp1288 = $tmp1303.value;
        $l1302:;
        panda$core$Bit $tmp1304 = { $tmp1288 };
        bool $tmp1287 = $tmp1304.value;
        if ($tmp1287) goto $l1305;
        panda$core$Bit $tmp1306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp1287 = $tmp1306.value;
        $l1305:;
        panda$core$Bit $tmp1307 = { $tmp1287 };
        bool $tmp1286 = $tmp1307.value;
        if ($tmp1286) goto $l1308;
        panda$core$Bit $tmp1309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp1286 = $tmp1309.value;
        $l1308:;
        panda$core$Bit $tmp1310 = { $tmp1286 };
        bool $tmp1285 = $tmp1310.value;
        if ($tmp1285) goto $l1311;
        panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp1285 = $tmp1312.value;
        $l1311:;
        panda$core$Bit $tmp1313 = { $tmp1285 };
        bool $tmp1284 = $tmp1313.value;
        if ($tmp1284) goto $l1314;
        panda$core$Bit $tmp1315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp1284 = $tmp1315.value;
        $l1314:;
        panda$core$Bit $tmp1316 = { $tmp1284 };
        bool $tmp1283 = $tmp1316.value;
        if ($tmp1283) goto $l1317;
        panda$core$Bit $tmp1318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp1283 = $tmp1318.value;
        $l1317:;
        panda$core$Bit $tmp1319 = { $tmp1283 };
        bool $tmp1282 = $tmp1319.value;
        if ($tmp1282) goto $l1320;
        panda$core$Bit $tmp1321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp1282 = $tmp1321.value;
        $l1320:;
        panda$core$Bit $tmp1322 = { $tmp1282 };
        bool $tmp1281 = $tmp1322.value;
        if ($tmp1281) goto $l1323;
        panda$core$Bit $tmp1324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp1281 = $tmp1324.value;
        $l1323:;
        panda$core$Bit $tmp1325 = { $tmp1281 };
        bool $tmp1280 = $tmp1325.value;
        if ($tmp1280) goto $l1326;
        panda$core$Bit $tmp1327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp1280 = $tmp1327.value;
        $l1326:;
        panda$core$Bit $tmp1328 = { $tmp1280 };
        bool $tmp1279 = $tmp1328.value;
        if ($tmp1279) goto $l1329;
        panda$core$Bit $tmp1330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp1279 = $tmp1330.value;
        $l1329:;
        panda$core$Bit $tmp1331 = { $tmp1279 };
        bool $tmp1278 = $tmp1331.value;
        if ($tmp1278) goto $l1332;
        panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp1278 = $tmp1333.value;
        $l1332:;
        panda$core$Bit $tmp1334 = { $tmp1278 };
        bool $tmp1277 = $tmp1334.value;
        if ($tmp1277) goto $l1335;
        panda$core$Bit $tmp1336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp1277 = $tmp1336.value;
        $l1335:;
        panda$core$Bit $tmp1337 = { $tmp1277 };
        bool $tmp1276 = $tmp1337.value;
        if ($tmp1276) goto $l1338;
        panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp1276 = $tmp1339.value;
        $l1338:;
        panda$core$Bit $tmp1340 = { $tmp1276 };
        bool $tmp1275 = $tmp1340.value;
        if ($tmp1275) goto $l1341;
        panda$core$Bit $tmp1342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp1275 = $tmp1342.value;
        $l1341:;
        panda$core$Bit $tmp1343 = { $tmp1275 };
        bool $tmp1274 = $tmp1343.value;
        if ($tmp1274) goto $l1344;
        panda$core$Bit $tmp1345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1274 = $tmp1345.value;
        $l1344:;
        panda$core$Bit $tmp1346 = { $tmp1274 };
        bool $tmp1273 = $tmp1346.value;
        if ($tmp1273) goto $l1347;
        panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp1273 = $tmp1348.value;
        $l1347:;
        panda$core$Bit $tmp1349 = { $tmp1273 };
        bool $tmp1272 = $tmp1349.value;
        if ($tmp1272) goto $l1350;
        panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp1272 = $tmp1351.value;
        $l1350:;
        panda$core$Bit $tmp1352 = { $tmp1272 };
        bool $tmp1271 = $tmp1352.value;
        if ($tmp1271) goto $l1353;
        panda$core$Bit $tmp1354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp1271 = $tmp1354.value;
        $l1353:;
        panda$core$Bit $tmp1355 = { $tmp1271 };
        if ($tmp1355.value) {
        {
            panda$core$String* $tmp1359 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1268);
            $tmp1358 = $tmp1359;
            $tmp1357 = $tmp1358;
            $returnValue1356 = $tmp1357;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1357));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1358));
            return $returnValue1356;
        }
        }
        else {
        panda$core$Bit $tmp1361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1361.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1363 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token1362 = $tmp1363;
            panda$core$Bit $tmp1364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1362.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp1364.value) {
            {
                $tmp1365 = &$s1366;
                $returnValue1356 = $tmp1365;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1365));
                return $returnValue1356;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1362);
                $tmp1368 = &$s1369;
                $returnValue1356 = $tmp1368;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1368));
                return $returnValue1356;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91270.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp1371.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1372, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1374 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1372, &$s1373);
            if (((panda$core$Bit) { !$tmp1374.nonnull }).value) {
            {
                $tmp1375 = NULL;
                $returnValue1356 = $tmp1375;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1375));
                return $returnValue1356;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1377, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1378 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1377);
            if (((panda$core$Bit) { $tmp1378.nonnull }).value) {
            {
                $tmp1379 = &$s1380;
                $returnValue1356 = $tmp1379;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1379));
                return $returnValue1356;
            }
            }
            $tmp1382 = &$s1383;
            $returnValue1356 = $tmp1382;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1382));
            return $returnValue1356;
        }
        }
        else {
        {
            panda$core$String* $tmp1389 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1268);
            $tmp1388 = $tmp1389;
            panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1387, $tmp1388);
            $tmp1386 = $tmp1390;
            panda$core$String* $tmp1392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1386, &$s1391);
            $tmp1385 = $tmp1392;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name1268, $tmp1385);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1386));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1388));
            $tmp1393 = NULL;
            $returnValue1356 = $tmp1393;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1393));
            return $returnValue1356;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue1395;
    org$pandalanguage$pandac$ASTNode* $tmp1396;
    org$pandalanguage$pandac$ASTNode* $tmp1397;
    org$pandalanguage$pandac$ASTNode* $tmp1398 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    $tmp1397 = $tmp1398;
    $tmp1396 = $tmp1397;
    $returnValue1395 = $tmp1396;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1396));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1397));
    return $returnValue1395;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1403;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1404;
    org$pandalanguage$pandac$ASTNode* $returnValue1407;
    org$pandalanguage$pandac$ASTNode* $tmp1408;
    panda$collections$Array* subtypes1411 = NULL;
    panda$collections$Array* $tmp1412;
    panda$collections$Array* $tmp1413;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1415;
    org$pandalanguage$pandac$ASTNode* t1420 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1421;
    org$pandalanguage$pandac$ASTNode* $tmp1422;
    org$pandalanguage$pandac$ASTNode* $tmp1424;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1431;
    org$pandalanguage$pandac$ASTNode* $tmp1433;
    org$pandalanguage$pandac$ASTNode* $tmp1434;
    org$pandalanguage$pandac$ASTNode* $tmp1435;
    org$pandalanguage$pandac$ASTNode* $tmp1437;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1441;
    org$pandalanguage$pandac$parser$Token yields1444;
    org$pandalanguage$pandac$parser$Token$Kind $match$665_91446;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1463;
    org$pandalanguage$pandac$ASTNode* $tmp1466;
    panda$collections$Array* returnTypes1470 = NULL;
    panda$collections$Array* $tmp1471;
    panda$collections$Array* $tmp1472;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1474;
    org$pandalanguage$pandac$ASTNode* t1479 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1480;
    org$pandalanguage$pandac$ASTNode* $tmp1481;
    org$pandalanguage$pandac$ASTNode* $tmp1483;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1491;
    org$pandalanguage$pandac$ASTNode* $tmp1493;
    org$pandalanguage$pandac$ASTNode* $tmp1494;
    org$pandalanguage$pandac$ASTNode* $tmp1495;
    org$pandalanguage$pandac$ASTNode* $tmp1497;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1502;
    org$pandalanguage$pandac$ASTNode* returnType1505 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1508;
    org$pandalanguage$pandac$ASTNode* $tmp1509;
    org$pandalanguage$pandac$ASTNode* $tmp1512;
    org$pandalanguage$pandac$ASTNode* $tmp1513;
    panda$core$Object* $tmp1514;
    org$pandalanguage$pandac$ASTNode* $tmp1516;
    org$pandalanguage$pandac$ASTNode* $tmp1517;
    org$pandalanguage$pandac$ASTNode* $tmp1518;
    panda$collections$ImmutableArray* $tmp1520;
    org$pandalanguage$pandac$ASTNode* $tmp1522;
    org$pandalanguage$pandac$ASTNode* $tmp1523;
    panda$collections$ImmutableArray* $tmp1525;
    org$pandalanguage$pandac$ASTNode* $tmp1531;
    org$pandalanguage$pandac$ASTNode* $tmp1532;
    panda$collections$ImmutableArray* $tmp1534;
    int $tmp1402;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1404, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1406 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1404, &$s1405);
        start1403 = $tmp1406;
        if (((panda$core$Bit) { !start1403.nonnull }).value) {
        {
            $tmp1408 = NULL;
            $returnValue1407 = $tmp1408;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1408));
            $tmp1402 = 0;
            goto $l1400;
            $l1409:;
            return $returnValue1407;
        }
        }
        panda$collections$Array* $tmp1414 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1414);
        $tmp1413 = $tmp1414;
        $tmp1412 = $tmp1413;
        subtypes1411 = $tmp1412;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1412));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1413));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1415, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1416 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1415);
        if (((panda$core$Bit) { !$tmp1416.nonnull }).value) {
        {
            int $tmp1419;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1423 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1422 = $tmp1423;
                $tmp1421 = $tmp1422;
                t1420 = $tmp1421;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1421));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1422));
                if (((panda$core$Bit) { t1420 == NULL }).value) {
                {
                    $tmp1424 = NULL;
                    $returnValue1407 = $tmp1424;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1424));
                    $tmp1419 = 0;
                    goto $l1417;
                    $l1425:;
                    $tmp1402 = 1;
                    goto $l1400;
                    $l1426:;
                    return $returnValue1407;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1411, ((panda$core$Object*) t1420));
                $l1428:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1431, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1432 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1431);
                bool $tmp1430 = ((panda$core$Bit) { $tmp1432.nonnull }).value;
                if (!$tmp1430) goto $l1429;
                {
                    {
                        $tmp1433 = t1420;
                        org$pandalanguage$pandac$ASTNode* $tmp1436 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1435 = $tmp1436;
                        $tmp1434 = $tmp1435;
                        t1420 = $tmp1434;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1434));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1435));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
                    }
                    if (((panda$core$Bit) { t1420 == NULL }).value) {
                    {
                        $tmp1437 = NULL;
                        $returnValue1407 = $tmp1437;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1437));
                        $tmp1419 = 1;
                        goto $l1417;
                        $l1438:;
                        $tmp1402 = 2;
                        goto $l1400;
                        $l1439:;
                        return $returnValue1407;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1411, ((panda$core$Object*) t1420));
                }
                goto $l1428;
                $l1429:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1441, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1441, &$s1442);
            }
            $tmp1419 = -1;
            goto $l1417;
            $l1417:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1420));
            t1420 = NULL;
            switch ($tmp1419) {
                case 0: goto $l1425;
                case -1: goto $l1443;
                case 1: goto $l1438;
            }
            $l1443:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1445 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1444 = $tmp1445;
        {
            $match$665_91446 = yields1444.kind;
            panda$core$Bit $tmp1450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$665_91446.$rawValue, ((panda$core$Int64) { 90 }));
            bool $tmp1449 = $tmp1450.value;
            if ($tmp1449) goto $l1451;
            panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$665_91446.$rawValue, ((panda$core$Int64) { 91 }));
            $tmp1449 = $tmp1452.value;
            $l1451:;
            panda$core$Bit $tmp1453 = { $tmp1449 };
            bool $tmp1448 = $tmp1453.value;
            if ($tmp1448) goto $l1454;
            panda$core$Bit $tmp1455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$665_91446.$rawValue, ((panda$core$Int64) { 92 }));
            $tmp1448 = $tmp1455.value;
            $l1454:;
            panda$core$Bit $tmp1456 = { $tmp1448 };
            bool $tmp1447 = $tmp1456.value;
            if ($tmp1447) goto $l1457;
            panda$core$Bit $tmp1458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$665_91446.$rawValue, ((panda$core$Int64) { 93 }));
            $tmp1447 = $tmp1458.value;
            $l1457:;
            panda$core$Bit $tmp1459 = { $tmp1447 };
            if ($tmp1459.value) {
            {
                int $tmp1462;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1463, ((panda$core$Int64) { 103 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1465 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1463, &$s1464);
                    if (((panda$core$Bit) { !$tmp1465.nonnull }).value) {
                    {
                        $tmp1466 = NULL;
                        $returnValue1407 = $tmp1466;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1466));
                        $tmp1462 = 0;
                        goto $l1460;
                        $l1467:;
                        $tmp1402 = 3;
                        goto $l1400;
                        $l1468:;
                        return $returnValue1407;
                    }
                    }
                    panda$collections$Array* $tmp1473 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1473);
                    $tmp1472 = $tmp1473;
                    $tmp1471 = $tmp1472;
                    returnTypes1470 = $tmp1471;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1471));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1472));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1474, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1475 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1474);
                    if (((panda$core$Bit) { !$tmp1475.nonnull }).value) {
                    {
                        int $tmp1478;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1482 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1481 = $tmp1482;
                            $tmp1480 = $tmp1481;
                            t1479 = $tmp1480;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
                            if (((panda$core$Bit) { t1479 == NULL }).value) {
                            {
                                $tmp1483 = NULL;
                                $returnValue1407 = $tmp1483;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1483));
                                $tmp1478 = 0;
                                goto $l1476;
                                $l1484:;
                                $tmp1462 = 1;
                                goto $l1460;
                                $l1485:;
                                $tmp1402 = 4;
                                goto $l1400;
                                $l1486:;
                                return $returnValue1407;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1470, ((panda$core$Object*) t1479));
                            $l1488:;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1491, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1492 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1491);
                            bool $tmp1490 = ((panda$core$Bit) { $tmp1492.nonnull }).value;
                            if (!$tmp1490) goto $l1489;
                            {
                                {
                                    $tmp1493 = t1479;
                                    org$pandalanguage$pandac$ASTNode* $tmp1496 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1495 = $tmp1496;
                                    $tmp1494 = $tmp1495;
                                    t1479 = $tmp1494;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1494));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1495));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
                                }
                                if (((panda$core$Bit) { t1479 == NULL }).value) {
                                {
                                    $tmp1497 = NULL;
                                    $returnValue1407 = $tmp1497;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1497));
                                    $tmp1478 = 1;
                                    goto $l1476;
                                    $l1498:;
                                    $tmp1462 = 2;
                                    goto $l1460;
                                    $l1499:;
                                    $tmp1402 = 5;
                                    goto $l1400;
                                    $l1500:;
                                    return $returnValue1407;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1470, ((panda$core$Object*) t1479));
                            }
                            goto $l1488;
                            $l1489:;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1502, ((panda$core$Int64) { 104 }));
                            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1502, &$s1503);
                        }
                        $tmp1478 = -1;
                        goto $l1476;
                        $l1476:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1479));
                        t1479 = NULL;
                        switch ($tmp1478) {
                            case 1: goto $l1498;
                            case -1: goto $l1504;
                            case 0: goto $l1484;
                        }
                        $l1504:;
                    }
                    }
                    memset(&returnType1505, 0, sizeof(returnType1505));
                    panda$core$Int64 $tmp1506 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1470);
                    panda$core$Bit $tmp1507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1506, ((panda$core$Int64) { 0 }));
                    if ($tmp1507.value) {
                    {
                        {
                            $tmp1508 = returnType1505;
                            $tmp1509 = NULL;
                            returnType1505 = $tmp1509;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1509));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1510 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1470);
                    panda$core$Bit $tmp1511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1510, ((panda$core$Int64) { 1 }));
                    if ($tmp1511.value) {
                    {
                        {
                            $tmp1512 = returnType1505;
                            panda$core$Object* $tmp1515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1470, ((panda$core$Int64) { 0 }));
                            $tmp1514 = $tmp1515;
                            $tmp1513 = ((org$pandalanguage$pandac$ASTNode*) $tmp1514);
                            returnType1505 = $tmp1513;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1513));
                            panda$core$Panda$unref$panda$core$Object($tmp1514);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1512));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1516 = returnType1505;
                            org$pandalanguage$pandac$ASTNode* $tmp1519 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1521 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(returnTypes1470);
                            $tmp1520 = $tmp1521;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1519, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) start1403.value).position, $tmp1520);
                            $tmp1518 = $tmp1519;
                            $tmp1517 = $tmp1518;
                            returnType1505 = $tmp1517;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1517));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1518));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1520));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1516));
                        }
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1524 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1526 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1411);
                    $tmp1525 = $tmp1526;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1524, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) start1403.value).position, yields1444.kind, $tmp1525, returnType1505);
                    $tmp1523 = $tmp1524;
                    $tmp1522 = $tmp1523;
                    $returnValue1407 = $tmp1522;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1522));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1523));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1525));
                    $tmp1462 = 3;
                    goto $l1460;
                    $l1527:;
                    $tmp1402 = 6;
                    goto $l1400;
                    $l1528:;
                    return $returnValue1407;
                }
                $l1460:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1505));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1470));
                returnTypes1470 = NULL;
                switch ($tmp1462) {
                    case 0: goto $l1467;
                    case 3: goto $l1527;
                    case 2: goto $l1499;
                    case 1: goto $l1485;
                }
                $l1530:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1533 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$collections$ImmutableArray* $tmp1535 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1411);
                $tmp1534 = $tmp1535;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1533, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) start1403.value).position, $tmp1534);
                $tmp1532 = $tmp1533;
                $tmp1531 = $tmp1532;
                $returnValue1407 = $tmp1531;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1531));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1532));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
                $tmp1402 = 7;
                goto $l1400;
                $l1536:;
                return $returnValue1407;
            }
            }
        }
    }
    $tmp1402 = -1;
    goto $l1400;
    $l1400:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1411));
    subtypes1411 = NULL;
    switch ($tmp1402) {
        case 5: goto $l1500;
        case 2: goto $l1439;
        case -1: goto $l1538;
        case 1: goto $l1426;
        case 6: goto $l1528;
        case 3: goto $l1468;
        case 7: goto $l1536;
        case 4: goto $l1486;
        case 0: goto $l1409;
    }
    $l1538:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* $returnValue1544;
    org$pandalanguage$pandac$ASTNode* $tmp1545;
    org$pandalanguage$pandac$ASTNode* $tmp1546;
    org$pandalanguage$pandac$parser$Token$nullable start1550;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1551;
    org$pandalanguage$pandac$ASTNode* $tmp1554;
    panda$core$MutableString* name1557 = NULL;
    panda$core$MutableString* $tmp1558;
    panda$core$MutableString* $tmp1559;
    panda$core$String* $tmp1561;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1566;
    org$pandalanguage$pandac$parser$Token$nullable id1568;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1569;
    org$pandalanguage$pandac$ASTNode* $tmp1572;
    panda$core$Char8 $tmp1575;
    panda$core$String* $tmp1576;
    panda$core$String* finalName1578 = NULL;
    panda$core$String* $tmp1579;
    panda$core$String* $tmp1580;
    org$pandalanguage$pandac$ASTNode* result1582 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1583;
    org$pandalanguage$pandac$ASTNode* $tmp1584;
    panda$collections$Array* children1591 = NULL;
    panda$collections$Array* $tmp1592;
    panda$collections$Array* $tmp1593;
    org$pandalanguage$pandac$ASTNode* t1595 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1596;
    org$pandalanguage$pandac$ASTNode* $tmp1597;
    org$pandalanguage$pandac$ASTNode* $tmp1599;
    org$pandalanguage$pandac$ASTNode* $tmp1603;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1610;
    org$pandalanguage$pandac$ASTNode* $tmp1612;
    org$pandalanguage$pandac$ASTNode* $tmp1613;
    org$pandalanguage$pandac$ASTNode* $tmp1614;
    org$pandalanguage$pandac$ASTNode* $tmp1616;
    org$pandalanguage$pandac$ASTNode* $tmp1620;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1624;
    org$pandalanguage$pandac$ASTNode* $tmp1627;
    org$pandalanguage$pandac$ASTNode* $tmp1631;
    org$pandalanguage$pandac$ASTNode* $tmp1635;
    org$pandalanguage$pandac$ASTNode* $tmp1636;
    org$pandalanguage$pandac$ASTNode* $tmp1637;
    panda$collections$ImmutableArray* $tmp1639;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1642;
    org$pandalanguage$pandac$ASTNode* $tmp1644;
    org$pandalanguage$pandac$ASTNode* $tmp1645;
    org$pandalanguage$pandac$ASTNode* $tmp1646;
    org$pandalanguage$pandac$ASTNode* $tmp1648;
    int $tmp1541;
    {
        org$pandalanguage$pandac$parser$Token $tmp1542 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1542.kind.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp1543.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1547 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1546 = $tmp1547;
            $tmp1545 = $tmp1546;
            $returnValue1544 = $tmp1545;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1545));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1546));
            $tmp1541 = 0;
            goto $l1539;
            $l1548:;
            return $returnValue1544;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1551, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1553 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1551, &$s1552);
        start1550 = $tmp1553;
        if (((panda$core$Bit) { !start1550.nonnull }).value) {
        {
            $tmp1554 = NULL;
            $returnValue1544 = $tmp1554;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1554));
            $tmp1541 = 1;
            goto $l1539;
            $l1555:;
            return $returnValue1544;
        }
        }
        panda$core$MutableString* $tmp1560 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp1562 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1550.value));
        $tmp1561 = $tmp1562;
        panda$core$MutableString$init$panda$core$String($tmp1560, $tmp1561);
        $tmp1559 = $tmp1560;
        $tmp1558 = $tmp1559;
        name1557 = $tmp1558;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1558));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1559));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1561));
        $l1563:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1566, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1567 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1566);
        bool $tmp1565 = ((panda$core$Bit) { $tmp1567.nonnull }).value;
        if (!$tmp1565) goto $l1564;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1569, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1571 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1569, &$s1570);
            id1568 = $tmp1571;
            if (((panda$core$Bit) { !id1568.nonnull }).value) {
            {
                $tmp1572 = NULL;
                $returnValue1544 = $tmp1572;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1572));
                $tmp1541 = 2;
                goto $l1539;
                $l1573:;
                return $returnValue1544;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1575, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name1557, $tmp1575);
            panda$core$String* $tmp1577 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1568.value));
            $tmp1576 = $tmp1577;
            panda$core$MutableString$append$panda$core$String(name1557, $tmp1576);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1576));
        }
        goto $l1563;
        $l1564:;
        panda$core$String* $tmp1581 = panda$core$MutableString$finish$R$panda$core$String(name1557);
        $tmp1580 = $tmp1581;
        $tmp1579 = $tmp1580;
        finalName1578 = $tmp1579;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1579));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1580));
        org$pandalanguage$pandac$ASTNode* $tmp1585 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1585, ((panda$core$Int64) { 42 }), ((org$pandalanguage$pandac$parser$Token) start1550.value).position, finalName1578);
        $tmp1584 = $tmp1585;
        $tmp1583 = $tmp1584;
        result1582 = $tmp1583;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1583));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
        org$pandalanguage$pandac$parser$Token $tmp1586 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1586.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1587.value) {
        {
            int $tmp1590;
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                }
                }
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$collections$Array* $tmp1594 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1594);
                $tmp1593 = $tmp1594;
                $tmp1592 = $tmp1593;
                children1591 = $tmp1592;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1592));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1593));
                org$pandalanguage$pandac$ASTNode* $tmp1598 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                $tmp1597 = $tmp1598;
                $tmp1596 = $tmp1597;
                t1595 = $tmp1596;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1596));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1597));
                if (((panda$core$Bit) { t1595 == NULL }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1599 = result1582;
                        $returnValue1544 = $tmp1599;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1599));
                        $tmp1590 = 0;
                        goto $l1588;
                        $l1600:;
                        $tmp1541 = 3;
                        goto $l1539;
                        $l1601:;
                        return $returnValue1544;
                    }
                    }
                    $tmp1603 = NULL;
                    $returnValue1544 = $tmp1603;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1603));
                    $tmp1590 = 1;
                    goto $l1588;
                    $l1604:;
                    $tmp1541 = 4;
                    goto $l1539;
                    $l1605:;
                    return $returnValue1544;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1591, ((panda$core$Object*) t1595));
                $l1607:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1610, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1611 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1610);
                bool $tmp1609 = ((panda$core$Bit) { $tmp1611.nonnull }).value;
                if (!$tmp1609) goto $l1608;
                {
                    {
                        $tmp1612 = t1595;
                        org$pandalanguage$pandac$ASTNode* $tmp1615 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        $tmp1614 = $tmp1615;
                        $tmp1613 = $tmp1614;
                        t1595 = $tmp1613;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1613));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1614));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1612));
                    }
                    if (((panda$core$Bit) { t1595 == NULL }).value) {
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            $tmp1616 = result1582;
                            $returnValue1544 = $tmp1616;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1616));
                            $tmp1590 = 2;
                            goto $l1588;
                            $l1617:;
                            $tmp1541 = 5;
                            goto $l1539;
                            $l1618:;
                            return $returnValue1544;
                        }
                        }
                        $tmp1620 = NULL;
                        $returnValue1544 = $tmp1620;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1620));
                        $tmp1590 = 3;
                        goto $l1588;
                        $l1621:;
                        $tmp1541 = 6;
                        goto $l1539;
                        $l1622:;
                        return $returnValue1544;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children1591, ((panda$core$Object*) t1595));
                }
                goto $l1607;
                $l1608:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1624, ((panda$core$Int64) { 63 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1626 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1624, &$s1625);
                if (((panda$core$Bit) { !$tmp1626.nonnull }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1627 = result1582;
                        $returnValue1544 = $tmp1627;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1627));
                        $tmp1590 = 4;
                        goto $l1588;
                        $l1628:;
                        $tmp1541 = 7;
                        goto $l1539;
                        $l1629:;
                        return $returnValue1544;
                    }
                    }
                    $tmp1631 = NULL;
                    $returnValue1544 = $tmp1631;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1631));
                    $tmp1590 = 5;
                    goto $l1588;
                    $l1632:;
                    $tmp1541 = 8;
                    goto $l1539;
                    $l1633:;
                    return $returnValue1544;
                }
                }
                {
                    $tmp1635 = result1582;
                    org$pandalanguage$pandac$ASTNode* $tmp1638 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1640 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1591);
                    $tmp1639 = $tmp1640;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1638, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1550.value).position, finalName1578, $tmp1639);
                    $tmp1637 = $tmp1638;
                    $tmp1636 = $tmp1637;
                    result1582 = $tmp1636;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1636));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1639));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1635));
                }
                org$pandalanguage$pandac$parser$Parser$accept(self);
            }
            $tmp1590 = -1;
            goto $l1588;
            $l1588:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1595));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1591));
            children1591 = NULL;
            t1595 = NULL;
            switch ($tmp1590) {
                case 2: goto $l1617;
                case 0: goto $l1600;
                case -1: goto $l1641;
                case 4: goto $l1628;
                case 3: goto $l1621;
                case 1: goto $l1604;
                case 5: goto $l1632;
            }
            $l1641:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1642, ((panda$core$Int64) { 94 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1643 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1642);
        if (((panda$core$Bit) { $tmp1643.nonnull }).value) {
        {
            {
                $tmp1644 = result1582;
                org$pandalanguage$pandac$ASTNode* $tmp1647 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1647, ((panda$core$Int64) { 29 }), ((org$pandalanguage$pandac$parser$Token) start1550.value).position, result1582);
                $tmp1646 = $tmp1647;
                $tmp1645 = $tmp1646;
                result1582 = $tmp1645;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1645));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1646));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1644));
            }
        }
        }
        $tmp1648 = result1582;
        $returnValue1544 = $tmp1648;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1648));
        $tmp1541 = 9;
        goto $l1539;
        $l1649:;
        return $returnValue1544;
    }
    $l1539:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1582));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1578));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1557));
    name1557 = NULL;
    finalName1578 = NULL;
    result1582 = NULL;
    switch ($tmp1541) {
        case 2: goto $l1573;
        case 4: goto $l1605;
        case 8: goto $l1633;
        case 6: goto $l1622;
        case 5: goto $l1618;
        case 1: goto $l1555;
        case 3: goto $l1601;
        case 0: goto $l1548;
        case 9: goto $l1649;
        case 7: goto $l1629;
    }
    $l1651:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1655 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1656;
    org$pandalanguage$pandac$ASTNode* $tmp1657;
    org$pandalanguage$pandac$ASTNode* $returnValue1659;
    org$pandalanguage$pandac$ASTNode* $tmp1660;
    org$pandalanguage$pandac$parser$Token token1665;
    org$pandalanguage$pandac$parser$Token$Kind $match$788_131667;
    panda$core$Object* $tmp1672;
    panda$collections$Array* args1674 = NULL;
    panda$collections$Array* $tmp1675;
    panda$collections$Array* $tmp1676;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1678;
    org$pandalanguage$pandac$ASTNode* expr1683 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1684;
    org$pandalanguage$pandac$ASTNode* $tmp1685;
    panda$core$Object* $tmp1687;
    org$pandalanguage$pandac$ASTNode* $tmp1689;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1697;
    org$pandalanguage$pandac$ASTNode* $tmp1699;
    org$pandalanguage$pandac$ASTNode* $tmp1700;
    org$pandalanguage$pandac$ASTNode* $tmp1701;
    panda$core$Object* $tmp1703;
    org$pandalanguage$pandac$ASTNode* $tmp1705;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1710;
    panda$core$Object* $tmp1713;
    org$pandalanguage$pandac$ASTNode* $tmp1715;
    panda$core$Object* $tmp1721;
    org$pandalanguage$pandac$ASTNode* $tmp1723;
    org$pandalanguage$pandac$ASTNode* $tmp1724;
    org$pandalanguage$pandac$ASTNode* $tmp1725;
    panda$collections$ImmutableArray* $tmp1727;
    org$pandalanguage$pandac$ASTNode* arg1734 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1735;
    org$pandalanguage$pandac$ASTNode* $tmp1736;
    org$pandalanguage$pandac$ASTNode* $tmp1738;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1742;
    org$pandalanguage$pandac$ASTNode* $tmp1745;
    org$pandalanguage$pandac$ASTNode* $tmp1749;
    org$pandalanguage$pandac$ASTNode* $tmp1750;
    org$pandalanguage$pandac$ASTNode* $tmp1751;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1753;
    panda$core$String* name1759 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1760;
    panda$core$String* $tmp1762;
    panda$core$String* $tmp1763;
    panda$core$String* $tmp1765;
    panda$core$String* $tmp1766;
    panda$core$String* $tmp1767;
    org$pandalanguage$pandac$ASTNode* $tmp1769;
    org$pandalanguage$pandac$ASTNode* $tmp1773;
    org$pandalanguage$pandac$ASTNode* $tmp1774;
    org$pandalanguage$pandac$ASTNode* $tmp1775;
    org$pandalanguage$pandac$ASTNode* target1782 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1783;
    org$pandalanguage$pandac$ASTNode* $tmp1784;
    org$pandalanguage$pandac$ASTNode* $tmp1786;
    org$pandalanguage$pandac$ASTNode* $tmp1790;
    org$pandalanguage$pandac$ASTNode* $tmp1791;
    org$pandalanguage$pandac$ASTNode* $tmp1792;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1794;
    panda$core$String* name1800 = NULL;
    panda$core$String* $tmp1801;
    panda$core$String* $tmp1802;
    panda$collections$Array* types1807 = NULL;
    panda$collections$Array* $tmp1808;
    panda$collections$Array* $tmp1809;
    org$pandalanguage$pandac$ASTNode* t1811 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1812;
    org$pandalanguage$pandac$ASTNode* $tmp1813;
    org$pandalanguage$pandac$ASTNode* $tmp1815;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1823;
    org$pandalanguage$pandac$ASTNode* $tmp1825;
    org$pandalanguage$pandac$ASTNode* $tmp1826;
    org$pandalanguage$pandac$ASTNode* $tmp1827;
    org$pandalanguage$pandac$ASTNode* $tmp1829;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1834;
    org$pandalanguage$pandac$ASTNode* $tmp1837;
    panda$core$Bit shouldAccept1842;
    panda$core$Object* $tmp1843;
    org$pandalanguage$pandac$parser$Token$Kind $match$893_291845;
    org$pandalanguage$pandac$ASTNode* $tmp1860;
    org$pandalanguage$pandac$ASTNode* $tmp1861;
    org$pandalanguage$pandac$ASTNode* $tmp1862;
    panda$collections$ImmutableArray* $tmp1866;
    org$pandalanguage$pandac$ASTNode* $tmp1870;
    org$pandalanguage$pandac$ASTNode* $tmp1876;
    org$pandalanguage$pandac$ASTNode* $tmp1881;
    int $tmp1654;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1658 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1657 = $tmp1658;
        $tmp1656 = $tmp1657;
        result1655 = $tmp1656;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1656));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1657));
        if (((panda$core$Bit) { result1655 == NULL }).value) {
        {
            $tmp1660 = NULL;
            $returnValue1659 = $tmp1660;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1660));
            $tmp1654 = 0;
            goto $l1652;
            $l1661:;
            return $returnValue1659;
        }
        }
        $l1663:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1666 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token1665 = $tmp1666;
            {
                $match$788_131667 = token1665.kind;
                panda$core$Bit $tmp1668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$788_131667.$rawValue, ((panda$core$Int64) { 103 }));
                if ($tmp1668.value) {
                {
                    int $tmp1671;
                    {
                        panda$core$Bit$wrapper* $tmp1673;
                        $tmp1673 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp1673->value = ((panda$core$Bit) { true });
                        $tmp1672 = ((panda$core$Object*) $tmp1673);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp1672);
                        panda$core$Panda$unref$panda$core$Object($tmp1672);
                        panda$collections$Array* $tmp1677 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1677);
                        $tmp1676 = $tmp1677;
                        $tmp1675 = $tmp1676;
                        args1674 = $tmp1675;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1675));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1676));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1678, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1679 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1678);
                        if (((panda$core$Bit) { !$tmp1679.nonnull }).value) {
                        {
                            int $tmp1682;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1686 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1685 = $tmp1686;
                                $tmp1684 = $tmp1685;
                                expr1683 = $tmp1684;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1684));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1685));
                                if (((panda$core$Bit) { expr1683 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp1688 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1687 = $tmp1688;
                                    panda$core$Panda$unref$panda$core$Object($tmp1687);
                                    $tmp1689 = NULL;
                                    $returnValue1659 = $tmp1689;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1689));
                                    $tmp1682 = 0;
                                    goto $l1680;
                                    $l1690:;
                                    $tmp1671 = 0;
                                    goto $l1669;
                                    $l1691:;
                                    $tmp1654 = 1;
                                    goto $l1652;
                                    $l1692:;
                                    return $returnValue1659;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args1674, ((panda$core$Object*) expr1683));
                                $l1694:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1697, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1698 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1697);
                                bool $tmp1696 = ((panda$core$Bit) { $tmp1698.nonnull }).value;
                                if (!$tmp1696) goto $l1695;
                                {
                                    {
                                        $tmp1699 = expr1683;
                                        org$pandalanguage$pandac$ASTNode* $tmp1702 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp1701 = $tmp1702;
                                        $tmp1700 = $tmp1701;
                                        expr1683 = $tmp1700;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1700));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1701));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1699));
                                    }
                                    if (((panda$core$Bit) { expr1683 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp1704 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp1703 = $tmp1704;
                                        panda$core$Panda$unref$panda$core$Object($tmp1703);
                                        $tmp1705 = NULL;
                                        $returnValue1659 = $tmp1705;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1705));
                                        $tmp1682 = 1;
                                        goto $l1680;
                                        $l1706:;
                                        $tmp1671 = 1;
                                        goto $l1669;
                                        $l1707:;
                                        $tmp1654 = 2;
                                        goto $l1652;
                                        $l1708:;
                                        return $returnValue1659;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args1674, ((panda$core$Object*) expr1683));
                                }
                                goto $l1694;
                                $l1695:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1710, ((panda$core$Int64) { 104 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1712 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1710, &$s1711);
                                if (((panda$core$Bit) { !$tmp1712.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp1714 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1713 = $tmp1714;
                                    panda$core$Panda$unref$panda$core$Object($tmp1713);
                                    $tmp1715 = NULL;
                                    $returnValue1659 = $tmp1715;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1715));
                                    $tmp1682 = 2;
                                    goto $l1680;
                                    $l1716:;
                                    $tmp1671 = 2;
                                    goto $l1669;
                                    $l1717:;
                                    $tmp1654 = 3;
                                    goto $l1652;
                                    $l1718:;
                                    return $returnValue1659;
                                }
                                }
                            }
                            $tmp1682 = -1;
                            goto $l1680;
                            $l1680:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1683));
                            expr1683 = NULL;
                            switch ($tmp1682) {
                                case -1: goto $l1720;
                                case 0: goto $l1690;
                                case 2: goto $l1716;
                                case 1: goto $l1706;
                            }
                            $l1720:;
                        }
                        }
                        panda$core$Object* $tmp1722 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp1721 = $tmp1722;
                        panda$core$Panda$unref$panda$core$Object($tmp1721);
                        {
                            $tmp1723 = result1655;
                            org$pandalanguage$pandac$ASTNode* $tmp1726 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1728 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1674);
                            $tmp1727 = $tmp1728;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1726, ((panda$core$Int64) { 8 }), token1665.position, result1655, $tmp1727);
                            $tmp1725 = $tmp1726;
                            $tmp1724 = $tmp1725;
                            result1655 = $tmp1724;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1724));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1725));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1727));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1723));
                        }
                    }
                    $tmp1671 = -1;
                    goto $l1669;
                    $l1669:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1674));
                    args1674 = NULL;
                    switch ($tmp1671) {
                        case -1: goto $l1729;
                        case 2: goto $l1717;
                        case 0: goto $l1691;
                        case 1: goto $l1707;
                    }
                    $l1729:;
                }
                }
                else {
                panda$core$Bit $tmp1730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$788_131667.$rawValue, ((panda$core$Int64) { 101 }));
                if ($tmp1730.value) {
                {
                    int $tmp1733;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1737 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1736 = $tmp1737;
                        $tmp1735 = $tmp1736;
                        arg1734 = $tmp1735;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1735));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
                        if (((panda$core$Bit) { arg1734 == NULL }).value) {
                        {
                            $tmp1738 = NULL;
                            $returnValue1659 = $tmp1738;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1738));
                            $tmp1733 = 0;
                            goto $l1731;
                            $l1739:;
                            $tmp1654 = 4;
                            goto $l1652;
                            $l1740:;
                            return $returnValue1659;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1742, ((panda$core$Int64) { 102 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1744 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1742, &$s1743);
                        if (((panda$core$Bit) { !$tmp1744.nonnull }).value) {
                        {
                            $tmp1745 = NULL;
                            $returnValue1659 = $tmp1745;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1745));
                            $tmp1733 = 1;
                            goto $l1731;
                            $l1746:;
                            $tmp1654 = 5;
                            goto $l1652;
                            $l1747:;
                            return $returnValue1659;
                        }
                        }
                        {
                            $tmp1749 = result1655;
                            org$pandalanguage$pandac$ASTNode* $tmp1752 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1753, ((panda$core$Int64) { 101 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1752, ((panda$core$Int64) { 4 }), token1665.position, result1655, $tmp1753, arg1734);
                            $tmp1751 = $tmp1752;
                            $tmp1750 = $tmp1751;
                            result1655 = $tmp1750;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1750));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1751));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1749));
                        }
                    }
                    $tmp1733 = -1;
                    goto $l1731;
                    $l1731:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1734));
                    arg1734 = NULL;
                    switch ($tmp1733) {
                        case 1: goto $l1746;
                        case 0: goto $l1739;
                        case -1: goto $l1754;
                    }
                    $l1754:;
                }
                }
                else {
                panda$core$Bit $tmp1755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$788_131667.$rawValue, ((panda$core$Int64) { 98 }));
                if ($tmp1755.value) {
                {
                    int $tmp1758;
                    {
                        memset(&name1759, 0, sizeof(name1759));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1760, ((panda$core$Int64) { 22 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1761 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1760);
                        if (((panda$core$Bit) { $tmp1761.nonnull }).value) {
                        {
                            {
                                $tmp1762 = name1759;
                                $tmp1763 = &$s1764;
                                name1759 = $tmp1763;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1763));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1762));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp1765 = name1759;
                                panda$core$String* $tmp1768 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp1767 = $tmp1768;
                                $tmp1766 = $tmp1767;
                                name1759 = $tmp1766;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1766));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1767));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
                            }
                            if (((panda$core$Bit) { name1759 == NULL }).value) {
                            {
                                $tmp1769 = NULL;
                                $returnValue1659 = $tmp1769;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1769));
                                $tmp1758 = 0;
                                goto $l1756;
                                $l1770:;
                                $tmp1654 = 6;
                                goto $l1652;
                                $l1771:;
                                return $returnValue1659;
                            }
                            }
                        }
                        }
                        {
                            $tmp1773 = result1655;
                            org$pandalanguage$pandac$ASTNode* $tmp1776 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1776, ((panda$core$Int64) { 15 }), token1665.position, result1655, name1759);
                            $tmp1775 = $tmp1776;
                            $tmp1774 = $tmp1775;
                            result1655 = $tmp1774;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1774));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1775));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1773));
                        }
                    }
                    $tmp1758 = -1;
                    goto $l1756;
                    $l1756:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1759));
                    switch ($tmp1758) {
                        case 0: goto $l1770;
                        case -1: goto $l1777;
                    }
                    $l1777:;
                }
                }
                else {
                panda$core$Bit $tmp1778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$788_131667.$rawValue, ((panda$core$Int64) { 89 }));
                if ($tmp1778.value) {
                {
                    int $tmp1781;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1785 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1784 = $tmp1785;
                        $tmp1783 = $tmp1784;
                        target1782 = $tmp1783;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1783));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1784));
                        if (((panda$core$Bit) { target1782 == NULL }).value) {
                        {
                            $tmp1786 = NULL;
                            $returnValue1659 = $tmp1786;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1786));
                            $tmp1781 = 0;
                            goto $l1779;
                            $l1787:;
                            $tmp1654 = 7;
                            goto $l1652;
                            $l1788:;
                            return $returnValue1659;
                        }
                        }
                        {
                            $tmp1790 = result1655;
                            org$pandalanguage$pandac$ASTNode* $tmp1793 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1794, ((panda$core$Int64) { 89 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1793, ((panda$core$Int64) { 4 }), token1665.position, result1655, $tmp1794, target1782);
                            $tmp1792 = $tmp1793;
                            $tmp1791 = $tmp1792;
                            result1655 = $tmp1791;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1791));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1792));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1790));
                        }
                    }
                    $tmp1781 = -1;
                    goto $l1779;
                    $l1779:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1782));
                    target1782 = NULL;
                    switch ($tmp1781) {
                        case 0: goto $l1787;
                        case -1: goto $l1795;
                    }
                    $l1795:;
                }
                }
                else {
                panda$core$Bit $tmp1796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$788_131667.$rawValue, ((panda$core$Int64) { 62 }));
                if ($tmp1796.value) {
                {
                    int $tmp1799;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1665);
                        panda$core$String* $tmp1803 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result1655);
                        $tmp1802 = $tmp1803;
                        $tmp1801 = $tmp1802;
                        name1800 = $tmp1801;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1801));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1802));
                        if (((panda$core$Bit) { name1800 != NULL }).value) {
                        {
                            int $tmp1806;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp1810 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp1810);
                                $tmp1809 = $tmp1810;
                                $tmp1808 = $tmp1809;
                                types1807 = $tmp1808;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1808));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1809));
                                org$pandalanguage$pandac$ASTNode* $tmp1814 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                $tmp1813 = $tmp1814;
                                $tmp1812 = $tmp1813;
                                t1811 = $tmp1812;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1812));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1813));
                                if (((panda$core$Bit) { t1811 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1815 = result1655;
                                    $returnValue1659 = $tmp1815;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1815));
                                    $tmp1806 = 0;
                                    goto $l1804;
                                    $l1816:;
                                    $tmp1799 = 0;
                                    goto $l1797;
                                    $l1817:;
                                    $tmp1654 = 8;
                                    goto $l1652;
                                    $l1818:;
                                    return $returnValue1659;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types1807, ((panda$core$Object*) t1811));
                                $l1820:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1823, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1824 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1823);
                                bool $tmp1822 = ((panda$core$Bit) { $tmp1824.nonnull }).value;
                                if (!$tmp1822) goto $l1821;
                                {
                                    {
                                        $tmp1825 = t1811;
                                        org$pandalanguage$pandac$ASTNode* $tmp1828 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                        $tmp1827 = $tmp1828;
                                        $tmp1826 = $tmp1827;
                                        t1811 = $tmp1826;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1826));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1827));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1825));
                                    }
                                    if (((panda$core$Bit) { t1811 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp1829 = result1655;
                                        $returnValue1659 = $tmp1829;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1829));
                                        $tmp1806 = 1;
                                        goto $l1804;
                                        $l1830:;
                                        $tmp1799 = 1;
                                        goto $l1797;
                                        $l1831:;
                                        $tmp1654 = 9;
                                        goto $l1652;
                                        $l1832:;
                                        return $returnValue1659;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types1807, ((panda$core$Object*) t1811));
                                }
                                goto $l1820;
                                $l1821:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1834, ((panda$core$Int64) { 63 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1836 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1834, &$s1835);
                                if (((panda$core$Bit) { !$tmp1836.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1837 = result1655;
                                    $returnValue1659 = $tmp1837;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1837));
                                    $tmp1806 = 2;
                                    goto $l1804;
                                    $l1838:;
                                    $tmp1799 = 2;
                                    goto $l1797;
                                    $l1839:;
                                    $tmp1654 = 10;
                                    goto $l1652;
                                    $l1840:;
                                    return $returnValue1659;
                                }
                                }
                                memset(&shouldAccept1842, 0, sizeof(shouldAccept1842));
                                panda$core$Object* $tmp1844 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Int64) { 0 }));
                                $tmp1843 = $tmp1844;
                                panda$core$Panda$unref$panda$core$Object($tmp1843);
                                if (((panda$core$Bit$wrapper*) $tmp1843)->value.value) {
                                {
                                    {
                                        org$pandalanguage$pandac$parser$Token $tmp1846 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                                        $match$893_291845 = $tmp1846.kind;
                                        panda$core$Bit $tmp1850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$893_291845.$rawValue, ((panda$core$Int64) { 98 }));
                                        bool $tmp1849 = $tmp1850.value;
                                        if ($tmp1849) goto $l1851;
                                        panda$core$Bit $tmp1852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$893_291845.$rawValue, ((panda$core$Int64) { 103 }));
                                        $tmp1849 = $tmp1852.value;
                                        $l1851:;
                                        panda$core$Bit $tmp1853 = { $tmp1849 };
                                        bool $tmp1848 = $tmp1853.value;
                                        if ($tmp1848) goto $l1854;
                                        panda$core$Bit $tmp1855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$893_291845.$rawValue, ((panda$core$Int64) { 105 }));
                                        $tmp1848 = $tmp1855.value;
                                        $l1854:;
                                        panda$core$Bit $tmp1856 = { $tmp1848 };
                                        bool $tmp1847 = $tmp1856.value;
                                        if ($tmp1847) goto $l1857;
                                        panda$core$Bit $tmp1858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$893_291845.$rawValue, ((panda$core$Int64) { 89 }));
                                        $tmp1847 = $tmp1858.value;
                                        $l1857:;
                                        panda$core$Bit $tmp1859 = { $tmp1847 };
                                        if ($tmp1859.value) {
                                        {
                                            shouldAccept1842 = ((panda$core$Bit) { true });
                                        }
                                        }
                                        else {
                                        {
                                            shouldAccept1842 = ((panda$core$Bit) { false });
                                        }
                                        }
                                    }
                                }
                                }
                                else {
                                {
                                    shouldAccept1842 = ((panda$core$Bit) { true });
                                }
                                }
                                if (shouldAccept1842.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp1860 = result1655;
                                        org$pandalanguage$pandac$ASTNode* $tmp1863 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        org$pandalanguage$pandac$Position $tmp1865 = (($fn1864) result1655->$class->vtable[2])(result1655);
                                        panda$collections$ImmutableArray* $tmp1867 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types1807);
                                        $tmp1866 = $tmp1867;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1863, ((panda$core$Int64) { 19 }), $tmp1865, name1800, $tmp1866);
                                        $tmp1862 = $tmp1863;
                                        $tmp1861 = $tmp1862;
                                        result1655 = $tmp1861;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1861));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1862));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1866));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1860));
                                    }
                                    $tmp1806 = 3;
                                    goto $l1804;
                                    $l1868:;
                                    $tmp1799 = 3;
                                    goto $l1797;
                                    $l1869:;
                                    goto $l1663;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1870 = result1655;
                                    $returnValue1659 = $tmp1870;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1870));
                                    $tmp1806 = 4;
                                    goto $l1804;
                                    $l1871:;
                                    $tmp1799 = 4;
                                    goto $l1797;
                                    $l1872:;
                                    $tmp1654 = 11;
                                    goto $l1652;
                                    $l1873:;
                                    return $returnValue1659;
                                }
                                }
                            }
                            $tmp1806 = -1;
                            goto $l1804;
                            $l1804:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1811));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1807));
                            types1807 = NULL;
                            t1811 = NULL;
                            switch ($tmp1806) {
                                case 3: goto $l1868;
                                case 0: goto $l1816;
                                case -1: goto $l1875;
                                case 1: goto $l1830;
                                case 2: goto $l1838;
                                case 4: goto $l1871;
                            }
                            $l1875:;
                        }
                        }
                        $tmp1876 = result1655;
                        $returnValue1659 = $tmp1876;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1876));
                        $tmp1799 = 5;
                        goto $l1797;
                        $l1877:;
                        $tmp1654 = 12;
                        goto $l1652;
                        $l1878:;
                        return $returnValue1659;
                    }
                    $l1797:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1800));
                    name1800 = NULL;
                    switch ($tmp1799) {
                        case 1: goto $l1831;
                        case 0: goto $l1817;
                        case 5: goto $l1877;
                        case 4: goto $l1872;
                        case 3: goto $l1869;
                        case 2: goto $l1839;
                    }
                    $l1880:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1665);
                    $tmp1881 = result1655;
                    $returnValue1659 = $tmp1881;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1881));
                    $tmp1654 = 13;
                    goto $l1652;
                    $l1882:;
                    return $returnValue1659;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l1664:;
    }
    $tmp1654 = -1;
    goto $l1652;
    $l1652:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1655));
    result1655 = NULL;
    switch ($tmp1654) {
        case 8: goto $l1818;
        case 12: goto $l1878;
        case 13: goto $l1882;
        case 2: goto $l1708;
        case 4: goto $l1740;
        case 6: goto $l1771;
        case 3: goto $l1718;
        case 10: goto $l1840;
        case 11: goto $l1873;
        case 5: goto $l1747;
        case 9: goto $l1832;
        case 1: goto $l1692;
        case -1: goto $l1884;
        case 0: goto $l1661;
        case 7: goto $l1788;
    }
    $l1884:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1888 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1889;
    org$pandalanguage$pandac$ASTNode* $tmp1890;
    org$pandalanguage$pandac$ASTNode* $returnValue1892;
    org$pandalanguage$pandac$ASTNode* $tmp1893;
    org$pandalanguage$pandac$parser$Token$nullable op1901;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1902;
    org$pandalanguage$pandac$ASTNode* next1905 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1906;
    org$pandalanguage$pandac$ASTNode* $tmp1907;
    org$pandalanguage$pandac$ASTNode* $tmp1909;
    org$pandalanguage$pandac$ASTNode* $tmp1913;
    org$pandalanguage$pandac$ASTNode* $tmp1914;
    org$pandalanguage$pandac$ASTNode* $tmp1915;
    org$pandalanguage$pandac$ASTNode* $tmp1918;
    int $tmp1887;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1891 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1890 = $tmp1891;
        $tmp1889 = $tmp1890;
        result1888 = $tmp1889;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1889));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1890));
        if (((panda$core$Bit) { result1888 == NULL }).value) {
        {
            $tmp1893 = NULL;
            $returnValue1892 = $tmp1893;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1893));
            $tmp1887 = 0;
            goto $l1885;
            $l1894:;
            return $returnValue1892;
        }
        }
        $l1896:;
        while (true) {
        {
            int $tmp1900;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1902, ((panda$core$Int64) { 57 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1903 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1902);
                op1901 = $tmp1903;
                if (((panda$core$Bit) { !op1901.nonnull }).value) {
                {
                    $tmp1900 = 0;
                    goto $l1898;
                    $l1904:;
                    goto $l1897;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1908 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1907 = $tmp1908;
                $tmp1906 = $tmp1907;
                next1905 = $tmp1906;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1906));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1907));
                if (((panda$core$Bit) { next1905 == NULL }).value) {
                {
                    $tmp1909 = NULL;
                    $returnValue1892 = $tmp1909;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1909));
                    $tmp1900 = 1;
                    goto $l1898;
                    $l1910:;
                    $tmp1887 = 1;
                    goto $l1885;
                    $l1911:;
                    return $returnValue1892;
                }
                }
                {
                    $tmp1913 = result1888;
                    org$pandalanguage$pandac$ASTNode* $tmp1916 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1916, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op1901.value).position, result1888, ((org$pandalanguage$pandac$parser$Token) op1901.value).kind, next1905);
                    $tmp1915 = $tmp1916;
                    $tmp1914 = $tmp1915;
                    result1888 = $tmp1914;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1914));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1915));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1913));
                }
            }
            $tmp1900 = -1;
            goto $l1898;
            $l1898:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1905));
            next1905 = NULL;
            switch ($tmp1900) {
                case -1: goto $l1917;
                case 0: goto $l1904;
                case 1: goto $l1910;
            }
            $l1917:;
        }
        }
        $l1897:;
        $tmp1918 = result1888;
        $returnValue1892 = $tmp1918;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1918));
        $tmp1887 = 2;
        goto $l1885;
        $l1919:;
        return $returnValue1892;
    }
    $l1885:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1888));
    result1888 = NULL;
    switch ($tmp1887) {
        case 1: goto $l1911;
        case 2: goto $l1919;
        case 0: goto $l1894;
    }
    $l1921:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op1922;
    org$pandalanguage$pandac$parser$Token$Kind $match$949_91924;
    org$pandalanguage$pandac$ASTNode* base1937 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1938;
    org$pandalanguage$pandac$ASTNode* $tmp1939;
    org$pandalanguage$pandac$ASTNode* $returnValue1941;
    org$pandalanguage$pandac$ASTNode* $tmp1942;
    org$pandalanguage$pandac$ASTNode* $tmp1945;
    org$pandalanguage$pandac$ASTNode* $tmp1946;
    org$pandalanguage$pandac$ASTNode* $tmp1951;
    org$pandalanguage$pandac$ASTNode* $tmp1952;
    org$pandalanguage$pandac$parser$Token $tmp1923 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op1922 = $tmp1923;
    {
        $match$949_91924 = op1922.kind;
        panda$core$Bit $tmp1927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$949_91924.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp1926 = $tmp1927.value;
        if ($tmp1926) goto $l1928;
        panda$core$Bit $tmp1929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$949_91924.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp1926 = $tmp1929.value;
        $l1928:;
        panda$core$Bit $tmp1930 = { $tmp1926 };
        bool $tmp1925 = $tmp1930.value;
        if ($tmp1925) goto $l1931;
        panda$core$Bit $tmp1932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$949_91924.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp1925 = $tmp1932.value;
        $l1931:;
        panda$core$Bit $tmp1933 = { $tmp1925 };
        if ($tmp1933.value) {
        {
            int $tmp1936;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1940 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1939 = $tmp1940;
                $tmp1938 = $tmp1939;
                base1937 = $tmp1938;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1938));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1939));
                if (((panda$core$Bit) { base1937 == NULL }).value) {
                {
                    $tmp1942 = NULL;
                    $returnValue1941 = $tmp1942;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1942));
                    $tmp1936 = 0;
                    goto $l1934;
                    $l1943:;
                    return $returnValue1941;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1947 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1947, ((panda$core$Int64) { 32 }), op1922.position, op1922.kind, base1937);
                $tmp1946 = $tmp1947;
                $tmp1945 = $tmp1946;
                $returnValue1941 = $tmp1945;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1945));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1946));
                $tmp1936 = 1;
                goto $l1934;
                $l1948:;
                return $returnValue1941;
            }
            $l1934:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1937));
            base1937 = NULL;
            switch ($tmp1936) {
                case 1: goto $l1948;
                case 0: goto $l1943;
            }
            $l1950:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1922);
            org$pandalanguage$pandac$ASTNode* $tmp1953 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1952 = $tmp1953;
            $tmp1951 = $tmp1952;
            $returnValue1941 = $tmp1951;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1951));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1952));
            return $returnValue1941;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1958 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1959;
    org$pandalanguage$pandac$ASTNode* $tmp1960;
    org$pandalanguage$pandac$ASTNode* $returnValue1962;
    org$pandalanguage$pandac$ASTNode* $tmp1963;
    org$pandalanguage$pandac$parser$Token op1968;
    org$pandalanguage$pandac$parser$Token$Kind $match$975_131970;
    org$pandalanguage$pandac$ASTNode* next1999 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2000;
    org$pandalanguage$pandac$ASTNode* $tmp2001;
    org$pandalanguage$pandac$ASTNode* $tmp2003;
    org$pandalanguage$pandac$ASTNode* $tmp2007;
    org$pandalanguage$pandac$ASTNode* $tmp2008;
    org$pandalanguage$pandac$ASTNode* $tmp2009;
    org$pandalanguage$pandac$parser$Token nextToken2013;
    org$pandalanguage$pandac$ASTNode* next2019 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2020;
    org$pandalanguage$pandac$ASTNode* $tmp2021;
    org$pandalanguage$pandac$ASTNode* $tmp2023;
    org$pandalanguage$pandac$ASTNode* $tmp2027;
    org$pandalanguage$pandac$ASTNode* $tmp2028;
    org$pandalanguage$pandac$ASTNode* $tmp2029;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2031;
    org$pandalanguage$pandac$ASTNode* $tmp2033;
    org$pandalanguage$pandac$ASTNode* $tmp2036;
    int $tmp1957;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1961 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1960 = $tmp1961;
        $tmp1959 = $tmp1960;
        result1958 = $tmp1959;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1959));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1960));
        if (((panda$core$Bit) { result1958 == NULL }).value) {
        {
            $tmp1963 = NULL;
            $returnValue1962 = $tmp1963;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1963));
            $tmp1957 = 0;
            goto $l1955;
            $l1964:;
            return $returnValue1962;
        }
        }
        $l1966:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1969 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1968 = $tmp1969;
            {
                $match$975_131970 = op1968.kind;
                panda$core$Bit $tmp1977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131970.$rawValue, ((panda$core$Int64) { 53 }));
                bool $tmp1976 = $tmp1977.value;
                if ($tmp1976) goto $l1978;
                panda$core$Bit $tmp1979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131970.$rawValue, ((panda$core$Int64) { 54 }));
                $tmp1976 = $tmp1979.value;
                $l1978:;
                panda$core$Bit $tmp1980 = { $tmp1976 };
                bool $tmp1975 = $tmp1980.value;
                if ($tmp1975) goto $l1981;
                panda$core$Bit $tmp1982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131970.$rawValue, ((panda$core$Int64) { 55 }));
                $tmp1975 = $tmp1982.value;
                $l1981:;
                panda$core$Bit $tmp1983 = { $tmp1975 };
                bool $tmp1974 = $tmp1983.value;
                if ($tmp1974) goto $l1984;
                panda$core$Bit $tmp1985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131970.$rawValue, ((panda$core$Int64) { 56 }));
                $tmp1974 = $tmp1985.value;
                $l1984:;
                panda$core$Bit $tmp1986 = { $tmp1974 };
                bool $tmp1973 = $tmp1986.value;
                if ($tmp1973) goto $l1987;
                panda$core$Bit $tmp1988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131970.$rawValue, ((panda$core$Int64) { 72 }));
                $tmp1973 = $tmp1988.value;
                $l1987:;
                panda$core$Bit $tmp1989 = { $tmp1973 };
                bool $tmp1972 = $tmp1989.value;
                if ($tmp1972) goto $l1990;
                panda$core$Bit $tmp1991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131970.$rawValue, ((panda$core$Int64) { 67 }));
                $tmp1972 = $tmp1991.value;
                $l1990:;
                panda$core$Bit $tmp1992 = { $tmp1972 };
                bool $tmp1971 = $tmp1992.value;
                if ($tmp1971) goto $l1993;
                panda$core$Bit $tmp1994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131970.$rawValue, ((panda$core$Int64) { 69 }));
                $tmp1971 = $tmp1994.value;
                $l1993:;
                panda$core$Bit $tmp1995 = { $tmp1971 };
                if ($tmp1995.value) {
                {
                    int $tmp1998;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2002 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2001 = $tmp2002;
                        $tmp2000 = $tmp2001;
                        next1999 = $tmp2000;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2000));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2001));
                        if (((panda$core$Bit) { next1999 == NULL }).value) {
                        {
                            $tmp2003 = NULL;
                            $returnValue1962 = $tmp2003;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2003));
                            $tmp1998 = 0;
                            goto $l1996;
                            $l2004:;
                            $tmp1957 = 1;
                            goto $l1955;
                            $l2005:;
                            return $returnValue1962;
                        }
                        }
                        {
                            $tmp2007 = result1958;
                            org$pandalanguage$pandac$ASTNode* $tmp2010 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2010, ((panda$core$Int64) { 4 }), op1968.position, result1958, op1968.kind, next1999);
                            $tmp2009 = $tmp2010;
                            $tmp2008 = $tmp2009;
                            result1958 = $tmp2008;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2008));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2009));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2007));
                        }
                    }
                    $tmp1998 = -1;
                    goto $l1996;
                    $l1996:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1999));
                    next1999 = NULL;
                    switch ($tmp1998) {
                        case -1: goto $l2011;
                        case 0: goto $l2004;
                    }
                    $l2011:;
                }
                }
                else {
                panda$core$Bit $tmp2012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131970.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp2012.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2014 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken2013 = $tmp2014;
                    panda$core$Bit $tmp2015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken2013.kind.$rawValue, ((panda$core$Int64) { 63 }));
                    if ($tmp2015.value) {
                    {
                        int $tmp2018;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2022 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2021 = $tmp2022;
                            $tmp2020 = $tmp2021;
                            next2019 = $tmp2020;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2020));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2021));
                            if (((panda$core$Bit) { next2019 == NULL }).value) {
                            {
                                $tmp2023 = NULL;
                                $returnValue1962 = $tmp2023;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2023));
                                $tmp2018 = 0;
                                goto $l2016;
                                $l2024:;
                                $tmp1957 = 2;
                                goto $l1955;
                                $l2025:;
                                return $returnValue1962;
                            }
                            }
                            {
                                $tmp2027 = result1958;
                                org$pandalanguage$pandac$ASTNode* $tmp2030 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2031, ((panda$core$Int64) { 1 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2030, ((panda$core$Int64) { 4 }), op1968.position, result1958, $tmp2031, next2019);
                                $tmp2029 = $tmp2030;
                                $tmp2028 = $tmp2029;
                                result1958 = $tmp2028;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2028));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2029));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2027));
                            }
                        }
                        $tmp2018 = -1;
                        goto $l2016;
                        $l2016:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2019));
                        next2019 = NULL;
                        switch ($tmp2018) {
                            case -1: goto $l2032;
                            case 0: goto $l2024;
                        }
                        $l2032:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken2013);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1968);
                        $tmp2033 = result1958;
                        $returnValue1962 = $tmp2033;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2033));
                        $tmp1957 = 3;
                        goto $l1955;
                        $l2034:;
                        return $returnValue1962;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1968);
                    $tmp2036 = result1958;
                    $returnValue1962 = $tmp2036;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2036));
                    $tmp1957 = 4;
                    goto $l1955;
                    $l2037:;
                    return $returnValue1962;
                }
                }
                }
            }
        }
        }
        $l1967:;
    }
    $tmp1957 = -1;
    goto $l1955;
    $l1955:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1958));
    result1958 = NULL;
    switch ($tmp1957) {
        case 2: goto $l2025;
        case -1: goto $l2039;
        case 4: goto $l2037;
        case 1: goto $l2005;
        case 0: goto $l1964;
        case 3: goto $l2034;
    }
    $l2039:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2043 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2044;
    org$pandalanguage$pandac$ASTNode* $tmp2045;
    org$pandalanguage$pandac$ASTNode* $returnValue2047;
    org$pandalanguage$pandac$ASTNode* $tmp2048;
    org$pandalanguage$pandac$parser$Token op2053;
    org$pandalanguage$pandac$parser$Token$Kind $match$1016_132055;
    org$pandalanguage$pandac$ASTNode* next2068 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2069;
    org$pandalanguage$pandac$ASTNode* $tmp2070;
    org$pandalanguage$pandac$ASTNode* $tmp2072;
    org$pandalanguage$pandac$ASTNode* $tmp2076;
    org$pandalanguage$pandac$ASTNode* $tmp2077;
    org$pandalanguage$pandac$ASTNode* $tmp2078;
    org$pandalanguage$pandac$ASTNode* $tmp2081;
    int $tmp2042;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2046 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2045 = $tmp2046;
        $tmp2044 = $tmp2045;
        result2043 = $tmp2044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2045));
        if (((panda$core$Bit) { result2043 == NULL }).value) {
        {
            $tmp2048 = NULL;
            $returnValue2047 = $tmp2048;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2048));
            $tmp2042 = 0;
            goto $l2040;
            $l2049:;
            return $returnValue2047;
        }
        }
        $l2051:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2054 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2053 = $tmp2054;
            {
                $match$1016_132055 = op2053.kind;
                panda$core$Bit $tmp2058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1016_132055.$rawValue, ((panda$core$Int64) { 51 }));
                bool $tmp2057 = $tmp2058.value;
                if ($tmp2057) goto $l2059;
                panda$core$Bit $tmp2060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1016_132055.$rawValue, ((panda$core$Int64) { 52 }));
                $tmp2057 = $tmp2060.value;
                $l2059:;
                panda$core$Bit $tmp2061 = { $tmp2057 };
                bool $tmp2056 = $tmp2061.value;
                if ($tmp2056) goto $l2062;
                panda$core$Bit $tmp2063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1016_132055.$rawValue, ((panda$core$Int64) { 71 }));
                $tmp2056 = $tmp2063.value;
                $l2062:;
                panda$core$Bit $tmp2064 = { $tmp2056 };
                if ($tmp2064.value) {
                {
                    int $tmp2067;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2071 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2070 = $tmp2071;
                        $tmp2069 = $tmp2070;
                        next2068 = $tmp2069;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2069));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2070));
                        if (((panda$core$Bit) { next2068 == NULL }).value) {
                        {
                            $tmp2072 = NULL;
                            $returnValue2047 = $tmp2072;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2072));
                            $tmp2067 = 0;
                            goto $l2065;
                            $l2073:;
                            $tmp2042 = 1;
                            goto $l2040;
                            $l2074:;
                            return $returnValue2047;
                        }
                        }
                        {
                            $tmp2076 = result2043;
                            org$pandalanguage$pandac$ASTNode* $tmp2079 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2079, ((panda$core$Int64) { 4 }), op2053.position, result2043, op2053.kind, next2068);
                            $tmp2078 = $tmp2079;
                            $tmp2077 = $tmp2078;
                            result2043 = $tmp2077;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2077));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2078));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2076));
                        }
                    }
                    $tmp2067 = -1;
                    goto $l2065;
                    $l2065:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2068));
                    next2068 = NULL;
                    switch ($tmp2067) {
                        case -1: goto $l2080;
                        case 0: goto $l2073;
                    }
                    $l2080:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2053);
                    $tmp2081 = result2043;
                    $returnValue2047 = $tmp2081;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2081));
                    $tmp2042 = 2;
                    goto $l2040;
                    $l2082:;
                    return $returnValue2047;
                }
                }
            }
        }
        }
        $l2052:;
    }
    $tmp2042 = -1;
    goto $l2040;
    $l2040:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2043));
    result2043 = NULL;
    switch ($tmp2042) {
        case 2: goto $l2082;
        case -1: goto $l2084;
        case 1: goto $l2074;
        case 0: goto $l2049;
    }
    $l2084:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2088 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$1036_92089;
    org$pandalanguage$pandac$ASTNode* $tmp2096;
    org$pandalanguage$pandac$ASTNode* $tmp2097;
    org$pandalanguage$pandac$ASTNode* $tmp2098;
    org$pandalanguage$pandac$ASTNode* $tmp2099;
    org$pandalanguage$pandac$ASTNode* $tmp2100;
    org$pandalanguage$pandac$ASTNode* $returnValue2102;
    org$pandalanguage$pandac$ASTNode* $tmp2103;
    org$pandalanguage$pandac$parser$Token op2106;
    org$pandalanguage$pandac$parser$Token$Kind $match$1046_92108;
    org$pandalanguage$pandac$parser$Token next2117;
    org$pandalanguage$pandac$ASTNode* right2119 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2129;
    org$pandalanguage$pandac$ASTNode* $tmp2130;
    org$pandalanguage$pandac$ASTNode* $tmp2131;
    org$pandalanguage$pandac$ASTNode* $tmp2133;
    org$pandalanguage$pandac$ASTNode* $tmp2137;
    org$pandalanguage$pandac$ASTNode* $tmp2138;
    org$pandalanguage$pandac$ASTNode* step2139 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2140;
    org$pandalanguage$pandac$ASTNode* $tmp2142;
    org$pandalanguage$pandac$ASTNode* $tmp2143;
    org$pandalanguage$pandac$ASTNode* $tmp2144;
    org$pandalanguage$pandac$ASTNode* $tmp2146;
    org$pandalanguage$pandac$ASTNode* $tmp2150;
    org$pandalanguage$pandac$ASTNode* $tmp2151;
    org$pandalanguage$pandac$ASTNode* $tmp2152;
    org$pandalanguage$pandac$ASTNode* $tmp2153;
    org$pandalanguage$pandac$ASTNode* $tmp2160;
    int $tmp2087;
    {
        memset(&result2088, 0, sizeof(result2088));
        {
            org$pandalanguage$pandac$parser$Token $tmp2090 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1036_92089 = $tmp2090.kind;
            panda$core$Bit $tmp2092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1036_92089.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp2091 = $tmp2092.value;
            if ($tmp2091) goto $l2093;
            panda$core$Bit $tmp2094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1036_92089.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp2091 = $tmp2094.value;
            $l2093:;
            panda$core$Bit $tmp2095 = { $tmp2091 };
            if ($tmp2095.value) {
            {
                {
                    $tmp2096 = result2088;
                    $tmp2097 = NULL;
                    result2088 = $tmp2097;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2097));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2096));
                }
            }
            }
            else {
            {
                {
                    $tmp2098 = result2088;
                    org$pandalanguage$pandac$ASTNode* $tmp2101 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2100 = $tmp2101;
                    $tmp2099 = $tmp2100;
                    result2088 = $tmp2099;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2099));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2100));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2098));
                }
                if (((panda$core$Bit) { result2088 == NULL }).value) {
                {
                    $tmp2103 = NULL;
                    $returnValue2102 = $tmp2103;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2103));
                    $tmp2087 = 0;
                    goto $l2085;
                    $l2104:;
                    return $returnValue2102;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp2107 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op2106 = $tmp2107;
        {
            $match$1046_92108 = op2106.kind;
            panda$core$Bit $tmp2110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1046_92108.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp2109 = $tmp2110.value;
            if ($tmp2109) goto $l2111;
            panda$core$Bit $tmp2112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1046_92108.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp2109 = $tmp2112.value;
            $l2111:;
            panda$core$Bit $tmp2113 = { $tmp2109 };
            if ($tmp2113.value) {
            {
                int $tmp2116;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2118 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next2117 = $tmp2118;
                    memset(&right2119, 0, sizeof(right2119));
                    panda$core$Bit $tmp2122 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2117.kind.$rawValue, ((panda$core$Int64) { 102 }));
                    bool $tmp2121 = $tmp2122.value;
                    if (!$tmp2121) goto $l2123;
                    panda$core$Bit $tmp2124 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2117.kind.$rawValue, ((panda$core$Int64) { 104 }));
                    $tmp2121 = $tmp2124.value;
                    $l2123:;
                    panda$core$Bit $tmp2125 = { $tmp2121 };
                    bool $tmp2120 = $tmp2125.value;
                    if (!$tmp2120) goto $l2126;
                    panda$core$Bit $tmp2127 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2117.kind.$rawValue, ((panda$core$Int64) { 33 }));
                    $tmp2120 = $tmp2127.value;
                    $l2126:;
                    panda$core$Bit $tmp2128 = { $tmp2120 };
                    if ($tmp2128.value) {
                    {
                        {
                            $tmp2129 = right2119;
                            org$pandalanguage$pandac$ASTNode* $tmp2132 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2131 = $tmp2132;
                            $tmp2130 = $tmp2131;
                            right2119 = $tmp2130;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2130));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2131));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
                        }
                        if (((panda$core$Bit) { right2119 == NULL }).value) {
                        {
                            $tmp2133 = NULL;
                            $returnValue2102 = $tmp2133;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2133));
                            $tmp2116 = 0;
                            goto $l2114;
                            $l2134:;
                            $tmp2087 = 1;
                            goto $l2085;
                            $l2135:;
                            return $returnValue2102;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2137 = right2119;
                            $tmp2138 = NULL;
                            right2119 = $tmp2138;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2138));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2137));
                        }
                    }
                    }
                    memset(&step2139, 0, sizeof(step2139));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2140, ((panda$core$Int64) { 33 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2141 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2140);
                    if (((panda$core$Bit) { $tmp2141.nonnull }).value) {
                    {
                        {
                            $tmp2142 = step2139;
                            org$pandalanguage$pandac$ASTNode* $tmp2145 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2144 = $tmp2145;
                            $tmp2143 = $tmp2144;
                            step2139 = $tmp2143;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2143));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2144));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2142));
                        }
                        if (((panda$core$Bit) { step2139 == NULL }).value) {
                        {
                            $tmp2146 = NULL;
                            $returnValue2102 = $tmp2146;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2146));
                            $tmp2116 = 1;
                            goto $l2114;
                            $l2147:;
                            $tmp2087 = 2;
                            goto $l2085;
                            $l2148:;
                            return $returnValue2102;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2150 = step2139;
                            $tmp2151 = NULL;
                            step2139 = $tmp2151;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2151));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2150));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2154 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Bit $tmp2155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2106.kind.$rawValue, ((panda$core$Int64) { 96 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp2154, ((panda$core$Int64) { 33 }), op2106.position, result2088, right2119, $tmp2155, step2139);
                    $tmp2153 = $tmp2154;
                    $tmp2152 = $tmp2153;
                    $returnValue2102 = $tmp2152;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2152));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2153));
                    $tmp2116 = 2;
                    goto $l2114;
                    $l2156:;
                    $tmp2087 = 3;
                    goto $l2085;
                    $l2157:;
                    return $returnValue2102;
                }
                $l2114:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2139));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right2119));
                switch ($tmp2116) {
                    case 2: goto $l2156;
                    case 1: goto $l2147;
                    case 0: goto $l2134;
                }
                $l2159:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2106);
                $tmp2160 = result2088;
                $returnValue2102 = $tmp2160;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2160));
                $tmp2087 = 4;
                goto $l2085;
                $l2161:;
                return $returnValue2102;
            }
            }
        }
    }
    $tmp2087 = -1;
    goto $l2085;
    $l2085:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2088));
    switch ($tmp2087) {
        case -1: goto $l2163;
        case 1: goto $l2135;
        case 3: goto $l2157;
        case 2: goto $l2148;
        case 0: goto $l2104;
        case 4: goto $l2161;
    }
    $l2163:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2167 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2168;
    org$pandalanguage$pandac$ASTNode* $tmp2169;
    org$pandalanguage$pandac$ASTNode* $returnValue2171;
    org$pandalanguage$pandac$ASTNode* $tmp2172;
    org$pandalanguage$pandac$parser$Token op2177;
    org$pandalanguage$pandac$parser$Token$Kind $match$1089_132179;
    org$pandalanguage$pandac$ASTNode* next2212 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2213;
    org$pandalanguage$pandac$ASTNode* $tmp2214;
    org$pandalanguage$pandac$ASTNode* $tmp2216;
    org$pandalanguage$pandac$ASTNode* $tmp2220;
    org$pandalanguage$pandac$ASTNode* $tmp2221;
    org$pandalanguage$pandac$ASTNode* $tmp2222;
    org$pandalanguage$pandac$ASTNode* $tmp2225;
    int $tmp2166;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2170 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2169 = $tmp2170;
        $tmp2168 = $tmp2169;
        result2167 = $tmp2168;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2168));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2169));
        if (((panda$core$Bit) { result2167 == NULL }).value) {
        {
            $tmp2172 = NULL;
            $returnValue2171 = $tmp2172;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2172));
            $tmp2166 = 0;
            goto $l2164;
            $l2173:;
            return $returnValue2171;
        }
        }
        $l2175:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2178 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2177 = $tmp2178;
            {
                $match$1089_132179 = op2177.kind;
                panda$core$Bit $tmp2187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132179.$rawValue, ((panda$core$Int64) { 58 }));
                bool $tmp2186 = $tmp2187.value;
                if ($tmp2186) goto $l2188;
                panda$core$Bit $tmp2189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132179.$rawValue, ((panda$core$Int64) { 59 }));
                $tmp2186 = $tmp2189.value;
                $l2188:;
                panda$core$Bit $tmp2190 = { $tmp2186 };
                bool $tmp2185 = $tmp2190.value;
                if ($tmp2185) goto $l2191;
                panda$core$Bit $tmp2192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132179.$rawValue, ((panda$core$Int64) { 60 }));
                $tmp2185 = $tmp2192.value;
                $l2191:;
                panda$core$Bit $tmp2193 = { $tmp2185 };
                bool $tmp2184 = $tmp2193.value;
                if ($tmp2184) goto $l2194;
                panda$core$Bit $tmp2195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132179.$rawValue, ((panda$core$Int64) { 61 }));
                $tmp2184 = $tmp2195.value;
                $l2194:;
                panda$core$Bit $tmp2196 = { $tmp2184 };
                bool $tmp2183 = $tmp2196.value;
                if ($tmp2183) goto $l2197;
                panda$core$Bit $tmp2198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132179.$rawValue, ((panda$core$Int64) { 62 }));
                $tmp2183 = $tmp2198.value;
                $l2197:;
                panda$core$Bit $tmp2199 = { $tmp2183 };
                bool $tmp2182 = $tmp2199.value;
                if ($tmp2182) goto $l2200;
                panda$core$Bit $tmp2201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132179.$rawValue, ((panda$core$Int64) { 63 }));
                $tmp2182 = $tmp2201.value;
                $l2200:;
                panda$core$Bit $tmp2202 = { $tmp2182 };
                bool $tmp2181 = $tmp2202.value;
                if ($tmp2181) goto $l2203;
                panda$core$Bit $tmp2204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132179.$rawValue, ((panda$core$Int64) { 64 }));
                $tmp2181 = $tmp2204.value;
                $l2203:;
                panda$core$Bit $tmp2205 = { $tmp2181 };
                bool $tmp2180 = $tmp2205.value;
                if ($tmp2180) goto $l2206;
                panda$core$Bit $tmp2207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132179.$rawValue, ((panda$core$Int64) { 65 }));
                $tmp2180 = $tmp2207.value;
                $l2206:;
                panda$core$Bit $tmp2208 = { $tmp2180 };
                if ($tmp2208.value) {
                {
                    int $tmp2211;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2215 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2214 = $tmp2215;
                        $tmp2213 = $tmp2214;
                        next2212 = $tmp2213;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2213));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2214));
                        if (((panda$core$Bit) { next2212 == NULL }).value) {
                        {
                            $tmp2216 = NULL;
                            $returnValue2171 = $tmp2216;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2216));
                            $tmp2211 = 0;
                            goto $l2209;
                            $l2217:;
                            $tmp2166 = 1;
                            goto $l2164;
                            $l2218:;
                            return $returnValue2171;
                        }
                        }
                        {
                            $tmp2220 = result2167;
                            org$pandalanguage$pandac$ASTNode* $tmp2223 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2223, ((panda$core$Int64) { 4 }), op2177.position, result2167, op2177.kind, next2212);
                            $tmp2222 = $tmp2223;
                            $tmp2221 = $tmp2222;
                            result2167 = $tmp2221;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2221));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2222));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2220));
                        }
                    }
                    $tmp2211 = -1;
                    goto $l2209;
                    $l2209:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2212));
                    next2212 = NULL;
                    switch ($tmp2211) {
                        case 0: goto $l2217;
                        case -1: goto $l2224;
                    }
                    $l2224:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2177);
                    $tmp2225 = result2167;
                    $returnValue2171 = $tmp2225;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2225));
                    $tmp2166 = 2;
                    goto $l2164;
                    $l2226:;
                    return $returnValue2171;
                }
                }
            }
        }
        }
        $l2176:;
    }
    $tmp2166 = -1;
    goto $l2164;
    $l2164:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2167));
    result2167 = NULL;
    switch ($tmp2166) {
        case 1: goto $l2218;
        case -1: goto $l2228;
        case 2: goto $l2226;
        case 0: goto $l2173;
    }
    $l2228:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2232 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2233;
    org$pandalanguage$pandac$ASTNode* $tmp2234;
    org$pandalanguage$pandac$ASTNode* $returnValue2236;
    org$pandalanguage$pandac$ASTNode* $tmp2237;
    org$pandalanguage$pandac$parser$Token op2242;
    org$pandalanguage$pandac$parser$Token$Kind $match$1120_132244;
    org$pandalanguage$pandac$ASTNode* next2253 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2254;
    org$pandalanguage$pandac$ASTNode* $tmp2255;
    org$pandalanguage$pandac$ASTNode* $tmp2257;
    org$pandalanguage$pandac$ASTNode* $tmp2261;
    org$pandalanguage$pandac$ASTNode* $tmp2262;
    org$pandalanguage$pandac$ASTNode* $tmp2263;
    org$pandalanguage$pandac$ASTNode* $tmp2266;
    int $tmp2231;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2235 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2234 = $tmp2235;
        $tmp2233 = $tmp2234;
        result2232 = $tmp2233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2234));
        if (((panda$core$Bit) { result2232 == NULL }).value) {
        {
            $tmp2237 = NULL;
            $returnValue2236 = $tmp2237;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2237));
            $tmp2231 = 0;
            goto $l2229;
            $l2238:;
            return $returnValue2236;
        }
        }
        $l2240:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2243 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2242 = $tmp2243;
            {
                $match$1120_132244 = op2242.kind;
                panda$core$Bit $tmp2246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1120_132244.$rawValue, ((panda$core$Int64) { 66 }));
                bool $tmp2245 = $tmp2246.value;
                if ($tmp2245) goto $l2247;
                panda$core$Bit $tmp2248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1120_132244.$rawValue, ((panda$core$Int64) { 70 }));
                $tmp2245 = $tmp2248.value;
                $l2247:;
                panda$core$Bit $tmp2249 = { $tmp2245 };
                if ($tmp2249.value) {
                {
                    int $tmp2252;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2256 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2255 = $tmp2256;
                        $tmp2254 = $tmp2255;
                        next2253 = $tmp2254;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2254));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
                        if (((panda$core$Bit) { next2253 == NULL }).value) {
                        {
                            $tmp2257 = NULL;
                            $returnValue2236 = $tmp2257;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2257));
                            $tmp2252 = 0;
                            goto $l2250;
                            $l2258:;
                            $tmp2231 = 1;
                            goto $l2229;
                            $l2259:;
                            return $returnValue2236;
                        }
                        }
                        {
                            $tmp2261 = result2232;
                            org$pandalanguage$pandac$ASTNode* $tmp2264 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2264, ((panda$core$Int64) { 4 }), op2242.position, result2232, op2242.kind, next2253);
                            $tmp2263 = $tmp2264;
                            $tmp2262 = $tmp2263;
                            result2232 = $tmp2262;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2262));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2263));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2261));
                        }
                    }
                    $tmp2252 = -1;
                    goto $l2250;
                    $l2250:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2253));
                    next2253 = NULL;
                    switch ($tmp2252) {
                        case -1: goto $l2265;
                        case 0: goto $l2258;
                    }
                    $l2265:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2242);
                    $tmp2266 = result2232;
                    $returnValue2236 = $tmp2266;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2266));
                    $tmp2231 = 2;
                    goto $l2229;
                    $l2267:;
                    return $returnValue2236;
                }
                }
            }
        }
        }
        $l2241:;
    }
    $tmp2231 = -1;
    goto $l2229;
    $l2229:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2232));
    result2232 = NULL;
    switch ($tmp2231) {
        case 1: goto $l2259;
        case -1: goto $l2269;
        case 2: goto $l2267;
        case 0: goto $l2238;
    }
    $l2269:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2273 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2274;
    org$pandalanguage$pandac$ASTNode* $tmp2275;
    org$pandalanguage$pandac$ASTNode* $returnValue2277;
    org$pandalanguage$pandac$ASTNode* $tmp2278;
    org$pandalanguage$pandac$parser$Token$nullable op2286;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2287;
    org$pandalanguage$pandac$ASTNode* next2290 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2291;
    org$pandalanguage$pandac$ASTNode* $tmp2292;
    org$pandalanguage$pandac$ASTNode* $tmp2294;
    org$pandalanguage$pandac$ASTNode* $tmp2298;
    org$pandalanguage$pandac$ASTNode* $tmp2299;
    org$pandalanguage$pandac$ASTNode* $tmp2300;
    org$pandalanguage$pandac$ASTNode* $tmp2303;
    int $tmp2272;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2276 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2275 = $tmp2276;
        $tmp2274 = $tmp2275;
        result2273 = $tmp2274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2275));
        if (((panda$core$Bit) { result2273 == NULL }).value) {
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
        $l2281:;
        while (true) {
        {
            int $tmp2285;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2287, ((panda$core$Int64) { 68 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2288 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2287);
                op2286 = $tmp2288;
                if (((panda$core$Bit) { !op2286.nonnull }).value) {
                {
                    $tmp2285 = 0;
                    goto $l2283;
                    $l2289:;
                    goto $l2282;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2293 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2292 = $tmp2293;
                $tmp2291 = $tmp2292;
                next2290 = $tmp2291;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2291));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2292));
                if (((panda$core$Bit) { next2290 == NULL }).value) {
                {
                    $tmp2294 = NULL;
                    $returnValue2277 = $tmp2294;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2294));
                    $tmp2285 = 1;
                    goto $l2283;
                    $l2295:;
                    $tmp2272 = 1;
                    goto $l2270;
                    $l2296:;
                    return $returnValue2277;
                }
                }
                {
                    $tmp2298 = result2273;
                    org$pandalanguage$pandac$ASTNode* $tmp2301 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2301, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op2286.value).position, result2273, ((org$pandalanguage$pandac$parser$Token) op2286.value).kind, next2290);
                    $tmp2300 = $tmp2301;
                    $tmp2299 = $tmp2300;
                    result2273 = $tmp2299;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2299));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2300));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2298));
                }
            }
            $tmp2285 = -1;
            goto $l2283;
            $l2283:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2290));
            next2290 = NULL;
            switch ($tmp2285) {
                case -1: goto $l2302;
                case 1: goto $l2295;
                case 0: goto $l2289;
            }
            $l2302:;
        }
        }
        $l2282:;
        $tmp2303 = result2273;
        $returnValue2277 = $tmp2303;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2303));
        $tmp2272 = 2;
        goto $l2270;
        $l2304:;
        return $returnValue2277;
    }
    $l2270:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2273));
    result2273 = NULL;
    switch ($tmp2272) {
        case 2: goto $l2304;
        case 1: goto $l2296;
        case 0: goto $l2279;
    }
    $l2306:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2310;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2311;
    org$pandalanguage$pandac$ASTNode* $returnValue2314;
    org$pandalanguage$pandac$ASTNode* $tmp2315;
    org$pandalanguage$pandac$ASTNode* test2318 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2319;
    org$pandalanguage$pandac$ASTNode* $tmp2320;
    org$pandalanguage$pandac$ASTNode* $tmp2322;
    panda$collections$ImmutableArray* ifTrue2325 = NULL;
    panda$collections$ImmutableArray* $tmp2326;
    panda$collections$ImmutableArray* $tmp2327;
    org$pandalanguage$pandac$ASTNode* $tmp2329;
    org$pandalanguage$pandac$ASTNode* ifFalse2332 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2333;
    org$pandalanguage$pandac$ASTNode* $tmp2337;
    org$pandalanguage$pandac$ASTNode* $tmp2338;
    org$pandalanguage$pandac$ASTNode* $tmp2339;
    org$pandalanguage$pandac$ASTNode* $tmp2341;
    org$pandalanguage$pandac$ASTNode* $tmp2344;
    org$pandalanguage$pandac$ASTNode* $tmp2345;
    org$pandalanguage$pandac$ASTNode* $tmp2346;
    org$pandalanguage$pandac$ASTNode* $tmp2348;
    org$pandalanguage$pandac$ASTNode* $tmp2351;
    org$pandalanguage$pandac$ASTNode* $tmp2352;
    org$pandalanguage$pandac$ASTNode* $tmp2353;
    org$pandalanguage$pandac$ASTNode* $tmp2354;
    int $tmp2309;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2311, ((panda$core$Int64) { 36 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2313 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2311, &$s2312);
        start2310 = $tmp2313;
        if (((panda$core$Bit) { !start2310.nonnull }).value) {
        {
            $tmp2315 = NULL;
            $returnValue2314 = $tmp2315;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2315));
            $tmp2309 = 0;
            goto $l2307;
            $l2316:;
            return $returnValue2314;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2321 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2320 = $tmp2321;
        $tmp2319 = $tmp2320;
        test2318 = $tmp2319;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2320));
        if (((panda$core$Bit) { test2318 == NULL }).value) {
        {
            $tmp2322 = NULL;
            $returnValue2314 = $tmp2322;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2322));
            $tmp2309 = 1;
            goto $l2307;
            $l2323:;
            return $returnValue2314;
        }
        }
        panda$collections$ImmutableArray* $tmp2328 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2327 = $tmp2328;
        $tmp2326 = $tmp2327;
        ifTrue2325 = $tmp2326;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2326));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2327));
        if (((panda$core$Bit) { ifTrue2325 == NULL }).value) {
        {
            $tmp2329 = NULL;
            $returnValue2314 = $tmp2329;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2329));
            $tmp2309 = 2;
            goto $l2307;
            $l2330:;
            return $returnValue2314;
        }
        }
        memset(&ifFalse2332, 0, sizeof(ifFalse2332));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2333, ((panda$core$Int64) { 37 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2334 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2333);
        if (((panda$core$Bit) { $tmp2334.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2335 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp2336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2335.kind.$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2336.value) {
            {
                {
                    $tmp2337 = ifFalse2332;
                    org$pandalanguage$pandac$ASTNode* $tmp2340 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2339 = $tmp2340;
                    $tmp2338 = $tmp2339;
                    ifFalse2332 = $tmp2338;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2338));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2339));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2337));
                }
                if (((panda$core$Bit) { ifFalse2332 == NULL }).value) {
                {
                    $tmp2341 = NULL;
                    $returnValue2314 = $tmp2341;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2341));
                    $tmp2309 = 3;
                    goto $l2307;
                    $l2342:;
                    return $returnValue2314;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2344 = ifFalse2332;
                    org$pandalanguage$pandac$ASTNode* $tmp2347 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2346 = $tmp2347;
                    $tmp2345 = $tmp2346;
                    ifFalse2332 = $tmp2345;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2345));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2346));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2344));
                }
                if (((panda$core$Bit) { ifFalse2332 == NULL }).value) {
                {
                    $tmp2348 = NULL;
                    $returnValue2314 = $tmp2348;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2348));
                    $tmp2309 = 4;
                    goto $l2307;
                    $l2349:;
                    return $returnValue2314;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp2351 = ifFalse2332;
                $tmp2352 = NULL;
                ifFalse2332 = $tmp2352;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2352));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2351));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2355 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2355, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start2310.value).position, test2318, ifTrue2325, ifFalse2332);
        $tmp2354 = $tmp2355;
        $tmp2353 = $tmp2354;
        $returnValue2314 = $tmp2353;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2353));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2354));
        $tmp2309 = 5;
        goto $l2307;
        $l2356:;
        return $returnValue2314;
    }
    $l2307:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse2332));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue2325));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2318));
    test2318 = NULL;
    ifTrue2325 = NULL;
    switch ($tmp2309) {
        case 2: goto $l2330;
        case 4: goto $l2349;
        case 3: goto $l2342;
        case 5: goto $l2356;
        case 1: goto $l2323;
        case 0: goto $l2316;
    }
    $l2358:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp2359;
    org$pandalanguage$pandac$ASTNode* $returnValue2362;
    org$pandalanguage$pandac$ASTNode* $tmp2363;
    org$pandalanguage$pandac$ASTNode* $tmp2365;
    org$pandalanguage$pandac$ASTNode* $tmp2366;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2359, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2361 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2359, &$s2360);
    if (((panda$core$Bit) { !$tmp2361.nonnull }).value) {
    {
        $tmp2363 = NULL;
        $returnValue2362 = $tmp2363;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2363));
        return $returnValue2362;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2367 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    $tmp2366 = $tmp2367;
    $tmp2365 = $tmp2366;
    $returnValue2362 = $tmp2365;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2365));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2366));
    return $returnValue2362;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id2369;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2370;
    org$pandalanguage$pandac$ASTNode* $returnValue2373;
    org$pandalanguage$pandac$ASTNode* $tmp2374;
    org$pandalanguage$pandac$ASTNode* type2381 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2382;
    org$pandalanguage$pandac$ASTNode* $tmp2383;
    org$pandalanguage$pandac$ASTNode* $tmp2385;
    org$pandalanguage$pandac$ASTNode* $tmp2388;
    org$pandalanguage$pandac$ASTNode* $tmp2389;
    panda$core$String* $tmp2391;
    org$pandalanguage$pandac$ASTNode* $tmp2396;
    org$pandalanguage$pandac$ASTNode* $tmp2397;
    panda$core$String* $tmp2399;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2370, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2372 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2370, &$s2371);
    id2369 = $tmp2372;
    if (((panda$core$Bit) { !id2369.nonnull }).value) {
    {
        $tmp2374 = NULL;
        $returnValue2373 = $tmp2374;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2374));
        return $returnValue2373;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2376 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2376.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp2377.value) {
    {
        int $tmp2380;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2384 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2383 = $tmp2384;
            $tmp2382 = $tmp2383;
            type2381 = $tmp2382;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2382));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2383));
            if (((panda$core$Bit) { type2381 == NULL }).value) {
            {
                $tmp2385 = NULL;
                $returnValue2373 = $tmp2385;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2385));
                $tmp2380 = 0;
                goto $l2378;
                $l2386:;
                return $returnValue2373;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp2390 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp2392 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2369.value));
            $tmp2391 = $tmp2392;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2390, ((panda$core$Int64) { 44 }), ((org$pandalanguage$pandac$parser$Token) id2369.value).position, $tmp2391, type2381);
            $tmp2389 = $tmp2390;
            $tmp2388 = $tmp2389;
            $returnValue2373 = $tmp2388;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2388));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2389));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2391));
            $tmp2380 = 1;
            goto $l2378;
            $l2393:;
            return $returnValue2373;
        }
        $l2378:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type2381));
        type2381 = NULL;
        switch ($tmp2380) {
            case 1: goto $l2393;
            case 0: goto $l2386;
        }
        $l2395:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2398 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp2400 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2369.value));
    $tmp2399 = $tmp2400;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2398, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id2369.value).position, $tmp2399);
    $tmp2397 = $tmp2398;
    $tmp2396 = $tmp2397;
    $returnValue2373 = $tmp2396;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2396));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2397));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2399));
    return $returnValue2373;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2405;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2406;
    org$pandalanguage$pandac$ASTNode* $returnValue2409;
    org$pandalanguage$pandac$ASTNode* $tmp2410;
    org$pandalanguage$pandac$ASTNode* t2413 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2414;
    org$pandalanguage$pandac$ASTNode* $tmp2415;
    org$pandalanguage$pandac$ASTNode* $tmp2417;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2420;
    org$pandalanguage$pandac$ASTNode* $tmp2423;
    org$pandalanguage$pandac$ASTNode* list2426 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2427;
    org$pandalanguage$pandac$ASTNode* $tmp2428;
    org$pandalanguage$pandac$ASTNode* $tmp2430;
    panda$collections$ImmutableArray* block2433 = NULL;
    panda$collections$ImmutableArray* $tmp2434;
    panda$collections$ImmutableArray* $tmp2435;
    org$pandalanguage$pandac$ASTNode* $tmp2437;
    org$pandalanguage$pandac$ASTNode* $tmp2440;
    org$pandalanguage$pandac$ASTNode* $tmp2441;
    int $tmp2404;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2406, ((panda$core$Int64) { 32 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2408 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2406, &$s2407);
        start2405 = $tmp2408;
        if (((panda$core$Bit) { !start2405.nonnull }).value) {
        {
            $tmp2410 = NULL;
            $returnValue2409 = $tmp2410;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2410));
            $tmp2404 = 0;
            goto $l2402;
            $l2411:;
            return $returnValue2409;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2416 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2415 = $tmp2416;
        $tmp2414 = $tmp2415;
        t2413 = $tmp2414;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2414));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2415));
        if (((panda$core$Bit) { t2413 == NULL }).value) {
        {
            $tmp2417 = NULL;
            $returnValue2409 = $tmp2417;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2417));
            $tmp2404 = 1;
            goto $l2402;
            $l2418:;
            return $returnValue2409;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2420, ((panda$core$Int64) { 34 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2422 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2420, &$s2421);
        if (((panda$core$Bit) { !$tmp2422.nonnull }).value) {
        {
            $tmp2423 = NULL;
            $returnValue2409 = $tmp2423;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2423));
            $tmp2404 = 2;
            goto $l2402;
            $l2424:;
            return $returnValue2409;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2429 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2428 = $tmp2429;
        $tmp2427 = $tmp2428;
        list2426 = $tmp2427;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2427));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2428));
        if (((panda$core$Bit) { list2426 == NULL }).value) {
        {
            $tmp2430 = NULL;
            $returnValue2409 = $tmp2430;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2430));
            $tmp2404 = 3;
            goto $l2402;
            $l2431:;
            return $returnValue2409;
        }
        }
        panda$collections$ImmutableArray* $tmp2436 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2435 = $tmp2436;
        $tmp2434 = $tmp2435;
        block2433 = $tmp2434;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2434));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2435));
        if (((panda$core$Bit) { block2433 == NULL }).value) {
        {
            $tmp2437 = NULL;
            $returnValue2409 = $tmp2437;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2437));
            $tmp2404 = 4;
            goto $l2402;
            $l2438:;
            return $returnValue2409;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2442 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2442, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start2405.value).position, p_label, t2413, list2426, block2433);
        $tmp2441 = $tmp2442;
        $tmp2440 = $tmp2441;
        $returnValue2409 = $tmp2440;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2440));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2441));
        $tmp2404 = 5;
        goto $l2402;
        $l2443:;
        return $returnValue2409;
    }
    $l2402:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2433));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2426));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2413));
    t2413 = NULL;
    list2426 = NULL;
    block2433 = NULL;
    switch ($tmp2404) {
        case 2: goto $l2424;
        case 5: goto $l2443;
        case 1: goto $l2418;
        case 3: goto $l2431;
        case 0: goto $l2411;
        case 4: goto $l2438;
    }
    $l2445:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2449;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2450;
    org$pandalanguage$pandac$ASTNode* $returnValue2453;
    org$pandalanguage$pandac$ASTNode* $tmp2454;
    org$pandalanguage$pandac$ASTNode* test2457 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2458;
    org$pandalanguage$pandac$ASTNode* $tmp2459;
    org$pandalanguage$pandac$ASTNode* $tmp2461;
    panda$collections$ImmutableArray* body2464 = NULL;
    panda$collections$ImmutableArray* $tmp2465;
    panda$collections$ImmutableArray* $tmp2466;
    org$pandalanguage$pandac$ASTNode* $tmp2468;
    org$pandalanguage$pandac$ASTNode* $tmp2471;
    org$pandalanguage$pandac$ASTNode* $tmp2472;
    int $tmp2448;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2450, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2452 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2450, &$s2451);
        start2449 = $tmp2452;
        if (((panda$core$Bit) { !start2449.nonnull }).value) {
        {
            $tmp2454 = NULL;
            $returnValue2453 = $tmp2454;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2454));
            $tmp2448 = 0;
            goto $l2446;
            $l2455:;
            return $returnValue2453;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2460 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2459 = $tmp2460;
        $tmp2458 = $tmp2459;
        test2457 = $tmp2458;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2458));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2459));
        if (((panda$core$Bit) { test2457 == NULL }).value) {
        {
            $tmp2461 = NULL;
            $returnValue2453 = $tmp2461;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2461));
            $tmp2448 = 1;
            goto $l2446;
            $l2462:;
            return $returnValue2453;
        }
        }
        panda$collections$ImmutableArray* $tmp2467 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2466 = $tmp2467;
        $tmp2465 = $tmp2466;
        body2464 = $tmp2465;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2465));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2466));
        if (((panda$core$Bit) { body2464 == NULL }).value) {
        {
            $tmp2468 = NULL;
            $returnValue2453 = $tmp2468;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2468));
            $tmp2448 = 2;
            goto $l2446;
            $l2469:;
            return $returnValue2453;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2473 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2473, ((panda$core$Int64) { 49 }), ((org$pandalanguage$pandac$parser$Token) start2449.value).position, p_label, test2457, body2464);
        $tmp2472 = $tmp2473;
        $tmp2471 = $tmp2472;
        $returnValue2453 = $tmp2471;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2471));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2472));
        $tmp2448 = 3;
        goto $l2446;
        $l2474:;
        return $returnValue2453;
    }
    $l2446:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2464));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2457));
    test2457 = NULL;
    body2464 = NULL;
    switch ($tmp2448) {
        case 1: goto $l2462;
        case 3: goto $l2474;
        case 0: goto $l2455;
        case 2: goto $l2469;
    }
    $l2476:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2480;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2481;
    org$pandalanguage$pandac$ASTNode* $returnValue2484;
    org$pandalanguage$pandac$ASTNode* $tmp2485;
    panda$collections$ImmutableArray* body2488 = NULL;
    panda$collections$ImmutableArray* $tmp2489;
    panda$collections$ImmutableArray* $tmp2490;
    org$pandalanguage$pandac$ASTNode* $tmp2492;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2495;
    org$pandalanguage$pandac$ASTNode* $tmp2498;
    org$pandalanguage$pandac$ASTNode* test2501 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2502;
    org$pandalanguage$pandac$ASTNode* $tmp2503;
    org$pandalanguage$pandac$ASTNode* $tmp2505;
    org$pandalanguage$pandac$ASTNode* $tmp2508;
    org$pandalanguage$pandac$ASTNode* $tmp2509;
    int $tmp2479;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2481, ((panda$core$Int64) { 30 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2483 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2481, &$s2482);
        start2480 = $tmp2483;
        if (((panda$core$Bit) { !start2480.nonnull }).value) {
        {
            $tmp2485 = NULL;
            $returnValue2484 = $tmp2485;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2485));
            $tmp2479 = 0;
            goto $l2477;
            $l2486:;
            return $returnValue2484;
        }
        }
        panda$collections$ImmutableArray* $tmp2491 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2490 = $tmp2491;
        $tmp2489 = $tmp2490;
        body2488 = $tmp2489;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2489));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2490));
        if (((panda$core$Bit) { body2488 == NULL }).value) {
        {
            $tmp2492 = NULL;
            $returnValue2484 = $tmp2492;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2492));
            $tmp2479 = 1;
            goto $l2477;
            $l2493:;
            return $returnValue2484;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2495, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2497 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2495, &$s2496);
        if (((panda$core$Bit) { !$tmp2497.nonnull }).value) {
        {
            $tmp2498 = NULL;
            $returnValue2484 = $tmp2498;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2498));
            $tmp2479 = 2;
            goto $l2477;
            $l2499:;
            return $returnValue2484;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2504 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2503 = $tmp2504;
        $tmp2502 = $tmp2503;
        test2501 = $tmp2502;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2502));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2503));
        if (((panda$core$Bit) { test2501 == NULL }).value) {
        {
            $tmp2505 = NULL;
            $returnValue2484 = $tmp2505;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2505));
            $tmp2479 = 3;
            goto $l2477;
            $l2506:;
            return $returnValue2484;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2510 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp2510, ((panda$core$Int64) { 14 }), ((org$pandalanguage$pandac$parser$Token) start2480.value).position, p_label, body2488, test2501);
        $tmp2509 = $tmp2510;
        $tmp2508 = $tmp2509;
        $returnValue2484 = $tmp2508;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2508));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2509));
        $tmp2479 = 4;
        goto $l2477;
        $l2511:;
        return $returnValue2484;
    }
    $l2477:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2501));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2488));
    body2488 = NULL;
    test2501 = NULL;
    switch ($tmp2479) {
        case 1: goto $l2493;
        case 3: goto $l2506;
        case 0: goto $l2486;
        case 2: goto $l2499;
        case 4: goto $l2511;
    }
    $l2513:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2517;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2518;
    org$pandalanguage$pandac$ASTNode* $returnValue2521;
    org$pandalanguage$pandac$ASTNode* $tmp2522;
    panda$collections$ImmutableArray* body2525 = NULL;
    panda$collections$ImmutableArray* $tmp2526;
    panda$collections$ImmutableArray* $tmp2527;
    org$pandalanguage$pandac$ASTNode* $tmp2529;
    org$pandalanguage$pandac$ASTNode* $tmp2532;
    org$pandalanguage$pandac$ASTNode* $tmp2533;
    int $tmp2516;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2518, ((panda$core$Int64) { 35 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2520 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2518, &$s2519);
        start2517 = $tmp2520;
        if (((panda$core$Bit) { !start2517.nonnull }).value) {
        {
            $tmp2522 = NULL;
            $returnValue2521 = $tmp2522;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2522));
            $tmp2516 = 0;
            goto $l2514;
            $l2523:;
            return $returnValue2521;
        }
        }
        panda$collections$ImmutableArray* $tmp2528 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2527 = $tmp2528;
        $tmp2526 = $tmp2527;
        body2525 = $tmp2526;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2526));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2527));
        if (((panda$core$Bit) { body2525 == NULL }).value) {
        {
            $tmp2529 = NULL;
            $returnValue2521 = $tmp2529;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2529));
            $tmp2516 = 1;
            goto $l2514;
            $l2530:;
            return $returnValue2521;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2534 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2534, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start2517.value).position, p_label, body2525);
        $tmp2533 = $tmp2534;
        $tmp2532 = $tmp2533;
        $returnValue2521 = $tmp2532;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2533));
        $tmp2516 = 2;
        goto $l2514;
        $l2535:;
        return $returnValue2521;
    }
    $l2514:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2525));
    body2525 = NULL;
    switch ($tmp2516) {
        case 2: goto $l2535;
        case 1: goto $l2530;
        case 0: goto $l2523;
    }
    $l2537:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2541;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2542;
    org$pandalanguage$pandac$ASTNode* $returnValue2545;
    org$pandalanguage$pandac$ASTNode* $tmp2546;
    org$pandalanguage$pandac$ASTNode* expr2549 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2550;
    org$pandalanguage$pandac$ASTNode* $tmp2551;
    org$pandalanguage$pandac$ASTNode* $tmp2553;
    org$pandalanguage$pandac$ASTNode* message2556 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2557;
    org$pandalanguage$pandac$ASTNode* $tmp2559;
    org$pandalanguage$pandac$ASTNode* $tmp2560;
    org$pandalanguage$pandac$ASTNode* $tmp2561;
    org$pandalanguage$pandac$ASTNode* $tmp2563;
    org$pandalanguage$pandac$ASTNode* $tmp2566;
    org$pandalanguage$pandac$ASTNode* $tmp2567;
    org$pandalanguage$pandac$ASTNode* $tmp2568;
    org$pandalanguage$pandac$ASTNode* $tmp2569;
    int $tmp2540;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2542, ((panda$core$Int64) { 44 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2544 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2542, &$s2543);
        start2541 = $tmp2544;
        if (((panda$core$Bit) { !start2541.nonnull }).value) {
        {
            $tmp2546 = NULL;
            $returnValue2545 = $tmp2546;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2546));
            $tmp2540 = 0;
            goto $l2538;
            $l2547:;
            return $returnValue2545;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2552 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2551 = $tmp2552;
        $tmp2550 = $tmp2551;
        expr2549 = $tmp2550;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2550));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2551));
        if (((panda$core$Bit) { expr2549 == NULL }).value) {
        {
            $tmp2553 = NULL;
            $returnValue2545 = $tmp2553;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2553));
            $tmp2540 = 1;
            goto $l2538;
            $l2554:;
            return $returnValue2545;
        }
        }
        memset(&message2556, 0, sizeof(message2556));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2557, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2558 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2557);
        if (((panda$core$Bit) { $tmp2558.nonnull }).value) {
        {
            {
                $tmp2559 = message2556;
                org$pandalanguage$pandac$ASTNode* $tmp2562 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2561 = $tmp2562;
                $tmp2560 = $tmp2561;
                message2556 = $tmp2560;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2560));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2561));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2559));
            }
            if (((panda$core$Bit) { message2556 == NULL }).value) {
            {
                $tmp2563 = NULL;
                $returnValue2545 = $tmp2563;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2563));
                $tmp2540 = 2;
                goto $l2538;
                $l2564:;
                return $returnValue2545;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2566 = message2556;
                $tmp2567 = NULL;
                message2556 = $tmp2567;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2567));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2566));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2570 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2570, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start2541.value).position, expr2549, message2556);
        $tmp2569 = $tmp2570;
        $tmp2568 = $tmp2569;
        $returnValue2545 = $tmp2568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2569));
        $tmp2540 = 3;
        goto $l2538;
        $l2571:;
        return $returnValue2545;
    }
    $l2538:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message2556));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2549));
    expr2549 = NULL;
    switch ($tmp2540) {
        case 1: goto $l2554;
        case 2: goto $l2564;
        case 0: goto $l2547;
        case 3: goto $l2571;
    }
    $l2573:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2584;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2585;
    org$pandalanguage$pandac$ASTNode* $returnValue2588;
    org$pandalanguage$pandac$ASTNode* $tmp2589;
    panda$collections$Array* expressions2593 = NULL;
    panda$collections$Array* $tmp2594;
    panda$collections$Array* $tmp2595;
    org$pandalanguage$pandac$ASTNode* expr2597 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2598;
    org$pandalanguage$pandac$ASTNode* $tmp2599;
    org$pandalanguage$pandac$ASTNode* $tmp2601;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2608;
    org$pandalanguage$pandac$ASTNode* $tmp2610;
    org$pandalanguage$pandac$ASTNode* $tmp2611;
    org$pandalanguage$pandac$ASTNode* $tmp2612;
    org$pandalanguage$pandac$ASTNode* $tmp2614;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2618;
    org$pandalanguage$pandac$ASTNode* $tmp2621;
    panda$collections$Array* statements2625 = NULL;
    panda$collections$Array* $tmp2626;
    panda$collections$Array* $tmp2627;
    org$pandalanguage$pandac$parser$Token$Kind $match$1360_132631;
    org$pandalanguage$pandac$ASTNode* stmt2654 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2655;
    org$pandalanguage$pandac$ASTNode* $tmp2656;
    org$pandalanguage$pandac$ASTNode* $tmp2658;
    org$pandalanguage$pandac$ASTNode* stmt2668 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2669;
    org$pandalanguage$pandac$ASTNode* $tmp2670;
    org$pandalanguage$pandac$ASTNode* $tmp2672;
    org$pandalanguage$pandac$ASTNode* $tmp2678;
    org$pandalanguage$pandac$ASTNode* $tmp2679;
    panda$collections$ImmutableArray* $tmp2681;
    panda$collections$ImmutableArray* $tmp2683;
    int $tmp2576;
    {
        if (self->allowLambdas.value) goto $l2577; else goto $l2578;
        $l2578:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2579, (panda$core$Int64) { 1333 }, &$s2580);
        abort();
        $l2577:;
        int $tmp2583;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2585, ((panda$core$Int64) { 39 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2587 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2585, &$s2586);
            start2584 = $tmp2587;
            if (((panda$core$Bit) { !start2584.nonnull }).value) {
            {
                $tmp2589 = NULL;
                $returnValue2588 = $tmp2589;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2589));
                $tmp2583 = 0;
                goto $l2581;
                $l2590:;
                $tmp2576 = 0;
                goto $l2574;
                $l2591:;
                return $returnValue2588;
            }
            }
            self->allowLambdas = ((panda$core$Bit) { false });
            panda$collections$Array* $tmp2596 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2596);
            $tmp2595 = $tmp2596;
            $tmp2594 = $tmp2595;
            expressions2593 = $tmp2594;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2594));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2595));
            org$pandalanguage$pandac$ASTNode* $tmp2600 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2599 = $tmp2600;
            $tmp2598 = $tmp2599;
            expr2597 = $tmp2598;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2598));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2599));
            if (((panda$core$Bit) { expr2597 == NULL }).value) {
            {
                self->allowLambdas = ((panda$core$Bit) { true });
                $tmp2601 = NULL;
                $returnValue2588 = $tmp2601;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2601));
                $tmp2583 = 1;
                goto $l2581;
                $l2602:;
                $tmp2576 = 1;
                goto $l2574;
                $l2603:;
                return $returnValue2588;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions2593, ((panda$core$Object*) expr2597));
            $l2605:;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2608, ((panda$core$Int64) { 105 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2609 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2608);
            bool $tmp2607 = ((panda$core$Bit) { $tmp2609.nonnull }).value;
            if (!$tmp2607) goto $l2606;
            {
                {
                    $tmp2610 = expr2597;
                    org$pandalanguage$pandac$ASTNode* $tmp2613 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2612 = $tmp2613;
                    $tmp2611 = $tmp2612;
                    expr2597 = $tmp2611;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2611));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2612));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2610));
                }
                if (((panda$core$Bit) { expr2597 == NULL }).value) {
                {
                    self->allowLambdas = ((panda$core$Bit) { true });
                    $tmp2614 = NULL;
                    $returnValue2588 = $tmp2614;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2614));
                    $tmp2583 = 2;
                    goto $l2581;
                    $l2615:;
                    $tmp2576 = 2;
                    goto $l2574;
                    $l2616:;
                    return $returnValue2588;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(expressions2593, ((panda$core$Object*) expr2597));
            }
            goto $l2605;
            $l2606:;
            self->allowLambdas = ((panda$core$Bit) { true });
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2618, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2620 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2618, &$s2619);
            if (((panda$core$Bit) { !$tmp2620.nonnull }).value) {
            {
                $tmp2621 = NULL;
                $returnValue2588 = $tmp2621;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2621));
                $tmp2583 = 3;
                goto $l2581;
                $l2622:;
                $tmp2576 = 3;
                goto $l2574;
                $l2623:;
                return $returnValue2588;
            }
            }
            panda$collections$Array* $tmp2628 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2628);
            $tmp2627 = $tmp2628;
            $tmp2626 = $tmp2627;
            statements2625 = $tmp2626;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2626));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2627));
            $l2629:;
            while (true) {
            {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2632 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    $match$1360_132631 = $tmp2632.kind;
                    panda$core$Bit $tmp2635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1360_132631.$rawValue, ((panda$core$Int64) { 39 }));
                    bool $tmp2634 = $tmp2635.value;
                    if ($tmp2634) goto $l2636;
                    panda$core$Bit $tmp2637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1360_132631.$rawValue, ((panda$core$Int64) { 40 }));
                    $tmp2634 = $tmp2637.value;
                    $l2636:;
                    panda$core$Bit $tmp2638 = { $tmp2634 };
                    bool $tmp2633 = $tmp2638.value;
                    if ($tmp2633) goto $l2639;
                    panda$core$Bit $tmp2640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1360_132631.$rawValue, ((panda$core$Int64) { 100 }));
                    $tmp2633 = $tmp2640.value;
                    $l2639:;
                    panda$core$Bit $tmp2641 = { $tmp2633 };
                    if ($tmp2641.value) {
                    {
                        goto $l2630;
                    }
                    }
                    else {
                    panda$core$Bit $tmp2644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1360_132631.$rawValue, ((panda$core$Int64) { 28 }));
                    bool $tmp2643 = $tmp2644.value;
                    if ($tmp2643) goto $l2645;
                    panda$core$Bit $tmp2646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1360_132631.$rawValue, ((panda$core$Int64) { 29 }));
                    $tmp2643 = $tmp2646.value;
                    $l2645:;
                    panda$core$Bit $tmp2647 = { $tmp2643 };
                    bool $tmp2642 = $tmp2647.value;
                    if ($tmp2642) goto $l2648;
                    panda$core$Bit $tmp2649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1360_132631.$rawValue, ((panda$core$Int64) { 27 }));
                    $tmp2642 = $tmp2649.value;
                    $l2648:;
                    panda$core$Bit $tmp2650 = { $tmp2642 };
                    if ($tmp2650.value) {
                    {
                        int $tmp2653;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2657 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2656 = $tmp2657;
                            $tmp2655 = $tmp2656;
                            stmt2654 = $tmp2655;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2655));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2656));
                            if (((panda$core$Bit) { stmt2654 == NULL }).value) {
                            {
                                $tmp2658 = NULL;
                                $returnValue2588 = $tmp2658;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2658));
                                $tmp2653 = 0;
                                goto $l2651;
                                $l2659:;
                                $tmp2583 = 4;
                                goto $l2581;
                                $l2660:;
                                $tmp2576 = 4;
                                goto $l2574;
                                $l2661:;
                                return $returnValue2588;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements2625, ((panda$core$Object*) stmt2654));
                            $tmp2653 = 1;
                            goto $l2651;
                            $l2663:;
                            goto $l2630;
                        }
                        $l2651:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2654));
                        stmt2654 = NULL;
                        switch ($tmp2653) {
                            case 1: goto $l2663;
                            case 0: goto $l2659;
                        }
                        $l2664:;
                    }
                    }
                    else {
                    {
                        {
                            int $tmp2667;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp2671 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp2670 = $tmp2671;
                                $tmp2669 = $tmp2670;
                                stmt2668 = $tmp2669;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2669));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2670));
                                if (((panda$core$Bit) { stmt2668 == NULL }).value) {
                                {
                                    $tmp2672 = NULL;
                                    $returnValue2588 = $tmp2672;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2672));
                                    $tmp2667 = 0;
                                    goto $l2665;
                                    $l2673:;
                                    $tmp2583 = 5;
                                    goto $l2581;
                                    $l2674:;
                                    $tmp2576 = 5;
                                    goto $l2574;
                                    $l2675:;
                                    return $returnValue2588;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(statements2625, ((panda$core$Object*) stmt2668));
                            }
                            $tmp2667 = -1;
                            goto $l2665;
                            $l2665:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2668));
                            stmt2668 = NULL;
                            switch ($tmp2667) {
                                case -1: goto $l2677;
                                case 0: goto $l2673;
                            }
                            $l2677:;
                        }
                    }
                    }
                    }
                }
            }
            }
            $l2630:;
            org$pandalanguage$pandac$ASTNode* $tmp2680 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp2682 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions2593);
            $tmp2681 = $tmp2682;
            panda$collections$ImmutableArray* $tmp2684 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements2625);
            $tmp2683 = $tmp2684;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2680, ((panda$core$Int64) { 48 }), ((org$pandalanguage$pandac$parser$Token) start2584.value).position, $tmp2681, $tmp2683);
            $tmp2679 = $tmp2680;
            $tmp2678 = $tmp2679;
            $returnValue2588 = $tmp2678;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2678));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2679));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2683));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2681));
            $tmp2583 = 6;
            goto $l2581;
            $l2685:;
            $tmp2576 = 6;
            goto $l2574;
            $l2686:;
            return $returnValue2588;
        }
        $l2581:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2625));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2597));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions2593));
        expressions2593 = NULL;
        expr2597 = NULL;
        statements2625 = NULL;
        switch ($tmp2583) {
            case 0: goto $l2590;
            case 6: goto $l2685;
            case 1: goto $l2602;
            case 3: goto $l2622;
            case 2: goto $l2615;
            case 5: goto $l2674;
            case 4: goto $l2660;
        }
        $l2688:;
    }
    $tmp2576 = -1;
    goto $l2574;
    $l2574:;
    if (self->allowLambdas.value) goto $l2690; else goto $l2691;
    $l2691:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2692, (panda$core$Int64) { 1333 }, &$s2693);
    abort();
    $l2690:;
    switch ($tmp2576) {
        case -1: goto $l2689;
        case 3: goto $l2623;
        case 5: goto $l2675;
        case 0: goto $l2591;
        case 4: goto $l2661;
        case 6: goto $l2686;
        case 2: goto $l2616;
        case 1: goto $l2603;
    }
    $l2689:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2697;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2698;
    org$pandalanguage$pandac$ASTNode* $returnValue2701;
    org$pandalanguage$pandac$ASTNode* $tmp2702;
    org$pandalanguage$pandac$ASTNode* expr2705 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2706;
    org$pandalanguage$pandac$ASTNode* $tmp2707;
    org$pandalanguage$pandac$ASTNode* $tmp2709;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2712;
    org$pandalanguage$pandac$ASTNode* $tmp2715;
    panda$collections$Array* whens2718 = NULL;
    panda$collections$Array* $tmp2719;
    panda$collections$Array* $tmp2720;
    panda$collections$Array* other2722 = NULL;
    panda$collections$Array* $tmp2723;
    org$pandalanguage$pandac$parser$Token token2726;
    org$pandalanguage$pandac$parser$Token$Kind $match$1401_132728;
    org$pandalanguage$pandac$ASTNode* w2734 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2735;
    org$pandalanguage$pandac$ASTNode* $tmp2736;
    org$pandalanguage$pandac$ASTNode* $tmp2738;
    org$pandalanguage$pandac$parser$Token o2744;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2746;
    org$pandalanguage$pandac$ASTNode* $tmp2749;
    panda$collections$Array* $tmp2752;
    panda$collections$Array* $tmp2753;
    panda$collections$Array* $tmp2754;
    org$pandalanguage$pandac$parser$Token$Kind $match$1417_252758;
    org$pandalanguage$pandac$ASTNode* stmt2773 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2774;
    org$pandalanguage$pandac$ASTNode* $tmp2775;
    org$pandalanguage$pandac$ASTNode* $tmp2777;
    org$pandalanguage$pandac$ASTNode* stmt2786 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2787;
    org$pandalanguage$pandac$ASTNode* $tmp2788;
    org$pandalanguage$pandac$ASTNode* $tmp2790;
    panda$core$String* $tmp2795;
    panda$core$String* $tmp2797;
    panda$core$String* $tmp2798;
    panda$core$String* $tmp2800;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2806;
    org$pandalanguage$pandac$ASTNode* $tmp2809;
    org$pandalanguage$pandac$ASTNode* $tmp2812;
    org$pandalanguage$pandac$ASTNode* $tmp2813;
    panda$collections$ImmutableArray* $tmp2815;
    panda$collections$ImmutableArray* $tmp2817;
    org$pandalanguage$pandac$ASTNode* $tmp2821;
    org$pandalanguage$pandac$ASTNode* $tmp2822;
    panda$collections$ImmutableArray* $tmp2824;
    int $tmp2696;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2698, ((panda$core$Int64) { 38 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2700 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2698, &$s2699);
        start2697 = $tmp2700;
        if (((panda$core$Bit) { !start2697.nonnull }).value) {
        {
            $tmp2702 = NULL;
            $returnValue2701 = $tmp2702;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2702));
            $tmp2696 = 0;
            goto $l2694;
            $l2703:;
            return $returnValue2701;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2708 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2707 = $tmp2708;
        $tmp2706 = $tmp2707;
        expr2705 = $tmp2706;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2706));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2707));
        if (((panda$core$Bit) { expr2705 == NULL }).value) {
        {
            $tmp2709 = NULL;
            $returnValue2701 = $tmp2709;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2709));
            $tmp2696 = 1;
            goto $l2694;
            $l2710:;
            return $returnValue2701;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2712, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2714 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2712, &$s2713);
        if (((panda$core$Bit) { !$tmp2714.nonnull }).value) {
        {
            $tmp2715 = NULL;
            $returnValue2701 = $tmp2715;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2715));
            $tmp2696 = 2;
            goto $l2694;
            $l2716:;
            return $returnValue2701;
        }
        }
        panda$collections$Array* $tmp2721 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2721);
        $tmp2720 = $tmp2721;
        $tmp2719 = $tmp2720;
        whens2718 = $tmp2719;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2719));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2720));
        $tmp2723 = NULL;
        other2722 = $tmp2723;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2723));
        $l2724:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2727 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token2726 = $tmp2727;
            {
                $match$1401_132728 = token2726.kind;
                panda$core$Bit $tmp2729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1401_132728.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2729.value) {
                {
                    goto $l2725;
                }
                }
                else {
                panda$core$Bit $tmp2730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1401_132728.$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp2730.value) {
                {
                    int $tmp2733;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2737 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2736 = $tmp2737;
                        $tmp2735 = $tmp2736;
                        w2734 = $tmp2735;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2735));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2736));
                        if (((panda$core$Bit) { w2734 == NULL }).value) {
                        {
                            $tmp2738 = NULL;
                            $returnValue2701 = $tmp2738;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2738));
                            $tmp2733 = 0;
                            goto $l2731;
                            $l2739:;
                            $tmp2696 = 3;
                            goto $l2694;
                            $l2740:;
                            return $returnValue2701;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens2718, ((panda$core$Object*) w2734));
                    }
                    $tmp2733 = -1;
                    goto $l2731;
                    $l2731:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2734));
                    w2734 = NULL;
                    switch ($tmp2733) {
                        case -1: goto $l2742;
                        case 0: goto $l2739;
                    }
                    $l2742:;
                }
                }
                else {
                panda$core$Bit $tmp2743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1401_132728.$rawValue, ((panda$core$Int64) { 40 }));
                if ($tmp2743.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2745 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o2744 = $tmp2745;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2746, ((panda$core$Int64) { 95 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2748 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2746, &$s2747);
                    if (((panda$core$Bit) { !$tmp2748.nonnull }).value) {
                    {
                        $tmp2749 = NULL;
                        $returnValue2701 = $tmp2749;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2749));
                        $tmp2696 = 4;
                        goto $l2694;
                        $l2750:;
                        return $returnValue2701;
                    }
                    }
                    {
                        $tmp2752 = other2722;
                        panda$collections$Array* $tmp2755 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2755);
                        $tmp2754 = $tmp2755;
                        $tmp2753 = $tmp2754;
                        other2722 = $tmp2753;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2753));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2754));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2752));
                    }
                    $l2756:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp2759 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1417_252758 = $tmp2759.kind;
                            panda$core$Bit $tmp2760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_252758.$rawValue, ((panda$core$Int64) { 100 }));
                            if ($tmp2760.value) {
                            {
                                goto $l2757;
                            }
                            }
                            else {
                            panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_252758.$rawValue, ((panda$core$Int64) { 28 }));
                            bool $tmp2762 = $tmp2763.value;
                            if ($tmp2762) goto $l2764;
                            panda$core$Bit $tmp2765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_252758.$rawValue, ((panda$core$Int64) { 29 }));
                            $tmp2762 = $tmp2765.value;
                            $l2764:;
                            panda$core$Bit $tmp2766 = { $tmp2762 };
                            bool $tmp2761 = $tmp2766.value;
                            if ($tmp2761) goto $l2767;
                            panda$core$Bit $tmp2768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_252758.$rawValue, ((panda$core$Int64) { 27 }));
                            $tmp2761 = $tmp2768.value;
                            $l2767:;
                            panda$core$Bit $tmp2769 = { $tmp2761 };
                            if ($tmp2769.value) {
                            {
                                int $tmp2772;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2776 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2775 = $tmp2776;
                                    $tmp2774 = $tmp2775;
                                    stmt2773 = $tmp2774;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2774));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2775));
                                    if (((panda$core$Bit) { stmt2773 == NULL }).value) {
                                    {
                                        $tmp2777 = NULL;
                                        $returnValue2701 = $tmp2777;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2777));
                                        $tmp2772 = 0;
                                        goto $l2770;
                                        $l2778:;
                                        $tmp2696 = 5;
                                        goto $l2694;
                                        $l2779:;
                                        return $returnValue2701;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2722, ((panda$core$Object*) stmt2773));
                                    $tmp2772 = 1;
                                    goto $l2770;
                                    $l2781:;
                                    goto $l2757;
                                }
                                $l2770:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2773));
                                stmt2773 = NULL;
                                switch ($tmp2772) {
                                    case 1: goto $l2781;
                                    case 0: goto $l2778;
                                }
                                $l2782:;
                            }
                            }
                            else {
                            {
                                int $tmp2785;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2789 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2788 = $tmp2789;
                                    $tmp2787 = $tmp2788;
                                    stmt2786 = $tmp2787;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2787));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2788));
                                    if (((panda$core$Bit) { stmt2786 == NULL }).value) {
                                    {
                                        $tmp2790 = NULL;
                                        $returnValue2701 = $tmp2790;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2790));
                                        $tmp2785 = 0;
                                        goto $l2783;
                                        $l2791:;
                                        $tmp2696 = 6;
                                        goto $l2694;
                                        $l2792:;
                                        return $returnValue2701;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2722, ((panda$core$Object*) stmt2786));
                                }
                                $tmp2785 = -1;
                                goto $l2783;
                                $l2783:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2786));
                                stmt2786 = NULL;
                                switch ($tmp2785) {
                                    case 0: goto $l2791;
                                    case -1: goto $l2794;
                                }
                                $l2794:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l2757:;
                    goto $l2725;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp2801 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token2726);
                    $tmp2800 = $tmp2801;
                    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2799, $tmp2800);
                    $tmp2798 = $tmp2802;
                    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2798, &$s2803);
                    $tmp2797 = $tmp2804;
                    panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2796, $tmp2797);
                    $tmp2795 = $tmp2805;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token2726, $tmp2795);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2795));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2797));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2798));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2800));
                }
                }
                }
                }
            }
        }
        }
        $l2725:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2806, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2808 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2806, &$s2807);
        if (((panda$core$Bit) { !$tmp2808.nonnull }).value) {
        {
            $tmp2809 = NULL;
            $returnValue2701 = $tmp2809;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2809));
            $tmp2696 = 7;
            goto $l2694;
            $l2810:;
            return $returnValue2701;
        }
        }
        if (((panda$core$Bit) { other2722 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2814 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp2816 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2718);
            $tmp2815 = $tmp2816;
            panda$collections$ImmutableArray* $tmp2818 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other2722);
            $tmp2817 = $tmp2818;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2814, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2697.value).position, expr2705, $tmp2815, $tmp2817);
            $tmp2813 = $tmp2814;
            $tmp2812 = $tmp2813;
            $returnValue2701 = $tmp2812;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2812));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2813));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2817));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2815));
            $tmp2696 = 8;
            goto $l2694;
            $l2819:;
            return $returnValue2701;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2823 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2825 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2718);
        $tmp2824 = $tmp2825;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2823, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2697.value).position, expr2705, $tmp2824, NULL);
        $tmp2822 = $tmp2823;
        $tmp2821 = $tmp2822;
        $returnValue2701 = $tmp2821;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2821));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2822));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2824));
        $tmp2696 = 9;
        goto $l2694;
        $l2826:;
        return $returnValue2701;
    }
    $l2694:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other2722));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens2718));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2705));
    expr2705 = NULL;
    whens2718 = NULL;
    switch ($tmp2696) {
        case 2: goto $l2716;
        case 8: goto $l2819;
        case 4: goto $l2750;
        case 9: goto $l2826;
        case 7: goto $l2810;
        case 6: goto $l2792;
        case 3: goto $l2740;
        case 1: goto $l2710;
        case 0: goto $l2703;
        case 5: goto $l2779;
    }
    $l2828:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2832;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2833;
    panda$collections$ImmutableArray* $returnValue2836;
    panda$collections$ImmutableArray* $tmp2837;
    panda$collections$Array* result2840 = NULL;
    panda$collections$Array* $tmp2841;
    panda$collections$Array* $tmp2842;
    org$pandalanguage$pandac$parser$Token$Kind $match$1461_132846;
    org$pandalanguage$pandac$ASTNode* stmt2861 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2862;
    org$pandalanguage$pandac$ASTNode* $tmp2863;
    panda$collections$ImmutableArray* $tmp2865;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2869;
    panda$collections$ImmutableArray* $tmp2872;
    org$pandalanguage$pandac$ASTNode* stmt2881 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2882;
    org$pandalanguage$pandac$ASTNode* $tmp2883;
    panda$collections$ImmutableArray* $tmp2885;
    panda$collections$ImmutableArray* $tmp2890;
    panda$collections$ImmutableArray* $tmp2891;
    int $tmp2831;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2833, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2835 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2833, &$s2834);
        start2832 = $tmp2835;
        if (((panda$core$Bit) { !start2832.nonnull }).value) {
        {
            $tmp2837 = NULL;
            $returnValue2836 = $tmp2837;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2837));
            $tmp2831 = 0;
            goto $l2829;
            $l2838:;
            return $returnValue2836;
        }
        }
        panda$collections$Array* $tmp2843 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2843);
        $tmp2842 = $tmp2843;
        $tmp2841 = $tmp2842;
        result2840 = $tmp2841;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2841));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2842));
        $l2844:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2847 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1461_132846 = $tmp2847.kind;
                panda$core$Bit $tmp2848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1461_132846.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2848.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l2845;
                }
                }
                else {
                panda$core$Bit $tmp2851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1461_132846.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2850 = $tmp2851.value;
                if ($tmp2850) goto $l2852;
                panda$core$Bit $tmp2853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1461_132846.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2850 = $tmp2853.value;
                $l2852:;
                panda$core$Bit $tmp2854 = { $tmp2850 };
                bool $tmp2849 = $tmp2854.value;
                if ($tmp2849) goto $l2855;
                panda$core$Bit $tmp2856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1461_132846.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2849 = $tmp2856.value;
                $l2855:;
                panda$core$Bit $tmp2857 = { $tmp2849 };
                if ($tmp2857.value) {
                {
                    int $tmp2860;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2864 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2863 = $tmp2864;
                        $tmp2862 = $tmp2863;
                        stmt2861 = $tmp2862;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2862));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2863));
                        if (((panda$core$Bit) { stmt2861 == NULL }).value) {
                        {
                            $tmp2865 = NULL;
                            $returnValue2836 = $tmp2865;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2865));
                            $tmp2860 = 0;
                            goto $l2858;
                            $l2866:;
                            $tmp2831 = 1;
                            goto $l2829;
                            $l2867:;
                            return $returnValue2836;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2869, ((panda$core$Int64) { 100 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2871 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2869, &$s2870);
                        if (((panda$core$Bit) { !$tmp2871.nonnull }).value) {
                        {
                            $tmp2872 = NULL;
                            $returnValue2836 = $tmp2872;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2872));
                            $tmp2860 = 1;
                            goto $l2858;
                            $l2873:;
                            $tmp2831 = 2;
                            goto $l2829;
                            $l2874:;
                            return $returnValue2836;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2840, ((panda$core$Object*) stmt2861));
                        $tmp2860 = 2;
                        goto $l2858;
                        $l2876:;
                        goto $l2845;
                    }
                    $l2858:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2861));
                    stmt2861 = NULL;
                    switch ($tmp2860) {
                        case 2: goto $l2876;
                        case 0: goto $l2866;
                        case 1: goto $l2873;
                    }
                    $l2877:;
                }
                }
                else {
                {
                    int $tmp2880;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2884 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2883 = $tmp2884;
                        $tmp2882 = $tmp2883;
                        stmt2881 = $tmp2882;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2882));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2883));
                        if (((panda$core$Bit) { stmt2881 == NULL }).value) {
                        {
                            $tmp2885 = NULL;
                            $returnValue2836 = $tmp2885;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2885));
                            $tmp2880 = 0;
                            goto $l2878;
                            $l2886:;
                            $tmp2831 = 3;
                            goto $l2829;
                            $l2887:;
                            return $returnValue2836;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2840, ((panda$core$Object*) stmt2881));
                    }
                    $tmp2880 = -1;
                    goto $l2878;
                    $l2878:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2881));
                    stmt2881 = NULL;
                    switch ($tmp2880) {
                        case -1: goto $l2889;
                        case 0: goto $l2886;
                    }
                    $l2889:;
                }
                }
                }
            }
        }
        }
        $l2845:;
        panda$collections$ImmutableArray* $tmp2892 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result2840);
        $tmp2891 = $tmp2892;
        $tmp2890 = $tmp2891;
        $returnValue2836 = $tmp2890;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2890));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2891));
        $tmp2831 = 4;
        goto $l2829;
        $l2893:;
        return $returnValue2836;
    }
    $l2829:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2840));
    result2840 = NULL;
    switch ($tmp2831) {
        case 4: goto $l2893;
        case 1: goto $l2867;
        case 3: goto $l2887;
        case 2: goto $l2874;
        case 0: goto $l2838;
    }
    $l2895:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements2899 = NULL;
    panda$collections$ImmutableArray* $tmp2900;
    panda$collections$ImmutableArray* $tmp2901;
    org$pandalanguage$pandac$ASTNode* $returnValue2903;
    org$pandalanguage$pandac$ASTNode* $tmp2904;
    org$pandalanguage$pandac$ASTNode* $tmp2907;
    org$pandalanguage$pandac$ASTNode* $tmp2908;
    org$pandalanguage$pandac$Position $tmp2910;
    int $tmp2898;
    {
        panda$collections$ImmutableArray* $tmp2902 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2901 = $tmp2902;
        $tmp2900 = $tmp2901;
        statements2899 = $tmp2900;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2900));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2901));
        if (((panda$core$Bit) { statements2899 == NULL }).value) {
        {
            $tmp2904 = NULL;
            $returnValue2903 = $tmp2904;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2904));
            $tmp2898 = 0;
            goto $l2896;
            $l2905:;
            return $returnValue2903;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2909 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position$init(&$tmp2910);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2909, ((panda$core$Int64) { 6 }), $tmp2910, statements2899);
        $tmp2908 = $tmp2909;
        $tmp2907 = $tmp2908;
        $returnValue2903 = $tmp2907;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2907));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2908));
        $tmp2898 = 1;
        goto $l2896;
        $l2911:;
        return $returnValue2903;
    }
    $l2896:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2899));
    statements2899 = NULL;
    switch ($tmp2898) {
        case 1: goto $l2911;
        case 0: goto $l2905;
    }
    $l2913:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start2917 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2918;
    org$pandalanguage$pandac$ASTNode* $tmp2919;
    org$pandalanguage$pandac$ASTNode* $returnValue2921;
    org$pandalanguage$pandac$ASTNode* $tmp2922;
    org$pandalanguage$pandac$parser$Token$Kind $match$1505_92925;
    org$pandalanguage$pandac$parser$Token op2991;
    org$pandalanguage$pandac$ASTNode* rvalue2993 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2994;
    org$pandalanguage$pandac$ASTNode* $tmp2995;
    org$pandalanguage$pandac$ASTNode* $tmp2997;
    org$pandalanguage$pandac$ASTNode* $tmp3001;
    org$pandalanguage$pandac$ASTNode* $tmp3002;
    org$pandalanguage$pandac$parser$Token op3016;
    org$pandalanguage$pandac$ASTNode* rvalue3018 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3019;
    org$pandalanguage$pandac$ASTNode* $tmp3020;
    org$pandalanguage$pandac$ASTNode* $tmp3022;
    org$pandalanguage$pandac$ASTNode* $tmp3026;
    org$pandalanguage$pandac$ASTNode* $tmp3027;
    org$pandalanguage$pandac$ASTNode* $tmp3035;
    int $tmp2916;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2920 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2919 = $tmp2920;
        $tmp2918 = $tmp2919;
        start2917 = $tmp2918;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2918));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2919));
        if (((panda$core$Bit) { start2917 == NULL }).value) {
        {
            $tmp2922 = NULL;
            $returnValue2921 = $tmp2922;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2922));
            $tmp2916 = 0;
            goto $l2914;
            $l2923:;
            return $returnValue2921;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp2926 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1505_92925 = $tmp2926.kind;
            panda$core$Bit $tmp2942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 73 }));
            bool $tmp2941 = $tmp2942.value;
            if ($tmp2941) goto $l2943;
            panda$core$Bit $tmp2944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 74 }));
            $tmp2941 = $tmp2944.value;
            $l2943:;
            panda$core$Bit $tmp2945 = { $tmp2941 };
            bool $tmp2940 = $tmp2945.value;
            if ($tmp2940) goto $l2946;
            panda$core$Bit $tmp2947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 75 }));
            $tmp2940 = $tmp2947.value;
            $l2946:;
            panda$core$Bit $tmp2948 = { $tmp2940 };
            bool $tmp2939 = $tmp2948.value;
            if ($tmp2939) goto $l2949;
            panda$core$Bit $tmp2950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 76 }));
            $tmp2939 = $tmp2950.value;
            $l2949:;
            panda$core$Bit $tmp2951 = { $tmp2939 };
            bool $tmp2938 = $tmp2951.value;
            if ($tmp2938) goto $l2952;
            panda$core$Bit $tmp2953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 77 }));
            $tmp2938 = $tmp2953.value;
            $l2952:;
            panda$core$Bit $tmp2954 = { $tmp2938 };
            bool $tmp2937 = $tmp2954.value;
            if ($tmp2937) goto $l2955;
            panda$core$Bit $tmp2956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 78 }));
            $tmp2937 = $tmp2956.value;
            $l2955:;
            panda$core$Bit $tmp2957 = { $tmp2937 };
            bool $tmp2936 = $tmp2957.value;
            if ($tmp2936) goto $l2958;
            panda$core$Bit $tmp2959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 79 }));
            $tmp2936 = $tmp2959.value;
            $l2958:;
            panda$core$Bit $tmp2960 = { $tmp2936 };
            bool $tmp2935 = $tmp2960.value;
            if ($tmp2935) goto $l2961;
            panda$core$Bit $tmp2962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 80 }));
            $tmp2935 = $tmp2962.value;
            $l2961:;
            panda$core$Bit $tmp2963 = { $tmp2935 };
            bool $tmp2934 = $tmp2963.value;
            if ($tmp2934) goto $l2964;
            panda$core$Bit $tmp2965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 81 }));
            $tmp2934 = $tmp2965.value;
            $l2964:;
            panda$core$Bit $tmp2966 = { $tmp2934 };
            bool $tmp2933 = $tmp2966.value;
            if ($tmp2933) goto $l2967;
            panda$core$Bit $tmp2968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 82 }));
            $tmp2933 = $tmp2968.value;
            $l2967:;
            panda$core$Bit $tmp2969 = { $tmp2933 };
            bool $tmp2932 = $tmp2969.value;
            if ($tmp2932) goto $l2970;
            panda$core$Bit $tmp2971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 83 }));
            $tmp2932 = $tmp2971.value;
            $l2970:;
            panda$core$Bit $tmp2972 = { $tmp2932 };
            bool $tmp2931 = $tmp2972.value;
            if ($tmp2931) goto $l2973;
            panda$core$Bit $tmp2974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 84 }));
            $tmp2931 = $tmp2974.value;
            $l2973:;
            panda$core$Bit $tmp2975 = { $tmp2931 };
            bool $tmp2930 = $tmp2975.value;
            if ($tmp2930) goto $l2976;
            panda$core$Bit $tmp2977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 85 }));
            $tmp2930 = $tmp2977.value;
            $l2976:;
            panda$core$Bit $tmp2978 = { $tmp2930 };
            bool $tmp2929 = $tmp2978.value;
            if ($tmp2929) goto $l2979;
            panda$core$Bit $tmp2980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 86 }));
            $tmp2929 = $tmp2980.value;
            $l2979:;
            panda$core$Bit $tmp2981 = { $tmp2929 };
            bool $tmp2928 = $tmp2981.value;
            if ($tmp2928) goto $l2982;
            panda$core$Bit $tmp2983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 87 }));
            $tmp2928 = $tmp2983.value;
            $l2982:;
            panda$core$Bit $tmp2984 = { $tmp2928 };
            bool $tmp2927 = $tmp2984.value;
            if ($tmp2927) goto $l2985;
            panda$core$Bit $tmp2986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 88 }));
            $tmp2927 = $tmp2986.value;
            $l2985:;
            panda$core$Bit $tmp2987 = { $tmp2927 };
            if ($tmp2987.value) {
            {
                int $tmp2990;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2992 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2991 = $tmp2992;
                    org$pandalanguage$pandac$ASTNode* $tmp2996 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2995 = $tmp2996;
                    $tmp2994 = $tmp2995;
                    rvalue2993 = $tmp2994;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2994));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2995));
                    if (((panda$core$Bit) { rvalue2993 == NULL }).value) {
                    {
                        $tmp2997 = NULL;
                        $returnValue2921 = $tmp2997;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2997));
                        $tmp2990 = 0;
                        goto $l2988;
                        $l2998:;
                        $tmp2916 = 1;
                        goto $l2914;
                        $l2999:;
                        return $returnValue2921;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3003 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp3005 = (($fn3004) start2917->$class->vtable[2])(start2917);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3003, ((panda$core$Int64) { 4 }), $tmp3005, start2917, op2991.kind, rvalue2993);
                    $tmp3002 = $tmp3003;
                    $tmp3001 = $tmp3002;
                    $returnValue2921 = $tmp3001;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3001));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3002));
                    $tmp2990 = 1;
                    goto $l2988;
                    $l3006:;
                    $tmp2916 = 2;
                    goto $l2914;
                    $l3007:;
                    return $returnValue2921;
                }
                $l2988:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2993));
                rvalue2993 = NULL;
                switch ($tmp2990) {
                    case 1: goto $l3006;
                    case 0: goto $l2998;
                }
                $l3009:;
            }
            }
            else {
            panda$core$Bit $tmp3010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92925.$rawValue, ((panda$core$Int64) { 58 }));
            if ($tmp3010.value) {
            {
                int $tmp3013;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3014 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3014, &$s3015);
                    org$pandalanguage$pandac$parser$Token $tmp3017 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3016 = $tmp3017;
                    org$pandalanguage$pandac$ASTNode* $tmp3021 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3020 = $tmp3021;
                    $tmp3019 = $tmp3020;
                    rvalue3018 = $tmp3019;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3019));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3020));
                    if (((panda$core$Bit) { rvalue3018 == NULL }).value) {
                    {
                        $tmp3022 = NULL;
                        $returnValue2921 = $tmp3022;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3022));
                        $tmp3013 = 0;
                        goto $l3011;
                        $l3023:;
                        $tmp2916 = 3;
                        goto $l2914;
                        $l3024:;
                        return $returnValue2921;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3028 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp3030 = (($fn3029) start2917->$class->vtable[2])(start2917);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3028, ((panda$core$Int64) { 4 }), $tmp3030, start2917, op3016.kind, rvalue3018);
                    $tmp3027 = $tmp3028;
                    $tmp3026 = $tmp3027;
                    $returnValue2921 = $tmp3026;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3026));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3027));
                    $tmp3013 = 1;
                    goto $l3011;
                    $l3031:;
                    $tmp2916 = 4;
                    goto $l2914;
                    $l3032:;
                    return $returnValue2921;
                }
                $l3011:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3018));
                rvalue3018 = NULL;
                switch ($tmp3013) {
                    case 0: goto $l3023;
                    case 1: goto $l3031;
                }
                $l3034:;
            }
            }
            else {
            {
                $tmp3035 = start2917;
                $returnValue2921 = $tmp3035;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3035));
                $tmp2916 = 5;
                goto $l2914;
                $l3036:;
                return $returnValue2921;
            }
            }
            }
        }
    }
    $tmp2916 = -1;
    goto $l2914;
    $l2914:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2917));
    start2917 = NULL;
    switch ($tmp2916) {
        case 1: goto $l2999;
        case 3: goto $l3024;
        case 4: goto $l3032;
        case 5: goto $l3036;
        case -1: goto $l3038;
        case 0: goto $l2923;
        case 2: goto $l3007;
    }
    $l3038:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t3042 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3043;
    org$pandalanguage$pandac$ASTNode* $tmp3044;
    org$pandalanguage$pandac$ASTNode* $returnValue3046;
    org$pandalanguage$pandac$ASTNode* $tmp3047;
    org$pandalanguage$pandac$ASTNode* value3050 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3051;
    org$pandalanguage$pandac$ASTNode* $tmp3053;
    org$pandalanguage$pandac$ASTNode* $tmp3054;
    org$pandalanguage$pandac$ASTNode* $tmp3055;
    org$pandalanguage$pandac$ASTNode* $tmp3057;
    org$pandalanguage$pandac$ASTNode* $tmp3064;
    org$pandalanguage$pandac$ASTNode* $tmp3065;
    org$pandalanguage$pandac$ASTNode* $tmp3066;
    org$pandalanguage$pandac$ASTNode* $tmp3068;
    org$pandalanguage$pandac$ASTNode* $tmp3071;
    org$pandalanguage$pandac$ASTNode* $tmp3072;
    org$pandalanguage$pandac$ASTNode* $tmp3073;
    org$pandalanguage$pandac$ASTNode* $tmp3074;
    int $tmp3041;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3045 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3044 = $tmp3045;
        $tmp3043 = $tmp3044;
        t3042 = $tmp3043;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3043));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3044));
        if (((panda$core$Bit) { t3042 == NULL }).value) {
        {
            $tmp3047 = NULL;
            $returnValue3046 = $tmp3047;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3047));
            $tmp3041 = 0;
            goto $l3039;
            $l3048:;
            return $returnValue3046;
        }
        }
        memset(&value3050, 0, sizeof(value3050));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3051, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3052 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3051);
        if (((panda$core$Bit) { $tmp3052.nonnull }).value) {
        {
            {
                $tmp3053 = value3050;
                org$pandalanguage$pandac$ASTNode* $tmp3056 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3055 = $tmp3056;
                $tmp3054 = $tmp3055;
                value3050 = $tmp3054;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3054));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3055));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3053));
            }
            if (((panda$core$Bit) { value3050 == NULL }).value) {
            {
                $tmp3057 = NULL;
                $returnValue3046 = $tmp3057;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3057));
                $tmp3041 = 1;
                goto $l3039;
                $l3058:;
                return $returnValue3046;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp3060 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3060.kind.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp3061.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3062 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3062, &$s3063);
            {
                $tmp3064 = value3050;
                org$pandalanguage$pandac$ASTNode* $tmp3067 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3066 = $tmp3067;
                $tmp3065 = $tmp3066;
                value3050 = $tmp3065;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3065));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3066));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3064));
            }
            if (((panda$core$Bit) { value3050 == NULL }).value) {
            {
                $tmp3068 = NULL;
                $returnValue3046 = $tmp3068;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3068));
                $tmp3041 = 2;
                goto $l3039;
                $l3069:;
                return $returnValue3046;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3071 = value3050;
                $tmp3072 = NULL;
                value3050 = $tmp3072;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3072));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3071));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3075 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp3077 = (($fn3076) t3042->$class->vtable[2])(t3042);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3075, ((panda$core$Int64) { 13 }), $tmp3077, t3042, value3050);
        $tmp3074 = $tmp3075;
        $tmp3073 = $tmp3074;
        $returnValue3046 = $tmp3073;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3073));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3074));
        $tmp3041 = 3;
        goto $l3039;
        $l3078:;
        return $returnValue3046;
    }
    $l3039:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value3050));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3042));
    t3042 = NULL;
    switch ($tmp3041) {
        case 3: goto $l3078;
        case 2: goto $l3069;
        case 0: goto $l3048;
        case 1: goto $l3058;
    }
    $l3080:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3084;
    org$pandalanguage$pandac$Variable$Kind kind3086;
    org$pandalanguage$pandac$parser$Token$Kind $match$1564_93087;
    org$pandalanguage$pandac$Variable$Kind $tmp3089;
    org$pandalanguage$pandac$Variable$Kind $tmp3091;
    org$pandalanguage$pandac$Variable$Kind $tmp3093;
    org$pandalanguage$pandac$Variable$Kind $tmp3095;
    panda$collections$Array* declarations3097 = NULL;
    panda$collections$Array* $tmp3098;
    panda$collections$Array* $tmp3099;
    org$pandalanguage$pandac$ASTNode* decl3101 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3102;
    org$pandalanguage$pandac$ASTNode* $tmp3103;
    org$pandalanguage$pandac$ASTNode* $returnValue3105;
    org$pandalanguage$pandac$ASTNode* $tmp3106;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3112;
    org$pandalanguage$pandac$ASTNode* decl3117 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3118;
    org$pandalanguage$pandac$ASTNode* $tmp3119;
    org$pandalanguage$pandac$ASTNode* $tmp3121;
    org$pandalanguage$pandac$ASTNode* $tmp3126;
    org$pandalanguage$pandac$ASTNode* $tmp3127;
    panda$collections$ImmutableArray* $tmp3129;
    int $tmp3083;
    {
        org$pandalanguage$pandac$parser$Token $tmp3085 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start3084 = $tmp3085;
        memset(&kind3086, 0, sizeof(kind3086));
        {
            $match$1564_93087 = start3084.kind;
            panda$core$Bit $tmp3088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1564_93087.$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp3088.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3089, ((panda$core$Int64) { 0 }));
                kind3086 = $tmp3089;
            }
            }
            else {
            panda$core$Bit $tmp3090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1564_93087.$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp3090.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3091, ((panda$core$Int64) { 1 }));
                kind3086 = $tmp3091;
            }
            }
            else {
            panda$core$Bit $tmp3092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1564_93087.$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp3092.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3093, ((panda$core$Int64) { 3 }));
                kind3086 = $tmp3093;
            }
            }
            else {
            panda$core$Bit $tmp3094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1564_93087.$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp3094.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3095, ((panda$core$Int64) { 2 }));
                kind3086 = $tmp3095;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start3084, &$s3096);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp3100 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3100);
        $tmp3099 = $tmp3100;
        $tmp3098 = $tmp3099;
        declarations3097 = $tmp3098;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3098));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3099));
        org$pandalanguage$pandac$ASTNode* $tmp3104 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3103 = $tmp3104;
        $tmp3102 = $tmp3103;
        decl3101 = $tmp3102;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3102));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3103));
        if (((panda$core$Bit) { decl3101 == NULL }).value) {
        {
            $tmp3106 = NULL;
            $returnValue3105 = $tmp3106;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3106));
            $tmp3083 = 0;
            goto $l3081;
            $l3107:;
            return $returnValue3105;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations3097, ((panda$core$Object*) decl3101));
        $l3109:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3112, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3113 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3112);
        bool $tmp3111 = ((panda$core$Bit) { $tmp3113.nonnull }).value;
        if (!$tmp3111) goto $l3110;
        {
            int $tmp3116;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3120 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3119 = $tmp3120;
                $tmp3118 = $tmp3119;
                decl3117 = $tmp3118;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3119));
                if (((panda$core$Bit) { decl3117 == NULL }).value) {
                {
                    $tmp3121 = NULL;
                    $returnValue3105 = $tmp3121;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3121));
                    $tmp3116 = 0;
                    goto $l3114;
                    $l3122:;
                    $tmp3083 = 1;
                    goto $l3081;
                    $l3123:;
                    return $returnValue3105;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations3097, ((panda$core$Object*) decl3117));
            }
            $tmp3116 = -1;
            goto $l3114;
            $l3114:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3117));
            decl3117 = NULL;
            switch ($tmp3116) {
                case -1: goto $l3125;
                case 0: goto $l3122;
            }
            $l3125:;
        }
        goto $l3109;
        $l3110:;
        org$pandalanguage$pandac$ASTNode* $tmp3128 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp3130 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations3097);
        $tmp3129 = $tmp3130;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3128, ((panda$core$Int64) { 47 }), start3084.position, kind3086, $tmp3129);
        $tmp3127 = $tmp3128;
        $tmp3126 = $tmp3127;
        $returnValue3105 = $tmp3126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3129));
        $tmp3083 = 2;
        goto $l3081;
        $l3131:;
        return $returnValue3105;
    }
    $l3081:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3101));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations3097));
    declarations3097 = NULL;
    decl3101 = NULL;
    switch ($tmp3083) {
        case 1: goto $l3123;
        case 2: goto $l3131;
        case 0: goto $l3107;
    }
    $l3133:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3137;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3138;
    org$pandalanguage$pandac$ASTNode* $returnValue3141;
    org$pandalanguage$pandac$ASTNode* $tmp3142;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3145;
    org$pandalanguage$pandac$ASTNode* $tmp3148;
    panda$core$Object* $tmp3151;
    org$pandalanguage$pandac$ASTNode* target3153 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3154;
    org$pandalanguage$pandac$ASTNode* $tmp3155;
    panda$core$String* $tmp3157;
    panda$collections$Array* args3159 = NULL;
    panda$collections$Array* $tmp3160;
    panda$collections$Array* $tmp3161;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3163;
    org$pandalanguage$pandac$ASTNode* expr3168 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3169;
    org$pandalanguage$pandac$ASTNode* $tmp3170;
    panda$core$Object* $tmp3172;
    org$pandalanguage$pandac$ASTNode* $tmp3174;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3181;
    org$pandalanguage$pandac$ASTNode* $tmp3183;
    org$pandalanguage$pandac$ASTNode* $tmp3184;
    org$pandalanguage$pandac$ASTNode* $tmp3185;
    panda$core$Object* $tmp3187;
    org$pandalanguage$pandac$ASTNode* $tmp3189;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3193;
    panda$core$Object* $tmp3196;
    org$pandalanguage$pandac$ASTNode* $tmp3198;
    panda$core$Object* $tmp3203;
    org$pandalanguage$pandac$ASTNode* $tmp3205;
    org$pandalanguage$pandac$ASTNode* $tmp3206;
    panda$collections$ImmutableArray* $tmp3208;
    int $tmp3136;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3138, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3140 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3138, &$s3139);
        start3137 = $tmp3140;
        if (((panda$core$Bit) { !start3137.nonnull }).value) {
        {
            $tmp3142 = NULL;
            $returnValue3141 = $tmp3142;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3142));
            $tmp3136 = 0;
            goto $l3134;
            $l3143:;
            return $returnValue3141;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3145, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3147 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3145, &$s3146);
        if (((panda$core$Bit) { !$tmp3147.nonnull }).value) {
        {
            $tmp3148 = NULL;
            $returnValue3141 = $tmp3148;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3148));
            $tmp3136 = 1;
            goto $l3134;
            $l3149:;
            return $returnValue3141;
        }
        }
        panda$core$Bit$wrapper* $tmp3152;
        $tmp3152 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp3152->value = ((panda$core$Bit) { true });
        $tmp3151 = ((panda$core$Object*) $tmp3152);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp3151);
        panda$core$Panda$unref$panda$core$Object($tmp3151);
        org$pandalanguage$pandac$ASTNode* $tmp3156 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3158 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3137.value));
        $tmp3157 = $tmp3158;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3156, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) start3137.value).position, $tmp3157);
        $tmp3155 = $tmp3156;
        $tmp3154 = $tmp3155;
        target3153 = $tmp3154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3154));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3155));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3157));
        panda$collections$Array* $tmp3162 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3162);
        $tmp3161 = $tmp3162;
        $tmp3160 = $tmp3161;
        args3159 = $tmp3160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3161));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3163, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3164 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3163);
        if (((panda$core$Bit) { !$tmp3164.nonnull }).value) {
        {
            int $tmp3167;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3171 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3170 = $tmp3171;
                $tmp3169 = $tmp3170;
                expr3168 = $tmp3169;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3169));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3170));
                if (((panda$core$Bit) { expr3168 == NULL }).value) {
                {
                    panda$core$Object* $tmp3173 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3172 = $tmp3173;
                    panda$core$Panda$unref$panda$core$Object($tmp3172);
                    $tmp3174 = NULL;
                    $returnValue3141 = $tmp3174;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3174));
                    $tmp3167 = 0;
                    goto $l3165;
                    $l3175:;
                    $tmp3136 = 2;
                    goto $l3134;
                    $l3176:;
                    return $returnValue3141;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args3159, ((panda$core$Object*) expr3168));
                $l3178:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3181, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3182 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3181);
                bool $tmp3180 = ((panda$core$Bit) { $tmp3182.nonnull }).value;
                if (!$tmp3180) goto $l3179;
                {
                    {
                        $tmp3183 = expr3168;
                        org$pandalanguage$pandac$ASTNode* $tmp3186 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3185 = $tmp3186;
                        $tmp3184 = $tmp3185;
                        expr3168 = $tmp3184;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3184));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3185));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3183));
                    }
                    if (((panda$core$Bit) { expr3168 == NULL }).value) {
                    {
                        panda$core$Object* $tmp3188 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp3187 = $tmp3188;
                        panda$core$Panda$unref$panda$core$Object($tmp3187);
                        $tmp3189 = NULL;
                        $returnValue3141 = $tmp3189;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3189));
                        $tmp3167 = 1;
                        goto $l3165;
                        $l3190:;
                        $tmp3136 = 3;
                        goto $l3134;
                        $l3191:;
                        return $returnValue3141;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args3159, ((panda$core$Object*) expr3168));
                }
                goto $l3178;
                $l3179:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3193, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3195 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3193, &$s3194);
                if (((panda$core$Bit) { !$tmp3195.nonnull }).value) {
                {
                    panda$core$Object* $tmp3197 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3196 = $tmp3197;
                    panda$core$Panda$unref$panda$core$Object($tmp3196);
                    $tmp3198 = NULL;
                    $returnValue3141 = $tmp3198;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3198));
                    $tmp3167 = 2;
                    goto $l3165;
                    $l3199:;
                    $tmp3136 = 4;
                    goto $l3134;
                    $l3200:;
                    return $returnValue3141;
                }
                }
            }
            $tmp3167 = -1;
            goto $l3165;
            $l3165:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3168));
            expr3168 = NULL;
            switch ($tmp3167) {
                case 1: goto $l3190;
                case 2: goto $l3199;
                case -1: goto $l3202;
                case 0: goto $l3175;
            }
            $l3202:;
        }
        }
        panda$core$Object* $tmp3204 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp3203 = $tmp3204;
        panda$core$Panda$unref$panda$core$Object($tmp3203);
        org$pandalanguage$pandac$ASTNode* $tmp3207 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp3209 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3159);
        $tmp3208 = $tmp3209;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3207, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$parser$Token) start3137.value).position, target3153, $tmp3208);
        $tmp3206 = $tmp3207;
        $tmp3205 = $tmp3206;
        $returnValue3141 = $tmp3205;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3205));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3208));
        $tmp3136 = 5;
        goto $l3134;
        $l3210:;
        return $returnValue3141;
    }
    $l3134:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args3159));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target3153));
    target3153 = NULL;
    args3159 = NULL;
    switch ($tmp3136) {
        case 4: goto $l3200;
        case 5: goto $l3210;
        case 2: goto $l3176;
        case 3: goto $l3191;
        case 0: goto $l3143;
        case 1: goto $l3149;
    }
    $l3212:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3213;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3214;
    org$pandalanguage$pandac$ASTNode* $returnValue3217;
    org$pandalanguage$pandac$ASTNode* $tmp3218;
    org$pandalanguage$pandac$parser$Token$nullable label3220;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3221;
    org$pandalanguage$pandac$ASTNode* $tmp3223;
    org$pandalanguage$pandac$ASTNode* $tmp3224;
    panda$core$String* $tmp3226;
    org$pandalanguage$pandac$ASTNode* $tmp3229;
    org$pandalanguage$pandac$ASTNode* $tmp3230;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3214, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3216 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3214, &$s3215);
    start3213 = $tmp3216;
    if (((panda$core$Bit) { !start3213.nonnull }).value) {
    {
        $tmp3218 = NULL;
        $returnValue3217 = $tmp3218;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3218));
        return $returnValue3217;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3221, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3222 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3221);
    label3220 = $tmp3222;
    if (((panda$core$Bit) { label3220.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3225 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3227 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3220.value));
        $tmp3226 = $tmp3227;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3225, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start3213.value).position, $tmp3226);
        $tmp3224 = $tmp3225;
        $tmp3223 = $tmp3224;
        $returnValue3217 = $tmp3223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3224));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3226));
        return $returnValue3217;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3231 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3231, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start3213.value).position, NULL);
    $tmp3230 = $tmp3231;
    $tmp3229 = $tmp3230;
    $returnValue3217 = $tmp3229;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3229));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3230));
    return $returnValue3217;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3233;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3234;
    org$pandalanguage$pandac$ASTNode* $returnValue3237;
    org$pandalanguage$pandac$ASTNode* $tmp3238;
    org$pandalanguage$pandac$parser$Token$nullable label3240;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3241;
    org$pandalanguage$pandac$ASTNode* $tmp3243;
    org$pandalanguage$pandac$ASTNode* $tmp3244;
    panda$core$String* $tmp3246;
    org$pandalanguage$pandac$ASTNode* $tmp3249;
    org$pandalanguage$pandac$ASTNode* $tmp3250;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3234, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3236 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3234, &$s3235);
    start3233 = $tmp3236;
    if (((panda$core$Bit) { !start3233.nonnull }).value) {
    {
        $tmp3238 = NULL;
        $returnValue3237 = $tmp3238;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3238));
        return $returnValue3237;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3241, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3242 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3241);
    label3240 = $tmp3242;
    if (((panda$core$Bit) { label3240.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3245 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3247 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3240.value));
        $tmp3246 = $tmp3247;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3245, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start3233.value).position, $tmp3246);
        $tmp3244 = $tmp3245;
        $tmp3243 = $tmp3244;
        $returnValue3237 = $tmp3243;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3243));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3244));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3246));
        return $returnValue3237;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3251 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3251, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start3233.value).position, NULL);
    $tmp3250 = $tmp3251;
    $tmp3249 = $tmp3250;
    $returnValue3237 = $tmp3249;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3249));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3250));
    return $returnValue3237;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3253;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3254;
    org$pandalanguage$pandac$ASTNode* $returnValue3257;
    org$pandalanguage$pandac$ASTNode* $tmp3258;
    org$pandalanguage$pandac$parser$Token$Kind $match$1668_93260;
    org$pandalanguage$pandac$ASTNode* $tmp3271;
    org$pandalanguage$pandac$ASTNode* $tmp3272;
    panda$collections$Array* children3278 = NULL;
    panda$collections$Array* $tmp3279;
    panda$collections$Array* $tmp3280;
    org$pandalanguage$pandac$ASTNode* expr3282 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3283;
    org$pandalanguage$pandac$ASTNode* $tmp3284;
    org$pandalanguage$pandac$ASTNode* $tmp3286;
    org$pandalanguage$pandac$ASTNode* $tmp3289;
    org$pandalanguage$pandac$ASTNode* $tmp3290;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3254, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3256 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3254, &$s3255);
    start3253 = $tmp3256;
    if (((panda$core$Bit) { !start3253.nonnull }).value) {
    {
        $tmp3258 = NULL;
        $returnValue3257 = $tmp3258;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3258));
        return $returnValue3257;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp3261 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1668_93260 = $tmp3261.kind;
        panda$core$Bit $tmp3264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1668_93260.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp3263 = $tmp3264.value;
        if ($tmp3263) goto $l3265;
        panda$core$Bit $tmp3266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1668_93260.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp3263 = $tmp3266.value;
        $l3265:;
        panda$core$Bit $tmp3267 = { $tmp3263 };
        bool $tmp3262 = $tmp3267.value;
        if ($tmp3262) goto $l3268;
        panda$core$Bit $tmp3269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1668_93260.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp3262 = $tmp3269.value;
        $l3268:;
        panda$core$Bit $tmp3270 = { $tmp3262 };
        if ($tmp3270.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3273 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3273, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) start3253.value).position, NULL);
            $tmp3272 = $tmp3273;
            $tmp3271 = $tmp3272;
            $returnValue3257 = $tmp3271;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3271));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3272));
            return $returnValue3257;
        }
        }
        else {
        {
            int $tmp3277;
            {
                panda$collections$Array* $tmp3281 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp3281);
                $tmp3280 = $tmp3281;
                $tmp3279 = $tmp3280;
                children3278 = $tmp3279;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3279));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3280));
                org$pandalanguage$pandac$ASTNode* $tmp3285 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3284 = $tmp3285;
                $tmp3283 = $tmp3284;
                expr3282 = $tmp3283;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3283));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3284));
                if (((panda$core$Bit) { expr3282 == NULL }).value) {
                {
                    $tmp3286 = NULL;
                    $returnValue3257 = $tmp3286;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3286));
                    $tmp3277 = 0;
                    goto $l3275;
                    $l3287:;
                    return $returnValue3257;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3278, ((panda$core$Object*) expr3282));
                org$pandalanguage$pandac$ASTNode* $tmp3291 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3291, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) start3253.value).position, expr3282);
                $tmp3290 = $tmp3291;
                $tmp3289 = $tmp3290;
                $returnValue3257 = $tmp3289;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3289));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3290));
                $tmp3277 = 1;
                goto $l3275;
                $l3292:;
                return $returnValue3257;
            }
            $l3275:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3282));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children3278));
            children3278 = NULL;
            expr3282 = NULL;
            switch ($tmp3277) {
                case 0: goto $l3287;
                case 1: goto $l3292;
            }
            $l3294:;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1686_93295;
    org$pandalanguage$pandac$ASTNode* $returnValue3298;
    org$pandalanguage$pandac$ASTNode* $tmp3299;
    org$pandalanguage$pandac$ASTNode* $tmp3300;
    org$pandalanguage$pandac$ASTNode* $tmp3304;
    org$pandalanguage$pandac$ASTNode* $tmp3305;
    org$pandalanguage$pandac$ASTNode* $tmp3309;
    org$pandalanguage$pandac$ASTNode* $tmp3310;
    {
        org$pandalanguage$pandac$parser$Token $tmp3296 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1686_93295 = $tmp3296.kind;
        panda$core$Bit $tmp3297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1686_93295.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp3297.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3301 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3300 = $tmp3301;
            $tmp3299 = $tmp3300;
            $returnValue3298 = $tmp3299;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3299));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3300));
            return $returnValue3298;
        }
        }
        else {
        panda$core$Bit $tmp3303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1686_93295.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp3303.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3306 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3305 = $tmp3306;
            $tmp3304 = $tmp3305;
            $returnValue3298 = $tmp3304;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3304));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3305));
            return $returnValue3298;
        }
        }
        else {
        panda$core$Bit $tmp3308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1686_93295.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp3308.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3311 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3310 = $tmp3311;
            $tmp3309 = $tmp3310;
            $returnValue3298 = $tmp3309;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3309));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3310));
            return $returnValue3298;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l3313; else goto $l3314;
            $l3314:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3315, (panda$core$Int64) { 1690 });
            abort();
            $l3313:;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1698_93316;
    org$pandalanguage$pandac$ASTNode* $returnValue3319;
    org$pandalanguage$pandac$ASTNode* $tmp3320;
    org$pandalanguage$pandac$ASTNode* $tmp3321;
    org$pandalanguage$pandac$ASTNode* $tmp3325;
    org$pandalanguage$pandac$ASTNode* $tmp3326;
    org$pandalanguage$pandac$ASTNode* $tmp3330;
    org$pandalanguage$pandac$ASTNode* $tmp3331;
    org$pandalanguage$pandac$ASTNode* $tmp3335;
    org$pandalanguage$pandac$ASTNode* $tmp3336;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3339;
    org$pandalanguage$pandac$ASTNode* $tmp3341;
    {
        org$pandalanguage$pandac$parser$Token $tmp3317 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1698_93316 = $tmp3317.kind;
        panda$core$Bit $tmp3318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1698_93316.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3318.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3322 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3321 = $tmp3322;
            $tmp3320 = $tmp3321;
            $returnValue3319 = $tmp3320;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3320));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3321));
            return $returnValue3319;
        }
        }
        else {
        panda$core$Bit $tmp3324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1698_93316.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp3324.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3327 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3326 = $tmp3327;
            $tmp3325 = $tmp3326;
            $returnValue3319 = $tmp3325;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3325));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3326));
            return $returnValue3319;
        }
        }
        else {
        panda$core$Bit $tmp3329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1698_93316.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp3329.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3332 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3331 = $tmp3332;
            $tmp3330 = $tmp3331;
            $returnValue3319 = $tmp3330;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3330));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3331));
            return $returnValue3319;
        }
        }
        else {
        panda$core$Bit $tmp3334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1698_93316.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp3334.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3337 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3336 = $tmp3337;
            $tmp3335 = $tmp3336;
            $returnValue3319 = $tmp3335;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3335));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3336));
            return $returnValue3319;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3339, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3339, &$s3340);
            $tmp3341 = NULL;
            $returnValue3319 = $tmp3341;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3341));
            return $returnValue3319;
        }
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3346;
    org$pandalanguage$pandac$parser$Token$nullable start3347;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3348;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3350;
    org$pandalanguage$pandac$ASTNode* $returnValue3353;
    org$pandalanguage$pandac$ASTNode* $tmp3354;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3357;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3358;
    org$pandalanguage$pandac$parser$Token$nullable name3359;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3360;
    org$pandalanguage$pandac$ASTNode* $tmp3363;
    panda$collections$ImmutableArray* params3366 = NULL;
    panda$collections$ImmutableArray* $tmp3367;
    panda$collections$ImmutableArray* $tmp3368;
    org$pandalanguage$pandac$ASTNode* $tmp3370;
    org$pandalanguage$pandac$ASTNode* returnType3373 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3376;
    org$pandalanguage$pandac$ASTNode* $tmp3377;
    org$pandalanguage$pandac$ASTNode* $tmp3378;
    org$pandalanguage$pandac$ASTNode* $tmp3380;
    org$pandalanguage$pandac$ASTNode* $tmp3383;
    org$pandalanguage$pandac$ASTNode* $tmp3384;
    panda$collections$ImmutableArray* body3385 = NULL;
    panda$collections$ImmutableArray* $tmp3386;
    panda$collections$ImmutableArray* $tmp3387;
    org$pandalanguage$pandac$ASTNode* $tmp3389;
    org$pandalanguage$pandac$ASTNode* $tmp3392;
    org$pandalanguage$pandac$ASTNode* $tmp3393;
    panda$collections$ImmutableArray* $tmp3395;
    panda$core$String* $tmp3397;
    int $tmp3345;
    {
        memset(&kind3346, 0, sizeof(kind3346));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3348, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3349 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3348);
        start3347 = $tmp3349;
        if (((panda$core$Bit) { !start3347.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3350, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3352 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3350, &$s3351);
            start3347 = $tmp3352;
            if (((panda$core$Bit) { !start3347.nonnull }).value) {
            {
                $tmp3354 = NULL;
                $returnValue3353 = $tmp3354;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3354));
                $tmp3345 = 0;
                goto $l3343;
                $l3355:;
                return $returnValue3353;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3357, ((panda$core$Int64) { 0 }));
            kind3346 = $tmp3357;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3358, ((panda$core$Int64) { 1 }));
            kind3346 = $tmp3358;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3360, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3362 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3360, &$s3361);
        name3359 = $tmp3362;
        if (((panda$core$Bit) { !name3359.nonnull }).value) {
        {
            $tmp3363 = NULL;
            $returnValue3353 = $tmp3363;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3363));
            $tmp3345 = 1;
            goto $l3343;
            $l3364:;
            return $returnValue3353;
        }
        }
        panda$collections$ImmutableArray* $tmp3369 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3368 = $tmp3369;
        $tmp3367 = $tmp3368;
        params3366 = $tmp3367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3367));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3368));
        if (((panda$core$Bit) { params3366 == NULL }).value) {
        {
            $tmp3370 = NULL;
            $returnValue3353 = $tmp3370;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3370));
            $tmp3345 = 2;
            goto $l3343;
            $l3371:;
            return $returnValue3353;
        }
        }
        memset(&returnType3373, 0, sizeof(returnType3373));
        org$pandalanguage$pandac$parser$Token $tmp3374 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3374.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3375.value) {
        {
            {
                $tmp3376 = returnType3373;
                org$pandalanguage$pandac$ASTNode* $tmp3379 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3378 = $tmp3379;
                $tmp3377 = $tmp3378;
                returnType3373 = $tmp3377;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3377));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3376));
            }
            if (((panda$core$Bit) { returnType3373 == NULL }).value) {
            {
                $tmp3380 = NULL;
                $returnValue3353 = $tmp3380;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3380));
                $tmp3345 = 3;
                goto $l3343;
                $l3381:;
                return $returnValue3353;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3383 = returnType3373;
                $tmp3384 = NULL;
                returnType3373 = $tmp3384;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3384));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3383));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3388 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3387 = $tmp3388;
        $tmp3386 = $tmp3387;
        body3385 = $tmp3386;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3386));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3387));
        if (((panda$core$Bit) { body3385 == NULL }).value) {
        {
            $tmp3389 = NULL;
            $returnValue3353 = $tmp3389;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3389));
            $tmp3345 = 4;
            goto $l3343;
            $l3390:;
            return $returnValue3353;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3394 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp3396 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3396);
        $tmp3395 = $tmp3396;
        panda$core$String* $tmp3398 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3359.value));
        $tmp3397 = $tmp3398;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3394, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3347.value).position, NULL, $tmp3395, kind3346, $tmp3397, NULL, params3366, returnType3373, body3385);
        $tmp3393 = $tmp3394;
        $tmp3392 = $tmp3393;
        $returnValue3353 = $tmp3392;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3392));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3393));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3397));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3395));
        $tmp3345 = 5;
        goto $l3343;
        $l3399:;
        return $returnValue3353;
    }
    $l3343:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3385));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3373));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3366));
    params3366 = NULL;
    body3385 = NULL;
    switch ($tmp3345) {
        case 2: goto $l3371;
        case 1: goto $l3364;
        case 4: goto $l3390;
        case 0: goto $l3355;
        case 5: goto $l3399;
        case 3: goto $l3381;
    }
    $l3401:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1757_93402;
    org$pandalanguage$pandac$ASTNode* $returnValue3405;
    org$pandalanguage$pandac$ASTNode* $tmp3406;
    org$pandalanguage$pandac$ASTNode* $tmp3407;
    org$pandalanguage$pandac$ASTNode* $tmp3411;
    org$pandalanguage$pandac$ASTNode* $tmp3412;
    org$pandalanguage$pandac$ASTNode* $tmp3416;
    org$pandalanguage$pandac$ASTNode* $tmp3417;
    org$pandalanguage$pandac$ASTNode* $tmp3421;
    org$pandalanguage$pandac$ASTNode* $tmp3422;
    org$pandalanguage$pandac$ASTNode* $tmp3426;
    org$pandalanguage$pandac$ASTNode* $tmp3427;
    org$pandalanguage$pandac$ASTNode* $tmp3431;
    org$pandalanguage$pandac$ASTNode* $tmp3432;
    org$pandalanguage$pandac$ASTNode* $tmp3436;
    org$pandalanguage$pandac$ASTNode* $tmp3437;
    org$pandalanguage$pandac$ASTNode* $tmp3441;
    org$pandalanguage$pandac$ASTNode* $tmp3442;
    org$pandalanguage$pandac$parser$Token id3446;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3448;
    org$pandalanguage$pandac$ASTNode* $tmp3450;
    org$pandalanguage$pandac$ASTNode* $tmp3451;
    panda$core$String* $tmp3452;
    org$pandalanguage$pandac$ASTNode* $tmp3456;
    org$pandalanguage$pandac$ASTNode* $tmp3457;
    org$pandalanguage$pandac$ASTNode* $tmp3465;
    org$pandalanguage$pandac$ASTNode* $tmp3466;
    org$pandalanguage$pandac$ASTNode* $tmp3482;
    org$pandalanguage$pandac$ASTNode* $tmp3483;
    org$pandalanguage$pandac$ASTNode* $tmp3487;
    org$pandalanguage$pandac$ASTNode* $tmp3488;
    org$pandalanguage$pandac$ASTNode* $tmp3496;
    org$pandalanguage$pandac$ASTNode* $tmp3497;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3500;
    org$pandalanguage$pandac$ASTNode* $tmp3502;
    {
        org$pandalanguage$pandac$parser$Token $tmp3403 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1757_93402 = $tmp3403.kind;
        panda$core$Bit $tmp3404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp3404.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3408 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3407 = $tmp3408;
            $tmp3406 = $tmp3407;
            $returnValue3405 = $tmp3406;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3406));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3407));
            return $returnValue3405;
        }
        }
        else {
        panda$core$Bit $tmp3410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp3410.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3413 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3412 = $tmp3413;
            $tmp3411 = $tmp3412;
            $returnValue3405 = $tmp3411;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3411));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3412));
            return $returnValue3405;
        }
        }
        else {
        panda$core$Bit $tmp3415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp3415.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3418 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3417 = $tmp3418;
            $tmp3416 = $tmp3417;
            $returnValue3405 = $tmp3416;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3416));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3417));
            return $returnValue3405;
        }
        }
        else {
        panda$core$Bit $tmp3420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3420.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3423 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3422 = $tmp3423;
            $tmp3421 = $tmp3422;
            $returnValue3405 = $tmp3421;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3421));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3422));
            return $returnValue3405;
        }
        }
        else {
        panda$core$Bit $tmp3425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp3425.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3428 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3427 = $tmp3428;
            $tmp3426 = $tmp3427;
            $returnValue3405 = $tmp3426;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3426));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3427));
            return $returnValue3405;
        }
        }
        else {
        panda$core$Bit $tmp3430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp3430.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3433 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3432 = $tmp3433;
            $tmp3431 = $tmp3432;
            $returnValue3405 = $tmp3431;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3431));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3432));
            return $returnValue3405;
        }
        }
        else {
        panda$core$Bit $tmp3435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp3435.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3438 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3437 = $tmp3438;
            $tmp3436 = $tmp3437;
            $returnValue3405 = $tmp3436;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3436));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3437));
            return $returnValue3405;
        }
        }
        else {
        panda$core$Bit $tmp3440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp3440.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3443 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3442 = $tmp3443;
            $tmp3441 = $tmp3442;
            $returnValue3405 = $tmp3441;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3441));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3442));
            return $returnValue3405;
        }
        }
        else {
        panda$core$Bit $tmp3445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp3445.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3447 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id3446 = $tmp3447;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3448, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3449 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3448);
            if (((panda$core$Bit) { $tmp3449.nonnull }).value) {
            {
                panda$core$String* $tmp3453 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id3446);
                $tmp3452 = $tmp3453;
                org$pandalanguage$pandac$ASTNode* $tmp3454 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp3452);
                $tmp3451 = $tmp3454;
                $tmp3450 = $tmp3451;
                $returnValue3405 = $tmp3450;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3450));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3451));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3452));
                return $returnValue3405;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id3446);
            org$pandalanguage$pandac$ASTNode* $tmp3458 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3457 = $tmp3458;
            $tmp3456 = $tmp3457;
            $returnValue3405 = $tmp3456;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3456));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3457));
            return $returnValue3405;
        }
        }
        else {
        panda$core$Bit $tmp3461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp3460 = $tmp3461.value;
        if ($tmp3460) goto $l3462;
        panda$core$Bit $tmp3463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp3460 = $tmp3463.value;
        $l3462:;
        panda$core$Bit $tmp3464 = { $tmp3460 };
        if ($tmp3464.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3467 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3466 = $tmp3467;
            $tmp3465 = $tmp3466;
            $returnValue3405 = $tmp3465;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3465));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3466));
            return $returnValue3405;
        }
        }
        else {
        panda$core$Bit $tmp3472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp3471 = $tmp3472.value;
        if ($tmp3471) goto $l3473;
        panda$core$Bit $tmp3474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp3471 = $tmp3474.value;
        $l3473:;
        panda$core$Bit $tmp3475 = { $tmp3471 };
        bool $tmp3470 = $tmp3475.value;
        if ($tmp3470) goto $l3476;
        panda$core$Bit $tmp3477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp3470 = $tmp3477.value;
        $l3476:;
        panda$core$Bit $tmp3478 = { $tmp3470 };
        bool $tmp3469 = $tmp3478.value;
        if ($tmp3469) goto $l3479;
        panda$core$Bit $tmp3480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp3469 = $tmp3480.value;
        $l3479:;
        panda$core$Bit $tmp3481 = { $tmp3469 };
        if ($tmp3481.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3484 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3483 = $tmp3484;
            $tmp3482 = $tmp3483;
            $returnValue3405 = $tmp3482;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3482));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3483));
            return $returnValue3405;
        }
        }
        else {
        panda$core$Bit $tmp3486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp3486.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3489 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3488 = $tmp3489;
            $tmp3487 = $tmp3488;
            $returnValue3405 = $tmp3487;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3487));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3488));
            return $returnValue3405;
        }
        }
        else {
        panda$core$Bit $tmp3492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 21 }));
        bool $tmp3491 = $tmp3492.value;
        if ($tmp3491) goto $l3493;
        panda$core$Bit $tmp3494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93402.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp3491 = $tmp3494.value;
        $l3493:;
        panda$core$Bit $tmp3495 = { $tmp3491 };
        if ($tmp3495.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3498 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3497 = $tmp3498;
            $tmp3496 = $tmp3497;
            $returnValue3405 = $tmp3496;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3496));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3497));
            return $returnValue3405;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3500, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3500, &$s3501);
            $tmp3502 = NULL;
            $returnValue3405 = $tmp3502;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3502));
            return $returnValue3405;
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
    org$pandalanguage$pandac$parser$Token$nullable start3507;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3508;
    org$pandalanguage$pandac$ASTNode* $returnValue3511;
    org$pandalanguage$pandac$ASTNode* $tmp3512;
    org$pandalanguage$pandac$parser$Token$nullable next3515;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3516;
    org$pandalanguage$pandac$ASTNode* $tmp3519;
    panda$core$MutableString* name3522 = NULL;
    panda$core$MutableString* $tmp3523;
    panda$core$MutableString* $tmp3524;
    panda$core$String* $tmp3526;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3530;
    panda$core$Char8 $tmp3532;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3533;
    org$pandalanguage$pandac$ASTNode* $tmp3536;
    panda$core$String* $tmp3539;
    org$pandalanguage$pandac$ASTNode* $tmp3541;
    org$pandalanguage$pandac$ASTNode* $tmp3542;
    panda$core$String* $tmp3544;
    int $tmp3506;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3508, ((panda$core$Int64) { 14 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3510 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3508, &$s3509);
        start3507 = $tmp3510;
        if (((panda$core$Bit) { !start3507.nonnull }).value) {
        {
            $tmp3512 = NULL;
            $returnValue3511 = $tmp3512;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3512));
            $tmp3506 = 0;
            goto $l3504;
            $l3513:;
            return $returnValue3511;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3516, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3518 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3516, &$s3517);
        next3515 = $tmp3518;
        if (((panda$core$Bit) { !next3515.nonnull }).value) {
        {
            $tmp3519 = NULL;
            $returnValue3511 = $tmp3519;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3519));
            $tmp3506 = 1;
            goto $l3504;
            $l3520:;
            return $returnValue3511;
        }
        }
        panda$core$MutableString* $tmp3525 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3527 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3515.value));
        $tmp3526 = $tmp3527;
        panda$core$MutableString$init$panda$core$String($tmp3525, $tmp3526);
        $tmp3524 = $tmp3525;
        $tmp3523 = $tmp3524;
        name3522 = $tmp3523;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3523));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3524));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3526));
        $l3528:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3530, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3531 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3530);
            next3515 = $tmp3531;
            if (((panda$core$Bit) { !next3515.nonnull }).value) {
            {
                goto $l3529;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3532, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3522, $tmp3532);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3533, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3535 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3533, &$s3534);
            next3515 = $tmp3535;
            if (((panda$core$Bit) { !next3515.nonnull }).value) {
            {
                $tmp3536 = NULL;
                $returnValue3511 = $tmp3536;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3536));
                $tmp3506 = 2;
                goto $l3504;
                $l3537:;
                return $returnValue3511;
            }
            }
            panda$core$String* $tmp3540 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3515.value));
            $tmp3539 = $tmp3540;
            panda$core$MutableString$append$panda$core$String(name3522, $tmp3539);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3539));
        }
        }
        $l3529:;
        org$pandalanguage$pandac$ASTNode* $tmp3543 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3545 = panda$core$MutableString$finish$R$panda$core$String(name3522);
        $tmp3544 = $tmp3545;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3543, ((panda$core$Int64) { 30 }), ((org$pandalanguage$pandac$parser$Token) start3507.value).position, $tmp3544);
        $tmp3542 = $tmp3543;
        $tmp3541 = $tmp3542;
        $returnValue3511 = $tmp3541;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3541));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3542));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3544));
        $tmp3506 = 3;
        goto $l3504;
        $l3546:;
        return $returnValue3511;
    }
    $l3504:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3522));
    name3522 = NULL;
    switch ($tmp3506) {
        case 2: goto $l3537;
        case 3: goto $l3546;
        case 1: goto $l3520;
        case 0: goto $l3513;
    }
    $l3548:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3552;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3553;
    org$pandalanguage$pandac$ASTNode* $returnValue3556;
    org$pandalanguage$pandac$ASTNode* $tmp3557;
    org$pandalanguage$pandac$parser$Token$nullable next3560;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3561;
    org$pandalanguage$pandac$ASTNode* $tmp3564;
    panda$core$MutableString* name3567 = NULL;
    panda$core$MutableString* $tmp3568;
    panda$core$MutableString* $tmp3569;
    panda$core$String* $tmp3571;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3575;
    panda$core$Char8 $tmp3577;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3578;
    org$pandalanguage$pandac$ASTNode* $tmp3581;
    panda$core$String* $tmp3584;
    org$pandalanguage$pandac$ASTNode* $tmp3586;
    org$pandalanguage$pandac$ASTNode* $tmp3587;
    panda$core$String* $tmp3589;
    int $tmp3551;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3553, ((panda$core$Int64) { 15 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3555 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3553, &$s3554);
        start3552 = $tmp3555;
        if (((panda$core$Bit) { !start3552.nonnull }).value) {
        {
            $tmp3557 = NULL;
            $returnValue3556 = $tmp3557;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3557));
            $tmp3551 = 0;
            goto $l3549;
            $l3558:;
            return $returnValue3556;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3561, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3563 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3561, &$s3562);
        next3560 = $tmp3563;
        if (((panda$core$Bit) { !next3560.nonnull }).value) {
        {
            $tmp3564 = NULL;
            $returnValue3556 = $tmp3564;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3564));
            $tmp3551 = 1;
            goto $l3549;
            $l3565:;
            return $returnValue3556;
        }
        }
        panda$core$MutableString* $tmp3570 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3572 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3560.value));
        $tmp3571 = $tmp3572;
        panda$core$MutableString$init$panda$core$String($tmp3570, $tmp3571);
        $tmp3569 = $tmp3570;
        $tmp3568 = $tmp3569;
        name3567 = $tmp3568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3569));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3571));
        $l3573:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3575, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3576 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3575);
            next3560 = $tmp3576;
            if (((panda$core$Bit) { !next3560.nonnull }).value) {
            {
                goto $l3574;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3577, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3567, $tmp3577);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3578, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3580 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3578, &$s3579);
            next3560 = $tmp3580;
            if (((panda$core$Bit) { !next3560.nonnull }).value) {
            {
                $tmp3581 = NULL;
                $returnValue3556 = $tmp3581;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3581));
                $tmp3551 = 2;
                goto $l3549;
                $l3582:;
                return $returnValue3556;
            }
            }
            panda$core$String* $tmp3585 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3560.value));
            $tmp3584 = $tmp3585;
            panda$core$MutableString$append$panda$core$String(name3567, $tmp3584);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3584));
        }
        }
        $l3574:;
        org$pandalanguage$pandac$ASTNode* $tmp3588 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3590 = panda$core$MutableString$finish$R$panda$core$String(name3567);
        $tmp3589 = $tmp3590;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3588, ((panda$core$Int64) { 46 }), ((org$pandalanguage$pandac$parser$Token) start3552.value).position, $tmp3589);
        $tmp3587 = $tmp3588;
        $tmp3586 = $tmp3587;
        $returnValue3556 = $tmp3586;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3586));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3589));
        $tmp3551 = 3;
        goto $l3549;
        $l3591:;
        return $returnValue3556;
    }
    $l3549:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3567));
    name3567 = NULL;
    switch ($tmp3551) {
        case 1: goto $l3565;
        case 2: goto $l3582;
        case 3: goto $l3591;
        case 0: goto $l3558;
    }
    $l3593:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3597;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3598;
    panda$collections$ImmutableArray* $returnValue3601;
    panda$collections$ImmutableArray* $tmp3602;
    org$pandalanguage$pandac$parser$Token$nullable id3605;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3606;
    panda$collections$ImmutableArray* $tmp3609;
    panda$collections$Array* parameters3612 = NULL;
    panda$collections$Array* $tmp3613;
    panda$collections$Array* $tmp3614;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3616;
    org$pandalanguage$pandac$ASTNode* t3621 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3622;
    org$pandalanguage$pandac$ASTNode* $tmp3623;
    panda$collections$ImmutableArray* $tmp3625;
    org$pandalanguage$pandac$ASTNode* $tmp3629;
    panda$core$String* $tmp3631;
    org$pandalanguage$pandac$ASTNode* $tmp3634;
    panda$core$String* $tmp3636;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3641;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3643;
    panda$collections$ImmutableArray* $tmp3646;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3649;
    org$pandalanguage$pandac$ASTNode* t3654 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3655;
    org$pandalanguage$pandac$ASTNode* $tmp3656;
    panda$collections$ImmutableArray* $tmp3658;
    org$pandalanguage$pandac$ASTNode* $tmp3662;
    panda$core$String* $tmp3664;
    org$pandalanguage$pandac$ASTNode* $tmp3667;
    panda$core$String* $tmp3669;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3671;
    panda$collections$ImmutableArray* $tmp3674;
    panda$collections$ImmutableArray* $tmp3677;
    panda$collections$ImmutableArray* $tmp3678;
    int $tmp3596;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3598, ((panda$core$Int64) { 62 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3600 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3598, &$s3599);
        start3597 = $tmp3600;
        if (((panda$core$Bit) { !start3597.nonnull }).value) {
        {
            $tmp3602 = NULL;
            $returnValue3601 = $tmp3602;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3602));
            $tmp3596 = 0;
            goto $l3594;
            $l3603:;
            return $returnValue3601;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3606, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3608 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3606, &$s3607);
        id3605 = $tmp3608;
        if (((panda$core$Bit) { !id3605.nonnull }).value) {
        {
            $tmp3609 = NULL;
            $returnValue3601 = $tmp3609;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3609));
            $tmp3596 = 1;
            goto $l3594;
            $l3610:;
            return $returnValue3601;
        }
        }
        panda$collections$Array* $tmp3615 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3615);
        $tmp3614 = $tmp3615;
        $tmp3613 = $tmp3614;
        parameters3612 = $tmp3613;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3613));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3614));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3616, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3617 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3616);
        if (((panda$core$Bit) { $tmp3617.nonnull }).value) {
        {
            int $tmp3620;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3624 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3623 = $tmp3624;
                $tmp3622 = $tmp3623;
                t3621 = $tmp3622;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3622));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3623));
                if (((panda$core$Bit) { t3621 == NULL }).value) {
                {
                    $tmp3625 = NULL;
                    $returnValue3601 = $tmp3625;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3625));
                    $tmp3620 = 0;
                    goto $l3618;
                    $l3626:;
                    $tmp3596 = 2;
                    goto $l3594;
                    $l3627:;
                    return $returnValue3601;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp3630 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3632 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3605.value));
                $tmp3631 = $tmp3632;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3630, ((panda$core$Int64) { 44 }), ((org$pandalanguage$pandac$parser$Token) id3605.value).position, $tmp3631, t3621);
                $tmp3629 = $tmp3630;
                panda$collections$Array$add$panda$collections$Array$T(parameters3612, ((panda$core$Object*) $tmp3629));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3629));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3631));
            }
            $tmp3620 = -1;
            goto $l3618;
            $l3618:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3621));
            t3621 = NULL;
            switch ($tmp3620) {
                case -1: goto $l3633;
                case 0: goto $l3626;
            }
            $l3633:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3635 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp3637 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3605.value));
            $tmp3636 = $tmp3637;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3635, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id3605.value).position, $tmp3636);
            $tmp3634 = $tmp3635;
            panda$collections$Array$add$panda$collections$Array$T(parameters3612, ((panda$core$Object*) $tmp3634));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3634));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3636));
        }
        }
        $l3638:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3641, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3642 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3641);
        bool $tmp3640 = ((panda$core$Bit) { $tmp3642.nonnull }).value;
        if (!$tmp3640) goto $l3639;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3643, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3645 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3643, &$s3644);
            id3605 = $tmp3645;
            if (((panda$core$Bit) { !id3605.nonnull }).value) {
            {
                $tmp3646 = NULL;
                $returnValue3601 = $tmp3646;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3646));
                $tmp3596 = 3;
                goto $l3594;
                $l3647:;
                return $returnValue3601;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3649, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3650 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3649);
            if (((panda$core$Bit) { $tmp3650.nonnull }).value) {
            {
                int $tmp3653;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3657 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3656 = $tmp3657;
                    $tmp3655 = $tmp3656;
                    t3654 = $tmp3655;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3655));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3656));
                    if (((panda$core$Bit) { t3654 == NULL }).value) {
                    {
                        $tmp3658 = NULL;
                        $returnValue3601 = $tmp3658;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3658));
                        $tmp3653 = 0;
                        goto $l3651;
                        $l3659:;
                        $tmp3596 = 4;
                        goto $l3594;
                        $l3660:;
                        return $returnValue3601;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3663 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$String* $tmp3665 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3605.value));
                    $tmp3664 = $tmp3665;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3663, ((panda$core$Int64) { 44 }), ((org$pandalanguage$pandac$parser$Token) id3605.value).position, $tmp3664, t3654);
                    $tmp3662 = $tmp3663;
                    panda$collections$Array$add$panda$collections$Array$T(parameters3612, ((panda$core$Object*) $tmp3662));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3662));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3664));
                }
                $tmp3653 = -1;
                goto $l3651;
                $l3651:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3654));
                t3654 = NULL;
                switch ($tmp3653) {
                    case 0: goto $l3659;
                    case -1: goto $l3666;
                }
                $l3666:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3668 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3670 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3605.value));
                $tmp3669 = $tmp3670;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3668, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id3605.value).position, $tmp3669);
                $tmp3667 = $tmp3668;
                panda$collections$Array$add$panda$collections$Array$T(parameters3612, ((panda$core$Object*) $tmp3667));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3667));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3669));
            }
            }
        }
        goto $l3638;
        $l3639:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3671, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3673 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3671, &$s3672);
        if (((panda$core$Bit) { !$tmp3673.nonnull }).value) {
        {
            $tmp3674 = NULL;
            $returnValue3601 = $tmp3674;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3674));
            $tmp3596 = 5;
            goto $l3594;
            $l3675:;
            return $returnValue3601;
        }
        }
        panda$collections$ImmutableArray* $tmp3679 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters3612);
        $tmp3678 = $tmp3679;
        $tmp3677 = $tmp3678;
        $returnValue3601 = $tmp3677;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3677));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3678));
        $tmp3596 = 6;
        goto $l3594;
        $l3680:;
        return $returnValue3601;
    }
    $l3594:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters3612));
    parameters3612 = NULL;
    switch ($tmp3596) {
        case 4: goto $l3660;
        case 5: goto $l3675;
        case 3: goto $l3647;
        case 2: goto $l3627;
        case 1: goto $l3610;
        case 0: goto $l3603;
        case 6: goto $l3680;
    }
    $l3682:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3686;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3687;
    panda$collections$ImmutableArray* $returnValue3690;
    panda$collections$ImmutableArray* $tmp3691;
    panda$collections$Array* result3694 = NULL;
    panda$collections$Array* $tmp3695;
    panda$collections$Array* $tmp3696;
    org$pandalanguage$pandac$ASTNode* t3698 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3699;
    org$pandalanguage$pandac$ASTNode* $tmp3700;
    panda$collections$ImmutableArray* $tmp3702;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3708;
    org$pandalanguage$pandac$ASTNode* $tmp3710;
    org$pandalanguage$pandac$ASTNode* $tmp3711;
    org$pandalanguage$pandac$ASTNode* $tmp3712;
    panda$collections$ImmutableArray* $tmp3714;
    panda$collections$ImmutableArray* $tmp3717;
    panda$collections$ImmutableArray* $tmp3718;
    int $tmp3685;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3687, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3689 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3687, &$s3688);
        start3686 = $tmp3689;
        if (((panda$core$Bit) { !start3686.nonnull }).value) {
        {
            $tmp3691 = NULL;
            $returnValue3690 = $tmp3691;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3691));
            $tmp3685 = 0;
            goto $l3683;
            $l3692:;
            return $returnValue3690;
        }
        }
        panda$collections$Array* $tmp3697 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3697);
        $tmp3696 = $tmp3697;
        $tmp3695 = $tmp3696;
        result3694 = $tmp3695;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3695));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3696));
        org$pandalanguage$pandac$ASTNode* $tmp3701 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3700 = $tmp3701;
        $tmp3699 = $tmp3700;
        t3698 = $tmp3699;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3699));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3700));
        if (((panda$core$Bit) { t3698 == NULL }).value) {
        {
            $tmp3702 = NULL;
            $returnValue3690 = $tmp3702;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3702));
            $tmp3685 = 1;
            goto $l3683;
            $l3703:;
            return $returnValue3690;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result3694, ((panda$core$Object*) t3698));
        $l3705:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3708, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3709 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3708);
        bool $tmp3707 = ((panda$core$Bit) { $tmp3709.nonnull }).value;
        if (!$tmp3707) goto $l3706;
        {
            {
                $tmp3710 = t3698;
                org$pandalanguage$pandac$ASTNode* $tmp3713 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3712 = $tmp3713;
                $tmp3711 = $tmp3712;
                t3698 = $tmp3711;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3712));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3710));
            }
            if (((panda$core$Bit) { t3698 == NULL }).value) {
            {
                $tmp3714 = NULL;
                $returnValue3690 = $tmp3714;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3714));
                $tmp3685 = 2;
                goto $l3683;
                $l3715:;
                return $returnValue3690;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result3694, ((panda$core$Object*) t3698));
        }
        goto $l3705;
        $l3706:;
        panda$collections$ImmutableArray* $tmp3719 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3694);
        $tmp3718 = $tmp3719;
        $tmp3717 = $tmp3718;
        $returnValue3690 = $tmp3717;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3717));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3718));
        $tmp3685 = 3;
        goto $l3683;
        $l3720:;
        return $returnValue3690;
    }
    $l3683:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3698));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3694));
    result3694 = NULL;
    t3698 = NULL;
    switch ($tmp3685) {
        case 1: goto $l3703;
        case 0: goto $l3692;
        case 3: goto $l3720;
        case 2: goto $l3715;
    }
    $l3722:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a3726;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3727;
    org$pandalanguage$pandac$ASTNode* expr3730 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3731;
    org$pandalanguage$pandac$ASTNode* $tmp3733;
    org$pandalanguage$pandac$ASTNode* $tmp3734;
    org$pandalanguage$pandac$ASTNode* $tmp3735;
    org$pandalanguage$pandac$ASTNode* $returnValue3737;
    org$pandalanguage$pandac$ASTNode* $tmp3738;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3741;
    org$pandalanguage$pandac$ASTNode* $tmp3743;
    org$pandalanguage$pandac$ASTNode* $tmp3744;
    panda$core$String* $tmp3746;
    int $tmp3725;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3727, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3729 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3727, &$s3728);
        a3726 = $tmp3729;
        memset(&expr3730, 0, sizeof(expr3730));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3731, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3732 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3731);
        if (((panda$core$Bit) { $tmp3732.nonnull }).value) {
        {
            {
                $tmp3733 = expr3730;
                org$pandalanguage$pandac$ASTNode* $tmp3736 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3735 = $tmp3736;
                $tmp3734 = $tmp3735;
                expr3730 = $tmp3734;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3734));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3733));
            }
            if (((panda$core$Bit) { expr3730 == NULL }).value) {
            {
                $tmp3738 = NULL;
                $returnValue3737 = $tmp3738;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3738));
                $tmp3725 = 0;
                goto $l3723;
                $l3739:;
                return $returnValue3737;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3741, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3741, &$s3742);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3745 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3747 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a3726.value));
        $tmp3746 = $tmp3747;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3745, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) a3726.value).position, $tmp3746, expr3730);
        $tmp3744 = $tmp3745;
        $tmp3743 = $tmp3744;
        $returnValue3737 = $tmp3743;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3743));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3744));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3746));
        $tmp3725 = 1;
        goto $l3723;
        $l3748:;
        return $returnValue3737;
    }
    $l3723:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3730));
    switch ($tmp3725) {
        case 0: goto $l3739;
        case 1: goto $l3748;
    }
    $l3750:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result3754 = NULL;
    panda$collections$Array* $tmp3755;
    panda$collections$Array* $tmp3756;
    org$pandalanguage$pandac$ASTNode* a3766 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3767;
    org$pandalanguage$pandac$ASTNode* $tmp3768;
    panda$collections$ImmutableArray* $returnValue3772;
    panda$collections$ImmutableArray* $tmp3773;
    panda$collections$ImmutableArray* $tmp3774;
    int $tmp3753;
    {
        panda$collections$Array* $tmp3757 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3757);
        $tmp3756 = $tmp3757;
        $tmp3755 = $tmp3756;
        result3754 = $tmp3755;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3755));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3756));
        $l3758:;
        org$pandalanguage$pandac$parser$Token $tmp3761 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3761.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3760 = $tmp3762.value;
        if (!$tmp3760) goto $l3759;
        {
            int $tmp3765;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3769 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3768 = $tmp3769;
                $tmp3767 = $tmp3768;
                a3766 = $tmp3767;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3767));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3768));
                if (((panda$core$Bit) { a3766 == NULL }).value) {
                {
                    $tmp3765 = 0;
                    goto $l3763;
                    $l3770:;
                    goto $l3759;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3754, ((panda$core$Object*) a3766));
            }
            $tmp3765 = -1;
            goto $l3763;
            $l3763:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3766));
            a3766 = NULL;
            switch ($tmp3765) {
                case -1: goto $l3771;
                case 0: goto $l3770;
            }
            $l3771:;
        }
        goto $l3758;
        $l3759:;
        panda$collections$ImmutableArray* $tmp3775 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3754);
        $tmp3774 = $tmp3775;
        $tmp3773 = $tmp3774;
        $returnValue3772 = $tmp3773;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3773));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3774));
        $tmp3753 = 0;
        goto $l3751;
        $l3776:;
        return $returnValue3772;
    }
    $l3751:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3754));
    result3754 = NULL;
    switch ($tmp3753) {
        case 0: goto $l3776;
    }
    $l3778:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3782;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3783;
    org$pandalanguage$pandac$ASTNode* $returnValue3786;
    org$pandalanguage$pandac$ASTNode* $tmp3787;
    panda$core$MutableString* result3790 = NULL;
    panda$core$MutableString* $tmp3791;
    panda$core$MutableString* $tmp3792;
    org$pandalanguage$pandac$parser$Token next3796;
    org$pandalanguage$pandac$ASTNode* $tmp3801;
    panda$core$String* $tmp3804;
    org$pandalanguage$pandac$ASTNode* $tmp3806;
    org$pandalanguage$pandac$ASTNode* $tmp3807;
    panda$core$String* $tmp3809;
    int $tmp3781;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3783, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3785 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3783, &$s3784);
        start3782 = $tmp3785;
        if (((panda$core$Bit) { !start3782.nonnull }).value) {
        {
            $tmp3787 = NULL;
            $returnValue3786 = $tmp3787;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3787));
            $tmp3781 = 0;
            goto $l3779;
            $l3788:;
            return $returnValue3786;
        }
        }
        panda$core$MutableString* $tmp3793 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp3793);
        $tmp3792 = $tmp3793;
        $tmp3791 = $tmp3792;
        result3790 = $tmp3791;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3791));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3792));
        $l3794:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3797 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next3796 = $tmp3797;
            panda$core$Bit $tmp3798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3796.kind.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp3798.value) {
            {
                goto $l3795;
            }
            }
            panda$core$Bit $tmp3799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3796.kind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp3799.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3782.value), &$s3800);
                $tmp3801 = NULL;
                $returnValue3786 = $tmp3801;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3801));
                $tmp3781 = 1;
                goto $l3779;
                $l3802:;
                return $returnValue3786;
            }
            }
            panda$core$String* $tmp3805 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3796);
            $tmp3804 = $tmp3805;
            panda$core$MutableString$append$panda$core$String(result3790, $tmp3804);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3804));
        }
        }
        $l3795:;
        org$pandalanguage$pandac$ASTNode* $tmp3808 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3810 = panda$core$MutableString$finish$R$panda$core$String(result3790);
        $tmp3809 = $tmp3810;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3808, ((panda$core$Int64) { 38 }), ((org$pandalanguage$pandac$parser$Token) start3782.value).position, $tmp3809);
        $tmp3807 = $tmp3808;
        $tmp3806 = $tmp3807;
        $returnValue3786 = $tmp3806;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3806));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3807));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3809));
        $tmp3781 = 2;
        goto $l3779;
        $l3811:;
        return $returnValue3786;
    }
    $l3779:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3790));
    result3790 = NULL;
    switch ($tmp3781) {
        case 2: goto $l3811;
        case 1: goto $l3802;
        case 0: goto $l3788;
    }
    $l3813:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id3817;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3818;
    org$pandalanguage$pandac$ASTNode* $returnValue3821;
    org$pandalanguage$pandac$ASTNode* $tmp3822;
    org$pandalanguage$pandac$ASTNode* t3825 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3826;
    org$pandalanguage$pandac$ASTNode* $tmp3827;
    org$pandalanguage$pandac$ASTNode* $tmp3829;
    org$pandalanguage$pandac$ASTNode* $tmp3832;
    org$pandalanguage$pandac$ASTNode* $tmp3833;
    panda$core$String* $tmp3835;
    int $tmp3816;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3818, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3820 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3818, &$s3819);
        id3817 = $tmp3820;
        if (((panda$core$Bit) { !id3817.nonnull }).value) {
        {
            $tmp3822 = NULL;
            $returnValue3821 = $tmp3822;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3822));
            $tmp3816 = 0;
            goto $l3814;
            $l3823:;
            return $returnValue3821;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3828 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3827 = $tmp3828;
        $tmp3826 = $tmp3827;
        t3825 = $tmp3826;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3826));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3827));
        if (((panda$core$Bit) { t3825 == NULL }).value) {
        {
            $tmp3829 = NULL;
            $returnValue3821 = $tmp3829;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3829));
            $tmp3816 = 1;
            goto $l3814;
            $l3830:;
            return $returnValue3821;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3834 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3836 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3817.value));
        $tmp3835 = $tmp3836;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp3834, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) id3817.value).position, $tmp3835, t3825);
        $tmp3833 = $tmp3834;
        $tmp3832 = $tmp3833;
        $returnValue3821 = $tmp3832;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3832));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3833));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3835));
        $tmp3816 = 2;
        goto $l3814;
        $l3837:;
        return $returnValue3821;
    }
    $l3814:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3825));
    t3825 = NULL;
    switch ($tmp3816) {
        case 2: goto $l3837;
        case 1: goto $l3830;
        case 0: goto $l3823;
    }
    $l3839:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3843;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3844;
    panda$collections$ImmutableArray* $returnValue3847;
    panda$collections$ImmutableArray* $tmp3848;
    panda$collections$Array* result3851 = NULL;
    panda$collections$Array* $tmp3852;
    panda$collections$Array* $tmp3853;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3855;
    org$pandalanguage$pandac$ASTNode* param3860 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3861;
    org$pandalanguage$pandac$ASTNode* $tmp3862;
    panda$collections$ImmutableArray* $tmp3864;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3871;
    org$pandalanguage$pandac$ASTNode* $tmp3873;
    org$pandalanguage$pandac$ASTNode* $tmp3874;
    org$pandalanguage$pandac$ASTNode* $tmp3875;
    panda$collections$ImmutableArray* $tmp3877;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3881;
    panda$collections$ImmutableArray* $tmp3884;
    panda$collections$ImmutableArray* $tmp3889;
    panda$collections$ImmutableArray* $tmp3890;
    int $tmp3842;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3844, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3846 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3844, &$s3845);
        start3843 = $tmp3846;
        if (((panda$core$Bit) { !start3843.nonnull }).value) {
        {
            $tmp3848 = NULL;
            $returnValue3847 = $tmp3848;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3848));
            $tmp3842 = 0;
            goto $l3840;
            $l3849:;
            return $returnValue3847;
        }
        }
        panda$collections$Array* $tmp3854 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3854);
        $tmp3853 = $tmp3854;
        $tmp3852 = $tmp3853;
        result3851 = $tmp3852;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3852));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3853));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3855, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3856 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3855);
        if (((panda$core$Bit) { !$tmp3856.nonnull }).value) {
        {
            int $tmp3859;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3863 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3862 = $tmp3863;
                $tmp3861 = $tmp3862;
                param3860 = $tmp3861;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3861));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3862));
                if (((panda$core$Bit) { param3860 == NULL }).value) {
                {
                    $tmp3864 = NULL;
                    $returnValue3847 = $tmp3864;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3864));
                    $tmp3859 = 0;
                    goto $l3857;
                    $l3865:;
                    $tmp3842 = 1;
                    goto $l3840;
                    $l3866:;
                    return $returnValue3847;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3851, ((panda$core$Object*) param3860));
                $l3868:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3871, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3872 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3871);
                bool $tmp3870 = ((panda$core$Bit) { $tmp3872.nonnull }).value;
                if (!$tmp3870) goto $l3869;
                {
                    {
                        $tmp3873 = param3860;
                        org$pandalanguage$pandac$ASTNode* $tmp3876 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3875 = $tmp3876;
                        $tmp3874 = $tmp3875;
                        param3860 = $tmp3874;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3874));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3875));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3873));
                    }
                    if (((panda$core$Bit) { param3860 == NULL }).value) {
                    {
                        $tmp3877 = NULL;
                        $returnValue3847 = $tmp3877;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3877));
                        $tmp3859 = 1;
                        goto $l3857;
                        $l3878:;
                        $tmp3842 = 2;
                        goto $l3840;
                        $l3879:;
                        return $returnValue3847;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result3851, ((panda$core$Object*) param3860));
                }
                goto $l3868;
                $l3869:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3881, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3883 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3881, &$s3882);
                if (((panda$core$Bit) { !$tmp3883.nonnull }).value) {
                {
                    $tmp3884 = NULL;
                    $returnValue3847 = $tmp3884;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3884));
                    $tmp3859 = 2;
                    goto $l3857;
                    $l3885:;
                    $tmp3842 = 3;
                    goto $l3840;
                    $l3886:;
                    return $returnValue3847;
                }
                }
            }
            $tmp3859 = -1;
            goto $l3857;
            $l3857:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param3860));
            param3860 = NULL;
            switch ($tmp3859) {
                case 0: goto $l3865;
                case 1: goto $l3878;
                case 2: goto $l3885;
                case -1: goto $l3888;
            }
            $l3888:;
        }
        }
        panda$collections$ImmutableArray* $tmp3891 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3851);
        $tmp3890 = $tmp3891;
        $tmp3889 = $tmp3890;
        $returnValue3847 = $tmp3889;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3889));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3890));
        $tmp3842 = 4;
        goto $l3840;
        $l3892:;
        return $returnValue3847;
    }
    $l3840:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3851));
    result3851 = NULL;
    switch ($tmp3842) {
        case 4: goto $l3892;
        case 3: goto $l3886;
        case 2: goto $l3879;
        case 0: goto $l3849;
        case 1: goto $l3866;
    }
    $l3894:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3898;
    org$pandalanguage$pandac$parser$Token$nullable start3899;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3900;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3902;
    org$pandalanguage$pandac$ASTNode* $returnValue3905;
    org$pandalanguage$pandac$ASTNode* $tmp3906;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3909;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3910;
    panda$core$String* name3911 = NULL;
    panda$core$String* $tmp3912;
    panda$core$String* $tmp3913;
    org$pandalanguage$pandac$ASTNode* $tmp3915;
    panda$collections$ImmutableArray* generics3918 = NULL;
    panda$collections$ImmutableArray* $tmp3921;
    panda$collections$ImmutableArray* $tmp3922;
    panda$collections$ImmutableArray* $tmp3923;
    panda$collections$ImmutableArray* $tmp3925;
    panda$collections$ImmutableArray* $tmp3926;
    panda$collections$ImmutableArray* params3927 = NULL;
    panda$collections$ImmutableArray* $tmp3928;
    panda$collections$ImmutableArray* $tmp3929;
    org$pandalanguage$pandac$ASTNode* $tmp3931;
    org$pandalanguage$pandac$ASTNode* returnType3934 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3937;
    org$pandalanguage$pandac$ASTNode* $tmp3938;
    org$pandalanguage$pandac$ASTNode* $tmp3939;
    org$pandalanguage$pandac$ASTNode* $tmp3941;
    org$pandalanguage$pandac$ASTNode* $tmp3944;
    org$pandalanguage$pandac$ASTNode* $tmp3945;
    panda$collections$ImmutableArray* body3946 = NULL;
    panda$collections$ImmutableArray* $tmp3949;
    panda$collections$ImmutableArray* $tmp3950;
    panda$collections$ImmutableArray* $tmp3951;
    org$pandalanguage$pandac$ASTNode* $tmp3953;
    panda$collections$ImmutableArray* $tmp3956;
    panda$collections$ImmutableArray* $tmp3957;
    org$pandalanguage$pandac$ASTNode* $tmp3958;
    org$pandalanguage$pandac$ASTNode* $tmp3959;
    int $tmp3897;
    {
        memset(&kind3898, 0, sizeof(kind3898));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3900, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3901 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3900);
        start3899 = $tmp3901;
        if (((panda$core$Bit) { !start3899.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3902, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3904 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3902, &$s3903);
            start3899 = $tmp3904;
            if (((panda$core$Bit) { !start3899.nonnull }).value) {
            {
                $tmp3906 = NULL;
                $returnValue3905 = $tmp3906;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3906));
                $tmp3897 = 0;
                goto $l3895;
                $l3907:;
                return $returnValue3905;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3909, ((panda$core$Int64) { 0 }));
            kind3898 = $tmp3909;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3910, ((panda$core$Int64) { 1 }));
            kind3898 = $tmp3910;
        }
        }
        panda$core$String* $tmp3914 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp3913 = $tmp3914;
        $tmp3912 = $tmp3913;
        name3911 = $tmp3912;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3912));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3913));
        if (((panda$core$Bit) { name3911 == NULL }).value) {
        {
            $tmp3915 = NULL;
            $returnValue3905 = $tmp3915;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3915));
            $tmp3897 = 1;
            goto $l3895;
            $l3916:;
            return $returnValue3905;
        }
        }
        memset(&generics3918, 0, sizeof(generics3918));
        org$pandalanguage$pandac$parser$Token $tmp3919 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3919.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp3920.value) {
        {
            {
                $tmp3921 = generics3918;
                panda$collections$ImmutableArray* $tmp3924 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3923 = $tmp3924;
                $tmp3922 = $tmp3923;
                generics3918 = $tmp3922;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3923));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3921));
            }
        }
        }
        else {
        {
            {
                $tmp3925 = generics3918;
                $tmp3926 = NULL;
                generics3918 = $tmp3926;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3926));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3925));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3930 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3929 = $tmp3930;
        $tmp3928 = $tmp3929;
        params3927 = $tmp3928;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3928));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3929));
        if (((panda$core$Bit) { params3927 == NULL }).value) {
        {
            $tmp3931 = NULL;
            $returnValue3905 = $tmp3931;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3931));
            $tmp3897 = 2;
            goto $l3895;
            $l3932:;
            return $returnValue3905;
        }
        }
        memset(&returnType3934, 0, sizeof(returnType3934));
        org$pandalanguage$pandac$parser$Token $tmp3935 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3935.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3936.value) {
        {
            {
                $tmp3937 = returnType3934;
                org$pandalanguage$pandac$ASTNode* $tmp3940 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3939 = $tmp3940;
                $tmp3938 = $tmp3939;
                returnType3934 = $tmp3938;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3938));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3939));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3937));
            }
            if (((panda$core$Bit) { returnType3934 == NULL }).value) {
            {
                $tmp3941 = NULL;
                $returnValue3905 = $tmp3941;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3941));
                $tmp3897 = 3;
                goto $l3895;
                $l3942:;
                return $returnValue3905;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3944 = returnType3934;
                $tmp3945 = NULL;
                returnType3934 = $tmp3945;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3945));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3944));
            }
        }
        }
        memset(&body3946, 0, sizeof(body3946));
        org$pandalanguage$pandac$parser$Token $tmp3947 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3947.kind.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp3948.value) {
        {
            {
                $tmp3949 = body3946;
                panda$collections$ImmutableArray* $tmp3952 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3951 = $tmp3952;
                $tmp3950 = $tmp3951;
                body3946 = $tmp3950;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3950));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3949));
            }
            if (((panda$core$Bit) { body3946 == NULL }).value) {
            {
                $tmp3953 = NULL;
                $returnValue3905 = $tmp3953;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3953));
                $tmp3897 = 4;
                goto $l3895;
                $l3954:;
                return $returnValue3905;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3956 = body3946;
                $tmp3957 = NULL;
                body3946 = $tmp3957;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3957));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3956));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3960 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3960, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3899.value).position, p_doccomment, p_annotations, kind3898, name3911, generics3918, params3927, returnType3934, body3946);
        $tmp3959 = $tmp3960;
        $tmp3958 = $tmp3959;
        $returnValue3905 = $tmp3958;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3958));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3959));
        $tmp3897 = 5;
        goto $l3895;
        $l3961:;
        return $returnValue3905;
    }
    $l3895:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3946));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3934));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3927));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3918));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3911));
    name3911 = NULL;
    params3927 = NULL;
    switch ($tmp3897) {
        case 5: goto $l3961;
        case 4: goto $l3954;
        case 2: goto $l3932;
        case 3: goto $l3942;
        case 1: goto $l3916;
        case 0: goto $l3907;
    }
    $l3963:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3967;
    org$pandalanguage$pandac$parser$Token$nullable start3968;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3969;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3971;
    org$pandalanguage$pandac$ASTNode* $returnValue3974;
    org$pandalanguage$pandac$ASTNode* $tmp3975;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3978;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3979;
    panda$collections$ImmutableArray* params3980 = NULL;
    panda$collections$ImmutableArray* $tmp3981;
    panda$collections$ImmutableArray* $tmp3982;
    org$pandalanguage$pandac$ASTNode* $tmp3984;
    org$pandalanguage$pandac$ASTNode* returnType3987 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3990;
    org$pandalanguage$pandac$ASTNode* $tmp3991;
    org$pandalanguage$pandac$ASTNode* $tmp3992;
    org$pandalanguage$pandac$ASTNode* $tmp3994;
    org$pandalanguage$pandac$ASTNode* $tmp3997;
    org$pandalanguage$pandac$ASTNode* $tmp3998;
    panda$collections$ImmutableArray* body3999 = NULL;
    panda$collections$ImmutableArray* $tmp4000;
    panda$collections$ImmutableArray* $tmp4001;
    org$pandalanguage$pandac$ASTNode* $tmp4003;
    org$pandalanguage$pandac$ASTNode* $tmp4006;
    org$pandalanguage$pandac$ASTNode* $tmp4007;
    panda$collections$ImmutableArray* $tmp4009;
    int $tmp3966;
    {
        memset(&kind3967, 0, sizeof(kind3967));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3969, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3970 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3969);
        start3968 = $tmp3970;
        if (((panda$core$Bit) { !start3968.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3971, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3973 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3971, &$s3972);
            start3968 = $tmp3973;
            if (((panda$core$Bit) { !start3968.nonnull }).value) {
            {
                $tmp3975 = NULL;
                $returnValue3974 = $tmp3975;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3975));
                $tmp3966 = 0;
                goto $l3964;
                $l3976:;
                return $returnValue3974;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3978, ((panda$core$Int64) { 0 }));
            kind3967 = $tmp3978;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3979, ((panda$core$Int64) { 1 }));
            kind3967 = $tmp3979;
        }
        }
        panda$collections$ImmutableArray* $tmp3983 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3982 = $tmp3983;
        $tmp3981 = $tmp3982;
        params3980 = $tmp3981;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3981));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3982));
        if (((panda$core$Bit) { params3980 == NULL }).value) {
        {
            $tmp3984 = NULL;
            $returnValue3974 = $tmp3984;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3984));
            $tmp3966 = 1;
            goto $l3964;
            $l3985:;
            return $returnValue3974;
        }
        }
        memset(&returnType3987, 0, sizeof(returnType3987));
        org$pandalanguage$pandac$parser$Token $tmp3988 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3988.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3989.value) {
        {
            {
                $tmp3990 = returnType3987;
                org$pandalanguage$pandac$ASTNode* $tmp3993 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3992 = $tmp3993;
                $tmp3991 = $tmp3992;
                returnType3987 = $tmp3991;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3991));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3992));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3990));
            }
            if (((panda$core$Bit) { returnType3987 == NULL }).value) {
            {
                $tmp3994 = NULL;
                $returnValue3974 = $tmp3994;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3994));
                $tmp3966 = 2;
                goto $l3964;
                $l3995:;
                return $returnValue3974;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3997 = returnType3987;
                $tmp3998 = NULL;
                returnType3987 = $tmp3998;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3998));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3997));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4002 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4001 = $tmp4002;
        $tmp4000 = $tmp4001;
        body3999 = $tmp4000;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4000));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4001));
        if (((panda$core$Bit) { body3999 == NULL }).value) {
        {
            $tmp4003 = NULL;
            $returnValue3974 = $tmp4003;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4003));
            $tmp3966 = 3;
            goto $l3964;
            $l4004:;
            return $returnValue3974;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4008 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp4010 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4010);
        $tmp4009 = $tmp4010;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4008, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3968.value).position, NULL, $tmp4009, kind3967, &$s4011, NULL, params3980, returnType3987, body3999);
        $tmp4007 = $tmp4008;
        $tmp4006 = $tmp4007;
        $returnValue3974 = $tmp4006;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4006));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4007));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4009));
        $tmp3966 = 4;
        goto $l3964;
        $l4012:;
        return $returnValue3974;
    }
    $l3964:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3999));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3987));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3980));
    params3980 = NULL;
    body3999 = NULL;
    switch ($tmp3966) {
        case 3: goto $l4004;
        case 2: goto $l3995;
        case 4: goto $l4012;
        case 1: goto $l3985;
        case 0: goto $l3976;
    }
    $l4014:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4018;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4019;
    org$pandalanguage$pandac$ASTNode* $returnValue4022;
    org$pandalanguage$pandac$ASTNode* $tmp4023;
    panda$collections$ImmutableArray* params4026 = NULL;
    panda$collections$ImmutableArray* $tmp4027;
    panda$collections$ImmutableArray* $tmp4028;
    org$pandalanguage$pandac$ASTNode* $tmp4030;
    panda$collections$ImmutableArray* b4033 = NULL;
    panda$collections$ImmutableArray* $tmp4034;
    panda$collections$ImmutableArray* $tmp4035;
    org$pandalanguage$pandac$ASTNode* $tmp4037;
    org$pandalanguage$pandac$ASTNode* $tmp4040;
    org$pandalanguage$pandac$ASTNode* $tmp4041;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4043;
    int $tmp4017;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4019, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4021 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4019, &$s4020);
        start4018 = $tmp4021;
        if (((panda$core$Bit) { !start4018.nonnull }).value) {
        {
            $tmp4023 = NULL;
            $returnValue4022 = $tmp4023;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4023));
            $tmp4017 = 0;
            goto $l4015;
            $l4024:;
            return $returnValue4022;
        }
        }
        panda$collections$ImmutableArray* $tmp4029 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4028 = $tmp4029;
        $tmp4027 = $tmp4028;
        params4026 = $tmp4027;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4027));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4028));
        if (((panda$core$Bit) { params4026 == NULL }).value) {
        {
            $tmp4030 = NULL;
            $returnValue4022 = $tmp4030;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4030));
            $tmp4017 = 1;
            goto $l4015;
            $l4031:;
            return $returnValue4022;
        }
        }
        panda$collections$ImmutableArray* $tmp4036 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4035 = $tmp4036;
        $tmp4034 = $tmp4035;
        b4033 = $tmp4034;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4034));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4035));
        if (((panda$core$Bit) { b4033 == NULL }).value) {
        {
            $tmp4037 = NULL;
            $returnValue4022 = $tmp4037;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4037));
            $tmp4017 = 2;
            goto $l4015;
            $l4038:;
            return $returnValue4022;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4042 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4043, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4042, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start4018.value).position, p_doccomment, p_annotations, $tmp4043, &$s4044, NULL, params4026, NULL, b4033);
        $tmp4041 = $tmp4042;
        $tmp4040 = $tmp4041;
        $returnValue4022 = $tmp4040;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4040));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4041));
        $tmp4017 = 3;
        goto $l4015;
        $l4045:;
        return $returnValue4022;
    }
    $l4015:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b4033));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4026));
    params4026 = NULL;
    b4033 = NULL;
    switch ($tmp4017) {
        case 1: goto $l4031;
        case 3: goto $l4045;
        case 0: goto $l4024;
        case 2: goto $l4038;
    }
    $l4047:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl4051 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4052;
    org$pandalanguage$pandac$ASTNode* $tmp4053;
    org$pandalanguage$pandac$ASTNode* $returnValue4055;
    org$pandalanguage$pandac$ASTNode* $tmp4056;
    org$pandalanguage$pandac$ASTNode* $tmp4059;
    org$pandalanguage$pandac$ASTNode* $tmp4060;
    int $tmp4050;
    {
        org$pandalanguage$pandac$ASTNode* $tmp4054 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4053 = $tmp4054;
        $tmp4052 = $tmp4053;
        decl4051 = $tmp4052;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4052));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4053));
        if (((panda$core$Bit) { decl4051 == NULL }).value) {
        {
            $tmp4056 = NULL;
            $returnValue4055 = $tmp4056;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4056));
            $tmp4050 = 0;
            goto $l4048;
            $l4057:;
            return $returnValue4055;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4061 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp4063 = (($fn4062) decl4051->$class->vtable[2])(decl4051);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4061, ((panda$core$Int64) { 16 }), $tmp4063, p_doccomment, p_annotations, decl4051);
        $tmp4060 = $tmp4061;
        $tmp4059 = $tmp4060;
        $returnValue4055 = $tmp4059;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4059));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4060));
        $tmp4050 = 1;
        goto $l4048;
        $l4064:;
        return $returnValue4055;
    }
    $l4048:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4051));
    decl4051 = NULL;
    switch ($tmp4050) {
        case 1: goto $l4064;
        case 0: goto $l4057;
    }
    $l4066:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name4070;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4071;
    org$pandalanguage$pandac$ASTNode* $returnValue4074;
    org$pandalanguage$pandac$ASTNode* $tmp4075;
    panda$collections$Array* fields4078 = NULL;
    panda$collections$Array* $tmp4079;
    panda$collections$Array* $tmp4080;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4082;
    org$pandalanguage$pandac$ASTNode* field4089 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4090;
    org$pandalanguage$pandac$ASTNode* $tmp4091;
    org$pandalanguage$pandac$ASTNode* $tmp4093;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4100;
    org$pandalanguage$pandac$ASTNode* $tmp4102;
    org$pandalanguage$pandac$ASTNode* $tmp4103;
    org$pandalanguage$pandac$ASTNode* $tmp4104;
    org$pandalanguage$pandac$ASTNode* $tmp4106;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4111;
    org$pandalanguage$pandac$ASTNode* $tmp4114;
    org$pandalanguage$pandac$ASTNode* $tmp4117;
    org$pandalanguage$pandac$ASTNode* $tmp4118;
    panda$core$String* $tmp4120;
    panda$collections$ImmutableArray* $tmp4122;
    int $tmp4069;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4071, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4073 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4071, &$s4072);
        name4070 = $tmp4073;
        if (((panda$core$Bit) { !name4070.nonnull }).value) {
        {
            $tmp4075 = NULL;
            $returnValue4074 = $tmp4075;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4075));
            $tmp4069 = 0;
            goto $l4067;
            $l4076:;
            return $returnValue4074;
        }
        }
        panda$collections$Array* $tmp4081 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4081);
        $tmp4080 = $tmp4081;
        $tmp4079 = $tmp4080;
        fields4078 = $tmp4079;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4079));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4080));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4082, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4083 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4082);
        if (((panda$core$Bit) { $tmp4083.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4084 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp4085 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4084.kind.$rawValue, ((panda$core$Int64) { 104 }));
            if ($tmp4085.value) {
            {
                int $tmp4088;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4092 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4091 = $tmp4092;
                    $tmp4090 = $tmp4091;
                    field4089 = $tmp4090;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4090));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4091));
                    if (((panda$core$Bit) { field4089 == NULL }).value) {
                    {
                        $tmp4093 = NULL;
                        $returnValue4074 = $tmp4093;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4093));
                        $tmp4088 = 0;
                        goto $l4086;
                        $l4094:;
                        $tmp4069 = 1;
                        goto $l4067;
                        $l4095:;
                        return $returnValue4074;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields4078, ((panda$core$Object*) field4089));
                    $l4097:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4100, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp4101 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4100);
                    bool $tmp4099 = ((panda$core$Bit) { $tmp4101.nonnull }).value;
                    if (!$tmp4099) goto $l4098;
                    {
                        {
                            $tmp4102 = field4089;
                            org$pandalanguage$pandac$ASTNode* $tmp4105 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp4104 = $tmp4105;
                            $tmp4103 = $tmp4104;
                            field4089 = $tmp4103;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4103));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4104));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4102));
                        }
                        if (((panda$core$Bit) { field4089 == NULL }).value) {
                        {
                            $tmp4106 = NULL;
                            $returnValue4074 = $tmp4106;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4106));
                            $tmp4088 = 1;
                            goto $l4086;
                            $l4107:;
                            $tmp4069 = 2;
                            goto $l4067;
                            $l4108:;
                            return $returnValue4074;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields4078, ((panda$core$Object*) field4089));
                    }
                    goto $l4097;
                    $l4098:;
                }
                $tmp4088 = -1;
                goto $l4086;
                $l4086:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4089));
                field4089 = NULL;
                switch ($tmp4088) {
                    case -1: goto $l4110;
                    case 1: goto $l4107;
                    case 0: goto $l4094;
                }
                $l4110:;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4111, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp4113 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4111, &$s4112);
            if (((panda$core$Bit) { !$tmp4113.nonnull }).value) {
            {
                $tmp4114 = NULL;
                $returnValue4074 = $tmp4114;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4114));
                $tmp4069 = 3;
                goto $l4067;
                $l4115:;
                return $returnValue4074;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4119 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp4121 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4070.value));
        $tmp4120 = $tmp4121;
        panda$collections$ImmutableArray* $tmp4123 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields4078);
        $tmp4122 = $tmp4123;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4119, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) name4070.value).position, p_doccomment, $tmp4120, $tmp4122);
        $tmp4118 = $tmp4119;
        $tmp4117 = $tmp4118;
        $returnValue4074 = $tmp4117;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4117));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4118));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4122));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4120));
        $tmp4069 = 4;
        goto $l4067;
        $l4124:;
        return $returnValue4074;
    }
    $l4067:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields4078));
    fields4078 = NULL;
    switch ($tmp4069) {
        case 4: goto $l4124;
        case 2: goto $l4108;
        case 3: goto $l4115;
        case 1: goto $l4095;
        case 0: goto $l4076;
    }
    $l4126:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4130;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4131;
    org$pandalanguage$pandac$ASTNode* $returnValue4134;
    org$pandalanguage$pandac$ASTNode* $tmp4135;
    org$pandalanguage$pandac$parser$Token$nullable name4138;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4139;
    org$pandalanguage$pandac$ASTNode* $tmp4142;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4145;
    org$pandalanguage$pandac$ASTNode* $tmp4148;
    panda$collections$Array* members4151 = NULL;
    panda$collections$Array* $tmp4152;
    panda$collections$Array* $tmp4153;
    org$pandalanguage$pandac$ASTNode* dc4155 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4156;
    org$pandalanguage$pandac$parser$Token next4159;
    org$pandalanguage$pandac$parser$Token$Kind $match$2184_134161;
    panda$core$String* $tmp4200;
    panda$core$String* $tmp4201;
    panda$core$String* $tmp4203;
    org$pandalanguage$pandac$ASTNode* $tmp4208;
    org$pandalanguage$pandac$ASTNode* $tmp4209;
    org$pandalanguage$pandac$ASTNode* $tmp4210;
    org$pandalanguage$pandac$ASTNode* c4216 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4217;
    org$pandalanguage$pandac$ASTNode* $tmp4218;
    org$pandalanguage$pandac$ASTNode* $tmp4220;
    org$pandalanguage$pandac$ASTNode* $tmp4224;
    org$pandalanguage$pandac$ASTNode* $tmp4225;
    panda$collections$ImmutableArray* a4227 = NULL;
    panda$collections$ImmutableArray* $tmp4228;
    panda$collections$ImmutableArray* $tmp4229;
    org$pandalanguage$pandac$parser$Token next4233;
    org$pandalanguage$pandac$parser$Token$Kind $match$2208_134235;
    panda$core$String* $tmp4239;
    panda$core$String* $tmp4240;
    panda$core$String* $tmp4242;
    org$pandalanguage$pandac$ASTNode* $tmp4247;
    panda$collections$ImmutableArray* $tmp4250;
    panda$collections$ImmutableArray* $tmp4251;
    panda$collections$ImmutableArray* $tmp4252;
    panda$core$String* $tmp4260;
    panda$core$String* $tmp4261;
    panda$core$String* $tmp4263;
    org$pandalanguage$pandac$ASTNode* $tmp4268;
    org$pandalanguage$pandac$ASTNode* $tmp4271;
    org$pandalanguage$pandac$ASTNode* $tmp4272;
    org$pandalanguage$pandac$ASTNode* $tmp4273;
    org$pandalanguage$pandac$ASTNode* decl4279 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4280;
    org$pandalanguage$pandac$ASTNode* $tmp4281;
    org$pandalanguage$pandac$ASTNode* $tmp4283;
    org$pandalanguage$pandac$ASTNode* $tmp4287;
    org$pandalanguage$pandac$ASTNode* $tmp4288;
    panda$collections$ImmutableArray* $tmp4289;
    panda$collections$ImmutableArray* $tmp4290;
    panda$collections$ImmutableArray* $tmp4291;
    org$pandalanguage$pandac$ASTNode* decl4298 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4299;
    org$pandalanguage$pandac$ASTNode* $tmp4300;
    org$pandalanguage$pandac$ASTNode* $tmp4302;
    org$pandalanguage$pandac$ASTNode* $tmp4306;
    org$pandalanguage$pandac$ASTNode* $tmp4307;
    panda$collections$ImmutableArray* $tmp4308;
    panda$collections$ImmutableArray* $tmp4309;
    panda$collections$ImmutableArray* $tmp4310;
    org$pandalanguage$pandac$ASTNode* decl4317 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4318;
    org$pandalanguage$pandac$ASTNode* $tmp4319;
    org$pandalanguage$pandac$ASTNode* $tmp4321;
    org$pandalanguage$pandac$ASTNode* $tmp4325;
    org$pandalanguage$pandac$ASTNode* $tmp4326;
    panda$collections$ImmutableArray* $tmp4327;
    panda$collections$ImmutableArray* $tmp4328;
    panda$collections$ImmutableArray* $tmp4329;
    org$pandalanguage$pandac$ASTNode* decl4340 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4341;
    org$pandalanguage$pandac$ASTNode* $tmp4342;
    org$pandalanguage$pandac$ASTNode* $tmp4344;
    org$pandalanguage$pandac$ASTNode* $tmp4348;
    org$pandalanguage$pandac$ASTNode* $tmp4349;
    panda$collections$ImmutableArray* $tmp4350;
    panda$collections$ImmutableArray* $tmp4351;
    panda$collections$ImmutableArray* $tmp4352;
    org$pandalanguage$pandac$ASTNode* decl4371 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4372;
    org$pandalanguage$pandac$ASTNode* $tmp4373;
    org$pandalanguage$pandac$ASTNode* $tmp4375;
    org$pandalanguage$pandac$ASTNode* $tmp4379;
    org$pandalanguage$pandac$ASTNode* $tmp4380;
    panda$collections$ImmutableArray* $tmp4381;
    panda$collections$ImmutableArray* $tmp4382;
    panda$collections$ImmutableArray* $tmp4383;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4387;
    panda$core$String* $tmp4389;
    panda$core$String* $tmp4390;
    panda$core$String* $tmp4392;
    org$pandalanguage$pandac$ASTNode* $tmp4397;
    org$pandalanguage$pandac$ASTNode* $tmp4400;
    org$pandalanguage$pandac$ASTNode* $tmp4401;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4403;
    panda$core$String* $tmp4404;
    panda$collections$ImmutableArray* $tmp4406;
    int $tmp4129;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4131, ((panda$core$Int64) { 19 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4133 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4131, &$s4132);
        start4130 = $tmp4133;
        if (((panda$core$Bit) { !start4130.nonnull }).value) {
        {
            $tmp4135 = NULL;
            $returnValue4134 = $tmp4135;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4135));
            $tmp4129 = 0;
            goto $l4127;
            $l4136:;
            return $returnValue4134;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4139, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4141 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4139, &$s4140);
        name4138 = $tmp4141;
        if (((panda$core$Bit) { !name4138.nonnull }).value) {
        {
            $tmp4142 = NULL;
            $returnValue4134 = $tmp4142;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4142));
            $tmp4129 = 1;
            goto $l4127;
            $l4143:;
            return $returnValue4134;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4145, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4147 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4145, &$s4146);
        if (((panda$core$Bit) { !$tmp4147.nonnull }).value) {
        {
            $tmp4148 = NULL;
            $returnValue4134 = $tmp4148;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4148));
            $tmp4129 = 2;
            goto $l4127;
            $l4149:;
            return $returnValue4134;
        }
        }
        panda$collections$Array* $tmp4154 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4154);
        $tmp4153 = $tmp4154;
        $tmp4152 = $tmp4153;
        members4151 = $tmp4152;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4153));
        $tmp4156 = NULL;
        dc4155 = $tmp4156;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4156));
        $l4157:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4160 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4159 = $tmp4160;
            {
                $match$2184_134161 = next4159.kind;
                panda$core$Bit $tmp4171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134161.$rawValue, ((panda$core$Int64) { 17 }));
                bool $tmp4170 = $tmp4171.value;
                if ($tmp4170) goto $l4172;
                panda$core$Bit $tmp4173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134161.$rawValue, ((panda$core$Int64) { 18 }));
                $tmp4170 = $tmp4173.value;
                $l4172:;
                panda$core$Bit $tmp4174 = { $tmp4170 };
                bool $tmp4169 = $tmp4174.value;
                if ($tmp4169) goto $l4175;
                panda$core$Bit $tmp4176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134161.$rawValue, ((panda$core$Int64) { 19 }));
                $tmp4169 = $tmp4176.value;
                $l4175:;
                panda$core$Bit $tmp4177 = { $tmp4169 };
                bool $tmp4168 = $tmp4177.value;
                if ($tmp4168) goto $l4178;
                panda$core$Bit $tmp4179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134161.$rawValue, ((panda$core$Int64) { 21 }));
                $tmp4168 = $tmp4179.value;
                $l4178:;
                panda$core$Bit $tmp4180 = { $tmp4168 };
                bool $tmp4167 = $tmp4180.value;
                if ($tmp4167) goto $l4181;
                panda$core$Bit $tmp4182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134161.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp4167 = $tmp4182.value;
                $l4181:;
                panda$core$Bit $tmp4183 = { $tmp4167 };
                bool $tmp4166 = $tmp4183.value;
                if ($tmp4166) goto $l4184;
                panda$core$Bit $tmp4185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134161.$rawValue, ((panda$core$Int64) { 13 }));
                $tmp4166 = $tmp4185.value;
                $l4184:;
                panda$core$Bit $tmp4186 = { $tmp4166 };
                bool $tmp4165 = $tmp4186.value;
                if ($tmp4165) goto $l4187;
                panda$core$Bit $tmp4188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134161.$rawValue, ((panda$core$Int64) { 23 }));
                $tmp4165 = $tmp4188.value;
                $l4187:;
                panda$core$Bit $tmp4189 = { $tmp4165 };
                bool $tmp4164 = $tmp4189.value;
                if ($tmp4164) goto $l4190;
                panda$core$Bit $tmp4191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134161.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp4164 = $tmp4191.value;
                $l4190:;
                panda$core$Bit $tmp4192 = { $tmp4164 };
                bool $tmp4163 = $tmp4192.value;
                if ($tmp4163) goto $l4193;
                panda$core$Bit $tmp4194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134161.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp4163 = $tmp4194.value;
                $l4193:;
                panda$core$Bit $tmp4195 = { $tmp4163 };
                bool $tmp4162 = $tmp4195.value;
                if ($tmp4162) goto $l4196;
                panda$core$Bit $tmp4197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134161.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp4162 = $tmp4197.value;
                $l4196:;
                panda$core$Bit $tmp4198 = { $tmp4162 };
                if ($tmp4198.value) {
                {
                    goto $l4158;
                }
                }
                else {
                panda$core$Bit $tmp4199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134161.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp4199.value) {
                {
                    if (((panda$core$Bit) { dc4155 != NULL }).value) {
                    {
                        panda$core$String* $tmp4204 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4159);
                        $tmp4203 = $tmp4204;
                        panda$core$String* $tmp4205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4202, $tmp4203);
                        $tmp4201 = $tmp4205;
                        panda$core$String* $tmp4207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4201, &$s4206);
                        $tmp4200 = $tmp4207;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4159, $tmp4200);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4200));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4201));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4203));
                    }
                    }
                    {
                        $tmp4208 = dc4155;
                        org$pandalanguage$pandac$ASTNode* $tmp4211 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4210 = $tmp4211;
                        $tmp4209 = $tmp4210;
                        dc4155 = $tmp4209;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4209));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4210));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4208));
                    }
                }
                }
                else {
                panda$core$Bit $tmp4212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134161.$rawValue, ((panda$core$Int64) { 48 }));
                if ($tmp4212.value) {
                {
                    int $tmp4215;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4219 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4155);
                        $tmp4218 = $tmp4219;
                        $tmp4217 = $tmp4218;
                        c4216 = $tmp4217;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4217));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4218));
                        if (((panda$core$Bit) { c4216 == NULL }).value) {
                        {
                            $tmp4220 = NULL;
                            $returnValue4134 = $tmp4220;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4220));
                            $tmp4215 = 0;
                            goto $l4213;
                            $l4221:;
                            $tmp4129 = 3;
                            goto $l4127;
                            $l4222:;
                            return $returnValue4134;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4151, ((panda$core$Object*) c4216));
                        {
                            $tmp4224 = dc4155;
                            $tmp4225 = NULL;
                            dc4155 = $tmp4225;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4225));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4224));
                        }
                    }
                    $tmp4215 = -1;
                    goto $l4213;
                    $l4213:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c4216));
                    c4216 = NULL;
                    switch ($tmp4215) {
                        case -1: goto $l4226;
                        case 0: goto $l4221;
                    }
                    $l4226:;
                }
                }
                else {
                {
                    goto $l4158;
                }
                }
                }
                }
            }
        }
        }
        $l4158:;
        panda$collections$ImmutableArray* $tmp4230 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4230);
        $tmp4229 = $tmp4230;
        $tmp4228 = $tmp4229;
        a4227 = $tmp4228;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4228));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4229));
        $l4231:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4234 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4233 = $tmp4234;
            {
                $match$2208_134235 = next4233.kind;
                panda$core$Bit $tmp4236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134235.$rawValue, ((panda$core$Int64) { 13 }));
                if ($tmp4236.value) {
                {
                    panda$core$Int64 $tmp4237 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4227);
                    panda$core$Bit $tmp4238 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4237, ((panda$core$Int64) { 0 }));
                    if ($tmp4238.value) {
                    {
                        panda$core$String* $tmp4243 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4233);
                        $tmp4242 = $tmp4243;
                        panda$core$String* $tmp4244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4241, $tmp4242);
                        $tmp4240 = $tmp4244;
                        panda$core$String* $tmp4246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4240, &$s4245);
                        $tmp4239 = $tmp4246;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4233, $tmp4239);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4239));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4240));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4242));
                        $tmp4247 = NULL;
                        $returnValue4134 = $tmp4247;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4247));
                        $tmp4129 = 4;
                        goto $l4127;
                        $l4248:;
                        return $returnValue4134;
                    }
                    }
                    {
                        $tmp4250 = a4227;
                        panda$collections$ImmutableArray* $tmp4253 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp4252 = $tmp4253;
                        $tmp4251 = $tmp4252;
                        a4227 = $tmp4251;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4251));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4252));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4250));
                    }
                }
                }
                else {
                panda$core$Bit $tmp4254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134235.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp4254.value) {
                {
                    bool $tmp4255 = ((panda$core$Bit) { dc4155 != NULL }).value;
                    if ($tmp4255) goto $l4256;
                    panda$core$Int64 $tmp4257 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4227);
                    panda$core$Bit $tmp4258 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4257, ((panda$core$Int64) { 0 }));
                    $tmp4255 = $tmp4258.value;
                    $l4256:;
                    panda$core$Bit $tmp4259 = { $tmp4255 };
                    if ($tmp4259.value) {
                    {
                        panda$core$String* $tmp4264 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4233);
                        $tmp4263 = $tmp4264;
                        panda$core$String* $tmp4265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4262, $tmp4263);
                        $tmp4261 = $tmp4265;
                        panda$core$String* $tmp4267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4261, &$s4266);
                        $tmp4260 = $tmp4267;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4233, $tmp4260);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4260));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4261));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4263));
                        $tmp4268 = NULL;
                        $returnValue4134 = $tmp4268;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4268));
                        $tmp4129 = 5;
                        goto $l4127;
                        $l4269:;
                        return $returnValue4134;
                    }
                    }
                    {
                        $tmp4271 = dc4155;
                        org$pandalanguage$pandac$ASTNode* $tmp4274 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4273 = $tmp4274;
                        $tmp4272 = $tmp4273;
                        dc4155 = $tmp4272;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4272));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4273));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4271));
                    }
                }
                }
                else {
                panda$core$Bit $tmp4275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134235.$rawValue, ((panda$core$Int64) { 17 }));
                if ($tmp4275.value) {
                {
                    int $tmp4278;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4282 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4155, a4227);
                        $tmp4281 = $tmp4282;
                        $tmp4280 = $tmp4281;
                        decl4279 = $tmp4280;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4280));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4281));
                        if (((panda$core$Bit) { decl4279 == NULL }).value) {
                        {
                            $tmp4283 = NULL;
                            $returnValue4134 = $tmp4283;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4283));
                            $tmp4278 = 0;
                            goto $l4276;
                            $l4284:;
                            $tmp4129 = 6;
                            goto $l4127;
                            $l4285:;
                            return $returnValue4134;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4151, ((panda$core$Object*) decl4279));
                        {
                            $tmp4287 = dc4155;
                            $tmp4288 = NULL;
                            dc4155 = $tmp4288;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4288));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4287));
                        }
                        {
                            $tmp4289 = a4227;
                            panda$collections$ImmutableArray* $tmp4292 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4292);
                            $tmp4291 = $tmp4292;
                            $tmp4290 = $tmp4291;
                            a4227 = $tmp4290;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4290));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4291));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4289));
                        }
                    }
                    $tmp4278 = -1;
                    goto $l4276;
                    $l4276:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4279));
                    decl4279 = NULL;
                    switch ($tmp4278) {
                        case 0: goto $l4284;
                        case -1: goto $l4293;
                    }
                    $l4293:;
                }
                }
                else {
                panda$core$Bit $tmp4294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134235.$rawValue, ((panda$core$Int64) { 18 }));
                if ($tmp4294.value) {
                {
                    int $tmp4297;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4301 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4155, a4227);
                        $tmp4300 = $tmp4301;
                        $tmp4299 = $tmp4300;
                        decl4298 = $tmp4299;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4299));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4300));
                        if (((panda$core$Bit) { decl4298 == NULL }).value) {
                        {
                            $tmp4302 = NULL;
                            $returnValue4134 = $tmp4302;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4302));
                            $tmp4297 = 0;
                            goto $l4295;
                            $l4303:;
                            $tmp4129 = 7;
                            goto $l4127;
                            $l4304:;
                            return $returnValue4134;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4151, ((panda$core$Object*) decl4298));
                        {
                            $tmp4306 = dc4155;
                            $tmp4307 = NULL;
                            dc4155 = $tmp4307;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4307));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4306));
                        }
                        {
                            $tmp4308 = a4227;
                            panda$collections$ImmutableArray* $tmp4311 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4311);
                            $tmp4310 = $tmp4311;
                            $tmp4309 = $tmp4310;
                            a4227 = $tmp4309;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4309));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4310));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4308));
                        }
                    }
                    $tmp4297 = -1;
                    goto $l4295;
                    $l4295:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4298));
                    decl4298 = NULL;
                    switch ($tmp4297) {
                        case -1: goto $l4312;
                        case 0: goto $l4303;
                    }
                    $l4312:;
                }
                }
                else {
                panda$core$Bit $tmp4313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134235.$rawValue, ((panda$core$Int64) { 19 }));
                if ($tmp4313.value) {
                {
                    int $tmp4316;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4320 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4155, a4227);
                        $tmp4319 = $tmp4320;
                        $tmp4318 = $tmp4319;
                        decl4317 = $tmp4318;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4318));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4319));
                        if (((panda$core$Bit) { decl4317 == NULL }).value) {
                        {
                            $tmp4321 = NULL;
                            $returnValue4134 = $tmp4321;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4321));
                            $tmp4316 = 0;
                            goto $l4314;
                            $l4322:;
                            $tmp4129 = 8;
                            goto $l4127;
                            $l4323:;
                            return $returnValue4134;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4151, ((panda$core$Object*) decl4317));
                        {
                            $tmp4325 = dc4155;
                            $tmp4326 = NULL;
                            dc4155 = $tmp4326;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4326));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4325));
                        }
                        {
                            $tmp4327 = a4227;
                            panda$collections$ImmutableArray* $tmp4330 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4330);
                            $tmp4329 = $tmp4330;
                            $tmp4328 = $tmp4329;
                            a4227 = $tmp4328;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4328));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4329));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4327));
                        }
                    }
                    $tmp4316 = -1;
                    goto $l4314;
                    $l4314:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4317));
                    decl4317 = NULL;
                    switch ($tmp4316) {
                        case -1: goto $l4331;
                        case 0: goto $l4322;
                    }
                    $l4331:;
                }
                }
                else {
                panda$core$Bit $tmp4333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134235.$rawValue, ((panda$core$Int64) { 21 }));
                bool $tmp4332 = $tmp4333.value;
                if ($tmp4332) goto $l4334;
                panda$core$Bit $tmp4335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134235.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp4332 = $tmp4335.value;
                $l4334:;
                panda$core$Bit $tmp4336 = { $tmp4332 };
                if ($tmp4336.value) {
                {
                    int $tmp4339;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4343 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4155, a4227);
                        $tmp4342 = $tmp4343;
                        $tmp4341 = $tmp4342;
                        decl4340 = $tmp4341;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4341));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4342));
                        if (((panda$core$Bit) { decl4340 == NULL }).value) {
                        {
                            $tmp4344 = NULL;
                            $returnValue4134 = $tmp4344;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4344));
                            $tmp4339 = 0;
                            goto $l4337;
                            $l4345:;
                            $tmp4129 = 9;
                            goto $l4127;
                            $l4346:;
                            return $returnValue4134;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4151, ((panda$core$Object*) decl4340));
                        {
                            $tmp4348 = dc4155;
                            $tmp4349 = NULL;
                            dc4155 = $tmp4349;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4349));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4348));
                        }
                        {
                            $tmp4350 = a4227;
                            panda$collections$ImmutableArray* $tmp4353 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4353);
                            $tmp4352 = $tmp4353;
                            $tmp4351 = $tmp4352;
                            a4227 = $tmp4351;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4351));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4352));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4350));
                        }
                    }
                    $tmp4339 = -1;
                    goto $l4337;
                    $l4337:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4340));
                    decl4340 = NULL;
                    switch ($tmp4339) {
                        case 0: goto $l4345;
                        case -1: goto $l4354;
                    }
                    $l4354:;
                }
                }
                else {
                panda$core$Bit $tmp4358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134235.$rawValue, ((panda$core$Int64) { 23 }));
                bool $tmp4357 = $tmp4358.value;
                if ($tmp4357) goto $l4359;
                panda$core$Bit $tmp4360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134235.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp4357 = $tmp4360.value;
                $l4359:;
                panda$core$Bit $tmp4361 = { $tmp4357 };
                bool $tmp4356 = $tmp4361.value;
                if ($tmp4356) goto $l4362;
                panda$core$Bit $tmp4363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134235.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp4356 = $tmp4363.value;
                $l4362:;
                panda$core$Bit $tmp4364 = { $tmp4356 };
                bool $tmp4355 = $tmp4364.value;
                if ($tmp4355) goto $l4365;
                panda$core$Bit $tmp4366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134235.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp4355 = $tmp4366.value;
                $l4365:;
                panda$core$Bit $tmp4367 = { $tmp4355 };
                if ($tmp4367.value) {
                {
                    int $tmp4370;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4374 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4155, a4227);
                        $tmp4373 = $tmp4374;
                        $tmp4372 = $tmp4373;
                        decl4371 = $tmp4372;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4372));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4373));
                        if (((panda$core$Bit) { decl4371 == NULL }).value) {
                        {
                            $tmp4375 = NULL;
                            $returnValue4134 = $tmp4375;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4375));
                            $tmp4370 = 0;
                            goto $l4368;
                            $l4376:;
                            $tmp4129 = 10;
                            goto $l4127;
                            $l4377:;
                            return $returnValue4134;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4151, ((panda$core$Object*) decl4371));
                        {
                            $tmp4379 = dc4155;
                            $tmp4380 = NULL;
                            dc4155 = $tmp4380;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4380));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4379));
                        }
                        {
                            $tmp4381 = a4227;
                            panda$collections$ImmutableArray* $tmp4384 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4384);
                            $tmp4383 = $tmp4384;
                            $tmp4382 = $tmp4383;
                            a4227 = $tmp4382;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4382));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4383));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4381));
                        }
                    }
                    $tmp4370 = -1;
                    goto $l4368;
                    $l4368:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4371));
                    decl4371 = NULL;
                    switch ($tmp4370) {
                        case -1: goto $l4385;
                        case 0: goto $l4376;
                    }
                    $l4385:;
                }
                }
                else {
                panda$core$Bit $tmp4386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134235.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp4386.value) {
                {
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4387, ((panda$core$Int64) { 100 }));
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4387, &$s4388);
                    goto $l4232;
                }
                }
                else {
                {
                    panda$core$String* $tmp4393 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4233);
                    $tmp4392 = $tmp4393;
                    panda$core$String* $tmp4394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4391, $tmp4392);
                    $tmp4390 = $tmp4394;
                    panda$core$String* $tmp4396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4390, &$s4395);
                    $tmp4389 = $tmp4396;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4233, $tmp4389);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4389));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4390));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4392));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp4397 = NULL;
                    $returnValue4134 = $tmp4397;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4397));
                    $tmp4129 = 11;
                    goto $l4127;
                    $l4398:;
                    return $returnValue4134;
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
        $l4232:;
        org$pandalanguage$pandac$ASTNode* $tmp4402 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4403, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp4405 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4138.value));
        $tmp4404 = $tmp4405;
        panda$collections$ImmutableArray* $tmp4407 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4151);
        $tmp4406 = $tmp4407;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4402, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4130.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp4403, $tmp4404, NULL, NULL, $tmp4406);
        $tmp4401 = $tmp4402;
        $tmp4400 = $tmp4401;
        $returnValue4134 = $tmp4400;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4400));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4406));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4404));
        $tmp4129 = 12;
        goto $l4127;
        $l4408:;
        return $returnValue4134;
    }
    $l4127:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4227));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4155));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4151));
    members4151 = NULL;
    a4227 = NULL;
    switch ($tmp4129) {
        case 8: goto $l4323;
        case 3: goto $l4222;
        case 10: goto $l4377;
        case 4: goto $l4248;
        case 6: goto $l4285;
        case 9: goto $l4346;
        case 5: goto $l4269;
        case 1: goto $l4143;
        case 12: goto $l4408;
        case 7: goto $l4304;
        case 2: goto $l4149;
        case 11: goto $l4398;
        case 0: goto $l4136;
    }
    $l4410:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start4414;
    org$pandalanguage$pandac$ASTNode* dc4416 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4418;
    org$pandalanguage$pandac$ASTNode* $tmp4419;
    org$pandalanguage$pandac$ASTNode* $tmp4420;
    org$pandalanguage$pandac$ASTNode* $returnValue4422;
    org$pandalanguage$pandac$ASTNode* $tmp4423;
    org$pandalanguage$pandac$ASTNode* $tmp4426;
    org$pandalanguage$pandac$ASTNode* $tmp4427;
    panda$collections$ImmutableArray* a4428 = NULL;
    panda$collections$ImmutableArray* $tmp4429;
    panda$collections$ImmutableArray* $tmp4430;
    org$pandalanguage$pandac$ASTNode* $tmp4432;
    org$pandalanguage$pandac$parser$Token$Kind $match$2294_94435;
    org$pandalanguage$pandac$ASTNode* $tmp4438;
    org$pandalanguage$pandac$ASTNode* $tmp4439;
    org$pandalanguage$pandac$ASTNode* $tmp4444;
    org$pandalanguage$pandac$ASTNode* $tmp4445;
    org$pandalanguage$pandac$ASTNode* $tmp4450;
    org$pandalanguage$pandac$ASTNode* $tmp4451;
    org$pandalanguage$pandac$ASTNode* $tmp4460;
    org$pandalanguage$pandac$ASTNode* $tmp4461;
    org$pandalanguage$pandac$ASTNode* $tmp4466;
    org$pandalanguage$pandac$ASTNode* $tmp4467;
    org$pandalanguage$pandac$ASTNode* $tmp4484;
    org$pandalanguage$pandac$ASTNode* $tmp4485;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4489;
    org$pandalanguage$pandac$ASTNode* $tmp4491;
    int $tmp4413;
    {
        org$pandalanguage$pandac$parser$Token $tmp4415 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start4414 = $tmp4415;
        memset(&dc4416, 0, sizeof(dc4416));
        panda$core$Bit $tmp4417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start4414.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp4417.value) {
        {
            {
                $tmp4418 = dc4416;
                org$pandalanguage$pandac$ASTNode* $tmp4421 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4420 = $tmp4421;
                $tmp4419 = $tmp4420;
                dc4416 = $tmp4419;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4419));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4420));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4418));
            }
            if (((panda$core$Bit) { dc4416 == NULL }).value) {
            {
                $tmp4423 = NULL;
                $returnValue4422 = $tmp4423;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4423));
                $tmp4413 = 0;
                goto $l4411;
                $l4424:;
                return $returnValue4422;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4426 = dc4416;
                $tmp4427 = NULL;
                dc4416 = $tmp4427;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4427));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4426));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4431 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp4430 = $tmp4431;
        $tmp4429 = $tmp4430;
        a4428 = $tmp4429;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4430));
        if (((panda$core$Bit) { a4428 == NULL }).value) {
        {
            $tmp4432 = NULL;
            $returnValue4422 = $tmp4432;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4432));
            $tmp4413 = 1;
            goto $l4411;
            $l4433:;
            return $returnValue4422;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp4436 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2294_94435 = $tmp4436.kind;
            panda$core$Bit $tmp4437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94435.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp4437.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4440 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4416, a4428);
                $tmp4439 = $tmp4440;
                $tmp4438 = $tmp4439;
                $returnValue4422 = $tmp4438;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4438));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4439));
                $tmp4413 = 2;
                goto $l4411;
                $l4441:;
                return $returnValue4422;
            }
            }
            else {
            panda$core$Bit $tmp4443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94435.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp4443.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4446 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4416, a4428);
                $tmp4445 = $tmp4446;
                $tmp4444 = $tmp4445;
                $returnValue4422 = $tmp4444;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4444));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4445));
                $tmp4413 = 3;
                goto $l4411;
                $l4447:;
                return $returnValue4422;
            }
            }
            else {
            panda$core$Bit $tmp4449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94435.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp4449.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4452 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4416, a4428);
                $tmp4451 = $tmp4452;
                $tmp4450 = $tmp4451;
                $returnValue4422 = $tmp4450;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4450));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4451));
                $tmp4413 = 4;
                goto $l4411;
                $l4453:;
                return $returnValue4422;
            }
            }
            else {
            panda$core$Bit $tmp4456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94435.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp4455 = $tmp4456.value;
            if ($tmp4455) goto $l4457;
            panda$core$Bit $tmp4458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94435.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp4455 = $tmp4458.value;
            $l4457:;
            panda$core$Bit $tmp4459 = { $tmp4455 };
            if ($tmp4459.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4462 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4416, a4428);
                $tmp4461 = $tmp4462;
                $tmp4460 = $tmp4461;
                $returnValue4422 = $tmp4460;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4460));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4461));
                $tmp4413 = 5;
                goto $l4411;
                $l4463:;
                return $returnValue4422;
            }
            }
            else {
            panda$core$Bit $tmp4465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94435.$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp4465.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4468 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4416, a4428);
                $tmp4467 = $tmp4468;
                $tmp4466 = $tmp4467;
                $returnValue4422 = $tmp4466;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4466));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4467));
                $tmp4413 = 6;
                goto $l4411;
                $l4469:;
                return $returnValue4422;
            }
            }
            else {
            panda$core$Bit $tmp4474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94435.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp4473 = $tmp4474.value;
            if ($tmp4473) goto $l4475;
            panda$core$Bit $tmp4476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94435.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp4473 = $tmp4476.value;
            $l4475:;
            panda$core$Bit $tmp4477 = { $tmp4473 };
            bool $tmp4472 = $tmp4477.value;
            if ($tmp4472) goto $l4478;
            panda$core$Bit $tmp4479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94435.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp4472 = $tmp4479.value;
            $l4478:;
            panda$core$Bit $tmp4480 = { $tmp4472 };
            bool $tmp4471 = $tmp4480.value;
            if ($tmp4471) goto $l4481;
            panda$core$Bit $tmp4482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94435.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp4471 = $tmp4482.value;
            $l4481:;
            panda$core$Bit $tmp4483 = { $tmp4471 };
            if ($tmp4483.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4486 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4416, a4428);
                $tmp4485 = $tmp4486;
                $tmp4484 = $tmp4485;
                $returnValue4422 = $tmp4484;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4484));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4485));
                $tmp4413 = 7;
                goto $l4411;
                $l4487:;
                return $returnValue4422;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4489, ((panda$core$Int64) { 17 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4489, &$s4490);
                $tmp4491 = NULL;
                $returnValue4422 = $tmp4491;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4491));
                $tmp4413 = 8;
                goto $l4411;
                $l4492:;
                return $returnValue4422;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp4413 = -1;
    goto $l4411;
    $l4411:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4428));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4416));
    a4428 = NULL;
    switch ($tmp4413) {
        case 4: goto $l4453;
        case 8: goto $l4492;
        case 5: goto $l4463;
        case 2: goto $l4441;
        case 1: goto $l4433;
        case 6: goto $l4469;
        case -1: goto $l4494;
        case 7: goto $l4487;
        case 3: goto $l4447;
        case 0: goto $l4424;
    }
    $l4494:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4498;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4499;
    org$pandalanguage$pandac$ASTNode* $returnValue4502;
    org$pandalanguage$pandac$ASTNode* $tmp4503;
    org$pandalanguage$pandac$parser$Token$nullable name4506;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4507;
    org$pandalanguage$pandac$ASTNode* $tmp4510;
    panda$collections$ImmutableArray* generics4513 = NULL;
    panda$collections$ImmutableArray* $tmp4516;
    panda$collections$ImmutableArray* $tmp4517;
    panda$collections$ImmutableArray* $tmp4518;
    org$pandalanguage$pandac$ASTNode* $tmp4520;
    panda$collections$ImmutableArray* $tmp4523;
    panda$collections$ImmutableArray* $tmp4524;
    panda$collections$ImmutableArray* stypes4525 = NULL;
    panda$collections$ImmutableArray* $tmp4528;
    panda$collections$ImmutableArray* $tmp4529;
    panda$collections$ImmutableArray* $tmp4530;
    org$pandalanguage$pandac$ASTNode* $tmp4532;
    panda$collections$ImmutableArray* $tmp4535;
    panda$collections$ImmutableArray* $tmp4536;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4537;
    org$pandalanguage$pandac$ASTNode* $tmp4540;
    panda$collections$Array* members4543 = NULL;
    panda$collections$Array* $tmp4544;
    panda$collections$Array* $tmp4545;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4550;
    org$pandalanguage$pandac$ASTNode* member4555 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4556;
    org$pandalanguage$pandac$ASTNode* $tmp4557;
    org$pandalanguage$pandac$ASTNode* $tmp4559;
    org$pandalanguage$pandac$ASTNode* $tmp4564;
    org$pandalanguage$pandac$ASTNode* $tmp4565;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4567;
    panda$core$String* $tmp4568;
    panda$collections$ImmutableArray* $tmp4570;
    int $tmp4497;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4499, ((panda$core$Int64) { 17 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4501 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4499, &$s4500);
        start4498 = $tmp4501;
        if (((panda$core$Bit) { !start4498.nonnull }).value) {
        {
            $tmp4503 = NULL;
            $returnValue4502 = $tmp4503;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4503));
            $tmp4497 = 0;
            goto $l4495;
            $l4504:;
            return $returnValue4502;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4507, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4509 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4507, &$s4508);
        name4506 = $tmp4509;
        if (((panda$core$Bit) { !name4506.nonnull }).value) {
        {
            $tmp4510 = NULL;
            $returnValue4502 = $tmp4510;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4510));
            $tmp4497 = 1;
            goto $l4495;
            $l4511:;
            return $returnValue4502;
        }
        }
        memset(&generics4513, 0, sizeof(generics4513));
        org$pandalanguage$pandac$parser$Token $tmp4514 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4514.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4515.value) {
        {
            {
                $tmp4516 = generics4513;
                panda$collections$ImmutableArray* $tmp4519 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4518 = $tmp4519;
                $tmp4517 = $tmp4518;
                generics4513 = $tmp4517;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4517));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4518));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4516));
            }
            if (((panda$core$Bit) { generics4513 == NULL }).value) {
            {
                $tmp4520 = NULL;
                $returnValue4502 = $tmp4520;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4520));
                $tmp4497 = 2;
                goto $l4495;
                $l4521:;
                return $returnValue4502;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4523 = generics4513;
                $tmp4524 = NULL;
                generics4513 = $tmp4524;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4524));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4523));
            }
        }
        }
        memset(&stypes4525, 0, sizeof(stypes4525));
        org$pandalanguage$pandac$parser$Token $tmp4526 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4526.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp4527.value) {
        {
            {
                $tmp4528 = stypes4525;
                panda$collections$ImmutableArray* $tmp4531 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4530 = $tmp4531;
                $tmp4529 = $tmp4530;
                stypes4525 = $tmp4529;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4529));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4530));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4528));
            }
            if (((panda$core$Bit) { stypes4525 == NULL }).value) {
            {
                $tmp4532 = NULL;
                $returnValue4502 = $tmp4532;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4532));
                $tmp4497 = 3;
                goto $l4495;
                $l4533:;
                return $returnValue4502;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4535 = stypes4525;
                $tmp4536 = NULL;
                stypes4525 = $tmp4536;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4536));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4535));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4537, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4539 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4537, &$s4538);
        if (((panda$core$Bit) { !$tmp4539.nonnull }).value) {
        {
            $tmp4540 = NULL;
            $returnValue4502 = $tmp4540;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4540));
            $tmp4497 = 4;
            goto $l4495;
            $l4541:;
            return $returnValue4502;
        }
        }
        panda$collections$Array* $tmp4546 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4546);
        $tmp4545 = $tmp4546;
        $tmp4544 = $tmp4545;
        members4543 = $tmp4544;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4544));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4545));
        $l4547:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4550, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4551 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4550);
        bool $tmp4549 = ((panda$core$Bit) { !$tmp4551.nonnull }).value;
        if (!$tmp4549) goto $l4548;
        {
            int $tmp4554;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4558 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4557 = $tmp4558;
                $tmp4556 = $tmp4557;
                member4555 = $tmp4556;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4556));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4557));
                if (((panda$core$Bit) { member4555 == NULL }).value) {
                {
                    $tmp4559 = NULL;
                    $returnValue4502 = $tmp4559;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4559));
                    $tmp4554 = 0;
                    goto $l4552;
                    $l4560:;
                    $tmp4497 = 5;
                    goto $l4495;
                    $l4561:;
                    return $returnValue4502;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4543, ((panda$core$Object*) member4555));
            }
            $tmp4554 = -1;
            goto $l4552;
            $l4552:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4555));
            member4555 = NULL;
            switch ($tmp4554) {
                case 0: goto $l4560;
                case -1: goto $l4563;
            }
            $l4563:;
        }
        goto $l4547;
        $l4548:;
        org$pandalanguage$pandac$ASTNode* $tmp4566 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4567, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4569 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4506.value));
        $tmp4568 = $tmp4569;
        panda$collections$ImmutableArray* $tmp4571 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4543);
        $tmp4570 = $tmp4571;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4566, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4498.value).position, p_doccomment, p_annotations, $tmp4567, $tmp4568, generics4513, stypes4525, $tmp4570);
        $tmp4565 = $tmp4566;
        $tmp4564 = $tmp4565;
        $returnValue4502 = $tmp4564;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4564));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4565));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4570));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4568));
        $tmp4497 = 6;
        goto $l4495;
        $l4572:;
        return $returnValue4502;
    }
    $l4495:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4543));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes4525));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4513));
    members4543 = NULL;
    switch ($tmp4497) {
        case 6: goto $l4572;
        case 2: goto $l4521;
        case 1: goto $l4511;
        case 0: goto $l4504;
        case 5: goto $l4561;
        case 4: goto $l4541;
        case 3: goto $l4533;
    }
    $l4574:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4578;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4579;
    org$pandalanguage$pandac$ASTNode* $returnValue4582;
    org$pandalanguage$pandac$ASTNode* $tmp4583;
    org$pandalanguage$pandac$parser$Token$nullable name4586;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4587;
    org$pandalanguage$pandac$ASTNode* $tmp4590;
    panda$collections$ImmutableArray* generics4593 = NULL;
    panda$collections$ImmutableArray* $tmp4596;
    panda$collections$ImmutableArray* $tmp4597;
    panda$collections$ImmutableArray* $tmp4598;
    org$pandalanguage$pandac$ASTNode* $tmp4600;
    panda$collections$ImmutableArray* $tmp4603;
    panda$collections$ImmutableArray* $tmp4604;
    panda$collections$ImmutableArray* $tmp4605;
    panda$collections$Array* intfs4607 = NULL;
    panda$collections$Array* $tmp4608;
    panda$collections$Array* $tmp4609;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4611;
    org$pandalanguage$pandac$ASTNode* t4616 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4617;
    org$pandalanguage$pandac$ASTNode* $tmp4618;
    org$pandalanguage$pandac$ASTNode* $tmp4620;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4627;
    org$pandalanguage$pandac$ASTNode* $tmp4629;
    org$pandalanguage$pandac$ASTNode* $tmp4630;
    org$pandalanguage$pandac$ASTNode* $tmp4631;
    org$pandalanguage$pandac$ASTNode* $tmp4633;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4638;
    org$pandalanguage$pandac$ASTNode* $tmp4641;
    panda$collections$Array* members4644 = NULL;
    panda$collections$Array* $tmp4645;
    panda$collections$Array* $tmp4646;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4651;
    org$pandalanguage$pandac$ASTNode* member4656 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4657;
    org$pandalanguage$pandac$ASTNode* $tmp4658;
    org$pandalanguage$pandac$ASTNode* $tmp4660;
    org$pandalanguage$pandac$ASTNode* $tmp4665;
    org$pandalanguage$pandac$ASTNode* $tmp4666;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4668;
    panda$core$String* $tmp4669;
    panda$collections$ImmutableArray* $tmp4671;
    panda$collections$ImmutableArray* $tmp4673;
    int $tmp4577;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4579, ((panda$core$Int64) { 18 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4581 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4579, &$s4580);
        start4578 = $tmp4581;
        if (((panda$core$Bit) { !start4578.nonnull }).value) {
        {
            $tmp4583 = NULL;
            $returnValue4582 = $tmp4583;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4583));
            $tmp4577 = 0;
            goto $l4575;
            $l4584:;
            return $returnValue4582;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4587, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4589 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4587, &$s4588);
        name4586 = $tmp4589;
        if (((panda$core$Bit) { !name4586.nonnull }).value) {
        {
            $tmp4590 = NULL;
            $returnValue4582 = $tmp4590;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4590));
            $tmp4577 = 1;
            goto $l4575;
            $l4591:;
            return $returnValue4582;
        }
        }
        memset(&generics4593, 0, sizeof(generics4593));
        org$pandalanguage$pandac$parser$Token $tmp4594 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4594.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4595.value) {
        {
            {
                $tmp4596 = generics4593;
                panda$collections$ImmutableArray* $tmp4599 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4598 = $tmp4599;
                $tmp4597 = $tmp4598;
                generics4593 = $tmp4597;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4597));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4598));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4596));
            }
            if (((panda$core$Bit) { generics4593 == NULL }).value) {
            {
                $tmp4600 = NULL;
                $returnValue4582 = $tmp4600;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4600));
                $tmp4577 = 2;
                goto $l4575;
                $l4601:;
                return $returnValue4582;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4603 = generics4593;
                panda$collections$ImmutableArray* $tmp4606 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp4606);
                $tmp4605 = $tmp4606;
                $tmp4604 = $tmp4605;
                generics4593 = $tmp4604;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4604));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4605));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4603));
            }
        }
        }
        panda$collections$Array* $tmp4610 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4610);
        $tmp4609 = $tmp4610;
        $tmp4608 = $tmp4609;
        intfs4607 = $tmp4608;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4608));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4609));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4611, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4612 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4611);
        if (((panda$core$Bit) { $tmp4612.nonnull }).value) {
        {
            int $tmp4615;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4619 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4618 = $tmp4619;
                $tmp4617 = $tmp4618;
                t4616 = $tmp4617;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4617));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4618));
                if (((panda$core$Bit) { t4616 == NULL }).value) {
                {
                    $tmp4620 = NULL;
                    $returnValue4582 = $tmp4620;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4620));
                    $tmp4615 = 0;
                    goto $l4613;
                    $l4621:;
                    $tmp4577 = 3;
                    goto $l4575;
                    $l4622:;
                    return $returnValue4582;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs4607, ((panda$core$Object*) t4616));
                $l4624:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4627, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp4628 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4627);
                bool $tmp4626 = ((panda$core$Bit) { $tmp4628.nonnull }).value;
                if (!$tmp4626) goto $l4625;
                {
                    {
                        $tmp4629 = t4616;
                        org$pandalanguage$pandac$ASTNode* $tmp4632 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4631 = $tmp4632;
                        $tmp4630 = $tmp4631;
                        t4616 = $tmp4630;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4630));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4631));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4629));
                    }
                    if (((panda$core$Bit) { t4616 == NULL }).value) {
                    {
                        $tmp4633 = NULL;
                        $returnValue4582 = $tmp4633;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4633));
                        $tmp4615 = 1;
                        goto $l4613;
                        $l4634:;
                        $tmp4577 = 4;
                        goto $l4575;
                        $l4635:;
                        return $returnValue4582;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs4607, ((panda$core$Object*) t4616));
                }
                goto $l4624;
                $l4625:;
            }
            $tmp4615 = -1;
            goto $l4613;
            $l4613:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4616));
            t4616 = NULL;
            switch ($tmp4615) {
                case 0: goto $l4621;
                case -1: goto $l4637;
                case 1: goto $l4634;
            }
            $l4637:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4638, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4640 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4638, &$s4639);
        if (((panda$core$Bit) { !$tmp4640.nonnull }).value) {
        {
            $tmp4641 = NULL;
            $returnValue4582 = $tmp4641;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4641));
            $tmp4577 = 5;
            goto $l4575;
            $l4642:;
            return $returnValue4582;
        }
        }
        panda$collections$Array* $tmp4647 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4647);
        $tmp4646 = $tmp4647;
        $tmp4645 = $tmp4646;
        members4644 = $tmp4645;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4645));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4646));
        $l4648:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4651, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4652 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4651);
        bool $tmp4650 = ((panda$core$Bit) { !$tmp4652.nonnull }).value;
        if (!$tmp4650) goto $l4649;
        {
            int $tmp4655;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4659 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4658 = $tmp4659;
                $tmp4657 = $tmp4658;
                member4656 = $tmp4657;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4658));
                if (((panda$core$Bit) { member4656 == NULL }).value) {
                {
                    $tmp4660 = NULL;
                    $returnValue4582 = $tmp4660;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4660));
                    $tmp4655 = 0;
                    goto $l4653;
                    $l4661:;
                    $tmp4577 = 6;
                    goto $l4575;
                    $l4662:;
                    return $returnValue4582;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4644, ((panda$core$Object*) member4656));
            }
            $tmp4655 = -1;
            goto $l4653;
            $l4653:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4656));
            member4656 = NULL;
            switch ($tmp4655) {
                case -1: goto $l4664;
                case 0: goto $l4661;
            }
            $l4664:;
        }
        goto $l4648;
        $l4649:;
        org$pandalanguage$pandac$ASTNode* $tmp4667 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4668, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp4670 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4586.value));
        $tmp4669 = $tmp4670;
        panda$collections$ImmutableArray* $tmp4672 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs4607);
        $tmp4671 = $tmp4672;
        panda$collections$ImmutableArray* $tmp4674 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4644);
        $tmp4673 = $tmp4674;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4667, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4578.value).position, p_doccomment, p_annotations, $tmp4668, $tmp4669, generics4593, $tmp4671, $tmp4673);
        $tmp4666 = $tmp4667;
        $tmp4665 = $tmp4666;
        $returnValue4582 = $tmp4665;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4665));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4666));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4673));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4671));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4669));
        $tmp4577 = 7;
        goto $l4575;
        $l4675:;
        return $returnValue4582;
    }
    $l4575:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4644));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs4607));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4593));
    intfs4607 = NULL;
    members4644 = NULL;
    switch ($tmp4577) {
        case 1: goto $l4591;
        case 5: goto $l4642;
        case 7: goto $l4675;
        case 6: goto $l4662;
        case 2: goto $l4601;
        case 4: goto $l4635;
        case 3: goto $l4622;
        case 0: goto $l4584;
    }
    $l4677:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2418_94678;
    org$pandalanguage$pandac$ASTNode* $returnValue4681;
    org$pandalanguage$pandac$ASTNode* $tmp4682;
    org$pandalanguage$pandac$ASTNode* $tmp4683;
    org$pandalanguage$pandac$ASTNode* $tmp4687;
    org$pandalanguage$pandac$ASTNode* $tmp4688;
    org$pandalanguage$pandac$ASTNode* $tmp4691;
    org$pandalanguage$pandac$ASTNode* $tmp4692;
    {
        org$pandalanguage$pandac$parser$Token $tmp4679 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2418_94678 = $tmp4679.kind;
        panda$core$Bit $tmp4680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2418_94678.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp4680.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4684 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4683 = $tmp4684;
            $tmp4682 = $tmp4683;
            $returnValue4681 = $tmp4682;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4682));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4683));
            return $returnValue4681;
        }
        }
        else {
        panda$core$Bit $tmp4686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2418_94678.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp4686.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4689 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4688 = $tmp4689;
            $tmp4687 = $tmp4688;
            $returnValue4681 = $tmp4687;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4687));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4688));
            return $returnValue4681;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4693 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4692 = $tmp4693;
            $tmp4691 = $tmp4692;
            $returnValue4681 = $tmp4691;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4691));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4692));
            return $returnValue4681;
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries4698 = NULL;
    panda$collections$Array* $tmp4699;
    panda$collections$Array* $tmp4700;
    org$pandalanguage$pandac$ASTNode* entry4710 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4711;
    org$pandalanguage$pandac$ASTNode* $tmp4712;
    org$pandalanguage$pandac$ASTNode* $returnValue4714;
    org$pandalanguage$pandac$ASTNode* $tmp4715;
    org$pandalanguage$pandac$ASTNode* $tmp4724;
    org$pandalanguage$pandac$ASTNode* $tmp4725;
    panda$collections$ImmutableArray* $tmp4727;
    int $tmp4697;
    {
        panda$collections$Array* $tmp4701 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4701);
        $tmp4700 = $tmp4701;
        $tmp4699 = $tmp4700;
        entries4698 = $tmp4699;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4699));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4700));
        $l4702:;
        org$pandalanguage$pandac$parser$Token $tmp4705 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4706 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4705.kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp4704 = $tmp4706.value;
        if (!$tmp4704) goto $l4703;
        {
            int $tmp4709;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4713 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4712 = $tmp4713;
                $tmp4711 = $tmp4712;
                entry4710 = $tmp4711;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4712));
                if (((panda$core$Bit) { entry4710 == NULL }).value) {
                {
                    $tmp4715 = NULL;
                    $returnValue4714 = $tmp4715;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4715));
                    $tmp4709 = 0;
                    goto $l4707;
                    $l4716:;
                    $tmp4697 = 0;
                    goto $l4695;
                    $l4717:;
                    return $returnValue4714;
                }
                }
                panda$core$Bit $tmp4719 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                if ($tmp4719.value) goto $l4720; else goto $l4721;
                $l4721:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4722, (panda$core$Int64) { 2438 });
                abort();
                $l4720:;
                panda$collections$Array$add$panda$collections$Array$T(entries4698, ((panda$core$Object*) entry4710));
            }
            $tmp4709 = -1;
            goto $l4707;
            $l4707:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry4710));
            entry4710 = NULL;
            switch ($tmp4709) {
                case 0: goto $l4716;
                case -1: goto $l4723;
            }
            $l4723:;
        }
        goto $l4702;
        $l4703:;
        org$pandalanguage$pandac$ASTNode* $tmp4726 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp4728 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries4698);
        $tmp4727 = $tmp4728;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4726, ((panda$core$Int64) { 17 }), $tmp4727);
        $tmp4725 = $tmp4726;
        $tmp4724 = $tmp4725;
        $returnValue4714 = $tmp4724;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4724));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4725));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4727));
        $tmp4697 = 1;
        goto $l4695;
        $l4729:;
        return $returnValue4714;
    }
    $l4695:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries4698));
    entries4698 = NULL;
    switch ($tmp4697) {
        case 1: goto $l4729;
        case 0: goto $l4717;
    }
    $l4731:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp4734;
    {
    }
    $tmp4734 = -1;
    goto $l4732;
    $l4732:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4734) {
        case -1: goto $l4735;
    }
    $l4735:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->regexParser));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

