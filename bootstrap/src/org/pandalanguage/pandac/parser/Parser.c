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

typedef org$pandalanguage$pandac$Position (*$fn151)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn211)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn311)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn371)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn378)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn386)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn393)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn484)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn551)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn558)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn565)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn578)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn603)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn610)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn623)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1857)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2989)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3014)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3061)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn4044)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x61\x76\x65\x20\x74\x75\x70\x6c\x65\x20\x61\x74\x20", 14, -2110090616446303392, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s2353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s2608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s3322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s3491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s3544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s3589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s3670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s3724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s3782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s3801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s4373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s4482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s4490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s4570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

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
    PANDA_ASSERT($tmp105.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp106;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp107 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp108 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp107, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp106, $tmp108, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp110 = $tmp106.start.value;
    panda$core$Int64 i109 = { $tmp110 };
    int64_t $tmp112 = $tmp106.end.value;
    int64_t $tmp113 = $tmp106.step.value;
    bool $tmp114 = $tmp106.inclusive.value;
    bool $tmp121 = $tmp113 > 0;
    if ($tmp121) goto $l119; else goto $l120;
    $l119:;
    if ($tmp114) goto $l122; else goto $l123;
    $l122:;
    if ($tmp110 <= $tmp112) goto $l115; else goto $l117;
    $l123:;
    if ($tmp110 < $tmp112) goto $l115; else goto $l117;
    $l120:;
    if ($tmp114) goto $l124; else goto $l125;
    $l124:;
    if ($tmp110 >= $tmp112) goto $l115; else goto $l117;
    $l125:;
    if ($tmp110 > $tmp112) goto $l115; else goto $l117;
    $l115:;
    {
        org$pandalanguage$pandac$parser$Token $tmp127 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i109);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp127);
    }
    $l118:;
    if ($tmp121) goto $l129; else goto $l130;
    $l129:;
    int64_t $tmp131 = $tmp112 - i109.value;
    if ($tmp114) goto $l132; else goto $l133;
    $l132:;
    if ((uint64_t) $tmp131 >= $tmp113) goto $l128; else goto $l117;
    $l133:;
    if ((uint64_t) $tmp131 > $tmp113) goto $l128; else goto $l117;
    $l130:;
    int64_t $tmp135 = i109.value - $tmp112;
    if ($tmp114) goto $l136; else goto $l137;
    $l136:;
    if ((uint64_t) $tmp135 >= -$tmp113) goto $l128; else goto $l117;
    $l137:;
    if ((uint64_t) $tmp135 > -$tmp113) goto $l128; else goto $l117;
    $l128:;
    i109.value += $tmp113;
    goto $l115;
    $l117:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue139;
    panda$core$String* $tmp140;
    panda$core$String* $tmp141;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp142;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp142, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp143 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp142);
    $tmp141 = $tmp143;
    $tmp140 = $tmp141;
    $returnValue139 = $tmp140;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
    return $returnValue139;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue145;
    org$pandalanguage$pandac$ASTNode* $tmp146;
    org$pandalanguage$pandac$ASTNode* $tmp148;
    org$pandalanguage$pandac$ASTNode* $tmp149;
    org$pandalanguage$pandac$parser$Token$Kind $tmp153;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp146 = p_chunk;
        $returnValue145 = $tmp146;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
        return $returnValue145;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp150 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp152 = (($fn151) p_string->$class->vtable[2])(p_string);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp153, ((panda$core$Int64) { 51 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp150, ((panda$core$Int64) { 4 }), $tmp152, p_string, $tmp153, p_chunk);
    $tmp149 = $tmp150;
    $tmp148 = $tmp149;
    $returnValue145 = $tmp148;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
    return $returnValue145;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result158 = NULL;
    panda$core$MutableString* $tmp159;
    panda$core$MutableString* $tmp160;
    org$pandalanguage$pandac$parser$Token token164;
    org$pandalanguage$pandac$parser$Token$Kind $match$164_13166;
    panda$core$String* str171 = NULL;
    panda$core$String* $tmp172;
    panda$core$String* $tmp173;
    panda$core$Char8 $tmp175;
    panda$core$String* $returnValue178;
    panda$core$String* $tmp179;
    panda$core$String* $tmp186;
    org$pandalanguage$pandac$parser$Token escape193;
    panda$core$String* $tmp197;
    panda$core$String* escapeText201 = NULL;
    panda$core$String* $tmp202;
    panda$core$String* $tmp203;
    panda$core$Char8 c205;
    panda$core$Object* $tmp206;
    panda$collections$ListView* $tmp207;
    panda$core$Char8 $match$183_21213;
    panda$core$Char8 $tmp214;
    panda$core$Char8 $tmp216;
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
    panda$core$String* $tmp236;
    panda$core$String* $tmp240;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp241;
    panda$core$String* $tmp247;
    panda$core$String* $tmp248;
    panda$core$String* $tmp252;
    int $tmp157;
    {
        panda$core$MutableString* $tmp161 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp161);
        $tmp160 = $tmp161;
        $tmp159 = $tmp160;
        result158 = $tmp159;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
        $l162:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp165 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token164 = $tmp165;
            {
                $match$164_13166 = token164.kind;
                panda$core$Bit $tmp167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13166.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp167.value) {
                {
                    int $tmp170;
                    {
                        panda$core$String* $tmp174 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token164);
                        $tmp173 = $tmp174;
                        $tmp172 = $tmp173;
                        str171 = $tmp172;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp175, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp176 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str171, $tmp175);
                        if ($tmp176.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token164, &$s177);
                            $tmp179 = NULL;
                            $returnValue178 = $tmp179;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
                            $tmp170 = 0;
                            goto $l168;
                            $l180:;
                            $tmp157 = 0;
                            goto $l155;
                            $l181:;
                            return $returnValue178;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result158, str171);
                    }
                    $tmp170 = -1;
                    goto $l168;
                    $l168:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str171));
                    str171 = NULL;
                    switch ($tmp170) {
                        case 0: goto $l180;
                        case -1: goto $l183;
                    }
                    $l183:;
                }
                }
                else {
                panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13166.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp184.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token164, &$s185);
                    $tmp186 = NULL;
                    $returnValue178 = $tmp186;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
                    $tmp157 = 1;
                    goto $l155;
                    $l187:;
                    return $returnValue178;
                }
                }
                else {
                panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13166.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp189.value) {
                {
                    int $tmp192;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp194 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape193 = $tmp194;
                        panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape193.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp195.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token164, &$s196);
                            $tmp197 = NULL;
                            $returnValue178 = $tmp197;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
                            $tmp192 = 0;
                            goto $l190;
                            $l198:;
                            $tmp157 = 2;
                            goto $l155;
                            $l199:;
                            return $returnValue178;
                        }
                        }
                        panda$core$String* $tmp204 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape193);
                        $tmp203 = $tmp204;
                        $tmp202 = $tmp203;
                        escapeText201 = $tmp202;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
                        panda$collections$ListView* $tmp208 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText201);
                        $tmp207 = $tmp208;
                        ITable* $tmp209 = $tmp207->$class->itable;
                        while ($tmp209->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp209 = $tmp209->next;
                        }
                        $fn211 $tmp210 = $tmp209->methods[0];
                        panda$core$Object* $tmp212 = $tmp210($tmp207, ((panda$core$Int64) { 0 }));
                        $tmp206 = $tmp212;
                        c205 = ((panda$core$Char8$wrapper*) $tmp206)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp206);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
                        {
                            $match$183_21213 = c205;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp214, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp215 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21213, $tmp214);
                            if ($tmp215.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp216, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(result158, $tmp216);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp217, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp218 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21213, $tmp217);
                            if ($tmp218.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp219, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(result158, $tmp219);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp220, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp221 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21213, $tmp220);
                            if ($tmp221.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp222, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(result158, $tmp222);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp223, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp224 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21213, $tmp223);
                            if ($tmp224.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp225, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(result158, $tmp225);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp226, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp227 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21213, $tmp226);
                            if ($tmp227.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp228, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(result158, $tmp228);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp229, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp230 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21213, $tmp229);
                            if ($tmp230.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp231, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(result158, $tmp231);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp232, ((panda$core$UInt8) { 125 }));
                            panda$core$Bit $tmp233 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$183_21213, $tmp232);
                            if ($tmp233.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp234, ((panda$core$UInt8) { 125 }));
                                panda$core$MutableString$append$panda$core$Char8(result158, $tmp234);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token164, &$s235);
                                $tmp236 = NULL;
                                $returnValue178 = $tmp236;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
                                $tmp192 = 1;
                                goto $l190;
                                $l237:;
                                $tmp157 = 3;
                                goto $l155;
                                $l238:;
                                return $returnValue178;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp242 = panda$core$String$start$R$panda$core$String$Index(escapeText201);
                        panda$core$String$Index $tmp243 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText201, $tmp242);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp241, ((panda$core$String$Index$nullable) { $tmp243, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp244 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText201, $tmp241);
                        $tmp240 = $tmp244;
                        panda$core$MutableString$append$panda$core$String(result158, $tmp240);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
                    }
                    $tmp192 = -1;
                    goto $l190;
                    $l190:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText201));
                    escapeText201 = NULL;
                    switch ($tmp192) {
                        case 0: goto $l198;
                        case 1: goto $l237;
                        case -1: goto $l245;
                    }
                    $l245:;
                }
                }
                else {
                panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13166.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp246.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token164);
                    panda$core$String* $tmp249 = panda$core$MutableString$finish$R$panda$core$String(result158);
                    $tmp248 = $tmp249;
                    $tmp247 = $tmp248;
                    $returnValue178 = $tmp247;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp247));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
                    $tmp157 = 4;
                    goto $l155;
                    $l250:;
                    return $returnValue178;
                }
                }
                else {
                {
                    panda$core$String* $tmp253 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token164);
                    $tmp252 = $tmp253;
                    panda$core$MutableString$append$panda$core$String(result158, $tmp252);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
                }
                }
                }
                }
                }
            }
        }
        }
        $l163:;
    }
    $tmp157 = -1;
    goto $l155;
    $l155:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result158));
    result158 = NULL;
    switch ($tmp157) {
        case 1: goto $l187;
        case -1: goto $l254;
        case 4: goto $l250;
        case 2: goto $l199;
        case 3: goto $l238;
        case 0: goto $l181;
    }
    $l254:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result258 = NULL;
    panda$core$MutableString* $tmp259;
    panda$core$MutableString* $tmp260;
    org$pandalanguage$pandac$parser$Token token264;
    org$pandalanguage$pandac$parser$Token$Kind $match$209_13266;
    panda$core$String* str271 = NULL;
    panda$core$String* $tmp272;
    panda$core$String* $tmp273;
    panda$core$Char8 $tmp275;
    panda$core$String* $returnValue278;
    panda$core$String* $tmp279;
    panda$core$String* $tmp286;
    org$pandalanguage$pandac$parser$Token escape293;
    panda$core$String* $tmp297;
    panda$core$String* escapeText301 = NULL;
    panda$core$String* $tmp302;
    panda$core$String* $tmp303;
    panda$core$Char8 c305;
    panda$core$Object* $tmp306;
    panda$collections$ListView* $tmp307;
    panda$core$Char8 $match$228_21313;
    panda$core$Char8 $tmp314;
    panda$core$Char8 $tmp316;
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
    panda$core$String* $tmp339;
    panda$core$String* $tmp343;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp344;
    panda$core$String* $tmp350;
    panda$core$String* $tmp351;
    panda$core$String* $tmp356;
    panda$core$String* $tmp357;
    panda$core$String* $tmp361;
    int $tmp257;
    {
        panda$core$MutableString* $tmp261 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp261);
        $tmp260 = $tmp261;
        $tmp259 = $tmp260;
        result258 = $tmp259;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260));
        $l262:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp265 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token264 = $tmp265;
            {
                $match$209_13266 = token264.kind;
                panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13266.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp267.value) {
                {
                    int $tmp270;
                    {
                        panda$core$String* $tmp274 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token264);
                        $tmp273 = $tmp274;
                        $tmp272 = $tmp273;
                        str271 = $tmp272;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp272));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp275, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp276 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str271, $tmp275);
                        if ($tmp276.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token264, &$s277);
                            $tmp279 = NULL;
                            $returnValue278 = $tmp279;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
                            $tmp270 = 0;
                            goto $l268;
                            $l280:;
                            $tmp257 = 0;
                            goto $l255;
                            $l281:;
                            return $returnValue278;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result258, str271);
                    }
                    $tmp270 = -1;
                    goto $l268;
                    $l268:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str271));
                    str271 = NULL;
                    switch ($tmp270) {
                        case -1: goto $l283;
                        case 0: goto $l280;
                    }
                    $l283:;
                }
                }
                else {
                panda$core$Bit $tmp284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13266.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp284.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token264, &$s285);
                    $tmp286 = NULL;
                    $returnValue278 = $tmp286;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
                    $tmp257 = 1;
                    goto $l255;
                    $l287:;
                    return $returnValue278;
                }
                }
                else {
                panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13266.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp289.value) {
                {
                    int $tmp292;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp294 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape293 = $tmp294;
                        panda$core$Bit $tmp295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape293.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp295.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token264, &$s296);
                            $tmp297 = NULL;
                            $returnValue278 = $tmp297;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
                            $tmp292 = 0;
                            goto $l290;
                            $l298:;
                            $tmp257 = 2;
                            goto $l255;
                            $l299:;
                            return $returnValue278;
                        }
                        }
                        panda$core$String* $tmp304 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape293);
                        $tmp303 = $tmp304;
                        $tmp302 = $tmp303;
                        escapeText301 = $tmp302;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
                        panda$collections$ListView* $tmp308 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText301);
                        $tmp307 = $tmp308;
                        ITable* $tmp309 = $tmp307->$class->itable;
                        while ($tmp309->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp309 = $tmp309->next;
                        }
                        $fn311 $tmp310 = $tmp309->methods[0];
                        panda$core$Object* $tmp312 = $tmp310($tmp307, ((panda$core$Int64) { 0 }));
                        $tmp306 = $tmp312;
                        c305 = ((panda$core$Char8$wrapper*) $tmp306)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp306);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
                        {
                            $match$228_21313 = c305;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp314, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp315 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21313, $tmp314);
                            if ($tmp315.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp316, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(result258, $tmp316);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp317, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp318 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21313, $tmp317);
                            if ($tmp318.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp319, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(result258, $tmp319);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp320, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp321 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21313, $tmp320);
                            if ($tmp321.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp322, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(result258, $tmp322);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp323, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp324 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21313, $tmp323);
                            if ($tmp324.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp325, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(result258, $tmp325);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp326, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp327 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21313, $tmp326);
                            if ($tmp327.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp328, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(result258, $tmp328);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp329, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp330 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21313, $tmp329);
                            if ($tmp330.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp331, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(result258, $tmp331);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp332, ((panda$core$UInt8) { 58 }));
                            panda$core$Bit $tmp333 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21313, $tmp332);
                            if ($tmp333.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp334, ((panda$core$UInt8) { 58 }));
                                panda$core$MutableString$append$panda$core$Char8(result258, $tmp334);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp335, ((panda$core$UInt8) { 125 }));
                            panda$core$Bit $tmp336 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$228_21313, $tmp335);
                            if ($tmp336.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp337, ((panda$core$UInt8) { 125 }));
                                panda$core$MutableString$append$panda$core$Char8(result258, $tmp337);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token264, &$s338);
                                $tmp339 = NULL;
                                $returnValue278 = $tmp339;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
                                $tmp292 = 1;
                                goto $l290;
                                $l340:;
                                $tmp257 = 3;
                                goto $l255;
                                $l341:;
                                return $returnValue278;
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
                        panda$core$String$Index $tmp345 = panda$core$String$start$R$panda$core$String$Index(escapeText301);
                        panda$core$String$Index $tmp346 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText301, $tmp345);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp344, ((panda$core$String$Index$nullable) { $tmp346, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp347 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText301, $tmp344);
                        $tmp343 = $tmp347;
                        panda$core$MutableString$append$panda$core$String(result258, $tmp343);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
                    }
                    $tmp292 = -1;
                    goto $l290;
                    $l290:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText301));
                    escapeText301 = NULL;
                    switch ($tmp292) {
                        case 0: goto $l298;
                        case 1: goto $l340;
                        case -1: goto $l348;
                    }
                    $l348:;
                }
                }
                else {
                panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13266.$rawValue, ((panda$core$Int64) { 95 }));
                if ($tmp349.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token264);
                    panda$core$String* $tmp352 = panda$core$MutableString$finish$R$panda$core$String(result258);
                    $tmp351 = $tmp352;
                    $tmp350 = $tmp351;
                    $returnValue278 = $tmp350;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
                    $tmp257 = 4;
                    goto $l255;
                    $l353:;
                    return $returnValue278;
                }
                }
                else {
                panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_13266.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp355.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token264);
                    panda$core$String* $tmp358 = panda$core$MutableString$finish$R$panda$core$String(result258);
                    $tmp357 = $tmp358;
                    $tmp356 = $tmp357;
                    $returnValue278 = $tmp356;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp356));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
                    $tmp257 = 5;
                    goto $l255;
                    $l359:;
                    return $returnValue278;
                }
                }
                else {
                {
                    panda$core$String* $tmp362 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token264);
                    $tmp361 = $tmp362;
                    panda$core$MutableString$append$panda$core$String(result258, $tmp361);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp361));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l263:;
    }
    $tmp257 = -1;
    goto $l255;
    $l255:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result258));
    result258 = NULL;
    switch ($tmp257) {
        case -1: goto $l363;
        case 2: goto $l299;
        case 4: goto $l353;
        case 1: goto $l287;
        case 0: goto $l281;
        case 3: goto $l341;
        case 5: goto $l359;
    }
    $l363:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot367 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp368;
    org$pandalanguage$pandac$ASTNode* $tmp369;
    org$pandalanguage$pandac$ASTNode* call374 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp375;
    org$pandalanguage$pandac$ASTNode* $tmp376;
    panda$collections$ImmutableArray* $tmp380;
    org$pandalanguage$pandac$ASTNode* stringType382 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp383;
    org$pandalanguage$pandac$ASTNode* $tmp384;
    org$pandalanguage$pandac$ASTNode* $returnValue389;
    org$pandalanguage$pandac$ASTNode* $tmp390;
    org$pandalanguage$pandac$ASTNode* $tmp391;
    org$pandalanguage$pandac$parser$Token$Kind $tmp395;
    int $tmp366;
    {
        org$pandalanguage$pandac$ASTNode* $tmp370 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp372 = (($fn371) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp370, ((panda$core$Int64) { 15 }), $tmp372, p_expr, &$s373);
        $tmp369 = $tmp370;
        $tmp368 = $tmp369;
        dot367 = $tmp368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
        org$pandalanguage$pandac$ASTNode* $tmp377 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp379 = (($fn378) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp381 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp381);
        $tmp380 = $tmp381;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp377, ((panda$core$Int64) { 8 }), $tmp379, dot367, $tmp380);
        $tmp376 = $tmp377;
        $tmp375 = $tmp376;
        call374 = $tmp375;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp375));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
        org$pandalanguage$pandac$ASTNode* $tmp385 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp387 = (($fn386) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp385, ((panda$core$Int64) { 42 }), $tmp387, &$s388);
        $tmp384 = $tmp385;
        $tmp383 = $tmp384;
        stringType382 = $tmp383;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp383));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
        org$pandalanguage$pandac$ASTNode* $tmp392 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp394 = (($fn393) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp395, ((panda$core$Int64) { 89 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp392, ((panda$core$Int64) { 4 }), $tmp394, call374, $tmp395, stringType382);
        $tmp391 = $tmp392;
        $tmp390 = $tmp391;
        $returnValue389 = $tmp390;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
        $tmp366 = 0;
        goto $l364;
        $l396:;
        return $returnValue389;
    }
    $l364:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType382));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call374));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot367));
    dot367 = NULL;
    call374 = NULL;
    stringType382 = NULL;
    switch ($tmp366) {
        case 0: goto $l396;
    }
    $l398:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $atPre1402;
    org$pandalanguage$pandac$parser$Token start406;
    panda$core$String* $tmp413;
    panda$core$String* $tmp414;
    panda$core$String* $tmp416;
    org$pandalanguage$pandac$ASTNode* $returnValue421;
    org$pandalanguage$pandac$ASTNode* $tmp422;
    org$pandalanguage$pandac$ASTNode* result426 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp427;
    panda$core$MutableString* chunk428 = NULL;
    panda$core$MutableString* $tmp429;
    panda$core$MutableString* $tmp430;
    org$pandalanguage$pandac$parser$Token token434;
    org$pandalanguage$pandac$parser$Token$Kind $match$276_13437;
    panda$core$String* str442 = NULL;
    panda$core$String* $tmp443;
    panda$core$String* $tmp444;
    panda$core$Char8 $tmp446;
    org$pandalanguage$pandac$ASTNode* $tmp449;
    org$pandalanguage$pandac$ASTNode* $tmp457;
    org$pandalanguage$pandac$parser$Token escape465;
    org$pandalanguage$pandac$ASTNode* $tmp469;
    panda$core$String* escapeText474 = NULL;
    panda$core$String* $tmp475;
    panda$core$String* $tmp476;
    panda$core$Char8 c478;
    panda$core$Object* $tmp479;
    panda$collections$ListView* $tmp480;
    panda$core$Char8 $match$295_21486;
    panda$core$Char8 $tmp487;
    panda$core$Char8 $tmp489;
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
    panda$core$Bit oldAllow510;
    org$pandalanguage$pandac$ASTNode* expr511 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp512;
    org$pandalanguage$pandac$ASTNode* $tmp513;
    org$pandalanguage$pandac$ASTNode* $tmp515;
    panda$core$String* align521 = NULL;
    panda$core$String* $tmp522;
    panda$core$String* format523 = NULL;
    panda$core$String* $tmp524;
    org$pandalanguage$pandac$parser$Token$Kind $tmp525;
    panda$core$String* $tmp527;
    panda$core$String* $tmp528;
    panda$core$String* $tmp529;
    org$pandalanguage$pandac$parser$Token$Kind $tmp531;
    panda$core$String* $tmp536;
    panda$core$String* $tmp537;
    panda$core$String* $tmp538;
    org$pandalanguage$pandac$ASTNode* $tmp540;
    org$pandalanguage$pandac$ASTNode* formattable547 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp548;
    org$pandalanguage$pandac$ASTNode* $tmp549;
    org$pandalanguage$pandac$ASTNode* cast554 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp555;
    org$pandalanguage$pandac$ASTNode* $tmp556;
    org$pandalanguage$pandac$parser$Token$Kind $tmp560;
    org$pandalanguage$pandac$ASTNode* dot561 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp562;
    org$pandalanguage$pandac$ASTNode* $tmp563;
    panda$collections$Array* callArgs568 = NULL;
    panda$collections$Array* $tmp569;
    panda$collections$Array* $tmp570;
    org$pandalanguage$pandac$ASTNode* $tmp572;
    org$pandalanguage$pandac$ASTNode* $tmp574;
    org$pandalanguage$pandac$ASTNode* $tmp575;
    org$pandalanguage$pandac$ASTNode* $tmp576;
    panda$collections$ImmutableArray* $tmp580;
    org$pandalanguage$pandac$parser$Token$Kind $tmp583;
    org$pandalanguage$pandac$ASTNode* $tmp586;
    org$pandalanguage$pandac$ASTNode* $tmp595;
    org$pandalanguage$pandac$ASTNode* $tmp596;
    org$pandalanguage$pandac$ASTNode* $tmp597;
    org$pandalanguage$pandac$ASTNode* pandaType599 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp600;
    org$pandalanguage$pandac$ASTNode* $tmp601;
    org$pandalanguage$pandac$ASTNode* callTarget606 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp607;
    org$pandalanguage$pandac$ASTNode* $tmp608;
    panda$collections$Array* callArgs613 = NULL;
    panda$collections$Array* $tmp614;
    panda$collections$Array* $tmp615;
    org$pandalanguage$pandac$ASTNode* $tmp617;
    org$pandalanguage$pandac$ASTNode* $tmp619;
    org$pandalanguage$pandac$ASTNode* $tmp620;
    org$pandalanguage$pandac$ASTNode* $tmp621;
    panda$collections$ImmutableArray* $tmp625;
    panda$core$String* text628 = NULL;
    panda$core$String* $tmp629;
    panda$core$String* $tmp630;
    panda$core$MutableString* $tmp632;
    panda$core$MutableString* $tmp633;
    panda$core$MutableString* $tmp634;
    org$pandalanguage$pandac$ASTNode* $tmp641;
    org$pandalanguage$pandac$ASTNode* $tmp642;
    org$pandalanguage$pandac$ASTNode* $tmp643;
    org$pandalanguage$pandac$ASTNode* $tmp644;
    org$pandalanguage$pandac$ASTNode* $tmp647;
    org$pandalanguage$pandac$ASTNode* $tmp648;
    org$pandalanguage$pandac$ASTNode* $tmp649;
    org$pandalanguage$pandac$ASTNode* $tmp651;
    org$pandalanguage$pandac$ASTNode* $tmp652;
    org$pandalanguage$pandac$ASTNode* $tmp653;
    org$pandalanguage$pandac$ASTNode* $tmp657;
    panda$core$String* $tmp662;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp663;
    panda$core$String* $tmp668;
    org$pandalanguage$pandac$ASTNode* $tmp670;
    org$pandalanguage$pandac$ASTNode* $tmp671;
    org$pandalanguage$pandac$ASTNode* $tmp672;
    panda$core$String* $tmp674;
    int $tmp401;
    {
        $atPre1402 = self->allowLambdas;
        int $tmp405;
        {
            org$pandalanguage$pandac$parser$Token $tmp407 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            start406 = $tmp407;
            panda$core$Bit $tmp409 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start406.kind.$rawValue, ((panda$core$Int64) { 7 }));
            bool $tmp408 = $tmp409.value;
            if (!$tmp408) goto $l410;
            panda$core$Bit $tmp411 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start406.kind.$rawValue, ((panda$core$Int64) { 6 }));
            $tmp408 = $tmp411.value;
            $l410:;
            panda$core$Bit $tmp412 = { $tmp408 };
            if ($tmp412.value) {
            {
                panda$core$String* $tmp417 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start406);
                $tmp416 = $tmp417;
                panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s415, $tmp416);
                $tmp414 = $tmp418;
                panda$core$String* $tmp420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp414, &$s419);
                $tmp413 = $tmp420;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start406, $tmp413);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
                $tmp422 = NULL;
                $returnValue421 = $tmp422;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp422));
                $tmp405 = 0;
                goto $l403;
                $l423:;
                $tmp401 = 0;
                goto $l399;
                $l424:;
                return $returnValue421;
            }
            }
            $tmp427 = NULL;
            result426 = $tmp427;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp427));
            panda$core$MutableString* $tmp431 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp431);
            $tmp430 = $tmp431;
            $tmp429 = $tmp430;
            chunk428 = $tmp429;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp429));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
            $l432:;
            while (true) {
            {
                org$pandalanguage$pandac$parser$Token $tmp435 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                token434 = $tmp435;
                panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token434.kind.$rawValue, start406.kind.$rawValue);
                if ($tmp436.value) {
                {
                    goto $l433;
                }
                }
                {
                    $match$276_13437 = token434.kind;
                    panda$core$Bit $tmp438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$276_13437.$rawValue, ((panda$core$Int64) { 12 }));
                    if ($tmp438.value) {
                    {
                        int $tmp441;
                        {
                            panda$core$String* $tmp445 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token434);
                            $tmp444 = $tmp445;
                            $tmp443 = $tmp444;
                            str442 = $tmp443;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                            panda$core$Char8$init$panda$core$UInt8(&$tmp446, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp447 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str442, $tmp446);
                            if ($tmp447.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start406, &$s448);
                                $tmp449 = NULL;
                                $returnValue421 = $tmp449;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp449));
                                $tmp441 = 0;
                                goto $l439;
                                $l450:;
                                $tmp405 = 1;
                                goto $l403;
                                $l451:;
                                $tmp401 = 1;
                                goto $l399;
                                $l452:;
                                return $returnValue421;
                            }
                            }
                            panda$core$MutableString$append$panda$core$String(chunk428, str442);
                        }
                        $tmp441 = -1;
                        goto $l439;
                        $l439:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str442));
                        str442 = NULL;
                        switch ($tmp441) {
                            case 0: goto $l450;
                            case -1: goto $l454;
                        }
                        $l454:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$276_13437.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp455.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start406, &$s456);
                        $tmp457 = NULL;
                        $returnValue421 = $tmp457;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp457));
                        $tmp405 = 2;
                        goto $l403;
                        $l458:;
                        $tmp401 = 2;
                        goto $l399;
                        $l459:;
                        return $returnValue421;
                    }
                    }
                    else {
                    panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$276_13437.$rawValue, ((panda$core$Int64) { 106 }));
                    if ($tmp461.value) {
                    {
                        int $tmp464;
                        {
                            org$pandalanguage$pandac$parser$Token $tmp466 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                            escape465 = $tmp466;
                            panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape465.kind.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp467.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start406, &$s468);
                                $tmp469 = NULL;
                                $returnValue421 = $tmp469;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp469));
                                $tmp464 = 0;
                                goto $l462;
                                $l470:;
                                $tmp405 = 3;
                                goto $l403;
                                $l471:;
                                $tmp401 = 3;
                                goto $l399;
                                $l472:;
                                return $returnValue421;
                            }
                            }
                            panda$core$String* $tmp477 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape465);
                            $tmp476 = $tmp477;
                            $tmp475 = $tmp476;
                            escapeText474 = $tmp475;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp475));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
                            panda$collections$ListView* $tmp481 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText474);
                            $tmp480 = $tmp481;
                            ITable* $tmp482 = $tmp480->$class->itable;
                            while ($tmp482->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp482 = $tmp482->next;
                            }
                            $fn484 $tmp483 = $tmp482->methods[0];
                            panda$core$Object* $tmp485 = $tmp483($tmp480, ((panda$core$Int64) { 0 }));
                            $tmp479 = $tmp485;
                            c478 = ((panda$core$Char8$wrapper*) $tmp479)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp479);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
                            {
                                $match$295_21486 = c478;
                                panda$core$Char8$init$panda$core$UInt8(&$tmp487, ((panda$core$UInt8) { 110 }));
                                panda$core$Bit $tmp488 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21486, $tmp487);
                                if ($tmp488.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp489, ((panda$core$UInt8) { 10 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk428, $tmp489);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp490, ((panda$core$UInt8) { 114 }));
                                panda$core$Bit $tmp491 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21486, $tmp490);
                                if ($tmp491.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp492, ((panda$core$UInt8) { 13 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk428, $tmp492);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp493, ((panda$core$UInt8) { 116 }));
                                panda$core$Bit $tmp494 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21486, $tmp493);
                                if ($tmp494.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp495, ((panda$core$UInt8) { 9 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk428, $tmp495);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp496, ((panda$core$UInt8) { 39 }));
                                panda$core$Bit $tmp497 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21486, $tmp496);
                                if ($tmp497.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp498, ((panda$core$UInt8) { 39 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk428, $tmp498);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp499, ((panda$core$UInt8) { 34 }));
                                panda$core$Bit $tmp500 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21486, $tmp499);
                                if ($tmp500.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp501, ((panda$core$UInt8) { 34 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk428, $tmp501);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp502, ((panda$core$UInt8) { 92 }));
                                panda$core$Bit $tmp503 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21486, $tmp502);
                                if ($tmp503.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp504, ((panda$core$UInt8) { 92 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk428, $tmp504);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp505, ((panda$core$UInt8) { 123 }));
                                panda$core$Bit $tmp506 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21486, $tmp505);
                                if ($tmp506.value) {
                                {
                                    {
                                        int $tmp509;
                                        {
                                            oldAllow510 = self->allowLambdas;
                                            self->allowLambdas = ((panda$core$Bit) { false });
                                            org$pandalanguage$pandac$ASTNode* $tmp514 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                            $tmp513 = $tmp514;
                                            $tmp512 = $tmp513;
                                            expr511 = $tmp512;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp512));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
                                            self->allowLambdas = oldAllow510;
                                            if (((panda$core$Bit) { expr511 == NULL }).value) {
                                            {
                                                $tmp515 = NULL;
                                                $returnValue421 = $tmp515;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
                                                $tmp509 = 0;
                                                goto $l507;
                                                $l516:;
                                                $tmp464 = 1;
                                                goto $l462;
                                                $l517:;
                                                $tmp405 = 4;
                                                goto $l403;
                                                $l518:;
                                                $tmp401 = 4;
                                                goto $l399;
                                                $l519:;
                                                return $returnValue421;
                                            }
                                            }
                                            $tmp522 = NULL;
                                            align521 = $tmp522;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp522));
                                            $tmp524 = NULL;
                                            format523 = $tmp524;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp524));
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp525, ((panda$core$Int64) { 105 }));
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp526 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp525);
                                            if (((panda$core$Bit) { $tmp526.nonnull }).value) {
                                            {
                                                {
                                                    $tmp527 = align521;
                                                    panda$core$String* $tmp530 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start406);
                                                    $tmp529 = $tmp530;
                                                    $tmp528 = $tmp529;
                                                    align521 = $tmp528;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp528));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp529));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp527));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp531, ((panda$core$Int64) { 95 }));
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp532 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp531);
                                            if (((panda$core$Bit) { $tmp532.nonnull }).value) {
                                            {
                                                int $tmp535;
                                                {
                                                    {
                                                        $tmp536 = format523;
                                                        panda$core$String* $tmp539 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start406);
                                                        $tmp538 = $tmp539;
                                                        $tmp537 = $tmp538;
                                                        format523 = $tmp537;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp537));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
                                                    }
                                                    if (((panda$core$Bit) { format523 == NULL }).value) {
                                                    {
                                                        $tmp540 = NULL;
                                                        $returnValue421 = $tmp540;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp540));
                                                        $tmp535 = 0;
                                                        goto $l533;
                                                        $l541:;
                                                        $tmp509 = 1;
                                                        goto $l507;
                                                        $l542:;
                                                        $tmp464 = 2;
                                                        goto $l462;
                                                        $l543:;
                                                        $tmp405 = 5;
                                                        goto $l403;
                                                        $l544:;
                                                        $tmp401 = 5;
                                                        goto $l399;
                                                        $l545:;
                                                        return $returnValue421;
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp550 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp552 = (($fn551) expr511->$class->vtable[2])(expr511);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp550, ((panda$core$Int64) { 42 }), $tmp552, &$s553);
                                                    $tmp549 = $tmp550;
                                                    $tmp548 = $tmp549;
                                                    formattable547 = $tmp548;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp548));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
                                                    org$pandalanguage$pandac$ASTNode* $tmp557 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp559 = (($fn558) expr511->$class->vtable[2])(expr511);
                                                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp560, ((panda$core$Int64) { 89 }));
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp557, ((panda$core$Int64) { 4 }), $tmp559, expr511, $tmp560, formattable547);
                                                    $tmp556 = $tmp557;
                                                    $tmp555 = $tmp556;
                                                    cast554 = $tmp555;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp555));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
                                                    org$pandalanguage$pandac$ASTNode* $tmp564 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp566 = (($fn565) expr511->$class->vtable[2])(expr511);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp564, ((panda$core$Int64) { 15 }), $tmp566, cast554, &$s567);
                                                    $tmp563 = $tmp564;
                                                    $tmp562 = $tmp563;
                                                    dot561 = $tmp562;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp562));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp563));
                                                    panda$collections$Array* $tmp571 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp571);
                                                    $tmp570 = $tmp571;
                                                    $tmp569 = $tmp570;
                                                    callArgs568 = $tmp569;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp569));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp570));
                                                    org$pandalanguage$pandac$ASTNode* $tmp573 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp573, ((panda$core$Int64) { 38 }), start406.position, format523);
                                                    $tmp572 = $tmp573;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs568, ((panda$core$Object*) $tmp572));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
                                                    {
                                                        $tmp574 = expr511;
                                                        org$pandalanguage$pandac$ASTNode* $tmp577 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        org$pandalanguage$pandac$Position $tmp579 = (($fn578) expr511->$class->vtable[2])(expr511);
                                                        panda$collections$ImmutableArray* $tmp581 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs568);
                                                        $tmp580 = $tmp581;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp577, ((panda$core$Int64) { 8 }), $tmp579, dot561, $tmp580);
                                                        $tmp576 = $tmp577;
                                                        $tmp575 = $tmp576;
                                                        expr511 = $tmp575;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp574));
                                                    }
                                                }
                                                $tmp535 = -1;
                                                goto $l533;
                                                $l533:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs568));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot561));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast554));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable547));
                                                formattable547 = NULL;
                                                cast554 = NULL;
                                                dot561 = NULL;
                                                callArgs568 = NULL;
                                                switch ($tmp535) {
                                                    case 0: goto $l541;
                                                    case -1: goto $l582;
                                                }
                                                $l582:;
                                            }
                                            }
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp583, ((panda$core$Int64) { 100 }));
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp585 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp583, &$s584);
                                            if (((panda$core$Bit) { !$tmp585.nonnull }).value) {
                                            {
                                                $tmp586 = NULL;
                                                $returnValue421 = $tmp586;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp586));
                                                $tmp509 = 2;
                                                goto $l507;
                                                $l587:;
                                                $tmp464 = 3;
                                                goto $l462;
                                                $l588:;
                                                $tmp405 = 6;
                                                goto $l403;
                                                $l589:;
                                                $tmp401 = 6;
                                                goto $l399;
                                                $l590:;
                                                return $returnValue421;
                                            }
                                            }
                                            if (((panda$core$Bit) { align521 != NULL }).value) {
                                            {
                                                int $tmp594;
                                                {
                                                    if (((panda$core$Bit) { format523 == NULL }).value) {
                                                    {
                                                        {
                                                            $tmp595 = expr511;
                                                            org$pandalanguage$pandac$ASTNode* $tmp598 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr511);
                                                            $tmp597 = $tmp598;
                                                            $tmp596 = $tmp597;
                                                            expr511 = $tmp596;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp596));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp602 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp604 = (($fn603) expr511->$class->vtable[2])(expr511);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp602, ((panda$core$Int64) { 42 }), $tmp604, &$s605);
                                                    $tmp601 = $tmp602;
                                                    $tmp600 = $tmp601;
                                                    pandaType599 = $tmp600;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp600));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
                                                    org$pandalanguage$pandac$ASTNode* $tmp609 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp611 = (($fn610) expr511->$class->vtable[2])(expr511);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp609, ((panda$core$Int64) { 15 }), $tmp611, pandaType599, &$s612);
                                                    $tmp608 = $tmp609;
                                                    $tmp607 = $tmp608;
                                                    callTarget606 = $tmp607;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp607));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
                                                    panda$collections$Array* $tmp616 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp616);
                                                    $tmp615 = $tmp616;
                                                    $tmp614 = $tmp615;
                                                    callArgs613 = $tmp614;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp614));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs613, ((panda$core$Object*) expr511));
                                                    org$pandalanguage$pandac$ASTNode* $tmp618 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp618, ((panda$core$Int64) { 38 }), start406.position, align521);
                                                    $tmp617 = $tmp618;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs613, ((panda$core$Object*) $tmp617));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
                                                    {
                                                        $tmp619 = expr511;
                                                        org$pandalanguage$pandac$ASTNode* $tmp622 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        org$pandalanguage$pandac$Position $tmp624 = (($fn623) expr511->$class->vtable[2])(expr511);
                                                        panda$collections$ImmutableArray* $tmp626 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs613);
                                                        $tmp625 = $tmp626;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp622, ((panda$core$Int64) { 8 }), $tmp624, callTarget606, $tmp625);
                                                        $tmp621 = $tmp622;
                                                        $tmp620 = $tmp621;
                                                        expr511 = $tmp620;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp620));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp621));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
                                                    }
                                                }
                                                $tmp594 = -1;
                                                goto $l592;
                                                $l592:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs613));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget606));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType599));
                                                pandaType599 = NULL;
                                                callTarget606 = NULL;
                                                callArgs613 = NULL;
                                                switch ($tmp594) {
                                                    case -1: goto $l627;
                                                }
                                                $l627:;
                                            }
                                            }
                                            panda$core$String* $tmp631 = panda$core$MutableString$finish$R$panda$core$String(chunk428);
                                            $tmp630 = $tmp631;
                                            $tmp629 = $tmp630;
                                            text628 = $tmp629;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp629));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                                            {
                                                $tmp632 = chunk428;
                                                panda$core$MutableString* $tmp635 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                                panda$core$MutableString$init($tmp635);
                                                $tmp634 = $tmp635;
                                                $tmp633 = $tmp634;
                                                chunk428 = $tmp633;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp633));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
                                            }
                                            panda$core$Bit $tmp638 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text628, &$s637);
                                            bool $tmp636 = $tmp638.value;
                                            if ($tmp636) goto $l639;
                                            $tmp636 = ((panda$core$Bit) { result426 != NULL }).value;
                                            $l639:;
                                            panda$core$Bit $tmp640 = { $tmp636 };
                                            if ($tmp640.value) {
                                            {
                                                {
                                                    $tmp641 = result426;
                                                    org$pandalanguage$pandac$ASTNode* $tmp645 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp645, ((panda$core$Int64) { 38 }), start406.position, text628);
                                                    $tmp644 = $tmp645;
                                                    org$pandalanguage$pandac$ASTNode* $tmp646 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result426, $tmp644);
                                                    $tmp643 = $tmp646;
                                                    $tmp642 = $tmp643;
                                                    result426 = $tmp642;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp642));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp641));
                                                }
                                                {
                                                    $tmp647 = result426;
                                                    org$pandalanguage$pandac$ASTNode* $tmp650 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result426, expr511);
                                                    $tmp649 = $tmp650;
                                                    $tmp648 = $tmp649;
                                                    result426 = $tmp648;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp648));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp649));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp647));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp651 = result426;
                                                    org$pandalanguage$pandac$ASTNode* $tmp654 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr511);
                                                    $tmp653 = $tmp654;
                                                    $tmp652 = $tmp653;
                                                    result426 = $tmp652;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp652));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp653));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp651));
                                                }
                                            }
                                            }
                                        }
                                        $tmp509 = -1;
                                        goto $l507;
                                        $l507:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text628));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format523));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align521));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr511));
                                        expr511 = NULL;
                                        text628 = NULL;
                                        switch ($tmp509) {
                                            case -1: goto $l655;
                                            case 2: goto $l587;
                                            case 1: goto $l542;
                                            case 0: goto $l516;
                                        }
                                        $l655:;
                                    }
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token434, &$s656);
                                    $tmp657 = NULL;
                                    $returnValue421 = $tmp657;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp657));
                                    $tmp464 = 4;
                                    goto $l462;
                                    $l658:;
                                    $tmp405 = 7;
                                    goto $l403;
                                    $l659:;
                                    $tmp401 = 7;
                                    goto $l399;
                                    $l660:;
                                    return $returnValue421;
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            panda$core$String$Index $tmp664 = panda$core$String$start$R$panda$core$String$Index(escapeText474);
                            panda$core$String$Index $tmp665 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText474, $tmp664);
                            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp663, ((panda$core$String$Index$nullable) { $tmp665, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                            panda$core$String* $tmp666 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText474, $tmp663);
                            $tmp662 = $tmp666;
                            panda$core$MutableString$append$panda$core$String(chunk428, $tmp662);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp662));
                        }
                        $tmp464 = -1;
                        goto $l462;
                        $l462:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText474));
                        escapeText474 = NULL;
                        switch ($tmp464) {
                            case 2: goto $l543;
                            case 3: goto $l588;
                            case 4: goto $l658;
                            case 0: goto $l470;
                            case 1: goto $l517;
                            case -1: goto $l667;
                        }
                        $l667:;
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp669 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token434);
                        $tmp668 = $tmp669;
                        panda$core$MutableString$append$panda$core$String(chunk428, $tmp668);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
                    }
                    }
                    }
                    }
                }
            }
            }
            $l433:;
            org$pandalanguage$pandac$ASTNode* $tmp673 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp675 = panda$core$MutableString$finish$R$panda$core$String(chunk428);
            $tmp674 = $tmp675;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp673, ((panda$core$Int64) { 38 }), start406.position, $tmp674);
            $tmp672 = $tmp673;
            org$pandalanguage$pandac$ASTNode* $tmp676 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result426, $tmp672);
            $tmp671 = $tmp676;
            $tmp670 = $tmp671;
            $returnValue421 = $tmp670;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp670));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp674));
            $tmp405 = 8;
            goto $l403;
            $l677:;
            $tmp401 = 8;
            goto $l399;
            $l678:;
            return $returnValue421;
        }
        $l403:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk428));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result426));
        chunk428 = NULL;
        switch ($tmp405) {
            case 5: goto $l544;
            case 1: goto $l451;
            case 6: goto $l589;
            case 2: goto $l458;
            case 8: goto $l677;
            case 0: goto $l423;
            case 7: goto $l659;
            case 3: goto $l471;
            case 4: goto $l518;
        }
        $l680:;
    }
    $tmp401 = -1;
    goto $l399;
    $l399:;
    panda$core$Bit $tmp682 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->allowLambdas, $atPre1402);
    PANDA_ASSERT($tmp682.value);
    switch ($tmp401) {
        case -1: goto $l681;
        case 1: goto $l452;
        case 5: goto $l545;
        case 0: goto $l424;
        case 6: goto $l590;
        case 2: goto $l459;
        case 8: goto $l678;
        case 7: goto $l660;
        case 3: goto $l472;
        case 4: goto $l519;
    }
    $l681:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start686;
    org$pandalanguage$pandac$parser$Token$Kind $tmp687;
    org$pandalanguage$pandac$ASTNode* $returnValue690;
    org$pandalanguage$pandac$ASTNode* $tmp691;
    org$pandalanguage$pandac$ASTNode* expr694 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp695;
    org$pandalanguage$pandac$ASTNode* $tmp696;
    org$pandalanguage$pandac$ASTNode* $tmp698;
    org$pandalanguage$pandac$ASTNode* $match$381_9704 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp705;
    org$pandalanguage$pandac$Position firstPosition707;
    panda$core$String* firstName709 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp711;
    panda$collections$Array* parameters716 = NULL;
    panda$collections$Array* $tmp717;
    panda$collections$Array* $tmp718;
    org$pandalanguage$pandac$ASTNode* firstType720 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp721;
    org$pandalanguage$pandac$ASTNode* $tmp722;
    org$pandalanguage$pandac$ASTNode* $tmp724;
    org$pandalanguage$pandac$ASTNode* $tmp729;
    org$pandalanguage$pandac$parser$Token$Kind $tmp734;
    org$pandalanguage$pandac$parser$Token$nullable nextName739;
    org$pandalanguage$pandac$parser$Token$Kind $tmp740;
    org$pandalanguage$pandac$parser$Token$Kind $tmp743;
    org$pandalanguage$pandac$ASTNode* $tmp746;
    org$pandalanguage$pandac$ASTNode* nextType752 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp753;
    org$pandalanguage$pandac$ASTNode* $tmp754;
    org$pandalanguage$pandac$ASTNode* $tmp756;
    org$pandalanguage$pandac$ASTNode* $tmp762;
    panda$core$String* $tmp764;
    org$pandalanguage$pandac$parser$Token$Kind $tmp767;
    org$pandalanguage$pandac$ASTNode* $tmp770;
    org$pandalanguage$pandac$parser$Token$Kind $tmp775;
    org$pandalanguage$pandac$ASTNode* $tmp778;
    org$pandalanguage$pandac$ASTNode* body783 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp784;
    org$pandalanguage$pandac$ASTNode* $tmp785;
    org$pandalanguage$pandac$ASTNode* $tmp787;
    org$pandalanguage$pandac$ASTNode* $tmp792;
    org$pandalanguage$pandac$ASTNode* $tmp793;
    panda$collections$ImmutableArray* $tmp795;
    org$pandalanguage$pandac$parser$Token$Kind $tmp802;
    panda$collections$Array* parameters807 = NULL;
    panda$collections$Array* $tmp808;
    panda$collections$Array* $tmp809;
    panda$core$Bit validLambda811;
    org$pandalanguage$pandac$ASTNode* nextExpr817 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp818;
    org$pandalanguage$pandac$ASTNode* $tmp819;
    org$pandalanguage$pandac$ASTNode* $tmp821;
    org$pandalanguage$pandac$ASTNode* $tmp829;
    org$pandalanguage$pandac$parser$Token$Kind $tmp838;
    org$pandalanguage$pandac$parser$Token$Kind $tmp840;
    org$pandalanguage$pandac$ASTNode* $tmp843;
    org$pandalanguage$pandac$parser$Token$Kind $tmp850;
    org$pandalanguage$pandac$ASTNode* body856 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp857;
    org$pandalanguage$pandac$ASTNode* $tmp858;
    org$pandalanguage$pandac$ASTNode* $tmp860;
    org$pandalanguage$pandac$ASTNode* $tmp866;
    org$pandalanguage$pandac$ASTNode* $tmp867;
    panda$collections$ImmutableArray* $tmp869;
    panda$core$String* $tmp877;
    panda$core$String* $tmp878;
    panda$core$Object* $tmp880;
    org$pandalanguage$pandac$ASTNode* $tmp885;
    org$pandalanguage$pandac$ASTNode* $tmp886;
    panda$collections$ImmutableArray* $tmp888;
    org$pandalanguage$pandac$parser$Token$Kind $tmp898;
    org$pandalanguage$pandac$parser$Token$Kind $tmp900;
    org$pandalanguage$pandac$ASTNode* $tmp902;
    panda$collections$Array* arguments907 = NULL;
    panda$collections$Array* $tmp908;
    panda$collections$Array* $tmp909;
    org$pandalanguage$pandac$ASTNode* nextExpr916 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp917;
    org$pandalanguage$pandac$ASTNode* $tmp918;
    org$pandalanguage$pandac$ASTNode* $tmp920;
    org$pandalanguage$pandac$parser$Token$Kind $tmp928;
    org$pandalanguage$pandac$parser$Token$Kind $tmp930;
    org$pandalanguage$pandac$ASTNode* $tmp932;
    org$pandalanguage$pandac$ASTNode* $tmp933;
    panda$collections$ImmutableArray* $tmp935;
    int $tmp685;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp687, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp689 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp687, &$s688);
        start686 = $tmp689;
        if (((panda$core$Bit) { !start686.nonnull }).value) {
        {
            $tmp691 = NULL;
            $returnValue690 = $tmp691;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp691));
            $tmp685 = 0;
            goto $l683;
            $l692:;
            return $returnValue690;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp697 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp696 = $tmp697;
        $tmp695 = $tmp696;
        expr694 = $tmp695;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp695));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
        if (((panda$core$Bit) { expr694 == NULL }).value) {
        {
            $tmp698 = NULL;
            $returnValue690 = $tmp698;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp698));
            $tmp685 = 1;
            goto $l683;
            $l699:;
            return $returnValue690;
        }
        }
        int $tmp703;
        {
            $tmp705 = expr694;
            $match$381_9704 = $tmp705;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp705));
            panda$core$Bit $tmp706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_9704->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp706.value) {
            {
                org$pandalanguage$pandac$Position* $tmp708 = ((org$pandalanguage$pandac$Position*) ((char*) $match$381_9704->$data + 0));
                firstPosition707 = *$tmp708;
                panda$core$String** $tmp710 = ((panda$core$String**) ((char*) $match$381_9704->$data + 16));
                firstName709 = *$tmp710;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp711, ((panda$core$Int64) { 95 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp712 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp711);
                if (((panda$core$Bit) { $tmp712.nonnull }).value) {
                {
                    int $tmp715;
                    {
                        panda$collections$Array* $tmp719 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp719);
                        $tmp718 = $tmp719;
                        $tmp717 = $tmp718;
                        parameters716 = $tmp717;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp717));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp718));
                        org$pandalanguage$pandac$ASTNode* $tmp723 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp722 = $tmp723;
                        $tmp721 = $tmp722;
                        firstType720 = $tmp721;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp721));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp722));
                        if (((panda$core$Bit) { firstType720 == NULL }).value) {
                        {
                            $tmp724 = NULL;
                            $returnValue690 = $tmp724;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp724));
                            $tmp715 = 0;
                            goto $l713;
                            $l725:;
                            $tmp703 = 0;
                            goto $l701;
                            $l726:;
                            $tmp685 = 2;
                            goto $l683;
                            $l727:;
                            return $returnValue690;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp730 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp730, ((panda$core$Int64) { 31 }), firstPosition707, firstName709, firstType720);
                        $tmp729 = $tmp730;
                        panda$collections$Array$add$panda$collections$Array$T(parameters716, ((panda$core$Object*) $tmp729));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp729));
                        $l731:;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp734, ((panda$core$Int64) { 105 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp735 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp734);
                        bool $tmp733 = ((panda$core$Bit) { $tmp735.nonnull }).value;
                        if (!$tmp733) goto $l732;
                        {
                            int $tmp738;
                            {
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp740, ((panda$core$Int64) { 48 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp742 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp740, &$s741);
                                nextName739 = $tmp742;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp743, ((panda$core$Int64) { 95 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp745 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp743, &$s744);
                                if (((panda$core$Bit) { !$tmp745.nonnull }).value) {
                                {
                                    $tmp746 = NULL;
                                    $returnValue690 = $tmp746;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp746));
                                    $tmp738 = 0;
                                    goto $l736;
                                    $l747:;
                                    $tmp715 = 1;
                                    goto $l713;
                                    $l748:;
                                    $tmp703 = 1;
                                    goto $l701;
                                    $l749:;
                                    $tmp685 = 3;
                                    goto $l683;
                                    $l750:;
                                    return $returnValue690;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp755 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp754 = $tmp755;
                                $tmp753 = $tmp754;
                                nextType752 = $tmp753;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp753));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
                                if (((panda$core$Bit) { nextType752 == NULL }).value) {
                                {
                                    $tmp756 = NULL;
                                    $returnValue690 = $tmp756;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp756));
                                    $tmp738 = 1;
                                    goto $l736;
                                    $l757:;
                                    $tmp715 = 2;
                                    goto $l713;
                                    $l758:;
                                    $tmp703 = 2;
                                    goto $l701;
                                    $l759:;
                                    $tmp685 = 4;
                                    goto $l683;
                                    $l760:;
                                    return $returnValue690;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp763 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$String* $tmp765 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) nextName739.value));
                                $tmp764 = $tmp765;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp763, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) nextName739.value).position, $tmp764, nextType752);
                                $tmp762 = $tmp763;
                                panda$collections$Array$add$panda$collections$Array$T(parameters716, ((panda$core$Object*) $tmp762));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp764));
                            }
                            $tmp738 = -1;
                            goto $l736;
                            $l736:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextType752));
                            nextType752 = NULL;
                            switch ($tmp738) {
                                case 0: goto $l747;
                                case -1: goto $l766;
                                case 1: goto $l757;
                            }
                            $l766:;
                        }
                        goto $l731;
                        $l732:;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp767, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp769 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp767, &$s768);
                        if (((panda$core$Bit) { !$tmp769.nonnull }).value) {
                        {
                            $tmp770 = NULL;
                            $returnValue690 = $tmp770;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp770));
                            $tmp715 = 3;
                            goto $l713;
                            $l771:;
                            $tmp703 = 3;
                            goto $l701;
                            $l772:;
                            $tmp685 = 5;
                            goto $l683;
                            $l773:;
                            return $returnValue690;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp775, ((panda$core$Int64) { 90 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp777 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp775, &$s776);
                        if (((panda$core$Bit) { !$tmp777.nonnull }).value) {
                        {
                            $tmp778 = NULL;
                            $returnValue690 = $tmp778;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp778));
                            $tmp715 = 4;
                            goto $l713;
                            $l779:;
                            $tmp703 = 4;
                            goto $l701;
                            $l780:;
                            $tmp685 = 6;
                            goto $l683;
                            $l781:;
                            return $returnValue690;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp786 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp785 = $tmp786;
                        $tmp784 = $tmp785;
                        body783 = $tmp784;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp784));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
                        if (((panda$core$Bit) { body783 == NULL }).value) {
                        {
                            $tmp787 = NULL;
                            $returnValue690 = $tmp787;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp787));
                            $tmp715 = 5;
                            goto $l713;
                            $l788:;
                            $tmp703 = 5;
                            goto $l701;
                            $l789:;
                            $tmp685 = 7;
                            goto $l683;
                            $l790:;
                            return $returnValue690;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp794 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$collections$ImmutableArray* $tmp796 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters716);
                        $tmp795 = $tmp796;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp794, ((panda$core$Int64) { 43 }), ((org$pandalanguage$pandac$parser$Token) start686.value).position, $tmp795, body783);
                        $tmp793 = $tmp794;
                        $tmp792 = $tmp793;
                        $returnValue690 = $tmp792;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp792));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp793));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
                        $tmp715 = 6;
                        goto $l713;
                        $l797:;
                        $tmp703 = 6;
                        goto $l701;
                        $l798:;
                        $tmp685 = 8;
                        goto $l683;
                        $l799:;
                        return $returnValue690;
                    }
                    $l713:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body783));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) firstType720));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters716));
                    parameters716 = NULL;
                    firstType720 = NULL;
                    body783 = NULL;
                    switch ($tmp715) {
                        case 6: goto $l797;
                        case 2: goto $l758;
                        case 5: goto $l788;
                        case 1: goto $l748;
                        case 3: goto $l771;
                        case 4: goto $l779;
                        case 0: goto $l725;
                    }
                    $l801:;
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp802, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp803 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp802);
                if (((panda$core$Bit) { $tmp803.nonnull }).value) {
                {
                    int $tmp806;
                    {
                        panda$collections$Array* $tmp810 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp810);
                        $tmp809 = $tmp810;
                        $tmp808 = $tmp809;
                        parameters807 = $tmp808;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp808));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp809));
                        panda$collections$Array$add$panda$collections$Array$T(parameters807, ((panda$core$Object*) expr694));
                        validLambda811 = ((panda$core$Bit) { true });
                        $l812:;
                        {
                            int $tmp816;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp820 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp819 = $tmp820;
                                $tmp818 = $tmp819;
                                nextExpr817 = $tmp818;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp818));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp819));
                                if (((panda$core$Bit) { nextExpr817 == NULL }).value) {
                                {
                                    $tmp821 = NULL;
                                    $returnValue690 = $tmp821;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp821));
                                    $tmp816 = 0;
                                    goto $l814;
                                    $l822:;
                                    $tmp806 = 0;
                                    goto $l804;
                                    $l823:;
                                    $tmp703 = 7;
                                    goto $l701;
                                    $l824:;
                                    $tmp685 = 9;
                                    goto $l683;
                                    $l825:;
                                    return $returnValue690;
                                }
                                }
                                bool $tmp827 = validLambda811.value;
                                if (!$tmp827) goto $l828;
                                $tmp829 = nextExpr817;
                                panda$core$Bit $tmp833;
                                if (((panda$core$Bit) { $tmp829 != NULL }).value) goto $l830; else goto $l831;
                                $l830:;
                                panda$core$Bit $tmp834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp829->$rawValue, ((panda$core$Int64) { 20 }));
                                $tmp833 = $tmp834;
                                goto $l832;
                                $l831:;
                                $tmp833 = ((panda$core$Bit) { false });
                                goto $l832;
                                $l832:;
                                $tmp827 = $tmp833.value;
                                $l828:;
                                panda$core$Bit $tmp835 = { $tmp827 };
                                validLambda811 = $tmp835;
                                panda$collections$Array$add$panda$collections$Array$T(parameters807, ((panda$core$Object*) nextExpr817));
                            }
                            $tmp816 = -1;
                            goto $l814;
                            $l814:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr817));
                            nextExpr817 = NULL;
                            switch ($tmp816) {
                                case -1: goto $l836;
                                case 0: goto $l822;
                            }
                            $l836:;
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp838, ((panda$core$Int64) { 105 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp839 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp838);
                        bool $tmp837 = ((panda$core$Bit) { $tmp839.nonnull }).value;
                        if ($tmp837) goto $l812;
                        $l813:;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp840, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp842 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp840, &$s841);
                        if (((panda$core$Bit) { !$tmp842.nonnull }).value) {
                        {
                            $tmp843 = NULL;
                            $returnValue690 = $tmp843;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp843));
                            $tmp806 = 1;
                            goto $l804;
                            $l844:;
                            $tmp703 = 8;
                            goto $l701;
                            $l845:;
                            $tmp685 = 10;
                            goto $l683;
                            $l846:;
                            return $returnValue690;
                        }
                        }
                        bool $tmp848 = validLambda811.value;
                        if (!$tmp848) goto $l849;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp850, ((panda$core$Int64) { 90 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp851 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp850);
                        $tmp848 = ((panda$core$Bit) { $tmp851.nonnull }).value;
                        $l849:;
                        panda$core$Bit $tmp852 = { $tmp848 };
                        if ($tmp852.value) {
                        {
                            int $tmp855;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp859 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp858 = $tmp859;
                                $tmp857 = $tmp858;
                                body856 = $tmp857;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp857));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp858));
                                if (((panda$core$Bit) { body856 == NULL }).value) {
                                {
                                    $tmp860 = NULL;
                                    $returnValue690 = $tmp860;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp860));
                                    $tmp855 = 0;
                                    goto $l853;
                                    $l861:;
                                    $tmp806 = 2;
                                    goto $l804;
                                    $l862:;
                                    $tmp703 = 9;
                                    goto $l701;
                                    $l863:;
                                    $tmp685 = 11;
                                    goto $l683;
                                    $l864:;
                                    return $returnValue690;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp868 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$collections$ImmutableArray* $tmp870 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters807);
                                $tmp869 = $tmp870;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp868, ((panda$core$Int64) { 45 }), ((org$pandalanguage$pandac$parser$Token) start686.value).position, $tmp869, body856);
                                $tmp867 = $tmp868;
                                $tmp866 = $tmp867;
                                $returnValue690 = $tmp866;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp866));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp867));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp869));
                                $tmp855 = 1;
                                goto $l853;
                                $l871:;
                                $tmp806 = 3;
                                goto $l804;
                                $l872:;
                                $tmp703 = 10;
                                goto $l701;
                                $l873:;
                                $tmp685 = 12;
                                goto $l683;
                                $l874:;
                                return $returnValue690;
                            }
                            $l853:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body856));
                            body856 = NULL;
                            switch ($tmp855) {
                                case 0: goto $l861;
                                case 1: goto $l871;
                            }
                            $l876:;
                        }
                        }
                        org$pandalanguage$pandac$Position$wrapper* $tmp881;
                        $tmp881 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp881->value = ((org$pandalanguage$pandac$parser$Token) start686.value).position;
                        $tmp880 = ((panda$core$Object*) $tmp881);
                        panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s879, $tmp880);
                        $tmp878 = $tmp882;
                        panda$core$String* $tmp884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp878, &$s883);
                        $tmp877 = $tmp884;
                        panda$io$Console$printLine$panda$core$String($tmp877);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp877));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
                        panda$core$Panda$unref$panda$core$Object($tmp880);
                        org$pandalanguage$pandac$ASTNode* $tmp887 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$collections$ImmutableArray* $tmp889 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters807);
                        $tmp888 = $tmp889;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp887, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start686.value).position, $tmp888);
                        $tmp886 = $tmp887;
                        $tmp885 = $tmp886;
                        $returnValue690 = $tmp885;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp885));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp886));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
                        $tmp806 = 4;
                        goto $l804;
                        $l890:;
                        $tmp703 = 11;
                        goto $l701;
                        $l891:;
                        $tmp685 = 13;
                        goto $l683;
                        $l892:;
                        return $returnValue690;
                    }
                    $l804:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters807));
                    parameters807 = NULL;
                    switch ($tmp806) {
                        case 4: goto $l890;
                        case 2: goto $l862;
                        case 0: goto $l823;
                        case 1: goto $l844;
                        case 3: goto $l872;
                    }
                    $l894:;
                }
                }
            }
            }
            else {
            {
                int $tmp897;
                {
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp898, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp899 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp898);
                    if (((panda$core$Bit) { !$tmp899.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp900, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp900, &$s901);
                        $tmp902 = expr694;
                        $returnValue690 = $tmp902;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp902));
                        $tmp897 = 0;
                        goto $l895;
                        $l903:;
                        $tmp703 = 12;
                        goto $l701;
                        $l904:;
                        $tmp685 = 14;
                        goto $l683;
                        $l905:;
                        return $returnValue690;
                    }
                    }
                    panda$collections$Array* $tmp910 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp910);
                    $tmp909 = $tmp910;
                    $tmp908 = $tmp909;
                    arguments907 = $tmp908;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp908));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
                    panda$collections$Array$add$panda$collections$Array$T(arguments907, ((panda$core$Object*) expr694));
                    $l911:;
                    {
                        int $tmp915;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp919 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp918 = $tmp919;
                            $tmp917 = $tmp918;
                            nextExpr916 = $tmp917;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp917));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp918));
                            if (((panda$core$Bit) { nextExpr916 == NULL }).value) {
                            {
                                $tmp920 = NULL;
                                $returnValue690 = $tmp920;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp920));
                                $tmp915 = 0;
                                goto $l913;
                                $l921:;
                                $tmp897 = 1;
                                goto $l895;
                                $l922:;
                                $tmp703 = 13;
                                goto $l701;
                                $l923:;
                                $tmp685 = 15;
                                goto $l683;
                                $l924:;
                                return $returnValue690;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(arguments907, ((panda$core$Object*) nextExpr916));
                        }
                        $tmp915 = -1;
                        goto $l913;
                        $l913:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr916));
                        nextExpr916 = NULL;
                        switch ($tmp915) {
                            case -1: goto $l926;
                            case 0: goto $l921;
                        }
                        $l926:;
                    }
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp928, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp929 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp928);
                    bool $tmp927 = ((panda$core$Bit) { $tmp929.nonnull }).value;
                    if ($tmp927) goto $l911;
                    $l912:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp930, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp930, &$s931);
                    org$pandalanguage$pandac$ASTNode* $tmp934 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp936 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(arguments907);
                    $tmp935 = $tmp936;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp934, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start686.value).position, $tmp935);
                    $tmp933 = $tmp934;
                    $tmp932 = $tmp933;
                    $returnValue690 = $tmp932;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp932));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp933));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp935));
                    $tmp897 = 2;
                    goto $l895;
                    $l937:;
                    $tmp703 = 14;
                    goto $l701;
                    $l938:;
                    $tmp685 = 16;
                    goto $l683;
                    $l939:;
                    return $returnValue690;
                }
                $l895:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arguments907));
                arguments907 = NULL;
                switch ($tmp897) {
                    case 1: goto $l922;
                    case 0: goto $l903;
                    case 2: goto $l937;
                }
                $l941:;
            }
            }
        }
        $tmp703 = -1;
        goto $l701;
        $l701:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp705));
        switch ($tmp703) {
            case 13: goto $l923;
            case 9: goto $l863;
            case 14: goto $l938;
            case 12: goto $l904;
            case 11: goto $l891;
            case 6: goto $l798;
            case 5: goto $l789;
            case 3: goto $l772;
            case 7: goto $l824;
            case 4: goto $l780;
            case -1: goto $l942;
            case 10: goto $l873;
            case 2: goto $l759;
            case 1: goto $l749;
            case 0: goto $l726;
            case 8: goto $l845;
        }
        $l942:;
    }
    $tmp685 = -1;
    goto $l683;
    $l683:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr694));
    expr694 = NULL;
    switch ($tmp685) {
        case 15: goto $l924;
        case 11: goto $l864;
        case 16: goto $l939;
        case 14: goto $l905;
        case 13: goto $l892;
        case 1: goto $l699;
        case 8: goto $l799;
        case 7: goto $l790;
        case 5: goto $l773;
        case 9: goto $l825;
        case -1: goto $l943;
        case 12: goto $l874;
        case 4: goto $l760;
        case 3: goto $l750;
        case 6: goto $l781;
        case 2: goto $l727;
        case 10: goto $l846;
        case 0: goto $l692;
    }
    $l943:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start947;
    org$pandalanguage$pandac$parser$Token$Kind $tmp948;
    org$pandalanguage$pandac$parser$Token$Kind $tmp951;
    org$pandalanguage$pandac$ASTNode* t956 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp957;
    org$pandalanguage$pandac$ASTNode* $tmp958;
    org$pandalanguage$pandac$ASTNode* $returnValue960;
    org$pandalanguage$pandac$ASTNode* $tmp961;
    panda$collections$Array* parameters965 = NULL;
    panda$collections$Array* $tmp966;
    panda$collections$Array* $tmp967;
    org$pandalanguage$pandac$ASTNode* $tmp969;
    panda$core$String* $tmp971;
    org$pandalanguage$pandac$parser$Token$Kind $tmp973;
    org$pandalanguage$pandac$ASTNode* $tmp976;
    org$pandalanguage$pandac$ASTNode* expr980 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp981;
    org$pandalanguage$pandac$ASTNode* $tmp982;
    org$pandalanguage$pandac$ASTNode* $tmp984;
    org$pandalanguage$pandac$ASTNode* $tmp988;
    org$pandalanguage$pandac$ASTNode* $tmp989;
    panda$collections$ImmutableArray* $tmp991;
    panda$collections$Array* parameters997 = NULL;
    panda$collections$Array* $tmp998;
    panda$collections$Array* $tmp999;
    org$pandalanguage$pandac$ASTNode* $tmp1001;
    panda$core$String* $tmp1003;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1005;
    org$pandalanguage$pandac$ASTNode* $tmp1008;
    org$pandalanguage$pandac$ASTNode* expr1011 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1012;
    org$pandalanguage$pandac$ASTNode* $tmp1013;
    org$pandalanguage$pandac$ASTNode* $tmp1015;
    org$pandalanguage$pandac$ASTNode* $tmp1018;
    org$pandalanguage$pandac$ASTNode* $tmp1019;
    panda$collections$ImmutableArray* $tmp1021;
    int $tmp946;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp948, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp950 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp948, &$s949);
        start947 = $tmp950;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp951, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp952 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp951);
        if (((panda$core$Bit) { $tmp952.nonnull }).value) {
        {
            int $tmp955;
            {
                org$pandalanguage$pandac$ASTNode* $tmp959 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp958 = $tmp959;
                $tmp957 = $tmp958;
                t956 = $tmp957;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp957));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp958));
                if (((panda$core$Bit) { t956 == NULL }).value) {
                {
                    $tmp961 = NULL;
                    $returnValue960 = $tmp961;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp961));
                    $tmp955 = 0;
                    goto $l953;
                    $l962:;
                    $tmp946 = 0;
                    goto $l944;
                    $l963:;
                    return $returnValue960;
                }
                }
                panda$collections$Array* $tmp968 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp968);
                $tmp967 = $tmp968;
                $tmp966 = $tmp967;
                parameters965 = $tmp966;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp966));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp967));
                org$pandalanguage$pandac$ASTNode* $tmp970 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp972 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start947.value));
                $tmp971 = $tmp972;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp970, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start947.value).position, $tmp971, t956);
                $tmp969 = $tmp970;
                panda$collections$Array$add$panda$collections$Array$T(parameters965, ((panda$core$Object*) $tmp969));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp971));
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp973, ((panda$core$Int64) { 90 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp975 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp973, &$s974);
                if (((panda$core$Bit) { !$tmp975.nonnull }).value) {
                {
                    $tmp976 = NULL;
                    $returnValue960 = $tmp976;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp976));
                    $tmp955 = 1;
                    goto $l953;
                    $l977:;
                    $tmp946 = 1;
                    goto $l944;
                    $l978:;
                    return $returnValue960;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp983 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp982 = $tmp983;
                $tmp981 = $tmp982;
                expr980 = $tmp981;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp981));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp982));
                if (((panda$core$Bit) { expr980 == NULL }).value) {
                {
                    $tmp984 = NULL;
                    $returnValue960 = $tmp984;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp984));
                    $tmp955 = 2;
                    goto $l953;
                    $l985:;
                    $tmp946 = 2;
                    goto $l944;
                    $l986:;
                    return $returnValue960;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp990 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$collections$ImmutableArray* $tmp992 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters965);
                $tmp991 = $tmp992;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp990, ((panda$core$Int64) { 43 }), ((org$pandalanguage$pandac$parser$Token) start947.value).position, $tmp991, expr980);
                $tmp989 = $tmp990;
                $tmp988 = $tmp989;
                $returnValue960 = $tmp988;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp988));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp991));
                $tmp955 = 3;
                goto $l953;
                $l993:;
                $tmp946 = 3;
                goto $l944;
                $l994:;
                return $returnValue960;
            }
            $l953:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr980));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters965));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t956));
            t956 = NULL;
            parameters965 = NULL;
            expr980 = NULL;
            switch ($tmp955) {
                case 3: goto $l993;
                case 0: goto $l962;
                case 1: goto $l977;
                case 2: goto $l985;
            }
            $l996:;
        }
        }
        panda$collections$Array* $tmp1000 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1000);
        $tmp999 = $tmp1000;
        $tmp998 = $tmp999;
        parameters997 = $tmp998;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp998));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp999));
        org$pandalanguage$pandac$ASTNode* $tmp1002 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1004 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start947.value));
        $tmp1003 = $tmp1004;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1002, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) start947.value).position, $tmp1003);
        $tmp1001 = $tmp1002;
        panda$collections$Array$add$panda$collections$Array$T(parameters997, ((panda$core$Object*) $tmp1001));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1001));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1003));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1005, ((panda$core$Int64) { 90 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1007 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1005, &$s1006);
        if (((panda$core$Bit) { !$tmp1007.nonnull }).value) {
        {
            $tmp1008 = NULL;
            $returnValue960 = $tmp1008;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1008));
            $tmp946 = 4;
            goto $l944;
            $l1009:;
            return $returnValue960;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1014 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1013 = $tmp1014;
        $tmp1012 = $tmp1013;
        expr1011 = $tmp1012;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1012));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1013));
        if (((panda$core$Bit) { expr1011 == NULL }).value) {
        {
            $tmp1015 = NULL;
            $returnValue960 = $tmp1015;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1015));
            $tmp946 = 5;
            goto $l944;
            $l1016:;
            return $returnValue960;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1020 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp1022 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters997);
        $tmp1021 = $tmp1022;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1020, ((panda$core$Int64) { 45 }), ((org$pandalanguage$pandac$parser$Token) start947.value).position, $tmp1021, expr1011);
        $tmp1019 = $tmp1020;
        $tmp1018 = $tmp1019;
        $returnValue960 = $tmp1018;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1018));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1019));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1021));
        $tmp946 = 6;
        goto $l944;
        $l1023:;
        return $returnValue960;
    }
    $l944:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1011));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters997));
    parameters997 = NULL;
    expr1011 = NULL;
    switch ($tmp946) {
        case 4: goto $l1009;
        case 2: goto $l986;
        case 5: goto $l1016;
        case 3: goto $l994;
        case 6: goto $l1023;
        case 1: goto $l978;
        case 0: goto $l963;
    }
    $l1025:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1029;
    org$pandalanguage$pandac$ASTNode* $returnValue1032;
    org$pandalanguage$pandac$ASTNode* $tmp1033;
    org$pandalanguage$pandac$ASTNode* regex1036 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1037;
    org$pandalanguage$pandac$ASTNode* $tmp1038;
    org$pandalanguage$pandac$ASTNode* $tmp1040;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1043;
    org$pandalanguage$pandac$ASTNode* $tmp1045;
    int $tmp1028;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1029, ((panda$core$Int64) { 54 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1031 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1029, &$s1030);
        if (((panda$core$Bit) { !$tmp1031.nonnull }).value) {
        {
            $tmp1033 = NULL;
            $returnValue1032 = $tmp1033;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1033));
            $tmp1028 = 0;
            goto $l1026;
            $l1034:;
            return $returnValue1032;
        }
        }
        self->regexParser->lexer->dfa->offset = self->lexer->dfa->offset;
        self->regexParser->lexer->dfa->line = self->lexer->dfa->line;
        self->regexParser->lexer->dfa->column = self->lexer->dfa->column;
        org$pandalanguage$pandac$ASTNode* $tmp1039 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self->regexParser);
        $tmp1038 = $tmp1039;
        $tmp1037 = $tmp1038;
        regex1036 = $tmp1037;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1037));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1038));
        self->lexer->dfa->offset = self->regexParser->lexer->dfa->offset;
        self->lexer->dfa->line = self->regexParser->lexer->dfa->line;
        self->lexer->dfa->column = self->regexParser->lexer->dfa->column;
        if (((panda$core$Bit) { regex1036 == NULL }).value) {
        {
            $tmp1040 = NULL;
            $returnValue1032 = $tmp1040;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1040));
            $tmp1028 = 1;
            goto $l1026;
            $l1041:;
            return $returnValue1032;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1043, ((panda$core$Int64) { 54 }));
        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1043, &$s1044);
        $tmp1045 = regex1036;
        $returnValue1032 = $tmp1045;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1045));
        $tmp1028 = 2;
        goto $l1026;
        $l1046:;
        return $returnValue1032;
    }
    $l1026:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) regex1036));
    regex1036 = NULL;
    switch ($tmp1028) {
        case 2: goto $l1046;
        case 0: goto $l1034;
        case 1: goto $l1041;
    }
    $l1048:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t1049;
    org$pandalanguage$pandac$parser$Token$Kind $match$524_91051;
    org$pandalanguage$pandac$parser$Token$Kind check1053;
    org$pandalanguage$pandac$ASTNode* $returnValue1063;
    org$pandalanguage$pandac$ASTNode* $tmp1064;
    org$pandalanguage$pandac$ASTNode* $tmp1065;
    org$pandalanguage$pandac$ASTNode* $tmp1068;
    org$pandalanguage$pandac$ASTNode* $tmp1069;
    panda$core$String* $tmp1071;
    org$pandalanguage$pandac$ASTNode* $tmp1075;
    org$pandalanguage$pandac$ASTNode* $tmp1076;
    panda$core$String* $tmp1078;
    org$pandalanguage$pandac$ASTNode* $tmp1083;
    org$pandalanguage$pandac$ASTNode* $tmp1084;
    panda$core$String* $tmp1086;
    panda$core$String* $tmp1087;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1089;
    org$pandalanguage$pandac$ASTNode* $tmp1094;
    org$pandalanguage$pandac$ASTNode* $tmp1095;
    panda$core$String* $tmp1097;
    panda$core$String* $tmp1098;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1100;
    org$pandalanguage$pandac$ASTNode* $tmp1105;
    org$pandalanguage$pandac$ASTNode* $tmp1106;
    panda$core$String* $tmp1108;
    org$pandalanguage$pandac$ASTNode* $tmp1113;
    org$pandalanguage$pandac$ASTNode* $tmp1114;
    org$pandalanguage$pandac$ASTNode* $tmp1118;
    org$pandalanguage$pandac$ASTNode* $tmp1119;
    org$pandalanguage$pandac$ASTNode* $tmp1123;
    org$pandalanguage$pandac$ASTNode* $tmp1124;
    org$pandalanguage$pandac$ASTNode* $tmp1128;
    org$pandalanguage$pandac$ASTNode* $tmp1129;
    org$pandalanguage$pandac$ASTNode* $tmp1133;
    org$pandalanguage$pandac$ASTNode* $tmp1134;
    org$pandalanguage$pandac$ASTNode* $tmp1142;
    org$pandalanguage$pandac$ASTNode* $tmp1143;
    org$pandalanguage$pandac$ASTNode* $tmp1147;
    org$pandalanguage$pandac$ASTNode* $tmp1148;
    panda$core$String* name1155 = NULL;
    panda$core$String* $tmp1156;
    panda$core$String* $tmp1157;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1164;
    org$pandalanguage$pandac$ASTNode* expr1166 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1167;
    org$pandalanguage$pandac$ASTNode* $tmp1168;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1170;
    org$pandalanguage$pandac$ASTNode* $tmp1172;
    org$pandalanguage$pandac$ASTNode* $tmp1173;
    org$pandalanguage$pandac$ASTNode* $tmp1181;
    org$pandalanguage$pandac$ASTNode* $tmp1182;
    panda$core$String* $tmp1186;
    panda$core$String* $tmp1187;
    org$pandalanguage$pandac$ASTNode* $tmp1192;
    org$pandalanguage$pandac$ASTNode* $tmp1201;
    org$pandalanguage$pandac$ASTNode* $tmp1202;
    org$pandalanguage$pandac$ASTNode* $tmp1206;
    org$pandalanguage$pandac$ASTNode* $tmp1207;
    panda$core$String* $tmp1210;
    panda$core$String* $tmp1211;
    panda$core$String* $tmp1213;
    org$pandalanguage$pandac$ASTNode* $tmp1218;
    org$pandalanguage$pandac$parser$Token $tmp1050 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t1049 = $tmp1050;
    {
        $match$524_91051 = t1049.kind;
        panda$core$Bit $tmp1052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1052.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1054 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            check1053 = $tmp1054.kind;
            bool $tmp1056 = self->allowLambdas.value;
            if (!$tmp1056) goto $l1057;
            panda$core$Bit $tmp1058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1053.$rawValue, ((panda$core$Int64) { 95 }));
            $tmp1056 = $tmp1058.value;
            $l1057:;
            panda$core$Bit $tmp1059 = { $tmp1056 };
            bool $tmp1055 = $tmp1059.value;
            if ($tmp1055) goto $l1060;
            panda$core$Bit $tmp1061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1053.$rawValue, ((panda$core$Int64) { 90 }));
            $tmp1055 = $tmp1061.value;
            $l1060:;
            panda$core$Bit $tmp1062 = { $tmp1055 };
            if ($tmp1062.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1049);
                org$pandalanguage$pandac$ASTNode* $tmp1066 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1065 = $tmp1066;
                $tmp1064 = $tmp1065;
                $returnValue1063 = $tmp1064;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1064));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1065));
                return $returnValue1063;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1070 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1072 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1049);
            $tmp1071 = $tmp1072;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1070, ((panda$core$Int64) { 20 }), t1049.position, $tmp1071);
            $tmp1069 = $tmp1070;
            $tmp1068 = $tmp1069;
            $returnValue1063 = $tmp1068;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1068));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1069));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1071));
            return $returnValue1063;
        }
        }
        else {
        panda$core$Bit $tmp1074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1074.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1077 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1079 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1049);
            $tmp1078 = $tmp1079;
            panda$core$UInt64$nullable $tmp1080 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1078);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1077, ((panda$core$Int64) { 22 }), t1049.position, ((panda$core$UInt64) $tmp1080.value));
            $tmp1076 = $tmp1077;
            $tmp1075 = $tmp1076;
            $returnValue1063 = $tmp1075;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1075));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1076));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1078));
            return $returnValue1063;
        }
        }
        else {
        panda$core$Bit $tmp1082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1082.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1085 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1088 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1049);
            $tmp1087 = $tmp1088;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1089, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1090 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1087, $tmp1089);
            $tmp1086 = $tmp1090;
            panda$core$UInt64$nullable $tmp1091 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1086, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1085, ((panda$core$Int64) { 22 }), t1049.position, ((panda$core$UInt64) $tmp1091.value));
            $tmp1084 = $tmp1085;
            $tmp1083 = $tmp1084;
            $returnValue1063 = $tmp1083;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1083));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1084));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1086));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1087));
            return $returnValue1063;
        }
        }
        else {
        panda$core$Bit $tmp1093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1093.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1096 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1099 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1049);
            $tmp1098 = $tmp1099;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1100, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1101 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1098, $tmp1100);
            $tmp1097 = $tmp1101;
            panda$core$UInt64$nullable $tmp1102 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1097, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1096, ((panda$core$Int64) { 22 }), t1049.position, ((panda$core$UInt64) $tmp1102.value));
            $tmp1095 = $tmp1096;
            $tmp1094 = $tmp1095;
            $returnValue1063 = $tmp1094;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1094));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1095));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1097));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1098));
            return $returnValue1063;
        }
        }
        else {
        panda$core$Bit $tmp1104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1104.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1107 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1109 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1049);
            $tmp1108 = $tmp1109;
            panda$core$Real64$nullable $tmp1110 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp1108);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1107, ((panda$core$Int64) { 34 }), t1049.position, ((panda$core$Real64) $tmp1110.value));
            $tmp1106 = $tmp1107;
            $tmp1105 = $tmp1106;
            $returnValue1063 = $tmp1105;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1105));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1106));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1108));
            return $returnValue1063;
        }
        }
        else {
        panda$core$Bit $tmp1112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp1112.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1115 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1115, ((panda$core$Int64) { 37 }), t1049.position);
            $tmp1114 = $tmp1115;
            $tmp1113 = $tmp1114;
            $returnValue1063 = $tmp1113;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1113));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1114));
            return $returnValue1063;
        }
        }
        else {
        panda$core$Bit $tmp1117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp1117.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1120 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1120, ((panda$core$Int64) { 39 }), t1049.position);
            $tmp1119 = $tmp1120;
            $tmp1118 = $tmp1119;
            $returnValue1063 = $tmp1118;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1118));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1119));
            return $returnValue1063;
        }
        }
        else {
        panda$core$Bit $tmp1122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1122.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1125 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1125, ((panda$core$Int64) { 28 }), t1049.position);
            $tmp1124 = $tmp1125;
            $tmp1123 = $tmp1124;
            $returnValue1063 = $tmp1123;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1123));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1124));
            return $returnValue1063;
        }
        }
        else {
        panda$core$Bit $tmp1127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1127.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1130 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1130, ((panda$core$Int64) { 5 }), t1049.position, ((panda$core$Bit) { true }));
            $tmp1129 = $tmp1130;
            $tmp1128 = $tmp1129;
            $returnValue1063 = $tmp1128;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1128));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1129));
            return $returnValue1063;
        }
        }
        else {
        panda$core$Bit $tmp1132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1132.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1135 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1135, ((panda$core$Int64) { 5 }), t1049.position, ((panda$core$Bit) { false }));
            $tmp1134 = $tmp1135;
            $tmp1133 = $tmp1134;
            $returnValue1063 = $tmp1133;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1133));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1134));
            return $returnValue1063;
        }
        }
        else {
        panda$core$Bit $tmp1138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp1137 = $tmp1138.value;
        if ($tmp1137) goto $l1139;
        panda$core$Bit $tmp1140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp1137 = $tmp1140.value;
        $l1139:;
        panda$core$Bit $tmp1141 = { $tmp1137 };
        if ($tmp1141.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1049);
            org$pandalanguage$pandac$ASTNode* $tmp1144 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1143 = $tmp1144;
            $tmp1142 = $tmp1143;
            $returnValue1063 = $tmp1142;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1142));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1143));
            return $returnValue1063;
        }
        }
        else {
        panda$core$Bit $tmp1146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp1146.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1049);
            org$pandalanguage$pandac$ASTNode* $tmp1149 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1148 = $tmp1149;
            $tmp1147 = $tmp1148;
            $returnValue1063 = $tmp1147;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1147));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1148));
            return $returnValue1063;
        }
        }
        else {
        panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1151.value) {
        {
            int $tmp1154;
            {
                panda$core$String* $tmp1158 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1049);
                $tmp1157 = $tmp1158;
                $tmp1156 = $tmp1157;
                name1155 = $tmp1156;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1156));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1157));
                panda$core$Bit $tmp1160 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1155, &$s1159);
                if ($tmp1160.value) {
                {
                    int $tmp1163;
                    {
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1164, ((panda$core$Int64) { 103 }));
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1164, &$s1165);
                        org$pandalanguage$pandac$ASTNode* $tmp1169 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1168 = $tmp1169;
                        $tmp1167 = $tmp1168;
                        expr1166 = $tmp1167;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1167));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1168));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1170, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1170, &$s1171);
                        org$pandalanguage$pandac$ASTNode* $tmp1174 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1174, ((panda$core$Int64) { 2 }), t1049.position, expr1166);
                        $tmp1173 = $tmp1174;
                        $tmp1172 = $tmp1173;
                        $returnValue1063 = $tmp1172;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1172));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1173));
                        $tmp1163 = 0;
                        goto $l1161;
                        $l1175:;
                        $tmp1154 = 0;
                        goto $l1152;
                        $l1176:;
                        return $returnValue1063;
                    }
                    $l1161:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1166));
                    expr1166 = NULL;
                    switch ($tmp1163) {
                        case 0: goto $l1175;
                    }
                    $l1178:;
                }
                }
                else {
                panda$core$Bit $tmp1180 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1155, &$s1179);
                if ($tmp1180.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1183 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1183, ((panda$core$Int64) { 3 }), t1049.position);
                    $tmp1182 = $tmp1183;
                    $tmp1181 = $tmp1182;
                    $returnValue1063 = $tmp1181;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1181));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1182));
                    $tmp1154 = 1;
                    goto $l1152;
                    $l1184:;
                    return $returnValue1063;
                }
                }
                }
                panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1188, name1155);
                $tmp1187 = $tmp1189;
                panda$core$String* $tmp1191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1187, &$s1190);
                $tmp1186 = $tmp1191;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1049, $tmp1186);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1186));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1187));
                $tmp1192 = NULL;
                $returnValue1063 = $tmp1192;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1192));
                $tmp1154 = 2;
                goto $l1152;
                $l1193:;
                return $returnValue1063;
            }
            $l1152:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1155));
            name1155 = NULL;
            switch ($tmp1154) {
                case 1: goto $l1184;
                case 0: goto $l1176;
                case 2: goto $l1193;
            }
            $l1195:;
        }
        }
        else {
        panda$core$Bit $tmp1197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 20 }));
        bool $tmp1196 = $tmp1197.value;
        if ($tmp1196) goto $l1198;
        panda$core$Bit $tmp1199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp1196 = $tmp1199.value;
        $l1198:;
        panda$core$Bit $tmp1200 = { $tmp1196 };
        if ($tmp1200.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1049);
            org$pandalanguage$pandac$ASTNode* $tmp1203 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1202 = $tmp1203;
            $tmp1201 = $tmp1202;
            $returnValue1063 = $tmp1201;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1202));
            return $returnValue1063;
        }
        }
        else {
        panda$core$Bit $tmp1205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_91051.$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp1205.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1049);
            org$pandalanguage$pandac$ASTNode* $tmp1208 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1207 = $tmp1208;
            $tmp1206 = $tmp1207;
            $returnValue1063 = $tmp1206;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1206));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1207));
            return $returnValue1063;
        }
        }
        else {
        {
            panda$core$String* $tmp1214 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1049);
            $tmp1213 = $tmp1214;
            panda$core$String* $tmp1215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1212, $tmp1213);
            $tmp1211 = $tmp1215;
            panda$core$String* $tmp1217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1211, &$s1216);
            $tmp1210 = $tmp1217;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1049, $tmp1210);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1211));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1213));
            $tmp1218 = NULL;
            $returnValue1063 = $tmp1218;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1218));
            return $returnValue1063;
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
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* $match$583_91223 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1224;
    panda$core$String* text1226 = NULL;
    panda$core$String* $returnValue1228;
    panda$core$String* $tmp1229;
    org$pandalanguage$pandac$ASTNode* base1233 = NULL;
    panda$core$String* field1235 = NULL;
    panda$core$String* result1240 = NULL;
    panda$core$String* $tmp1241;
    panda$core$String* $tmp1242;
    panda$core$String* $tmp1244;
    panda$core$String* $tmp1245;
    panda$core$String* $tmp1246;
    panda$core$String* $tmp1247;
    panda$core$String* $tmp1248;
    panda$core$String* $tmp1252;
    panda$core$String* $tmp1257;
    int $tmp1222;
    {
        $tmp1224 = p_expr;
        $match$583_91223 = $tmp1224;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1224));
        panda$core$Bit $tmp1225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$583_91223->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1225.value) {
        {
            panda$core$String** $tmp1227 = ((panda$core$String**) ((char*) $match$583_91223->$data + 16));
            text1226 = *$tmp1227;
            $tmp1229 = text1226;
            $returnValue1228 = $tmp1229;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1229));
            $tmp1222 = 0;
            goto $l1220;
            $l1230:;
            return $returnValue1228;
        }
        }
        else {
        panda$core$Bit $tmp1232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$583_91223->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1232.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1234 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$583_91223->$data + 16));
            base1233 = *$tmp1234;
            panda$core$String** $tmp1236 = ((panda$core$String**) ((char*) $match$583_91223->$data + 24));
            field1235 = *$tmp1236;
            int $tmp1239;
            {
                panda$core$String* $tmp1243 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base1233);
                $tmp1242 = $tmp1243;
                $tmp1241 = $tmp1242;
                result1240 = $tmp1241;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1242));
                if (((panda$core$Bit) { result1240 != NULL }).value) {
                {
                    {
                        $tmp1245 = result1240;
                        $tmp1244 = $tmp1245;
                        panda$core$String* $tmp1250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1249, field1235);
                        $tmp1248 = $tmp1250;
                        panda$core$String* $tmp1251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1240, $tmp1248);
                        $tmp1247 = $tmp1251;
                        $tmp1246 = $tmp1247;
                        result1240 = $tmp1246;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1246));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1247));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1248));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1244));
                    }
                }
                }
                $tmp1252 = result1240;
                $returnValue1228 = $tmp1252;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1252));
                $tmp1239 = 0;
                goto $l1237;
                $l1253:;
                $tmp1222 = 1;
                goto $l1220;
                $l1254:;
                return $returnValue1228;
            }
            $l1237:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1240));
            result1240 = NULL;
            switch ($tmp1239) {
                case 0: goto $l1253;
            }
            $l1256:;
        }
        }
        else {
        {
            $tmp1257 = NULL;
            $returnValue1228 = $tmp1257;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1257));
            $tmp1222 = 2;
            goto $l1220;
            $l1258:;
            return $returnValue1228;
        }
        }
        }
    }
    $tmp1222 = -1;
    goto $l1220;
    $l1220:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1224));
    switch ($tmp1222) {
        case -1: goto $l1260;
        case 2: goto $l1258;
        case 1: goto $l1254;
        case 0: goto $l1230;
    }
    $l1260:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name1261;
    org$pandalanguage$pandac$parser$Token$Kind $match$603_91263;
    panda$core$String* $returnValue1349;
    panda$core$String* $tmp1350;
    panda$core$String* $tmp1351;
    org$pandalanguage$pandac$parser$Token token1355;
    panda$core$String* $tmp1358;
    panda$core$String* $tmp1361;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1365;
    panda$core$String* $tmp1368;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1370;
    panda$core$String* $tmp1372;
    panda$core$String* $tmp1375;
    panda$core$String* $tmp1378;
    panda$core$String* $tmp1379;
    panda$core$String* $tmp1381;
    panda$core$String* $tmp1386;
    org$pandalanguage$pandac$parser$Token $tmp1262 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name1261 = $tmp1262;
    {
        $match$603_91263 = name1261.kind;
        panda$core$Bit $tmp1285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp1284 = $tmp1285.value;
        if ($tmp1284) goto $l1286;
        panda$core$Bit $tmp1287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp1284 = $tmp1287.value;
        $l1286:;
        panda$core$Bit $tmp1288 = { $tmp1284 };
        bool $tmp1283 = $tmp1288.value;
        if ($tmp1283) goto $l1289;
        panda$core$Bit $tmp1290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp1283 = $tmp1290.value;
        $l1289:;
        panda$core$Bit $tmp1291 = { $tmp1283 };
        bool $tmp1282 = $tmp1291.value;
        if ($tmp1282) goto $l1292;
        panda$core$Bit $tmp1293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp1282 = $tmp1293.value;
        $l1292:;
        panda$core$Bit $tmp1294 = { $tmp1282 };
        bool $tmp1281 = $tmp1294.value;
        if ($tmp1281) goto $l1295;
        panda$core$Bit $tmp1296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp1281 = $tmp1296.value;
        $l1295:;
        panda$core$Bit $tmp1297 = { $tmp1281 };
        bool $tmp1280 = $tmp1297.value;
        if ($tmp1280) goto $l1298;
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp1280 = $tmp1299.value;
        $l1298:;
        panda$core$Bit $tmp1300 = { $tmp1280 };
        bool $tmp1279 = $tmp1300.value;
        if ($tmp1279) goto $l1301;
        panda$core$Bit $tmp1302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp1279 = $tmp1302.value;
        $l1301:;
        panda$core$Bit $tmp1303 = { $tmp1279 };
        bool $tmp1278 = $tmp1303.value;
        if ($tmp1278) goto $l1304;
        panda$core$Bit $tmp1305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp1278 = $tmp1305.value;
        $l1304:;
        panda$core$Bit $tmp1306 = { $tmp1278 };
        bool $tmp1277 = $tmp1306.value;
        if ($tmp1277) goto $l1307;
        panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp1277 = $tmp1308.value;
        $l1307:;
        panda$core$Bit $tmp1309 = { $tmp1277 };
        bool $tmp1276 = $tmp1309.value;
        if ($tmp1276) goto $l1310;
        panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp1276 = $tmp1311.value;
        $l1310:;
        panda$core$Bit $tmp1312 = { $tmp1276 };
        bool $tmp1275 = $tmp1312.value;
        if ($tmp1275) goto $l1313;
        panda$core$Bit $tmp1314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp1275 = $tmp1314.value;
        $l1313:;
        panda$core$Bit $tmp1315 = { $tmp1275 };
        bool $tmp1274 = $tmp1315.value;
        if ($tmp1274) goto $l1316;
        panda$core$Bit $tmp1317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp1274 = $tmp1317.value;
        $l1316:;
        panda$core$Bit $tmp1318 = { $tmp1274 };
        bool $tmp1273 = $tmp1318.value;
        if ($tmp1273) goto $l1319;
        panda$core$Bit $tmp1320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp1273 = $tmp1320.value;
        $l1319:;
        panda$core$Bit $tmp1321 = { $tmp1273 };
        bool $tmp1272 = $tmp1321.value;
        if ($tmp1272) goto $l1322;
        panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp1272 = $tmp1323.value;
        $l1322:;
        panda$core$Bit $tmp1324 = { $tmp1272 };
        bool $tmp1271 = $tmp1324.value;
        if ($tmp1271) goto $l1325;
        panda$core$Bit $tmp1326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp1271 = $tmp1326.value;
        $l1325:;
        panda$core$Bit $tmp1327 = { $tmp1271 };
        bool $tmp1270 = $tmp1327.value;
        if ($tmp1270) goto $l1328;
        panda$core$Bit $tmp1329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp1270 = $tmp1329.value;
        $l1328:;
        panda$core$Bit $tmp1330 = { $tmp1270 };
        bool $tmp1269 = $tmp1330.value;
        if ($tmp1269) goto $l1331;
        panda$core$Bit $tmp1332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp1269 = $tmp1332.value;
        $l1331:;
        panda$core$Bit $tmp1333 = { $tmp1269 };
        bool $tmp1268 = $tmp1333.value;
        if ($tmp1268) goto $l1334;
        panda$core$Bit $tmp1335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp1268 = $tmp1335.value;
        $l1334:;
        panda$core$Bit $tmp1336 = { $tmp1268 };
        bool $tmp1267 = $tmp1336.value;
        if ($tmp1267) goto $l1337;
        panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1267 = $tmp1338.value;
        $l1337:;
        panda$core$Bit $tmp1339 = { $tmp1267 };
        bool $tmp1266 = $tmp1339.value;
        if ($tmp1266) goto $l1340;
        panda$core$Bit $tmp1341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp1266 = $tmp1341.value;
        $l1340:;
        panda$core$Bit $tmp1342 = { $tmp1266 };
        bool $tmp1265 = $tmp1342.value;
        if ($tmp1265) goto $l1343;
        panda$core$Bit $tmp1344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp1265 = $tmp1344.value;
        $l1343:;
        panda$core$Bit $tmp1345 = { $tmp1265 };
        bool $tmp1264 = $tmp1345.value;
        if ($tmp1264) goto $l1346;
        panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp1264 = $tmp1347.value;
        $l1346:;
        panda$core$Bit $tmp1348 = { $tmp1264 };
        if ($tmp1348.value) {
        {
            panda$core$String* $tmp1352 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1261);
            $tmp1351 = $tmp1352;
            $tmp1350 = $tmp1351;
            $returnValue1349 = $tmp1350;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
            return $returnValue1349;
        }
        }
        else {
        panda$core$Bit $tmp1354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1354.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1356 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token1355 = $tmp1356;
            panda$core$Bit $tmp1357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1355.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp1357.value) {
            {
                $tmp1358 = &$s1359;
                $returnValue1349 = $tmp1358;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1358));
                return $returnValue1349;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1355);
                $tmp1361 = &$s1362;
                $returnValue1349 = $tmp1361;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1361));
                return $returnValue1349;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91263.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp1364.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1365, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1367 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1365, &$s1366);
            if (((panda$core$Bit) { !$tmp1367.nonnull }).value) {
            {
                $tmp1368 = NULL;
                $returnValue1349 = $tmp1368;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1368));
                return $returnValue1349;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1370, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1371 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1370);
            if (((panda$core$Bit) { $tmp1371.nonnull }).value) {
            {
                $tmp1372 = &$s1373;
                $returnValue1349 = $tmp1372;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1372));
                return $returnValue1349;
            }
            }
            $tmp1375 = &$s1376;
            $returnValue1349 = $tmp1375;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1375));
            return $returnValue1349;
        }
        }
        else {
        {
            panda$core$String* $tmp1382 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1261);
            $tmp1381 = $tmp1382;
            panda$core$String* $tmp1383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1380, $tmp1381);
            $tmp1379 = $tmp1383;
            panda$core$String* $tmp1385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1379, &$s1384);
            $tmp1378 = $tmp1385;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name1261, $tmp1378);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1378));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1379));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
            $tmp1386 = NULL;
            $returnValue1349 = $tmp1386;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1386));
            return $returnValue1349;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue1388;
    org$pandalanguage$pandac$ASTNode* $tmp1389;
    org$pandalanguage$pandac$ASTNode* $tmp1390;
    org$pandalanguage$pandac$ASTNode* $tmp1391 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    $tmp1390 = $tmp1391;
    $tmp1389 = $tmp1390;
    $returnValue1388 = $tmp1389;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1389));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1390));
    return $returnValue1388;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1396;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1397;
    org$pandalanguage$pandac$ASTNode* $returnValue1400;
    org$pandalanguage$pandac$ASTNode* $tmp1401;
    panda$collections$Array* subtypes1404 = NULL;
    panda$collections$Array* $tmp1405;
    panda$collections$Array* $tmp1406;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1408;
    org$pandalanguage$pandac$ASTNode* t1413 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1414;
    org$pandalanguage$pandac$ASTNode* $tmp1415;
    org$pandalanguage$pandac$ASTNode* $tmp1417;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1424;
    org$pandalanguage$pandac$ASTNode* $tmp1426;
    org$pandalanguage$pandac$ASTNode* $tmp1427;
    org$pandalanguage$pandac$ASTNode* $tmp1428;
    org$pandalanguage$pandac$ASTNode* $tmp1430;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1434;
    org$pandalanguage$pandac$parser$Token yields1437;
    org$pandalanguage$pandac$parser$Token$Kind $match$665_91439;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1456;
    org$pandalanguage$pandac$ASTNode* $tmp1459;
    panda$collections$Array* returnTypes1463 = NULL;
    panda$collections$Array* $tmp1464;
    panda$collections$Array* $tmp1465;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1467;
    org$pandalanguage$pandac$ASTNode* t1472 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1473;
    org$pandalanguage$pandac$ASTNode* $tmp1474;
    org$pandalanguage$pandac$ASTNode* $tmp1476;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1484;
    org$pandalanguage$pandac$ASTNode* $tmp1486;
    org$pandalanguage$pandac$ASTNode* $tmp1487;
    org$pandalanguage$pandac$ASTNode* $tmp1488;
    org$pandalanguage$pandac$ASTNode* $tmp1490;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1495;
    org$pandalanguage$pandac$ASTNode* returnType1498 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1501;
    org$pandalanguage$pandac$ASTNode* $tmp1502;
    org$pandalanguage$pandac$ASTNode* $tmp1505;
    org$pandalanguage$pandac$ASTNode* $tmp1506;
    panda$core$Object* $tmp1507;
    org$pandalanguage$pandac$ASTNode* $tmp1509;
    org$pandalanguage$pandac$ASTNode* $tmp1510;
    org$pandalanguage$pandac$ASTNode* $tmp1511;
    panda$collections$ImmutableArray* $tmp1513;
    org$pandalanguage$pandac$ASTNode* $tmp1515;
    org$pandalanguage$pandac$ASTNode* $tmp1516;
    panda$collections$ImmutableArray* $tmp1518;
    org$pandalanguage$pandac$ASTNode* $tmp1524;
    org$pandalanguage$pandac$ASTNode* $tmp1525;
    panda$collections$ImmutableArray* $tmp1527;
    int $tmp1395;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1397, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1399 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1397, &$s1398);
        start1396 = $tmp1399;
        if (((panda$core$Bit) { !start1396.nonnull }).value) {
        {
            $tmp1401 = NULL;
            $returnValue1400 = $tmp1401;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1401));
            $tmp1395 = 0;
            goto $l1393;
            $l1402:;
            return $returnValue1400;
        }
        }
        panda$collections$Array* $tmp1407 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1407);
        $tmp1406 = $tmp1407;
        $tmp1405 = $tmp1406;
        subtypes1404 = $tmp1405;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1405));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1406));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1408, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1409 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1408);
        if (((panda$core$Bit) { !$tmp1409.nonnull }).value) {
        {
            int $tmp1412;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1416 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1415 = $tmp1416;
                $tmp1414 = $tmp1415;
                t1413 = $tmp1414;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1414));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1415));
                if (((panda$core$Bit) { t1413 == NULL }).value) {
                {
                    $tmp1417 = NULL;
                    $returnValue1400 = $tmp1417;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1417));
                    $tmp1412 = 0;
                    goto $l1410;
                    $l1418:;
                    $tmp1395 = 1;
                    goto $l1393;
                    $l1419:;
                    return $returnValue1400;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1404, ((panda$core$Object*) t1413));
                $l1421:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1424, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1425 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1424);
                bool $tmp1423 = ((panda$core$Bit) { $tmp1425.nonnull }).value;
                if (!$tmp1423) goto $l1422;
                {
                    {
                        $tmp1426 = t1413;
                        org$pandalanguage$pandac$ASTNode* $tmp1429 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1428 = $tmp1429;
                        $tmp1427 = $tmp1428;
                        t1413 = $tmp1427;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1427));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1428));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1426));
                    }
                    if (((panda$core$Bit) { t1413 == NULL }).value) {
                    {
                        $tmp1430 = NULL;
                        $returnValue1400 = $tmp1430;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1430));
                        $tmp1412 = 1;
                        goto $l1410;
                        $l1431:;
                        $tmp1395 = 2;
                        goto $l1393;
                        $l1432:;
                        return $returnValue1400;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1404, ((panda$core$Object*) t1413));
                }
                goto $l1421;
                $l1422:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1434, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1434, &$s1435);
            }
            $tmp1412 = -1;
            goto $l1410;
            $l1410:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1413));
            t1413 = NULL;
            switch ($tmp1412) {
                case -1: goto $l1436;
                case 1: goto $l1431;
                case 0: goto $l1418;
            }
            $l1436:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1438 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1437 = $tmp1438;
        {
            $match$665_91439 = yields1437.kind;
            panda$core$Bit $tmp1443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$665_91439.$rawValue, ((panda$core$Int64) { 90 }));
            bool $tmp1442 = $tmp1443.value;
            if ($tmp1442) goto $l1444;
            panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$665_91439.$rawValue, ((panda$core$Int64) { 91 }));
            $tmp1442 = $tmp1445.value;
            $l1444:;
            panda$core$Bit $tmp1446 = { $tmp1442 };
            bool $tmp1441 = $tmp1446.value;
            if ($tmp1441) goto $l1447;
            panda$core$Bit $tmp1448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$665_91439.$rawValue, ((panda$core$Int64) { 92 }));
            $tmp1441 = $tmp1448.value;
            $l1447:;
            panda$core$Bit $tmp1449 = { $tmp1441 };
            bool $tmp1440 = $tmp1449.value;
            if ($tmp1440) goto $l1450;
            panda$core$Bit $tmp1451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$665_91439.$rawValue, ((panda$core$Int64) { 93 }));
            $tmp1440 = $tmp1451.value;
            $l1450:;
            panda$core$Bit $tmp1452 = { $tmp1440 };
            if ($tmp1452.value) {
            {
                int $tmp1455;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1456, ((panda$core$Int64) { 103 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1458 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1456, &$s1457);
                    if (((panda$core$Bit) { !$tmp1458.nonnull }).value) {
                    {
                        $tmp1459 = NULL;
                        $returnValue1400 = $tmp1459;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1459));
                        $tmp1455 = 0;
                        goto $l1453;
                        $l1460:;
                        $tmp1395 = 3;
                        goto $l1393;
                        $l1461:;
                        return $returnValue1400;
                    }
                    }
                    panda$collections$Array* $tmp1466 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1466);
                    $tmp1465 = $tmp1466;
                    $tmp1464 = $tmp1465;
                    returnTypes1463 = $tmp1464;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1464));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1465));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1467, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1468 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1467);
                    if (((panda$core$Bit) { !$tmp1468.nonnull }).value) {
                    {
                        int $tmp1471;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1475 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1474 = $tmp1475;
                            $tmp1473 = $tmp1474;
                            t1472 = $tmp1473;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1473));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1474));
                            if (((panda$core$Bit) { t1472 == NULL }).value) {
                            {
                                $tmp1476 = NULL;
                                $returnValue1400 = $tmp1476;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1476));
                                $tmp1471 = 0;
                                goto $l1469;
                                $l1477:;
                                $tmp1455 = 1;
                                goto $l1453;
                                $l1478:;
                                $tmp1395 = 4;
                                goto $l1393;
                                $l1479:;
                                return $returnValue1400;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1463, ((panda$core$Object*) t1472));
                            $l1481:;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1484, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1485 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1484);
                            bool $tmp1483 = ((panda$core$Bit) { $tmp1485.nonnull }).value;
                            if (!$tmp1483) goto $l1482;
                            {
                                {
                                    $tmp1486 = t1472;
                                    org$pandalanguage$pandac$ASTNode* $tmp1489 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1488 = $tmp1489;
                                    $tmp1487 = $tmp1488;
                                    t1472 = $tmp1487;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1487));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1488));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1486));
                                }
                                if (((panda$core$Bit) { t1472 == NULL }).value) {
                                {
                                    $tmp1490 = NULL;
                                    $returnValue1400 = $tmp1490;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1490));
                                    $tmp1471 = 1;
                                    goto $l1469;
                                    $l1491:;
                                    $tmp1455 = 2;
                                    goto $l1453;
                                    $l1492:;
                                    $tmp1395 = 5;
                                    goto $l1393;
                                    $l1493:;
                                    return $returnValue1400;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1463, ((panda$core$Object*) t1472));
                            }
                            goto $l1481;
                            $l1482:;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1495, ((panda$core$Int64) { 104 }));
                            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1495, &$s1496);
                        }
                        $tmp1471 = -1;
                        goto $l1469;
                        $l1469:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1472));
                        t1472 = NULL;
                        switch ($tmp1471) {
                            case 1: goto $l1491;
                            case 0: goto $l1477;
                            case -1: goto $l1497;
                        }
                        $l1497:;
                    }
                    }
                    memset(&returnType1498, 0, sizeof(returnType1498));
                    panda$core$Int64 $tmp1499 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1463);
                    panda$core$Bit $tmp1500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1499, ((panda$core$Int64) { 0 }));
                    if ($tmp1500.value) {
                    {
                        {
                            $tmp1501 = returnType1498;
                            $tmp1502 = NULL;
                            returnType1498 = $tmp1502;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1502));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1501));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1503 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1463);
                    panda$core$Bit $tmp1504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1503, ((panda$core$Int64) { 1 }));
                    if ($tmp1504.value) {
                    {
                        {
                            $tmp1505 = returnType1498;
                            panda$core$Object* $tmp1508 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1463, ((panda$core$Int64) { 0 }));
                            $tmp1507 = $tmp1508;
                            $tmp1506 = ((org$pandalanguage$pandac$ASTNode*) $tmp1507);
                            returnType1498 = $tmp1506;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1506));
                            panda$core$Panda$unref$panda$core$Object($tmp1507);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1505));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1509 = returnType1498;
                            org$pandalanguage$pandac$ASTNode* $tmp1512 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1514 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(returnTypes1463);
                            $tmp1513 = $tmp1514;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1512, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) start1396.value).position, $tmp1513);
                            $tmp1511 = $tmp1512;
                            $tmp1510 = $tmp1511;
                            returnType1498 = $tmp1510;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1510));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1511));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1513));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1509));
                        }
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1517 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1519 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1404);
                    $tmp1518 = $tmp1519;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1517, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) start1396.value).position, yields1437.kind, $tmp1518, returnType1498);
                    $tmp1516 = $tmp1517;
                    $tmp1515 = $tmp1516;
                    $returnValue1400 = $tmp1515;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1515));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1516));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1518));
                    $tmp1455 = 3;
                    goto $l1453;
                    $l1520:;
                    $tmp1395 = 6;
                    goto $l1393;
                    $l1521:;
                    return $returnValue1400;
                }
                $l1453:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1498));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1463));
                returnTypes1463 = NULL;
                switch ($tmp1455) {
                    case 1: goto $l1478;
                    case 3: goto $l1520;
                    case 0: goto $l1460;
                    case 2: goto $l1492;
                }
                $l1523:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1526 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$collections$ImmutableArray* $tmp1528 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1404);
                $tmp1527 = $tmp1528;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1526, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) start1396.value).position, $tmp1527);
                $tmp1525 = $tmp1526;
                $tmp1524 = $tmp1525;
                $returnValue1400 = $tmp1524;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1524));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1525));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1527));
                $tmp1395 = 7;
                goto $l1393;
                $l1529:;
                return $returnValue1400;
            }
            }
        }
    }
    $tmp1395 = -1;
    goto $l1393;
    $l1393:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1404));
    subtypes1404 = NULL;
    switch ($tmp1395) {
        case 7: goto $l1529;
        case -1: goto $l1531;
        case 4: goto $l1479;
        case 5: goto $l1493;
        case 3: goto $l1461;
        case 2: goto $l1432;
        case 0: goto $l1402;
        case 1: goto $l1419;
        case 6: goto $l1521;
    }
    $l1531:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* $returnValue1537;
    org$pandalanguage$pandac$ASTNode* $tmp1538;
    org$pandalanguage$pandac$ASTNode* $tmp1539;
    org$pandalanguage$pandac$parser$Token$nullable start1543;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1544;
    org$pandalanguage$pandac$ASTNode* $tmp1547;
    panda$core$MutableString* name1550 = NULL;
    panda$core$MutableString* $tmp1551;
    panda$core$MutableString* $tmp1552;
    panda$core$String* $tmp1554;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1559;
    org$pandalanguage$pandac$parser$Token$nullable id1561;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1562;
    org$pandalanguage$pandac$ASTNode* $tmp1565;
    panda$core$Char8 $tmp1568;
    panda$core$String* $tmp1569;
    panda$core$String* finalName1571 = NULL;
    panda$core$String* $tmp1572;
    panda$core$String* $tmp1573;
    org$pandalanguage$pandac$ASTNode* result1575 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1576;
    org$pandalanguage$pandac$ASTNode* $tmp1577;
    panda$collections$Array* children1584 = NULL;
    panda$collections$Array* $tmp1585;
    panda$collections$Array* $tmp1586;
    org$pandalanguage$pandac$ASTNode* t1588 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1589;
    org$pandalanguage$pandac$ASTNode* $tmp1590;
    org$pandalanguage$pandac$ASTNode* $tmp1592;
    org$pandalanguage$pandac$ASTNode* $tmp1596;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1603;
    org$pandalanguage$pandac$ASTNode* $tmp1605;
    org$pandalanguage$pandac$ASTNode* $tmp1606;
    org$pandalanguage$pandac$ASTNode* $tmp1607;
    org$pandalanguage$pandac$ASTNode* $tmp1609;
    org$pandalanguage$pandac$ASTNode* $tmp1613;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1617;
    org$pandalanguage$pandac$ASTNode* $tmp1620;
    org$pandalanguage$pandac$ASTNode* $tmp1624;
    org$pandalanguage$pandac$ASTNode* $tmp1628;
    org$pandalanguage$pandac$ASTNode* $tmp1629;
    org$pandalanguage$pandac$ASTNode* $tmp1630;
    panda$collections$ImmutableArray* $tmp1632;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1635;
    org$pandalanguage$pandac$ASTNode* $tmp1637;
    org$pandalanguage$pandac$ASTNode* $tmp1638;
    org$pandalanguage$pandac$ASTNode* $tmp1639;
    org$pandalanguage$pandac$ASTNode* $tmp1641;
    int $tmp1534;
    {
        org$pandalanguage$pandac$parser$Token $tmp1535 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1535.kind.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp1536.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1540 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1539 = $tmp1540;
            $tmp1538 = $tmp1539;
            $returnValue1537 = $tmp1538;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1538));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1539));
            $tmp1534 = 0;
            goto $l1532;
            $l1541:;
            return $returnValue1537;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1544, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1546 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1544, &$s1545);
        start1543 = $tmp1546;
        if (((panda$core$Bit) { !start1543.nonnull }).value) {
        {
            $tmp1547 = NULL;
            $returnValue1537 = $tmp1547;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1547));
            $tmp1534 = 1;
            goto $l1532;
            $l1548:;
            return $returnValue1537;
        }
        }
        panda$core$MutableString* $tmp1553 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp1555 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1543.value));
        $tmp1554 = $tmp1555;
        panda$core$MutableString$init$panda$core$String($tmp1553, $tmp1554);
        $tmp1552 = $tmp1553;
        $tmp1551 = $tmp1552;
        name1550 = $tmp1551;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1551));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1552));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1554));
        $l1556:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1559, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1560 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1559);
        bool $tmp1558 = ((panda$core$Bit) { $tmp1560.nonnull }).value;
        if (!$tmp1558) goto $l1557;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1562, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1564 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1562, &$s1563);
            id1561 = $tmp1564;
            if (((panda$core$Bit) { !id1561.nonnull }).value) {
            {
                $tmp1565 = NULL;
                $returnValue1537 = $tmp1565;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1565));
                $tmp1534 = 2;
                goto $l1532;
                $l1566:;
                return $returnValue1537;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1568, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name1550, $tmp1568);
            panda$core$String* $tmp1570 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1561.value));
            $tmp1569 = $tmp1570;
            panda$core$MutableString$append$panda$core$String(name1550, $tmp1569);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
        }
        goto $l1556;
        $l1557:;
        panda$core$String* $tmp1574 = panda$core$MutableString$finish$R$panda$core$String(name1550);
        $tmp1573 = $tmp1574;
        $tmp1572 = $tmp1573;
        finalName1571 = $tmp1572;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1572));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1573));
        org$pandalanguage$pandac$ASTNode* $tmp1578 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1578, ((panda$core$Int64) { 42 }), ((org$pandalanguage$pandac$parser$Token) start1543.value).position, finalName1571);
        $tmp1577 = $tmp1578;
        $tmp1576 = $tmp1577;
        result1575 = $tmp1576;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1576));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1577));
        org$pandalanguage$pandac$parser$Token $tmp1579 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1579.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1580.value) {
        {
            int $tmp1583;
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                }
                }
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$collections$Array* $tmp1587 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1587);
                $tmp1586 = $tmp1587;
                $tmp1585 = $tmp1586;
                children1584 = $tmp1585;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1585));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1586));
                org$pandalanguage$pandac$ASTNode* $tmp1591 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                $tmp1590 = $tmp1591;
                $tmp1589 = $tmp1590;
                t1588 = $tmp1589;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1589));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
                if (((panda$core$Bit) { t1588 == NULL }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1592 = result1575;
                        $returnValue1537 = $tmp1592;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1592));
                        $tmp1583 = 0;
                        goto $l1581;
                        $l1593:;
                        $tmp1534 = 3;
                        goto $l1532;
                        $l1594:;
                        return $returnValue1537;
                    }
                    }
                    $tmp1596 = NULL;
                    $returnValue1537 = $tmp1596;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1596));
                    $tmp1583 = 1;
                    goto $l1581;
                    $l1597:;
                    $tmp1534 = 4;
                    goto $l1532;
                    $l1598:;
                    return $returnValue1537;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1584, ((panda$core$Object*) t1588));
                $l1600:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1603, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1604 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1603);
                bool $tmp1602 = ((panda$core$Bit) { $tmp1604.nonnull }).value;
                if (!$tmp1602) goto $l1601;
                {
                    {
                        $tmp1605 = t1588;
                        org$pandalanguage$pandac$ASTNode* $tmp1608 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        $tmp1607 = $tmp1608;
                        $tmp1606 = $tmp1607;
                        t1588 = $tmp1606;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1606));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1607));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1605));
                    }
                    if (((panda$core$Bit) { t1588 == NULL }).value) {
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            $tmp1609 = result1575;
                            $returnValue1537 = $tmp1609;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1609));
                            $tmp1583 = 2;
                            goto $l1581;
                            $l1610:;
                            $tmp1534 = 5;
                            goto $l1532;
                            $l1611:;
                            return $returnValue1537;
                        }
                        }
                        $tmp1613 = NULL;
                        $returnValue1537 = $tmp1613;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1613));
                        $tmp1583 = 3;
                        goto $l1581;
                        $l1614:;
                        $tmp1534 = 6;
                        goto $l1532;
                        $l1615:;
                        return $returnValue1537;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children1584, ((panda$core$Object*) t1588));
                }
                goto $l1600;
                $l1601:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1617, ((panda$core$Int64) { 63 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1619 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1617, &$s1618);
                if (((panda$core$Bit) { !$tmp1619.nonnull }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1620 = result1575;
                        $returnValue1537 = $tmp1620;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1620));
                        $tmp1583 = 4;
                        goto $l1581;
                        $l1621:;
                        $tmp1534 = 7;
                        goto $l1532;
                        $l1622:;
                        return $returnValue1537;
                    }
                    }
                    $tmp1624 = NULL;
                    $returnValue1537 = $tmp1624;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1624));
                    $tmp1583 = 5;
                    goto $l1581;
                    $l1625:;
                    $tmp1534 = 8;
                    goto $l1532;
                    $l1626:;
                    return $returnValue1537;
                }
                }
                {
                    $tmp1628 = result1575;
                    org$pandalanguage$pandac$ASTNode* $tmp1631 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1633 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1584);
                    $tmp1632 = $tmp1633;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1631, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1543.value).position, finalName1571, $tmp1632);
                    $tmp1630 = $tmp1631;
                    $tmp1629 = $tmp1630;
                    result1575 = $tmp1629;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1629));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1630));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1632));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1628));
                }
                org$pandalanguage$pandac$parser$Parser$accept(self);
            }
            $tmp1583 = -1;
            goto $l1581;
            $l1581:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1588));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1584));
            children1584 = NULL;
            t1588 = NULL;
            switch ($tmp1583) {
                case 0: goto $l1593;
                case 5: goto $l1625;
                case 3: goto $l1614;
                case 2: goto $l1610;
                case -1: goto $l1634;
                case 4: goto $l1621;
                case 1: goto $l1597;
            }
            $l1634:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1635, ((panda$core$Int64) { 94 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1636 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1635);
        if (((panda$core$Bit) { $tmp1636.nonnull }).value) {
        {
            {
                $tmp1637 = result1575;
                org$pandalanguage$pandac$ASTNode* $tmp1640 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1640, ((panda$core$Int64) { 29 }), ((org$pandalanguage$pandac$parser$Token) start1543.value).position, result1575);
                $tmp1639 = $tmp1640;
                $tmp1638 = $tmp1639;
                result1575 = $tmp1638;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1638));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1639));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
            }
        }
        }
        $tmp1641 = result1575;
        $returnValue1537 = $tmp1641;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1641));
        $tmp1534 = 9;
        goto $l1532;
        $l1642:;
        return $returnValue1537;
    }
    $l1532:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1575));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1571));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1550));
    name1550 = NULL;
    finalName1571 = NULL;
    result1575 = NULL;
    switch ($tmp1534) {
        case 2: goto $l1566;
        case 7: goto $l1622;
        case 9: goto $l1642;
        case 3: goto $l1594;
        case 8: goto $l1626;
        case 6: goto $l1615;
        case 4: goto $l1598;
        case 1: goto $l1548;
        case 0: goto $l1541;
        case 5: goto $l1611;
    }
    $l1644:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1648 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1649;
    org$pandalanguage$pandac$ASTNode* $tmp1650;
    org$pandalanguage$pandac$ASTNode* $returnValue1652;
    org$pandalanguage$pandac$ASTNode* $tmp1653;
    org$pandalanguage$pandac$parser$Token token1658;
    org$pandalanguage$pandac$parser$Token$Kind $match$788_131660;
    panda$core$Object* $tmp1665;
    panda$collections$Array* args1667 = NULL;
    panda$collections$Array* $tmp1668;
    panda$collections$Array* $tmp1669;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1671;
    org$pandalanguage$pandac$ASTNode* expr1676 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1677;
    org$pandalanguage$pandac$ASTNode* $tmp1678;
    panda$core$Object* $tmp1680;
    org$pandalanguage$pandac$ASTNode* $tmp1682;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1690;
    org$pandalanguage$pandac$ASTNode* $tmp1692;
    org$pandalanguage$pandac$ASTNode* $tmp1693;
    org$pandalanguage$pandac$ASTNode* $tmp1694;
    panda$core$Object* $tmp1696;
    org$pandalanguage$pandac$ASTNode* $tmp1698;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1703;
    panda$core$Object* $tmp1706;
    org$pandalanguage$pandac$ASTNode* $tmp1708;
    panda$core$Object* $tmp1714;
    org$pandalanguage$pandac$ASTNode* $tmp1716;
    org$pandalanguage$pandac$ASTNode* $tmp1717;
    org$pandalanguage$pandac$ASTNode* $tmp1718;
    panda$collections$ImmutableArray* $tmp1720;
    org$pandalanguage$pandac$ASTNode* arg1727 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1728;
    org$pandalanguage$pandac$ASTNode* $tmp1729;
    org$pandalanguage$pandac$ASTNode* $tmp1731;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1735;
    org$pandalanguage$pandac$ASTNode* $tmp1738;
    org$pandalanguage$pandac$ASTNode* $tmp1742;
    org$pandalanguage$pandac$ASTNode* $tmp1743;
    org$pandalanguage$pandac$ASTNode* $tmp1744;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1746;
    panda$core$String* name1752 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1753;
    panda$core$String* $tmp1755;
    panda$core$String* $tmp1756;
    panda$core$String* $tmp1758;
    panda$core$String* $tmp1759;
    panda$core$String* $tmp1760;
    org$pandalanguage$pandac$ASTNode* $tmp1762;
    org$pandalanguage$pandac$ASTNode* $tmp1766;
    org$pandalanguage$pandac$ASTNode* $tmp1767;
    org$pandalanguage$pandac$ASTNode* $tmp1768;
    org$pandalanguage$pandac$ASTNode* target1775 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1776;
    org$pandalanguage$pandac$ASTNode* $tmp1777;
    org$pandalanguage$pandac$ASTNode* $tmp1779;
    org$pandalanguage$pandac$ASTNode* $tmp1783;
    org$pandalanguage$pandac$ASTNode* $tmp1784;
    org$pandalanguage$pandac$ASTNode* $tmp1785;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1787;
    panda$core$String* name1793 = NULL;
    panda$core$String* $tmp1794;
    panda$core$String* $tmp1795;
    panda$collections$Array* types1800 = NULL;
    panda$collections$Array* $tmp1801;
    panda$collections$Array* $tmp1802;
    org$pandalanguage$pandac$ASTNode* t1804 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1805;
    org$pandalanguage$pandac$ASTNode* $tmp1806;
    org$pandalanguage$pandac$ASTNode* $tmp1808;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1816;
    org$pandalanguage$pandac$ASTNode* $tmp1818;
    org$pandalanguage$pandac$ASTNode* $tmp1819;
    org$pandalanguage$pandac$ASTNode* $tmp1820;
    org$pandalanguage$pandac$ASTNode* $tmp1822;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1827;
    org$pandalanguage$pandac$ASTNode* $tmp1830;
    panda$core$Bit shouldAccept1835;
    panda$core$Object* $tmp1836;
    org$pandalanguage$pandac$parser$Token$Kind $match$893_291838;
    org$pandalanguage$pandac$ASTNode* $tmp1853;
    org$pandalanguage$pandac$ASTNode* $tmp1854;
    org$pandalanguage$pandac$ASTNode* $tmp1855;
    panda$collections$ImmutableArray* $tmp1859;
    org$pandalanguage$pandac$ASTNode* $tmp1863;
    org$pandalanguage$pandac$ASTNode* $tmp1869;
    org$pandalanguage$pandac$ASTNode* $tmp1874;
    int $tmp1647;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1651 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1650 = $tmp1651;
        $tmp1649 = $tmp1650;
        result1648 = $tmp1649;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1649));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1650));
        if (((panda$core$Bit) { result1648 == NULL }).value) {
        {
            $tmp1653 = NULL;
            $returnValue1652 = $tmp1653;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1653));
            $tmp1647 = 0;
            goto $l1645;
            $l1654:;
            return $returnValue1652;
        }
        }
        $l1656:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1659 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token1658 = $tmp1659;
            {
                $match$788_131660 = token1658.kind;
                panda$core$Bit $tmp1661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$788_131660.$rawValue, ((panda$core$Int64) { 103 }));
                if ($tmp1661.value) {
                {
                    int $tmp1664;
                    {
                        panda$core$Bit$wrapper* $tmp1666;
                        $tmp1666 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp1666->value = ((panda$core$Bit) { true });
                        $tmp1665 = ((panda$core$Object*) $tmp1666);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp1665);
                        panda$core$Panda$unref$panda$core$Object($tmp1665);
                        panda$collections$Array* $tmp1670 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1670);
                        $tmp1669 = $tmp1670;
                        $tmp1668 = $tmp1669;
                        args1667 = $tmp1668;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1668));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1669));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1671, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1672 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1671);
                        if (((panda$core$Bit) { !$tmp1672.nonnull }).value) {
                        {
                            int $tmp1675;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1679 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1678 = $tmp1679;
                                $tmp1677 = $tmp1678;
                                expr1676 = $tmp1677;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1677));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1678));
                                if (((panda$core$Bit) { expr1676 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp1681 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1680 = $tmp1681;
                                    panda$core$Panda$unref$panda$core$Object($tmp1680);
                                    $tmp1682 = NULL;
                                    $returnValue1652 = $tmp1682;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1682));
                                    $tmp1675 = 0;
                                    goto $l1673;
                                    $l1683:;
                                    $tmp1664 = 0;
                                    goto $l1662;
                                    $l1684:;
                                    $tmp1647 = 1;
                                    goto $l1645;
                                    $l1685:;
                                    return $returnValue1652;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args1667, ((panda$core$Object*) expr1676));
                                $l1687:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1690, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1691 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1690);
                                bool $tmp1689 = ((panda$core$Bit) { $tmp1691.nonnull }).value;
                                if (!$tmp1689) goto $l1688;
                                {
                                    {
                                        $tmp1692 = expr1676;
                                        org$pandalanguage$pandac$ASTNode* $tmp1695 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp1694 = $tmp1695;
                                        $tmp1693 = $tmp1694;
                                        expr1676 = $tmp1693;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1693));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1694));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1692));
                                    }
                                    if (((panda$core$Bit) { expr1676 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp1697 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp1696 = $tmp1697;
                                        panda$core$Panda$unref$panda$core$Object($tmp1696);
                                        $tmp1698 = NULL;
                                        $returnValue1652 = $tmp1698;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1698));
                                        $tmp1675 = 1;
                                        goto $l1673;
                                        $l1699:;
                                        $tmp1664 = 1;
                                        goto $l1662;
                                        $l1700:;
                                        $tmp1647 = 2;
                                        goto $l1645;
                                        $l1701:;
                                        return $returnValue1652;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args1667, ((panda$core$Object*) expr1676));
                                }
                                goto $l1687;
                                $l1688:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1703, ((panda$core$Int64) { 104 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1705 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1703, &$s1704);
                                if (((panda$core$Bit) { !$tmp1705.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp1707 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1706 = $tmp1707;
                                    panda$core$Panda$unref$panda$core$Object($tmp1706);
                                    $tmp1708 = NULL;
                                    $returnValue1652 = $tmp1708;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1708));
                                    $tmp1675 = 2;
                                    goto $l1673;
                                    $l1709:;
                                    $tmp1664 = 2;
                                    goto $l1662;
                                    $l1710:;
                                    $tmp1647 = 3;
                                    goto $l1645;
                                    $l1711:;
                                    return $returnValue1652;
                                }
                                }
                            }
                            $tmp1675 = -1;
                            goto $l1673;
                            $l1673:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1676));
                            expr1676 = NULL;
                            switch ($tmp1675) {
                                case -1: goto $l1713;
                                case 2: goto $l1709;
                                case 1: goto $l1699;
                                case 0: goto $l1683;
                            }
                            $l1713:;
                        }
                        }
                        panda$core$Object* $tmp1715 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp1714 = $tmp1715;
                        panda$core$Panda$unref$panda$core$Object($tmp1714);
                        {
                            $tmp1716 = result1648;
                            org$pandalanguage$pandac$ASTNode* $tmp1719 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1721 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1667);
                            $tmp1720 = $tmp1721;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1719, ((panda$core$Int64) { 8 }), token1658.position, result1648, $tmp1720);
                            $tmp1718 = $tmp1719;
                            $tmp1717 = $tmp1718;
                            result1648 = $tmp1717;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1717));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1718));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1720));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1716));
                        }
                    }
                    $tmp1664 = -1;
                    goto $l1662;
                    $l1662:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1667));
                    args1667 = NULL;
                    switch ($tmp1664) {
                        case 1: goto $l1700;
                        case 0: goto $l1684;
                        case -1: goto $l1722;
                        case 2: goto $l1710;
                    }
                    $l1722:;
                }
                }
                else {
                panda$core$Bit $tmp1723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$788_131660.$rawValue, ((panda$core$Int64) { 101 }));
                if ($tmp1723.value) {
                {
                    int $tmp1726;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1730 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1729 = $tmp1730;
                        $tmp1728 = $tmp1729;
                        arg1727 = $tmp1728;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1728));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1729));
                        if (((panda$core$Bit) { arg1727 == NULL }).value) {
                        {
                            $tmp1731 = NULL;
                            $returnValue1652 = $tmp1731;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1731));
                            $tmp1726 = 0;
                            goto $l1724;
                            $l1732:;
                            $tmp1647 = 4;
                            goto $l1645;
                            $l1733:;
                            return $returnValue1652;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1735, ((panda$core$Int64) { 102 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1737 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1735, &$s1736);
                        if (((panda$core$Bit) { !$tmp1737.nonnull }).value) {
                        {
                            $tmp1738 = NULL;
                            $returnValue1652 = $tmp1738;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1738));
                            $tmp1726 = 1;
                            goto $l1724;
                            $l1739:;
                            $tmp1647 = 5;
                            goto $l1645;
                            $l1740:;
                            return $returnValue1652;
                        }
                        }
                        {
                            $tmp1742 = result1648;
                            org$pandalanguage$pandac$ASTNode* $tmp1745 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1746, ((panda$core$Int64) { 101 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1745, ((panda$core$Int64) { 4 }), token1658.position, result1648, $tmp1746, arg1727);
                            $tmp1744 = $tmp1745;
                            $tmp1743 = $tmp1744;
                            result1648 = $tmp1743;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1743));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1744));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1742));
                        }
                    }
                    $tmp1726 = -1;
                    goto $l1724;
                    $l1724:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1727));
                    arg1727 = NULL;
                    switch ($tmp1726) {
                        case 1: goto $l1739;
                        case 0: goto $l1732;
                        case -1: goto $l1747;
                    }
                    $l1747:;
                }
                }
                else {
                panda$core$Bit $tmp1748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$788_131660.$rawValue, ((panda$core$Int64) { 98 }));
                if ($tmp1748.value) {
                {
                    int $tmp1751;
                    {
                        memset(&name1752, 0, sizeof(name1752));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1753, ((panda$core$Int64) { 22 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1754 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1753);
                        if (((panda$core$Bit) { $tmp1754.nonnull }).value) {
                        {
                            {
                                $tmp1755 = name1752;
                                $tmp1756 = &$s1757;
                                name1752 = $tmp1756;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1756));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1755));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp1758 = name1752;
                                panda$core$String* $tmp1761 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp1760 = $tmp1761;
                                $tmp1759 = $tmp1760;
                                name1752 = $tmp1759;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1759));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1760));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1758));
                            }
                            if (((panda$core$Bit) { name1752 == NULL }).value) {
                            {
                                $tmp1762 = NULL;
                                $returnValue1652 = $tmp1762;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1762));
                                $tmp1751 = 0;
                                goto $l1749;
                                $l1763:;
                                $tmp1647 = 6;
                                goto $l1645;
                                $l1764:;
                                return $returnValue1652;
                            }
                            }
                        }
                        }
                        {
                            $tmp1766 = result1648;
                            org$pandalanguage$pandac$ASTNode* $tmp1769 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1769, ((panda$core$Int64) { 15 }), token1658.position, result1648, name1752);
                            $tmp1768 = $tmp1769;
                            $tmp1767 = $tmp1768;
                            result1648 = $tmp1767;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1767));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1768));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1766));
                        }
                    }
                    $tmp1751 = -1;
                    goto $l1749;
                    $l1749:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1752));
                    switch ($tmp1751) {
                        case -1: goto $l1770;
                        case 0: goto $l1763;
                    }
                    $l1770:;
                }
                }
                else {
                panda$core$Bit $tmp1771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$788_131660.$rawValue, ((panda$core$Int64) { 89 }));
                if ($tmp1771.value) {
                {
                    int $tmp1774;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1778 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1777 = $tmp1778;
                        $tmp1776 = $tmp1777;
                        target1775 = $tmp1776;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1776));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1777));
                        if (((panda$core$Bit) { target1775 == NULL }).value) {
                        {
                            $tmp1779 = NULL;
                            $returnValue1652 = $tmp1779;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1779));
                            $tmp1774 = 0;
                            goto $l1772;
                            $l1780:;
                            $tmp1647 = 7;
                            goto $l1645;
                            $l1781:;
                            return $returnValue1652;
                        }
                        }
                        {
                            $tmp1783 = result1648;
                            org$pandalanguage$pandac$ASTNode* $tmp1786 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1787, ((panda$core$Int64) { 89 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1786, ((panda$core$Int64) { 4 }), token1658.position, result1648, $tmp1787, target1775);
                            $tmp1785 = $tmp1786;
                            $tmp1784 = $tmp1785;
                            result1648 = $tmp1784;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1784));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1785));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
                        }
                    }
                    $tmp1774 = -1;
                    goto $l1772;
                    $l1772:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1775));
                    target1775 = NULL;
                    switch ($tmp1774) {
                        case -1: goto $l1788;
                        case 0: goto $l1780;
                    }
                    $l1788:;
                }
                }
                else {
                panda$core$Bit $tmp1789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$788_131660.$rawValue, ((panda$core$Int64) { 62 }));
                if ($tmp1789.value) {
                {
                    int $tmp1792;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1658);
                        panda$core$String* $tmp1796 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result1648);
                        $tmp1795 = $tmp1796;
                        $tmp1794 = $tmp1795;
                        name1793 = $tmp1794;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1794));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1795));
                        if (((panda$core$Bit) { name1793 != NULL }).value) {
                        {
                            int $tmp1799;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp1803 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp1803);
                                $tmp1802 = $tmp1803;
                                $tmp1801 = $tmp1802;
                                types1800 = $tmp1801;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1801));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1802));
                                org$pandalanguage$pandac$ASTNode* $tmp1807 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                $tmp1806 = $tmp1807;
                                $tmp1805 = $tmp1806;
                                t1804 = $tmp1805;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1805));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1806));
                                if (((panda$core$Bit) { t1804 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1808 = result1648;
                                    $returnValue1652 = $tmp1808;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1808));
                                    $tmp1799 = 0;
                                    goto $l1797;
                                    $l1809:;
                                    $tmp1792 = 0;
                                    goto $l1790;
                                    $l1810:;
                                    $tmp1647 = 8;
                                    goto $l1645;
                                    $l1811:;
                                    return $returnValue1652;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types1800, ((panda$core$Object*) t1804));
                                $l1813:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1816, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1817 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1816);
                                bool $tmp1815 = ((panda$core$Bit) { $tmp1817.nonnull }).value;
                                if (!$tmp1815) goto $l1814;
                                {
                                    {
                                        $tmp1818 = t1804;
                                        org$pandalanguage$pandac$ASTNode* $tmp1821 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                        $tmp1820 = $tmp1821;
                                        $tmp1819 = $tmp1820;
                                        t1804 = $tmp1819;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1819));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1820));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1818));
                                    }
                                    if (((panda$core$Bit) { t1804 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp1822 = result1648;
                                        $returnValue1652 = $tmp1822;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1822));
                                        $tmp1799 = 1;
                                        goto $l1797;
                                        $l1823:;
                                        $tmp1792 = 1;
                                        goto $l1790;
                                        $l1824:;
                                        $tmp1647 = 9;
                                        goto $l1645;
                                        $l1825:;
                                        return $returnValue1652;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types1800, ((panda$core$Object*) t1804));
                                }
                                goto $l1813;
                                $l1814:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1827, ((panda$core$Int64) { 63 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1829 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1827, &$s1828);
                                if (((panda$core$Bit) { !$tmp1829.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1830 = result1648;
                                    $returnValue1652 = $tmp1830;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1830));
                                    $tmp1799 = 2;
                                    goto $l1797;
                                    $l1831:;
                                    $tmp1792 = 2;
                                    goto $l1790;
                                    $l1832:;
                                    $tmp1647 = 10;
                                    goto $l1645;
                                    $l1833:;
                                    return $returnValue1652;
                                }
                                }
                                memset(&shouldAccept1835, 0, sizeof(shouldAccept1835));
                                panda$core$Object* $tmp1837 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Int64) { 0 }));
                                $tmp1836 = $tmp1837;
                                panda$core$Panda$unref$panda$core$Object($tmp1836);
                                if (((panda$core$Bit$wrapper*) $tmp1836)->value.value) {
                                {
                                    {
                                        org$pandalanguage$pandac$parser$Token $tmp1839 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                                        $match$893_291838 = $tmp1839.kind;
                                        panda$core$Bit $tmp1843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$893_291838.$rawValue, ((panda$core$Int64) { 98 }));
                                        bool $tmp1842 = $tmp1843.value;
                                        if ($tmp1842) goto $l1844;
                                        panda$core$Bit $tmp1845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$893_291838.$rawValue, ((panda$core$Int64) { 103 }));
                                        $tmp1842 = $tmp1845.value;
                                        $l1844:;
                                        panda$core$Bit $tmp1846 = { $tmp1842 };
                                        bool $tmp1841 = $tmp1846.value;
                                        if ($tmp1841) goto $l1847;
                                        panda$core$Bit $tmp1848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$893_291838.$rawValue, ((panda$core$Int64) { 105 }));
                                        $tmp1841 = $tmp1848.value;
                                        $l1847:;
                                        panda$core$Bit $tmp1849 = { $tmp1841 };
                                        bool $tmp1840 = $tmp1849.value;
                                        if ($tmp1840) goto $l1850;
                                        panda$core$Bit $tmp1851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$893_291838.$rawValue, ((panda$core$Int64) { 89 }));
                                        $tmp1840 = $tmp1851.value;
                                        $l1850:;
                                        panda$core$Bit $tmp1852 = { $tmp1840 };
                                        if ($tmp1852.value) {
                                        {
                                            shouldAccept1835 = ((panda$core$Bit) { true });
                                        }
                                        }
                                        else {
                                        {
                                            shouldAccept1835 = ((panda$core$Bit) { false });
                                        }
                                        }
                                    }
                                }
                                }
                                else {
                                {
                                    shouldAccept1835 = ((panda$core$Bit) { true });
                                }
                                }
                                if (shouldAccept1835.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp1853 = result1648;
                                        org$pandalanguage$pandac$ASTNode* $tmp1856 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        org$pandalanguage$pandac$Position $tmp1858 = (($fn1857) result1648->$class->vtable[2])(result1648);
                                        panda$collections$ImmutableArray* $tmp1860 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types1800);
                                        $tmp1859 = $tmp1860;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1856, ((panda$core$Int64) { 19 }), $tmp1858, name1793, $tmp1859);
                                        $tmp1855 = $tmp1856;
                                        $tmp1854 = $tmp1855;
                                        result1648 = $tmp1854;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1854));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1855));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1853));
                                    }
                                    $tmp1799 = 3;
                                    goto $l1797;
                                    $l1861:;
                                    $tmp1792 = 3;
                                    goto $l1790;
                                    $l1862:;
                                    goto $l1656;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1863 = result1648;
                                    $returnValue1652 = $tmp1863;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1863));
                                    $tmp1799 = 4;
                                    goto $l1797;
                                    $l1864:;
                                    $tmp1792 = 4;
                                    goto $l1790;
                                    $l1865:;
                                    $tmp1647 = 11;
                                    goto $l1645;
                                    $l1866:;
                                    return $returnValue1652;
                                }
                                }
                            }
                            $tmp1799 = -1;
                            goto $l1797;
                            $l1797:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1804));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1800));
                            types1800 = NULL;
                            t1804 = NULL;
                            switch ($tmp1799) {
                                case 4: goto $l1864;
                                case 2: goto $l1831;
                                case -1: goto $l1868;
                                case 1: goto $l1823;
                                case 3: goto $l1861;
                                case 0: goto $l1809;
                            }
                            $l1868:;
                        }
                        }
                        $tmp1869 = result1648;
                        $returnValue1652 = $tmp1869;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1869));
                        $tmp1792 = 5;
                        goto $l1790;
                        $l1870:;
                        $tmp1647 = 12;
                        goto $l1645;
                        $l1871:;
                        return $returnValue1652;
                    }
                    $l1790:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1793));
                    name1793 = NULL;
                    switch ($tmp1792) {
                        case 2: goto $l1832;
                        case 3: goto $l1862;
                        case 1: goto $l1824;
                        case 4: goto $l1865;
                        case 0: goto $l1810;
                        case 5: goto $l1870;
                    }
                    $l1873:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1658);
                    $tmp1874 = result1648;
                    $returnValue1652 = $tmp1874;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1874));
                    $tmp1647 = 13;
                    goto $l1645;
                    $l1875:;
                    return $returnValue1652;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l1657:;
    }
    $tmp1647 = -1;
    goto $l1645;
    $l1645:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1648));
    result1648 = NULL;
    switch ($tmp1647) {
        case 2: goto $l1701;
        case 4: goto $l1733;
        case 6: goto $l1764;
        case 7: goto $l1781;
        case 13: goto $l1875;
        case 5: goto $l1740;
        case 11: goto $l1866;
        case 8: goto $l1811;
        case 12: goto $l1871;
        case 10: goto $l1833;
        case 3: goto $l1711;
        case -1: goto $l1877;
        case 1: goto $l1685;
        case 0: goto $l1654;
        case 9: goto $l1825;
    }
    $l1877:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1881 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1882;
    org$pandalanguage$pandac$ASTNode* $tmp1883;
    org$pandalanguage$pandac$ASTNode* $returnValue1885;
    org$pandalanguage$pandac$ASTNode* $tmp1886;
    org$pandalanguage$pandac$parser$Token$nullable op1894;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1895;
    org$pandalanguage$pandac$ASTNode* next1898 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1899;
    org$pandalanguage$pandac$ASTNode* $tmp1900;
    org$pandalanguage$pandac$ASTNode* $tmp1902;
    org$pandalanguage$pandac$ASTNode* $tmp1906;
    org$pandalanguage$pandac$ASTNode* $tmp1907;
    org$pandalanguage$pandac$ASTNode* $tmp1908;
    org$pandalanguage$pandac$ASTNode* $tmp1911;
    int $tmp1880;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1884 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1883 = $tmp1884;
        $tmp1882 = $tmp1883;
        result1881 = $tmp1882;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1882));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1883));
        if (((panda$core$Bit) { result1881 == NULL }).value) {
        {
            $tmp1886 = NULL;
            $returnValue1885 = $tmp1886;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1886));
            $tmp1880 = 0;
            goto $l1878;
            $l1887:;
            return $returnValue1885;
        }
        }
        $l1889:;
        while (true) {
        {
            int $tmp1893;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1895, ((panda$core$Int64) { 57 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1896 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1895);
                op1894 = $tmp1896;
                if (((panda$core$Bit) { !op1894.nonnull }).value) {
                {
                    $tmp1893 = 0;
                    goto $l1891;
                    $l1897:;
                    goto $l1890;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1901 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1900 = $tmp1901;
                $tmp1899 = $tmp1900;
                next1898 = $tmp1899;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1899));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1900));
                if (((panda$core$Bit) { next1898 == NULL }).value) {
                {
                    $tmp1902 = NULL;
                    $returnValue1885 = $tmp1902;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1902));
                    $tmp1893 = 1;
                    goto $l1891;
                    $l1903:;
                    $tmp1880 = 1;
                    goto $l1878;
                    $l1904:;
                    return $returnValue1885;
                }
                }
                {
                    $tmp1906 = result1881;
                    org$pandalanguage$pandac$ASTNode* $tmp1909 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1909, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op1894.value).position, result1881, ((org$pandalanguage$pandac$parser$Token) op1894.value).kind, next1898);
                    $tmp1908 = $tmp1909;
                    $tmp1907 = $tmp1908;
                    result1881 = $tmp1907;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1907));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1908));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1906));
                }
            }
            $tmp1893 = -1;
            goto $l1891;
            $l1891:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1898));
            next1898 = NULL;
            switch ($tmp1893) {
                case 1: goto $l1903;
                case -1: goto $l1910;
                case 0: goto $l1897;
            }
            $l1910:;
        }
        }
        $l1890:;
        $tmp1911 = result1881;
        $returnValue1885 = $tmp1911;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
        $tmp1880 = 2;
        goto $l1878;
        $l1912:;
        return $returnValue1885;
    }
    $l1878:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1881));
    result1881 = NULL;
    switch ($tmp1880) {
        case 2: goto $l1912;
        case 0: goto $l1887;
        case 1: goto $l1904;
    }
    $l1914:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op1915;
    org$pandalanguage$pandac$parser$Token$Kind $match$949_91917;
    org$pandalanguage$pandac$ASTNode* base1930 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1931;
    org$pandalanguage$pandac$ASTNode* $tmp1932;
    org$pandalanguage$pandac$ASTNode* $returnValue1934;
    org$pandalanguage$pandac$ASTNode* $tmp1935;
    org$pandalanguage$pandac$ASTNode* $tmp1938;
    org$pandalanguage$pandac$ASTNode* $tmp1939;
    org$pandalanguage$pandac$ASTNode* $tmp1944;
    org$pandalanguage$pandac$ASTNode* $tmp1945;
    org$pandalanguage$pandac$parser$Token $tmp1916 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op1915 = $tmp1916;
    {
        $match$949_91917 = op1915.kind;
        panda$core$Bit $tmp1920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$949_91917.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp1919 = $tmp1920.value;
        if ($tmp1919) goto $l1921;
        panda$core$Bit $tmp1922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$949_91917.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp1919 = $tmp1922.value;
        $l1921:;
        panda$core$Bit $tmp1923 = { $tmp1919 };
        bool $tmp1918 = $tmp1923.value;
        if ($tmp1918) goto $l1924;
        panda$core$Bit $tmp1925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$949_91917.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp1918 = $tmp1925.value;
        $l1924:;
        panda$core$Bit $tmp1926 = { $tmp1918 };
        if ($tmp1926.value) {
        {
            int $tmp1929;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1933 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1932 = $tmp1933;
                $tmp1931 = $tmp1932;
                base1930 = $tmp1931;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1931));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1932));
                if (((panda$core$Bit) { base1930 == NULL }).value) {
                {
                    $tmp1935 = NULL;
                    $returnValue1934 = $tmp1935;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1935));
                    $tmp1929 = 0;
                    goto $l1927;
                    $l1936:;
                    return $returnValue1934;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1940 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1940, ((panda$core$Int64) { 32 }), op1915.position, op1915.kind, base1930);
                $tmp1939 = $tmp1940;
                $tmp1938 = $tmp1939;
                $returnValue1934 = $tmp1938;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1938));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1939));
                $tmp1929 = 1;
                goto $l1927;
                $l1941:;
                return $returnValue1934;
            }
            $l1927:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1930));
            base1930 = NULL;
            switch ($tmp1929) {
                case 1: goto $l1941;
                case 0: goto $l1936;
            }
            $l1943:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1915);
            org$pandalanguage$pandac$ASTNode* $tmp1946 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1945 = $tmp1946;
            $tmp1944 = $tmp1945;
            $returnValue1934 = $tmp1944;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1944));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1945));
            return $returnValue1934;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1951 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1952;
    org$pandalanguage$pandac$ASTNode* $tmp1953;
    org$pandalanguage$pandac$ASTNode* $returnValue1955;
    org$pandalanguage$pandac$ASTNode* $tmp1956;
    org$pandalanguage$pandac$parser$Token op1961;
    org$pandalanguage$pandac$parser$Token$Kind $match$975_131963;
    org$pandalanguage$pandac$ASTNode* next1992 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1993;
    org$pandalanguage$pandac$ASTNode* $tmp1994;
    org$pandalanguage$pandac$ASTNode* $tmp1996;
    org$pandalanguage$pandac$ASTNode* $tmp2000;
    org$pandalanguage$pandac$ASTNode* $tmp2001;
    org$pandalanguage$pandac$ASTNode* $tmp2002;
    org$pandalanguage$pandac$parser$Token nextToken2006;
    org$pandalanguage$pandac$ASTNode* next2012 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2013;
    org$pandalanguage$pandac$ASTNode* $tmp2014;
    org$pandalanguage$pandac$ASTNode* $tmp2016;
    org$pandalanguage$pandac$ASTNode* $tmp2020;
    org$pandalanguage$pandac$ASTNode* $tmp2021;
    org$pandalanguage$pandac$ASTNode* $tmp2022;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2024;
    org$pandalanguage$pandac$ASTNode* $tmp2026;
    org$pandalanguage$pandac$ASTNode* $tmp2029;
    int $tmp1950;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1954 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1953 = $tmp1954;
        $tmp1952 = $tmp1953;
        result1951 = $tmp1952;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1952));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1953));
        if (((panda$core$Bit) { result1951 == NULL }).value) {
        {
            $tmp1956 = NULL;
            $returnValue1955 = $tmp1956;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1956));
            $tmp1950 = 0;
            goto $l1948;
            $l1957:;
            return $returnValue1955;
        }
        }
        $l1959:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1962 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1961 = $tmp1962;
            {
                $match$975_131963 = op1961.kind;
                panda$core$Bit $tmp1970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131963.$rawValue, ((panda$core$Int64) { 53 }));
                bool $tmp1969 = $tmp1970.value;
                if ($tmp1969) goto $l1971;
                panda$core$Bit $tmp1972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131963.$rawValue, ((panda$core$Int64) { 54 }));
                $tmp1969 = $tmp1972.value;
                $l1971:;
                panda$core$Bit $tmp1973 = { $tmp1969 };
                bool $tmp1968 = $tmp1973.value;
                if ($tmp1968) goto $l1974;
                panda$core$Bit $tmp1975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131963.$rawValue, ((panda$core$Int64) { 55 }));
                $tmp1968 = $tmp1975.value;
                $l1974:;
                panda$core$Bit $tmp1976 = { $tmp1968 };
                bool $tmp1967 = $tmp1976.value;
                if ($tmp1967) goto $l1977;
                panda$core$Bit $tmp1978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131963.$rawValue, ((panda$core$Int64) { 56 }));
                $tmp1967 = $tmp1978.value;
                $l1977:;
                panda$core$Bit $tmp1979 = { $tmp1967 };
                bool $tmp1966 = $tmp1979.value;
                if ($tmp1966) goto $l1980;
                panda$core$Bit $tmp1981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131963.$rawValue, ((panda$core$Int64) { 72 }));
                $tmp1966 = $tmp1981.value;
                $l1980:;
                panda$core$Bit $tmp1982 = { $tmp1966 };
                bool $tmp1965 = $tmp1982.value;
                if ($tmp1965) goto $l1983;
                panda$core$Bit $tmp1984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131963.$rawValue, ((panda$core$Int64) { 67 }));
                $tmp1965 = $tmp1984.value;
                $l1983:;
                panda$core$Bit $tmp1985 = { $tmp1965 };
                bool $tmp1964 = $tmp1985.value;
                if ($tmp1964) goto $l1986;
                panda$core$Bit $tmp1987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131963.$rawValue, ((panda$core$Int64) { 69 }));
                $tmp1964 = $tmp1987.value;
                $l1986:;
                panda$core$Bit $tmp1988 = { $tmp1964 };
                if ($tmp1988.value) {
                {
                    int $tmp1991;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1995 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1994 = $tmp1995;
                        $tmp1993 = $tmp1994;
                        next1992 = $tmp1993;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1993));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1994));
                        if (((panda$core$Bit) { next1992 == NULL }).value) {
                        {
                            $tmp1996 = NULL;
                            $returnValue1955 = $tmp1996;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1996));
                            $tmp1991 = 0;
                            goto $l1989;
                            $l1997:;
                            $tmp1950 = 1;
                            goto $l1948;
                            $l1998:;
                            return $returnValue1955;
                        }
                        }
                        {
                            $tmp2000 = result1951;
                            org$pandalanguage$pandac$ASTNode* $tmp2003 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2003, ((panda$core$Int64) { 4 }), op1961.position, result1951, op1961.kind, next1992);
                            $tmp2002 = $tmp2003;
                            $tmp2001 = $tmp2002;
                            result1951 = $tmp2001;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2001));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2002));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2000));
                        }
                    }
                    $tmp1991 = -1;
                    goto $l1989;
                    $l1989:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1992));
                    next1992 = NULL;
                    switch ($tmp1991) {
                        case 0: goto $l1997;
                        case -1: goto $l2004;
                    }
                    $l2004:;
                }
                }
                else {
                panda$core$Bit $tmp2005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$975_131963.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp2005.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2007 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken2006 = $tmp2007;
                    panda$core$Bit $tmp2008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken2006.kind.$rawValue, ((panda$core$Int64) { 63 }));
                    if ($tmp2008.value) {
                    {
                        int $tmp2011;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2015 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2014 = $tmp2015;
                            $tmp2013 = $tmp2014;
                            next2012 = $tmp2013;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2013));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2014));
                            if (((panda$core$Bit) { next2012 == NULL }).value) {
                            {
                                $tmp2016 = NULL;
                                $returnValue1955 = $tmp2016;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2016));
                                $tmp2011 = 0;
                                goto $l2009;
                                $l2017:;
                                $tmp1950 = 2;
                                goto $l1948;
                                $l2018:;
                                return $returnValue1955;
                            }
                            }
                            {
                                $tmp2020 = result1951;
                                org$pandalanguage$pandac$ASTNode* $tmp2023 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2024, ((panda$core$Int64) { 1 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2023, ((panda$core$Int64) { 4 }), op1961.position, result1951, $tmp2024, next2012);
                                $tmp2022 = $tmp2023;
                                $tmp2021 = $tmp2022;
                                result1951 = $tmp2021;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2021));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2022));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2020));
                            }
                        }
                        $tmp2011 = -1;
                        goto $l2009;
                        $l2009:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2012));
                        next2012 = NULL;
                        switch ($tmp2011) {
                            case -1: goto $l2025;
                            case 0: goto $l2017;
                        }
                        $l2025:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken2006);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1961);
                        $tmp2026 = result1951;
                        $returnValue1955 = $tmp2026;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2026));
                        $tmp1950 = 3;
                        goto $l1948;
                        $l2027:;
                        return $returnValue1955;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1961);
                    $tmp2029 = result1951;
                    $returnValue1955 = $tmp2029;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2029));
                    $tmp1950 = 4;
                    goto $l1948;
                    $l2030:;
                    return $returnValue1955;
                }
                }
                }
            }
        }
        }
        $l1960:;
    }
    $tmp1950 = -1;
    goto $l1948;
    $l1948:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1951));
    result1951 = NULL;
    switch ($tmp1950) {
        case 3: goto $l2027;
        case 4: goto $l2030;
        case 1: goto $l1998;
        case 0: goto $l1957;
        case -1: goto $l2032;
        case 2: goto $l2018;
    }
    $l2032:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2036 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2037;
    org$pandalanguage$pandac$ASTNode* $tmp2038;
    org$pandalanguage$pandac$ASTNode* $returnValue2040;
    org$pandalanguage$pandac$ASTNode* $tmp2041;
    org$pandalanguage$pandac$parser$Token op2046;
    org$pandalanguage$pandac$parser$Token$Kind $match$1016_132048;
    org$pandalanguage$pandac$ASTNode* next2061 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2062;
    org$pandalanguage$pandac$ASTNode* $tmp2063;
    org$pandalanguage$pandac$ASTNode* $tmp2065;
    org$pandalanguage$pandac$ASTNode* $tmp2069;
    org$pandalanguage$pandac$ASTNode* $tmp2070;
    org$pandalanguage$pandac$ASTNode* $tmp2071;
    org$pandalanguage$pandac$ASTNode* $tmp2074;
    int $tmp2035;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2039 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2038 = $tmp2039;
        $tmp2037 = $tmp2038;
        result2036 = $tmp2037;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2037));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2038));
        if (((panda$core$Bit) { result2036 == NULL }).value) {
        {
            $tmp2041 = NULL;
            $returnValue2040 = $tmp2041;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2041));
            $tmp2035 = 0;
            goto $l2033;
            $l2042:;
            return $returnValue2040;
        }
        }
        $l2044:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2047 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2046 = $tmp2047;
            {
                $match$1016_132048 = op2046.kind;
                panda$core$Bit $tmp2051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1016_132048.$rawValue, ((panda$core$Int64) { 51 }));
                bool $tmp2050 = $tmp2051.value;
                if ($tmp2050) goto $l2052;
                panda$core$Bit $tmp2053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1016_132048.$rawValue, ((panda$core$Int64) { 52 }));
                $tmp2050 = $tmp2053.value;
                $l2052:;
                panda$core$Bit $tmp2054 = { $tmp2050 };
                bool $tmp2049 = $tmp2054.value;
                if ($tmp2049) goto $l2055;
                panda$core$Bit $tmp2056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1016_132048.$rawValue, ((panda$core$Int64) { 71 }));
                $tmp2049 = $tmp2056.value;
                $l2055:;
                panda$core$Bit $tmp2057 = { $tmp2049 };
                if ($tmp2057.value) {
                {
                    int $tmp2060;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2064 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2063 = $tmp2064;
                        $tmp2062 = $tmp2063;
                        next2061 = $tmp2062;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2062));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2063));
                        if (((panda$core$Bit) { next2061 == NULL }).value) {
                        {
                            $tmp2065 = NULL;
                            $returnValue2040 = $tmp2065;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2065));
                            $tmp2060 = 0;
                            goto $l2058;
                            $l2066:;
                            $tmp2035 = 1;
                            goto $l2033;
                            $l2067:;
                            return $returnValue2040;
                        }
                        }
                        {
                            $tmp2069 = result2036;
                            org$pandalanguage$pandac$ASTNode* $tmp2072 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2072, ((panda$core$Int64) { 4 }), op2046.position, result2036, op2046.kind, next2061);
                            $tmp2071 = $tmp2072;
                            $tmp2070 = $tmp2071;
                            result2036 = $tmp2070;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2070));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2071));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2069));
                        }
                    }
                    $tmp2060 = -1;
                    goto $l2058;
                    $l2058:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2061));
                    next2061 = NULL;
                    switch ($tmp2060) {
                        case -1: goto $l2073;
                        case 0: goto $l2066;
                    }
                    $l2073:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2046);
                    $tmp2074 = result2036;
                    $returnValue2040 = $tmp2074;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2074));
                    $tmp2035 = 2;
                    goto $l2033;
                    $l2075:;
                    return $returnValue2040;
                }
                }
            }
        }
        }
        $l2045:;
    }
    $tmp2035 = -1;
    goto $l2033;
    $l2033:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2036));
    result2036 = NULL;
    switch ($tmp2035) {
        case -1: goto $l2077;
        case 1: goto $l2067;
        case 2: goto $l2075;
        case 0: goto $l2042;
    }
    $l2077:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2081 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$1036_92082;
    org$pandalanguage$pandac$ASTNode* $tmp2089;
    org$pandalanguage$pandac$ASTNode* $tmp2090;
    org$pandalanguage$pandac$ASTNode* $tmp2091;
    org$pandalanguage$pandac$ASTNode* $tmp2092;
    org$pandalanguage$pandac$ASTNode* $tmp2093;
    org$pandalanguage$pandac$ASTNode* $returnValue2095;
    org$pandalanguage$pandac$ASTNode* $tmp2096;
    org$pandalanguage$pandac$parser$Token op2099;
    org$pandalanguage$pandac$parser$Token$Kind $match$1046_92101;
    org$pandalanguage$pandac$parser$Token next2110;
    org$pandalanguage$pandac$ASTNode* right2112 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2122;
    org$pandalanguage$pandac$ASTNode* $tmp2123;
    org$pandalanguage$pandac$ASTNode* $tmp2124;
    org$pandalanguage$pandac$ASTNode* $tmp2126;
    org$pandalanguage$pandac$ASTNode* $tmp2130;
    org$pandalanguage$pandac$ASTNode* $tmp2131;
    org$pandalanguage$pandac$ASTNode* step2132 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2133;
    org$pandalanguage$pandac$ASTNode* $tmp2135;
    org$pandalanguage$pandac$ASTNode* $tmp2136;
    org$pandalanguage$pandac$ASTNode* $tmp2137;
    org$pandalanguage$pandac$ASTNode* $tmp2139;
    org$pandalanguage$pandac$ASTNode* $tmp2143;
    org$pandalanguage$pandac$ASTNode* $tmp2144;
    org$pandalanguage$pandac$ASTNode* $tmp2145;
    org$pandalanguage$pandac$ASTNode* $tmp2146;
    org$pandalanguage$pandac$ASTNode* $tmp2153;
    int $tmp2080;
    {
        memset(&result2081, 0, sizeof(result2081));
        {
            org$pandalanguage$pandac$parser$Token $tmp2083 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1036_92082 = $tmp2083.kind;
            panda$core$Bit $tmp2085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1036_92082.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp2084 = $tmp2085.value;
            if ($tmp2084) goto $l2086;
            panda$core$Bit $tmp2087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1036_92082.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp2084 = $tmp2087.value;
            $l2086:;
            panda$core$Bit $tmp2088 = { $tmp2084 };
            if ($tmp2088.value) {
            {
                {
                    $tmp2089 = result2081;
                    $tmp2090 = NULL;
                    result2081 = $tmp2090;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2090));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2089));
                }
            }
            }
            else {
            {
                {
                    $tmp2091 = result2081;
                    org$pandalanguage$pandac$ASTNode* $tmp2094 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2093 = $tmp2094;
                    $tmp2092 = $tmp2093;
                    result2081 = $tmp2092;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2092));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2093));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2091));
                }
                if (((panda$core$Bit) { result2081 == NULL }).value) {
                {
                    $tmp2096 = NULL;
                    $returnValue2095 = $tmp2096;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2096));
                    $tmp2080 = 0;
                    goto $l2078;
                    $l2097:;
                    return $returnValue2095;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp2100 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op2099 = $tmp2100;
        {
            $match$1046_92101 = op2099.kind;
            panda$core$Bit $tmp2103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1046_92101.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp2102 = $tmp2103.value;
            if ($tmp2102) goto $l2104;
            panda$core$Bit $tmp2105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1046_92101.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp2102 = $tmp2105.value;
            $l2104:;
            panda$core$Bit $tmp2106 = { $tmp2102 };
            if ($tmp2106.value) {
            {
                int $tmp2109;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2111 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next2110 = $tmp2111;
                    memset(&right2112, 0, sizeof(right2112));
                    panda$core$Bit $tmp2115 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2110.kind.$rawValue, ((panda$core$Int64) { 102 }));
                    bool $tmp2114 = $tmp2115.value;
                    if (!$tmp2114) goto $l2116;
                    panda$core$Bit $tmp2117 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2110.kind.$rawValue, ((panda$core$Int64) { 104 }));
                    $tmp2114 = $tmp2117.value;
                    $l2116:;
                    panda$core$Bit $tmp2118 = { $tmp2114 };
                    bool $tmp2113 = $tmp2118.value;
                    if (!$tmp2113) goto $l2119;
                    panda$core$Bit $tmp2120 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2110.kind.$rawValue, ((panda$core$Int64) { 33 }));
                    $tmp2113 = $tmp2120.value;
                    $l2119:;
                    panda$core$Bit $tmp2121 = { $tmp2113 };
                    if ($tmp2121.value) {
                    {
                        {
                            $tmp2122 = right2112;
                            org$pandalanguage$pandac$ASTNode* $tmp2125 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2124 = $tmp2125;
                            $tmp2123 = $tmp2124;
                            right2112 = $tmp2123;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2123));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2124));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2122));
                        }
                        if (((panda$core$Bit) { right2112 == NULL }).value) {
                        {
                            $tmp2126 = NULL;
                            $returnValue2095 = $tmp2126;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2126));
                            $tmp2109 = 0;
                            goto $l2107;
                            $l2127:;
                            $tmp2080 = 1;
                            goto $l2078;
                            $l2128:;
                            return $returnValue2095;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2130 = right2112;
                            $tmp2131 = NULL;
                            right2112 = $tmp2131;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2131));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2130));
                        }
                    }
                    }
                    memset(&step2132, 0, sizeof(step2132));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2133, ((panda$core$Int64) { 33 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2134 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2133);
                    if (((panda$core$Bit) { $tmp2134.nonnull }).value) {
                    {
                        {
                            $tmp2135 = step2132;
                            org$pandalanguage$pandac$ASTNode* $tmp2138 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2137 = $tmp2138;
                            $tmp2136 = $tmp2137;
                            step2132 = $tmp2136;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2136));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2137));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2135));
                        }
                        if (((panda$core$Bit) { step2132 == NULL }).value) {
                        {
                            $tmp2139 = NULL;
                            $returnValue2095 = $tmp2139;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2139));
                            $tmp2109 = 1;
                            goto $l2107;
                            $l2140:;
                            $tmp2080 = 2;
                            goto $l2078;
                            $l2141:;
                            return $returnValue2095;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2143 = step2132;
                            $tmp2144 = NULL;
                            step2132 = $tmp2144;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2144));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2143));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2147 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Bit $tmp2148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2099.kind.$rawValue, ((panda$core$Int64) { 96 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp2147, ((panda$core$Int64) { 33 }), op2099.position, result2081, right2112, $tmp2148, step2132);
                    $tmp2146 = $tmp2147;
                    $tmp2145 = $tmp2146;
                    $returnValue2095 = $tmp2145;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2145));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
                    $tmp2109 = 2;
                    goto $l2107;
                    $l2149:;
                    $tmp2080 = 3;
                    goto $l2078;
                    $l2150:;
                    return $returnValue2095;
                }
                $l2107:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2132));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right2112));
                switch ($tmp2109) {
                    case 2: goto $l2149;
                    case 1: goto $l2140;
                    case 0: goto $l2127;
                }
                $l2152:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2099);
                $tmp2153 = result2081;
                $returnValue2095 = $tmp2153;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2153));
                $tmp2080 = 4;
                goto $l2078;
                $l2154:;
                return $returnValue2095;
            }
            }
        }
    }
    $tmp2080 = -1;
    goto $l2078;
    $l2078:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2081));
    switch ($tmp2080) {
        case 3: goto $l2150;
        case 4: goto $l2154;
        case -1: goto $l2156;
        case 2: goto $l2141;
        case 1: goto $l2128;
        case 0: goto $l2097;
    }
    $l2156:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2160 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2161;
    org$pandalanguage$pandac$ASTNode* $tmp2162;
    org$pandalanguage$pandac$ASTNode* $returnValue2164;
    org$pandalanguage$pandac$ASTNode* $tmp2165;
    org$pandalanguage$pandac$parser$Token op2170;
    org$pandalanguage$pandac$parser$Token$Kind $match$1089_132172;
    org$pandalanguage$pandac$ASTNode* next2205 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2206;
    org$pandalanguage$pandac$ASTNode* $tmp2207;
    org$pandalanguage$pandac$ASTNode* $tmp2209;
    org$pandalanguage$pandac$ASTNode* $tmp2213;
    org$pandalanguage$pandac$ASTNode* $tmp2214;
    org$pandalanguage$pandac$ASTNode* $tmp2215;
    org$pandalanguage$pandac$ASTNode* $tmp2218;
    int $tmp2159;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2163 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2162 = $tmp2163;
        $tmp2161 = $tmp2162;
        result2160 = $tmp2161;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2161));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2162));
        if (((panda$core$Bit) { result2160 == NULL }).value) {
        {
            $tmp2165 = NULL;
            $returnValue2164 = $tmp2165;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2165));
            $tmp2159 = 0;
            goto $l2157;
            $l2166:;
            return $returnValue2164;
        }
        }
        $l2168:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2171 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2170 = $tmp2171;
            {
                $match$1089_132172 = op2170.kind;
                panda$core$Bit $tmp2180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132172.$rawValue, ((panda$core$Int64) { 58 }));
                bool $tmp2179 = $tmp2180.value;
                if ($tmp2179) goto $l2181;
                panda$core$Bit $tmp2182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132172.$rawValue, ((panda$core$Int64) { 59 }));
                $tmp2179 = $tmp2182.value;
                $l2181:;
                panda$core$Bit $tmp2183 = { $tmp2179 };
                bool $tmp2178 = $tmp2183.value;
                if ($tmp2178) goto $l2184;
                panda$core$Bit $tmp2185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132172.$rawValue, ((panda$core$Int64) { 60 }));
                $tmp2178 = $tmp2185.value;
                $l2184:;
                panda$core$Bit $tmp2186 = { $tmp2178 };
                bool $tmp2177 = $tmp2186.value;
                if ($tmp2177) goto $l2187;
                panda$core$Bit $tmp2188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132172.$rawValue, ((panda$core$Int64) { 61 }));
                $tmp2177 = $tmp2188.value;
                $l2187:;
                panda$core$Bit $tmp2189 = { $tmp2177 };
                bool $tmp2176 = $tmp2189.value;
                if ($tmp2176) goto $l2190;
                panda$core$Bit $tmp2191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132172.$rawValue, ((panda$core$Int64) { 62 }));
                $tmp2176 = $tmp2191.value;
                $l2190:;
                panda$core$Bit $tmp2192 = { $tmp2176 };
                bool $tmp2175 = $tmp2192.value;
                if ($tmp2175) goto $l2193;
                panda$core$Bit $tmp2194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132172.$rawValue, ((panda$core$Int64) { 63 }));
                $tmp2175 = $tmp2194.value;
                $l2193:;
                panda$core$Bit $tmp2195 = { $tmp2175 };
                bool $tmp2174 = $tmp2195.value;
                if ($tmp2174) goto $l2196;
                panda$core$Bit $tmp2197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132172.$rawValue, ((panda$core$Int64) { 64 }));
                $tmp2174 = $tmp2197.value;
                $l2196:;
                panda$core$Bit $tmp2198 = { $tmp2174 };
                bool $tmp2173 = $tmp2198.value;
                if ($tmp2173) goto $l2199;
                panda$core$Bit $tmp2200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1089_132172.$rawValue, ((panda$core$Int64) { 65 }));
                $tmp2173 = $tmp2200.value;
                $l2199:;
                panda$core$Bit $tmp2201 = { $tmp2173 };
                if ($tmp2201.value) {
                {
                    int $tmp2204;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2208 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2207 = $tmp2208;
                        $tmp2206 = $tmp2207;
                        next2205 = $tmp2206;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2207));
                        if (((panda$core$Bit) { next2205 == NULL }).value) {
                        {
                            $tmp2209 = NULL;
                            $returnValue2164 = $tmp2209;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2209));
                            $tmp2204 = 0;
                            goto $l2202;
                            $l2210:;
                            $tmp2159 = 1;
                            goto $l2157;
                            $l2211:;
                            return $returnValue2164;
                        }
                        }
                        {
                            $tmp2213 = result2160;
                            org$pandalanguage$pandac$ASTNode* $tmp2216 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2216, ((panda$core$Int64) { 4 }), op2170.position, result2160, op2170.kind, next2205);
                            $tmp2215 = $tmp2216;
                            $tmp2214 = $tmp2215;
                            result2160 = $tmp2214;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2214));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2215));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2213));
                        }
                    }
                    $tmp2204 = -1;
                    goto $l2202;
                    $l2202:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2205));
                    next2205 = NULL;
                    switch ($tmp2204) {
                        case -1: goto $l2217;
                        case 0: goto $l2210;
                    }
                    $l2217:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2170);
                    $tmp2218 = result2160;
                    $returnValue2164 = $tmp2218;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2218));
                    $tmp2159 = 2;
                    goto $l2157;
                    $l2219:;
                    return $returnValue2164;
                }
                }
            }
        }
        }
        $l2169:;
    }
    $tmp2159 = -1;
    goto $l2157;
    $l2157:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2160));
    result2160 = NULL;
    switch ($tmp2159) {
        case 2: goto $l2219;
        case 1: goto $l2211;
        case -1: goto $l2221;
        case 0: goto $l2166;
    }
    $l2221:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2225 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2226;
    org$pandalanguage$pandac$ASTNode* $tmp2227;
    org$pandalanguage$pandac$ASTNode* $returnValue2229;
    org$pandalanguage$pandac$ASTNode* $tmp2230;
    org$pandalanguage$pandac$parser$Token op2235;
    org$pandalanguage$pandac$parser$Token$Kind $match$1120_132237;
    org$pandalanguage$pandac$ASTNode* next2246 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2247;
    org$pandalanguage$pandac$ASTNode* $tmp2248;
    org$pandalanguage$pandac$ASTNode* $tmp2250;
    org$pandalanguage$pandac$ASTNode* $tmp2254;
    org$pandalanguage$pandac$ASTNode* $tmp2255;
    org$pandalanguage$pandac$ASTNode* $tmp2256;
    org$pandalanguage$pandac$ASTNode* $tmp2259;
    int $tmp2224;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2228 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
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
            org$pandalanguage$pandac$parser$Token $tmp2236 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2235 = $tmp2236;
            {
                $match$1120_132237 = op2235.kind;
                panda$core$Bit $tmp2239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1120_132237.$rawValue, ((panda$core$Int64) { 66 }));
                bool $tmp2238 = $tmp2239.value;
                if ($tmp2238) goto $l2240;
                panda$core$Bit $tmp2241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1120_132237.$rawValue, ((panda$core$Int64) { 70 }));
                $tmp2238 = $tmp2241.value;
                $l2240:;
                panda$core$Bit $tmp2242 = { $tmp2238 };
                if ($tmp2242.value) {
                {
                    int $tmp2245;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2249 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2248 = $tmp2249;
                        $tmp2247 = $tmp2248;
                        next2246 = $tmp2247;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2247));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
                        if (((panda$core$Bit) { next2246 == NULL }).value) {
                        {
                            $tmp2250 = NULL;
                            $returnValue2229 = $tmp2250;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2250));
                            $tmp2245 = 0;
                            goto $l2243;
                            $l2251:;
                            $tmp2224 = 1;
                            goto $l2222;
                            $l2252:;
                            return $returnValue2229;
                        }
                        }
                        {
                            $tmp2254 = result2225;
                            org$pandalanguage$pandac$ASTNode* $tmp2257 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2257, ((panda$core$Int64) { 4 }), op2235.position, result2225, op2235.kind, next2246);
                            $tmp2256 = $tmp2257;
                            $tmp2255 = $tmp2256;
                            result2225 = $tmp2255;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2255));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2256));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2254));
                        }
                    }
                    $tmp2245 = -1;
                    goto $l2243;
                    $l2243:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2246));
                    next2246 = NULL;
                    switch ($tmp2245) {
                        case -1: goto $l2258;
                        case 0: goto $l2251;
                    }
                    $l2258:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2235);
                    $tmp2259 = result2225;
                    $returnValue2229 = $tmp2259;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2259));
                    $tmp2224 = 2;
                    goto $l2222;
                    $l2260:;
                    return $returnValue2229;
                }
                }
            }
        }
        }
        $l2234:;
    }
    $tmp2224 = -1;
    goto $l2222;
    $l2222:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2225));
    result2225 = NULL;
    switch ($tmp2224) {
        case 2: goto $l2260;
        case 1: goto $l2252;
        case -1: goto $l2262;
        case 0: goto $l2231;
    }
    $l2262:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2266 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2267;
    org$pandalanguage$pandac$ASTNode* $tmp2268;
    org$pandalanguage$pandac$ASTNode* $returnValue2270;
    org$pandalanguage$pandac$ASTNode* $tmp2271;
    org$pandalanguage$pandac$parser$Token$nullable op2279;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2280;
    org$pandalanguage$pandac$ASTNode* next2283 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2284;
    org$pandalanguage$pandac$ASTNode* $tmp2285;
    org$pandalanguage$pandac$ASTNode* $tmp2287;
    org$pandalanguage$pandac$ASTNode* $tmp2291;
    org$pandalanguage$pandac$ASTNode* $tmp2292;
    org$pandalanguage$pandac$ASTNode* $tmp2293;
    org$pandalanguage$pandac$ASTNode* $tmp2296;
    int $tmp2265;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2269 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2268 = $tmp2269;
        $tmp2267 = $tmp2268;
        result2266 = $tmp2267;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2267));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2268));
        if (((panda$core$Bit) { result2266 == NULL }).value) {
        {
            $tmp2271 = NULL;
            $returnValue2270 = $tmp2271;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2271));
            $tmp2265 = 0;
            goto $l2263;
            $l2272:;
            return $returnValue2270;
        }
        }
        $l2274:;
        while (true) {
        {
            int $tmp2278;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2280, ((panda$core$Int64) { 68 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2281 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2280);
                op2279 = $tmp2281;
                if (((panda$core$Bit) { !op2279.nonnull }).value) {
                {
                    $tmp2278 = 0;
                    goto $l2276;
                    $l2282:;
                    goto $l2275;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2286 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2285 = $tmp2286;
                $tmp2284 = $tmp2285;
                next2283 = $tmp2284;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2284));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2285));
                if (((panda$core$Bit) { next2283 == NULL }).value) {
                {
                    $tmp2287 = NULL;
                    $returnValue2270 = $tmp2287;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2287));
                    $tmp2278 = 1;
                    goto $l2276;
                    $l2288:;
                    $tmp2265 = 1;
                    goto $l2263;
                    $l2289:;
                    return $returnValue2270;
                }
                }
                {
                    $tmp2291 = result2266;
                    org$pandalanguage$pandac$ASTNode* $tmp2294 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2294, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op2279.value).position, result2266, ((org$pandalanguage$pandac$parser$Token) op2279.value).kind, next2283);
                    $tmp2293 = $tmp2294;
                    $tmp2292 = $tmp2293;
                    result2266 = $tmp2292;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2292));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2293));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2291));
                }
            }
            $tmp2278 = -1;
            goto $l2276;
            $l2276:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2283));
            next2283 = NULL;
            switch ($tmp2278) {
                case -1: goto $l2295;
                case 0: goto $l2282;
                case 1: goto $l2288;
            }
            $l2295:;
        }
        }
        $l2275:;
        $tmp2296 = result2266;
        $returnValue2270 = $tmp2296;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2296));
        $tmp2265 = 2;
        goto $l2263;
        $l2297:;
        return $returnValue2270;
    }
    $l2263:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2266));
    result2266 = NULL;
    switch ($tmp2265) {
        case 1: goto $l2289;
        case 2: goto $l2297;
        case 0: goto $l2272;
    }
    $l2299:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2303;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2304;
    org$pandalanguage$pandac$ASTNode* $returnValue2307;
    org$pandalanguage$pandac$ASTNode* $tmp2308;
    org$pandalanguage$pandac$ASTNode* test2311 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2312;
    org$pandalanguage$pandac$ASTNode* $tmp2313;
    org$pandalanguage$pandac$ASTNode* $tmp2315;
    panda$collections$ImmutableArray* ifTrue2318 = NULL;
    panda$collections$ImmutableArray* $tmp2319;
    panda$collections$ImmutableArray* $tmp2320;
    org$pandalanguage$pandac$ASTNode* $tmp2322;
    org$pandalanguage$pandac$ASTNode* ifFalse2325 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2326;
    org$pandalanguage$pandac$ASTNode* $tmp2330;
    org$pandalanguage$pandac$ASTNode* $tmp2331;
    org$pandalanguage$pandac$ASTNode* $tmp2332;
    org$pandalanguage$pandac$ASTNode* $tmp2334;
    org$pandalanguage$pandac$ASTNode* $tmp2337;
    org$pandalanguage$pandac$ASTNode* $tmp2338;
    org$pandalanguage$pandac$ASTNode* $tmp2339;
    org$pandalanguage$pandac$ASTNode* $tmp2341;
    org$pandalanguage$pandac$ASTNode* $tmp2344;
    org$pandalanguage$pandac$ASTNode* $tmp2345;
    org$pandalanguage$pandac$ASTNode* $tmp2346;
    org$pandalanguage$pandac$ASTNode* $tmp2347;
    int $tmp2302;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2304, ((panda$core$Int64) { 36 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2306 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2304, &$s2305);
        start2303 = $tmp2306;
        if (((panda$core$Bit) { !start2303.nonnull }).value) {
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
        org$pandalanguage$pandac$ASTNode* $tmp2314 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2313 = $tmp2314;
        $tmp2312 = $tmp2313;
        test2311 = $tmp2312;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2312));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2313));
        if (((panda$core$Bit) { test2311 == NULL }).value) {
        {
            $tmp2315 = NULL;
            $returnValue2307 = $tmp2315;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2315));
            $tmp2302 = 1;
            goto $l2300;
            $l2316:;
            return $returnValue2307;
        }
        }
        panda$collections$ImmutableArray* $tmp2321 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2320 = $tmp2321;
        $tmp2319 = $tmp2320;
        ifTrue2318 = $tmp2319;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2320));
        if (((panda$core$Bit) { ifTrue2318 == NULL }).value) {
        {
            $tmp2322 = NULL;
            $returnValue2307 = $tmp2322;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2322));
            $tmp2302 = 2;
            goto $l2300;
            $l2323:;
            return $returnValue2307;
        }
        }
        memset(&ifFalse2325, 0, sizeof(ifFalse2325));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2326, ((panda$core$Int64) { 37 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2327 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2326);
        if (((panda$core$Bit) { $tmp2327.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2328 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp2329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2328.kind.$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2329.value) {
            {
                {
                    $tmp2330 = ifFalse2325;
                    org$pandalanguage$pandac$ASTNode* $tmp2333 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2332 = $tmp2333;
                    $tmp2331 = $tmp2332;
                    ifFalse2325 = $tmp2331;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2331));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2332));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2330));
                }
                if (((panda$core$Bit) { ifFalse2325 == NULL }).value) {
                {
                    $tmp2334 = NULL;
                    $returnValue2307 = $tmp2334;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2334));
                    $tmp2302 = 3;
                    goto $l2300;
                    $l2335:;
                    return $returnValue2307;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2337 = ifFalse2325;
                    org$pandalanguage$pandac$ASTNode* $tmp2340 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2339 = $tmp2340;
                    $tmp2338 = $tmp2339;
                    ifFalse2325 = $tmp2338;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2338));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2339));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2337));
                }
                if (((panda$core$Bit) { ifFalse2325 == NULL }).value) {
                {
                    $tmp2341 = NULL;
                    $returnValue2307 = $tmp2341;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2341));
                    $tmp2302 = 4;
                    goto $l2300;
                    $l2342:;
                    return $returnValue2307;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp2344 = ifFalse2325;
                $tmp2345 = NULL;
                ifFalse2325 = $tmp2345;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2345));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2344));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2348 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2348, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start2303.value).position, test2311, ifTrue2318, ifFalse2325);
        $tmp2347 = $tmp2348;
        $tmp2346 = $tmp2347;
        $returnValue2307 = $tmp2346;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2346));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2347));
        $tmp2302 = 5;
        goto $l2300;
        $l2349:;
        return $returnValue2307;
    }
    $l2300:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse2325));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue2318));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2311));
    test2311 = NULL;
    ifTrue2318 = NULL;
    switch ($tmp2302) {
        case 3: goto $l2335;
        case 5: goto $l2349;
        case 2: goto $l2323;
        case 4: goto $l2342;
        case 0: goto $l2309;
        case 1: goto $l2316;
    }
    $l2351:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp2352;
    org$pandalanguage$pandac$ASTNode* $returnValue2355;
    org$pandalanguage$pandac$ASTNode* $tmp2356;
    org$pandalanguage$pandac$ASTNode* $tmp2358;
    org$pandalanguage$pandac$ASTNode* $tmp2359;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2352, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2354 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2352, &$s2353);
    if (((panda$core$Bit) { !$tmp2354.nonnull }).value) {
    {
        $tmp2356 = NULL;
        $returnValue2355 = $tmp2356;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2356));
        return $returnValue2355;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2360 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    $tmp2359 = $tmp2360;
    $tmp2358 = $tmp2359;
    $returnValue2355 = $tmp2358;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2358));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2359));
    return $returnValue2355;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id2362;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2363;
    org$pandalanguage$pandac$ASTNode* $returnValue2366;
    org$pandalanguage$pandac$ASTNode* $tmp2367;
    org$pandalanguage$pandac$ASTNode* type2374 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2375;
    org$pandalanguage$pandac$ASTNode* $tmp2376;
    org$pandalanguage$pandac$ASTNode* $tmp2378;
    org$pandalanguage$pandac$ASTNode* $tmp2381;
    org$pandalanguage$pandac$ASTNode* $tmp2382;
    panda$core$String* $tmp2384;
    org$pandalanguage$pandac$ASTNode* $tmp2389;
    org$pandalanguage$pandac$ASTNode* $tmp2390;
    panda$core$String* $tmp2392;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2363, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2365 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2363, &$s2364);
    id2362 = $tmp2365;
    if (((panda$core$Bit) { !id2362.nonnull }).value) {
    {
        $tmp2367 = NULL;
        $returnValue2366 = $tmp2367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2367));
        return $returnValue2366;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2369 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2369.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp2370.value) {
    {
        int $tmp2373;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2377 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2376 = $tmp2377;
            $tmp2375 = $tmp2376;
            type2374 = $tmp2375;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2375));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
            if (((panda$core$Bit) { type2374 == NULL }).value) {
            {
                $tmp2378 = NULL;
                $returnValue2366 = $tmp2378;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2378));
                $tmp2373 = 0;
                goto $l2371;
                $l2379:;
                return $returnValue2366;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp2383 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp2385 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2362.value));
            $tmp2384 = $tmp2385;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2383, ((panda$core$Int64) { 44 }), ((org$pandalanguage$pandac$parser$Token) id2362.value).position, $tmp2384, type2374);
            $tmp2382 = $tmp2383;
            $tmp2381 = $tmp2382;
            $returnValue2366 = $tmp2381;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2381));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2382));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2384));
            $tmp2373 = 1;
            goto $l2371;
            $l2386:;
            return $returnValue2366;
        }
        $l2371:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type2374));
        type2374 = NULL;
        switch ($tmp2373) {
            case 1: goto $l2386;
            case 0: goto $l2379;
        }
        $l2388:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2391 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp2393 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2362.value));
    $tmp2392 = $tmp2393;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2391, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id2362.value).position, $tmp2392);
    $tmp2390 = $tmp2391;
    $tmp2389 = $tmp2390;
    $returnValue2366 = $tmp2389;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2389));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2390));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2392));
    return $returnValue2366;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2398;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2399;
    org$pandalanguage$pandac$ASTNode* $returnValue2402;
    org$pandalanguage$pandac$ASTNode* $tmp2403;
    org$pandalanguage$pandac$ASTNode* t2406 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2407;
    org$pandalanguage$pandac$ASTNode* $tmp2408;
    org$pandalanguage$pandac$ASTNode* $tmp2410;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2413;
    org$pandalanguage$pandac$ASTNode* $tmp2416;
    org$pandalanguage$pandac$ASTNode* list2419 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2420;
    org$pandalanguage$pandac$ASTNode* $tmp2421;
    org$pandalanguage$pandac$ASTNode* $tmp2423;
    panda$collections$ImmutableArray* block2426 = NULL;
    panda$collections$ImmutableArray* $tmp2427;
    panda$collections$ImmutableArray* $tmp2428;
    org$pandalanguage$pandac$ASTNode* $tmp2430;
    org$pandalanguage$pandac$ASTNode* $tmp2433;
    org$pandalanguage$pandac$ASTNode* $tmp2434;
    int $tmp2397;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2399, ((panda$core$Int64) { 32 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2401 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2399, &$s2400);
        start2398 = $tmp2401;
        if (((panda$core$Bit) { !start2398.nonnull }).value) {
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
        org$pandalanguage$pandac$ASTNode* $tmp2409 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2408 = $tmp2409;
        $tmp2407 = $tmp2408;
        t2406 = $tmp2407;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2407));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2408));
        if (((panda$core$Bit) { t2406 == NULL }).value) {
        {
            $tmp2410 = NULL;
            $returnValue2402 = $tmp2410;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2410));
            $tmp2397 = 1;
            goto $l2395;
            $l2411:;
            return $returnValue2402;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2413, ((panda$core$Int64) { 34 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2415 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2413, &$s2414);
        if (((panda$core$Bit) { !$tmp2415.nonnull }).value) {
        {
            $tmp2416 = NULL;
            $returnValue2402 = $tmp2416;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2416));
            $tmp2397 = 2;
            goto $l2395;
            $l2417:;
            return $returnValue2402;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2422 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2421 = $tmp2422;
        $tmp2420 = $tmp2421;
        list2419 = $tmp2420;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2420));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2421));
        if (((panda$core$Bit) { list2419 == NULL }).value) {
        {
            $tmp2423 = NULL;
            $returnValue2402 = $tmp2423;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2423));
            $tmp2397 = 3;
            goto $l2395;
            $l2424:;
            return $returnValue2402;
        }
        }
        panda$collections$ImmutableArray* $tmp2429 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2428 = $tmp2429;
        $tmp2427 = $tmp2428;
        block2426 = $tmp2427;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2427));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2428));
        if (((panda$core$Bit) { block2426 == NULL }).value) {
        {
            $tmp2430 = NULL;
            $returnValue2402 = $tmp2430;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2430));
            $tmp2397 = 4;
            goto $l2395;
            $l2431:;
            return $returnValue2402;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2435 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2435, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start2398.value).position, p_label, t2406, list2419, block2426);
        $tmp2434 = $tmp2435;
        $tmp2433 = $tmp2434;
        $returnValue2402 = $tmp2433;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2433));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2434));
        $tmp2397 = 5;
        goto $l2395;
        $l2436:;
        return $returnValue2402;
    }
    $l2395:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2426));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2419));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2406));
    t2406 = NULL;
    list2419 = NULL;
    block2426 = NULL;
    switch ($tmp2397) {
        case 1: goto $l2411;
        case 3: goto $l2424;
        case 2: goto $l2417;
        case 4: goto $l2431;
        case 0: goto $l2404;
        case 5: goto $l2436;
    }
    $l2438:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2442;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2443;
    org$pandalanguage$pandac$ASTNode* $returnValue2446;
    org$pandalanguage$pandac$ASTNode* $tmp2447;
    org$pandalanguage$pandac$ASTNode* test2450 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2451;
    org$pandalanguage$pandac$ASTNode* $tmp2452;
    org$pandalanguage$pandac$ASTNode* $tmp2454;
    panda$collections$ImmutableArray* body2457 = NULL;
    panda$collections$ImmutableArray* $tmp2458;
    panda$collections$ImmutableArray* $tmp2459;
    org$pandalanguage$pandac$ASTNode* $tmp2461;
    org$pandalanguage$pandac$ASTNode* $tmp2464;
    org$pandalanguage$pandac$ASTNode* $tmp2465;
    int $tmp2441;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2443, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2445 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2443, &$s2444);
        start2442 = $tmp2445;
        if (((panda$core$Bit) { !start2442.nonnull }).value) {
        {
            $tmp2447 = NULL;
            $returnValue2446 = $tmp2447;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2447));
            $tmp2441 = 0;
            goto $l2439;
            $l2448:;
            return $returnValue2446;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2453 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2452 = $tmp2453;
        $tmp2451 = $tmp2452;
        test2450 = $tmp2451;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2451));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2452));
        if (((panda$core$Bit) { test2450 == NULL }).value) {
        {
            $tmp2454 = NULL;
            $returnValue2446 = $tmp2454;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2454));
            $tmp2441 = 1;
            goto $l2439;
            $l2455:;
            return $returnValue2446;
        }
        }
        panda$collections$ImmutableArray* $tmp2460 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2459 = $tmp2460;
        $tmp2458 = $tmp2459;
        body2457 = $tmp2458;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2458));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2459));
        if (((panda$core$Bit) { body2457 == NULL }).value) {
        {
            $tmp2461 = NULL;
            $returnValue2446 = $tmp2461;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2461));
            $tmp2441 = 2;
            goto $l2439;
            $l2462:;
            return $returnValue2446;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2466 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2466, ((panda$core$Int64) { 49 }), ((org$pandalanguage$pandac$parser$Token) start2442.value).position, p_label, test2450, body2457);
        $tmp2465 = $tmp2466;
        $tmp2464 = $tmp2465;
        $returnValue2446 = $tmp2464;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2464));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2465));
        $tmp2441 = 3;
        goto $l2439;
        $l2467:;
        return $returnValue2446;
    }
    $l2439:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2457));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2450));
    test2450 = NULL;
    body2457 = NULL;
    switch ($tmp2441) {
        case 2: goto $l2462;
        case 1: goto $l2455;
        case 0: goto $l2448;
        case 3: goto $l2467;
    }
    $l2469:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2473;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2474;
    org$pandalanguage$pandac$ASTNode* $returnValue2477;
    org$pandalanguage$pandac$ASTNode* $tmp2478;
    panda$collections$ImmutableArray* body2481 = NULL;
    panda$collections$ImmutableArray* $tmp2482;
    panda$collections$ImmutableArray* $tmp2483;
    org$pandalanguage$pandac$ASTNode* $tmp2485;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2488;
    org$pandalanguage$pandac$ASTNode* $tmp2491;
    org$pandalanguage$pandac$ASTNode* test2494 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2495;
    org$pandalanguage$pandac$ASTNode* $tmp2496;
    org$pandalanguage$pandac$ASTNode* $tmp2498;
    org$pandalanguage$pandac$ASTNode* $tmp2501;
    org$pandalanguage$pandac$ASTNode* $tmp2502;
    int $tmp2472;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2474, ((panda$core$Int64) { 30 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2476 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2474, &$s2475);
        start2473 = $tmp2476;
        if (((panda$core$Bit) { !start2473.nonnull }).value) {
        {
            $tmp2478 = NULL;
            $returnValue2477 = $tmp2478;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2478));
            $tmp2472 = 0;
            goto $l2470;
            $l2479:;
            return $returnValue2477;
        }
        }
        panda$collections$ImmutableArray* $tmp2484 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2483 = $tmp2484;
        $tmp2482 = $tmp2483;
        body2481 = $tmp2482;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2482));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2483));
        if (((panda$core$Bit) { body2481 == NULL }).value) {
        {
            $tmp2485 = NULL;
            $returnValue2477 = $tmp2485;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2485));
            $tmp2472 = 1;
            goto $l2470;
            $l2486:;
            return $returnValue2477;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2488, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2490 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2488, &$s2489);
        if (((panda$core$Bit) { !$tmp2490.nonnull }).value) {
        {
            $tmp2491 = NULL;
            $returnValue2477 = $tmp2491;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2491));
            $tmp2472 = 2;
            goto $l2470;
            $l2492:;
            return $returnValue2477;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2497 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2496 = $tmp2497;
        $tmp2495 = $tmp2496;
        test2494 = $tmp2495;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2495));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2496));
        if (((panda$core$Bit) { test2494 == NULL }).value) {
        {
            $tmp2498 = NULL;
            $returnValue2477 = $tmp2498;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2498));
            $tmp2472 = 3;
            goto $l2470;
            $l2499:;
            return $returnValue2477;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2503 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp2503, ((panda$core$Int64) { 14 }), ((org$pandalanguage$pandac$parser$Token) start2473.value).position, p_label, body2481, test2494);
        $tmp2502 = $tmp2503;
        $tmp2501 = $tmp2502;
        $returnValue2477 = $tmp2501;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2501));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2502));
        $tmp2472 = 4;
        goto $l2470;
        $l2504:;
        return $returnValue2477;
    }
    $l2470:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2494));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2481));
    body2481 = NULL;
    test2494 = NULL;
    switch ($tmp2472) {
        case 2: goto $l2492;
        case 1: goto $l2486;
        case 4: goto $l2504;
        case 0: goto $l2479;
        case 3: goto $l2499;
    }
    $l2506:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2510;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2511;
    org$pandalanguage$pandac$ASTNode* $returnValue2514;
    org$pandalanguage$pandac$ASTNode* $tmp2515;
    panda$collections$ImmutableArray* body2518 = NULL;
    panda$collections$ImmutableArray* $tmp2519;
    panda$collections$ImmutableArray* $tmp2520;
    org$pandalanguage$pandac$ASTNode* $tmp2522;
    org$pandalanguage$pandac$ASTNode* $tmp2525;
    org$pandalanguage$pandac$ASTNode* $tmp2526;
    int $tmp2509;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2511, ((panda$core$Int64) { 35 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2513 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2511, &$s2512);
        start2510 = $tmp2513;
        if (((panda$core$Bit) { !start2510.nonnull }).value) {
        {
            $tmp2515 = NULL;
            $returnValue2514 = $tmp2515;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2515));
            $tmp2509 = 0;
            goto $l2507;
            $l2516:;
            return $returnValue2514;
        }
        }
        panda$collections$ImmutableArray* $tmp2521 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2520 = $tmp2521;
        $tmp2519 = $tmp2520;
        body2518 = $tmp2519;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2519));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2520));
        if (((panda$core$Bit) { body2518 == NULL }).value) {
        {
            $tmp2522 = NULL;
            $returnValue2514 = $tmp2522;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2522));
            $tmp2509 = 1;
            goto $l2507;
            $l2523:;
            return $returnValue2514;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2527 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2527, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start2510.value).position, p_label, body2518);
        $tmp2526 = $tmp2527;
        $tmp2525 = $tmp2526;
        $returnValue2514 = $tmp2525;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2525));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2526));
        $tmp2509 = 2;
        goto $l2507;
        $l2528:;
        return $returnValue2514;
    }
    $l2507:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2518));
    body2518 = NULL;
    switch ($tmp2509) {
        case 2: goto $l2528;
        case 1: goto $l2523;
        case 0: goto $l2516;
    }
    $l2530:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2534;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2535;
    org$pandalanguage$pandac$ASTNode* $returnValue2538;
    org$pandalanguage$pandac$ASTNode* $tmp2539;
    org$pandalanguage$pandac$ASTNode* expr2542 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2543;
    org$pandalanguage$pandac$ASTNode* $tmp2544;
    org$pandalanguage$pandac$ASTNode* $tmp2546;
    org$pandalanguage$pandac$ASTNode* message2549 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2550;
    org$pandalanguage$pandac$ASTNode* $tmp2552;
    org$pandalanguage$pandac$ASTNode* $tmp2553;
    org$pandalanguage$pandac$ASTNode* $tmp2554;
    org$pandalanguage$pandac$ASTNode* $tmp2556;
    org$pandalanguage$pandac$ASTNode* $tmp2559;
    org$pandalanguage$pandac$ASTNode* $tmp2560;
    org$pandalanguage$pandac$ASTNode* $tmp2561;
    org$pandalanguage$pandac$ASTNode* $tmp2562;
    int $tmp2533;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2535, ((panda$core$Int64) { 44 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2537 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2535, &$s2536);
        start2534 = $tmp2537;
        if (((panda$core$Bit) { !start2534.nonnull }).value) {
        {
            $tmp2539 = NULL;
            $returnValue2538 = $tmp2539;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2539));
            $tmp2533 = 0;
            goto $l2531;
            $l2540:;
            return $returnValue2538;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2545 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2544 = $tmp2545;
        $tmp2543 = $tmp2544;
        expr2542 = $tmp2543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2544));
        if (((panda$core$Bit) { expr2542 == NULL }).value) {
        {
            $tmp2546 = NULL;
            $returnValue2538 = $tmp2546;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2546));
            $tmp2533 = 1;
            goto $l2531;
            $l2547:;
            return $returnValue2538;
        }
        }
        memset(&message2549, 0, sizeof(message2549));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2550, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2551 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2550);
        if (((panda$core$Bit) { $tmp2551.nonnull }).value) {
        {
            {
                $tmp2552 = message2549;
                org$pandalanguage$pandac$ASTNode* $tmp2555 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2554 = $tmp2555;
                $tmp2553 = $tmp2554;
                message2549 = $tmp2553;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2553));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2554));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2552));
            }
            if (((panda$core$Bit) { message2549 == NULL }).value) {
            {
                $tmp2556 = NULL;
                $returnValue2538 = $tmp2556;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2556));
                $tmp2533 = 2;
                goto $l2531;
                $l2557:;
                return $returnValue2538;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2559 = message2549;
                $tmp2560 = NULL;
                message2549 = $tmp2560;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2560));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2559));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2563 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2563, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start2534.value).position, expr2542, message2549);
        $tmp2562 = $tmp2563;
        $tmp2561 = $tmp2562;
        $returnValue2538 = $tmp2561;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2561));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2562));
        $tmp2533 = 3;
        goto $l2531;
        $l2564:;
        return $returnValue2538;
    }
    $l2531:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message2549));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2542));
    expr2542 = NULL;
    switch ($tmp2533) {
        case 3: goto $l2564;
        case 2: goto $l2557;
        case 1: goto $l2547;
        case 0: goto $l2540;
    }
    $l2566:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2573;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2574;
    org$pandalanguage$pandac$ASTNode* $returnValue2577;
    org$pandalanguage$pandac$ASTNode* $tmp2578;
    panda$collections$Array* expressions2582 = NULL;
    panda$collections$Array* $tmp2583;
    panda$collections$Array* $tmp2584;
    org$pandalanguage$pandac$ASTNode* expr2586 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2587;
    org$pandalanguage$pandac$ASTNode* $tmp2588;
    org$pandalanguage$pandac$ASTNode* $tmp2590;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2597;
    org$pandalanguage$pandac$ASTNode* $tmp2599;
    org$pandalanguage$pandac$ASTNode* $tmp2600;
    org$pandalanguage$pandac$ASTNode* $tmp2601;
    org$pandalanguage$pandac$ASTNode* $tmp2603;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2607;
    org$pandalanguage$pandac$ASTNode* $tmp2610;
    panda$collections$Array* statements2614 = NULL;
    panda$collections$Array* $tmp2615;
    panda$collections$Array* $tmp2616;
    org$pandalanguage$pandac$parser$Token$Kind $match$1360_132620;
    org$pandalanguage$pandac$ASTNode* stmt2643 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2644;
    org$pandalanguage$pandac$ASTNode* $tmp2645;
    org$pandalanguage$pandac$ASTNode* $tmp2647;
    org$pandalanguage$pandac$ASTNode* stmt2657 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2658;
    org$pandalanguage$pandac$ASTNode* $tmp2659;
    org$pandalanguage$pandac$ASTNode* $tmp2661;
    org$pandalanguage$pandac$ASTNode* $tmp2667;
    org$pandalanguage$pandac$ASTNode* $tmp2668;
    panda$collections$ImmutableArray* $tmp2670;
    panda$collections$ImmutableArray* $tmp2672;
    int $tmp2569;
    {
        PANDA_ASSERT(self->allowLambdas.value);
        int $tmp2572;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2574, ((panda$core$Int64) { 39 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2576 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2574, &$s2575);
            start2573 = $tmp2576;
            if (((panda$core$Bit) { !start2573.nonnull }).value) {
            {
                $tmp2578 = NULL;
                $returnValue2577 = $tmp2578;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2578));
                $tmp2572 = 0;
                goto $l2570;
                $l2579:;
                $tmp2569 = 0;
                goto $l2567;
                $l2580:;
                return $returnValue2577;
            }
            }
            self->allowLambdas = ((panda$core$Bit) { false });
            panda$collections$Array* $tmp2585 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2585);
            $tmp2584 = $tmp2585;
            $tmp2583 = $tmp2584;
            expressions2582 = $tmp2583;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2583));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2584));
            org$pandalanguage$pandac$ASTNode* $tmp2589 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2588 = $tmp2589;
            $tmp2587 = $tmp2588;
            expr2586 = $tmp2587;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2587));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2588));
            if (((panda$core$Bit) { expr2586 == NULL }).value) {
            {
                self->allowLambdas = ((panda$core$Bit) { true });
                $tmp2590 = NULL;
                $returnValue2577 = $tmp2590;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2590));
                $tmp2572 = 1;
                goto $l2570;
                $l2591:;
                $tmp2569 = 1;
                goto $l2567;
                $l2592:;
                return $returnValue2577;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions2582, ((panda$core$Object*) expr2586));
            $l2594:;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2597, ((panda$core$Int64) { 105 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2598 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2597);
            bool $tmp2596 = ((panda$core$Bit) { $tmp2598.nonnull }).value;
            if (!$tmp2596) goto $l2595;
            {
                {
                    $tmp2599 = expr2586;
                    org$pandalanguage$pandac$ASTNode* $tmp2602 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2601 = $tmp2602;
                    $tmp2600 = $tmp2601;
                    expr2586 = $tmp2600;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2600));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2601));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2599));
                }
                if (((panda$core$Bit) { expr2586 == NULL }).value) {
                {
                    self->allowLambdas = ((panda$core$Bit) { true });
                    $tmp2603 = NULL;
                    $returnValue2577 = $tmp2603;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2603));
                    $tmp2572 = 2;
                    goto $l2570;
                    $l2604:;
                    $tmp2569 = 2;
                    goto $l2567;
                    $l2605:;
                    return $returnValue2577;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(expressions2582, ((panda$core$Object*) expr2586));
            }
            goto $l2594;
            $l2595:;
            self->allowLambdas = ((panda$core$Bit) { true });
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2607, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2609 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2607, &$s2608);
            if (((panda$core$Bit) { !$tmp2609.nonnull }).value) {
            {
                $tmp2610 = NULL;
                $returnValue2577 = $tmp2610;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2610));
                $tmp2572 = 3;
                goto $l2570;
                $l2611:;
                $tmp2569 = 3;
                goto $l2567;
                $l2612:;
                return $returnValue2577;
            }
            }
            panda$collections$Array* $tmp2617 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2617);
            $tmp2616 = $tmp2617;
            $tmp2615 = $tmp2616;
            statements2614 = $tmp2615;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2615));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2616));
            $l2618:;
            while (true) {
            {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2621 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    $match$1360_132620 = $tmp2621.kind;
                    panda$core$Bit $tmp2624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1360_132620.$rawValue, ((panda$core$Int64) { 39 }));
                    bool $tmp2623 = $tmp2624.value;
                    if ($tmp2623) goto $l2625;
                    panda$core$Bit $tmp2626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1360_132620.$rawValue, ((panda$core$Int64) { 40 }));
                    $tmp2623 = $tmp2626.value;
                    $l2625:;
                    panda$core$Bit $tmp2627 = { $tmp2623 };
                    bool $tmp2622 = $tmp2627.value;
                    if ($tmp2622) goto $l2628;
                    panda$core$Bit $tmp2629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1360_132620.$rawValue, ((panda$core$Int64) { 100 }));
                    $tmp2622 = $tmp2629.value;
                    $l2628:;
                    panda$core$Bit $tmp2630 = { $tmp2622 };
                    if ($tmp2630.value) {
                    {
                        goto $l2619;
                    }
                    }
                    else {
                    panda$core$Bit $tmp2633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1360_132620.$rawValue, ((panda$core$Int64) { 28 }));
                    bool $tmp2632 = $tmp2633.value;
                    if ($tmp2632) goto $l2634;
                    panda$core$Bit $tmp2635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1360_132620.$rawValue, ((panda$core$Int64) { 29 }));
                    $tmp2632 = $tmp2635.value;
                    $l2634:;
                    panda$core$Bit $tmp2636 = { $tmp2632 };
                    bool $tmp2631 = $tmp2636.value;
                    if ($tmp2631) goto $l2637;
                    panda$core$Bit $tmp2638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1360_132620.$rawValue, ((panda$core$Int64) { 27 }));
                    $tmp2631 = $tmp2638.value;
                    $l2637:;
                    panda$core$Bit $tmp2639 = { $tmp2631 };
                    if ($tmp2639.value) {
                    {
                        int $tmp2642;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2646 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2645 = $tmp2646;
                            $tmp2644 = $tmp2645;
                            stmt2643 = $tmp2644;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2644));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2645));
                            if (((panda$core$Bit) { stmt2643 == NULL }).value) {
                            {
                                $tmp2647 = NULL;
                                $returnValue2577 = $tmp2647;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2647));
                                $tmp2642 = 0;
                                goto $l2640;
                                $l2648:;
                                $tmp2572 = 4;
                                goto $l2570;
                                $l2649:;
                                $tmp2569 = 4;
                                goto $l2567;
                                $l2650:;
                                return $returnValue2577;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements2614, ((panda$core$Object*) stmt2643));
                            $tmp2642 = 1;
                            goto $l2640;
                            $l2652:;
                            goto $l2619;
                        }
                        $l2640:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2643));
                        stmt2643 = NULL;
                        switch ($tmp2642) {
                            case 1: goto $l2652;
                            case 0: goto $l2648;
                        }
                        $l2653:;
                    }
                    }
                    else {
                    {
                        {
                            int $tmp2656;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp2660 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp2659 = $tmp2660;
                                $tmp2658 = $tmp2659;
                                stmt2657 = $tmp2658;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2658));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2659));
                                if (((panda$core$Bit) { stmt2657 == NULL }).value) {
                                {
                                    $tmp2661 = NULL;
                                    $returnValue2577 = $tmp2661;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2661));
                                    $tmp2656 = 0;
                                    goto $l2654;
                                    $l2662:;
                                    $tmp2572 = 5;
                                    goto $l2570;
                                    $l2663:;
                                    $tmp2569 = 5;
                                    goto $l2567;
                                    $l2664:;
                                    return $returnValue2577;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(statements2614, ((panda$core$Object*) stmt2657));
                            }
                            $tmp2656 = -1;
                            goto $l2654;
                            $l2654:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2657));
                            stmt2657 = NULL;
                            switch ($tmp2656) {
                                case 0: goto $l2662;
                                case -1: goto $l2666;
                            }
                            $l2666:;
                        }
                    }
                    }
                    }
                }
            }
            }
            $l2619:;
            org$pandalanguage$pandac$ASTNode* $tmp2669 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp2671 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions2582);
            $tmp2670 = $tmp2671;
            panda$collections$ImmutableArray* $tmp2673 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements2614);
            $tmp2672 = $tmp2673;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2669, ((panda$core$Int64) { 48 }), ((org$pandalanguage$pandac$parser$Token) start2573.value).position, $tmp2670, $tmp2672);
            $tmp2668 = $tmp2669;
            $tmp2667 = $tmp2668;
            $returnValue2577 = $tmp2667;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2667));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2668));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2672));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2670));
            $tmp2572 = 6;
            goto $l2570;
            $l2674:;
            $tmp2569 = 6;
            goto $l2567;
            $l2675:;
            return $returnValue2577;
        }
        $l2570:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2614));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2586));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions2582));
        expressions2582 = NULL;
        expr2586 = NULL;
        statements2614 = NULL;
        switch ($tmp2572) {
            case 5: goto $l2663;
            case 4: goto $l2649;
            case 6: goto $l2674;
            case 2: goto $l2604;
            case 1: goto $l2591;
            case 3: goto $l2611;
            case 0: goto $l2579;
        }
        $l2677:;
    }
    $tmp2569 = -1;
    goto $l2567;
    $l2567:;
    PANDA_ASSERT(self->allowLambdas.value);
    switch ($tmp2569) {
        case 3: goto $l2612;
        case 4: goto $l2650;
        case 6: goto $l2675;
        case 5: goto $l2664;
        case -1: goto $l2678;
        case 1: goto $l2592;
        case 0: goto $l2580;
        case 2: goto $l2605;
    }
    $l2678:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2682;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2683;
    org$pandalanguage$pandac$ASTNode* $returnValue2686;
    org$pandalanguage$pandac$ASTNode* $tmp2687;
    org$pandalanguage$pandac$ASTNode* expr2690 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2691;
    org$pandalanguage$pandac$ASTNode* $tmp2692;
    org$pandalanguage$pandac$ASTNode* $tmp2694;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2697;
    org$pandalanguage$pandac$ASTNode* $tmp2700;
    panda$collections$Array* whens2703 = NULL;
    panda$collections$Array* $tmp2704;
    panda$collections$Array* $tmp2705;
    panda$collections$Array* other2707 = NULL;
    panda$collections$Array* $tmp2708;
    org$pandalanguage$pandac$parser$Token token2711;
    org$pandalanguage$pandac$parser$Token$Kind $match$1401_132713;
    org$pandalanguage$pandac$ASTNode* w2719 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2720;
    org$pandalanguage$pandac$ASTNode* $tmp2721;
    org$pandalanguage$pandac$ASTNode* $tmp2723;
    org$pandalanguage$pandac$parser$Token o2729;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2731;
    org$pandalanguage$pandac$ASTNode* $tmp2734;
    panda$collections$Array* $tmp2737;
    panda$collections$Array* $tmp2738;
    panda$collections$Array* $tmp2739;
    org$pandalanguage$pandac$parser$Token$Kind $match$1417_252743;
    org$pandalanguage$pandac$ASTNode* stmt2758 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2759;
    org$pandalanguage$pandac$ASTNode* $tmp2760;
    org$pandalanguage$pandac$ASTNode* $tmp2762;
    org$pandalanguage$pandac$ASTNode* stmt2771 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2772;
    org$pandalanguage$pandac$ASTNode* $tmp2773;
    org$pandalanguage$pandac$ASTNode* $tmp2775;
    panda$core$String* $tmp2780;
    panda$core$String* $tmp2782;
    panda$core$String* $tmp2783;
    panda$core$String* $tmp2785;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2791;
    org$pandalanguage$pandac$ASTNode* $tmp2794;
    org$pandalanguage$pandac$ASTNode* $tmp2797;
    org$pandalanguage$pandac$ASTNode* $tmp2798;
    panda$collections$ImmutableArray* $tmp2800;
    panda$collections$ImmutableArray* $tmp2802;
    org$pandalanguage$pandac$ASTNode* $tmp2806;
    org$pandalanguage$pandac$ASTNode* $tmp2807;
    panda$collections$ImmutableArray* $tmp2809;
    int $tmp2681;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2683, ((panda$core$Int64) { 38 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2685 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2683, &$s2684);
        start2682 = $tmp2685;
        if (((panda$core$Bit) { !start2682.nonnull }).value) {
        {
            $tmp2687 = NULL;
            $returnValue2686 = $tmp2687;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2687));
            $tmp2681 = 0;
            goto $l2679;
            $l2688:;
            return $returnValue2686;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2693 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2692 = $tmp2693;
        $tmp2691 = $tmp2692;
        expr2690 = $tmp2691;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2691));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2692));
        if (((panda$core$Bit) { expr2690 == NULL }).value) {
        {
            $tmp2694 = NULL;
            $returnValue2686 = $tmp2694;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2694));
            $tmp2681 = 1;
            goto $l2679;
            $l2695:;
            return $returnValue2686;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2697, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2699 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2697, &$s2698);
        if (((panda$core$Bit) { !$tmp2699.nonnull }).value) {
        {
            $tmp2700 = NULL;
            $returnValue2686 = $tmp2700;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2700));
            $tmp2681 = 2;
            goto $l2679;
            $l2701:;
            return $returnValue2686;
        }
        }
        panda$collections$Array* $tmp2706 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2706);
        $tmp2705 = $tmp2706;
        $tmp2704 = $tmp2705;
        whens2703 = $tmp2704;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2704));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2705));
        $tmp2708 = NULL;
        other2707 = $tmp2708;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2708));
        $l2709:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2712 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token2711 = $tmp2712;
            {
                $match$1401_132713 = token2711.kind;
                panda$core$Bit $tmp2714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1401_132713.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2714.value) {
                {
                    goto $l2710;
                }
                }
                else {
                panda$core$Bit $tmp2715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1401_132713.$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp2715.value) {
                {
                    int $tmp2718;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2722 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2721 = $tmp2722;
                        $tmp2720 = $tmp2721;
                        w2719 = $tmp2720;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2720));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2721));
                        if (((panda$core$Bit) { w2719 == NULL }).value) {
                        {
                            $tmp2723 = NULL;
                            $returnValue2686 = $tmp2723;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2723));
                            $tmp2718 = 0;
                            goto $l2716;
                            $l2724:;
                            $tmp2681 = 3;
                            goto $l2679;
                            $l2725:;
                            return $returnValue2686;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens2703, ((panda$core$Object*) w2719));
                    }
                    $tmp2718 = -1;
                    goto $l2716;
                    $l2716:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2719));
                    w2719 = NULL;
                    switch ($tmp2718) {
                        case 0: goto $l2724;
                        case -1: goto $l2727;
                    }
                    $l2727:;
                }
                }
                else {
                panda$core$Bit $tmp2728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1401_132713.$rawValue, ((panda$core$Int64) { 40 }));
                if ($tmp2728.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2730 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o2729 = $tmp2730;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2731, ((panda$core$Int64) { 95 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2733 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2731, &$s2732);
                    if (((panda$core$Bit) { !$tmp2733.nonnull }).value) {
                    {
                        $tmp2734 = NULL;
                        $returnValue2686 = $tmp2734;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2734));
                        $tmp2681 = 4;
                        goto $l2679;
                        $l2735:;
                        return $returnValue2686;
                    }
                    }
                    {
                        $tmp2737 = other2707;
                        panda$collections$Array* $tmp2740 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2740);
                        $tmp2739 = $tmp2740;
                        $tmp2738 = $tmp2739;
                        other2707 = $tmp2738;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2738));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2739));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2737));
                    }
                    $l2741:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp2744 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1417_252743 = $tmp2744.kind;
                            panda$core$Bit $tmp2745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_252743.$rawValue, ((panda$core$Int64) { 100 }));
                            if ($tmp2745.value) {
                            {
                                goto $l2742;
                            }
                            }
                            else {
                            panda$core$Bit $tmp2748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_252743.$rawValue, ((panda$core$Int64) { 28 }));
                            bool $tmp2747 = $tmp2748.value;
                            if ($tmp2747) goto $l2749;
                            panda$core$Bit $tmp2750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_252743.$rawValue, ((panda$core$Int64) { 29 }));
                            $tmp2747 = $tmp2750.value;
                            $l2749:;
                            panda$core$Bit $tmp2751 = { $tmp2747 };
                            bool $tmp2746 = $tmp2751.value;
                            if ($tmp2746) goto $l2752;
                            panda$core$Bit $tmp2753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_252743.$rawValue, ((panda$core$Int64) { 27 }));
                            $tmp2746 = $tmp2753.value;
                            $l2752:;
                            panda$core$Bit $tmp2754 = { $tmp2746 };
                            if ($tmp2754.value) {
                            {
                                int $tmp2757;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2761 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2760 = $tmp2761;
                                    $tmp2759 = $tmp2760;
                                    stmt2758 = $tmp2759;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2759));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2760));
                                    if (((panda$core$Bit) { stmt2758 == NULL }).value) {
                                    {
                                        $tmp2762 = NULL;
                                        $returnValue2686 = $tmp2762;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2762));
                                        $tmp2757 = 0;
                                        goto $l2755;
                                        $l2763:;
                                        $tmp2681 = 5;
                                        goto $l2679;
                                        $l2764:;
                                        return $returnValue2686;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2707, ((panda$core$Object*) stmt2758));
                                    $tmp2757 = 1;
                                    goto $l2755;
                                    $l2766:;
                                    goto $l2742;
                                }
                                $l2755:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2758));
                                stmt2758 = NULL;
                                switch ($tmp2757) {
                                    case 0: goto $l2763;
                                    case 1: goto $l2766;
                                }
                                $l2767:;
                            }
                            }
                            else {
                            {
                                int $tmp2770;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2774 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2773 = $tmp2774;
                                    $tmp2772 = $tmp2773;
                                    stmt2771 = $tmp2772;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2772));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2773));
                                    if (((panda$core$Bit) { stmt2771 == NULL }).value) {
                                    {
                                        $tmp2775 = NULL;
                                        $returnValue2686 = $tmp2775;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2775));
                                        $tmp2770 = 0;
                                        goto $l2768;
                                        $l2776:;
                                        $tmp2681 = 6;
                                        goto $l2679;
                                        $l2777:;
                                        return $returnValue2686;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2707, ((panda$core$Object*) stmt2771));
                                }
                                $tmp2770 = -1;
                                goto $l2768;
                                $l2768:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2771));
                                stmt2771 = NULL;
                                switch ($tmp2770) {
                                    case 0: goto $l2776;
                                    case -1: goto $l2779;
                                }
                                $l2779:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l2742:;
                    goto $l2710;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp2786 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token2711);
                    $tmp2785 = $tmp2786;
                    panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2784, $tmp2785);
                    $tmp2783 = $tmp2787;
                    panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2783, &$s2788);
                    $tmp2782 = $tmp2789;
                    panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2781, $tmp2782);
                    $tmp2780 = $tmp2790;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token2711, $tmp2780);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2780));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2782));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2783));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2785));
                }
                }
                }
                }
            }
        }
        }
        $l2710:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2791, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2793 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2791, &$s2792);
        if (((panda$core$Bit) { !$tmp2793.nonnull }).value) {
        {
            $tmp2794 = NULL;
            $returnValue2686 = $tmp2794;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2794));
            $tmp2681 = 7;
            goto $l2679;
            $l2795:;
            return $returnValue2686;
        }
        }
        if (((panda$core$Bit) { other2707 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2799 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp2801 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2703);
            $tmp2800 = $tmp2801;
            panda$collections$ImmutableArray* $tmp2803 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other2707);
            $tmp2802 = $tmp2803;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2799, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2682.value).position, expr2690, $tmp2800, $tmp2802);
            $tmp2798 = $tmp2799;
            $tmp2797 = $tmp2798;
            $returnValue2686 = $tmp2797;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2797));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2798));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2802));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2800));
            $tmp2681 = 8;
            goto $l2679;
            $l2804:;
            return $returnValue2686;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2808 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2810 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2703);
        $tmp2809 = $tmp2810;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2808, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2682.value).position, expr2690, $tmp2809, NULL);
        $tmp2807 = $tmp2808;
        $tmp2806 = $tmp2807;
        $returnValue2686 = $tmp2806;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2806));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2807));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2809));
        $tmp2681 = 9;
        goto $l2679;
        $l2811:;
        return $returnValue2686;
    }
    $l2679:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other2707));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens2703));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2690));
    expr2690 = NULL;
    whens2703 = NULL;
    switch ($tmp2681) {
        case 7: goto $l2795;
        case 1: goto $l2695;
        case 9: goto $l2811;
        case 8: goto $l2804;
        case 5: goto $l2764;
        case 6: goto $l2777;
        case 2: goto $l2701;
        case 3: goto $l2725;
        case 0: goto $l2688;
        case 4: goto $l2735;
    }
    $l2813:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2817;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2818;
    panda$collections$ImmutableArray* $returnValue2821;
    panda$collections$ImmutableArray* $tmp2822;
    panda$collections$Array* result2825 = NULL;
    panda$collections$Array* $tmp2826;
    panda$collections$Array* $tmp2827;
    org$pandalanguage$pandac$parser$Token$Kind $match$1461_132831;
    org$pandalanguage$pandac$ASTNode* stmt2846 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2847;
    org$pandalanguage$pandac$ASTNode* $tmp2848;
    panda$collections$ImmutableArray* $tmp2850;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2854;
    panda$collections$ImmutableArray* $tmp2857;
    org$pandalanguage$pandac$ASTNode* stmt2866 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2867;
    org$pandalanguage$pandac$ASTNode* $tmp2868;
    panda$collections$ImmutableArray* $tmp2870;
    panda$collections$ImmutableArray* $tmp2875;
    panda$collections$ImmutableArray* $tmp2876;
    int $tmp2816;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2818, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2820 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2818, &$s2819);
        start2817 = $tmp2820;
        if (((panda$core$Bit) { !start2817.nonnull }).value) {
        {
            $tmp2822 = NULL;
            $returnValue2821 = $tmp2822;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2822));
            $tmp2816 = 0;
            goto $l2814;
            $l2823:;
            return $returnValue2821;
        }
        }
        panda$collections$Array* $tmp2828 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2828);
        $tmp2827 = $tmp2828;
        $tmp2826 = $tmp2827;
        result2825 = $tmp2826;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2826));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2827));
        $l2829:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2832 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1461_132831 = $tmp2832.kind;
                panda$core$Bit $tmp2833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1461_132831.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2833.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l2830;
                }
                }
                else {
                panda$core$Bit $tmp2836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1461_132831.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2835 = $tmp2836.value;
                if ($tmp2835) goto $l2837;
                panda$core$Bit $tmp2838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1461_132831.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2835 = $tmp2838.value;
                $l2837:;
                panda$core$Bit $tmp2839 = { $tmp2835 };
                bool $tmp2834 = $tmp2839.value;
                if ($tmp2834) goto $l2840;
                panda$core$Bit $tmp2841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1461_132831.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2834 = $tmp2841.value;
                $l2840:;
                panda$core$Bit $tmp2842 = { $tmp2834 };
                if ($tmp2842.value) {
                {
                    int $tmp2845;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2849 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2848 = $tmp2849;
                        $tmp2847 = $tmp2848;
                        stmt2846 = $tmp2847;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2847));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2848));
                        if (((panda$core$Bit) { stmt2846 == NULL }).value) {
                        {
                            $tmp2850 = NULL;
                            $returnValue2821 = $tmp2850;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2850));
                            $tmp2845 = 0;
                            goto $l2843;
                            $l2851:;
                            $tmp2816 = 1;
                            goto $l2814;
                            $l2852:;
                            return $returnValue2821;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2854, ((panda$core$Int64) { 100 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2856 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2854, &$s2855);
                        if (((panda$core$Bit) { !$tmp2856.nonnull }).value) {
                        {
                            $tmp2857 = NULL;
                            $returnValue2821 = $tmp2857;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2857));
                            $tmp2845 = 1;
                            goto $l2843;
                            $l2858:;
                            $tmp2816 = 2;
                            goto $l2814;
                            $l2859:;
                            return $returnValue2821;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2825, ((panda$core$Object*) stmt2846));
                        $tmp2845 = 2;
                        goto $l2843;
                        $l2861:;
                        goto $l2830;
                    }
                    $l2843:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2846));
                    stmt2846 = NULL;
                    switch ($tmp2845) {
                        case 1: goto $l2858;
                        case 2: goto $l2861;
                        case 0: goto $l2851;
                    }
                    $l2862:;
                }
                }
                else {
                {
                    int $tmp2865;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2869 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2868 = $tmp2869;
                        $tmp2867 = $tmp2868;
                        stmt2866 = $tmp2867;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2867));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2868));
                        if (((panda$core$Bit) { stmt2866 == NULL }).value) {
                        {
                            $tmp2870 = NULL;
                            $returnValue2821 = $tmp2870;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2870));
                            $tmp2865 = 0;
                            goto $l2863;
                            $l2871:;
                            $tmp2816 = 3;
                            goto $l2814;
                            $l2872:;
                            return $returnValue2821;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2825, ((panda$core$Object*) stmt2866));
                    }
                    $tmp2865 = -1;
                    goto $l2863;
                    $l2863:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2866));
                    stmt2866 = NULL;
                    switch ($tmp2865) {
                        case 0: goto $l2871;
                        case -1: goto $l2874;
                    }
                    $l2874:;
                }
                }
                }
            }
        }
        }
        $l2830:;
        panda$collections$ImmutableArray* $tmp2877 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result2825);
        $tmp2876 = $tmp2877;
        $tmp2875 = $tmp2876;
        $returnValue2821 = $tmp2875;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2875));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2876));
        $tmp2816 = 4;
        goto $l2814;
        $l2878:;
        return $returnValue2821;
    }
    $l2814:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2825));
    result2825 = NULL;
    switch ($tmp2816) {
        case 1: goto $l2852;
        case 4: goto $l2878;
        case 3: goto $l2872;
        case 2: goto $l2859;
        case 0: goto $l2823;
    }
    $l2880:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements2884 = NULL;
    panda$collections$ImmutableArray* $tmp2885;
    panda$collections$ImmutableArray* $tmp2886;
    org$pandalanguage$pandac$ASTNode* $returnValue2888;
    org$pandalanguage$pandac$ASTNode* $tmp2889;
    org$pandalanguage$pandac$ASTNode* $tmp2892;
    org$pandalanguage$pandac$ASTNode* $tmp2893;
    org$pandalanguage$pandac$Position $tmp2895;
    int $tmp2883;
    {
        panda$collections$ImmutableArray* $tmp2887 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2886 = $tmp2887;
        $tmp2885 = $tmp2886;
        statements2884 = $tmp2885;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2885));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2886));
        if (((panda$core$Bit) { statements2884 == NULL }).value) {
        {
            $tmp2889 = NULL;
            $returnValue2888 = $tmp2889;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2889));
            $tmp2883 = 0;
            goto $l2881;
            $l2890:;
            return $returnValue2888;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2894 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position$init(&$tmp2895);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2894, ((panda$core$Int64) { 6 }), $tmp2895, statements2884);
        $tmp2893 = $tmp2894;
        $tmp2892 = $tmp2893;
        $returnValue2888 = $tmp2892;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2892));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2893));
        $tmp2883 = 1;
        goto $l2881;
        $l2896:;
        return $returnValue2888;
    }
    $l2881:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2884));
    statements2884 = NULL;
    switch ($tmp2883) {
        case 1: goto $l2896;
        case 0: goto $l2890;
    }
    $l2898:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start2902 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2903;
    org$pandalanguage$pandac$ASTNode* $tmp2904;
    org$pandalanguage$pandac$ASTNode* $returnValue2906;
    org$pandalanguage$pandac$ASTNode* $tmp2907;
    org$pandalanguage$pandac$parser$Token$Kind $match$1505_92910;
    org$pandalanguage$pandac$parser$Token op2976;
    org$pandalanguage$pandac$ASTNode* rvalue2978 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2979;
    org$pandalanguage$pandac$ASTNode* $tmp2980;
    org$pandalanguage$pandac$ASTNode* $tmp2982;
    org$pandalanguage$pandac$ASTNode* $tmp2986;
    org$pandalanguage$pandac$ASTNode* $tmp2987;
    org$pandalanguage$pandac$parser$Token op3001;
    org$pandalanguage$pandac$ASTNode* rvalue3003 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3004;
    org$pandalanguage$pandac$ASTNode* $tmp3005;
    org$pandalanguage$pandac$ASTNode* $tmp3007;
    org$pandalanguage$pandac$ASTNode* $tmp3011;
    org$pandalanguage$pandac$ASTNode* $tmp3012;
    org$pandalanguage$pandac$ASTNode* $tmp3020;
    int $tmp2901;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2905 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2904 = $tmp2905;
        $tmp2903 = $tmp2904;
        start2902 = $tmp2903;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2903));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2904));
        if (((panda$core$Bit) { start2902 == NULL }).value) {
        {
            $tmp2907 = NULL;
            $returnValue2906 = $tmp2907;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2907));
            $tmp2901 = 0;
            goto $l2899;
            $l2908:;
            return $returnValue2906;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp2911 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1505_92910 = $tmp2911.kind;
            panda$core$Bit $tmp2927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 73 }));
            bool $tmp2926 = $tmp2927.value;
            if ($tmp2926) goto $l2928;
            panda$core$Bit $tmp2929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 74 }));
            $tmp2926 = $tmp2929.value;
            $l2928:;
            panda$core$Bit $tmp2930 = { $tmp2926 };
            bool $tmp2925 = $tmp2930.value;
            if ($tmp2925) goto $l2931;
            panda$core$Bit $tmp2932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 75 }));
            $tmp2925 = $tmp2932.value;
            $l2931:;
            panda$core$Bit $tmp2933 = { $tmp2925 };
            bool $tmp2924 = $tmp2933.value;
            if ($tmp2924) goto $l2934;
            panda$core$Bit $tmp2935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 76 }));
            $tmp2924 = $tmp2935.value;
            $l2934:;
            panda$core$Bit $tmp2936 = { $tmp2924 };
            bool $tmp2923 = $tmp2936.value;
            if ($tmp2923) goto $l2937;
            panda$core$Bit $tmp2938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 77 }));
            $tmp2923 = $tmp2938.value;
            $l2937:;
            panda$core$Bit $tmp2939 = { $tmp2923 };
            bool $tmp2922 = $tmp2939.value;
            if ($tmp2922) goto $l2940;
            panda$core$Bit $tmp2941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 78 }));
            $tmp2922 = $tmp2941.value;
            $l2940:;
            panda$core$Bit $tmp2942 = { $tmp2922 };
            bool $tmp2921 = $tmp2942.value;
            if ($tmp2921) goto $l2943;
            panda$core$Bit $tmp2944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 79 }));
            $tmp2921 = $tmp2944.value;
            $l2943:;
            panda$core$Bit $tmp2945 = { $tmp2921 };
            bool $tmp2920 = $tmp2945.value;
            if ($tmp2920) goto $l2946;
            panda$core$Bit $tmp2947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 80 }));
            $tmp2920 = $tmp2947.value;
            $l2946:;
            panda$core$Bit $tmp2948 = { $tmp2920 };
            bool $tmp2919 = $tmp2948.value;
            if ($tmp2919) goto $l2949;
            panda$core$Bit $tmp2950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 81 }));
            $tmp2919 = $tmp2950.value;
            $l2949:;
            panda$core$Bit $tmp2951 = { $tmp2919 };
            bool $tmp2918 = $tmp2951.value;
            if ($tmp2918) goto $l2952;
            panda$core$Bit $tmp2953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 82 }));
            $tmp2918 = $tmp2953.value;
            $l2952:;
            panda$core$Bit $tmp2954 = { $tmp2918 };
            bool $tmp2917 = $tmp2954.value;
            if ($tmp2917) goto $l2955;
            panda$core$Bit $tmp2956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 83 }));
            $tmp2917 = $tmp2956.value;
            $l2955:;
            panda$core$Bit $tmp2957 = { $tmp2917 };
            bool $tmp2916 = $tmp2957.value;
            if ($tmp2916) goto $l2958;
            panda$core$Bit $tmp2959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 84 }));
            $tmp2916 = $tmp2959.value;
            $l2958:;
            panda$core$Bit $tmp2960 = { $tmp2916 };
            bool $tmp2915 = $tmp2960.value;
            if ($tmp2915) goto $l2961;
            panda$core$Bit $tmp2962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 85 }));
            $tmp2915 = $tmp2962.value;
            $l2961:;
            panda$core$Bit $tmp2963 = { $tmp2915 };
            bool $tmp2914 = $tmp2963.value;
            if ($tmp2914) goto $l2964;
            panda$core$Bit $tmp2965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 86 }));
            $tmp2914 = $tmp2965.value;
            $l2964:;
            panda$core$Bit $tmp2966 = { $tmp2914 };
            bool $tmp2913 = $tmp2966.value;
            if ($tmp2913) goto $l2967;
            panda$core$Bit $tmp2968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 87 }));
            $tmp2913 = $tmp2968.value;
            $l2967:;
            panda$core$Bit $tmp2969 = { $tmp2913 };
            bool $tmp2912 = $tmp2969.value;
            if ($tmp2912) goto $l2970;
            panda$core$Bit $tmp2971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 88 }));
            $tmp2912 = $tmp2971.value;
            $l2970:;
            panda$core$Bit $tmp2972 = { $tmp2912 };
            if ($tmp2972.value) {
            {
                int $tmp2975;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2977 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2976 = $tmp2977;
                    org$pandalanguage$pandac$ASTNode* $tmp2981 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2980 = $tmp2981;
                    $tmp2979 = $tmp2980;
                    rvalue2978 = $tmp2979;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2979));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2980));
                    if (((panda$core$Bit) { rvalue2978 == NULL }).value) {
                    {
                        $tmp2982 = NULL;
                        $returnValue2906 = $tmp2982;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2982));
                        $tmp2975 = 0;
                        goto $l2973;
                        $l2983:;
                        $tmp2901 = 1;
                        goto $l2899;
                        $l2984:;
                        return $returnValue2906;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2988 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2990 = (($fn2989) start2902->$class->vtable[2])(start2902);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2988, ((panda$core$Int64) { 4 }), $tmp2990, start2902, op2976.kind, rvalue2978);
                    $tmp2987 = $tmp2988;
                    $tmp2986 = $tmp2987;
                    $returnValue2906 = $tmp2986;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2986));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2987));
                    $tmp2975 = 1;
                    goto $l2973;
                    $l2991:;
                    $tmp2901 = 2;
                    goto $l2899;
                    $l2992:;
                    return $returnValue2906;
                }
                $l2973:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2978));
                rvalue2978 = NULL;
                switch ($tmp2975) {
                    case 1: goto $l2991;
                    case 0: goto $l2983;
                }
                $l2994:;
            }
            }
            else {
            panda$core$Bit $tmp2995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1505_92910.$rawValue, ((panda$core$Int64) { 58 }));
            if ($tmp2995.value) {
            {
                int $tmp2998;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2999 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2999, &$s3000);
                    org$pandalanguage$pandac$parser$Token $tmp3002 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3001 = $tmp3002;
                    org$pandalanguage$pandac$ASTNode* $tmp3006 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3005 = $tmp3006;
                    $tmp3004 = $tmp3005;
                    rvalue3003 = $tmp3004;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3004));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3005));
                    if (((panda$core$Bit) { rvalue3003 == NULL }).value) {
                    {
                        $tmp3007 = NULL;
                        $returnValue2906 = $tmp3007;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3007));
                        $tmp2998 = 0;
                        goto $l2996;
                        $l3008:;
                        $tmp2901 = 3;
                        goto $l2899;
                        $l3009:;
                        return $returnValue2906;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3013 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp3015 = (($fn3014) start2902->$class->vtable[2])(start2902);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3013, ((panda$core$Int64) { 4 }), $tmp3015, start2902, op3001.kind, rvalue3003);
                    $tmp3012 = $tmp3013;
                    $tmp3011 = $tmp3012;
                    $returnValue2906 = $tmp3011;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3011));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3012));
                    $tmp2998 = 1;
                    goto $l2996;
                    $l3016:;
                    $tmp2901 = 4;
                    goto $l2899;
                    $l3017:;
                    return $returnValue2906;
                }
                $l2996:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3003));
                rvalue3003 = NULL;
                switch ($tmp2998) {
                    case 1: goto $l3016;
                    case 0: goto $l3008;
                }
                $l3019:;
            }
            }
            else {
            {
                $tmp3020 = start2902;
                $returnValue2906 = $tmp3020;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3020));
                $tmp2901 = 5;
                goto $l2899;
                $l3021:;
                return $returnValue2906;
            }
            }
            }
        }
    }
    $tmp2901 = -1;
    goto $l2899;
    $l2899:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2902));
    start2902 = NULL;
    switch ($tmp2901) {
        case 5: goto $l3021;
        case 3: goto $l3009;
        case 4: goto $l3017;
        case 1: goto $l2984;
        case 2: goto $l2992;
        case 0: goto $l2908;
        case -1: goto $l3023;
    }
    $l3023:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t3027 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3028;
    org$pandalanguage$pandac$ASTNode* $tmp3029;
    org$pandalanguage$pandac$ASTNode* $returnValue3031;
    org$pandalanguage$pandac$ASTNode* $tmp3032;
    org$pandalanguage$pandac$ASTNode* value3035 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3036;
    org$pandalanguage$pandac$ASTNode* $tmp3038;
    org$pandalanguage$pandac$ASTNode* $tmp3039;
    org$pandalanguage$pandac$ASTNode* $tmp3040;
    org$pandalanguage$pandac$ASTNode* $tmp3042;
    org$pandalanguage$pandac$ASTNode* $tmp3049;
    org$pandalanguage$pandac$ASTNode* $tmp3050;
    org$pandalanguage$pandac$ASTNode* $tmp3051;
    org$pandalanguage$pandac$ASTNode* $tmp3053;
    org$pandalanguage$pandac$ASTNode* $tmp3056;
    org$pandalanguage$pandac$ASTNode* $tmp3057;
    org$pandalanguage$pandac$ASTNode* $tmp3058;
    org$pandalanguage$pandac$ASTNode* $tmp3059;
    int $tmp3026;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3030 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3029 = $tmp3030;
        $tmp3028 = $tmp3029;
        t3027 = $tmp3028;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3028));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3029));
        if (((panda$core$Bit) { t3027 == NULL }).value) {
        {
            $tmp3032 = NULL;
            $returnValue3031 = $tmp3032;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3032));
            $tmp3026 = 0;
            goto $l3024;
            $l3033:;
            return $returnValue3031;
        }
        }
        memset(&value3035, 0, sizeof(value3035));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3036, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3037 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3036);
        if (((panda$core$Bit) { $tmp3037.nonnull }).value) {
        {
            {
                $tmp3038 = value3035;
                org$pandalanguage$pandac$ASTNode* $tmp3041 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3040 = $tmp3041;
                $tmp3039 = $tmp3040;
                value3035 = $tmp3039;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3039));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3040));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3038));
            }
            if (((panda$core$Bit) { value3035 == NULL }).value) {
            {
                $tmp3042 = NULL;
                $returnValue3031 = $tmp3042;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3042));
                $tmp3026 = 1;
                goto $l3024;
                $l3043:;
                return $returnValue3031;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp3045 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3045.kind.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp3046.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3047 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3047, &$s3048);
            {
                $tmp3049 = value3035;
                org$pandalanguage$pandac$ASTNode* $tmp3052 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3051 = $tmp3052;
                $tmp3050 = $tmp3051;
                value3035 = $tmp3050;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3050));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3051));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3049));
            }
            if (((panda$core$Bit) { value3035 == NULL }).value) {
            {
                $tmp3053 = NULL;
                $returnValue3031 = $tmp3053;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3053));
                $tmp3026 = 2;
                goto $l3024;
                $l3054:;
                return $returnValue3031;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3056 = value3035;
                $tmp3057 = NULL;
                value3035 = $tmp3057;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3057));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3056));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3060 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp3062 = (($fn3061) t3027->$class->vtable[2])(t3027);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3060, ((panda$core$Int64) { 13 }), $tmp3062, t3027, value3035);
        $tmp3059 = $tmp3060;
        $tmp3058 = $tmp3059;
        $returnValue3031 = $tmp3058;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3058));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3059));
        $tmp3026 = 3;
        goto $l3024;
        $l3063:;
        return $returnValue3031;
    }
    $l3024:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value3035));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3027));
    t3027 = NULL;
    switch ($tmp3026) {
        case 2: goto $l3054;
        case 3: goto $l3063;
        case 1: goto $l3043;
        case 0: goto $l3033;
    }
    $l3065:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3069;
    org$pandalanguage$pandac$Variable$Kind kind3071;
    org$pandalanguage$pandac$parser$Token$Kind $match$1564_93072;
    org$pandalanguage$pandac$Variable$Kind $tmp3074;
    org$pandalanguage$pandac$Variable$Kind $tmp3076;
    org$pandalanguage$pandac$Variable$Kind $tmp3078;
    org$pandalanguage$pandac$Variable$Kind $tmp3080;
    panda$collections$Array* declarations3082 = NULL;
    panda$collections$Array* $tmp3083;
    panda$collections$Array* $tmp3084;
    org$pandalanguage$pandac$ASTNode* decl3086 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3087;
    org$pandalanguage$pandac$ASTNode* $tmp3088;
    org$pandalanguage$pandac$ASTNode* $returnValue3090;
    org$pandalanguage$pandac$ASTNode* $tmp3091;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3097;
    org$pandalanguage$pandac$ASTNode* decl3102 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3103;
    org$pandalanguage$pandac$ASTNode* $tmp3104;
    org$pandalanguage$pandac$ASTNode* $tmp3106;
    org$pandalanguage$pandac$ASTNode* $tmp3111;
    org$pandalanguage$pandac$ASTNode* $tmp3112;
    panda$collections$ImmutableArray* $tmp3114;
    int $tmp3068;
    {
        org$pandalanguage$pandac$parser$Token $tmp3070 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start3069 = $tmp3070;
        memset(&kind3071, 0, sizeof(kind3071));
        {
            $match$1564_93072 = start3069.kind;
            panda$core$Bit $tmp3073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1564_93072.$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp3073.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3074, ((panda$core$Int64) { 0 }));
                kind3071 = $tmp3074;
            }
            }
            else {
            panda$core$Bit $tmp3075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1564_93072.$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp3075.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3076, ((panda$core$Int64) { 1 }));
                kind3071 = $tmp3076;
            }
            }
            else {
            panda$core$Bit $tmp3077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1564_93072.$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp3077.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3078, ((panda$core$Int64) { 3 }));
                kind3071 = $tmp3078;
            }
            }
            else {
            panda$core$Bit $tmp3079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1564_93072.$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp3079.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3080, ((panda$core$Int64) { 2 }));
                kind3071 = $tmp3080;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start3069, &$s3081);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp3085 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3085);
        $tmp3084 = $tmp3085;
        $tmp3083 = $tmp3084;
        declarations3082 = $tmp3083;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3083));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3084));
        org$pandalanguage$pandac$ASTNode* $tmp3089 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3088 = $tmp3089;
        $tmp3087 = $tmp3088;
        decl3086 = $tmp3087;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3087));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3088));
        if (((panda$core$Bit) { decl3086 == NULL }).value) {
        {
            $tmp3091 = NULL;
            $returnValue3090 = $tmp3091;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3091));
            $tmp3068 = 0;
            goto $l3066;
            $l3092:;
            return $returnValue3090;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations3082, ((panda$core$Object*) decl3086));
        $l3094:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3097, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3098 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3097);
        bool $tmp3096 = ((panda$core$Bit) { $tmp3098.nonnull }).value;
        if (!$tmp3096) goto $l3095;
        {
            int $tmp3101;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3105 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3104 = $tmp3105;
                $tmp3103 = $tmp3104;
                decl3102 = $tmp3103;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3103));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3104));
                if (((panda$core$Bit) { decl3102 == NULL }).value) {
                {
                    $tmp3106 = NULL;
                    $returnValue3090 = $tmp3106;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3106));
                    $tmp3101 = 0;
                    goto $l3099;
                    $l3107:;
                    $tmp3068 = 1;
                    goto $l3066;
                    $l3108:;
                    return $returnValue3090;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations3082, ((panda$core$Object*) decl3102));
            }
            $tmp3101 = -1;
            goto $l3099;
            $l3099:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3102));
            decl3102 = NULL;
            switch ($tmp3101) {
                case 0: goto $l3107;
                case -1: goto $l3110;
            }
            $l3110:;
        }
        goto $l3094;
        $l3095:;
        org$pandalanguage$pandac$ASTNode* $tmp3113 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp3115 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations3082);
        $tmp3114 = $tmp3115;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3113, ((panda$core$Int64) { 47 }), start3069.position, kind3071, $tmp3114);
        $tmp3112 = $tmp3113;
        $tmp3111 = $tmp3112;
        $returnValue3090 = $tmp3111;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3112));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3114));
        $tmp3068 = 2;
        goto $l3066;
        $l3116:;
        return $returnValue3090;
    }
    $l3066:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3086));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations3082));
    declarations3082 = NULL;
    decl3086 = NULL;
    switch ($tmp3068) {
        case 2: goto $l3116;
        case 1: goto $l3108;
        case 0: goto $l3092;
    }
    $l3118:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3122;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3123;
    org$pandalanguage$pandac$ASTNode* $returnValue3126;
    org$pandalanguage$pandac$ASTNode* $tmp3127;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3130;
    org$pandalanguage$pandac$ASTNode* $tmp3133;
    panda$core$Object* $tmp3136;
    org$pandalanguage$pandac$ASTNode* target3138 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3139;
    org$pandalanguage$pandac$ASTNode* $tmp3140;
    panda$core$String* $tmp3142;
    panda$collections$Array* args3144 = NULL;
    panda$collections$Array* $tmp3145;
    panda$collections$Array* $tmp3146;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3148;
    org$pandalanguage$pandac$ASTNode* expr3153 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3154;
    org$pandalanguage$pandac$ASTNode* $tmp3155;
    panda$core$Object* $tmp3157;
    org$pandalanguage$pandac$ASTNode* $tmp3159;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3166;
    org$pandalanguage$pandac$ASTNode* $tmp3168;
    org$pandalanguage$pandac$ASTNode* $tmp3169;
    org$pandalanguage$pandac$ASTNode* $tmp3170;
    panda$core$Object* $tmp3172;
    org$pandalanguage$pandac$ASTNode* $tmp3174;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3178;
    panda$core$Object* $tmp3181;
    org$pandalanguage$pandac$ASTNode* $tmp3183;
    panda$core$Object* $tmp3188;
    org$pandalanguage$pandac$ASTNode* $tmp3190;
    org$pandalanguage$pandac$ASTNode* $tmp3191;
    panda$collections$ImmutableArray* $tmp3193;
    int $tmp3121;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3123, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3125 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3123, &$s3124);
        start3122 = $tmp3125;
        if (((panda$core$Bit) { !start3122.nonnull }).value) {
        {
            $tmp3127 = NULL;
            $returnValue3126 = $tmp3127;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3127));
            $tmp3121 = 0;
            goto $l3119;
            $l3128:;
            return $returnValue3126;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3130, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3132 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3130, &$s3131);
        if (((panda$core$Bit) { !$tmp3132.nonnull }).value) {
        {
            $tmp3133 = NULL;
            $returnValue3126 = $tmp3133;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3133));
            $tmp3121 = 1;
            goto $l3119;
            $l3134:;
            return $returnValue3126;
        }
        }
        panda$core$Bit$wrapper* $tmp3137;
        $tmp3137 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp3137->value = ((panda$core$Bit) { true });
        $tmp3136 = ((panda$core$Object*) $tmp3137);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp3136);
        panda$core$Panda$unref$panda$core$Object($tmp3136);
        org$pandalanguage$pandac$ASTNode* $tmp3141 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3143 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3122.value));
        $tmp3142 = $tmp3143;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3141, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) start3122.value).position, $tmp3142);
        $tmp3140 = $tmp3141;
        $tmp3139 = $tmp3140;
        target3138 = $tmp3139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3140));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3142));
        panda$collections$Array* $tmp3147 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3147);
        $tmp3146 = $tmp3147;
        $tmp3145 = $tmp3146;
        args3144 = $tmp3145;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3145));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3146));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3148, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3149 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3148);
        if (((panda$core$Bit) { !$tmp3149.nonnull }).value) {
        {
            int $tmp3152;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3156 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3155 = $tmp3156;
                $tmp3154 = $tmp3155;
                expr3153 = $tmp3154;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3155));
                if (((panda$core$Bit) { expr3153 == NULL }).value) {
                {
                    panda$core$Object* $tmp3158 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3157 = $tmp3158;
                    panda$core$Panda$unref$panda$core$Object($tmp3157);
                    $tmp3159 = NULL;
                    $returnValue3126 = $tmp3159;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3159));
                    $tmp3152 = 0;
                    goto $l3150;
                    $l3160:;
                    $tmp3121 = 2;
                    goto $l3119;
                    $l3161:;
                    return $returnValue3126;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args3144, ((panda$core$Object*) expr3153));
                $l3163:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3166, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3167 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3166);
                bool $tmp3165 = ((panda$core$Bit) { $tmp3167.nonnull }).value;
                if (!$tmp3165) goto $l3164;
                {
                    {
                        $tmp3168 = expr3153;
                        org$pandalanguage$pandac$ASTNode* $tmp3171 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3170 = $tmp3171;
                        $tmp3169 = $tmp3170;
                        expr3153 = $tmp3169;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3169));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3170));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3168));
                    }
                    if (((panda$core$Bit) { expr3153 == NULL }).value) {
                    {
                        panda$core$Object* $tmp3173 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp3172 = $tmp3173;
                        panda$core$Panda$unref$panda$core$Object($tmp3172);
                        $tmp3174 = NULL;
                        $returnValue3126 = $tmp3174;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3174));
                        $tmp3152 = 1;
                        goto $l3150;
                        $l3175:;
                        $tmp3121 = 3;
                        goto $l3119;
                        $l3176:;
                        return $returnValue3126;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args3144, ((panda$core$Object*) expr3153));
                }
                goto $l3163;
                $l3164:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3178, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3180 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3178, &$s3179);
                if (((panda$core$Bit) { !$tmp3180.nonnull }).value) {
                {
                    panda$core$Object* $tmp3182 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3181 = $tmp3182;
                    panda$core$Panda$unref$panda$core$Object($tmp3181);
                    $tmp3183 = NULL;
                    $returnValue3126 = $tmp3183;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3183));
                    $tmp3152 = 2;
                    goto $l3150;
                    $l3184:;
                    $tmp3121 = 4;
                    goto $l3119;
                    $l3185:;
                    return $returnValue3126;
                }
                }
            }
            $tmp3152 = -1;
            goto $l3150;
            $l3150:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3153));
            expr3153 = NULL;
            switch ($tmp3152) {
                case 0: goto $l3160;
                case 1: goto $l3175;
                case 2: goto $l3184;
                case -1: goto $l3187;
            }
            $l3187:;
        }
        }
        panda$core$Object* $tmp3189 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp3188 = $tmp3189;
        panda$core$Panda$unref$panda$core$Object($tmp3188);
        org$pandalanguage$pandac$ASTNode* $tmp3192 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp3194 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3144);
        $tmp3193 = $tmp3194;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3192, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$parser$Token) start3122.value).position, target3138, $tmp3193);
        $tmp3191 = $tmp3192;
        $tmp3190 = $tmp3191;
        $returnValue3126 = $tmp3190;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3190));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3193));
        $tmp3121 = 5;
        goto $l3119;
        $l3195:;
        return $returnValue3126;
    }
    $l3119:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args3144));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target3138));
    target3138 = NULL;
    args3144 = NULL;
    switch ($tmp3121) {
        case 5: goto $l3195;
        case 3: goto $l3176;
        case 4: goto $l3185;
        case 2: goto $l3161;
        case 1: goto $l3134;
        case 0: goto $l3128;
    }
    $l3197:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3198;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3199;
    org$pandalanguage$pandac$ASTNode* $returnValue3202;
    org$pandalanguage$pandac$ASTNode* $tmp3203;
    org$pandalanguage$pandac$parser$Token$nullable label3205;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3206;
    org$pandalanguage$pandac$ASTNode* $tmp3208;
    org$pandalanguage$pandac$ASTNode* $tmp3209;
    panda$core$String* $tmp3211;
    org$pandalanguage$pandac$ASTNode* $tmp3214;
    org$pandalanguage$pandac$ASTNode* $tmp3215;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3199, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3201 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3199, &$s3200);
    start3198 = $tmp3201;
    if (((panda$core$Bit) { !start3198.nonnull }).value) {
    {
        $tmp3203 = NULL;
        $returnValue3202 = $tmp3203;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3203));
        return $returnValue3202;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3206, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3207 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3206);
    label3205 = $tmp3207;
    if (((panda$core$Bit) { label3205.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3210 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3212 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3205.value));
        $tmp3211 = $tmp3212;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3210, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start3198.value).position, $tmp3211);
        $tmp3209 = $tmp3210;
        $tmp3208 = $tmp3209;
        $returnValue3202 = $tmp3208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3211));
        return $returnValue3202;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3216 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3216, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start3198.value).position, NULL);
    $tmp3215 = $tmp3216;
    $tmp3214 = $tmp3215;
    $returnValue3202 = $tmp3214;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3214));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3215));
    return $returnValue3202;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3218;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3219;
    org$pandalanguage$pandac$ASTNode* $returnValue3222;
    org$pandalanguage$pandac$ASTNode* $tmp3223;
    org$pandalanguage$pandac$parser$Token$nullable label3225;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3226;
    org$pandalanguage$pandac$ASTNode* $tmp3228;
    org$pandalanguage$pandac$ASTNode* $tmp3229;
    panda$core$String* $tmp3231;
    org$pandalanguage$pandac$ASTNode* $tmp3234;
    org$pandalanguage$pandac$ASTNode* $tmp3235;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3219, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3221 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3219, &$s3220);
    start3218 = $tmp3221;
    if (((panda$core$Bit) { !start3218.nonnull }).value) {
    {
        $tmp3223 = NULL;
        $returnValue3222 = $tmp3223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3223));
        return $returnValue3222;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3226, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3227 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3226);
    label3225 = $tmp3227;
    if (((panda$core$Bit) { label3225.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3230 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3232 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3225.value));
        $tmp3231 = $tmp3232;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3230, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start3218.value).position, $tmp3231);
        $tmp3229 = $tmp3230;
        $tmp3228 = $tmp3229;
        $returnValue3222 = $tmp3228;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3228));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3229));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3231));
        return $returnValue3222;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3236 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3236, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start3218.value).position, NULL);
    $tmp3235 = $tmp3236;
    $tmp3234 = $tmp3235;
    $returnValue3222 = $tmp3234;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3234));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3235));
    return $returnValue3222;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3238;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3239;
    org$pandalanguage$pandac$ASTNode* $returnValue3242;
    org$pandalanguage$pandac$ASTNode* $tmp3243;
    org$pandalanguage$pandac$parser$Token$Kind $match$1668_93245;
    org$pandalanguage$pandac$ASTNode* $tmp3256;
    org$pandalanguage$pandac$ASTNode* $tmp3257;
    panda$collections$Array* children3263 = NULL;
    panda$collections$Array* $tmp3264;
    panda$collections$Array* $tmp3265;
    org$pandalanguage$pandac$ASTNode* expr3267 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3268;
    org$pandalanguage$pandac$ASTNode* $tmp3269;
    org$pandalanguage$pandac$ASTNode* $tmp3271;
    org$pandalanguage$pandac$ASTNode* $tmp3274;
    org$pandalanguage$pandac$ASTNode* $tmp3275;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3239, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3241 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3239, &$s3240);
    start3238 = $tmp3241;
    if (((panda$core$Bit) { !start3238.nonnull }).value) {
    {
        $tmp3243 = NULL;
        $returnValue3242 = $tmp3243;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3243));
        return $returnValue3242;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp3246 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1668_93245 = $tmp3246.kind;
        panda$core$Bit $tmp3249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1668_93245.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp3248 = $tmp3249.value;
        if ($tmp3248) goto $l3250;
        panda$core$Bit $tmp3251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1668_93245.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp3248 = $tmp3251.value;
        $l3250:;
        panda$core$Bit $tmp3252 = { $tmp3248 };
        bool $tmp3247 = $tmp3252.value;
        if ($tmp3247) goto $l3253;
        panda$core$Bit $tmp3254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1668_93245.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp3247 = $tmp3254.value;
        $l3253:;
        panda$core$Bit $tmp3255 = { $tmp3247 };
        if ($tmp3255.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3258 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3258, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) start3238.value).position, NULL);
            $tmp3257 = $tmp3258;
            $tmp3256 = $tmp3257;
            $returnValue3242 = $tmp3256;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3256));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3257));
            return $returnValue3242;
        }
        }
        else {
        {
            int $tmp3262;
            {
                panda$collections$Array* $tmp3266 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp3266);
                $tmp3265 = $tmp3266;
                $tmp3264 = $tmp3265;
                children3263 = $tmp3264;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3264));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3265));
                org$pandalanguage$pandac$ASTNode* $tmp3270 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3269 = $tmp3270;
                $tmp3268 = $tmp3269;
                expr3267 = $tmp3268;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3268));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3269));
                if (((panda$core$Bit) { expr3267 == NULL }).value) {
                {
                    $tmp3271 = NULL;
                    $returnValue3242 = $tmp3271;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3271));
                    $tmp3262 = 0;
                    goto $l3260;
                    $l3272:;
                    return $returnValue3242;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3263, ((panda$core$Object*) expr3267));
                org$pandalanguage$pandac$ASTNode* $tmp3276 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3276, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) start3238.value).position, expr3267);
                $tmp3275 = $tmp3276;
                $tmp3274 = $tmp3275;
                $returnValue3242 = $tmp3274;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3274));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3275));
                $tmp3262 = 1;
                goto $l3260;
                $l3277:;
                return $returnValue3242;
            }
            $l3260:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3267));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children3263));
            children3263 = NULL;
            expr3267 = NULL;
            switch ($tmp3262) {
                case 1: goto $l3277;
                case 0: goto $l3272;
            }
            $l3279:;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1686_93280;
    org$pandalanguage$pandac$ASTNode* $returnValue3283;
    org$pandalanguage$pandac$ASTNode* $tmp3284;
    org$pandalanguage$pandac$ASTNode* $tmp3285;
    org$pandalanguage$pandac$ASTNode* $tmp3289;
    org$pandalanguage$pandac$ASTNode* $tmp3290;
    org$pandalanguage$pandac$ASTNode* $tmp3294;
    org$pandalanguage$pandac$ASTNode* $tmp3295;
    {
        org$pandalanguage$pandac$parser$Token $tmp3281 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1686_93280 = $tmp3281.kind;
        panda$core$Bit $tmp3282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1686_93280.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp3282.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3286 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3285 = $tmp3286;
            $tmp3284 = $tmp3285;
            $returnValue3283 = $tmp3284;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3284));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3285));
            return $returnValue3283;
        }
        }
        else {
        panda$core$Bit $tmp3288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1686_93280.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp3288.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3291 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3290 = $tmp3291;
            $tmp3289 = $tmp3290;
            $returnValue3283 = $tmp3289;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3289));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3290));
            return $returnValue3283;
        }
        }
        else {
        panda$core$Bit $tmp3293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1686_93280.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp3293.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3296 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3295 = $tmp3296;
            $tmp3294 = $tmp3295;
            $returnValue3283 = $tmp3294;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3294));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3295));
            return $returnValue3283;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1698_93298;
    org$pandalanguage$pandac$ASTNode* $returnValue3301;
    org$pandalanguage$pandac$ASTNode* $tmp3302;
    org$pandalanguage$pandac$ASTNode* $tmp3303;
    org$pandalanguage$pandac$ASTNode* $tmp3307;
    org$pandalanguage$pandac$ASTNode* $tmp3308;
    org$pandalanguage$pandac$ASTNode* $tmp3312;
    org$pandalanguage$pandac$ASTNode* $tmp3313;
    org$pandalanguage$pandac$ASTNode* $tmp3317;
    org$pandalanguage$pandac$ASTNode* $tmp3318;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3321;
    org$pandalanguage$pandac$ASTNode* $tmp3323;
    {
        org$pandalanguage$pandac$parser$Token $tmp3299 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1698_93298 = $tmp3299.kind;
        panda$core$Bit $tmp3300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1698_93298.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3300.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3304 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3303 = $tmp3304;
            $tmp3302 = $tmp3303;
            $returnValue3301 = $tmp3302;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3302));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3303));
            return $returnValue3301;
        }
        }
        else {
        panda$core$Bit $tmp3306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1698_93298.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp3306.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3309 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3308 = $tmp3309;
            $tmp3307 = $tmp3308;
            $returnValue3301 = $tmp3307;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3307));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3308));
            return $returnValue3301;
        }
        }
        else {
        panda$core$Bit $tmp3311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1698_93298.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp3311.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3314 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3313 = $tmp3314;
            $tmp3312 = $tmp3313;
            $returnValue3301 = $tmp3312;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3313));
            return $returnValue3301;
        }
        }
        else {
        panda$core$Bit $tmp3316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1698_93298.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp3316.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3319 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3318 = $tmp3319;
            $tmp3317 = $tmp3318;
            $returnValue3301 = $tmp3317;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3317));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3318));
            return $returnValue3301;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3321, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3321, &$s3322);
            $tmp3323 = NULL;
            $returnValue3301 = $tmp3323;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3323));
            return $returnValue3301;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3328;
    org$pandalanguage$pandac$parser$Token$nullable start3329;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3330;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3332;
    org$pandalanguage$pandac$ASTNode* $returnValue3335;
    org$pandalanguage$pandac$ASTNode* $tmp3336;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3339;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3340;
    org$pandalanguage$pandac$parser$Token$nullable name3341;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3342;
    org$pandalanguage$pandac$ASTNode* $tmp3345;
    panda$collections$ImmutableArray* params3348 = NULL;
    panda$collections$ImmutableArray* $tmp3349;
    panda$collections$ImmutableArray* $tmp3350;
    org$pandalanguage$pandac$ASTNode* $tmp3352;
    org$pandalanguage$pandac$ASTNode* returnType3355 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3358;
    org$pandalanguage$pandac$ASTNode* $tmp3359;
    org$pandalanguage$pandac$ASTNode* $tmp3360;
    org$pandalanguage$pandac$ASTNode* $tmp3362;
    org$pandalanguage$pandac$ASTNode* $tmp3365;
    org$pandalanguage$pandac$ASTNode* $tmp3366;
    panda$collections$ImmutableArray* body3367 = NULL;
    panda$collections$ImmutableArray* $tmp3368;
    panda$collections$ImmutableArray* $tmp3369;
    org$pandalanguage$pandac$ASTNode* $tmp3371;
    org$pandalanguage$pandac$ASTNode* $tmp3374;
    org$pandalanguage$pandac$ASTNode* $tmp3375;
    panda$collections$ImmutableArray* $tmp3377;
    panda$core$String* $tmp3379;
    int $tmp3327;
    {
        memset(&kind3328, 0, sizeof(kind3328));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3330, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3331 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3330);
        start3329 = $tmp3331;
        if (((panda$core$Bit) { !start3329.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3332, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3334 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3332, &$s3333);
            start3329 = $tmp3334;
            if (((panda$core$Bit) { !start3329.nonnull }).value) {
            {
                $tmp3336 = NULL;
                $returnValue3335 = $tmp3336;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3336));
                $tmp3327 = 0;
                goto $l3325;
                $l3337:;
                return $returnValue3335;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3339, ((panda$core$Int64) { 0 }));
            kind3328 = $tmp3339;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3340, ((panda$core$Int64) { 1 }));
            kind3328 = $tmp3340;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3342, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3344 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3342, &$s3343);
        name3341 = $tmp3344;
        if (((panda$core$Bit) { !name3341.nonnull }).value) {
        {
            $tmp3345 = NULL;
            $returnValue3335 = $tmp3345;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3345));
            $tmp3327 = 1;
            goto $l3325;
            $l3346:;
            return $returnValue3335;
        }
        }
        panda$collections$ImmutableArray* $tmp3351 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3350 = $tmp3351;
        $tmp3349 = $tmp3350;
        params3348 = $tmp3349;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3349));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3350));
        if (((panda$core$Bit) { params3348 == NULL }).value) {
        {
            $tmp3352 = NULL;
            $returnValue3335 = $tmp3352;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3352));
            $tmp3327 = 2;
            goto $l3325;
            $l3353:;
            return $returnValue3335;
        }
        }
        memset(&returnType3355, 0, sizeof(returnType3355));
        org$pandalanguage$pandac$parser$Token $tmp3356 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3356.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3357.value) {
        {
            {
                $tmp3358 = returnType3355;
                org$pandalanguage$pandac$ASTNode* $tmp3361 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3360 = $tmp3361;
                $tmp3359 = $tmp3360;
                returnType3355 = $tmp3359;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3359));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3360));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3358));
            }
            if (((panda$core$Bit) { returnType3355 == NULL }).value) {
            {
                $tmp3362 = NULL;
                $returnValue3335 = $tmp3362;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3362));
                $tmp3327 = 3;
                goto $l3325;
                $l3363:;
                return $returnValue3335;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3365 = returnType3355;
                $tmp3366 = NULL;
                returnType3355 = $tmp3366;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3366));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3365));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3370 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3369 = $tmp3370;
        $tmp3368 = $tmp3369;
        body3367 = $tmp3368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3368));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3369));
        if (((panda$core$Bit) { body3367 == NULL }).value) {
        {
            $tmp3371 = NULL;
            $returnValue3335 = $tmp3371;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3371));
            $tmp3327 = 4;
            goto $l3325;
            $l3372:;
            return $returnValue3335;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3376 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp3378 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3378);
        $tmp3377 = $tmp3378;
        panda$core$String* $tmp3380 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3341.value));
        $tmp3379 = $tmp3380;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3376, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3329.value).position, NULL, $tmp3377, kind3328, $tmp3379, NULL, params3348, returnType3355, body3367);
        $tmp3375 = $tmp3376;
        $tmp3374 = $tmp3375;
        $returnValue3335 = $tmp3374;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3374));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3375));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3377));
        $tmp3327 = 5;
        goto $l3325;
        $l3381:;
        return $returnValue3335;
    }
    $l3325:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3367));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3355));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3348));
    params3348 = NULL;
    body3367 = NULL;
    switch ($tmp3327) {
        case 5: goto $l3381;
        case 4: goto $l3372;
        case 2: goto $l3353;
        case 3: goto $l3363;
        case 1: goto $l3346;
        case 0: goto $l3337;
    }
    $l3383:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1757_93384;
    org$pandalanguage$pandac$ASTNode* $returnValue3387;
    org$pandalanguage$pandac$ASTNode* $tmp3388;
    org$pandalanguage$pandac$ASTNode* $tmp3389;
    org$pandalanguage$pandac$ASTNode* $tmp3393;
    org$pandalanguage$pandac$ASTNode* $tmp3394;
    org$pandalanguage$pandac$ASTNode* $tmp3398;
    org$pandalanguage$pandac$ASTNode* $tmp3399;
    org$pandalanguage$pandac$ASTNode* $tmp3403;
    org$pandalanguage$pandac$ASTNode* $tmp3404;
    org$pandalanguage$pandac$ASTNode* $tmp3408;
    org$pandalanguage$pandac$ASTNode* $tmp3409;
    org$pandalanguage$pandac$ASTNode* $tmp3413;
    org$pandalanguage$pandac$ASTNode* $tmp3414;
    org$pandalanguage$pandac$ASTNode* $tmp3418;
    org$pandalanguage$pandac$ASTNode* $tmp3419;
    org$pandalanguage$pandac$ASTNode* $tmp3423;
    org$pandalanguage$pandac$ASTNode* $tmp3424;
    org$pandalanguage$pandac$parser$Token id3428;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3430;
    org$pandalanguage$pandac$ASTNode* $tmp3432;
    org$pandalanguage$pandac$ASTNode* $tmp3433;
    panda$core$String* $tmp3434;
    org$pandalanguage$pandac$ASTNode* $tmp3438;
    org$pandalanguage$pandac$ASTNode* $tmp3439;
    org$pandalanguage$pandac$ASTNode* $tmp3447;
    org$pandalanguage$pandac$ASTNode* $tmp3448;
    org$pandalanguage$pandac$ASTNode* $tmp3464;
    org$pandalanguage$pandac$ASTNode* $tmp3465;
    org$pandalanguage$pandac$ASTNode* $tmp3469;
    org$pandalanguage$pandac$ASTNode* $tmp3470;
    org$pandalanguage$pandac$ASTNode* $tmp3478;
    org$pandalanguage$pandac$ASTNode* $tmp3479;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3482;
    org$pandalanguage$pandac$ASTNode* $tmp3484;
    {
        org$pandalanguage$pandac$parser$Token $tmp3385 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1757_93384 = $tmp3385.kind;
        panda$core$Bit $tmp3386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp3386.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3390 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3389 = $tmp3390;
            $tmp3388 = $tmp3389;
            $returnValue3387 = $tmp3388;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3388));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3389));
            return $returnValue3387;
        }
        }
        else {
        panda$core$Bit $tmp3392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp3392.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3395 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3394 = $tmp3395;
            $tmp3393 = $tmp3394;
            $returnValue3387 = $tmp3393;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3393));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3394));
            return $returnValue3387;
        }
        }
        else {
        panda$core$Bit $tmp3397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp3397.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3400 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3399 = $tmp3400;
            $tmp3398 = $tmp3399;
            $returnValue3387 = $tmp3398;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3398));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3399));
            return $returnValue3387;
        }
        }
        else {
        panda$core$Bit $tmp3402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3402.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3405 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3404 = $tmp3405;
            $tmp3403 = $tmp3404;
            $returnValue3387 = $tmp3403;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3403));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3404));
            return $returnValue3387;
        }
        }
        else {
        panda$core$Bit $tmp3407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp3407.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3410 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3409 = $tmp3410;
            $tmp3408 = $tmp3409;
            $returnValue3387 = $tmp3408;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3408));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3409));
            return $returnValue3387;
        }
        }
        else {
        panda$core$Bit $tmp3412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp3412.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3415 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3414 = $tmp3415;
            $tmp3413 = $tmp3414;
            $returnValue3387 = $tmp3413;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3413));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3414));
            return $returnValue3387;
        }
        }
        else {
        panda$core$Bit $tmp3417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp3417.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3420 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3419 = $tmp3420;
            $tmp3418 = $tmp3419;
            $returnValue3387 = $tmp3418;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3418));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3419));
            return $returnValue3387;
        }
        }
        else {
        panda$core$Bit $tmp3422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp3422.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3425 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3424 = $tmp3425;
            $tmp3423 = $tmp3424;
            $returnValue3387 = $tmp3423;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3423));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3424));
            return $returnValue3387;
        }
        }
        else {
        panda$core$Bit $tmp3427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp3427.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3429 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id3428 = $tmp3429;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3430, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3431 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3430);
            if (((panda$core$Bit) { $tmp3431.nonnull }).value) {
            {
                panda$core$String* $tmp3435 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id3428);
                $tmp3434 = $tmp3435;
                org$pandalanguage$pandac$ASTNode* $tmp3436 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp3434);
                $tmp3433 = $tmp3436;
                $tmp3432 = $tmp3433;
                $returnValue3387 = $tmp3432;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3432));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3433));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3434));
                return $returnValue3387;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id3428);
            org$pandalanguage$pandac$ASTNode* $tmp3440 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3439 = $tmp3440;
            $tmp3438 = $tmp3439;
            $returnValue3387 = $tmp3438;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3438));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3439));
            return $returnValue3387;
        }
        }
        else {
        panda$core$Bit $tmp3443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp3442 = $tmp3443.value;
        if ($tmp3442) goto $l3444;
        panda$core$Bit $tmp3445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp3442 = $tmp3445.value;
        $l3444:;
        panda$core$Bit $tmp3446 = { $tmp3442 };
        if ($tmp3446.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3449 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3448 = $tmp3449;
            $tmp3447 = $tmp3448;
            $returnValue3387 = $tmp3447;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3447));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3448));
            return $returnValue3387;
        }
        }
        else {
        panda$core$Bit $tmp3454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp3453 = $tmp3454.value;
        if ($tmp3453) goto $l3455;
        panda$core$Bit $tmp3456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp3453 = $tmp3456.value;
        $l3455:;
        panda$core$Bit $tmp3457 = { $tmp3453 };
        bool $tmp3452 = $tmp3457.value;
        if ($tmp3452) goto $l3458;
        panda$core$Bit $tmp3459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp3452 = $tmp3459.value;
        $l3458:;
        panda$core$Bit $tmp3460 = { $tmp3452 };
        bool $tmp3451 = $tmp3460.value;
        if ($tmp3451) goto $l3461;
        panda$core$Bit $tmp3462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp3451 = $tmp3462.value;
        $l3461:;
        panda$core$Bit $tmp3463 = { $tmp3451 };
        if ($tmp3463.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3466 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3465 = $tmp3466;
            $tmp3464 = $tmp3465;
            $returnValue3387 = $tmp3464;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3464));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3465));
            return $returnValue3387;
        }
        }
        else {
        panda$core$Bit $tmp3468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp3468.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3471 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3470 = $tmp3471;
            $tmp3469 = $tmp3470;
            $returnValue3387 = $tmp3469;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3470));
            return $returnValue3387;
        }
        }
        else {
        panda$core$Bit $tmp3474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 21 }));
        bool $tmp3473 = $tmp3474.value;
        if ($tmp3473) goto $l3475;
        panda$core$Bit $tmp3476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1757_93384.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp3473 = $tmp3476.value;
        $l3475:;
        panda$core$Bit $tmp3477 = { $tmp3473 };
        if ($tmp3477.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3480 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3479 = $tmp3480;
            $tmp3478 = $tmp3479;
            $returnValue3387 = $tmp3478;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3478));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3479));
            return $returnValue3387;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3482, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3482, &$s3483);
            $tmp3484 = NULL;
            $returnValue3387 = $tmp3484;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3484));
            return $returnValue3387;
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
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3489;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3490;
    org$pandalanguage$pandac$ASTNode* $returnValue3493;
    org$pandalanguage$pandac$ASTNode* $tmp3494;
    org$pandalanguage$pandac$parser$Token$nullable next3497;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3498;
    org$pandalanguage$pandac$ASTNode* $tmp3501;
    panda$core$MutableString* name3504 = NULL;
    panda$core$MutableString* $tmp3505;
    panda$core$MutableString* $tmp3506;
    panda$core$String* $tmp3508;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3512;
    panda$core$Char8 $tmp3514;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3515;
    org$pandalanguage$pandac$ASTNode* $tmp3518;
    panda$core$String* $tmp3521;
    org$pandalanguage$pandac$ASTNode* $tmp3523;
    org$pandalanguage$pandac$ASTNode* $tmp3524;
    panda$core$String* $tmp3526;
    int $tmp3488;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3490, ((panda$core$Int64) { 14 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3492 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3490, &$s3491);
        start3489 = $tmp3492;
        if (((panda$core$Bit) { !start3489.nonnull }).value) {
        {
            $tmp3494 = NULL;
            $returnValue3493 = $tmp3494;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3494));
            $tmp3488 = 0;
            goto $l3486;
            $l3495:;
            return $returnValue3493;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3498, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3500 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3498, &$s3499);
        next3497 = $tmp3500;
        if (((panda$core$Bit) { !next3497.nonnull }).value) {
        {
            $tmp3501 = NULL;
            $returnValue3493 = $tmp3501;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3501));
            $tmp3488 = 1;
            goto $l3486;
            $l3502:;
            return $returnValue3493;
        }
        }
        panda$core$MutableString* $tmp3507 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3509 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3497.value));
        $tmp3508 = $tmp3509;
        panda$core$MutableString$init$panda$core$String($tmp3507, $tmp3508);
        $tmp3506 = $tmp3507;
        $tmp3505 = $tmp3506;
        name3504 = $tmp3505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3506));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3508));
        $l3510:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3512, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3513 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3512);
            next3497 = $tmp3513;
            if (((panda$core$Bit) { !next3497.nonnull }).value) {
            {
                goto $l3511;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3514, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3504, $tmp3514);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3515, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3517 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3515, &$s3516);
            next3497 = $tmp3517;
            if (((panda$core$Bit) { !next3497.nonnull }).value) {
            {
                $tmp3518 = NULL;
                $returnValue3493 = $tmp3518;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3518));
                $tmp3488 = 2;
                goto $l3486;
                $l3519:;
                return $returnValue3493;
            }
            }
            panda$core$String* $tmp3522 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3497.value));
            $tmp3521 = $tmp3522;
            panda$core$MutableString$append$panda$core$String(name3504, $tmp3521);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3521));
        }
        }
        $l3511:;
        org$pandalanguage$pandac$ASTNode* $tmp3525 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3527 = panda$core$MutableString$finish$R$panda$core$String(name3504);
        $tmp3526 = $tmp3527;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3525, ((panda$core$Int64) { 30 }), ((org$pandalanguage$pandac$parser$Token) start3489.value).position, $tmp3526);
        $tmp3524 = $tmp3525;
        $tmp3523 = $tmp3524;
        $returnValue3493 = $tmp3523;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3523));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3524));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3526));
        $tmp3488 = 3;
        goto $l3486;
        $l3528:;
        return $returnValue3493;
    }
    $l3486:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3504));
    name3504 = NULL;
    switch ($tmp3488) {
        case 3: goto $l3528;
        case 2: goto $l3519;
        case 0: goto $l3495;
        case 1: goto $l3502;
    }
    $l3530:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3534;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3535;
    org$pandalanguage$pandac$ASTNode* $returnValue3538;
    org$pandalanguage$pandac$ASTNode* $tmp3539;
    org$pandalanguage$pandac$parser$Token$nullable next3542;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3543;
    org$pandalanguage$pandac$ASTNode* $tmp3546;
    panda$core$MutableString* name3549 = NULL;
    panda$core$MutableString* $tmp3550;
    panda$core$MutableString* $tmp3551;
    panda$core$String* $tmp3553;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3557;
    panda$core$Char8 $tmp3559;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3560;
    org$pandalanguage$pandac$ASTNode* $tmp3563;
    panda$core$String* $tmp3566;
    org$pandalanguage$pandac$ASTNode* $tmp3568;
    org$pandalanguage$pandac$ASTNode* $tmp3569;
    panda$core$String* $tmp3571;
    int $tmp3533;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3535, ((panda$core$Int64) { 15 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3537 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3535, &$s3536);
        start3534 = $tmp3537;
        if (((panda$core$Bit) { !start3534.nonnull }).value) {
        {
            $tmp3539 = NULL;
            $returnValue3538 = $tmp3539;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3539));
            $tmp3533 = 0;
            goto $l3531;
            $l3540:;
            return $returnValue3538;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3543, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3545 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3543, &$s3544);
        next3542 = $tmp3545;
        if (((panda$core$Bit) { !next3542.nonnull }).value) {
        {
            $tmp3546 = NULL;
            $returnValue3538 = $tmp3546;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3546));
            $tmp3533 = 1;
            goto $l3531;
            $l3547:;
            return $returnValue3538;
        }
        }
        panda$core$MutableString* $tmp3552 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3554 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3542.value));
        $tmp3553 = $tmp3554;
        panda$core$MutableString$init$panda$core$String($tmp3552, $tmp3553);
        $tmp3551 = $tmp3552;
        $tmp3550 = $tmp3551;
        name3549 = $tmp3550;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3550));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3551));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3553));
        $l3555:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3557, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3558 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3557);
            next3542 = $tmp3558;
            if (((panda$core$Bit) { !next3542.nonnull }).value) {
            {
                goto $l3556;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3559, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3549, $tmp3559);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3560, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3562 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3560, &$s3561);
            next3542 = $tmp3562;
            if (((panda$core$Bit) { !next3542.nonnull }).value) {
            {
                $tmp3563 = NULL;
                $returnValue3538 = $tmp3563;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3563));
                $tmp3533 = 2;
                goto $l3531;
                $l3564:;
                return $returnValue3538;
            }
            }
            panda$core$String* $tmp3567 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3542.value));
            $tmp3566 = $tmp3567;
            panda$core$MutableString$append$panda$core$String(name3549, $tmp3566);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3566));
        }
        }
        $l3556:;
        org$pandalanguage$pandac$ASTNode* $tmp3570 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3572 = panda$core$MutableString$finish$R$panda$core$String(name3549);
        $tmp3571 = $tmp3572;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3570, ((panda$core$Int64) { 46 }), ((org$pandalanguage$pandac$parser$Token) start3534.value).position, $tmp3571);
        $tmp3569 = $tmp3570;
        $tmp3568 = $tmp3569;
        $returnValue3538 = $tmp3568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3569));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3571));
        $tmp3533 = 3;
        goto $l3531;
        $l3573:;
        return $returnValue3538;
    }
    $l3531:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3549));
    name3549 = NULL;
    switch ($tmp3533) {
        case 3: goto $l3573;
        case 1: goto $l3547;
        case 2: goto $l3564;
        case 0: goto $l3540;
    }
    $l3575:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3579;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3580;
    panda$collections$ImmutableArray* $returnValue3583;
    panda$collections$ImmutableArray* $tmp3584;
    org$pandalanguage$pandac$parser$Token$nullable id3587;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3588;
    panda$collections$ImmutableArray* $tmp3591;
    panda$collections$Array* parameters3594 = NULL;
    panda$collections$Array* $tmp3595;
    panda$collections$Array* $tmp3596;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3598;
    org$pandalanguage$pandac$ASTNode* t3603 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3604;
    org$pandalanguage$pandac$ASTNode* $tmp3605;
    panda$collections$ImmutableArray* $tmp3607;
    org$pandalanguage$pandac$ASTNode* $tmp3611;
    panda$core$String* $tmp3613;
    org$pandalanguage$pandac$ASTNode* $tmp3616;
    panda$core$String* $tmp3618;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3623;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3625;
    panda$collections$ImmutableArray* $tmp3628;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3631;
    org$pandalanguage$pandac$ASTNode* t3636 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3637;
    org$pandalanguage$pandac$ASTNode* $tmp3638;
    panda$collections$ImmutableArray* $tmp3640;
    org$pandalanguage$pandac$ASTNode* $tmp3644;
    panda$core$String* $tmp3646;
    org$pandalanguage$pandac$ASTNode* $tmp3649;
    panda$core$String* $tmp3651;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3653;
    panda$collections$ImmutableArray* $tmp3656;
    panda$collections$ImmutableArray* $tmp3659;
    panda$collections$ImmutableArray* $tmp3660;
    int $tmp3578;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3580, ((panda$core$Int64) { 62 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3582 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3580, &$s3581);
        start3579 = $tmp3582;
        if (((panda$core$Bit) { !start3579.nonnull }).value) {
        {
            $tmp3584 = NULL;
            $returnValue3583 = $tmp3584;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3584));
            $tmp3578 = 0;
            goto $l3576;
            $l3585:;
            return $returnValue3583;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3588, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3590 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3588, &$s3589);
        id3587 = $tmp3590;
        if (((panda$core$Bit) { !id3587.nonnull }).value) {
        {
            $tmp3591 = NULL;
            $returnValue3583 = $tmp3591;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3591));
            $tmp3578 = 1;
            goto $l3576;
            $l3592:;
            return $returnValue3583;
        }
        }
        panda$collections$Array* $tmp3597 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3597);
        $tmp3596 = $tmp3597;
        $tmp3595 = $tmp3596;
        parameters3594 = $tmp3595;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3595));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3596));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3598, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3599 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3598);
        if (((panda$core$Bit) { $tmp3599.nonnull }).value) {
        {
            int $tmp3602;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3606 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3605 = $tmp3606;
                $tmp3604 = $tmp3605;
                t3603 = $tmp3604;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3604));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3605));
                if (((panda$core$Bit) { t3603 == NULL }).value) {
                {
                    $tmp3607 = NULL;
                    $returnValue3583 = $tmp3607;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3607));
                    $tmp3602 = 0;
                    goto $l3600;
                    $l3608:;
                    $tmp3578 = 2;
                    goto $l3576;
                    $l3609:;
                    return $returnValue3583;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp3612 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3614 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3587.value));
                $tmp3613 = $tmp3614;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3612, ((panda$core$Int64) { 44 }), ((org$pandalanguage$pandac$parser$Token) id3587.value).position, $tmp3613, t3603);
                $tmp3611 = $tmp3612;
                panda$collections$Array$add$panda$collections$Array$T(parameters3594, ((panda$core$Object*) $tmp3611));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3611));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3613));
            }
            $tmp3602 = -1;
            goto $l3600;
            $l3600:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3603));
            t3603 = NULL;
            switch ($tmp3602) {
                case 0: goto $l3608;
                case -1: goto $l3615;
            }
            $l3615:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3617 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp3619 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3587.value));
            $tmp3618 = $tmp3619;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3617, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id3587.value).position, $tmp3618);
            $tmp3616 = $tmp3617;
            panda$collections$Array$add$panda$collections$Array$T(parameters3594, ((panda$core$Object*) $tmp3616));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3616));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3618));
        }
        }
        $l3620:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3623, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3624 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3623);
        bool $tmp3622 = ((panda$core$Bit) { $tmp3624.nonnull }).value;
        if (!$tmp3622) goto $l3621;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3625, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3627 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3625, &$s3626);
            id3587 = $tmp3627;
            if (((panda$core$Bit) { !id3587.nonnull }).value) {
            {
                $tmp3628 = NULL;
                $returnValue3583 = $tmp3628;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3628));
                $tmp3578 = 3;
                goto $l3576;
                $l3629:;
                return $returnValue3583;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3631, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3632 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3631);
            if (((panda$core$Bit) { $tmp3632.nonnull }).value) {
            {
                int $tmp3635;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3639 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3638 = $tmp3639;
                    $tmp3637 = $tmp3638;
                    t3636 = $tmp3637;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3637));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3638));
                    if (((panda$core$Bit) { t3636 == NULL }).value) {
                    {
                        $tmp3640 = NULL;
                        $returnValue3583 = $tmp3640;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3640));
                        $tmp3635 = 0;
                        goto $l3633;
                        $l3641:;
                        $tmp3578 = 4;
                        goto $l3576;
                        $l3642:;
                        return $returnValue3583;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3645 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$String* $tmp3647 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3587.value));
                    $tmp3646 = $tmp3647;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3645, ((panda$core$Int64) { 44 }), ((org$pandalanguage$pandac$parser$Token) id3587.value).position, $tmp3646, t3636);
                    $tmp3644 = $tmp3645;
                    panda$collections$Array$add$panda$collections$Array$T(parameters3594, ((panda$core$Object*) $tmp3644));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3644));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3646));
                }
                $tmp3635 = -1;
                goto $l3633;
                $l3633:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3636));
                t3636 = NULL;
                switch ($tmp3635) {
                    case 0: goto $l3641;
                    case -1: goto $l3648;
                }
                $l3648:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3650 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3652 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3587.value));
                $tmp3651 = $tmp3652;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3650, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id3587.value).position, $tmp3651);
                $tmp3649 = $tmp3650;
                panda$collections$Array$add$panda$collections$Array$T(parameters3594, ((panda$core$Object*) $tmp3649));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3649));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3651));
            }
            }
        }
        goto $l3620;
        $l3621:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3653, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3655 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3653, &$s3654);
        if (((panda$core$Bit) { !$tmp3655.nonnull }).value) {
        {
            $tmp3656 = NULL;
            $returnValue3583 = $tmp3656;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3656));
            $tmp3578 = 5;
            goto $l3576;
            $l3657:;
            return $returnValue3583;
        }
        }
        panda$collections$ImmutableArray* $tmp3661 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters3594);
        $tmp3660 = $tmp3661;
        $tmp3659 = $tmp3660;
        $returnValue3583 = $tmp3659;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3659));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3660));
        $tmp3578 = 6;
        goto $l3576;
        $l3662:;
        return $returnValue3583;
    }
    $l3576:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters3594));
    parameters3594 = NULL;
    switch ($tmp3578) {
        case 1: goto $l3592;
        case 6: goto $l3662;
        case 0: goto $l3585;
        case 3: goto $l3629;
        case 2: goto $l3609;
        case 5: goto $l3657;
        case 4: goto $l3642;
    }
    $l3664:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3668;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3669;
    panda$collections$ImmutableArray* $returnValue3672;
    panda$collections$ImmutableArray* $tmp3673;
    panda$collections$Array* result3676 = NULL;
    panda$collections$Array* $tmp3677;
    panda$collections$Array* $tmp3678;
    org$pandalanguage$pandac$ASTNode* t3680 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3681;
    org$pandalanguage$pandac$ASTNode* $tmp3682;
    panda$collections$ImmutableArray* $tmp3684;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3690;
    org$pandalanguage$pandac$ASTNode* $tmp3692;
    org$pandalanguage$pandac$ASTNode* $tmp3693;
    org$pandalanguage$pandac$ASTNode* $tmp3694;
    panda$collections$ImmutableArray* $tmp3696;
    panda$collections$ImmutableArray* $tmp3699;
    panda$collections$ImmutableArray* $tmp3700;
    int $tmp3667;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3669, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3671 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3669, &$s3670);
        start3668 = $tmp3671;
        if (((panda$core$Bit) { !start3668.nonnull }).value) {
        {
            $tmp3673 = NULL;
            $returnValue3672 = $tmp3673;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3673));
            $tmp3667 = 0;
            goto $l3665;
            $l3674:;
            return $returnValue3672;
        }
        }
        panda$collections$Array* $tmp3679 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3679);
        $tmp3678 = $tmp3679;
        $tmp3677 = $tmp3678;
        result3676 = $tmp3677;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3677));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3678));
        org$pandalanguage$pandac$ASTNode* $tmp3683 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3682 = $tmp3683;
        $tmp3681 = $tmp3682;
        t3680 = $tmp3681;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3681));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3682));
        if (((panda$core$Bit) { t3680 == NULL }).value) {
        {
            $tmp3684 = NULL;
            $returnValue3672 = $tmp3684;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3684));
            $tmp3667 = 1;
            goto $l3665;
            $l3685:;
            return $returnValue3672;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result3676, ((panda$core$Object*) t3680));
        $l3687:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3690, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3691 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3690);
        bool $tmp3689 = ((panda$core$Bit) { $tmp3691.nonnull }).value;
        if (!$tmp3689) goto $l3688;
        {
            {
                $tmp3692 = t3680;
                org$pandalanguage$pandac$ASTNode* $tmp3695 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3694 = $tmp3695;
                $tmp3693 = $tmp3694;
                t3680 = $tmp3693;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3693));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3694));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3692));
            }
            if (((panda$core$Bit) { t3680 == NULL }).value) {
            {
                $tmp3696 = NULL;
                $returnValue3672 = $tmp3696;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3696));
                $tmp3667 = 2;
                goto $l3665;
                $l3697:;
                return $returnValue3672;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result3676, ((panda$core$Object*) t3680));
        }
        goto $l3687;
        $l3688:;
        panda$collections$ImmutableArray* $tmp3701 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3676);
        $tmp3700 = $tmp3701;
        $tmp3699 = $tmp3700;
        $returnValue3672 = $tmp3699;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3699));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3700));
        $tmp3667 = 3;
        goto $l3665;
        $l3702:;
        return $returnValue3672;
    }
    $l3665:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3680));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3676));
    result3676 = NULL;
    t3680 = NULL;
    switch ($tmp3667) {
        case 3: goto $l3702;
        case 2: goto $l3697;
        case 1: goto $l3685;
        case 0: goto $l3674;
    }
    $l3704:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a3708;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3709;
    org$pandalanguage$pandac$ASTNode* expr3712 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3713;
    org$pandalanguage$pandac$ASTNode* $tmp3715;
    org$pandalanguage$pandac$ASTNode* $tmp3716;
    org$pandalanguage$pandac$ASTNode* $tmp3717;
    org$pandalanguage$pandac$ASTNode* $returnValue3719;
    org$pandalanguage$pandac$ASTNode* $tmp3720;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3723;
    org$pandalanguage$pandac$ASTNode* $tmp3725;
    org$pandalanguage$pandac$ASTNode* $tmp3726;
    panda$core$String* $tmp3728;
    int $tmp3707;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3709, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3711 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3709, &$s3710);
        a3708 = $tmp3711;
        memset(&expr3712, 0, sizeof(expr3712));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3713, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3714 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3713);
        if (((panda$core$Bit) { $tmp3714.nonnull }).value) {
        {
            {
                $tmp3715 = expr3712;
                org$pandalanguage$pandac$ASTNode* $tmp3718 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3717 = $tmp3718;
                $tmp3716 = $tmp3717;
                expr3712 = $tmp3716;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3716));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3717));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3715));
            }
            if (((panda$core$Bit) { expr3712 == NULL }).value) {
            {
                $tmp3720 = NULL;
                $returnValue3719 = $tmp3720;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3720));
                $tmp3707 = 0;
                goto $l3705;
                $l3721:;
                return $returnValue3719;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3723, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3723, &$s3724);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3727 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3729 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a3708.value));
        $tmp3728 = $tmp3729;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3727, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) a3708.value).position, $tmp3728, expr3712);
        $tmp3726 = $tmp3727;
        $tmp3725 = $tmp3726;
        $returnValue3719 = $tmp3725;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3725));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3726));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3728));
        $tmp3707 = 1;
        goto $l3705;
        $l3730:;
        return $returnValue3719;
    }
    $l3705:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3712));
    switch ($tmp3707) {
        case 1: goto $l3730;
        case 0: goto $l3721;
    }
    $l3732:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result3736 = NULL;
    panda$collections$Array* $tmp3737;
    panda$collections$Array* $tmp3738;
    org$pandalanguage$pandac$ASTNode* a3748 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3749;
    org$pandalanguage$pandac$ASTNode* $tmp3750;
    panda$collections$ImmutableArray* $returnValue3754;
    panda$collections$ImmutableArray* $tmp3755;
    panda$collections$ImmutableArray* $tmp3756;
    int $tmp3735;
    {
        panda$collections$Array* $tmp3739 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3739);
        $tmp3738 = $tmp3739;
        $tmp3737 = $tmp3738;
        result3736 = $tmp3737;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3737));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3738));
        $l3740:;
        org$pandalanguage$pandac$parser$Token $tmp3743 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3743.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3742 = $tmp3744.value;
        if (!$tmp3742) goto $l3741;
        {
            int $tmp3747;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3751 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3750 = $tmp3751;
                $tmp3749 = $tmp3750;
                a3748 = $tmp3749;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3749));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3750));
                if (((panda$core$Bit) { a3748 == NULL }).value) {
                {
                    $tmp3747 = 0;
                    goto $l3745;
                    $l3752:;
                    goto $l3741;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3736, ((panda$core$Object*) a3748));
            }
            $tmp3747 = -1;
            goto $l3745;
            $l3745:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3748));
            a3748 = NULL;
            switch ($tmp3747) {
                case 0: goto $l3752;
                case -1: goto $l3753;
            }
            $l3753:;
        }
        goto $l3740;
        $l3741:;
        panda$collections$ImmutableArray* $tmp3757 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3736);
        $tmp3756 = $tmp3757;
        $tmp3755 = $tmp3756;
        $returnValue3754 = $tmp3755;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3755));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3756));
        $tmp3735 = 0;
        goto $l3733;
        $l3758:;
        return $returnValue3754;
    }
    $l3733:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3736));
    result3736 = NULL;
    switch ($tmp3735) {
        case 0: goto $l3758;
    }
    $l3760:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3764;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3765;
    org$pandalanguage$pandac$ASTNode* $returnValue3768;
    org$pandalanguage$pandac$ASTNode* $tmp3769;
    panda$core$MutableString* result3772 = NULL;
    panda$core$MutableString* $tmp3773;
    panda$core$MutableString* $tmp3774;
    org$pandalanguage$pandac$parser$Token next3778;
    org$pandalanguage$pandac$ASTNode* $tmp3783;
    panda$core$String* $tmp3786;
    org$pandalanguage$pandac$ASTNode* $tmp3788;
    org$pandalanguage$pandac$ASTNode* $tmp3789;
    panda$core$String* $tmp3791;
    int $tmp3763;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3765, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3767 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3765, &$s3766);
        start3764 = $tmp3767;
        if (((panda$core$Bit) { !start3764.nonnull }).value) {
        {
            $tmp3769 = NULL;
            $returnValue3768 = $tmp3769;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3769));
            $tmp3763 = 0;
            goto $l3761;
            $l3770:;
            return $returnValue3768;
        }
        }
        panda$core$MutableString* $tmp3775 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp3775);
        $tmp3774 = $tmp3775;
        $tmp3773 = $tmp3774;
        result3772 = $tmp3773;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3773));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3774));
        $l3776:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3779 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next3778 = $tmp3779;
            panda$core$Bit $tmp3780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3778.kind.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp3780.value) {
            {
                goto $l3777;
            }
            }
            panda$core$Bit $tmp3781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3778.kind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp3781.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3764.value), &$s3782);
                $tmp3783 = NULL;
                $returnValue3768 = $tmp3783;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3783));
                $tmp3763 = 1;
                goto $l3761;
                $l3784:;
                return $returnValue3768;
            }
            }
            panda$core$String* $tmp3787 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3778);
            $tmp3786 = $tmp3787;
            panda$core$MutableString$append$panda$core$String(result3772, $tmp3786);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3786));
        }
        }
        $l3777:;
        org$pandalanguage$pandac$ASTNode* $tmp3790 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3792 = panda$core$MutableString$finish$R$panda$core$String(result3772);
        $tmp3791 = $tmp3792;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3790, ((panda$core$Int64) { 38 }), ((org$pandalanguage$pandac$parser$Token) start3764.value).position, $tmp3791);
        $tmp3789 = $tmp3790;
        $tmp3788 = $tmp3789;
        $returnValue3768 = $tmp3788;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3788));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3789));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3791));
        $tmp3763 = 2;
        goto $l3761;
        $l3793:;
        return $returnValue3768;
    }
    $l3761:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3772));
    result3772 = NULL;
    switch ($tmp3763) {
        case 1: goto $l3784;
        case 2: goto $l3793;
        case 0: goto $l3770;
    }
    $l3795:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id3799;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3800;
    org$pandalanguage$pandac$ASTNode* $returnValue3803;
    org$pandalanguage$pandac$ASTNode* $tmp3804;
    org$pandalanguage$pandac$ASTNode* t3807 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3808;
    org$pandalanguage$pandac$ASTNode* $tmp3809;
    org$pandalanguage$pandac$ASTNode* $tmp3811;
    org$pandalanguage$pandac$ASTNode* $tmp3814;
    org$pandalanguage$pandac$ASTNode* $tmp3815;
    panda$core$String* $tmp3817;
    int $tmp3798;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3800, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3802 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3800, &$s3801);
        id3799 = $tmp3802;
        if (((panda$core$Bit) { !id3799.nonnull }).value) {
        {
            $tmp3804 = NULL;
            $returnValue3803 = $tmp3804;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3804));
            $tmp3798 = 0;
            goto $l3796;
            $l3805:;
            return $returnValue3803;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3810 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3809 = $tmp3810;
        $tmp3808 = $tmp3809;
        t3807 = $tmp3808;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3808));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3809));
        if (((panda$core$Bit) { t3807 == NULL }).value) {
        {
            $tmp3811 = NULL;
            $returnValue3803 = $tmp3811;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3811));
            $tmp3798 = 1;
            goto $l3796;
            $l3812:;
            return $returnValue3803;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3816 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3818 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3799.value));
        $tmp3817 = $tmp3818;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp3816, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) id3799.value).position, $tmp3817, t3807);
        $tmp3815 = $tmp3816;
        $tmp3814 = $tmp3815;
        $returnValue3803 = $tmp3814;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3814));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3815));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3817));
        $tmp3798 = 2;
        goto $l3796;
        $l3819:;
        return $returnValue3803;
    }
    $l3796:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3807));
    t3807 = NULL;
    switch ($tmp3798) {
        case 2: goto $l3819;
        case 1: goto $l3812;
        case 0: goto $l3805;
    }
    $l3821:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3825;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3826;
    panda$collections$ImmutableArray* $returnValue3829;
    panda$collections$ImmutableArray* $tmp3830;
    panda$collections$Array* result3833 = NULL;
    panda$collections$Array* $tmp3834;
    panda$collections$Array* $tmp3835;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3837;
    org$pandalanguage$pandac$ASTNode* param3842 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3843;
    org$pandalanguage$pandac$ASTNode* $tmp3844;
    panda$collections$ImmutableArray* $tmp3846;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3853;
    org$pandalanguage$pandac$ASTNode* $tmp3855;
    org$pandalanguage$pandac$ASTNode* $tmp3856;
    org$pandalanguage$pandac$ASTNode* $tmp3857;
    panda$collections$ImmutableArray* $tmp3859;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3863;
    panda$collections$ImmutableArray* $tmp3866;
    panda$collections$ImmutableArray* $tmp3871;
    panda$collections$ImmutableArray* $tmp3872;
    int $tmp3824;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3826, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3828 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3826, &$s3827);
        start3825 = $tmp3828;
        if (((panda$core$Bit) { !start3825.nonnull }).value) {
        {
            $tmp3830 = NULL;
            $returnValue3829 = $tmp3830;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3830));
            $tmp3824 = 0;
            goto $l3822;
            $l3831:;
            return $returnValue3829;
        }
        }
        panda$collections$Array* $tmp3836 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3836);
        $tmp3835 = $tmp3836;
        $tmp3834 = $tmp3835;
        result3833 = $tmp3834;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3834));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3835));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3837, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3838 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3837);
        if (((panda$core$Bit) { !$tmp3838.nonnull }).value) {
        {
            int $tmp3841;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3845 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3844 = $tmp3845;
                $tmp3843 = $tmp3844;
                param3842 = $tmp3843;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3843));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3844));
                if (((panda$core$Bit) { param3842 == NULL }).value) {
                {
                    $tmp3846 = NULL;
                    $returnValue3829 = $tmp3846;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3846));
                    $tmp3841 = 0;
                    goto $l3839;
                    $l3847:;
                    $tmp3824 = 1;
                    goto $l3822;
                    $l3848:;
                    return $returnValue3829;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3833, ((panda$core$Object*) param3842));
                $l3850:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3853, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3854 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3853);
                bool $tmp3852 = ((panda$core$Bit) { $tmp3854.nonnull }).value;
                if (!$tmp3852) goto $l3851;
                {
                    {
                        $tmp3855 = param3842;
                        org$pandalanguage$pandac$ASTNode* $tmp3858 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3857 = $tmp3858;
                        $tmp3856 = $tmp3857;
                        param3842 = $tmp3856;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3856));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3857));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3855));
                    }
                    if (((panda$core$Bit) { param3842 == NULL }).value) {
                    {
                        $tmp3859 = NULL;
                        $returnValue3829 = $tmp3859;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3859));
                        $tmp3841 = 1;
                        goto $l3839;
                        $l3860:;
                        $tmp3824 = 2;
                        goto $l3822;
                        $l3861:;
                        return $returnValue3829;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result3833, ((panda$core$Object*) param3842));
                }
                goto $l3850;
                $l3851:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3863, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3865 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3863, &$s3864);
                if (((panda$core$Bit) { !$tmp3865.nonnull }).value) {
                {
                    $tmp3866 = NULL;
                    $returnValue3829 = $tmp3866;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3866));
                    $tmp3841 = 2;
                    goto $l3839;
                    $l3867:;
                    $tmp3824 = 3;
                    goto $l3822;
                    $l3868:;
                    return $returnValue3829;
                }
                }
            }
            $tmp3841 = -1;
            goto $l3839;
            $l3839:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param3842));
            param3842 = NULL;
            switch ($tmp3841) {
                case 1: goto $l3860;
                case -1: goto $l3870;
                case 2: goto $l3867;
                case 0: goto $l3847;
            }
            $l3870:;
        }
        }
        panda$collections$ImmutableArray* $tmp3873 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3833);
        $tmp3872 = $tmp3873;
        $tmp3871 = $tmp3872;
        $returnValue3829 = $tmp3871;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3871));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3872));
        $tmp3824 = 4;
        goto $l3822;
        $l3874:;
        return $returnValue3829;
    }
    $l3822:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3833));
    result3833 = NULL;
    switch ($tmp3824) {
        case 1: goto $l3848;
        case 2: goto $l3861;
        case 4: goto $l3874;
        case 3: goto $l3868;
        case 0: goto $l3831;
    }
    $l3876:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3880;
    org$pandalanguage$pandac$parser$Token$nullable start3881;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3882;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3884;
    org$pandalanguage$pandac$ASTNode* $returnValue3887;
    org$pandalanguage$pandac$ASTNode* $tmp3888;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3891;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3892;
    panda$core$String* name3893 = NULL;
    panda$core$String* $tmp3894;
    panda$core$String* $tmp3895;
    org$pandalanguage$pandac$ASTNode* $tmp3897;
    panda$collections$ImmutableArray* generics3900 = NULL;
    panda$collections$ImmutableArray* $tmp3903;
    panda$collections$ImmutableArray* $tmp3904;
    panda$collections$ImmutableArray* $tmp3905;
    panda$collections$ImmutableArray* $tmp3907;
    panda$collections$ImmutableArray* $tmp3908;
    panda$collections$ImmutableArray* params3909 = NULL;
    panda$collections$ImmutableArray* $tmp3910;
    panda$collections$ImmutableArray* $tmp3911;
    org$pandalanguage$pandac$ASTNode* $tmp3913;
    org$pandalanguage$pandac$ASTNode* returnType3916 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3919;
    org$pandalanguage$pandac$ASTNode* $tmp3920;
    org$pandalanguage$pandac$ASTNode* $tmp3921;
    org$pandalanguage$pandac$ASTNode* $tmp3923;
    org$pandalanguage$pandac$ASTNode* $tmp3926;
    org$pandalanguage$pandac$ASTNode* $tmp3927;
    panda$collections$ImmutableArray* body3928 = NULL;
    panda$collections$ImmutableArray* $tmp3931;
    panda$collections$ImmutableArray* $tmp3932;
    panda$collections$ImmutableArray* $tmp3933;
    org$pandalanguage$pandac$ASTNode* $tmp3935;
    panda$collections$ImmutableArray* $tmp3938;
    panda$collections$ImmutableArray* $tmp3939;
    org$pandalanguage$pandac$ASTNode* $tmp3940;
    org$pandalanguage$pandac$ASTNode* $tmp3941;
    int $tmp3879;
    {
        memset(&kind3880, 0, sizeof(kind3880));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3882, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3883 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3882);
        start3881 = $tmp3883;
        if (((panda$core$Bit) { !start3881.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3884, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3886 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3884, &$s3885);
            start3881 = $tmp3886;
            if (((panda$core$Bit) { !start3881.nonnull }).value) {
            {
                $tmp3888 = NULL;
                $returnValue3887 = $tmp3888;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3888));
                $tmp3879 = 0;
                goto $l3877;
                $l3889:;
                return $returnValue3887;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3891, ((panda$core$Int64) { 0 }));
            kind3880 = $tmp3891;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3892, ((panda$core$Int64) { 1 }));
            kind3880 = $tmp3892;
        }
        }
        panda$core$String* $tmp3896 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp3895 = $tmp3896;
        $tmp3894 = $tmp3895;
        name3893 = $tmp3894;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3894));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3895));
        if (((panda$core$Bit) { name3893 == NULL }).value) {
        {
            $tmp3897 = NULL;
            $returnValue3887 = $tmp3897;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3897));
            $tmp3879 = 1;
            goto $l3877;
            $l3898:;
            return $returnValue3887;
        }
        }
        memset(&generics3900, 0, sizeof(generics3900));
        org$pandalanguage$pandac$parser$Token $tmp3901 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3901.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp3902.value) {
        {
            {
                $tmp3903 = generics3900;
                panda$collections$ImmutableArray* $tmp3906 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3905 = $tmp3906;
                $tmp3904 = $tmp3905;
                generics3900 = $tmp3904;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3904));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3905));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3903));
            }
        }
        }
        else {
        {
            {
                $tmp3907 = generics3900;
                $tmp3908 = NULL;
                generics3900 = $tmp3908;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3908));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3907));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3912 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3911 = $tmp3912;
        $tmp3910 = $tmp3911;
        params3909 = $tmp3910;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3910));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3911));
        if (((panda$core$Bit) { params3909 == NULL }).value) {
        {
            $tmp3913 = NULL;
            $returnValue3887 = $tmp3913;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3913));
            $tmp3879 = 2;
            goto $l3877;
            $l3914:;
            return $returnValue3887;
        }
        }
        memset(&returnType3916, 0, sizeof(returnType3916));
        org$pandalanguage$pandac$parser$Token $tmp3917 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3917.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3918.value) {
        {
            {
                $tmp3919 = returnType3916;
                org$pandalanguage$pandac$ASTNode* $tmp3922 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3921 = $tmp3922;
                $tmp3920 = $tmp3921;
                returnType3916 = $tmp3920;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3920));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3921));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3919));
            }
            if (((panda$core$Bit) { returnType3916 == NULL }).value) {
            {
                $tmp3923 = NULL;
                $returnValue3887 = $tmp3923;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3923));
                $tmp3879 = 3;
                goto $l3877;
                $l3924:;
                return $returnValue3887;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3926 = returnType3916;
                $tmp3927 = NULL;
                returnType3916 = $tmp3927;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3927));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3926));
            }
        }
        }
        memset(&body3928, 0, sizeof(body3928));
        org$pandalanguage$pandac$parser$Token $tmp3929 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3929.kind.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp3930.value) {
        {
            {
                $tmp3931 = body3928;
                panda$collections$ImmutableArray* $tmp3934 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3933 = $tmp3934;
                $tmp3932 = $tmp3933;
                body3928 = $tmp3932;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3932));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3933));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3931));
            }
            if (((panda$core$Bit) { body3928 == NULL }).value) {
            {
                $tmp3935 = NULL;
                $returnValue3887 = $tmp3935;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3935));
                $tmp3879 = 4;
                goto $l3877;
                $l3936:;
                return $returnValue3887;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3938 = body3928;
                $tmp3939 = NULL;
                body3928 = $tmp3939;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3939));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3938));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3942 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3942, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3881.value).position, p_doccomment, p_annotations, kind3880, name3893, generics3900, params3909, returnType3916, body3928);
        $tmp3941 = $tmp3942;
        $tmp3940 = $tmp3941;
        $returnValue3887 = $tmp3940;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3940));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3941));
        $tmp3879 = 5;
        goto $l3877;
        $l3943:;
        return $returnValue3887;
    }
    $l3877:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3928));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3916));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3909));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3900));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3893));
    name3893 = NULL;
    params3909 = NULL;
    switch ($tmp3879) {
        case 4: goto $l3936;
        case 1: goto $l3898;
        case 5: goto $l3943;
        case 3: goto $l3924;
        case 2: goto $l3914;
        case 0: goto $l3889;
    }
    $l3945:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3949;
    org$pandalanguage$pandac$parser$Token$nullable start3950;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3951;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3953;
    org$pandalanguage$pandac$ASTNode* $returnValue3956;
    org$pandalanguage$pandac$ASTNode* $tmp3957;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3960;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3961;
    panda$collections$ImmutableArray* params3962 = NULL;
    panda$collections$ImmutableArray* $tmp3963;
    panda$collections$ImmutableArray* $tmp3964;
    org$pandalanguage$pandac$ASTNode* $tmp3966;
    org$pandalanguage$pandac$ASTNode* returnType3969 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3972;
    org$pandalanguage$pandac$ASTNode* $tmp3973;
    org$pandalanguage$pandac$ASTNode* $tmp3974;
    org$pandalanguage$pandac$ASTNode* $tmp3976;
    org$pandalanguage$pandac$ASTNode* $tmp3979;
    org$pandalanguage$pandac$ASTNode* $tmp3980;
    panda$collections$ImmutableArray* body3981 = NULL;
    panda$collections$ImmutableArray* $tmp3982;
    panda$collections$ImmutableArray* $tmp3983;
    org$pandalanguage$pandac$ASTNode* $tmp3985;
    org$pandalanguage$pandac$ASTNode* $tmp3988;
    org$pandalanguage$pandac$ASTNode* $tmp3989;
    panda$collections$ImmutableArray* $tmp3991;
    int $tmp3948;
    {
        memset(&kind3949, 0, sizeof(kind3949));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3951, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3952 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3951);
        start3950 = $tmp3952;
        if (((panda$core$Bit) { !start3950.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3953, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3955 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3953, &$s3954);
            start3950 = $tmp3955;
            if (((panda$core$Bit) { !start3950.nonnull }).value) {
            {
                $tmp3957 = NULL;
                $returnValue3956 = $tmp3957;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3957));
                $tmp3948 = 0;
                goto $l3946;
                $l3958:;
                return $returnValue3956;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3960, ((panda$core$Int64) { 0 }));
            kind3949 = $tmp3960;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3961, ((panda$core$Int64) { 1 }));
            kind3949 = $tmp3961;
        }
        }
        panda$collections$ImmutableArray* $tmp3965 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3964 = $tmp3965;
        $tmp3963 = $tmp3964;
        params3962 = $tmp3963;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3963));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3964));
        if (((panda$core$Bit) { params3962 == NULL }).value) {
        {
            $tmp3966 = NULL;
            $returnValue3956 = $tmp3966;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3966));
            $tmp3948 = 1;
            goto $l3946;
            $l3967:;
            return $returnValue3956;
        }
        }
        memset(&returnType3969, 0, sizeof(returnType3969));
        org$pandalanguage$pandac$parser$Token $tmp3970 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3970.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3971.value) {
        {
            {
                $tmp3972 = returnType3969;
                org$pandalanguage$pandac$ASTNode* $tmp3975 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3974 = $tmp3975;
                $tmp3973 = $tmp3974;
                returnType3969 = $tmp3973;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3973));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3974));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3972));
            }
            if (((panda$core$Bit) { returnType3969 == NULL }).value) {
            {
                $tmp3976 = NULL;
                $returnValue3956 = $tmp3976;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3976));
                $tmp3948 = 2;
                goto $l3946;
                $l3977:;
                return $returnValue3956;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3979 = returnType3969;
                $tmp3980 = NULL;
                returnType3969 = $tmp3980;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3980));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3979));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3984 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3983 = $tmp3984;
        $tmp3982 = $tmp3983;
        body3981 = $tmp3982;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3982));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3983));
        if (((panda$core$Bit) { body3981 == NULL }).value) {
        {
            $tmp3985 = NULL;
            $returnValue3956 = $tmp3985;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3985));
            $tmp3948 = 3;
            goto $l3946;
            $l3986:;
            return $returnValue3956;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3990 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp3992 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3992);
        $tmp3991 = $tmp3992;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3990, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3950.value).position, NULL, $tmp3991, kind3949, &$s3993, NULL, params3962, returnType3969, body3981);
        $tmp3989 = $tmp3990;
        $tmp3988 = $tmp3989;
        $returnValue3956 = $tmp3988;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3988));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3989));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3991));
        $tmp3948 = 4;
        goto $l3946;
        $l3994:;
        return $returnValue3956;
    }
    $l3946:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3981));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3969));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3962));
    params3962 = NULL;
    body3981 = NULL;
    switch ($tmp3948) {
        case 2: goto $l3977;
        case 4: goto $l3994;
        case 3: goto $l3986;
        case 0: goto $l3958;
        case 1: goto $l3967;
    }
    $l3996:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4000;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4001;
    org$pandalanguage$pandac$ASTNode* $returnValue4004;
    org$pandalanguage$pandac$ASTNode* $tmp4005;
    panda$collections$ImmutableArray* params4008 = NULL;
    panda$collections$ImmutableArray* $tmp4009;
    panda$collections$ImmutableArray* $tmp4010;
    org$pandalanguage$pandac$ASTNode* $tmp4012;
    panda$collections$ImmutableArray* b4015 = NULL;
    panda$collections$ImmutableArray* $tmp4016;
    panda$collections$ImmutableArray* $tmp4017;
    org$pandalanguage$pandac$ASTNode* $tmp4019;
    org$pandalanguage$pandac$ASTNode* $tmp4022;
    org$pandalanguage$pandac$ASTNode* $tmp4023;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4025;
    int $tmp3999;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4001, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4003 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4001, &$s4002);
        start4000 = $tmp4003;
        if (((panda$core$Bit) { !start4000.nonnull }).value) {
        {
            $tmp4005 = NULL;
            $returnValue4004 = $tmp4005;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4005));
            $tmp3999 = 0;
            goto $l3997;
            $l4006:;
            return $returnValue4004;
        }
        }
        panda$collections$ImmutableArray* $tmp4011 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4010 = $tmp4011;
        $tmp4009 = $tmp4010;
        params4008 = $tmp4009;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4009));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4010));
        if (((panda$core$Bit) { params4008 == NULL }).value) {
        {
            $tmp4012 = NULL;
            $returnValue4004 = $tmp4012;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4012));
            $tmp3999 = 1;
            goto $l3997;
            $l4013:;
            return $returnValue4004;
        }
        }
        panda$collections$ImmutableArray* $tmp4018 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4017 = $tmp4018;
        $tmp4016 = $tmp4017;
        b4015 = $tmp4016;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4016));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4017));
        if (((panda$core$Bit) { b4015 == NULL }).value) {
        {
            $tmp4019 = NULL;
            $returnValue4004 = $tmp4019;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4019));
            $tmp3999 = 2;
            goto $l3997;
            $l4020:;
            return $returnValue4004;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4024 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4025, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4024, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start4000.value).position, p_doccomment, p_annotations, $tmp4025, &$s4026, NULL, params4008, NULL, b4015);
        $tmp4023 = $tmp4024;
        $tmp4022 = $tmp4023;
        $returnValue4004 = $tmp4022;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4022));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4023));
        $tmp3999 = 3;
        goto $l3997;
        $l4027:;
        return $returnValue4004;
    }
    $l3997:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b4015));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4008));
    params4008 = NULL;
    b4015 = NULL;
    switch ($tmp3999) {
        case 1: goto $l4013;
        case 2: goto $l4020;
        case 0: goto $l4006;
        case 3: goto $l4027;
    }
    $l4029:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl4033 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4034;
    org$pandalanguage$pandac$ASTNode* $tmp4035;
    org$pandalanguage$pandac$ASTNode* $returnValue4037;
    org$pandalanguage$pandac$ASTNode* $tmp4038;
    org$pandalanguage$pandac$ASTNode* $tmp4041;
    org$pandalanguage$pandac$ASTNode* $tmp4042;
    int $tmp4032;
    {
        org$pandalanguage$pandac$ASTNode* $tmp4036 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4035 = $tmp4036;
        $tmp4034 = $tmp4035;
        decl4033 = $tmp4034;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4034));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4035));
        if (((panda$core$Bit) { decl4033 == NULL }).value) {
        {
            $tmp4038 = NULL;
            $returnValue4037 = $tmp4038;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4038));
            $tmp4032 = 0;
            goto $l4030;
            $l4039:;
            return $returnValue4037;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4043 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp4045 = (($fn4044) decl4033->$class->vtable[2])(decl4033);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4043, ((panda$core$Int64) { 16 }), $tmp4045, p_doccomment, p_annotations, decl4033);
        $tmp4042 = $tmp4043;
        $tmp4041 = $tmp4042;
        $returnValue4037 = $tmp4041;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4041));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4042));
        $tmp4032 = 1;
        goto $l4030;
        $l4046:;
        return $returnValue4037;
    }
    $l4030:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4033));
    decl4033 = NULL;
    switch ($tmp4032) {
        case 1: goto $l4046;
        case 0: goto $l4039;
    }
    $l4048:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name4052;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4053;
    org$pandalanguage$pandac$ASTNode* $returnValue4056;
    org$pandalanguage$pandac$ASTNode* $tmp4057;
    panda$collections$Array* fields4060 = NULL;
    panda$collections$Array* $tmp4061;
    panda$collections$Array* $tmp4062;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4064;
    org$pandalanguage$pandac$ASTNode* field4071 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4072;
    org$pandalanguage$pandac$ASTNode* $tmp4073;
    org$pandalanguage$pandac$ASTNode* $tmp4075;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4082;
    org$pandalanguage$pandac$ASTNode* $tmp4084;
    org$pandalanguage$pandac$ASTNode* $tmp4085;
    org$pandalanguage$pandac$ASTNode* $tmp4086;
    org$pandalanguage$pandac$ASTNode* $tmp4088;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4093;
    org$pandalanguage$pandac$ASTNode* $tmp4096;
    org$pandalanguage$pandac$ASTNode* $tmp4099;
    org$pandalanguage$pandac$ASTNode* $tmp4100;
    panda$core$String* $tmp4102;
    panda$collections$ImmutableArray* $tmp4104;
    int $tmp4051;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4053, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4055 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4053, &$s4054);
        name4052 = $tmp4055;
        if (((panda$core$Bit) { !name4052.nonnull }).value) {
        {
            $tmp4057 = NULL;
            $returnValue4056 = $tmp4057;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4057));
            $tmp4051 = 0;
            goto $l4049;
            $l4058:;
            return $returnValue4056;
        }
        }
        panda$collections$Array* $tmp4063 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4063);
        $tmp4062 = $tmp4063;
        $tmp4061 = $tmp4062;
        fields4060 = $tmp4061;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4061));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4062));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4064, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4065 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4064);
        if (((panda$core$Bit) { $tmp4065.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4066 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp4067 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4066.kind.$rawValue, ((panda$core$Int64) { 104 }));
            if ($tmp4067.value) {
            {
                int $tmp4070;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4074 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4073 = $tmp4074;
                    $tmp4072 = $tmp4073;
                    field4071 = $tmp4072;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4072));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4073));
                    if (((panda$core$Bit) { field4071 == NULL }).value) {
                    {
                        $tmp4075 = NULL;
                        $returnValue4056 = $tmp4075;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4075));
                        $tmp4070 = 0;
                        goto $l4068;
                        $l4076:;
                        $tmp4051 = 1;
                        goto $l4049;
                        $l4077:;
                        return $returnValue4056;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields4060, ((panda$core$Object*) field4071));
                    $l4079:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4082, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp4083 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4082);
                    bool $tmp4081 = ((panda$core$Bit) { $tmp4083.nonnull }).value;
                    if (!$tmp4081) goto $l4080;
                    {
                        {
                            $tmp4084 = field4071;
                            org$pandalanguage$pandac$ASTNode* $tmp4087 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp4086 = $tmp4087;
                            $tmp4085 = $tmp4086;
                            field4071 = $tmp4085;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4085));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4086));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4084));
                        }
                        if (((panda$core$Bit) { field4071 == NULL }).value) {
                        {
                            $tmp4088 = NULL;
                            $returnValue4056 = $tmp4088;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4088));
                            $tmp4070 = 1;
                            goto $l4068;
                            $l4089:;
                            $tmp4051 = 2;
                            goto $l4049;
                            $l4090:;
                            return $returnValue4056;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields4060, ((panda$core$Object*) field4071));
                    }
                    goto $l4079;
                    $l4080:;
                }
                $tmp4070 = -1;
                goto $l4068;
                $l4068:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4071));
                field4071 = NULL;
                switch ($tmp4070) {
                    case -1: goto $l4092;
                    case 1: goto $l4089;
                    case 0: goto $l4076;
                }
                $l4092:;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4093, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp4095 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4093, &$s4094);
            if (((panda$core$Bit) { !$tmp4095.nonnull }).value) {
            {
                $tmp4096 = NULL;
                $returnValue4056 = $tmp4096;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4096));
                $tmp4051 = 3;
                goto $l4049;
                $l4097:;
                return $returnValue4056;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4101 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp4103 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4052.value));
        $tmp4102 = $tmp4103;
        panda$collections$ImmutableArray* $tmp4105 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields4060);
        $tmp4104 = $tmp4105;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4101, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) name4052.value).position, p_doccomment, $tmp4102, $tmp4104);
        $tmp4100 = $tmp4101;
        $tmp4099 = $tmp4100;
        $returnValue4056 = $tmp4099;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4099));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4102));
        $tmp4051 = 4;
        goto $l4049;
        $l4106:;
        return $returnValue4056;
    }
    $l4049:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields4060));
    fields4060 = NULL;
    switch ($tmp4051) {
        case 4: goto $l4106;
        case 2: goto $l4090;
        case 3: goto $l4097;
        case 1: goto $l4077;
        case 0: goto $l4058;
    }
    $l4108:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4112;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4113;
    org$pandalanguage$pandac$ASTNode* $returnValue4116;
    org$pandalanguage$pandac$ASTNode* $tmp4117;
    org$pandalanguage$pandac$parser$Token$nullable name4120;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4121;
    org$pandalanguage$pandac$ASTNode* $tmp4124;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4127;
    org$pandalanguage$pandac$ASTNode* $tmp4130;
    panda$collections$Array* members4133 = NULL;
    panda$collections$Array* $tmp4134;
    panda$collections$Array* $tmp4135;
    org$pandalanguage$pandac$ASTNode* dc4137 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4138;
    org$pandalanguage$pandac$parser$Token next4141;
    org$pandalanguage$pandac$parser$Token$Kind $match$2184_134143;
    panda$core$String* $tmp4182;
    panda$core$String* $tmp4183;
    panda$core$String* $tmp4185;
    org$pandalanguage$pandac$ASTNode* $tmp4190;
    org$pandalanguage$pandac$ASTNode* $tmp4191;
    org$pandalanguage$pandac$ASTNode* $tmp4192;
    org$pandalanguage$pandac$ASTNode* c4198 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4199;
    org$pandalanguage$pandac$ASTNode* $tmp4200;
    org$pandalanguage$pandac$ASTNode* $tmp4202;
    org$pandalanguage$pandac$ASTNode* $tmp4206;
    org$pandalanguage$pandac$ASTNode* $tmp4207;
    panda$collections$ImmutableArray* a4209 = NULL;
    panda$collections$ImmutableArray* $tmp4210;
    panda$collections$ImmutableArray* $tmp4211;
    org$pandalanguage$pandac$parser$Token next4215;
    org$pandalanguage$pandac$parser$Token$Kind $match$2208_134217;
    panda$core$String* $tmp4221;
    panda$core$String* $tmp4222;
    panda$core$String* $tmp4224;
    org$pandalanguage$pandac$ASTNode* $tmp4229;
    panda$collections$ImmutableArray* $tmp4232;
    panda$collections$ImmutableArray* $tmp4233;
    panda$collections$ImmutableArray* $tmp4234;
    panda$core$String* $tmp4242;
    panda$core$String* $tmp4243;
    panda$core$String* $tmp4245;
    org$pandalanguage$pandac$ASTNode* $tmp4250;
    org$pandalanguage$pandac$ASTNode* $tmp4253;
    org$pandalanguage$pandac$ASTNode* $tmp4254;
    org$pandalanguage$pandac$ASTNode* $tmp4255;
    org$pandalanguage$pandac$ASTNode* decl4261 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4262;
    org$pandalanguage$pandac$ASTNode* $tmp4263;
    org$pandalanguage$pandac$ASTNode* $tmp4265;
    org$pandalanguage$pandac$ASTNode* $tmp4269;
    org$pandalanguage$pandac$ASTNode* $tmp4270;
    panda$collections$ImmutableArray* $tmp4271;
    panda$collections$ImmutableArray* $tmp4272;
    panda$collections$ImmutableArray* $tmp4273;
    org$pandalanguage$pandac$ASTNode* decl4280 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4281;
    org$pandalanguage$pandac$ASTNode* $tmp4282;
    org$pandalanguage$pandac$ASTNode* $tmp4284;
    org$pandalanguage$pandac$ASTNode* $tmp4288;
    org$pandalanguage$pandac$ASTNode* $tmp4289;
    panda$collections$ImmutableArray* $tmp4290;
    panda$collections$ImmutableArray* $tmp4291;
    panda$collections$ImmutableArray* $tmp4292;
    org$pandalanguage$pandac$ASTNode* decl4299 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4300;
    org$pandalanguage$pandac$ASTNode* $tmp4301;
    org$pandalanguage$pandac$ASTNode* $tmp4303;
    org$pandalanguage$pandac$ASTNode* $tmp4307;
    org$pandalanguage$pandac$ASTNode* $tmp4308;
    panda$collections$ImmutableArray* $tmp4309;
    panda$collections$ImmutableArray* $tmp4310;
    panda$collections$ImmutableArray* $tmp4311;
    org$pandalanguage$pandac$ASTNode* decl4322 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4323;
    org$pandalanguage$pandac$ASTNode* $tmp4324;
    org$pandalanguage$pandac$ASTNode* $tmp4326;
    org$pandalanguage$pandac$ASTNode* $tmp4330;
    org$pandalanguage$pandac$ASTNode* $tmp4331;
    panda$collections$ImmutableArray* $tmp4332;
    panda$collections$ImmutableArray* $tmp4333;
    panda$collections$ImmutableArray* $tmp4334;
    org$pandalanguage$pandac$ASTNode* decl4353 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4354;
    org$pandalanguage$pandac$ASTNode* $tmp4355;
    org$pandalanguage$pandac$ASTNode* $tmp4357;
    org$pandalanguage$pandac$ASTNode* $tmp4361;
    org$pandalanguage$pandac$ASTNode* $tmp4362;
    panda$collections$ImmutableArray* $tmp4363;
    panda$collections$ImmutableArray* $tmp4364;
    panda$collections$ImmutableArray* $tmp4365;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4369;
    panda$core$String* $tmp4371;
    panda$core$String* $tmp4372;
    panda$core$String* $tmp4374;
    org$pandalanguage$pandac$ASTNode* $tmp4379;
    org$pandalanguage$pandac$ASTNode* $tmp4382;
    org$pandalanguage$pandac$ASTNode* $tmp4383;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4385;
    panda$core$String* $tmp4386;
    panda$collections$ImmutableArray* $tmp4388;
    int $tmp4111;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4113, ((panda$core$Int64) { 19 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4115 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4113, &$s4114);
        start4112 = $tmp4115;
        if (((panda$core$Bit) { !start4112.nonnull }).value) {
        {
            $tmp4117 = NULL;
            $returnValue4116 = $tmp4117;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4117));
            $tmp4111 = 0;
            goto $l4109;
            $l4118:;
            return $returnValue4116;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4121, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4123 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4121, &$s4122);
        name4120 = $tmp4123;
        if (((panda$core$Bit) { !name4120.nonnull }).value) {
        {
            $tmp4124 = NULL;
            $returnValue4116 = $tmp4124;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4124));
            $tmp4111 = 1;
            goto $l4109;
            $l4125:;
            return $returnValue4116;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4127, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4129 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4127, &$s4128);
        if (((panda$core$Bit) { !$tmp4129.nonnull }).value) {
        {
            $tmp4130 = NULL;
            $returnValue4116 = $tmp4130;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4130));
            $tmp4111 = 2;
            goto $l4109;
            $l4131:;
            return $returnValue4116;
        }
        }
        panda$collections$Array* $tmp4136 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4136);
        $tmp4135 = $tmp4136;
        $tmp4134 = $tmp4135;
        members4133 = $tmp4134;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4134));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4135));
        $tmp4138 = NULL;
        dc4137 = $tmp4138;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4138));
        $l4139:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4142 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4141 = $tmp4142;
            {
                $match$2184_134143 = next4141.kind;
                panda$core$Bit $tmp4153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134143.$rawValue, ((panda$core$Int64) { 17 }));
                bool $tmp4152 = $tmp4153.value;
                if ($tmp4152) goto $l4154;
                panda$core$Bit $tmp4155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134143.$rawValue, ((panda$core$Int64) { 18 }));
                $tmp4152 = $tmp4155.value;
                $l4154:;
                panda$core$Bit $tmp4156 = { $tmp4152 };
                bool $tmp4151 = $tmp4156.value;
                if ($tmp4151) goto $l4157;
                panda$core$Bit $tmp4158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134143.$rawValue, ((panda$core$Int64) { 19 }));
                $tmp4151 = $tmp4158.value;
                $l4157:;
                panda$core$Bit $tmp4159 = { $tmp4151 };
                bool $tmp4150 = $tmp4159.value;
                if ($tmp4150) goto $l4160;
                panda$core$Bit $tmp4161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134143.$rawValue, ((panda$core$Int64) { 21 }));
                $tmp4150 = $tmp4161.value;
                $l4160:;
                panda$core$Bit $tmp4162 = { $tmp4150 };
                bool $tmp4149 = $tmp4162.value;
                if ($tmp4149) goto $l4163;
                panda$core$Bit $tmp4164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134143.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp4149 = $tmp4164.value;
                $l4163:;
                panda$core$Bit $tmp4165 = { $tmp4149 };
                bool $tmp4148 = $tmp4165.value;
                if ($tmp4148) goto $l4166;
                panda$core$Bit $tmp4167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134143.$rawValue, ((panda$core$Int64) { 13 }));
                $tmp4148 = $tmp4167.value;
                $l4166:;
                panda$core$Bit $tmp4168 = { $tmp4148 };
                bool $tmp4147 = $tmp4168.value;
                if ($tmp4147) goto $l4169;
                panda$core$Bit $tmp4170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134143.$rawValue, ((panda$core$Int64) { 23 }));
                $tmp4147 = $tmp4170.value;
                $l4169:;
                panda$core$Bit $tmp4171 = { $tmp4147 };
                bool $tmp4146 = $tmp4171.value;
                if ($tmp4146) goto $l4172;
                panda$core$Bit $tmp4173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134143.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp4146 = $tmp4173.value;
                $l4172:;
                panda$core$Bit $tmp4174 = { $tmp4146 };
                bool $tmp4145 = $tmp4174.value;
                if ($tmp4145) goto $l4175;
                panda$core$Bit $tmp4176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134143.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp4145 = $tmp4176.value;
                $l4175:;
                panda$core$Bit $tmp4177 = { $tmp4145 };
                bool $tmp4144 = $tmp4177.value;
                if ($tmp4144) goto $l4178;
                panda$core$Bit $tmp4179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134143.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp4144 = $tmp4179.value;
                $l4178:;
                panda$core$Bit $tmp4180 = { $tmp4144 };
                if ($tmp4180.value) {
                {
                    goto $l4140;
                }
                }
                else {
                panda$core$Bit $tmp4181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134143.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp4181.value) {
                {
                    if (((panda$core$Bit) { dc4137 != NULL }).value) {
                    {
                        panda$core$String* $tmp4186 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4141);
                        $tmp4185 = $tmp4186;
                        panda$core$String* $tmp4187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4184, $tmp4185);
                        $tmp4183 = $tmp4187;
                        panda$core$String* $tmp4189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4183, &$s4188);
                        $tmp4182 = $tmp4189;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4141, $tmp4182);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4182));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4183));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4185));
                    }
                    }
                    {
                        $tmp4190 = dc4137;
                        org$pandalanguage$pandac$ASTNode* $tmp4193 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4192 = $tmp4193;
                        $tmp4191 = $tmp4192;
                        dc4137 = $tmp4191;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4191));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4192));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4190));
                    }
                }
                }
                else {
                panda$core$Bit $tmp4194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2184_134143.$rawValue, ((panda$core$Int64) { 48 }));
                if ($tmp4194.value) {
                {
                    int $tmp4197;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4201 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4137);
                        $tmp4200 = $tmp4201;
                        $tmp4199 = $tmp4200;
                        c4198 = $tmp4199;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4199));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4200));
                        if (((panda$core$Bit) { c4198 == NULL }).value) {
                        {
                            $tmp4202 = NULL;
                            $returnValue4116 = $tmp4202;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4202));
                            $tmp4197 = 0;
                            goto $l4195;
                            $l4203:;
                            $tmp4111 = 3;
                            goto $l4109;
                            $l4204:;
                            return $returnValue4116;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4133, ((panda$core$Object*) c4198));
                        {
                            $tmp4206 = dc4137;
                            $tmp4207 = NULL;
                            dc4137 = $tmp4207;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4207));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4206));
                        }
                    }
                    $tmp4197 = -1;
                    goto $l4195;
                    $l4195:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c4198));
                    c4198 = NULL;
                    switch ($tmp4197) {
                        case 0: goto $l4203;
                        case -1: goto $l4208;
                    }
                    $l4208:;
                }
                }
                else {
                {
                    goto $l4140;
                }
                }
                }
                }
            }
        }
        }
        $l4140:;
        panda$collections$ImmutableArray* $tmp4212 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4212);
        $tmp4211 = $tmp4212;
        $tmp4210 = $tmp4211;
        a4209 = $tmp4210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4211));
        $l4213:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4216 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4215 = $tmp4216;
            {
                $match$2208_134217 = next4215.kind;
                panda$core$Bit $tmp4218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134217.$rawValue, ((panda$core$Int64) { 13 }));
                if ($tmp4218.value) {
                {
                    panda$core$Int64 $tmp4219 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4209);
                    panda$core$Bit $tmp4220 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4219, ((panda$core$Int64) { 0 }));
                    if ($tmp4220.value) {
                    {
                        panda$core$String* $tmp4225 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4215);
                        $tmp4224 = $tmp4225;
                        panda$core$String* $tmp4226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4223, $tmp4224);
                        $tmp4222 = $tmp4226;
                        panda$core$String* $tmp4228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4222, &$s4227);
                        $tmp4221 = $tmp4228;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4215, $tmp4221);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4221));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4222));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4224));
                        $tmp4229 = NULL;
                        $returnValue4116 = $tmp4229;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4229));
                        $tmp4111 = 4;
                        goto $l4109;
                        $l4230:;
                        return $returnValue4116;
                    }
                    }
                    {
                        $tmp4232 = a4209;
                        panda$collections$ImmutableArray* $tmp4235 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp4234 = $tmp4235;
                        $tmp4233 = $tmp4234;
                        a4209 = $tmp4233;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4233));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4234));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4232));
                    }
                }
                }
                else {
                panda$core$Bit $tmp4236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134217.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp4236.value) {
                {
                    bool $tmp4237 = ((panda$core$Bit) { dc4137 != NULL }).value;
                    if ($tmp4237) goto $l4238;
                    panda$core$Int64 $tmp4239 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4209);
                    panda$core$Bit $tmp4240 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4239, ((panda$core$Int64) { 0 }));
                    $tmp4237 = $tmp4240.value;
                    $l4238:;
                    panda$core$Bit $tmp4241 = { $tmp4237 };
                    if ($tmp4241.value) {
                    {
                        panda$core$String* $tmp4246 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4215);
                        $tmp4245 = $tmp4246;
                        panda$core$String* $tmp4247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4244, $tmp4245);
                        $tmp4243 = $tmp4247;
                        panda$core$String* $tmp4249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4243, &$s4248);
                        $tmp4242 = $tmp4249;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4215, $tmp4242);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4242));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4243));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4245));
                        $tmp4250 = NULL;
                        $returnValue4116 = $tmp4250;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4250));
                        $tmp4111 = 5;
                        goto $l4109;
                        $l4251:;
                        return $returnValue4116;
                    }
                    }
                    {
                        $tmp4253 = dc4137;
                        org$pandalanguage$pandac$ASTNode* $tmp4256 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4255 = $tmp4256;
                        $tmp4254 = $tmp4255;
                        dc4137 = $tmp4254;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4254));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4255));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4253));
                    }
                }
                }
                else {
                panda$core$Bit $tmp4257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134217.$rawValue, ((panda$core$Int64) { 17 }));
                if ($tmp4257.value) {
                {
                    int $tmp4260;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4264 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4137, a4209);
                        $tmp4263 = $tmp4264;
                        $tmp4262 = $tmp4263;
                        decl4261 = $tmp4262;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4262));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4263));
                        if (((panda$core$Bit) { decl4261 == NULL }).value) {
                        {
                            $tmp4265 = NULL;
                            $returnValue4116 = $tmp4265;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4265));
                            $tmp4260 = 0;
                            goto $l4258;
                            $l4266:;
                            $tmp4111 = 6;
                            goto $l4109;
                            $l4267:;
                            return $returnValue4116;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4133, ((panda$core$Object*) decl4261));
                        {
                            $tmp4269 = dc4137;
                            $tmp4270 = NULL;
                            dc4137 = $tmp4270;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4270));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4269));
                        }
                        {
                            $tmp4271 = a4209;
                            panda$collections$ImmutableArray* $tmp4274 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4274);
                            $tmp4273 = $tmp4274;
                            $tmp4272 = $tmp4273;
                            a4209 = $tmp4272;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4272));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4273));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4271));
                        }
                    }
                    $tmp4260 = -1;
                    goto $l4258;
                    $l4258:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4261));
                    decl4261 = NULL;
                    switch ($tmp4260) {
                        case 0: goto $l4266;
                        case -1: goto $l4275;
                    }
                    $l4275:;
                }
                }
                else {
                panda$core$Bit $tmp4276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134217.$rawValue, ((panda$core$Int64) { 18 }));
                if ($tmp4276.value) {
                {
                    int $tmp4279;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4283 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4137, a4209);
                        $tmp4282 = $tmp4283;
                        $tmp4281 = $tmp4282;
                        decl4280 = $tmp4281;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4281));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4282));
                        if (((panda$core$Bit) { decl4280 == NULL }).value) {
                        {
                            $tmp4284 = NULL;
                            $returnValue4116 = $tmp4284;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4284));
                            $tmp4279 = 0;
                            goto $l4277;
                            $l4285:;
                            $tmp4111 = 7;
                            goto $l4109;
                            $l4286:;
                            return $returnValue4116;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4133, ((panda$core$Object*) decl4280));
                        {
                            $tmp4288 = dc4137;
                            $tmp4289 = NULL;
                            dc4137 = $tmp4289;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4289));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4288));
                        }
                        {
                            $tmp4290 = a4209;
                            panda$collections$ImmutableArray* $tmp4293 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4293);
                            $tmp4292 = $tmp4293;
                            $tmp4291 = $tmp4292;
                            a4209 = $tmp4291;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4291));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4292));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4290));
                        }
                    }
                    $tmp4279 = -1;
                    goto $l4277;
                    $l4277:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4280));
                    decl4280 = NULL;
                    switch ($tmp4279) {
                        case -1: goto $l4294;
                        case 0: goto $l4285;
                    }
                    $l4294:;
                }
                }
                else {
                panda$core$Bit $tmp4295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134217.$rawValue, ((panda$core$Int64) { 19 }));
                if ($tmp4295.value) {
                {
                    int $tmp4298;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4302 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4137, a4209);
                        $tmp4301 = $tmp4302;
                        $tmp4300 = $tmp4301;
                        decl4299 = $tmp4300;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4300));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4301));
                        if (((panda$core$Bit) { decl4299 == NULL }).value) {
                        {
                            $tmp4303 = NULL;
                            $returnValue4116 = $tmp4303;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4303));
                            $tmp4298 = 0;
                            goto $l4296;
                            $l4304:;
                            $tmp4111 = 8;
                            goto $l4109;
                            $l4305:;
                            return $returnValue4116;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4133, ((panda$core$Object*) decl4299));
                        {
                            $tmp4307 = dc4137;
                            $tmp4308 = NULL;
                            dc4137 = $tmp4308;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4308));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4307));
                        }
                        {
                            $tmp4309 = a4209;
                            panda$collections$ImmutableArray* $tmp4312 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4312);
                            $tmp4311 = $tmp4312;
                            $tmp4310 = $tmp4311;
                            a4209 = $tmp4310;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4310));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4311));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4309));
                        }
                    }
                    $tmp4298 = -1;
                    goto $l4296;
                    $l4296:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4299));
                    decl4299 = NULL;
                    switch ($tmp4298) {
                        case 0: goto $l4304;
                        case -1: goto $l4313;
                    }
                    $l4313:;
                }
                }
                else {
                panda$core$Bit $tmp4315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134217.$rawValue, ((panda$core$Int64) { 21 }));
                bool $tmp4314 = $tmp4315.value;
                if ($tmp4314) goto $l4316;
                panda$core$Bit $tmp4317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134217.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp4314 = $tmp4317.value;
                $l4316:;
                panda$core$Bit $tmp4318 = { $tmp4314 };
                if ($tmp4318.value) {
                {
                    int $tmp4321;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4325 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4137, a4209);
                        $tmp4324 = $tmp4325;
                        $tmp4323 = $tmp4324;
                        decl4322 = $tmp4323;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4323));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4324));
                        if (((panda$core$Bit) { decl4322 == NULL }).value) {
                        {
                            $tmp4326 = NULL;
                            $returnValue4116 = $tmp4326;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4326));
                            $tmp4321 = 0;
                            goto $l4319;
                            $l4327:;
                            $tmp4111 = 9;
                            goto $l4109;
                            $l4328:;
                            return $returnValue4116;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4133, ((panda$core$Object*) decl4322));
                        {
                            $tmp4330 = dc4137;
                            $tmp4331 = NULL;
                            dc4137 = $tmp4331;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4331));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4330));
                        }
                        {
                            $tmp4332 = a4209;
                            panda$collections$ImmutableArray* $tmp4335 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4335);
                            $tmp4334 = $tmp4335;
                            $tmp4333 = $tmp4334;
                            a4209 = $tmp4333;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4333));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4334));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4332));
                        }
                    }
                    $tmp4321 = -1;
                    goto $l4319;
                    $l4319:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4322));
                    decl4322 = NULL;
                    switch ($tmp4321) {
                        case 0: goto $l4327;
                        case -1: goto $l4336;
                    }
                    $l4336:;
                }
                }
                else {
                panda$core$Bit $tmp4340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134217.$rawValue, ((panda$core$Int64) { 23 }));
                bool $tmp4339 = $tmp4340.value;
                if ($tmp4339) goto $l4341;
                panda$core$Bit $tmp4342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134217.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp4339 = $tmp4342.value;
                $l4341:;
                panda$core$Bit $tmp4343 = { $tmp4339 };
                bool $tmp4338 = $tmp4343.value;
                if ($tmp4338) goto $l4344;
                panda$core$Bit $tmp4345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134217.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp4338 = $tmp4345.value;
                $l4344:;
                panda$core$Bit $tmp4346 = { $tmp4338 };
                bool $tmp4337 = $tmp4346.value;
                if ($tmp4337) goto $l4347;
                panda$core$Bit $tmp4348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134217.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp4337 = $tmp4348.value;
                $l4347:;
                panda$core$Bit $tmp4349 = { $tmp4337 };
                if ($tmp4349.value) {
                {
                    int $tmp4352;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4356 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4137, a4209);
                        $tmp4355 = $tmp4356;
                        $tmp4354 = $tmp4355;
                        decl4353 = $tmp4354;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4354));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4355));
                        if (((panda$core$Bit) { decl4353 == NULL }).value) {
                        {
                            $tmp4357 = NULL;
                            $returnValue4116 = $tmp4357;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4357));
                            $tmp4352 = 0;
                            goto $l4350;
                            $l4358:;
                            $tmp4111 = 10;
                            goto $l4109;
                            $l4359:;
                            return $returnValue4116;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4133, ((panda$core$Object*) decl4353));
                        {
                            $tmp4361 = dc4137;
                            $tmp4362 = NULL;
                            dc4137 = $tmp4362;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4362));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4361));
                        }
                        {
                            $tmp4363 = a4209;
                            panda$collections$ImmutableArray* $tmp4366 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4366);
                            $tmp4365 = $tmp4366;
                            $tmp4364 = $tmp4365;
                            a4209 = $tmp4364;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4364));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4365));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4363));
                        }
                    }
                    $tmp4352 = -1;
                    goto $l4350;
                    $l4350:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4353));
                    decl4353 = NULL;
                    switch ($tmp4352) {
                        case -1: goto $l4367;
                        case 0: goto $l4358;
                    }
                    $l4367:;
                }
                }
                else {
                panda$core$Bit $tmp4368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2208_134217.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp4368.value) {
                {
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4369, ((panda$core$Int64) { 100 }));
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4369, &$s4370);
                    goto $l4214;
                }
                }
                else {
                {
                    panda$core$String* $tmp4375 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4215);
                    $tmp4374 = $tmp4375;
                    panda$core$String* $tmp4376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4373, $tmp4374);
                    $tmp4372 = $tmp4376;
                    panda$core$String* $tmp4378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4372, &$s4377);
                    $tmp4371 = $tmp4378;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4215, $tmp4371);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4371));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4372));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4374));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp4379 = NULL;
                    $returnValue4116 = $tmp4379;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4379));
                    $tmp4111 = 11;
                    goto $l4109;
                    $l4380:;
                    return $returnValue4116;
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
        $l4214:;
        org$pandalanguage$pandac$ASTNode* $tmp4384 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4385, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp4387 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4120.value));
        $tmp4386 = $tmp4387;
        panda$collections$ImmutableArray* $tmp4389 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4133);
        $tmp4388 = $tmp4389;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4384, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4112.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp4385, $tmp4386, NULL, NULL, $tmp4388);
        $tmp4383 = $tmp4384;
        $tmp4382 = $tmp4383;
        $returnValue4116 = $tmp4382;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4382));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4383));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4388));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4386));
        $tmp4111 = 12;
        goto $l4109;
        $l4390:;
        return $returnValue4116;
    }
    $l4109:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4209));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4137));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4133));
    members4133 = NULL;
    a4209 = NULL;
    switch ($tmp4111) {
        case 7: goto $l4286;
        case 2: goto $l4131;
        case 9: goto $l4328;
        case 1: goto $l4125;
        case 8: goto $l4305;
        case 4: goto $l4230;
        case 5: goto $l4251;
        case 6: goto $l4267;
        case 10: goto $l4359;
        case 12: goto $l4390;
        case 11: goto $l4380;
        case 0: goto $l4118;
        case 3: goto $l4204;
    }
    $l4392:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start4396;
    org$pandalanguage$pandac$ASTNode* dc4398 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4400;
    org$pandalanguage$pandac$ASTNode* $tmp4401;
    org$pandalanguage$pandac$ASTNode* $tmp4402;
    org$pandalanguage$pandac$ASTNode* $returnValue4404;
    org$pandalanguage$pandac$ASTNode* $tmp4405;
    org$pandalanguage$pandac$ASTNode* $tmp4408;
    org$pandalanguage$pandac$ASTNode* $tmp4409;
    panda$collections$ImmutableArray* a4410 = NULL;
    panda$collections$ImmutableArray* $tmp4411;
    panda$collections$ImmutableArray* $tmp4412;
    org$pandalanguage$pandac$ASTNode* $tmp4414;
    org$pandalanguage$pandac$parser$Token$Kind $match$2294_94417;
    org$pandalanguage$pandac$ASTNode* $tmp4420;
    org$pandalanguage$pandac$ASTNode* $tmp4421;
    org$pandalanguage$pandac$ASTNode* $tmp4426;
    org$pandalanguage$pandac$ASTNode* $tmp4427;
    org$pandalanguage$pandac$ASTNode* $tmp4432;
    org$pandalanguage$pandac$ASTNode* $tmp4433;
    org$pandalanguage$pandac$ASTNode* $tmp4442;
    org$pandalanguage$pandac$ASTNode* $tmp4443;
    org$pandalanguage$pandac$ASTNode* $tmp4448;
    org$pandalanguage$pandac$ASTNode* $tmp4449;
    org$pandalanguage$pandac$ASTNode* $tmp4466;
    org$pandalanguage$pandac$ASTNode* $tmp4467;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4471;
    org$pandalanguage$pandac$ASTNode* $tmp4473;
    int $tmp4395;
    {
        org$pandalanguage$pandac$parser$Token $tmp4397 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start4396 = $tmp4397;
        memset(&dc4398, 0, sizeof(dc4398));
        panda$core$Bit $tmp4399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start4396.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp4399.value) {
        {
            {
                $tmp4400 = dc4398;
                org$pandalanguage$pandac$ASTNode* $tmp4403 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4402 = $tmp4403;
                $tmp4401 = $tmp4402;
                dc4398 = $tmp4401;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4401));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4402));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4400));
            }
            if (((panda$core$Bit) { dc4398 == NULL }).value) {
            {
                $tmp4405 = NULL;
                $returnValue4404 = $tmp4405;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4405));
                $tmp4395 = 0;
                goto $l4393;
                $l4406:;
                return $returnValue4404;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4408 = dc4398;
                $tmp4409 = NULL;
                dc4398 = $tmp4409;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4409));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4408));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4413 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp4412 = $tmp4413;
        $tmp4411 = $tmp4412;
        a4410 = $tmp4411;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4411));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4412));
        if (((panda$core$Bit) { a4410 == NULL }).value) {
        {
            $tmp4414 = NULL;
            $returnValue4404 = $tmp4414;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4414));
            $tmp4395 = 1;
            goto $l4393;
            $l4415:;
            return $returnValue4404;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp4418 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2294_94417 = $tmp4418.kind;
            panda$core$Bit $tmp4419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94417.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp4419.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4422 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4398, a4410);
                $tmp4421 = $tmp4422;
                $tmp4420 = $tmp4421;
                $returnValue4404 = $tmp4420;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4420));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4421));
                $tmp4395 = 2;
                goto $l4393;
                $l4423:;
                return $returnValue4404;
            }
            }
            else {
            panda$core$Bit $tmp4425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94417.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp4425.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4428 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4398, a4410);
                $tmp4427 = $tmp4428;
                $tmp4426 = $tmp4427;
                $returnValue4404 = $tmp4426;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4426));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4427));
                $tmp4395 = 3;
                goto $l4393;
                $l4429:;
                return $returnValue4404;
            }
            }
            else {
            panda$core$Bit $tmp4431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94417.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp4431.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4434 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4398, a4410);
                $tmp4433 = $tmp4434;
                $tmp4432 = $tmp4433;
                $returnValue4404 = $tmp4432;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4432));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4433));
                $tmp4395 = 4;
                goto $l4393;
                $l4435:;
                return $returnValue4404;
            }
            }
            else {
            panda$core$Bit $tmp4438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94417.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp4437 = $tmp4438.value;
            if ($tmp4437) goto $l4439;
            panda$core$Bit $tmp4440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94417.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp4437 = $tmp4440.value;
            $l4439:;
            panda$core$Bit $tmp4441 = { $tmp4437 };
            if ($tmp4441.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4444 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4398, a4410);
                $tmp4443 = $tmp4444;
                $tmp4442 = $tmp4443;
                $returnValue4404 = $tmp4442;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4442));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4443));
                $tmp4395 = 5;
                goto $l4393;
                $l4445:;
                return $returnValue4404;
            }
            }
            else {
            panda$core$Bit $tmp4447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94417.$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp4447.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4450 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4398, a4410);
                $tmp4449 = $tmp4450;
                $tmp4448 = $tmp4449;
                $returnValue4404 = $tmp4448;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4448));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4449));
                $tmp4395 = 6;
                goto $l4393;
                $l4451:;
                return $returnValue4404;
            }
            }
            else {
            panda$core$Bit $tmp4456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94417.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp4455 = $tmp4456.value;
            if ($tmp4455) goto $l4457;
            panda$core$Bit $tmp4458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94417.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp4455 = $tmp4458.value;
            $l4457:;
            panda$core$Bit $tmp4459 = { $tmp4455 };
            bool $tmp4454 = $tmp4459.value;
            if ($tmp4454) goto $l4460;
            panda$core$Bit $tmp4461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94417.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp4454 = $tmp4461.value;
            $l4460:;
            panda$core$Bit $tmp4462 = { $tmp4454 };
            bool $tmp4453 = $tmp4462.value;
            if ($tmp4453) goto $l4463;
            panda$core$Bit $tmp4464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2294_94417.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp4453 = $tmp4464.value;
            $l4463:;
            panda$core$Bit $tmp4465 = { $tmp4453 };
            if ($tmp4465.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4468 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4398, a4410);
                $tmp4467 = $tmp4468;
                $tmp4466 = $tmp4467;
                $returnValue4404 = $tmp4466;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4466));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4467));
                $tmp4395 = 7;
                goto $l4393;
                $l4469:;
                return $returnValue4404;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4471, ((panda$core$Int64) { 17 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4471, &$s4472);
                $tmp4473 = NULL;
                $returnValue4404 = $tmp4473;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4473));
                $tmp4395 = 8;
                goto $l4393;
                $l4474:;
                return $returnValue4404;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp4395 = -1;
    goto $l4393;
    $l4393:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4410));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4398));
    a4410 = NULL;
    switch ($tmp4395) {
        case 1: goto $l4415;
        case 3: goto $l4429;
        case -1: goto $l4476;
        case 7: goto $l4469;
        case 6: goto $l4451;
        case 2: goto $l4423;
        case 8: goto $l4474;
        case 0: goto $l4406;
        case 5: goto $l4445;
        case 4: goto $l4435;
    }
    $l4476:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4480;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4481;
    org$pandalanguage$pandac$ASTNode* $returnValue4484;
    org$pandalanguage$pandac$ASTNode* $tmp4485;
    org$pandalanguage$pandac$parser$Token$nullable name4488;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4489;
    org$pandalanguage$pandac$ASTNode* $tmp4492;
    panda$collections$ImmutableArray* generics4495 = NULL;
    panda$collections$ImmutableArray* $tmp4498;
    panda$collections$ImmutableArray* $tmp4499;
    panda$collections$ImmutableArray* $tmp4500;
    org$pandalanguage$pandac$ASTNode* $tmp4502;
    panda$collections$ImmutableArray* $tmp4505;
    panda$collections$ImmutableArray* $tmp4506;
    panda$collections$ImmutableArray* stypes4507 = NULL;
    panda$collections$ImmutableArray* $tmp4510;
    panda$collections$ImmutableArray* $tmp4511;
    panda$collections$ImmutableArray* $tmp4512;
    org$pandalanguage$pandac$ASTNode* $tmp4514;
    panda$collections$ImmutableArray* $tmp4517;
    panda$collections$ImmutableArray* $tmp4518;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4519;
    org$pandalanguage$pandac$ASTNode* $tmp4522;
    panda$collections$Array* members4525 = NULL;
    panda$collections$Array* $tmp4526;
    panda$collections$Array* $tmp4527;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4532;
    org$pandalanguage$pandac$ASTNode* member4537 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4538;
    org$pandalanguage$pandac$ASTNode* $tmp4539;
    org$pandalanguage$pandac$ASTNode* $tmp4541;
    org$pandalanguage$pandac$ASTNode* $tmp4546;
    org$pandalanguage$pandac$ASTNode* $tmp4547;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4549;
    panda$core$String* $tmp4550;
    panda$collections$ImmutableArray* $tmp4552;
    int $tmp4479;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4481, ((panda$core$Int64) { 17 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4483 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4481, &$s4482);
        start4480 = $tmp4483;
        if (((panda$core$Bit) { !start4480.nonnull }).value) {
        {
            $tmp4485 = NULL;
            $returnValue4484 = $tmp4485;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4485));
            $tmp4479 = 0;
            goto $l4477;
            $l4486:;
            return $returnValue4484;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4489, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4491 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4489, &$s4490);
        name4488 = $tmp4491;
        if (((panda$core$Bit) { !name4488.nonnull }).value) {
        {
            $tmp4492 = NULL;
            $returnValue4484 = $tmp4492;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4492));
            $tmp4479 = 1;
            goto $l4477;
            $l4493:;
            return $returnValue4484;
        }
        }
        memset(&generics4495, 0, sizeof(generics4495));
        org$pandalanguage$pandac$parser$Token $tmp4496 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4496.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4497.value) {
        {
            {
                $tmp4498 = generics4495;
                panda$collections$ImmutableArray* $tmp4501 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4500 = $tmp4501;
                $tmp4499 = $tmp4500;
                generics4495 = $tmp4499;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4499));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4500));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4498));
            }
            if (((panda$core$Bit) { generics4495 == NULL }).value) {
            {
                $tmp4502 = NULL;
                $returnValue4484 = $tmp4502;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4502));
                $tmp4479 = 2;
                goto $l4477;
                $l4503:;
                return $returnValue4484;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4505 = generics4495;
                $tmp4506 = NULL;
                generics4495 = $tmp4506;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4506));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4505));
            }
        }
        }
        memset(&stypes4507, 0, sizeof(stypes4507));
        org$pandalanguage$pandac$parser$Token $tmp4508 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4508.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp4509.value) {
        {
            {
                $tmp4510 = stypes4507;
                panda$collections$ImmutableArray* $tmp4513 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4512 = $tmp4513;
                $tmp4511 = $tmp4512;
                stypes4507 = $tmp4511;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4511));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4512));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4510));
            }
            if (((panda$core$Bit) { stypes4507 == NULL }).value) {
            {
                $tmp4514 = NULL;
                $returnValue4484 = $tmp4514;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4514));
                $tmp4479 = 3;
                goto $l4477;
                $l4515:;
                return $returnValue4484;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4517 = stypes4507;
                $tmp4518 = NULL;
                stypes4507 = $tmp4518;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4518));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4517));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4519, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4521 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4519, &$s4520);
        if (((panda$core$Bit) { !$tmp4521.nonnull }).value) {
        {
            $tmp4522 = NULL;
            $returnValue4484 = $tmp4522;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4522));
            $tmp4479 = 4;
            goto $l4477;
            $l4523:;
            return $returnValue4484;
        }
        }
        panda$collections$Array* $tmp4528 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4528);
        $tmp4527 = $tmp4528;
        $tmp4526 = $tmp4527;
        members4525 = $tmp4526;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4526));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4527));
        $l4529:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4532, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4533 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4532);
        bool $tmp4531 = ((panda$core$Bit) { !$tmp4533.nonnull }).value;
        if (!$tmp4531) goto $l4530;
        {
            int $tmp4536;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4540 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4539 = $tmp4540;
                $tmp4538 = $tmp4539;
                member4537 = $tmp4538;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4538));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4539));
                if (((panda$core$Bit) { member4537 == NULL }).value) {
                {
                    $tmp4541 = NULL;
                    $returnValue4484 = $tmp4541;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4541));
                    $tmp4536 = 0;
                    goto $l4534;
                    $l4542:;
                    $tmp4479 = 5;
                    goto $l4477;
                    $l4543:;
                    return $returnValue4484;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4525, ((panda$core$Object*) member4537));
            }
            $tmp4536 = -1;
            goto $l4534;
            $l4534:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4537));
            member4537 = NULL;
            switch ($tmp4536) {
                case -1: goto $l4545;
                case 0: goto $l4542;
            }
            $l4545:;
        }
        goto $l4529;
        $l4530:;
        org$pandalanguage$pandac$ASTNode* $tmp4548 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4549, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4551 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4488.value));
        $tmp4550 = $tmp4551;
        panda$collections$ImmutableArray* $tmp4553 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4525);
        $tmp4552 = $tmp4553;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4548, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4480.value).position, p_doccomment, p_annotations, $tmp4549, $tmp4550, generics4495, stypes4507, $tmp4552);
        $tmp4547 = $tmp4548;
        $tmp4546 = $tmp4547;
        $returnValue4484 = $tmp4546;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4546));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4552));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4550));
        $tmp4479 = 6;
        goto $l4477;
        $l4554:;
        return $returnValue4484;
    }
    $l4477:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4525));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes4507));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4495));
    members4525 = NULL;
    switch ($tmp4479) {
        case 4: goto $l4523;
        case 5: goto $l4543;
        case 2: goto $l4503;
        case 6: goto $l4554;
        case 1: goto $l4493;
        case 0: goto $l4486;
        case 3: goto $l4515;
    }
    $l4556:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4560;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4561;
    org$pandalanguage$pandac$ASTNode* $returnValue4564;
    org$pandalanguage$pandac$ASTNode* $tmp4565;
    org$pandalanguage$pandac$parser$Token$nullable name4568;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4569;
    org$pandalanguage$pandac$ASTNode* $tmp4572;
    panda$collections$ImmutableArray* generics4575 = NULL;
    panda$collections$ImmutableArray* $tmp4578;
    panda$collections$ImmutableArray* $tmp4579;
    panda$collections$ImmutableArray* $tmp4580;
    org$pandalanguage$pandac$ASTNode* $tmp4582;
    panda$collections$ImmutableArray* $tmp4585;
    panda$collections$ImmutableArray* $tmp4586;
    panda$collections$ImmutableArray* $tmp4587;
    panda$collections$Array* intfs4589 = NULL;
    panda$collections$Array* $tmp4590;
    panda$collections$Array* $tmp4591;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4593;
    org$pandalanguage$pandac$ASTNode* t4598 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4599;
    org$pandalanguage$pandac$ASTNode* $tmp4600;
    org$pandalanguage$pandac$ASTNode* $tmp4602;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4609;
    org$pandalanguage$pandac$ASTNode* $tmp4611;
    org$pandalanguage$pandac$ASTNode* $tmp4612;
    org$pandalanguage$pandac$ASTNode* $tmp4613;
    org$pandalanguage$pandac$ASTNode* $tmp4615;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4620;
    org$pandalanguage$pandac$ASTNode* $tmp4623;
    panda$collections$Array* members4626 = NULL;
    panda$collections$Array* $tmp4627;
    panda$collections$Array* $tmp4628;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4633;
    org$pandalanguage$pandac$ASTNode* member4638 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4639;
    org$pandalanguage$pandac$ASTNode* $tmp4640;
    org$pandalanguage$pandac$ASTNode* $tmp4642;
    org$pandalanguage$pandac$ASTNode* $tmp4647;
    org$pandalanguage$pandac$ASTNode* $tmp4648;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4650;
    panda$core$String* $tmp4651;
    panda$collections$ImmutableArray* $tmp4653;
    panda$collections$ImmutableArray* $tmp4655;
    int $tmp4559;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4561, ((panda$core$Int64) { 18 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4563 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4561, &$s4562);
        start4560 = $tmp4563;
        if (((panda$core$Bit) { !start4560.nonnull }).value) {
        {
            $tmp4565 = NULL;
            $returnValue4564 = $tmp4565;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4565));
            $tmp4559 = 0;
            goto $l4557;
            $l4566:;
            return $returnValue4564;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4569, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4571 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4569, &$s4570);
        name4568 = $tmp4571;
        if (((panda$core$Bit) { !name4568.nonnull }).value) {
        {
            $tmp4572 = NULL;
            $returnValue4564 = $tmp4572;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4572));
            $tmp4559 = 1;
            goto $l4557;
            $l4573:;
            return $returnValue4564;
        }
        }
        memset(&generics4575, 0, sizeof(generics4575));
        org$pandalanguage$pandac$parser$Token $tmp4576 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4576.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4577.value) {
        {
            {
                $tmp4578 = generics4575;
                panda$collections$ImmutableArray* $tmp4581 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4580 = $tmp4581;
                $tmp4579 = $tmp4580;
                generics4575 = $tmp4579;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4579));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4580));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4578));
            }
            if (((panda$core$Bit) { generics4575 == NULL }).value) {
            {
                $tmp4582 = NULL;
                $returnValue4564 = $tmp4582;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4582));
                $tmp4559 = 2;
                goto $l4557;
                $l4583:;
                return $returnValue4564;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4585 = generics4575;
                panda$collections$ImmutableArray* $tmp4588 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp4588);
                $tmp4587 = $tmp4588;
                $tmp4586 = $tmp4587;
                generics4575 = $tmp4586;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4586));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4587));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4585));
            }
        }
        }
        panda$collections$Array* $tmp4592 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4592);
        $tmp4591 = $tmp4592;
        $tmp4590 = $tmp4591;
        intfs4589 = $tmp4590;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4590));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4591));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4593, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4594 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4593);
        if (((panda$core$Bit) { $tmp4594.nonnull }).value) {
        {
            int $tmp4597;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4601 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4600 = $tmp4601;
                $tmp4599 = $tmp4600;
                t4598 = $tmp4599;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4599));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4600));
                if (((panda$core$Bit) { t4598 == NULL }).value) {
                {
                    $tmp4602 = NULL;
                    $returnValue4564 = $tmp4602;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4602));
                    $tmp4597 = 0;
                    goto $l4595;
                    $l4603:;
                    $tmp4559 = 3;
                    goto $l4557;
                    $l4604:;
                    return $returnValue4564;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs4589, ((panda$core$Object*) t4598));
                $l4606:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4609, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp4610 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4609);
                bool $tmp4608 = ((panda$core$Bit) { $tmp4610.nonnull }).value;
                if (!$tmp4608) goto $l4607;
                {
                    {
                        $tmp4611 = t4598;
                        org$pandalanguage$pandac$ASTNode* $tmp4614 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4613 = $tmp4614;
                        $tmp4612 = $tmp4613;
                        t4598 = $tmp4612;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4612));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4613));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4611));
                    }
                    if (((panda$core$Bit) { t4598 == NULL }).value) {
                    {
                        $tmp4615 = NULL;
                        $returnValue4564 = $tmp4615;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4615));
                        $tmp4597 = 1;
                        goto $l4595;
                        $l4616:;
                        $tmp4559 = 4;
                        goto $l4557;
                        $l4617:;
                        return $returnValue4564;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs4589, ((panda$core$Object*) t4598));
                }
                goto $l4606;
                $l4607:;
            }
            $tmp4597 = -1;
            goto $l4595;
            $l4595:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4598));
            t4598 = NULL;
            switch ($tmp4597) {
                case 0: goto $l4603;
                case -1: goto $l4619;
                case 1: goto $l4616;
            }
            $l4619:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4620, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4622 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4620, &$s4621);
        if (((panda$core$Bit) { !$tmp4622.nonnull }).value) {
        {
            $tmp4623 = NULL;
            $returnValue4564 = $tmp4623;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4623));
            $tmp4559 = 5;
            goto $l4557;
            $l4624:;
            return $returnValue4564;
        }
        }
        panda$collections$Array* $tmp4629 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4629);
        $tmp4628 = $tmp4629;
        $tmp4627 = $tmp4628;
        members4626 = $tmp4627;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4627));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4628));
        $l4630:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4633, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4634 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4633);
        bool $tmp4632 = ((panda$core$Bit) { !$tmp4634.nonnull }).value;
        if (!$tmp4632) goto $l4631;
        {
            int $tmp4637;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4641 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4640 = $tmp4641;
                $tmp4639 = $tmp4640;
                member4638 = $tmp4639;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4639));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4640));
                if (((panda$core$Bit) { member4638 == NULL }).value) {
                {
                    $tmp4642 = NULL;
                    $returnValue4564 = $tmp4642;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4642));
                    $tmp4637 = 0;
                    goto $l4635;
                    $l4643:;
                    $tmp4559 = 6;
                    goto $l4557;
                    $l4644:;
                    return $returnValue4564;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4626, ((panda$core$Object*) member4638));
            }
            $tmp4637 = -1;
            goto $l4635;
            $l4635:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4638));
            member4638 = NULL;
            switch ($tmp4637) {
                case -1: goto $l4646;
                case 0: goto $l4643;
            }
            $l4646:;
        }
        goto $l4630;
        $l4631:;
        org$pandalanguage$pandac$ASTNode* $tmp4649 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4650, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp4652 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4568.value));
        $tmp4651 = $tmp4652;
        panda$collections$ImmutableArray* $tmp4654 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs4589);
        $tmp4653 = $tmp4654;
        panda$collections$ImmutableArray* $tmp4656 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4626);
        $tmp4655 = $tmp4656;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4649, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4560.value).position, p_doccomment, p_annotations, $tmp4650, $tmp4651, generics4575, $tmp4653, $tmp4655);
        $tmp4648 = $tmp4649;
        $tmp4647 = $tmp4648;
        $returnValue4564 = $tmp4647;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4647));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4648));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4655));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4653));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4651));
        $tmp4559 = 7;
        goto $l4557;
        $l4657:;
        return $returnValue4564;
    }
    $l4557:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4626));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs4589));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4575));
    intfs4589 = NULL;
    members4626 = NULL;
    switch ($tmp4559) {
        case 5: goto $l4624;
        case 3: goto $l4604;
        case 1: goto $l4573;
        case 4: goto $l4617;
        case 0: goto $l4566;
        case 7: goto $l4657;
        case 6: goto $l4644;
        case 2: goto $l4583;
    }
    $l4659:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2418_94660;
    org$pandalanguage$pandac$ASTNode* $returnValue4663;
    org$pandalanguage$pandac$ASTNode* $tmp4664;
    org$pandalanguage$pandac$ASTNode* $tmp4665;
    org$pandalanguage$pandac$ASTNode* $tmp4669;
    org$pandalanguage$pandac$ASTNode* $tmp4670;
    org$pandalanguage$pandac$ASTNode* $tmp4673;
    org$pandalanguage$pandac$ASTNode* $tmp4674;
    {
        org$pandalanguage$pandac$parser$Token $tmp4661 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2418_94660 = $tmp4661.kind;
        panda$core$Bit $tmp4662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2418_94660.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp4662.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4666 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4665 = $tmp4666;
            $tmp4664 = $tmp4665;
            $returnValue4663 = $tmp4664;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4664));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4665));
            return $returnValue4663;
        }
        }
        else {
        panda$core$Bit $tmp4668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2418_94660.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp4668.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4671 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4670 = $tmp4671;
            $tmp4669 = $tmp4670;
            $returnValue4663 = $tmp4669;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4669));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4670));
            return $returnValue4663;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4675 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4674 = $tmp4675;
            $tmp4673 = $tmp4674;
            $returnValue4663 = $tmp4673;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4673));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4674));
            return $returnValue4663;
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries4680 = NULL;
    panda$collections$Array* $tmp4681;
    panda$collections$Array* $tmp4682;
    org$pandalanguage$pandac$ASTNode* entry4692 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4693;
    org$pandalanguage$pandac$ASTNode* $tmp4694;
    org$pandalanguage$pandac$ASTNode* $returnValue4696;
    org$pandalanguage$pandac$ASTNode* $tmp4697;
    org$pandalanguage$pandac$ASTNode* $tmp4703;
    org$pandalanguage$pandac$ASTNode* $tmp4704;
    panda$collections$ImmutableArray* $tmp4706;
    int $tmp4679;
    {
        panda$collections$Array* $tmp4683 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4683);
        $tmp4682 = $tmp4683;
        $tmp4681 = $tmp4682;
        entries4680 = $tmp4681;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4681));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4682));
        $l4684:;
        org$pandalanguage$pandac$parser$Token $tmp4687 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4688 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4687.kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp4686 = $tmp4688.value;
        if (!$tmp4686) goto $l4685;
        {
            int $tmp4691;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4695 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4694 = $tmp4695;
                $tmp4693 = $tmp4694;
                entry4692 = $tmp4693;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4693));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4694));
                if (((panda$core$Bit) { entry4692 == NULL }).value) {
                {
                    $tmp4697 = NULL;
                    $returnValue4696 = $tmp4697;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4697));
                    $tmp4691 = 0;
                    goto $l4689;
                    $l4698:;
                    $tmp4679 = 0;
                    goto $l4677;
                    $l4699:;
                    return $returnValue4696;
                }
                }
                panda$core$Bit $tmp4701 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                PANDA_ASSERT($tmp4701.value);
                panda$collections$Array$add$panda$collections$Array$T(entries4680, ((panda$core$Object*) entry4692));
            }
            $tmp4691 = -1;
            goto $l4689;
            $l4689:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry4692));
            entry4692 = NULL;
            switch ($tmp4691) {
                case 0: goto $l4698;
                case -1: goto $l4702;
            }
            $l4702:;
        }
        goto $l4684;
        $l4685:;
        org$pandalanguage$pandac$ASTNode* $tmp4705 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp4707 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries4680);
        $tmp4706 = $tmp4707;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4705, ((panda$core$Int64) { 17 }), $tmp4706);
        $tmp4704 = $tmp4705;
        $tmp4703 = $tmp4704;
        $returnValue4696 = $tmp4703;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4703));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4704));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4706));
        $tmp4679 = 1;
        goto $l4677;
        $l4708:;
        return $returnValue4696;
    }
    $l4677:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries4680));
    entries4680 = NULL;
    switch ($tmp4679) {
        case 0: goto $l4699;
        case 1: goto $l4708;
    }
    $l4710:;
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp4713;
    {
    }
    $tmp4713 = -1;
    goto $l4711;
    $l4711:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4713) {
        case -1: goto $l4714;
    }
    $l4714:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->regexParser));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

