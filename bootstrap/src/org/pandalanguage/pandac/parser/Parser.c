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

typedef org$pandalanguage$pandac$Position (*$fn223)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn290)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn412)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn492)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn500)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn509)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn517)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn617)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn701)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn709)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn718)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn733)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn760)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn768)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn783)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1992)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2246)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3506)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3533)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3583)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn4695)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 89, 8342421721155502002, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 90, -624330123025066935, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 79, 6524007178185078219, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 80, 2210282510982608538, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 79, 6525832141939989144, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 80, 2212107474737519463, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x72\x69\x6e\x67\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 114, 5686317415756372741, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 118, 5129537752972831981, NULL };
static panda$core$String $s3165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s3789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s3858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

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
    panda$core$Bit $tmp138;
    int $tmp128;
    {
        panda$core$Bit $tmp129 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp129.value) goto $l130; else goto $l131;
        $l131:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s132, (panda$core$Int64) { 137 }, &$s133);
        abort();
        $l130:;
        panda$core$Bit $tmp134 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp134.value) goto $l135; else goto $l136;
        $l136:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s137, (panda$core$Int64) { 138 });
        abort();
        $l135:;
        panda$core$Bit$init$builtin_bit(&$tmp138, true);
        self->inSpeculative = $tmp138;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
    }
    $tmp128 = -1;
    goto $l126;
    $l126:;
    if (self->inSpeculative.value) goto $l140; else goto $l141;
    $l141:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s142, (panda$core$Int64) { 137 }, &$s143);
    abort();
    $l140:;
    switch ($tmp128) {
        case -1: goto $l139;
    }
    $l139:;
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp151;
    int $tmp146;
    {
        if (self->inSpeculative.value) goto $l147; else goto $l148;
        $l148:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s149, (panda$core$Int64) { 146 }, &$s150);
        abort();
        $l147:;
        panda$core$Bit$init$builtin_bit(&$tmp151, false);
        self->inSpeculative = $tmp151;
    }
    $tmp146 = -1;
    goto $l144;
    $l144:;
    panda$core$Bit $tmp153 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp153.value) goto $l154; else goto $l155;
    $l155:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s156, (panda$core$Int64) { 146 }, &$s157);
    abort();
    $l154:;
    switch ($tmp146) {
        case -1: goto $l152;
    }
    $l152:;
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp165;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp166;
    panda$core$Int64 $tmp168;
    panda$core$Int64 $tmp170;
    panda$core$Int64 $tmp171;
    panda$core$Bit $tmp172;
    int $tmp160;
    {
        if (self->inSpeculative.value) goto $l161; else goto $l162;
        $l162:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s163, (panda$core$Int64) { 152 }, &$s164);
        abort();
        $l161:;
        panda$core$Bit$init$builtin_bit(&$tmp165, false);
        self->inSpeculative = $tmp165;
        panda$core$Int64 $tmp167 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
        panda$core$Int64$init$builtin_int64(&$tmp168, 1);
        panda$core$Int64 $tmp169 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp167, $tmp168);
        panda$core$Int64$init$builtin_int64(&$tmp170, 0);
        panda$core$Int64$init$builtin_int64(&$tmp171, -1);
        panda$core$Bit$init$builtin_bit(&$tmp172, true);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp166, $tmp169, $tmp170, $tmp171, $tmp172);
        int64_t $tmp174 = $tmp166.start.value;
        panda$core$Int64 i173 = { $tmp174 };
        int64_t $tmp176 = $tmp166.end.value;
        int64_t $tmp177 = $tmp166.step.value;
        bool $tmp178 = $tmp166.inclusive.value;
        bool $tmp185 = $tmp177 > 0;
        if ($tmp185) goto $l183; else goto $l184;
        $l183:;
        if ($tmp178) goto $l186; else goto $l187;
        $l186:;
        if ($tmp174 <= $tmp176) goto $l179; else goto $l181;
        $l187:;
        if ($tmp174 < $tmp176) goto $l179; else goto $l181;
        $l184:;
        if ($tmp178) goto $l188; else goto $l189;
        $l188:;
        if ($tmp174 >= $tmp176) goto $l179; else goto $l181;
        $l189:;
        if ($tmp174 > $tmp176) goto $l179; else goto $l181;
        $l179:;
        {
            org$pandalanguage$pandac$parser$Token $tmp191 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i173);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp191);
        }
        $l182:;
        if ($tmp185) goto $l193; else goto $l194;
        $l193:;
        int64_t $tmp195 = $tmp176 - i173.value;
        if ($tmp178) goto $l196; else goto $l197;
        $l196:;
        if ((uint64_t) $tmp195 >= $tmp177) goto $l192; else goto $l181;
        $l197:;
        if ((uint64_t) $tmp195 > $tmp177) goto $l192; else goto $l181;
        $l194:;
        int64_t $tmp199 = i173.value - $tmp176;
        if ($tmp178) goto $l200; else goto $l201;
        $l200:;
        if ((uint64_t) $tmp199 >= -$tmp177) goto $l192; else goto $l181;
        $l201:;
        if ((uint64_t) $tmp199 > -$tmp177) goto $l192; else goto $l181;
        $l192:;
        i173.value += $tmp177;
        goto $l179;
        $l181:;
    }
    $tmp160 = -1;
    goto $l158;
    $l158:;
    panda$core$Bit $tmp204 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp204.value) goto $l205; else goto $l206;
    $l206:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s207, (panda$core$Int64) { 152 }, &$s208);
    abort();
    $l205:;
    switch ($tmp160) {
        case -1: goto $l203;
    }
    $l203:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue209;
    panda$core$String* $tmp210;
    panda$core$String* $tmp211;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp212;
    panda$core$Bit $tmp213;
    panda$core$Bit$init$builtin_bit(&$tmp213, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp212, p_token.start, p_token.end, $tmp213);
    panda$core$String* $tmp214 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp212);
    $tmp211 = $tmp214;
    $tmp210 = $tmp211;
    $returnValue209 = $tmp210;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
    return $returnValue209;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue216;
    org$pandalanguage$pandac$ASTNode* $tmp217;
    org$pandalanguage$pandac$ASTNode* $tmp219;
    org$pandalanguage$pandac$ASTNode* $tmp220;
    panda$core$Int64 $tmp222;
    org$pandalanguage$pandac$parser$Token$Kind $tmp225;
    panda$core$Int64 $tmp226;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp217 = p_chunk;
        $returnValue216 = $tmp217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
        return $returnValue216;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp221 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp222, 4);
    org$pandalanguage$pandac$Position $tmp224 = (($fn223) p_string->$class->vtable[2])(p_string);
    panda$core$Int64$init$builtin_int64(&$tmp226, 51);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp225, $tmp226);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp221, $tmp222, $tmp224, p_string, $tmp225, p_chunk);
    $tmp220 = $tmp221;
    $tmp219 = $tmp220;
    $returnValue216 = $tmp219;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
    return $returnValue216;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result231 = NULL;
    panda$core$MutableString* $tmp232;
    panda$core$MutableString* $tmp233;
    org$pandalanguage$pandac$parser$Token token237;
    org$pandalanguage$pandac$parser$Token$Kind $match$174_13239;
    panda$core$Int64 $tmp240;
    panda$core$String* str245 = NULL;
    panda$core$String* $tmp246;
    panda$core$String* $tmp247;
    panda$core$Char8 $tmp249;
    panda$core$UInt8 $tmp250;
    panda$core$String* $returnValue253;
    panda$core$String* $tmp254;
    panda$core$Int64 $tmp259;
    panda$core$String* $tmp262;
    panda$core$Int64 $tmp265;
    org$pandalanguage$pandac$parser$Token escape270;
    panda$core$Int64 $tmp272;
    panda$core$String* $tmp275;
    panda$core$String* escapeText279 = NULL;
    panda$core$String* $tmp280;
    panda$core$String* $tmp281;
    panda$core$Char8 c283;
    panda$core$Object* $tmp284;
    panda$collections$ListView* $tmp285;
    panda$core$Int64 $tmp287;
    panda$core$Char8 $match$193_21292;
    panda$core$Char8 $tmp293;
    panda$core$UInt8 $tmp294;
    panda$core$Char8 $tmp296;
    panda$core$UInt8 $tmp297;
    panda$core$Char8 $tmp298;
    panda$core$UInt8 $tmp299;
    panda$core$Char8 $tmp301;
    panda$core$UInt8 $tmp302;
    panda$core$Char8 $tmp303;
    panda$core$UInt8 $tmp304;
    panda$core$Char8 $tmp306;
    panda$core$UInt8 $tmp307;
    panda$core$Char8 $tmp308;
    panda$core$UInt8 $tmp309;
    panda$core$Char8 $tmp311;
    panda$core$UInt8 $tmp312;
    panda$core$Char8 $tmp313;
    panda$core$UInt8 $tmp314;
    panda$core$Char8 $tmp316;
    panda$core$UInt8 $tmp317;
    panda$core$Char8 $tmp318;
    panda$core$UInt8 $tmp319;
    panda$core$Char8 $tmp321;
    panda$core$UInt8 $tmp322;
    panda$core$Char8 $tmp323;
    panda$core$UInt8 $tmp324;
    panda$core$Char8 $tmp326;
    panda$core$UInt8 $tmp327;
    panda$core$String* $tmp329;
    panda$core$String* $tmp333;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp334;
    panda$core$Bit $tmp337;
    panda$core$Int64 $tmp340;
    panda$core$String* $tmp342;
    panda$core$String* $tmp343;
    panda$core$String* $tmp347;
    int $tmp230;
    {
        panda$core$MutableString* $tmp234 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp234);
        $tmp233 = $tmp234;
        $tmp232 = $tmp233;
        result231 = $tmp232;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233));
        $l235:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp238 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token237 = $tmp238;
            {
                $match$174_13239 = token237.kind;
                panda$core$Int64$init$builtin_int64(&$tmp240, 12);
                panda$core$Bit $tmp241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$174_13239.$rawValue, $tmp240);
                if ($tmp241.value) {
                {
                    int $tmp244;
                    {
                        panda$core$String* $tmp248 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token237);
                        $tmp247 = $tmp248;
                        $tmp246 = $tmp247;
                        str245 = $tmp246;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                        panda$core$UInt8$init$builtin_uint8(&$tmp250, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp249, $tmp250);
                        panda$core$Bit $tmp251 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str245, $tmp249);
                        if ($tmp251.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token237, &$s252);
                            $tmp254 = NULL;
                            $returnValue253 = $tmp254;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
                            $tmp244 = 0;
                            goto $l242;
                            $l255:;
                            $tmp230 = 0;
                            goto $l228;
                            $l256:;
                            return $returnValue253;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result231, str245);
                    }
                    $tmp244 = -1;
                    goto $l242;
                    $l242:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str245));
                    str245 = NULL;
                    switch ($tmp244) {
                        case -1: goto $l258;
                        case 0: goto $l255;
                    }
                    $l258:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp259, 0);
                panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$174_13239.$rawValue, $tmp259);
                if ($tmp260.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token237, &$s261);
                    $tmp262 = NULL;
                    $returnValue253 = $tmp262;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
                    $tmp230 = 1;
                    goto $l228;
                    $l263:;
                    return $returnValue253;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp265, 106);
                panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$174_13239.$rawValue, $tmp265);
                if ($tmp266.value) {
                {
                    int $tmp269;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp271 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape270 = $tmp271;
                        panda$core$Int64$init$builtin_int64(&$tmp272, 0);
                        panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape270.kind.$rawValue, $tmp272);
                        if ($tmp273.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token237, &$s274);
                            $tmp275 = NULL;
                            $returnValue253 = $tmp275;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
                            $tmp269 = 0;
                            goto $l267;
                            $l276:;
                            $tmp230 = 2;
                            goto $l228;
                            $l277:;
                            return $returnValue253;
                        }
                        }
                        panda$core$String* $tmp282 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape270);
                        $tmp281 = $tmp282;
                        $tmp280 = $tmp281;
                        escapeText279 = $tmp280;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp280));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
                        panda$collections$ListView* $tmp286 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText279);
                        $tmp285 = $tmp286;
                        panda$core$Int64$init$builtin_int64(&$tmp287, 0);
                        ITable* $tmp288 = $tmp285->$class->itable;
                        while ($tmp288->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp288 = $tmp288->next;
                        }
                        $fn290 $tmp289 = $tmp288->methods[0];
                        panda$core$Object* $tmp291 = $tmp289($tmp285, $tmp287);
                        $tmp284 = $tmp291;
                        c283 = ((panda$core$Char8$wrapper*) $tmp284)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp284);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
                        {
                            $match$193_21292 = c283;
                            panda$core$UInt8$init$builtin_uint8(&$tmp294, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp293, $tmp294);
                            panda$core$Bit $tmp295 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$193_21292, $tmp293);
                            if ($tmp295.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp297, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp296, $tmp297);
                                panda$core$MutableString$append$panda$core$Char8(result231, $tmp296);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp299, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp298, $tmp299);
                            panda$core$Bit $tmp300 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$193_21292, $tmp298);
                            if ($tmp300.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp302, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp301, $tmp302);
                                panda$core$MutableString$append$panda$core$Char8(result231, $tmp301);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp304, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp303, $tmp304);
                            panda$core$Bit $tmp305 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$193_21292, $tmp303);
                            if ($tmp305.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp307, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp306, $tmp307);
                                panda$core$MutableString$append$panda$core$Char8(result231, $tmp306);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp309, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp308, $tmp309);
                            panda$core$Bit $tmp310 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$193_21292, $tmp308);
                            if ($tmp310.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp312, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp311, $tmp312);
                                panda$core$MutableString$append$panda$core$Char8(result231, $tmp311);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp314, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp313, $tmp314);
                            panda$core$Bit $tmp315 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$193_21292, $tmp313);
                            if ($tmp315.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp317, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp316, $tmp317);
                                panda$core$MutableString$append$panda$core$Char8(result231, $tmp316);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp319, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp318, $tmp319);
                            panda$core$Bit $tmp320 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$193_21292, $tmp318);
                            if ($tmp320.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp322, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp321, $tmp322);
                                panda$core$MutableString$append$panda$core$Char8(result231, $tmp321);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp324, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp323, $tmp324);
                            panda$core$Bit $tmp325 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$193_21292, $tmp323);
                            if ($tmp325.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp327, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp326, $tmp327);
                                panda$core$MutableString$append$panda$core$Char8(result231, $tmp326);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token237, &$s328);
                                $tmp329 = NULL;
                                $returnValue253 = $tmp329;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp329));
                                $tmp269 = 1;
                                goto $l267;
                                $l330:;
                                $tmp230 = 3;
                                goto $l228;
                                $l331:;
                                return $returnValue253;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp335 = panda$core$String$start$R$panda$core$String$Index(escapeText279);
                        panda$core$String$Index $tmp336 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText279, $tmp335);
                        panda$core$Bit$init$builtin_bit(&$tmp337, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp334, ((panda$core$String$Index$nullable) { $tmp336, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp337);
                        panda$core$String* $tmp338 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText279, $tmp334);
                        $tmp333 = $tmp338;
                        panda$core$MutableString$append$panda$core$String(result231, $tmp333);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
                    }
                    $tmp269 = -1;
                    goto $l267;
                    $l267:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText279));
                    escapeText279 = NULL;
                    switch ($tmp269) {
                        case 0: goto $l276;
                        case 1: goto $l330;
                        case -1: goto $l339;
                    }
                    $l339:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp340, 100);
                panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$174_13239.$rawValue, $tmp340);
                if ($tmp341.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token237);
                    panda$core$String* $tmp344 = panda$core$MutableString$finish$R$panda$core$String(result231);
                    $tmp343 = $tmp344;
                    $tmp342 = $tmp343;
                    $returnValue253 = $tmp342;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
                    $tmp230 = 4;
                    goto $l228;
                    $l345:;
                    return $returnValue253;
                }
                }
                else {
                {
                    panda$core$String* $tmp348 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token237);
                    $tmp347 = $tmp348;
                    panda$core$MutableString$append$panda$core$String(result231, $tmp347);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp347));
                }
                }
                }
                }
                }
            }
        }
        }
        $l236:;
    }
    $tmp230 = -1;
    goto $l228;
    $l228:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result231));
    result231 = NULL;
    switch ($tmp230) {
        case 2: goto $l277;
        case 0: goto $l256;
        case 4: goto $l345;
        case 3: goto $l331;
        case 1: goto $l263;
        case -1: goto $l349;
    }
    $l349:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result353 = NULL;
    panda$core$MutableString* $tmp354;
    panda$core$MutableString* $tmp355;
    org$pandalanguage$pandac$parser$Token token359;
    org$pandalanguage$pandac$parser$Token$Kind $match$219_13361;
    panda$core$Int64 $tmp362;
    panda$core$String* str367 = NULL;
    panda$core$String* $tmp368;
    panda$core$String* $tmp369;
    panda$core$Char8 $tmp371;
    panda$core$UInt8 $tmp372;
    panda$core$String* $returnValue375;
    panda$core$String* $tmp376;
    panda$core$Int64 $tmp381;
    panda$core$String* $tmp384;
    panda$core$Int64 $tmp387;
    org$pandalanguage$pandac$parser$Token escape392;
    panda$core$Int64 $tmp394;
    panda$core$String* $tmp397;
    panda$core$String* escapeText401 = NULL;
    panda$core$String* $tmp402;
    panda$core$String* $tmp403;
    panda$core$Char8 c405;
    panda$core$Object* $tmp406;
    panda$collections$ListView* $tmp407;
    panda$core$Int64 $tmp409;
    panda$core$Char8 $match$238_21414;
    panda$core$Char8 $tmp415;
    panda$core$UInt8 $tmp416;
    panda$core$Char8 $tmp418;
    panda$core$UInt8 $tmp419;
    panda$core$Char8 $tmp420;
    panda$core$UInt8 $tmp421;
    panda$core$Char8 $tmp423;
    panda$core$UInt8 $tmp424;
    panda$core$Char8 $tmp425;
    panda$core$UInt8 $tmp426;
    panda$core$Char8 $tmp428;
    panda$core$UInt8 $tmp429;
    panda$core$Char8 $tmp430;
    panda$core$UInt8 $tmp431;
    panda$core$Char8 $tmp433;
    panda$core$UInt8 $tmp434;
    panda$core$Char8 $tmp435;
    panda$core$UInt8 $tmp436;
    panda$core$Char8 $tmp438;
    panda$core$UInt8 $tmp439;
    panda$core$Char8 $tmp440;
    panda$core$UInt8 $tmp441;
    panda$core$Char8 $tmp443;
    panda$core$UInt8 $tmp444;
    panda$core$Char8 $tmp445;
    panda$core$UInt8 $tmp446;
    panda$core$Char8 $tmp448;
    panda$core$UInt8 $tmp449;
    panda$core$Char8 $tmp450;
    panda$core$UInt8 $tmp451;
    panda$core$Char8 $tmp453;
    panda$core$UInt8 $tmp454;
    panda$core$String* $tmp456;
    panda$core$String* $tmp460;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp461;
    panda$core$Bit $tmp464;
    panda$core$Int64 $tmp467;
    panda$core$String* $tmp469;
    panda$core$String* $tmp470;
    panda$core$Int64 $tmp474;
    panda$core$String* $tmp476;
    panda$core$String* $tmp477;
    panda$core$String* $tmp481;
    int $tmp352;
    {
        panda$core$MutableString* $tmp356 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp356);
        $tmp355 = $tmp356;
        $tmp354 = $tmp355;
        result353 = $tmp354;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp354));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
        $l357:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp360 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token359 = $tmp360;
            {
                $match$219_13361 = token359.kind;
                panda$core$Int64$init$builtin_int64(&$tmp362, 12);
                panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_13361.$rawValue, $tmp362);
                if ($tmp363.value) {
                {
                    int $tmp366;
                    {
                        panda$core$String* $tmp370 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token359);
                        $tmp369 = $tmp370;
                        $tmp368 = $tmp369;
                        str367 = $tmp368;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
                        panda$core$UInt8$init$builtin_uint8(&$tmp372, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp371, $tmp372);
                        panda$core$Bit $tmp373 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str367, $tmp371);
                        if ($tmp373.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token359, &$s374);
                            $tmp376 = NULL;
                            $returnValue375 = $tmp376;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
                            $tmp366 = 0;
                            goto $l364;
                            $l377:;
                            $tmp352 = 0;
                            goto $l350;
                            $l378:;
                            return $returnValue375;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result353, str367);
                    }
                    $tmp366 = -1;
                    goto $l364;
                    $l364:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str367));
                    str367 = NULL;
                    switch ($tmp366) {
                        case -1: goto $l380;
                        case 0: goto $l377;
                    }
                    $l380:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp381, 0);
                panda$core$Bit $tmp382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_13361.$rawValue, $tmp381);
                if ($tmp382.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token359, &$s383);
                    $tmp384 = NULL;
                    $returnValue375 = $tmp384;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp384));
                    $tmp352 = 1;
                    goto $l350;
                    $l385:;
                    return $returnValue375;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp387, 106);
                panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_13361.$rawValue, $tmp387);
                if ($tmp388.value) {
                {
                    int $tmp391;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp393 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape392 = $tmp393;
                        panda$core$Int64$init$builtin_int64(&$tmp394, 0);
                        panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape392.kind.$rawValue, $tmp394);
                        if ($tmp395.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token359, &$s396);
                            $tmp397 = NULL;
                            $returnValue375 = $tmp397;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp397));
                            $tmp391 = 0;
                            goto $l389;
                            $l398:;
                            $tmp352 = 2;
                            goto $l350;
                            $l399:;
                            return $returnValue375;
                        }
                        }
                        panda$core$String* $tmp404 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape392);
                        $tmp403 = $tmp404;
                        $tmp402 = $tmp403;
                        escapeText401 = $tmp402;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
                        panda$collections$ListView* $tmp408 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText401);
                        $tmp407 = $tmp408;
                        panda$core$Int64$init$builtin_int64(&$tmp409, 0);
                        ITable* $tmp410 = $tmp407->$class->itable;
                        while ($tmp410->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp410 = $tmp410->next;
                        }
                        $fn412 $tmp411 = $tmp410->methods[0];
                        panda$core$Object* $tmp413 = $tmp411($tmp407, $tmp409);
                        $tmp406 = $tmp413;
                        c405 = ((panda$core$Char8$wrapper*) $tmp406)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp406);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
                        {
                            $match$238_21414 = c405;
                            panda$core$UInt8$init$builtin_uint8(&$tmp416, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp415, $tmp416);
                            panda$core$Bit $tmp417 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$238_21414, $tmp415);
                            if ($tmp417.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp419, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp418, $tmp419);
                                panda$core$MutableString$append$panda$core$Char8(result353, $tmp418);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp421, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp420, $tmp421);
                            panda$core$Bit $tmp422 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$238_21414, $tmp420);
                            if ($tmp422.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp424, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp423, $tmp424);
                                panda$core$MutableString$append$panda$core$Char8(result353, $tmp423);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp426, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp425, $tmp426);
                            panda$core$Bit $tmp427 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$238_21414, $tmp425);
                            if ($tmp427.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp429, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp428, $tmp429);
                                panda$core$MutableString$append$panda$core$Char8(result353, $tmp428);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp431, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp430, $tmp431);
                            panda$core$Bit $tmp432 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$238_21414, $tmp430);
                            if ($tmp432.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp434, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp433, $tmp434);
                                panda$core$MutableString$append$panda$core$Char8(result353, $tmp433);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp436, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp435, $tmp436);
                            panda$core$Bit $tmp437 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$238_21414, $tmp435);
                            if ($tmp437.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp439, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp438, $tmp439);
                                panda$core$MutableString$append$panda$core$Char8(result353, $tmp438);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp441, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp440, $tmp441);
                            panda$core$Bit $tmp442 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$238_21414, $tmp440);
                            if ($tmp442.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp444, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp443, $tmp444);
                                panda$core$MutableString$append$panda$core$Char8(result353, $tmp443);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp446, 58);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp445, $tmp446);
                            panda$core$Bit $tmp447 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$238_21414, $tmp445);
                            if ($tmp447.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp449, 58);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp448, $tmp449);
                                panda$core$MutableString$append$panda$core$Char8(result353, $tmp448);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp451, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp450, $tmp451);
                            panda$core$Bit $tmp452 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$238_21414, $tmp450);
                            if ($tmp452.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp454, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp453, $tmp454);
                                panda$core$MutableString$append$panda$core$Char8(result353, $tmp453);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token359, &$s455);
                                $tmp456 = NULL;
                                $returnValue375 = $tmp456;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp456));
                                $tmp391 = 1;
                                goto $l389;
                                $l457:;
                                $tmp352 = 3;
                                goto $l350;
                                $l458:;
                                return $returnValue375;
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
                        panda$core$String$Index $tmp462 = panda$core$String$start$R$panda$core$String$Index(escapeText401);
                        panda$core$String$Index $tmp463 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText401, $tmp462);
                        panda$core$Bit$init$builtin_bit(&$tmp464, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp461, ((panda$core$String$Index$nullable) { $tmp463, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp464);
                        panda$core$String* $tmp465 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText401, $tmp461);
                        $tmp460 = $tmp465;
                        panda$core$MutableString$append$panda$core$String(result353, $tmp460);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
                    }
                    $tmp391 = -1;
                    goto $l389;
                    $l389:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText401));
                    escapeText401 = NULL;
                    switch ($tmp391) {
                        case -1: goto $l466;
                        case 1: goto $l457;
                        case 0: goto $l398;
                    }
                    $l466:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp467, 95);
                panda$core$Bit $tmp468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_13361.$rawValue, $tmp467);
                if ($tmp468.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token359);
                    panda$core$String* $tmp471 = panda$core$MutableString$finish$R$panda$core$String(result353);
                    $tmp470 = $tmp471;
                    $tmp469 = $tmp470;
                    $returnValue375 = $tmp469;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp469));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
                    $tmp352 = 4;
                    goto $l350;
                    $l472:;
                    return $returnValue375;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp474, 100);
                panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_13361.$rawValue, $tmp474);
                if ($tmp475.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token359);
                    panda$core$String* $tmp478 = panda$core$MutableString$finish$R$panda$core$String(result353);
                    $tmp477 = $tmp478;
                    $tmp476 = $tmp477;
                    $returnValue375 = $tmp476;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp476));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
                    $tmp352 = 5;
                    goto $l350;
                    $l479:;
                    return $returnValue375;
                }
                }
                else {
                {
                    panda$core$String* $tmp482 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token359);
                    $tmp481 = $tmp482;
                    panda$core$MutableString$append$panda$core$String(result353, $tmp481);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l358:;
    }
    $tmp352 = -1;
    goto $l350;
    $l350:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result353));
    result353 = NULL;
    switch ($tmp352) {
        case -1: goto $l483;
        case 0: goto $l378;
        case 4: goto $l472;
        case 2: goto $l399;
        case 3: goto $l458;
        case 5: goto $l479;
        case 1: goto $l385;
    }
    $l483:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot487 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp488;
    org$pandalanguage$pandac$ASTNode* $tmp489;
    panda$core$Int64 $tmp491;
    org$pandalanguage$pandac$ASTNode* call495 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp496;
    org$pandalanguage$pandac$ASTNode* $tmp497;
    panda$core$Int64 $tmp499;
    panda$collections$ImmutableArray* $tmp502;
    org$pandalanguage$pandac$ASTNode* stringType504 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp505;
    org$pandalanguage$pandac$ASTNode* $tmp506;
    panda$core$Int64 $tmp508;
    org$pandalanguage$pandac$ASTNode* $returnValue512;
    org$pandalanguage$pandac$ASTNode* $tmp513;
    org$pandalanguage$pandac$ASTNode* $tmp514;
    panda$core$Int64 $tmp516;
    org$pandalanguage$pandac$parser$Token$Kind $tmp519;
    panda$core$Int64 $tmp520;
    int $tmp486;
    {
        org$pandalanguage$pandac$ASTNode* $tmp490 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp491, 15);
        org$pandalanguage$pandac$Position $tmp493 = (($fn492) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp490, $tmp491, $tmp493, p_expr, &$s494);
        $tmp489 = $tmp490;
        $tmp488 = $tmp489;
        dot487 = $tmp488;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
        org$pandalanguage$pandac$ASTNode* $tmp498 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp499, 8);
        org$pandalanguage$pandac$Position $tmp501 = (($fn500) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp503 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp503);
        $tmp502 = $tmp503;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp498, $tmp499, $tmp501, dot487, $tmp502);
        $tmp497 = $tmp498;
        $tmp496 = $tmp497;
        call495 = $tmp496;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp496));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
        org$pandalanguage$pandac$ASTNode* $tmp507 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp508, 42);
        org$pandalanguage$pandac$Position $tmp510 = (($fn509) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp507, $tmp508, $tmp510, &$s511);
        $tmp506 = $tmp507;
        $tmp505 = $tmp506;
        stringType504 = $tmp505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
        org$pandalanguage$pandac$ASTNode* $tmp515 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp516, 4);
        org$pandalanguage$pandac$Position $tmp518 = (($fn517) p_expr->$class->vtable[2])(p_expr);
        panda$core$Int64$init$builtin_int64(&$tmp520, 89);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp519, $tmp520);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp515, $tmp516, $tmp518, call495, $tmp519, stringType504);
        $tmp514 = $tmp515;
        $tmp513 = $tmp514;
        $returnValue512 = $tmp513;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
        $tmp486 = 0;
        goto $l484;
        $l521:;
        return $returnValue512;
    }
    $l484:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType504));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call495));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot487));
    dot487 = NULL;
    call495 = NULL;
    stringType504 = NULL;
    switch ($tmp486) {
        case 0: goto $l521;
    }
    $l523:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $atPre1527;
    org$pandalanguage$pandac$parser$Token start531;
    panda$core$Int64 $tmp534;
    panda$core$Int64 $tmp537;
    panda$core$String* $tmp540;
    panda$core$String* $tmp541;
    panda$core$String* $tmp543;
    org$pandalanguage$pandac$ASTNode* $returnValue548;
    org$pandalanguage$pandac$ASTNode* $tmp549;
    org$pandalanguage$pandac$ASTNode* result553 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp554;
    panda$core$MutableString* chunk555 = NULL;
    panda$core$MutableString* $tmp556;
    panda$core$MutableString* $tmp557;
    org$pandalanguage$pandac$parser$Token token561;
    org$pandalanguage$pandac$parser$Token$Kind $match$286_13564;
    panda$core$Int64 $tmp565;
    panda$core$String* str570 = NULL;
    panda$core$String* $tmp571;
    panda$core$String* $tmp572;
    panda$core$Char8 $tmp574;
    panda$core$UInt8 $tmp575;
    org$pandalanguage$pandac$ASTNode* $tmp578;
    panda$core$Int64 $tmp584;
    org$pandalanguage$pandac$ASTNode* $tmp587;
    panda$core$Int64 $tmp591;
    org$pandalanguage$pandac$parser$Token escape596;
    panda$core$Int64 $tmp598;
    org$pandalanguage$pandac$ASTNode* $tmp601;
    panda$core$String* escapeText606 = NULL;
    panda$core$String* $tmp607;
    panda$core$String* $tmp608;
    panda$core$Char8 c610;
    panda$core$Object* $tmp611;
    panda$collections$ListView* $tmp612;
    panda$core$Int64 $tmp614;
    panda$core$Char8 $match$305_21619;
    panda$core$Char8 $tmp620;
    panda$core$UInt8 $tmp621;
    panda$core$Char8 $tmp623;
    panda$core$UInt8 $tmp624;
    panda$core$Char8 $tmp625;
    panda$core$UInt8 $tmp626;
    panda$core$Char8 $tmp628;
    panda$core$UInt8 $tmp629;
    panda$core$Char8 $tmp630;
    panda$core$UInt8 $tmp631;
    panda$core$Char8 $tmp633;
    panda$core$UInt8 $tmp634;
    panda$core$Char8 $tmp635;
    panda$core$UInt8 $tmp636;
    panda$core$Char8 $tmp638;
    panda$core$UInt8 $tmp639;
    panda$core$Char8 $tmp640;
    panda$core$UInt8 $tmp641;
    panda$core$Char8 $tmp643;
    panda$core$UInt8 $tmp644;
    panda$core$Char8 $tmp645;
    panda$core$UInt8 $tmp646;
    panda$core$Char8 $tmp648;
    panda$core$UInt8 $tmp649;
    panda$core$Char8 $tmp650;
    panda$core$UInt8 $tmp651;
    panda$core$Bit oldAllow656;
    panda$core$Bit $tmp657;
    org$pandalanguage$pandac$ASTNode* expr658 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp659;
    org$pandalanguage$pandac$ASTNode* $tmp660;
    org$pandalanguage$pandac$ASTNode* $tmp662;
    panda$core$String* align668 = NULL;
    panda$core$String* $tmp669;
    panda$core$String* format670 = NULL;
    panda$core$String* $tmp671;
    org$pandalanguage$pandac$parser$Token$Kind $tmp672;
    panda$core$Int64 $tmp673;
    panda$core$String* $tmp675;
    panda$core$String* $tmp676;
    panda$core$String* $tmp677;
    org$pandalanguage$pandac$parser$Token$Kind $tmp679;
    panda$core$Int64 $tmp680;
    panda$core$String* $tmp685;
    panda$core$String* $tmp686;
    panda$core$String* $tmp687;
    org$pandalanguage$pandac$ASTNode* $tmp689;
    org$pandalanguage$pandac$ASTNode* formattable696 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp697;
    org$pandalanguage$pandac$ASTNode* $tmp698;
    panda$core$Int64 $tmp700;
    org$pandalanguage$pandac$ASTNode* cast704 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp705;
    org$pandalanguage$pandac$ASTNode* $tmp706;
    panda$core$Int64 $tmp708;
    org$pandalanguage$pandac$parser$Token$Kind $tmp711;
    panda$core$Int64 $tmp712;
    org$pandalanguage$pandac$ASTNode* dot713 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp714;
    org$pandalanguage$pandac$ASTNode* $tmp715;
    panda$core$Int64 $tmp717;
    panda$collections$Array* callArgs721 = NULL;
    panda$collections$Array* $tmp722;
    panda$collections$Array* $tmp723;
    org$pandalanguage$pandac$ASTNode* $tmp725;
    panda$core$Int64 $tmp727;
    org$pandalanguage$pandac$ASTNode* $tmp728;
    org$pandalanguage$pandac$ASTNode* $tmp729;
    org$pandalanguage$pandac$ASTNode* $tmp730;
    panda$core$Int64 $tmp732;
    panda$collections$ImmutableArray* $tmp735;
    org$pandalanguage$pandac$parser$Token$Kind $tmp738;
    panda$core$Int64 $tmp739;
    org$pandalanguage$pandac$ASTNode* $tmp742;
    org$pandalanguage$pandac$ASTNode* $tmp751;
    org$pandalanguage$pandac$ASTNode* $tmp752;
    org$pandalanguage$pandac$ASTNode* $tmp753;
    org$pandalanguage$pandac$ASTNode* pandaType755 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp756;
    org$pandalanguage$pandac$ASTNode* $tmp757;
    panda$core$Int64 $tmp759;
    org$pandalanguage$pandac$ASTNode* callTarget763 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp764;
    org$pandalanguage$pandac$ASTNode* $tmp765;
    panda$core$Int64 $tmp767;
    panda$collections$Array* callArgs771 = NULL;
    panda$collections$Array* $tmp772;
    panda$collections$Array* $tmp773;
    org$pandalanguage$pandac$ASTNode* $tmp775;
    panda$core$Int64 $tmp777;
    org$pandalanguage$pandac$ASTNode* $tmp778;
    org$pandalanguage$pandac$ASTNode* $tmp779;
    org$pandalanguage$pandac$ASTNode* $tmp780;
    panda$core$Int64 $tmp782;
    panda$collections$ImmutableArray* $tmp785;
    panda$core$String* text788 = NULL;
    panda$core$String* $tmp789;
    panda$core$String* $tmp790;
    panda$core$MutableString* $tmp792;
    panda$core$MutableString* $tmp793;
    panda$core$MutableString* $tmp794;
    org$pandalanguage$pandac$ASTNode* $tmp801;
    org$pandalanguage$pandac$ASTNode* $tmp802;
    org$pandalanguage$pandac$ASTNode* $tmp803;
    org$pandalanguage$pandac$ASTNode* $tmp804;
    panda$core$Int64 $tmp806;
    org$pandalanguage$pandac$ASTNode* $tmp808;
    org$pandalanguage$pandac$ASTNode* $tmp809;
    org$pandalanguage$pandac$ASTNode* $tmp810;
    org$pandalanguage$pandac$ASTNode* $tmp812;
    org$pandalanguage$pandac$ASTNode* $tmp813;
    org$pandalanguage$pandac$ASTNode* $tmp814;
    org$pandalanguage$pandac$ASTNode* $tmp818;
    panda$core$String* $tmp823;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp824;
    panda$core$Bit $tmp827;
    panda$core$String* $tmp830;
    org$pandalanguage$pandac$ASTNode* $tmp832;
    org$pandalanguage$pandac$ASTNode* $tmp833;
    org$pandalanguage$pandac$ASTNode* $tmp834;
    panda$core$Int64 $tmp836;
    panda$core$String* $tmp837;
    int $tmp526;
    {
        $atPre1527 = self->allowLambdas;
        int $tmp530;
        {
            org$pandalanguage$pandac$parser$Token $tmp532 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            start531 = $tmp532;
            panda$core$Int64$init$builtin_int64(&$tmp534, 7);
            panda$core$Bit $tmp535 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start531.kind.$rawValue, $tmp534);
            bool $tmp533 = $tmp535.value;
            if (!$tmp533) goto $l536;
            panda$core$Int64$init$builtin_int64(&$tmp537, 6);
            panda$core$Bit $tmp538 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start531.kind.$rawValue, $tmp537);
            $tmp533 = $tmp538.value;
            $l536:;
            panda$core$Bit $tmp539 = { $tmp533 };
            if ($tmp539.value) {
            {
                panda$core$String* $tmp544 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start531);
                $tmp543 = $tmp544;
                panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s542, $tmp543);
                $tmp541 = $tmp545;
                panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, &$s546);
                $tmp540 = $tmp547;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start531, $tmp540);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp540));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
                $tmp549 = NULL;
                $returnValue548 = $tmp549;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp549));
                $tmp530 = 0;
                goto $l528;
                $l550:;
                $tmp526 = 0;
                goto $l524;
                $l551:;
                return $returnValue548;
            }
            }
            $tmp554 = NULL;
            result553 = $tmp554;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp554));
            panda$core$MutableString* $tmp558 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp558);
            $tmp557 = $tmp558;
            $tmp556 = $tmp557;
            chunk555 = $tmp556;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp556));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
            $l559:;
            while (true) {
            {
                org$pandalanguage$pandac$parser$Token $tmp562 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                token561 = $tmp562;
                panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token561.kind.$rawValue, start531.kind.$rawValue);
                if ($tmp563.value) {
                {
                    goto $l560;
                }
                }
                {
                    $match$286_13564 = token561.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp565, 12);
                    panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286_13564.$rawValue, $tmp565);
                    if ($tmp566.value) {
                    {
                        int $tmp569;
                        {
                            panda$core$String* $tmp573 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token561);
                            $tmp572 = $tmp573;
                            $tmp571 = $tmp572;
                            str570 = $tmp571;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp571));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
                            panda$core$UInt8$init$builtin_uint8(&$tmp575, 10);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp574, $tmp575);
                            panda$core$Bit $tmp576 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str570, $tmp574);
                            if ($tmp576.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start531, &$s577);
                                $tmp578 = NULL;
                                $returnValue548 = $tmp578;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp578));
                                $tmp569 = 0;
                                goto $l567;
                                $l579:;
                                $tmp530 = 1;
                                goto $l528;
                                $l580:;
                                $tmp526 = 1;
                                goto $l524;
                                $l581:;
                                return $returnValue548;
                            }
                            }
                            panda$core$MutableString$append$panda$core$String(chunk555, str570);
                        }
                        $tmp569 = -1;
                        goto $l567;
                        $l567:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str570));
                        str570 = NULL;
                        switch ($tmp569) {
                            case 0: goto $l579;
                            case -1: goto $l583;
                        }
                        $l583:;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp584, 0);
                    panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286_13564.$rawValue, $tmp584);
                    if ($tmp585.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start531, &$s586);
                        $tmp587 = NULL;
                        $returnValue548 = $tmp587;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp587));
                        $tmp530 = 2;
                        goto $l528;
                        $l588:;
                        $tmp526 = 2;
                        goto $l524;
                        $l589:;
                        return $returnValue548;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp591, 106);
                    panda$core$Bit $tmp592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$286_13564.$rawValue, $tmp591);
                    if ($tmp592.value) {
                    {
                        int $tmp595;
                        {
                            org$pandalanguage$pandac$parser$Token $tmp597 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                            escape596 = $tmp597;
                            panda$core$Int64$init$builtin_int64(&$tmp598, 0);
                            panda$core$Bit $tmp599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape596.kind.$rawValue, $tmp598);
                            if ($tmp599.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start531, &$s600);
                                $tmp601 = NULL;
                                $returnValue548 = $tmp601;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp601));
                                $tmp595 = 0;
                                goto $l593;
                                $l602:;
                                $tmp530 = 3;
                                goto $l528;
                                $l603:;
                                $tmp526 = 3;
                                goto $l524;
                                $l604:;
                                return $returnValue548;
                            }
                            }
                            panda$core$String* $tmp609 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape596);
                            $tmp608 = $tmp609;
                            $tmp607 = $tmp608;
                            escapeText606 = $tmp607;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp607));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
                            panda$collections$ListView* $tmp613 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText606);
                            $tmp612 = $tmp613;
                            panda$core$Int64$init$builtin_int64(&$tmp614, 0);
                            ITable* $tmp615 = $tmp612->$class->itable;
                            while ($tmp615->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp615 = $tmp615->next;
                            }
                            $fn617 $tmp616 = $tmp615->methods[0];
                            panda$core$Object* $tmp618 = $tmp616($tmp612, $tmp614);
                            $tmp611 = $tmp618;
                            c610 = ((panda$core$Char8$wrapper*) $tmp611)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp611);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp612));
                            {
                                $match$305_21619 = c610;
                                panda$core$UInt8$init$builtin_uint8(&$tmp621, 110);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp620, $tmp621);
                                panda$core$Bit $tmp622 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$305_21619, $tmp620);
                                if ($tmp622.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp624, 10);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp623, $tmp624);
                                    panda$core$MutableString$append$panda$core$Char8(chunk555, $tmp623);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp626, 114);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp625, $tmp626);
                                panda$core$Bit $tmp627 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$305_21619, $tmp625);
                                if ($tmp627.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp629, 13);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp628, $tmp629);
                                    panda$core$MutableString$append$panda$core$Char8(chunk555, $tmp628);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp631, 116);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp630, $tmp631);
                                panda$core$Bit $tmp632 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$305_21619, $tmp630);
                                if ($tmp632.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp634, 9);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp633, $tmp634);
                                    panda$core$MutableString$append$panda$core$Char8(chunk555, $tmp633);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp636, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp635, $tmp636);
                                panda$core$Bit $tmp637 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$305_21619, $tmp635);
                                if ($tmp637.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp639, 39);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp638, $tmp639);
                                    panda$core$MutableString$append$panda$core$Char8(chunk555, $tmp638);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp641, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp640, $tmp641);
                                panda$core$Bit $tmp642 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$305_21619, $tmp640);
                                if ($tmp642.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp644, 34);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp643, $tmp644);
                                    panda$core$MutableString$append$panda$core$Char8(chunk555, $tmp643);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp646, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp645, $tmp646);
                                panda$core$Bit $tmp647 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$305_21619, $tmp645);
                                if ($tmp647.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp649, 92);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp648, $tmp649);
                                    panda$core$MutableString$append$panda$core$Char8(chunk555, $tmp648);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp651, 123);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp650, $tmp651);
                                panda$core$Bit $tmp652 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$305_21619, $tmp650);
                                if ($tmp652.value) {
                                {
                                    {
                                        int $tmp655;
                                        {
                                            oldAllow656 = self->allowLambdas;
                                            panda$core$Bit$init$builtin_bit(&$tmp657, false);
                                            self->allowLambdas = $tmp657;
                                            org$pandalanguage$pandac$ASTNode* $tmp661 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                            $tmp660 = $tmp661;
                                            $tmp659 = $tmp660;
                                            expr658 = $tmp659;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp659));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
                                            self->allowLambdas = oldAllow656;
                                            if (((panda$core$Bit) { expr658 == NULL }).value) {
                                            {
                                                $tmp662 = NULL;
                                                $returnValue548 = $tmp662;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp662));
                                                $tmp655 = 0;
                                                goto $l653;
                                                $l663:;
                                                $tmp595 = 1;
                                                goto $l593;
                                                $l664:;
                                                $tmp530 = 4;
                                                goto $l528;
                                                $l665:;
                                                $tmp526 = 4;
                                                goto $l524;
                                                $l666:;
                                                return $returnValue548;
                                            }
                                            }
                                            $tmp669 = NULL;
                                            align668 = $tmp669;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp669));
                                            $tmp671 = NULL;
                                            format670 = $tmp671;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp671));
                                            panda$core$Int64$init$builtin_int64(&$tmp673, 105);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp672, $tmp673);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp674 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp672);
                                            if (((panda$core$Bit) { $tmp674.nonnull }).value) {
                                            {
                                                {
                                                    $tmp675 = align668;
                                                    panda$core$String* $tmp678 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start531);
                                                    $tmp677 = $tmp678;
                                                    $tmp676 = $tmp677;
                                                    align668 = $tmp676;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp676));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp675));
                                                }
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp680, 95);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp679, $tmp680);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp681 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp679);
                                            if (((panda$core$Bit) { $tmp681.nonnull }).value) {
                                            {
                                                int $tmp684;
                                                {
                                                    {
                                                        $tmp685 = format670;
                                                        panda$core$String* $tmp688 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start531);
                                                        $tmp687 = $tmp688;
                                                        $tmp686 = $tmp687;
                                                        format670 = $tmp686;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp686));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
                                                    }
                                                    if (((panda$core$Bit) { format670 == NULL }).value) {
                                                    {
                                                        $tmp689 = NULL;
                                                        $returnValue548 = $tmp689;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp689));
                                                        $tmp684 = 0;
                                                        goto $l682;
                                                        $l690:;
                                                        $tmp655 = 1;
                                                        goto $l653;
                                                        $l691:;
                                                        $tmp595 = 2;
                                                        goto $l593;
                                                        $l692:;
                                                        $tmp530 = 5;
                                                        goto $l528;
                                                        $l693:;
                                                        $tmp526 = 5;
                                                        goto $l524;
                                                        $l694:;
                                                        return $returnValue548;
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp699 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp700, 42);
                                                    org$pandalanguage$pandac$Position $tmp702 = (($fn701) expr658->$class->vtable[2])(expr658);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp699, $tmp700, $tmp702, &$s703);
                                                    $tmp698 = $tmp699;
                                                    $tmp697 = $tmp698;
                                                    formattable696 = $tmp697;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp697));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp698));
                                                    org$pandalanguage$pandac$ASTNode* $tmp707 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp708, 4);
                                                    org$pandalanguage$pandac$Position $tmp710 = (($fn709) expr658->$class->vtable[2])(expr658);
                                                    panda$core$Int64$init$builtin_int64(&$tmp712, 89);
                                                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp711, $tmp712);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp707, $tmp708, $tmp710, expr658, $tmp711, formattable696);
                                                    $tmp706 = $tmp707;
                                                    $tmp705 = $tmp706;
                                                    cast704 = $tmp705;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp705));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
                                                    org$pandalanguage$pandac$ASTNode* $tmp716 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp717, 15);
                                                    org$pandalanguage$pandac$Position $tmp719 = (($fn718) expr658->$class->vtable[2])(expr658);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp716, $tmp717, $tmp719, cast704, &$s720);
                                                    $tmp715 = $tmp716;
                                                    $tmp714 = $tmp715;
                                                    dot713 = $tmp714;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp714));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp715));
                                                    panda$collections$Array* $tmp724 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp724);
                                                    $tmp723 = $tmp724;
                                                    $tmp722 = $tmp723;
                                                    callArgs721 = $tmp722;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp722));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp723));
                                                    org$pandalanguage$pandac$ASTNode* $tmp726 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp727, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp726, $tmp727, start531.position, format670);
                                                    $tmp725 = $tmp726;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs721, ((panda$core$Object*) $tmp725));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
                                                    {
                                                        $tmp728 = expr658;
                                                        org$pandalanguage$pandac$ASTNode* $tmp731 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp732, 8);
                                                        org$pandalanguage$pandac$Position $tmp734 = (($fn733) expr658->$class->vtable[2])(expr658);
                                                        panda$collections$ImmutableArray* $tmp736 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs721);
                                                        $tmp735 = $tmp736;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp731, $tmp732, $tmp734, dot713, $tmp735);
                                                        $tmp730 = $tmp731;
                                                        $tmp729 = $tmp730;
                                                        expr658 = $tmp729;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp729));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
                                                    }
                                                }
                                                $tmp684 = -1;
                                                goto $l682;
                                                $l682:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs721));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot713));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast704));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable696));
                                                formattable696 = NULL;
                                                cast704 = NULL;
                                                dot713 = NULL;
                                                callArgs721 = NULL;
                                                switch ($tmp684) {
                                                    case -1: goto $l737;
                                                    case 0: goto $l690;
                                                }
                                                $l737:;
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp739, 100);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp738, $tmp739);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp741 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp738, &$s740);
                                            if (((panda$core$Bit) { !$tmp741.nonnull }).value) {
                                            {
                                                $tmp742 = NULL;
                                                $returnValue548 = $tmp742;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp742));
                                                $tmp655 = 2;
                                                goto $l653;
                                                $l743:;
                                                $tmp595 = 3;
                                                goto $l593;
                                                $l744:;
                                                $tmp530 = 6;
                                                goto $l528;
                                                $l745:;
                                                $tmp526 = 6;
                                                goto $l524;
                                                $l746:;
                                                return $returnValue548;
                                            }
                                            }
                                            if (((panda$core$Bit) { align668 != NULL }).value) {
                                            {
                                                int $tmp750;
                                                {
                                                    if (((panda$core$Bit) { format670 == NULL }).value) {
                                                    {
                                                        {
                                                            $tmp751 = expr658;
                                                            org$pandalanguage$pandac$ASTNode* $tmp754 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr658);
                                                            $tmp753 = $tmp754;
                                                            $tmp752 = $tmp753;
                                                            expr658 = $tmp752;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp752));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp753));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp758 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp759, 42);
                                                    org$pandalanguage$pandac$Position $tmp761 = (($fn760) expr658->$class->vtable[2])(expr658);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp758, $tmp759, $tmp761, &$s762);
                                                    $tmp757 = $tmp758;
                                                    $tmp756 = $tmp757;
                                                    pandaType755 = $tmp756;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp756));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp757));
                                                    org$pandalanguage$pandac$ASTNode* $tmp766 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp767, 15);
                                                    org$pandalanguage$pandac$Position $tmp769 = (($fn768) expr658->$class->vtable[2])(expr658);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp766, $tmp767, $tmp769, pandaType755, &$s770);
                                                    $tmp765 = $tmp766;
                                                    $tmp764 = $tmp765;
                                                    callTarget763 = $tmp764;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp764));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp765));
                                                    panda$collections$Array* $tmp774 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp774);
                                                    $tmp773 = $tmp774;
                                                    $tmp772 = $tmp773;
                                                    callArgs771 = $tmp772;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp772));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs771, ((panda$core$Object*) expr658));
                                                    org$pandalanguage$pandac$ASTNode* $tmp776 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp777, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp776, $tmp777, start531.position, align668);
                                                    $tmp775 = $tmp776;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs771, ((panda$core$Object*) $tmp775));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
                                                    {
                                                        $tmp778 = expr658;
                                                        org$pandalanguage$pandac$ASTNode* $tmp781 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp782, 8);
                                                        org$pandalanguage$pandac$Position $tmp784 = (($fn783) expr658->$class->vtable[2])(expr658);
                                                        panda$collections$ImmutableArray* $tmp786 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs771);
                                                        $tmp785 = $tmp786;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp781, $tmp782, $tmp784, callTarget763, $tmp785);
                                                        $tmp780 = $tmp781;
                                                        $tmp779 = $tmp780;
                                                        expr658 = $tmp779;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp779));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp780));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp778));
                                                    }
                                                }
                                                $tmp750 = -1;
                                                goto $l748;
                                                $l748:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs771));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget763));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType755));
                                                pandaType755 = NULL;
                                                callTarget763 = NULL;
                                                callArgs771 = NULL;
                                                switch ($tmp750) {
                                                    case -1: goto $l787;
                                                }
                                                $l787:;
                                            }
                                            }
                                            panda$core$String* $tmp791 = panda$core$MutableString$finish$R$panda$core$String(chunk555);
                                            $tmp790 = $tmp791;
                                            $tmp789 = $tmp790;
                                            text788 = $tmp789;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp789));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp790));
                                            {
                                                $tmp792 = chunk555;
                                                panda$core$MutableString* $tmp795 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                                panda$core$MutableString$init($tmp795);
                                                $tmp794 = $tmp795;
                                                $tmp793 = $tmp794;
                                                chunk555 = $tmp793;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp793));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp794));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp792));
                                            }
                                            panda$core$Bit $tmp798 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text788, &$s797);
                                            bool $tmp796 = $tmp798.value;
                                            if ($tmp796) goto $l799;
                                            $tmp796 = ((panda$core$Bit) { result553 != NULL }).value;
                                            $l799:;
                                            panda$core$Bit $tmp800 = { $tmp796 };
                                            if ($tmp800.value) {
                                            {
                                                {
                                                    $tmp801 = result553;
                                                    org$pandalanguage$pandac$ASTNode* $tmp805 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp806, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp805, $tmp806, start531.position, text788);
                                                    $tmp804 = $tmp805;
                                                    org$pandalanguage$pandac$ASTNode* $tmp807 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result553, $tmp804);
                                                    $tmp803 = $tmp807;
                                                    $tmp802 = $tmp803;
                                                    result553 = $tmp802;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp802));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp803));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp804));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp801));
                                                }
                                                {
                                                    $tmp808 = result553;
                                                    org$pandalanguage$pandac$ASTNode* $tmp811 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result553, expr658);
                                                    $tmp810 = $tmp811;
                                                    $tmp809 = $tmp810;
                                                    result553 = $tmp809;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp809));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp810));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp808));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp812 = result553;
                                                    org$pandalanguage$pandac$ASTNode* $tmp815 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr658);
                                                    $tmp814 = $tmp815;
                                                    $tmp813 = $tmp814;
                                                    result553 = $tmp813;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp813));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp814));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
                                                }
                                            }
                                            }
                                        }
                                        $tmp655 = -1;
                                        goto $l653;
                                        $l653:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text788));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format670));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align668));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr658));
                                        expr658 = NULL;
                                        text788 = NULL;
                                        switch ($tmp655) {
                                            case 0: goto $l663;
                                            case 1: goto $l691;
                                            case 2: goto $l743;
                                            case -1: goto $l816;
                                        }
                                        $l816:;
                                    }
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token561, &$s817);
                                    $tmp818 = NULL;
                                    $returnValue548 = $tmp818;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp818));
                                    $tmp595 = 4;
                                    goto $l593;
                                    $l819:;
                                    $tmp530 = 7;
                                    goto $l528;
                                    $l820:;
                                    $tmp526 = 7;
                                    goto $l524;
                                    $l821:;
                                    return $returnValue548;
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            panda$core$String$Index $tmp825 = panda$core$String$start$R$panda$core$String$Index(escapeText606);
                            panda$core$String$Index $tmp826 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText606, $tmp825);
                            panda$core$Bit$init$builtin_bit(&$tmp827, false);
                            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp824, ((panda$core$String$Index$nullable) { $tmp826, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp827);
                            panda$core$String* $tmp828 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText606, $tmp824);
                            $tmp823 = $tmp828;
                            panda$core$MutableString$append$panda$core$String(chunk555, $tmp823);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp823));
                        }
                        $tmp595 = -1;
                        goto $l593;
                        $l593:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText606));
                        escapeText606 = NULL;
                        switch ($tmp595) {
                            case -1: goto $l829;
                            case 2: goto $l692;
                            case 0: goto $l602;
                            case 4: goto $l819;
                            case 1: goto $l664;
                            case 3: goto $l744;
                        }
                        $l829:;
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp831 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token561);
                        $tmp830 = $tmp831;
                        panda$core$MutableString$append$panda$core$String(chunk555, $tmp830);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp830));
                    }
                    }
                    }
                    }
                }
            }
            }
            $l560:;
            org$pandalanguage$pandac$ASTNode* $tmp835 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp836, 38);
            panda$core$String* $tmp838 = panda$core$MutableString$finish$R$panda$core$String(chunk555);
            $tmp837 = $tmp838;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp835, $tmp836, start531.position, $tmp837);
            $tmp834 = $tmp835;
            org$pandalanguage$pandac$ASTNode* $tmp839 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result553, $tmp834);
            $tmp833 = $tmp839;
            $tmp832 = $tmp833;
            $returnValue548 = $tmp832;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp832));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp833));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp834));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp837));
            $tmp530 = 8;
            goto $l528;
            $l840:;
            $tmp526 = 8;
            goto $l524;
            $l841:;
            return $returnValue548;
        }
        $l528:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk555));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result553));
        chunk555 = NULL;
        switch ($tmp530) {
            case 3: goto $l603;
            case 0: goto $l550;
            case 5: goto $l693;
            case 7: goto $l820;
            case 2: goto $l588;
            case 6: goto $l745;
            case 4: goto $l665;
            case 8: goto $l840;
            case 1: goto $l580;
        }
        $l843:;
    }
    $tmp526 = -1;
    goto $l524;
    $l524:;
    panda$core$Bit $tmp845 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->allowLambdas, $atPre1527);
    if ($tmp845.value) goto $l846; else goto $l847;
    $l847:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s848, (panda$core$Int64) { 273 }, &$s849);
    abort();
    $l846:;
    switch ($tmp526) {
        case 3: goto $l604;
        case 2: goto $l589;
        case 5: goto $l694;
        case 4: goto $l666;
        case 6: goto $l746;
        case 8: goto $l841;
        case 7: goto $l821;
        case 1: goto $l581;
        case -1: goto $l844;
        case 0: goto $l551;
    }
    $l844:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start853;
    org$pandalanguage$pandac$parser$Token$Kind $tmp854;
    panda$core$Int64 $tmp855;
    org$pandalanguage$pandac$ASTNode* $returnValue858;
    org$pandalanguage$pandac$ASTNode* $tmp859;
    org$pandalanguage$pandac$ASTNode* expr862 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp863;
    org$pandalanguage$pandac$ASTNode* $tmp864;
    org$pandalanguage$pandac$ASTNode* $tmp866;
    org$pandalanguage$pandac$ASTNode* $match$391_9872 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp873;
    panda$core$Int64 $tmp874;
    org$pandalanguage$pandac$Position firstPosition876;
    panda$core$String* firstName878 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp880;
    panda$core$Int64 $tmp881;
    panda$collections$Array* parameters886 = NULL;
    panda$collections$Array* $tmp887;
    panda$collections$Array* $tmp888;
    org$pandalanguage$pandac$ASTNode* firstType890 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp891;
    org$pandalanguage$pandac$ASTNode* $tmp892;
    org$pandalanguage$pandac$ASTNode* $tmp894;
    org$pandalanguage$pandac$ASTNode* $tmp899;
    panda$core$Int64 $tmp901;
    org$pandalanguage$pandac$parser$Token$Kind $tmp905;
    panda$core$Int64 $tmp906;
    org$pandalanguage$pandac$parser$Token$nullable nextName911;
    org$pandalanguage$pandac$parser$Token$Kind $tmp912;
    panda$core$Int64 $tmp913;
    org$pandalanguage$pandac$parser$Token$Kind $tmp916;
    panda$core$Int64 $tmp917;
    org$pandalanguage$pandac$ASTNode* $tmp920;
    org$pandalanguage$pandac$ASTNode* nextType926 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp927;
    org$pandalanguage$pandac$ASTNode* $tmp928;
    org$pandalanguage$pandac$ASTNode* $tmp930;
    org$pandalanguage$pandac$ASTNode* $tmp936;
    panda$core$Int64 $tmp938;
    panda$core$String* $tmp939;
    org$pandalanguage$pandac$parser$Token$Kind $tmp942;
    panda$core$Int64 $tmp943;
    org$pandalanguage$pandac$ASTNode* $tmp946;
    org$pandalanguage$pandac$parser$Token$Kind $tmp951;
    panda$core$Int64 $tmp952;
    org$pandalanguage$pandac$ASTNode* $tmp955;
    org$pandalanguage$pandac$ASTNode* body960 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp961;
    org$pandalanguage$pandac$ASTNode* $tmp962;
    org$pandalanguage$pandac$ASTNode* $tmp964;
    org$pandalanguage$pandac$ASTNode* $tmp969;
    org$pandalanguage$pandac$ASTNode* $tmp970;
    panda$core$Int64 $tmp972;
    panda$collections$ImmutableArray* $tmp973;
    org$pandalanguage$pandac$parser$Token$Kind $tmp980;
    panda$core$Int64 $tmp981;
    panda$collections$Array* parameters986 = NULL;
    panda$collections$Array* $tmp987;
    panda$collections$Array* $tmp988;
    panda$core$Bit validLambda990;
    panda$core$Bit $tmp991;
    org$pandalanguage$pandac$ASTNode* nextExpr997 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp998;
    org$pandalanguage$pandac$ASTNode* $tmp999;
    org$pandalanguage$pandac$ASTNode* $tmp1001;
    org$pandalanguage$pandac$ASTNode* $tmp1009;
    panda$core$Int64 $tmp1014;
    panda$core$Bit $tmp1016;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1020;
    panda$core$Int64 $tmp1021;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1023;
    panda$core$Int64 $tmp1024;
    org$pandalanguage$pandac$ASTNode* $tmp1027;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1034;
    panda$core$Int64 $tmp1035;
    org$pandalanguage$pandac$ASTNode* body1041 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1042;
    org$pandalanguage$pandac$ASTNode* $tmp1043;
    org$pandalanguage$pandac$ASTNode* $tmp1045;
    org$pandalanguage$pandac$ASTNode* $tmp1051;
    org$pandalanguage$pandac$ASTNode* $tmp1052;
    panda$core$Int64 $tmp1054;
    panda$collections$ImmutableArray* $tmp1055;
    org$pandalanguage$pandac$ASTNode* $tmp1064;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1070;
    panda$core$Int64 $tmp1071;
    org$pandalanguage$pandac$ASTNode* $tmp1074;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1078;
    panda$core$Int64 $tmp1079;
    panda$collections$Array* parameters1084 = NULL;
    panda$collections$Array* $tmp1085;
    panda$collections$Array* $tmp1086;
    org$pandalanguage$pandac$ASTNode* body1088 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1089;
    org$pandalanguage$pandac$ASTNode* $tmp1090;
    org$pandalanguage$pandac$ASTNode* $tmp1092;
    org$pandalanguage$pandac$ASTNode* $tmp1097;
    org$pandalanguage$pandac$ASTNode* $tmp1098;
    panda$core$Int64 $tmp1100;
    panda$collections$ImmutableArray* $tmp1101;
    org$pandalanguage$pandac$ASTNode* $tmp1108;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1115;
    panda$core$Int64 $tmp1116;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1118;
    panda$core$Int64 $tmp1119;
    org$pandalanguage$pandac$ASTNode* $tmp1121;
    panda$collections$Array* arguments1126 = NULL;
    panda$collections$Array* $tmp1127;
    panda$collections$Array* $tmp1128;
    org$pandalanguage$pandac$ASTNode* nextExpr1135 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1136;
    org$pandalanguage$pandac$ASTNode* $tmp1137;
    org$pandalanguage$pandac$ASTNode* $tmp1139;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1147;
    panda$core$Int64 $tmp1148;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1150;
    panda$core$Int64 $tmp1151;
    org$pandalanguage$pandac$ASTNode* $tmp1154;
    int $tmp852;
    {
        panda$core$Int64$init$builtin_int64(&$tmp855, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp854, $tmp855);
        org$pandalanguage$pandac$parser$Token$nullable $tmp857 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp854, &$s856);
        start853 = $tmp857;
        if (((panda$core$Bit) { !start853.nonnull }).value) {
        {
            $tmp859 = NULL;
            $returnValue858 = $tmp859;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp859));
            $tmp852 = 0;
            goto $l850;
            $l860:;
            return $returnValue858;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp865 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp864 = $tmp865;
        $tmp863 = $tmp864;
        expr862 = $tmp863;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp863));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp864));
        if (((panda$core$Bit) { expr862 == NULL }).value) {
        {
            $tmp866 = NULL;
            $returnValue858 = $tmp866;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp866));
            $tmp852 = 1;
            goto $l850;
            $l867:;
            return $returnValue858;
        }
        }
        int $tmp871;
        {
            $tmp873 = expr862;
            $match$391_9872 = $tmp873;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp873));
            panda$core$Int64$init$builtin_int64(&$tmp874, 20);
            panda$core$Bit $tmp875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$391_9872->$rawValue, $tmp874);
            if ($tmp875.value) {
            {
                org$pandalanguage$pandac$Position* $tmp877 = ((org$pandalanguage$pandac$Position*) ((char*) $match$391_9872->$data + 0));
                firstPosition876 = *$tmp877;
                panda$core$String** $tmp879 = ((panda$core$String**) ((char*) $match$391_9872->$data + 16));
                firstName878 = *$tmp879;
                panda$core$Int64$init$builtin_int64(&$tmp881, 95);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp880, $tmp881);
                org$pandalanguage$pandac$parser$Token$nullable $tmp882 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp880);
                if (((panda$core$Bit) { $tmp882.nonnull }).value) {
                {
                    int $tmp885;
                    {
                        panda$collections$Array* $tmp889 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp889);
                        $tmp888 = $tmp889;
                        $tmp887 = $tmp888;
                        parameters886 = $tmp887;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp887));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
                        org$pandalanguage$pandac$ASTNode* $tmp893 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp892 = $tmp893;
                        $tmp891 = $tmp892;
                        firstType890 = $tmp891;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp891));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp892));
                        if (((panda$core$Bit) { firstType890 == NULL }).value) {
                        {
                            $tmp894 = NULL;
                            $returnValue858 = $tmp894;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp894));
                            $tmp885 = 0;
                            goto $l883;
                            $l895:;
                            $tmp871 = 0;
                            goto $l869;
                            $l896:;
                            $tmp852 = 2;
                            goto $l850;
                            $l897:;
                            return $returnValue858;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp900 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp901, 31);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp900, $tmp901, firstPosition876, firstName878, firstType890);
                        $tmp899 = $tmp900;
                        panda$collections$Array$add$panda$collections$Array$T(parameters886, ((panda$core$Object*) $tmp899));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp899));
                        $l902:;
                        panda$core$Int64$init$builtin_int64(&$tmp906, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp905, $tmp906);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp907 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp905);
                        bool $tmp904 = ((panda$core$Bit) { $tmp907.nonnull }).value;
                        if (!$tmp904) goto $l903;
                        {
                            int $tmp910;
                            {
                                panda$core$Int64$init$builtin_int64(&$tmp913, 48);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp912, $tmp913);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp915 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp912, &$s914);
                                nextName911 = $tmp915;
                                panda$core$Int64$init$builtin_int64(&$tmp917, 95);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp916, $tmp917);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp919 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp916, &$s918);
                                if (((panda$core$Bit) { !$tmp919.nonnull }).value) {
                                {
                                    $tmp920 = NULL;
                                    $returnValue858 = $tmp920;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp920));
                                    $tmp910 = 0;
                                    goto $l908;
                                    $l921:;
                                    $tmp885 = 1;
                                    goto $l883;
                                    $l922:;
                                    $tmp871 = 1;
                                    goto $l869;
                                    $l923:;
                                    $tmp852 = 3;
                                    goto $l850;
                                    $l924:;
                                    return $returnValue858;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp929 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp928 = $tmp929;
                                $tmp927 = $tmp928;
                                nextType926 = $tmp927;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp927));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp928));
                                if (((panda$core$Bit) { nextType926 == NULL }).value) {
                                {
                                    $tmp930 = NULL;
                                    $returnValue858 = $tmp930;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp930));
                                    $tmp910 = 1;
                                    goto $l908;
                                    $l931:;
                                    $tmp885 = 2;
                                    goto $l883;
                                    $l932:;
                                    $tmp871 = 2;
                                    goto $l869;
                                    $l933:;
                                    $tmp852 = 4;
                                    goto $l850;
                                    $l934:;
                                    return $returnValue858;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp937 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp938, 31);
                                panda$core$String* $tmp940 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) nextName911.value));
                                $tmp939 = $tmp940;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp937, $tmp938, ((org$pandalanguage$pandac$parser$Token) nextName911.value).position, $tmp939, nextType926);
                                $tmp936 = $tmp937;
                                panda$collections$Array$add$panda$collections$Array$T(parameters886, ((panda$core$Object*) $tmp936));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp936));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp939));
                            }
                            $tmp910 = -1;
                            goto $l908;
                            $l908:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextType926));
                            nextType926 = NULL;
                            switch ($tmp910) {
                                case -1: goto $l941;
                                case 0: goto $l921;
                                case 1: goto $l931;
                            }
                            $l941:;
                        }
                        goto $l902;
                        $l903:;
                        panda$core$Int64$init$builtin_int64(&$tmp943, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp942, $tmp943);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp945 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp942, &$s944);
                        if (((panda$core$Bit) { !$tmp945.nonnull }).value) {
                        {
                            $tmp946 = NULL;
                            $returnValue858 = $tmp946;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp946));
                            $tmp885 = 3;
                            goto $l883;
                            $l947:;
                            $tmp871 = 3;
                            goto $l869;
                            $l948:;
                            $tmp852 = 5;
                            goto $l850;
                            $l949:;
                            return $returnValue858;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp952, 90);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp951, $tmp952);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp954 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp951, &$s953);
                        if (((panda$core$Bit) { !$tmp954.nonnull }).value) {
                        {
                            $tmp955 = NULL;
                            $returnValue858 = $tmp955;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp955));
                            $tmp885 = 4;
                            goto $l883;
                            $l956:;
                            $tmp871 = 4;
                            goto $l869;
                            $l957:;
                            $tmp852 = 6;
                            goto $l850;
                            $l958:;
                            return $returnValue858;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp963 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp962 = $tmp963;
                        $tmp961 = $tmp962;
                        body960 = $tmp961;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp961));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp962));
                        if (((panda$core$Bit) { body960 == NULL }).value) {
                        {
                            $tmp964 = NULL;
                            $returnValue858 = $tmp964;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp964));
                            $tmp885 = 5;
                            goto $l883;
                            $l965:;
                            $tmp871 = 5;
                            goto $l869;
                            $l966:;
                            $tmp852 = 7;
                            goto $l850;
                            $l967:;
                            return $returnValue858;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp971 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp972, 43);
                        panda$collections$ImmutableArray* $tmp974 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters886);
                        $tmp973 = $tmp974;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp971, $tmp972, ((org$pandalanguage$pandac$parser$Token) start853.value).position, $tmp973, body960);
                        $tmp970 = $tmp971;
                        $tmp969 = $tmp970;
                        $returnValue858 = $tmp969;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp969));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp970));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp973));
                        $tmp885 = 6;
                        goto $l883;
                        $l975:;
                        $tmp871 = 6;
                        goto $l869;
                        $l976:;
                        $tmp852 = 8;
                        goto $l850;
                        $l977:;
                        return $returnValue858;
                    }
                    $l883:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body960));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) firstType890));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters886));
                    parameters886 = NULL;
                    firstType890 = NULL;
                    body960 = NULL;
                    switch ($tmp885) {
                        case 6: goto $l975;
                        case 1: goto $l922;
                        case 3: goto $l947;
                        case 5: goto $l965;
                        case 4: goto $l956;
                        case 2: goto $l932;
                        case 0: goto $l895;
                    }
                    $l979:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp981, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp980, $tmp981);
                org$pandalanguage$pandac$parser$Token$nullable $tmp982 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp980);
                if (((panda$core$Bit) { $tmp982.nonnull }).value) {
                {
                    int $tmp985;
                    {
                        panda$collections$Array* $tmp989 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp989);
                        $tmp988 = $tmp989;
                        $tmp987 = $tmp988;
                        parameters986 = $tmp987;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp987));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp988));
                        panda$collections$Array$add$panda$collections$Array$T(parameters986, ((panda$core$Object*) expr862));
                        panda$core$Bit$init$builtin_bit(&$tmp991, true);
                        validLambda990 = $tmp991;
                        $l992:;
                        {
                            int $tmp996;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1000 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp999 = $tmp1000;
                                $tmp998 = $tmp999;
                                nextExpr997 = $tmp998;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp998));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp999));
                                if (((panda$core$Bit) { nextExpr997 == NULL }).value) {
                                {
                                    $tmp1001 = NULL;
                                    $returnValue858 = $tmp1001;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1001));
                                    $tmp996 = 0;
                                    goto $l994;
                                    $l1002:;
                                    $tmp985 = 0;
                                    goto $l983;
                                    $l1003:;
                                    $tmp871 = 7;
                                    goto $l869;
                                    $l1004:;
                                    $tmp852 = 9;
                                    goto $l850;
                                    $l1005:;
                                    return $returnValue858;
                                }
                                }
                                bool $tmp1007 = validLambda990.value;
                                if (!$tmp1007) goto $l1008;
                                $tmp1009 = nextExpr997;
                                panda$core$Bit $tmp1013;
                                if (((panda$core$Bit) { $tmp1009 != NULL }).value) goto $l1010; else goto $l1011;
                                $l1010:;
                                panda$core$Int64$init$builtin_int64(&$tmp1014, 20);
                                panda$core$Bit $tmp1015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1009->$rawValue, $tmp1014);
                                $tmp1013 = $tmp1015;
                                goto $l1012;
                                $l1011:;
                                panda$core$Bit$init$builtin_bit(&$tmp1016, false);
                                $tmp1013 = $tmp1016;
                                goto $l1012;
                                $l1012:;
                                $tmp1007 = $tmp1013.value;
                                $l1008:;
                                panda$core$Bit $tmp1017 = { $tmp1007 };
                                validLambda990 = $tmp1017;
                                panda$collections$Array$add$panda$collections$Array$T(parameters986, ((panda$core$Object*) nextExpr997));
                            }
                            $tmp996 = -1;
                            goto $l994;
                            $l994:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr997));
                            nextExpr997 = NULL;
                            switch ($tmp996) {
                                case -1: goto $l1018;
                                case 0: goto $l1002;
                            }
                            $l1018:;
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1021, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1020, $tmp1021);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1022 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1020);
                        bool $tmp1019 = ((panda$core$Bit) { $tmp1022.nonnull }).value;
                        if ($tmp1019) goto $l992;
                        $l993:;
                        panda$core$Int64$init$builtin_int64(&$tmp1024, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1023, $tmp1024);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1026 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1023, &$s1025);
                        if (((panda$core$Bit) { !$tmp1026.nonnull }).value) {
                        {
                            $tmp1027 = NULL;
                            $returnValue858 = $tmp1027;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1027));
                            $tmp985 = 1;
                            goto $l983;
                            $l1028:;
                            $tmp871 = 8;
                            goto $l869;
                            $l1029:;
                            $tmp852 = 10;
                            goto $l850;
                            $l1030:;
                            return $returnValue858;
                        }
                        }
                        bool $tmp1032 = validLambda990.value;
                        if (!$tmp1032) goto $l1033;
                        panda$core$Int64$init$builtin_int64(&$tmp1035, 90);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1034, $tmp1035);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1036 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1034);
                        $tmp1032 = ((panda$core$Bit) { $tmp1036.nonnull }).value;
                        $l1033:;
                        panda$core$Bit $tmp1037 = { $tmp1032 };
                        if ($tmp1037.value) {
                        {
                            int $tmp1040;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1044 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1043 = $tmp1044;
                                $tmp1042 = $tmp1043;
                                body1041 = $tmp1042;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1042));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1043));
                                if (((panda$core$Bit) { body1041 == NULL }).value) {
                                {
                                    $tmp1045 = NULL;
                                    $returnValue858 = $tmp1045;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1045));
                                    $tmp1040 = 0;
                                    goto $l1038;
                                    $l1046:;
                                    $tmp985 = 2;
                                    goto $l983;
                                    $l1047:;
                                    $tmp871 = 9;
                                    goto $l869;
                                    $l1048:;
                                    $tmp852 = 11;
                                    goto $l850;
                                    $l1049:;
                                    return $returnValue858;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1053 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1054, 45);
                                panda$collections$ImmutableArray* $tmp1056 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters986);
                                $tmp1055 = $tmp1056;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1053, $tmp1054, ((org$pandalanguage$pandac$parser$Token) start853.value).position, $tmp1055, body1041);
                                $tmp1052 = $tmp1053;
                                $tmp1051 = $tmp1052;
                                $returnValue858 = $tmp1051;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1051));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1052));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1055));
                                $tmp1040 = 1;
                                goto $l1038;
                                $l1057:;
                                $tmp985 = 3;
                                goto $l983;
                                $l1058:;
                                $tmp871 = 10;
                                goto $l869;
                                $l1059:;
                                $tmp852 = 12;
                                goto $l850;
                                $l1060:;
                                return $returnValue858;
                            }
                            $l1038:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1041));
                            body1041 = NULL;
                            switch ($tmp1040) {
                                case 1: goto $l1057;
                                case 0: goto $l1046;
                            }
                            $l1062:;
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start853.value), &$s1063);
                        $tmp1064 = NULL;
                        $returnValue858 = $tmp1064;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1064));
                        $tmp985 = 4;
                        goto $l983;
                        $l1065:;
                        $tmp871 = 11;
                        goto $l869;
                        $l1066:;
                        $tmp852 = 13;
                        goto $l850;
                        $l1067:;
                        return $returnValue858;
                    }
                    $l983:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters986));
                    parameters986 = NULL;
                    switch ($tmp985) {
                        case 4: goto $l1065;
                        case 2: goto $l1047;
                        case 1: goto $l1028;
                        case 3: goto $l1058;
                        case 0: goto $l1003;
                    }
                    $l1069:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1071, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1070, $tmp1071);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1073 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1070, &$s1072);
                if (((panda$core$Bit) { !$tmp1073.nonnull }).value) {
                {
                    $tmp1074 = NULL;
                    $returnValue858 = $tmp1074;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1074));
                    $tmp871 = 12;
                    goto $l869;
                    $l1075:;
                    $tmp852 = 14;
                    goto $l850;
                    $l1076:;
                    return $returnValue858;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1079, 90);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1078, $tmp1079);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1080 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1078);
                if (((panda$core$Bit) { $tmp1080.nonnull }).value) {
                {
                    int $tmp1083;
                    {
                        panda$collections$Array* $tmp1087 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1087);
                        $tmp1086 = $tmp1087;
                        $tmp1085 = $tmp1086;
                        parameters1084 = $tmp1085;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1085));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1086));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1084, ((panda$core$Object*) expr862));
                        org$pandalanguage$pandac$ASTNode* $tmp1091 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1090 = $tmp1091;
                        $tmp1089 = $tmp1090;
                        body1088 = $tmp1089;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1089));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1090));
                        if (((panda$core$Bit) { body1088 == NULL }).value) {
                        {
                            $tmp1092 = NULL;
                            $returnValue858 = $tmp1092;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1092));
                            $tmp1083 = 0;
                            goto $l1081;
                            $l1093:;
                            $tmp871 = 13;
                            goto $l869;
                            $l1094:;
                            $tmp852 = 15;
                            goto $l850;
                            $l1095:;
                            return $returnValue858;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1099 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1100, 45);
                        panda$collections$ImmutableArray* $tmp1102 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1084);
                        $tmp1101 = $tmp1102;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1099, $tmp1100, ((org$pandalanguage$pandac$parser$Token) start853.value).position, $tmp1101, body1088);
                        $tmp1098 = $tmp1099;
                        $tmp1097 = $tmp1098;
                        $returnValue858 = $tmp1097;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1097));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1098));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1101));
                        $tmp1083 = 1;
                        goto $l1081;
                        $l1103:;
                        $tmp871 = 14;
                        goto $l869;
                        $l1104:;
                        $tmp852 = 16;
                        goto $l850;
                        $l1105:;
                        return $returnValue858;
                    }
                    $l1081:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1088));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1084));
                    parameters1084 = NULL;
                    body1088 = NULL;
                    switch ($tmp1083) {
                        case 0: goto $l1093;
                        case 1: goto $l1103;
                    }
                    $l1107:;
                }
                }
                $tmp1108 = expr862;
                $returnValue858 = $tmp1108;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1108));
                $tmp871 = 15;
                goto $l869;
                $l1109:;
                $tmp852 = 17;
                goto $l850;
                $l1110:;
                return $returnValue858;
            }
            }
            else {
            {
                int $tmp1114;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1116, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1115, $tmp1116);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1117 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1115);
                    if (((panda$core$Bit) { !$tmp1117.nonnull }).value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1119, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1118, $tmp1119);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1118, &$s1120);
                        $tmp1121 = expr862;
                        $returnValue858 = $tmp1121;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1121));
                        $tmp1114 = 0;
                        goto $l1112;
                        $l1122:;
                        $tmp871 = 16;
                        goto $l869;
                        $l1123:;
                        $tmp852 = 18;
                        goto $l850;
                        $l1124:;
                        return $returnValue858;
                    }
                    }
                    panda$collections$Array* $tmp1129 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1129);
                    $tmp1128 = $tmp1129;
                    $tmp1127 = $tmp1128;
                    arguments1126 = $tmp1127;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1127));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1128));
                    panda$collections$Array$add$panda$collections$Array$T(arguments1126, ((panda$core$Object*) expr862));
                    $l1130:;
                    {
                        int $tmp1134;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1138 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1137 = $tmp1138;
                            $tmp1136 = $tmp1137;
                            nextExpr1135 = $tmp1136;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1136));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1137));
                            if (((panda$core$Bit) { nextExpr1135 == NULL }).value) {
                            {
                                $tmp1139 = NULL;
                                $returnValue858 = $tmp1139;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1139));
                                $tmp1134 = 0;
                                goto $l1132;
                                $l1140:;
                                $tmp1114 = 1;
                                goto $l1112;
                                $l1141:;
                                $tmp871 = 17;
                                goto $l869;
                                $l1142:;
                                $tmp852 = 19;
                                goto $l850;
                                $l1143:;
                                return $returnValue858;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(arguments1126, ((panda$core$Object*) nextExpr1135));
                        }
                        $tmp1134 = -1;
                        goto $l1132;
                        $l1132:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr1135));
                        nextExpr1135 = NULL;
                        switch ($tmp1134) {
                            case 0: goto $l1140;
                            case -1: goto $l1145;
                        }
                        $l1145:;
                    }
                    panda$core$Int64$init$builtin_int64(&$tmp1148, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1147, $tmp1148);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1149 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1147);
                    bool $tmp1146 = ((panda$core$Bit) { $tmp1149.nonnull }).value;
                    if ($tmp1146) goto $l1130;
                    $l1131:;
                    panda$core$Int64$init$builtin_int64(&$tmp1151, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1150, $tmp1151);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1150, &$s1152);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start853.value), &$s1153);
                    $tmp1154 = NULL;
                    $returnValue858 = $tmp1154;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1154));
                    $tmp1114 = 2;
                    goto $l1112;
                    $l1155:;
                    $tmp871 = 18;
                    goto $l869;
                    $l1156:;
                    $tmp852 = 20;
                    goto $l850;
                    $l1157:;
                    return $returnValue858;
                }
                $l1112:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arguments1126));
                arguments1126 = NULL;
                switch ($tmp1114) {
                    case 2: goto $l1155;
                    case 1: goto $l1141;
                    case 0: goto $l1122;
                }
                $l1159:;
            }
            }
        }
        $tmp871 = -1;
        goto $l869;
        $l869:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
        switch ($tmp871) {
            case 13: goto $l1094;
            case 1: goto $l923;
            case 0: goto $l896;
            case 4: goto $l957;
            case 16: goto $l1123;
            case 8: goto $l1029;
            case 12: goto $l1075;
            case 17: goto $l1142;
            case 2: goto $l933;
            case 3: goto $l948;
            case 11: goto $l1066;
            case 18: goto $l1156;
            case 7: goto $l1004;
            case -1: goto $l1160;
            case 14: goto $l1104;
            case 5: goto $l966;
            case 9: goto $l1048;
            case 6: goto $l976;
            case 15: goto $l1109;
            case 10: goto $l1059;
        }
        $l1160:;
    }
    $tmp852 = -1;
    goto $l850;
    $l850:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr862));
    expr862 = NULL;
    switch ($tmp852) {
        case 18: goto $l1124;
        case 15: goto $l1095;
        case 3: goto $l924;
        case 4: goto $l934;
        case 14: goto $l1076;
        case 6: goto $l958;
        case 1: goto $l867;
        case 10: goto $l1030;
        case -1: goto $l1161;
        case 20: goto $l1157;
        case 19: goto $l1143;
        case 9: goto $l1005;
        case 13: goto $l1067;
        case 5: goto $l949;
        case 8: goto $l977;
        case 16: goto $l1105;
        case 12: goto $l1060;
        case 7: goto $l967;
        case 11: goto $l1049;
        case 17: goto $l1110;
        case 0: goto $l860;
        case 2: goto $l897;
    }
    $l1161:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1165;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1166;
    panda$core$Int64 $tmp1167;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1170;
    panda$core$Int64 $tmp1171;
    org$pandalanguage$pandac$ASTNode* t1176 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1177;
    org$pandalanguage$pandac$ASTNode* $tmp1178;
    org$pandalanguage$pandac$ASTNode* $returnValue1180;
    org$pandalanguage$pandac$ASTNode* $tmp1181;
    panda$collections$Array* parameters1185 = NULL;
    panda$collections$Array* $tmp1186;
    panda$collections$Array* $tmp1187;
    org$pandalanguage$pandac$ASTNode* $tmp1189;
    panda$core$Int64 $tmp1191;
    panda$core$String* $tmp1192;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1194;
    panda$core$Int64 $tmp1195;
    org$pandalanguage$pandac$ASTNode* $tmp1198;
    org$pandalanguage$pandac$ASTNode* expr1202 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1203;
    org$pandalanguage$pandac$ASTNode* $tmp1204;
    org$pandalanguage$pandac$ASTNode* $tmp1206;
    org$pandalanguage$pandac$ASTNode* $tmp1210;
    org$pandalanguage$pandac$ASTNode* $tmp1211;
    panda$core$Int64 $tmp1213;
    panda$collections$ImmutableArray* $tmp1214;
    panda$collections$Array* parameters1220 = NULL;
    panda$collections$Array* $tmp1221;
    panda$collections$Array* $tmp1222;
    org$pandalanguage$pandac$ASTNode* $tmp1224;
    panda$core$Int64 $tmp1226;
    panda$core$String* $tmp1227;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1229;
    panda$core$Int64 $tmp1230;
    org$pandalanguage$pandac$ASTNode* $tmp1233;
    org$pandalanguage$pandac$ASTNode* expr1236 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1237;
    org$pandalanguage$pandac$ASTNode* $tmp1238;
    org$pandalanguage$pandac$ASTNode* $tmp1240;
    org$pandalanguage$pandac$ASTNode* $tmp1243;
    org$pandalanguage$pandac$ASTNode* $tmp1244;
    panda$core$Int64 $tmp1246;
    panda$collections$ImmutableArray* $tmp1247;
    int $tmp1164;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1167, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1166, $tmp1167);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1169 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1166, &$s1168);
        start1165 = $tmp1169;
        panda$core$Int64$init$builtin_int64(&$tmp1171, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1170, $tmp1171);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1172 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1170);
        if (((panda$core$Bit) { $tmp1172.nonnull }).value) {
        {
            int $tmp1175;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1179 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1178 = $tmp1179;
                $tmp1177 = $tmp1178;
                t1176 = $tmp1177;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1177));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1178));
                if (((panda$core$Bit) { t1176 == NULL }).value) {
                {
                    $tmp1181 = NULL;
                    $returnValue1180 = $tmp1181;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1181));
                    $tmp1175 = 0;
                    goto $l1173;
                    $l1182:;
                    $tmp1164 = 0;
                    goto $l1162;
                    $l1183:;
                    return $returnValue1180;
                }
                }
                panda$collections$Array* $tmp1188 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1188);
                $tmp1187 = $tmp1188;
                $tmp1186 = $tmp1187;
                parameters1185 = $tmp1186;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1186));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1187));
                org$pandalanguage$pandac$ASTNode* $tmp1190 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1191, 31);
                panda$core$String* $tmp1193 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1165.value));
                $tmp1192 = $tmp1193;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1190, $tmp1191, ((org$pandalanguage$pandac$parser$Token) start1165.value).position, $tmp1192, t1176);
                $tmp1189 = $tmp1190;
                panda$collections$Array$add$panda$collections$Array$T(parameters1185, ((panda$core$Object*) $tmp1189));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1189));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1192));
                panda$core$Int64$init$builtin_int64(&$tmp1195, 90);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1194, $tmp1195);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1197 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1194, &$s1196);
                if (((panda$core$Bit) { !$tmp1197.nonnull }).value) {
                {
                    $tmp1198 = NULL;
                    $returnValue1180 = $tmp1198;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1198));
                    $tmp1175 = 1;
                    goto $l1173;
                    $l1199:;
                    $tmp1164 = 1;
                    goto $l1162;
                    $l1200:;
                    return $returnValue1180;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1205 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1204 = $tmp1205;
                $tmp1203 = $tmp1204;
                expr1202 = $tmp1203;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1203));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1204));
                if (((panda$core$Bit) { expr1202 == NULL }).value) {
                {
                    $tmp1206 = NULL;
                    $returnValue1180 = $tmp1206;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1206));
                    $tmp1175 = 2;
                    goto $l1173;
                    $l1207:;
                    $tmp1164 = 2;
                    goto $l1162;
                    $l1208:;
                    return $returnValue1180;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1212 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1213, 43);
                panda$collections$ImmutableArray* $tmp1215 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1185);
                $tmp1214 = $tmp1215;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1212, $tmp1213, ((org$pandalanguage$pandac$parser$Token) start1165.value).position, $tmp1214, expr1202);
                $tmp1211 = $tmp1212;
                $tmp1210 = $tmp1211;
                $returnValue1180 = $tmp1210;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1210));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1211));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1214));
                $tmp1175 = 3;
                goto $l1173;
                $l1216:;
                $tmp1164 = 3;
                goto $l1162;
                $l1217:;
                return $returnValue1180;
            }
            $l1173:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1202));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1185));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1176));
            t1176 = NULL;
            parameters1185 = NULL;
            expr1202 = NULL;
            switch ($tmp1175) {
                case 2: goto $l1207;
                case 3: goto $l1216;
                case 0: goto $l1182;
                case 1: goto $l1199;
            }
            $l1219:;
        }
        }
        panda$collections$Array* $tmp1223 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1223);
        $tmp1222 = $tmp1223;
        $tmp1221 = $tmp1222;
        parameters1220 = $tmp1221;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1222));
        org$pandalanguage$pandac$ASTNode* $tmp1225 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1226, 20);
        panda$core$String* $tmp1228 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1165.value));
        $tmp1227 = $tmp1228;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1225, $tmp1226, ((org$pandalanguage$pandac$parser$Token) start1165.value).position, $tmp1227);
        $tmp1224 = $tmp1225;
        panda$collections$Array$add$panda$collections$Array$T(parameters1220, ((panda$core$Object*) $tmp1224));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1224));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1227));
        panda$core$Int64$init$builtin_int64(&$tmp1230, 90);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1229, $tmp1230);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1232 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1229, &$s1231);
        if (((panda$core$Bit) { !$tmp1232.nonnull }).value) {
        {
            $tmp1233 = NULL;
            $returnValue1180 = $tmp1233;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1233));
            $tmp1164 = 4;
            goto $l1162;
            $l1234:;
            return $returnValue1180;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1239 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1238 = $tmp1239;
        $tmp1237 = $tmp1238;
        expr1236 = $tmp1237;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1237));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1238));
        if (((panda$core$Bit) { expr1236 == NULL }).value) {
        {
            $tmp1240 = NULL;
            $returnValue1180 = $tmp1240;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1240));
            $tmp1164 = 5;
            goto $l1162;
            $l1241:;
            return $returnValue1180;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1245 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1246, 45);
        panda$collections$ImmutableArray* $tmp1248 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1220);
        $tmp1247 = $tmp1248;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1245, $tmp1246, ((org$pandalanguage$pandac$parser$Token) start1165.value).position, $tmp1247, expr1236);
        $tmp1244 = $tmp1245;
        $tmp1243 = $tmp1244;
        $returnValue1180 = $tmp1243;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1243));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1244));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1247));
        $tmp1164 = 6;
        goto $l1162;
        $l1249:;
        return $returnValue1180;
    }
    $l1162:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1236));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1220));
    parameters1220 = NULL;
    expr1236 = NULL;
    switch ($tmp1164) {
        case 6: goto $l1249;
        case 5: goto $l1241;
        case 3: goto $l1217;
        case 1: goto $l1200;
        case 2: goto $l1208;
        case 0: goto $l1183;
        case 4: goto $l1234;
    }
    $l1251:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1255;
    panda$core$Int64 $tmp1256;
    org$pandalanguage$pandac$ASTNode* $returnValue1259;
    org$pandalanguage$pandac$ASTNode* $tmp1260;
    org$pandalanguage$pandac$ASTNode* regex1263 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1264;
    org$pandalanguage$pandac$ASTNode* $tmp1265;
    org$pandalanguage$pandac$ASTNode* $tmp1267;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1270;
    panda$core$Int64 $tmp1271;
    org$pandalanguage$pandac$ASTNode* $tmp1273;
    int $tmp1254;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1256, 54);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1255, $tmp1256);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1258 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1255, &$s1257);
        if (((panda$core$Bit) { !$tmp1258.nonnull }).value) {
        {
            $tmp1260 = NULL;
            $returnValue1259 = $tmp1260;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1260));
            $tmp1254 = 0;
            goto $l1252;
            $l1261:;
            return $returnValue1259;
        }
        }
        self->regexParser->lexer->dfa->offset = self->lexer->dfa->offset;
        self->regexParser->lexer->dfa->line = self->lexer->dfa->line;
        self->regexParser->lexer->dfa->column = self->lexer->dfa->column;
        org$pandalanguage$pandac$ASTNode* $tmp1266 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self->regexParser);
        $tmp1265 = $tmp1266;
        $tmp1264 = $tmp1265;
        regex1263 = $tmp1264;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1264));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1265));
        self->lexer->dfa->offset = self->regexParser->lexer->dfa->offset;
        self->lexer->dfa->line = self->regexParser->lexer->dfa->line;
        self->lexer->dfa->column = self->regexParser->lexer->dfa->column;
        if (((panda$core$Bit) { regex1263 == NULL }).value) {
        {
            $tmp1267 = NULL;
            $returnValue1259 = $tmp1267;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1267));
            $tmp1254 = 1;
            goto $l1252;
            $l1268:;
            return $returnValue1259;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1271, 54);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1270, $tmp1271);
        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1270, &$s1272);
        $tmp1273 = regex1263;
        $returnValue1259 = $tmp1273;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1273));
        $tmp1254 = 2;
        goto $l1252;
        $l1274:;
        return $returnValue1259;
    }
    $l1252:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) regex1263));
    regex1263 = NULL;
    switch ($tmp1254) {
        case 1: goto $l1268;
        case 2: goto $l1274;
        case 0: goto $l1261;
    }
    $l1276:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t1277;
    org$pandalanguage$pandac$parser$Token$Kind $match$551_91279;
    panda$core$Int64 $tmp1280;
    org$pandalanguage$pandac$parser$Token$Kind check1282;
    panda$core$Int64 $tmp1287;
    panda$core$Int64 $tmp1291;
    org$pandalanguage$pandac$ASTNode* $returnValue1294;
    org$pandalanguage$pandac$ASTNode* $tmp1295;
    org$pandalanguage$pandac$ASTNode* $tmp1296;
    org$pandalanguage$pandac$ASTNode* $tmp1299;
    org$pandalanguage$pandac$ASTNode* $tmp1300;
    panda$core$Int64 $tmp1302;
    panda$core$String* $tmp1303;
    panda$core$Int64 $tmp1306;
    org$pandalanguage$pandac$ASTNode* $tmp1308;
    org$pandalanguage$pandac$ASTNode* $tmp1309;
    panda$core$Int64 $tmp1311;
    panda$core$String* $tmp1312;
    panda$core$Int64 $tmp1316;
    org$pandalanguage$pandac$ASTNode* $tmp1318;
    org$pandalanguage$pandac$ASTNode* $tmp1319;
    panda$core$Int64 $tmp1321;
    panda$core$String* $tmp1322;
    panda$core$String* $tmp1323;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1325;
    panda$core$Int64 $tmp1326;
    panda$core$Bit $tmp1327;
    panda$core$Int64 $tmp1329;
    panda$core$Int64 $tmp1332;
    org$pandalanguage$pandac$ASTNode* $tmp1334;
    org$pandalanguage$pandac$ASTNode* $tmp1335;
    panda$core$Int64 $tmp1337;
    panda$core$String* $tmp1338;
    panda$core$String* $tmp1339;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1341;
    panda$core$Int64 $tmp1342;
    panda$core$Bit $tmp1343;
    panda$core$Int64 $tmp1345;
    panda$core$Int64 $tmp1348;
    org$pandalanguage$pandac$ASTNode* $tmp1350;
    org$pandalanguage$pandac$ASTNode* $tmp1351;
    panda$core$Int64 $tmp1353;
    panda$core$String* $tmp1354;
    panda$core$Int64 $tmp1358;
    org$pandalanguage$pandac$ASTNode* $tmp1360;
    org$pandalanguage$pandac$ASTNode* $tmp1361;
    panda$core$Int64 $tmp1363;
    panda$core$Int64 $tmp1365;
    org$pandalanguage$pandac$ASTNode* $tmp1367;
    org$pandalanguage$pandac$ASTNode* $tmp1368;
    panda$core$Int64 $tmp1370;
    panda$core$Int64 $tmp1372;
    org$pandalanguage$pandac$ASTNode* $tmp1374;
    org$pandalanguage$pandac$ASTNode* $tmp1375;
    panda$core$Int64 $tmp1377;
    panda$core$Int64 $tmp1379;
    org$pandalanguage$pandac$ASTNode* $tmp1381;
    org$pandalanguage$pandac$ASTNode* $tmp1382;
    panda$core$Int64 $tmp1384;
    panda$core$Bit $tmp1385;
    panda$core$Int64 $tmp1387;
    org$pandalanguage$pandac$ASTNode* $tmp1389;
    org$pandalanguage$pandac$ASTNode* $tmp1390;
    panda$core$Int64 $tmp1392;
    panda$core$Bit $tmp1393;
    panda$core$Int64 $tmp1396;
    panda$core$Int64 $tmp1399;
    org$pandalanguage$pandac$ASTNode* $tmp1402;
    org$pandalanguage$pandac$ASTNode* $tmp1403;
    panda$core$Int64 $tmp1406;
    org$pandalanguage$pandac$ASTNode* $tmp1408;
    org$pandalanguage$pandac$ASTNode* $tmp1409;
    panda$core$Int64 $tmp1412;
    panda$core$String* name1417 = NULL;
    panda$core$String* $tmp1418;
    panda$core$String* $tmp1419;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1426;
    panda$core$Int64 $tmp1427;
    org$pandalanguage$pandac$ASTNode* expr1429 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1430;
    org$pandalanguage$pandac$ASTNode* $tmp1431;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1433;
    panda$core$Int64 $tmp1434;
    org$pandalanguage$pandac$ASTNode* $tmp1436;
    org$pandalanguage$pandac$ASTNode* $tmp1437;
    panda$core$Int64 $tmp1439;
    org$pandalanguage$pandac$ASTNode* $tmp1446;
    org$pandalanguage$pandac$ASTNode* $tmp1447;
    panda$core$Int64 $tmp1449;
    panda$core$String* $tmp1452;
    panda$core$String* $tmp1453;
    org$pandalanguage$pandac$ASTNode* $tmp1458;
    panda$core$Int64 $tmp1463;
    panda$core$Int64 $tmp1466;
    org$pandalanguage$pandac$ASTNode* $tmp1469;
    org$pandalanguage$pandac$ASTNode* $tmp1470;
    panda$core$Int64 $tmp1473;
    org$pandalanguage$pandac$ASTNode* $tmp1475;
    org$pandalanguage$pandac$ASTNode* $tmp1476;
    panda$core$String* $tmp1479;
    panda$core$String* $tmp1480;
    panda$core$String* $tmp1482;
    org$pandalanguage$pandac$ASTNode* $tmp1487;
    org$pandalanguage$pandac$parser$Token $tmp1278 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t1277 = $tmp1278;
    {
        $match$551_91279 = t1277.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1280, 48);
        panda$core$Bit $tmp1281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1280);
        if ($tmp1281.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1283 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            check1282 = $tmp1283.kind;
            bool $tmp1285 = self->allowLambdas.value;
            if (!$tmp1285) goto $l1286;
            panda$core$Int64$init$builtin_int64(&$tmp1287, 95);
            panda$core$Bit $tmp1288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1282.$rawValue, $tmp1287);
            $tmp1285 = $tmp1288.value;
            $l1286:;
            panda$core$Bit $tmp1289 = { $tmp1285 };
            bool $tmp1284 = $tmp1289.value;
            if ($tmp1284) goto $l1290;
            panda$core$Int64$init$builtin_int64(&$tmp1291, 90);
            panda$core$Bit $tmp1292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1282.$rawValue, $tmp1291);
            $tmp1284 = $tmp1292.value;
            $l1290:;
            panda$core$Bit $tmp1293 = { $tmp1284 };
            if ($tmp1293.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1277);
                org$pandalanguage$pandac$ASTNode* $tmp1297 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1296 = $tmp1297;
                $tmp1295 = $tmp1296;
                $returnValue1294 = $tmp1295;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1295));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1296));
                return $returnValue1294;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1301 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1302, 20);
            panda$core$String* $tmp1304 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1277);
            $tmp1303 = $tmp1304;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1301, $tmp1302, t1277.position, $tmp1303);
            $tmp1300 = $tmp1301;
            $tmp1299 = $tmp1300;
            $returnValue1294 = $tmp1299;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1299));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1303));
            return $returnValue1294;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1306, 2);
        panda$core$Bit $tmp1307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1306);
        if ($tmp1307.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1310 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1311, 22);
            panda$core$String* $tmp1313 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1277);
            $tmp1312 = $tmp1313;
            panda$core$UInt64$nullable $tmp1314 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1312);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1310, $tmp1311, t1277.position, ((panda$core$UInt64) $tmp1314.value));
            $tmp1309 = $tmp1310;
            $tmp1308 = $tmp1309;
            $returnValue1294 = $tmp1308;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1308));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1309));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1312));
            return $returnValue1294;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1316, 3);
        panda$core$Bit $tmp1317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1316);
        if ($tmp1317.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1320 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1321, 22);
            panda$core$String* $tmp1324 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1277);
            $tmp1323 = $tmp1324;
            panda$core$Int64$init$builtin_int64(&$tmp1326, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1327, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1325, ((panda$core$Int64$nullable) { $tmp1326, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1327);
            panda$core$String* $tmp1328 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1323, $tmp1325);
            $tmp1322 = $tmp1328;
            panda$core$Int64$init$builtin_int64(&$tmp1329, 2);
            panda$core$UInt64$nullable $tmp1330 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1322, $tmp1329);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1320, $tmp1321, t1277.position, ((panda$core$UInt64) $tmp1330.value));
            $tmp1319 = $tmp1320;
            $tmp1318 = $tmp1319;
            $returnValue1294 = $tmp1318;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1318));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1322));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1323));
            return $returnValue1294;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1332, 4);
        panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1332);
        if ($tmp1333.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1336 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1337, 22);
            panda$core$String* $tmp1340 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1277);
            $tmp1339 = $tmp1340;
            panda$core$Int64$init$builtin_int64(&$tmp1342, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1343, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1341, ((panda$core$Int64$nullable) { $tmp1342, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1343);
            panda$core$String* $tmp1344 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1339, $tmp1341);
            $tmp1338 = $tmp1344;
            panda$core$Int64$init$builtin_int64(&$tmp1345, 16);
            panda$core$UInt64$nullable $tmp1346 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1338, $tmp1345);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1336, $tmp1337, t1277.position, ((panda$core$UInt64) $tmp1346.value));
            $tmp1335 = $tmp1336;
            $tmp1334 = $tmp1335;
            $returnValue1294 = $tmp1334;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1334));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1335));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1338));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1339));
            return $returnValue1294;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1348, 5);
        panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1348);
        if ($tmp1349.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1352 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1353, 34);
            panda$core$String* $tmp1355 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1277);
            $tmp1354 = $tmp1355;
            panda$core$Real64$nullable $tmp1356 = panda$core$String$convert$R$panda$core$Real64$Q($tmp1354);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1352, $tmp1353, t1277.position, ((panda$core$Real64) $tmp1356.value));
            $tmp1351 = $tmp1352;
            $tmp1350 = $tmp1351;
            $returnValue1294 = $tmp1350;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1354));
            return $returnValue1294;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1358, 46);
        panda$core$Bit $tmp1359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1358);
        if ($tmp1359.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1362 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1363, 37);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1362, $tmp1363, t1277.position);
            $tmp1361 = $tmp1362;
            $tmp1360 = $tmp1361;
            $returnValue1294 = $tmp1360;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1360));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1361));
            return $returnValue1294;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1365, 47);
        panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1365);
        if ($tmp1366.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1369 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1370, 39);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1369, $tmp1370, t1277.position);
            $tmp1368 = $tmp1369;
            $tmp1367 = $tmp1368;
            $returnValue1294 = $tmp1367;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1367));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1368));
            return $returnValue1294;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1372, 43);
        panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1372);
        if ($tmp1373.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1376 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1377, 28);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1376, $tmp1377, t1277.position);
            $tmp1375 = $tmp1376;
            $tmp1374 = $tmp1375;
            $returnValue1294 = $tmp1374;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1374));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1375));
            return $returnValue1294;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1379, 41);
        panda$core$Bit $tmp1380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1379);
        if ($tmp1380.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1383 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1384, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1385, true);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1383, $tmp1384, t1277.position, $tmp1385);
            $tmp1382 = $tmp1383;
            $tmp1381 = $tmp1382;
            $returnValue1294 = $tmp1381;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1381));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
            return $returnValue1294;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1387, 42);
        panda$core$Bit $tmp1388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1387);
        if ($tmp1388.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1391 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1392, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1393, false);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1391, $tmp1392, t1277.position, $tmp1393);
            $tmp1390 = $tmp1391;
            $tmp1389 = $tmp1390;
            $returnValue1294 = $tmp1389;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1389));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1390));
            return $returnValue1294;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1396, 7);
        panda$core$Bit $tmp1397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1396);
        bool $tmp1395 = $tmp1397.value;
        if ($tmp1395) goto $l1398;
        panda$core$Int64$init$builtin_int64(&$tmp1399, 6);
        panda$core$Bit $tmp1400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1399);
        $tmp1395 = $tmp1400.value;
        $l1398:;
        panda$core$Bit $tmp1401 = { $tmp1395 };
        if ($tmp1401.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1277);
            org$pandalanguage$pandac$ASTNode* $tmp1404 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1403 = $tmp1404;
            $tmp1402 = $tmp1403;
            $returnValue1294 = $tmp1402;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1402));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1403));
            return $returnValue1294;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1406, 103);
        panda$core$Bit $tmp1407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1406);
        if ($tmp1407.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1277);
            org$pandalanguage$pandac$ASTNode* $tmp1410 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1409 = $tmp1410;
            $tmp1408 = $tmp1409;
            $returnValue1294 = $tmp1408;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1408));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1409));
            return $returnValue1294;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1412, 13);
        panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1412);
        if ($tmp1413.value) {
        {
            int $tmp1416;
            {
                panda$core$String* $tmp1420 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1277);
                $tmp1419 = $tmp1420;
                $tmp1418 = $tmp1419;
                name1417 = $tmp1418;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1418));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1419));
                panda$core$Bit $tmp1422 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1417, &$s1421);
                if ($tmp1422.value) {
                {
                    int $tmp1425;
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1427, 103);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1426, $tmp1427);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1426, &$s1428);
                        org$pandalanguage$pandac$ASTNode* $tmp1432 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1431 = $tmp1432;
                        $tmp1430 = $tmp1431;
                        expr1429 = $tmp1430;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1430));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1431));
                        panda$core$Int64$init$builtin_int64(&$tmp1434, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1433, $tmp1434);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1433, &$s1435);
                        org$pandalanguage$pandac$ASTNode* $tmp1438 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1439, 2);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1438, $tmp1439, t1277.position, expr1429);
                        $tmp1437 = $tmp1438;
                        $tmp1436 = $tmp1437;
                        $returnValue1294 = $tmp1436;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1436));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1437));
                        $tmp1425 = 0;
                        goto $l1423;
                        $l1440:;
                        $tmp1416 = 0;
                        goto $l1414;
                        $l1441:;
                        return $returnValue1294;
                    }
                    $l1423:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1429));
                    expr1429 = NULL;
                    switch ($tmp1425) {
                        case 0: goto $l1440;
                    }
                    $l1443:;
                }
                }
                else {
                panda$core$Bit $tmp1445 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1417, &$s1444);
                if ($tmp1445.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1448 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1449, 3);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1448, $tmp1449, t1277.position);
                    $tmp1447 = $tmp1448;
                    $tmp1446 = $tmp1447;
                    $returnValue1294 = $tmp1446;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1446));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1447));
                    $tmp1416 = 1;
                    goto $l1414;
                    $l1450:;
                    return $returnValue1294;
                }
                }
                }
                panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1454, name1417);
                $tmp1453 = $tmp1455;
                panda$core$String* $tmp1457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1453, &$s1456);
                $tmp1452 = $tmp1457;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1277, $tmp1452);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1452));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1453));
                $tmp1458 = NULL;
                $returnValue1294 = $tmp1458;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1458));
                $tmp1416 = 2;
                goto $l1414;
                $l1459:;
                return $returnValue1294;
            }
            $l1414:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1417));
            name1417 = NULL;
            switch ($tmp1416) {
                case 0: goto $l1441;
                case 2: goto $l1459;
                case 1: goto $l1450;
            }
            $l1461:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1463, 20);
        panda$core$Bit $tmp1464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1463);
        bool $tmp1462 = $tmp1464.value;
        if ($tmp1462) goto $l1465;
        panda$core$Int64$init$builtin_int64(&$tmp1466, 21);
        panda$core$Bit $tmp1467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1466);
        $tmp1462 = $tmp1467.value;
        $l1465:;
        panda$core$Bit $tmp1468 = { $tmp1462 };
        if ($tmp1468.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1277);
            org$pandalanguage$pandac$ASTNode* $tmp1471 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1470 = $tmp1471;
            $tmp1469 = $tmp1470;
            $returnValue1294 = $tmp1469;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1470));
            return $returnValue1294;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1473, 54);
        panda$core$Bit $tmp1474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_91279.$rawValue, $tmp1473);
        if ($tmp1474.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1277);
            org$pandalanguage$pandac$ASTNode* $tmp1477 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1476 = $tmp1477;
            $tmp1475 = $tmp1476;
            $returnValue1294 = $tmp1475;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1475));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
            return $returnValue1294;
        }
        }
        else {
        {
            panda$core$String* $tmp1483 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1277);
            $tmp1482 = $tmp1483;
            panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1481, $tmp1482);
            $tmp1480 = $tmp1484;
            panda$core$String* $tmp1486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1480, &$s1485);
            $tmp1479 = $tmp1486;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1277, $tmp1479);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1479));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1480));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1482));
            $tmp1487 = NULL;
            $returnValue1294 = $tmp1487;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1487));
            return $returnValue1294;
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
    org$pandalanguage$pandac$ASTNode* $match$610_91492 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1493;
    panda$core$Int64 $tmp1494;
    panda$core$String* text1496 = NULL;
    panda$core$String* $returnValue1498;
    panda$core$String* $tmp1499;
    panda$core$Int64 $tmp1502;
    org$pandalanguage$pandac$ASTNode* base1504 = NULL;
    panda$core$String* field1506 = NULL;
    panda$core$String* result1511 = NULL;
    panda$core$String* $tmp1512;
    panda$core$String* $tmp1513;
    panda$core$String* $tmp1515;
    panda$core$String* $tmp1516;
    panda$core$String* $tmp1517;
    panda$core$String* $tmp1518;
    panda$core$String* $tmp1519;
    panda$core$String* $tmp1523;
    panda$core$String* $tmp1528;
    int $tmp1491;
    {
        $tmp1493 = p_expr;
        $match$610_91492 = $tmp1493;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1493));
        panda$core$Int64$init$builtin_int64(&$tmp1494, 20);
        panda$core$Bit $tmp1495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610_91492->$rawValue, $tmp1494);
        if ($tmp1495.value) {
        {
            panda$core$String** $tmp1497 = ((panda$core$String**) ((char*) $match$610_91492->$data + 16));
            text1496 = *$tmp1497;
            $tmp1499 = text1496;
            $returnValue1498 = $tmp1499;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1499));
            $tmp1491 = 0;
            goto $l1489;
            $l1500:;
            return $returnValue1498;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1502, 15);
        panda$core$Bit $tmp1503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610_91492->$rawValue, $tmp1502);
        if ($tmp1503.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1505 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$610_91492->$data + 16));
            base1504 = *$tmp1505;
            panda$core$String** $tmp1507 = ((panda$core$String**) ((char*) $match$610_91492->$data + 24));
            field1506 = *$tmp1507;
            int $tmp1510;
            {
                panda$core$String* $tmp1514 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base1504);
                $tmp1513 = $tmp1514;
                $tmp1512 = $tmp1513;
                result1511 = $tmp1512;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1512));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1513));
                if (((panda$core$Bit) { result1511 != NULL }).value) {
                {
                    {
                        $tmp1516 = result1511;
                        $tmp1515 = $tmp1516;
                        panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1520, field1506);
                        $tmp1519 = $tmp1521;
                        panda$core$String* $tmp1522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1511, $tmp1519);
                        $tmp1518 = $tmp1522;
                        $tmp1517 = $tmp1518;
                        result1511 = $tmp1517;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1517));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1518));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1519));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1515));
                    }
                }
                }
                $tmp1523 = result1511;
                $returnValue1498 = $tmp1523;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1523));
                $tmp1510 = 0;
                goto $l1508;
                $l1524:;
                $tmp1491 = 1;
                goto $l1489;
                $l1525:;
                return $returnValue1498;
            }
            $l1508:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1511));
            result1511 = NULL;
            switch ($tmp1510) {
                case 0: goto $l1524;
            }
            $l1527:;
        }
        }
        else {
        {
            $tmp1528 = NULL;
            $returnValue1498 = $tmp1528;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1528));
            $tmp1491 = 2;
            goto $l1489;
            $l1529:;
            return $returnValue1498;
        }
        }
        }
    }
    $tmp1491 = -1;
    goto $l1489;
    $l1489:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
    switch ($tmp1491) {
        case 1: goto $l1525;
        case -1: goto $l1531;
        case 2: goto $l1529;
        case 0: goto $l1500;
    }
    $l1531:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name1532;
    org$pandalanguage$pandac$parser$Token$Kind $match$630_91534;
    panda$core$Int64 $tmp1556;
    panda$core$Int64 $tmp1559;
    panda$core$Int64 $tmp1563;
    panda$core$Int64 $tmp1567;
    panda$core$Int64 $tmp1571;
    panda$core$Int64 $tmp1575;
    panda$core$Int64 $tmp1579;
    panda$core$Int64 $tmp1583;
    panda$core$Int64 $tmp1587;
    panda$core$Int64 $tmp1591;
    panda$core$Int64 $tmp1595;
    panda$core$Int64 $tmp1599;
    panda$core$Int64 $tmp1603;
    panda$core$Int64 $tmp1607;
    panda$core$Int64 $tmp1611;
    panda$core$Int64 $tmp1615;
    panda$core$Int64 $tmp1619;
    panda$core$Int64 $tmp1623;
    panda$core$Int64 $tmp1627;
    panda$core$Int64 $tmp1631;
    panda$core$Int64 $tmp1635;
    panda$core$Int64 $tmp1639;
    panda$core$String* $returnValue1642;
    panda$core$String* $tmp1643;
    panda$core$String* $tmp1644;
    panda$core$Int64 $tmp1647;
    org$pandalanguage$pandac$parser$Token token1649;
    panda$core$Int64 $tmp1651;
    panda$core$String* $tmp1653;
    panda$core$String* $tmp1656;
    panda$core$Int64 $tmp1659;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1661;
    panda$core$Int64 $tmp1662;
    panda$core$String* $tmp1665;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1667;
    panda$core$Int64 $tmp1668;
    panda$core$String* $tmp1670;
    panda$core$String* $tmp1673;
    panda$core$String* $tmp1676;
    panda$core$String* $tmp1677;
    panda$core$String* $tmp1679;
    panda$core$String* $tmp1684;
    org$pandalanguage$pandac$parser$Token $tmp1533 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name1532 = $tmp1533;
    {
        $match$630_91534 = name1532.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1556, 48);
        panda$core$Bit $tmp1557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1556);
        bool $tmp1555 = $tmp1557.value;
        if ($tmp1555) goto $l1558;
        panda$core$Int64$init$builtin_int64(&$tmp1559, 51);
        panda$core$Bit $tmp1560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1559);
        $tmp1555 = $tmp1560.value;
        $l1558:;
        panda$core$Bit $tmp1561 = { $tmp1555 };
        bool $tmp1554 = $tmp1561.value;
        if ($tmp1554) goto $l1562;
        panda$core$Int64$init$builtin_int64(&$tmp1563, 52);
        panda$core$Bit $tmp1564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1563);
        $tmp1554 = $tmp1564.value;
        $l1562:;
        panda$core$Bit $tmp1565 = { $tmp1554 };
        bool $tmp1553 = $tmp1565.value;
        if ($tmp1553) goto $l1566;
        panda$core$Int64$init$builtin_int64(&$tmp1567, 53);
        panda$core$Bit $tmp1568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1567);
        $tmp1553 = $tmp1568.value;
        $l1566:;
        panda$core$Bit $tmp1569 = { $tmp1553 };
        bool $tmp1552 = $tmp1569.value;
        if ($tmp1552) goto $l1570;
        panda$core$Int64$init$builtin_int64(&$tmp1571, 54);
        panda$core$Bit $tmp1572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1571);
        $tmp1552 = $tmp1572.value;
        $l1570:;
        panda$core$Bit $tmp1573 = { $tmp1552 };
        bool $tmp1551 = $tmp1573.value;
        if ($tmp1551) goto $l1574;
        panda$core$Int64$init$builtin_int64(&$tmp1575, 55);
        panda$core$Bit $tmp1576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1575);
        $tmp1551 = $tmp1576.value;
        $l1574:;
        panda$core$Bit $tmp1577 = { $tmp1551 };
        bool $tmp1550 = $tmp1577.value;
        if ($tmp1550) goto $l1578;
        panda$core$Int64$init$builtin_int64(&$tmp1579, 57);
        panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1579);
        $tmp1550 = $tmp1580.value;
        $l1578:;
        panda$core$Bit $tmp1581 = { $tmp1550 };
        bool $tmp1549 = $tmp1581.value;
        if ($tmp1549) goto $l1582;
        panda$core$Int64$init$builtin_int64(&$tmp1583, 58);
        panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1583);
        $tmp1549 = $tmp1584.value;
        $l1582:;
        panda$core$Bit $tmp1585 = { $tmp1549 };
        bool $tmp1548 = $tmp1585.value;
        if ($tmp1548) goto $l1586;
        panda$core$Int64$init$builtin_int64(&$tmp1587, 59);
        panda$core$Bit $tmp1588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1587);
        $tmp1548 = $tmp1588.value;
        $l1586:;
        panda$core$Bit $tmp1589 = { $tmp1548 };
        bool $tmp1547 = $tmp1589.value;
        if ($tmp1547) goto $l1590;
        panda$core$Int64$init$builtin_int64(&$tmp1591, 62);
        panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1591);
        $tmp1547 = $tmp1592.value;
        $l1590:;
        panda$core$Bit $tmp1593 = { $tmp1547 };
        bool $tmp1546 = $tmp1593.value;
        if ($tmp1546) goto $l1594;
        panda$core$Int64$init$builtin_int64(&$tmp1595, 65);
        panda$core$Bit $tmp1596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1595);
        $tmp1546 = $tmp1596.value;
        $l1594:;
        panda$core$Bit $tmp1597 = { $tmp1546 };
        bool $tmp1545 = $tmp1597.value;
        if ($tmp1545) goto $l1598;
        panda$core$Int64$init$builtin_int64(&$tmp1599, 64);
        panda$core$Bit $tmp1600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1599);
        $tmp1545 = $tmp1600.value;
        $l1598:;
        panda$core$Bit $tmp1601 = { $tmp1545 };
        bool $tmp1544 = $tmp1601.value;
        if ($tmp1544) goto $l1602;
        panda$core$Int64$init$builtin_int64(&$tmp1603, 56);
        panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1603);
        $tmp1544 = $tmp1604.value;
        $l1602:;
        panda$core$Bit $tmp1605 = { $tmp1544 };
        bool $tmp1543 = $tmp1605.value;
        if ($tmp1543) goto $l1606;
        panda$core$Int64$init$builtin_int64(&$tmp1607, 66);
        panda$core$Bit $tmp1608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1607);
        $tmp1543 = $tmp1608.value;
        $l1606:;
        panda$core$Bit $tmp1609 = { $tmp1543 };
        bool $tmp1542 = $tmp1609.value;
        if ($tmp1542) goto $l1610;
        panda$core$Int64$init$builtin_int64(&$tmp1611, 67);
        panda$core$Bit $tmp1612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1611);
        $tmp1542 = $tmp1612.value;
        $l1610:;
        panda$core$Bit $tmp1613 = { $tmp1542 };
        bool $tmp1541 = $tmp1613.value;
        if ($tmp1541) goto $l1614;
        panda$core$Int64$init$builtin_int64(&$tmp1615, 68);
        panda$core$Bit $tmp1616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1615);
        $tmp1541 = $tmp1616.value;
        $l1614:;
        panda$core$Bit $tmp1617 = { $tmp1541 };
        bool $tmp1540 = $tmp1617.value;
        if ($tmp1540) goto $l1618;
        panda$core$Int64$init$builtin_int64(&$tmp1619, 69);
        panda$core$Bit $tmp1620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1619);
        $tmp1540 = $tmp1620.value;
        $l1618:;
        panda$core$Bit $tmp1621 = { $tmp1540 };
        bool $tmp1539 = $tmp1621.value;
        if ($tmp1539) goto $l1622;
        panda$core$Int64$init$builtin_int64(&$tmp1623, 70);
        panda$core$Bit $tmp1624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1623);
        $tmp1539 = $tmp1624.value;
        $l1622:;
        panda$core$Bit $tmp1625 = { $tmp1539 };
        bool $tmp1538 = $tmp1625.value;
        if ($tmp1538) goto $l1626;
        panda$core$Int64$init$builtin_int64(&$tmp1627, 71);
        panda$core$Bit $tmp1628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1627);
        $tmp1538 = $tmp1628.value;
        $l1626:;
        panda$core$Bit $tmp1629 = { $tmp1538 };
        bool $tmp1537 = $tmp1629.value;
        if ($tmp1537) goto $l1630;
        panda$core$Int64$init$builtin_int64(&$tmp1631, 49);
        panda$core$Bit $tmp1632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1631);
        $tmp1537 = $tmp1632.value;
        $l1630:;
        panda$core$Bit $tmp1633 = { $tmp1537 };
        bool $tmp1536 = $tmp1633.value;
        if ($tmp1536) goto $l1634;
        panda$core$Int64$init$builtin_int64(&$tmp1635, 50);
        panda$core$Bit $tmp1636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1635);
        $tmp1536 = $tmp1636.value;
        $l1634:;
        panda$core$Bit $tmp1637 = { $tmp1536 };
        bool $tmp1535 = $tmp1637.value;
        if ($tmp1535) goto $l1638;
        panda$core$Int64$init$builtin_int64(&$tmp1639, 72);
        panda$core$Bit $tmp1640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1639);
        $tmp1535 = $tmp1640.value;
        $l1638:;
        panda$core$Bit $tmp1641 = { $tmp1535 };
        if ($tmp1641.value) {
        {
            panda$core$String* $tmp1645 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1532);
            $tmp1644 = $tmp1645;
            $tmp1643 = $tmp1644;
            $returnValue1642 = $tmp1643;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1643));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1644));
            return $returnValue1642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1647, 63);
        panda$core$Bit $tmp1648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1647);
        if ($tmp1648.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1650 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token1649 = $tmp1650;
            panda$core$Int64$init$builtin_int64(&$tmp1651, 63);
            panda$core$Bit $tmp1652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1649.kind.$rawValue, $tmp1651);
            if ($tmp1652.value) {
            {
                $tmp1653 = &$s1654;
                $returnValue1642 = $tmp1653;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1653));
                return $returnValue1642;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1649);
                $tmp1656 = &$s1657;
                $returnValue1642 = $tmp1656;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1656));
                return $returnValue1642;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1659, 101);
        panda$core$Bit $tmp1660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$630_91534.$rawValue, $tmp1659);
        if ($tmp1660.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1662, 102);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1661, $tmp1662);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1664 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1661, &$s1663);
            if (((panda$core$Bit) { !$tmp1664.nonnull }).value) {
            {
                $tmp1665 = NULL;
                $returnValue1642 = $tmp1665;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1665));
                return $returnValue1642;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp1668, 73);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1667, $tmp1668);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1669 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1667);
            if (((panda$core$Bit) { $tmp1669.nonnull }).value) {
            {
                $tmp1670 = &$s1671;
                $returnValue1642 = $tmp1670;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1670));
                return $returnValue1642;
            }
            }
            $tmp1673 = &$s1674;
            $returnValue1642 = $tmp1673;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1673));
            return $returnValue1642;
        }
        }
        else {
        {
            panda$core$String* $tmp1680 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1532);
            $tmp1679 = $tmp1680;
            panda$core$String* $tmp1681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1678, $tmp1679);
            $tmp1677 = $tmp1681;
            panda$core$String* $tmp1683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1677, &$s1682);
            $tmp1676 = $tmp1683;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name1532, $tmp1676);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1676));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1677));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1679));
            $tmp1684 = NULL;
            $returnValue1642 = $tmp1684;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1684));
            return $returnValue1642;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue1686;
    org$pandalanguage$pandac$ASTNode* $tmp1687;
    org$pandalanguage$pandac$ASTNode* $tmp1688;
    panda$core$Bit $tmp1689;
    panda$core$Bit$init$builtin_bit(&$tmp1689, true);
    org$pandalanguage$pandac$ASTNode* $tmp1690 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1689);
    $tmp1688 = $tmp1690;
    $tmp1687 = $tmp1688;
    $returnValue1686 = $tmp1687;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1687));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1688));
    return $returnValue1686;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1695;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1696;
    panda$core$Int64 $tmp1697;
    org$pandalanguage$pandac$ASTNode* $returnValue1700;
    org$pandalanguage$pandac$ASTNode* $tmp1701;
    panda$collections$Array* subtypes1704 = NULL;
    panda$collections$Array* $tmp1705;
    panda$collections$Array* $tmp1706;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1708;
    panda$core$Int64 $tmp1709;
    org$pandalanguage$pandac$ASTNode* t1714 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1715;
    org$pandalanguage$pandac$ASTNode* $tmp1716;
    org$pandalanguage$pandac$ASTNode* $tmp1718;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1725;
    panda$core$Int64 $tmp1726;
    org$pandalanguage$pandac$ASTNode* $tmp1728;
    org$pandalanguage$pandac$ASTNode* $tmp1729;
    org$pandalanguage$pandac$ASTNode* $tmp1730;
    org$pandalanguage$pandac$ASTNode* $tmp1732;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1736;
    panda$core$Int64 $tmp1737;
    org$pandalanguage$pandac$ASTNode* $tmp1740;
    org$pandalanguage$pandac$parser$Token yields1745;
    org$pandalanguage$pandac$parser$Token$Kind $match$694_91747;
    panda$core$Int64 $tmp1751;
    panda$core$Int64 $tmp1754;
    panda$core$Int64 $tmp1758;
    panda$core$Int64 $tmp1762;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1768;
    panda$core$Int64 $tmp1769;
    org$pandalanguage$pandac$ASTNode* $tmp1772;
    panda$collections$Array* returnTypes1776 = NULL;
    panda$collections$Array* $tmp1777;
    panda$collections$Array* $tmp1778;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1780;
    panda$core$Int64 $tmp1781;
    org$pandalanguage$pandac$ASTNode* t1786 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1787;
    org$pandalanguage$pandac$ASTNode* $tmp1788;
    org$pandalanguage$pandac$ASTNode* $tmp1790;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1798;
    panda$core$Int64 $tmp1799;
    org$pandalanguage$pandac$ASTNode* $tmp1801;
    org$pandalanguage$pandac$ASTNode* $tmp1802;
    org$pandalanguage$pandac$ASTNode* $tmp1803;
    org$pandalanguage$pandac$ASTNode* $tmp1805;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1810;
    panda$core$Int64 $tmp1811;
    org$pandalanguage$pandac$ASTNode* $tmp1814;
    org$pandalanguage$pandac$ASTNode* returnType1820 = NULL;
    panda$core$Int64 $tmp1822;
    org$pandalanguage$pandac$ASTNode* $tmp1824;
    org$pandalanguage$pandac$ASTNode* $tmp1825;
    panda$core$Int64 $tmp1827;
    org$pandalanguage$pandac$ASTNode* $tmp1829;
    org$pandalanguage$pandac$ASTNode* $tmp1830;
    panda$core$Object* $tmp1831;
    panda$core$Int64 $tmp1832;
    org$pandalanguage$pandac$ASTNode* $tmp1835;
    org$pandalanguage$pandac$ASTNode* $tmp1839;
    org$pandalanguage$pandac$ASTNode* $tmp1840;
    panda$core$Int64 $tmp1842;
    panda$collections$ImmutableArray* $tmp1843;
    org$pandalanguage$pandac$ASTNode* $tmp1850;
    int $tmp1694;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1697, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1696, $tmp1697);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1699 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1696, &$s1698);
        start1695 = $tmp1699;
        if (((panda$core$Bit) { !start1695.nonnull }).value) {
        {
            $tmp1701 = NULL;
            $returnValue1700 = $tmp1701;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1701));
            $tmp1694 = 0;
            goto $l1692;
            $l1702:;
            return $returnValue1700;
        }
        }
        panda$collections$Array* $tmp1707 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1707);
        $tmp1706 = $tmp1707;
        $tmp1705 = $tmp1706;
        subtypes1704 = $tmp1705;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1705));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1706));
        panda$core$Int64$init$builtin_int64(&$tmp1709, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1708, $tmp1709);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1710 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1708);
        if (((panda$core$Bit) { !$tmp1710.nonnull }).value) {
        {
            int $tmp1713;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1717 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1716 = $tmp1717;
                $tmp1715 = $tmp1716;
                t1714 = $tmp1715;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1715));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1716));
                if (((panda$core$Bit) { t1714 == NULL }).value) {
                {
                    $tmp1718 = NULL;
                    $returnValue1700 = $tmp1718;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1718));
                    $tmp1713 = 0;
                    goto $l1711;
                    $l1719:;
                    $tmp1694 = 1;
                    goto $l1692;
                    $l1720:;
                    return $returnValue1700;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1704, ((panda$core$Object*) t1714));
                $l1722:;
                panda$core$Int64$init$builtin_int64(&$tmp1726, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1725, $tmp1726);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1727 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1725);
                bool $tmp1724 = ((panda$core$Bit) { $tmp1727.nonnull }).value;
                if (!$tmp1724) goto $l1723;
                {
                    {
                        $tmp1728 = t1714;
                        org$pandalanguage$pandac$ASTNode* $tmp1731 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1730 = $tmp1731;
                        $tmp1729 = $tmp1730;
                        t1714 = $tmp1729;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1729));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1730));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
                    }
                    if (((panda$core$Bit) { t1714 == NULL }).value) {
                    {
                        $tmp1732 = NULL;
                        $returnValue1700 = $tmp1732;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1732));
                        $tmp1713 = 1;
                        goto $l1711;
                        $l1733:;
                        $tmp1694 = 2;
                        goto $l1692;
                        $l1734:;
                        return $returnValue1700;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1704, ((panda$core$Object*) t1714));
                }
                goto $l1722;
                $l1723:;
                panda$core$Int64$init$builtin_int64(&$tmp1737, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1736, $tmp1737);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1739 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1736, &$s1738);
                if (((panda$core$Bit) { !$tmp1739.nonnull }).value) {
                {
                    $tmp1740 = NULL;
                    $returnValue1700 = $tmp1740;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1740));
                    $tmp1713 = 2;
                    goto $l1711;
                    $l1741:;
                    $tmp1694 = 3;
                    goto $l1692;
                    $l1742:;
                    return $returnValue1700;
                }
                }
            }
            $tmp1713 = -1;
            goto $l1711;
            $l1711:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1714));
            t1714 = NULL;
            switch ($tmp1713) {
                case 1: goto $l1733;
                case 2: goto $l1741;
                case 0: goto $l1719;
                case -1: goto $l1744;
            }
            $l1744:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1746 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1745 = $tmp1746;
        {
            $match$694_91747 = yields1745.kind;
            panda$core$Int64$init$builtin_int64(&$tmp1751, 90);
            panda$core$Bit $tmp1752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_91747.$rawValue, $tmp1751);
            bool $tmp1750 = $tmp1752.value;
            if ($tmp1750) goto $l1753;
            panda$core$Int64$init$builtin_int64(&$tmp1754, 91);
            panda$core$Bit $tmp1755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_91747.$rawValue, $tmp1754);
            $tmp1750 = $tmp1755.value;
            $l1753:;
            panda$core$Bit $tmp1756 = { $tmp1750 };
            bool $tmp1749 = $tmp1756.value;
            if ($tmp1749) goto $l1757;
            panda$core$Int64$init$builtin_int64(&$tmp1758, 92);
            panda$core$Bit $tmp1759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_91747.$rawValue, $tmp1758);
            $tmp1749 = $tmp1759.value;
            $l1757:;
            panda$core$Bit $tmp1760 = { $tmp1749 };
            bool $tmp1748 = $tmp1760.value;
            if ($tmp1748) goto $l1761;
            panda$core$Int64$init$builtin_int64(&$tmp1762, 93);
            panda$core$Bit $tmp1763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_91747.$rawValue, $tmp1762);
            $tmp1748 = $tmp1763.value;
            $l1761:;
            panda$core$Bit $tmp1764 = { $tmp1748 };
            if ($tmp1764.value) {
            {
                int $tmp1767;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp1769, 103);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1768, $tmp1769);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1771 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1768, &$s1770);
                    if (((panda$core$Bit) { !$tmp1771.nonnull }).value) {
                    {
                        $tmp1772 = NULL;
                        $returnValue1700 = $tmp1772;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1772));
                        $tmp1767 = 0;
                        goto $l1765;
                        $l1773:;
                        $tmp1694 = 4;
                        goto $l1692;
                        $l1774:;
                        return $returnValue1700;
                    }
                    }
                    panda$collections$Array* $tmp1779 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1779);
                    $tmp1778 = $tmp1779;
                    $tmp1777 = $tmp1778;
                    returnTypes1776 = $tmp1777;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1777));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1778));
                    panda$core$Int64$init$builtin_int64(&$tmp1781, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1780, $tmp1781);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1782 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1780);
                    if (((panda$core$Bit) { !$tmp1782.nonnull }).value) {
                    {
                        int $tmp1785;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1789 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1788 = $tmp1789;
                            $tmp1787 = $tmp1788;
                            t1786 = $tmp1787;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1787));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1788));
                            if (((panda$core$Bit) { t1786 == NULL }).value) {
                            {
                                $tmp1790 = NULL;
                                $returnValue1700 = $tmp1790;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1790));
                                $tmp1785 = 0;
                                goto $l1783;
                                $l1791:;
                                $tmp1767 = 1;
                                goto $l1765;
                                $l1792:;
                                $tmp1694 = 5;
                                goto $l1692;
                                $l1793:;
                                return $returnValue1700;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1776, ((panda$core$Object*) t1786));
                            $l1795:;
                            panda$core$Int64$init$builtin_int64(&$tmp1799, 105);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1798, $tmp1799);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1800 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1798);
                            bool $tmp1797 = ((panda$core$Bit) { $tmp1800.nonnull }).value;
                            if (!$tmp1797) goto $l1796;
                            {
                                {
                                    $tmp1801 = t1786;
                                    org$pandalanguage$pandac$ASTNode* $tmp1804 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1803 = $tmp1804;
                                    $tmp1802 = $tmp1803;
                                    t1786 = $tmp1802;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1802));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1803));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1801));
                                }
                                if (((panda$core$Bit) { t1786 == NULL }).value) {
                                {
                                    $tmp1805 = NULL;
                                    $returnValue1700 = $tmp1805;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1805));
                                    $tmp1785 = 1;
                                    goto $l1783;
                                    $l1806:;
                                    $tmp1767 = 2;
                                    goto $l1765;
                                    $l1807:;
                                    $tmp1694 = 6;
                                    goto $l1692;
                                    $l1808:;
                                    return $returnValue1700;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1776, ((panda$core$Object*) t1786));
                            }
                            goto $l1795;
                            $l1796:;
                            panda$core$Int64$init$builtin_int64(&$tmp1811, 104);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1810, $tmp1811);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1813 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1810, &$s1812);
                            if (((panda$core$Bit) { !$tmp1813.nonnull }).value) {
                            {
                                $tmp1814 = NULL;
                                $returnValue1700 = $tmp1814;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1814));
                                $tmp1785 = 2;
                                goto $l1783;
                                $l1815:;
                                $tmp1767 = 3;
                                goto $l1765;
                                $l1816:;
                                $tmp1694 = 7;
                                goto $l1692;
                                $l1817:;
                                return $returnValue1700;
                            }
                            }
                        }
                        $tmp1785 = -1;
                        goto $l1783;
                        $l1783:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1786));
                        t1786 = NULL;
                        switch ($tmp1785) {
                            case 1: goto $l1806;
                            case -1: goto $l1819;
                            case 2: goto $l1815;
                            case 0: goto $l1791;
                        }
                        $l1819:;
                    }
                    }
                    memset(&returnType1820, 0, sizeof(returnType1820));
                    panda$core$Int64 $tmp1821 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1776);
                    panda$core$Int64$init$builtin_int64(&$tmp1822, 0);
                    panda$core$Bit $tmp1823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1821, $tmp1822);
                    if ($tmp1823.value) {
                    {
                        {
                            $tmp1824 = returnType1820;
                            $tmp1825 = NULL;
                            returnType1820 = $tmp1825;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1825));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1826 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1776);
                    panda$core$Int64$init$builtin_int64(&$tmp1827, 1);
                    panda$core$Bit $tmp1828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1826, $tmp1827);
                    if ($tmp1828.value) {
                    {
                        {
                            $tmp1829 = returnType1820;
                            panda$core$Int64$init$builtin_int64(&$tmp1832, 0);
                            panda$core$Object* $tmp1833 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1776, $tmp1832);
                            $tmp1831 = $tmp1833;
                            $tmp1830 = ((org$pandalanguage$pandac$ASTNode*) $tmp1831);
                            returnType1820 = $tmp1830;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1830));
                            panda$core$Panda$unref$panda$core$Object($tmp1831);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1829));
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1695.value), &$s1834);
                        $tmp1835 = NULL;
                        $returnValue1700 = $tmp1835;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1835));
                        $tmp1767 = 4;
                        goto $l1765;
                        $l1836:;
                        $tmp1694 = 8;
                        goto $l1692;
                        $l1837:;
                        return $returnValue1700;
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1841 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1842, 27);
                    panda$collections$ImmutableArray* $tmp1844 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1704);
                    $tmp1843 = $tmp1844;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1841, $tmp1842, ((org$pandalanguage$pandac$parser$Token) start1695.value).position, yields1745.kind, $tmp1843, returnType1820);
                    $tmp1840 = $tmp1841;
                    $tmp1839 = $tmp1840;
                    $returnValue1700 = $tmp1839;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1839));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1840));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1843));
                    $tmp1767 = 5;
                    goto $l1765;
                    $l1845:;
                    $tmp1694 = 9;
                    goto $l1692;
                    $l1846:;
                    return $returnValue1700;
                }
                $l1765:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1820));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1776));
                returnTypes1776 = NULL;
                switch ($tmp1767) {
                    case 1: goto $l1792;
                    case 0: goto $l1773;
                    case 4: goto $l1836;
                    case 3: goto $l1816;
                    case 2: goto $l1807;
                    case 5: goto $l1845;
                }
                $l1848:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1695.value), &$s1849);
                $tmp1850 = NULL;
                $returnValue1700 = $tmp1850;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1850));
                $tmp1694 = 10;
                goto $l1692;
                $l1851:;
                return $returnValue1700;
            }
            }
        }
    }
    $tmp1694 = -1;
    goto $l1692;
    $l1692:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1704));
    subtypes1704 = NULL;
    switch ($tmp1694) {
        case 2: goto $l1734;
        case 7: goto $l1817;
        case 5: goto $l1793;
        case 1: goto $l1720;
        case 4: goto $l1774;
        case 8: goto $l1837;
        case 6: goto $l1808;
        case 9: goto $l1846;
        case 3: goto $l1742;
        case -1: goto $l1853;
        case 0: goto $l1702;
        case 10: goto $l1851;
    }
    $l1853:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* result1857 = NULL;
    panda$core$Int64 $tmp1859;
    org$pandalanguage$pandac$ASTNode* $tmp1861;
    org$pandalanguage$pandac$ASTNode* $tmp1862;
    org$pandalanguage$pandac$ASTNode* $tmp1863;
    org$pandalanguage$pandac$ASTNode* $returnValue1865;
    org$pandalanguage$pandac$ASTNode* $tmp1866;
    org$pandalanguage$pandac$parser$Token$nullable start1872;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1873;
    panda$core$Int64 $tmp1874;
    org$pandalanguage$pandac$ASTNode* $tmp1877;
    panda$core$MutableString* name1881 = NULL;
    panda$core$MutableString* $tmp1882;
    panda$core$MutableString* $tmp1883;
    panda$core$String* $tmp1885;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1890;
    panda$core$Int64 $tmp1891;
    org$pandalanguage$pandac$parser$Token$nullable id1893;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1894;
    panda$core$Int64 $tmp1895;
    org$pandalanguage$pandac$ASTNode* $tmp1898;
    panda$core$Char8 $tmp1902;
    panda$core$UInt8 $tmp1903;
    panda$core$String* $tmp1904;
    panda$core$String* finalName1906 = NULL;
    panda$core$String* $tmp1907;
    panda$core$String* $tmp1908;
    org$pandalanguage$pandac$ASTNode* $tmp1910;
    org$pandalanguage$pandac$ASTNode* $tmp1911;
    org$pandalanguage$pandac$ASTNode* $tmp1912;
    panda$core$Int64 $tmp1914;
    panda$core$Int64 $tmp1916;
    panda$collections$Array* children1921 = NULL;
    panda$collections$Array* $tmp1922;
    panda$collections$Array* $tmp1923;
    org$pandalanguage$pandac$ASTNode* t1925 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1926;
    org$pandalanguage$pandac$ASTNode* $tmp1927;
    panda$core$Bit $tmp1928;
    org$pandalanguage$pandac$ASTNode* $tmp1930;
    org$pandalanguage$pandac$ASTNode* $tmp1935;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1943;
    panda$core$Int64 $tmp1944;
    org$pandalanguage$pandac$ASTNode* $tmp1946;
    org$pandalanguage$pandac$ASTNode* $tmp1947;
    org$pandalanguage$pandac$ASTNode* $tmp1948;
    panda$core$Bit $tmp1949;
    org$pandalanguage$pandac$ASTNode* $tmp1951;
    org$pandalanguage$pandac$ASTNode* $tmp1956;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1961;
    panda$core$Int64 $tmp1962;
    org$pandalanguage$pandac$ASTNode* $tmp1965;
    org$pandalanguage$pandac$ASTNode* $tmp1970;
    org$pandalanguage$pandac$ASTNode* $tmp1975;
    org$pandalanguage$pandac$ASTNode* $tmp1976;
    org$pandalanguage$pandac$ASTNode* $tmp1977;
    panda$core$Int64 $tmp1979;
    panda$collections$ImmutableArray* $tmp1980;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1984;
    panda$core$Int64 $tmp1985;
    org$pandalanguage$pandac$ASTNode* $tmp1987;
    org$pandalanguage$pandac$ASTNode* $tmp1988;
    org$pandalanguage$pandac$ASTNode* $tmp1989;
    panda$core$Int64 $tmp1991;
    org$pandalanguage$pandac$ASTNode* $tmp1994;
    int $tmp1856;
    {
        memset(&result1857, 0, sizeof(result1857));
        org$pandalanguage$pandac$parser$Token $tmp1858 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp1859, 103);
        panda$core$Bit $tmp1860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1858.kind.$rawValue, $tmp1859);
        if ($tmp1860.value) {
        {
            {
                $tmp1861 = result1857;
                org$pandalanguage$pandac$ASTNode* $tmp1864 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1863 = $tmp1864;
                $tmp1862 = $tmp1863;
                result1857 = $tmp1862;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1862));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1863));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1861));
            }
            if (((panda$core$Bit) { result1857 == NULL }).value) {
            {
                $tmp1866 = NULL;
                $returnValue1865 = $tmp1866;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1866));
                $tmp1856 = 0;
                goto $l1854;
                $l1867:;
                return $returnValue1865;
            }
            }
        }
        }
        else {
        {
            int $tmp1871;
            {
                panda$core$Int64$init$builtin_int64(&$tmp1874, 48);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1873, $tmp1874);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1876 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1873, &$s1875);
                start1872 = $tmp1876;
                if (((panda$core$Bit) { !start1872.nonnull }).value) {
                {
                    $tmp1877 = NULL;
                    $returnValue1865 = $tmp1877;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1877));
                    $tmp1871 = 0;
                    goto $l1869;
                    $l1878:;
                    $tmp1856 = 1;
                    goto $l1854;
                    $l1879:;
                    return $returnValue1865;
                }
                }
                panda$core$MutableString* $tmp1884 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1886 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1872.value));
                $tmp1885 = $tmp1886;
                panda$core$MutableString$init$panda$core$String($tmp1884, $tmp1885);
                $tmp1883 = $tmp1884;
                $tmp1882 = $tmp1883;
                name1881 = $tmp1882;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1882));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1883));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1885));
                $l1887:;
                panda$core$Int64$init$builtin_int64(&$tmp1891, 98);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1890, $tmp1891);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1892 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1890);
                bool $tmp1889 = ((panda$core$Bit) { $tmp1892.nonnull }).value;
                if (!$tmp1889) goto $l1888;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1895, 48);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1894, $tmp1895);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1897 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1894, &$s1896);
                    id1893 = $tmp1897;
                    if (((panda$core$Bit) { !id1893.nonnull }).value) {
                    {
                        $tmp1898 = NULL;
                        $returnValue1865 = $tmp1898;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1898));
                        $tmp1871 = 1;
                        goto $l1869;
                        $l1899:;
                        $tmp1856 = 2;
                        goto $l1854;
                        $l1900:;
                        return $returnValue1865;
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp1903, 46);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1902, $tmp1903);
                    panda$core$MutableString$append$panda$core$Char8(name1881, $tmp1902);
                    panda$core$String* $tmp1905 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1893.value));
                    $tmp1904 = $tmp1905;
                    panda$core$MutableString$append$panda$core$String(name1881, $tmp1904);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1904));
                }
                goto $l1887;
                $l1888:;
                panda$core$String* $tmp1909 = panda$core$MutableString$finish$R$panda$core$String(name1881);
                $tmp1908 = $tmp1909;
                $tmp1907 = $tmp1908;
                finalName1906 = $tmp1907;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1907));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1908));
                {
                    $tmp1910 = result1857;
                    org$pandalanguage$pandac$ASTNode* $tmp1913 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1914, 42);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1913, $tmp1914, ((org$pandalanguage$pandac$parser$Token) start1872.value).position, finalName1906);
                    $tmp1912 = $tmp1913;
                    $tmp1911 = $tmp1912;
                    result1857 = $tmp1911;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1912));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1910));
                }
                org$pandalanguage$pandac$parser$Token $tmp1915 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$Int64$init$builtin_int64(&$tmp1916, 62);
                panda$core$Bit $tmp1917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1915.kind.$rawValue, $tmp1916);
                if ($tmp1917.value) {
                {
                    int $tmp1920;
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                        panda$collections$Array* $tmp1924 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1924);
                        $tmp1923 = $tmp1924;
                        $tmp1922 = $tmp1923;
                        children1921 = $tmp1922;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1922));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1923));
                        panda$core$Bit$init$builtin_bit(&$tmp1928, false);
                        org$pandalanguage$pandac$ASTNode* $tmp1929 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1928);
                        $tmp1927 = $tmp1929;
                        $tmp1926 = $tmp1927;
                        t1925 = $tmp1926;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1926));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1927));
                        if (((panda$core$Bit) { t1925 == NULL }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp1930 = result1857;
                                $returnValue1865 = $tmp1930;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1930));
                                $tmp1920 = 0;
                                goto $l1918;
                                $l1931:;
                                $tmp1871 = 2;
                                goto $l1869;
                                $l1932:;
                                $tmp1856 = 3;
                                goto $l1854;
                                $l1933:;
                                return $returnValue1865;
                            }
                            }
                            $tmp1935 = NULL;
                            $returnValue1865 = $tmp1935;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1935));
                            $tmp1920 = 1;
                            goto $l1918;
                            $l1936:;
                            $tmp1871 = 3;
                            goto $l1869;
                            $l1937:;
                            $tmp1856 = 4;
                            goto $l1854;
                            $l1938:;
                            return $returnValue1865;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children1921, ((panda$core$Object*) t1925));
                        $l1940:;
                        panda$core$Int64$init$builtin_int64(&$tmp1944, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1943, $tmp1944);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1945 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1943);
                        bool $tmp1942 = ((panda$core$Bit) { $tmp1945.nonnull }).value;
                        if (!$tmp1942) goto $l1941;
                        {
                            {
                                $tmp1946 = t1925;
                                panda$core$Bit$init$builtin_bit(&$tmp1949, false);
                                org$pandalanguage$pandac$ASTNode* $tmp1950 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1949);
                                $tmp1948 = $tmp1950;
                                $tmp1947 = $tmp1948;
                                t1925 = $tmp1947;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1947));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1948));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1946));
                            }
                            if (((panda$core$Bit) { t1925 == NULL }).value) {
                            {
                                if (p_needSpeculativeParse.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1951 = result1857;
                                    $returnValue1865 = $tmp1951;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1951));
                                    $tmp1920 = 2;
                                    goto $l1918;
                                    $l1952:;
                                    $tmp1871 = 4;
                                    goto $l1869;
                                    $l1953:;
                                    $tmp1856 = 5;
                                    goto $l1854;
                                    $l1954:;
                                    return $returnValue1865;
                                }
                                }
                                $tmp1956 = NULL;
                                $returnValue1865 = $tmp1956;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1956));
                                $tmp1920 = 3;
                                goto $l1918;
                                $l1957:;
                                $tmp1871 = 5;
                                goto $l1869;
                                $l1958:;
                                $tmp1856 = 6;
                                goto $l1854;
                                $l1959:;
                                return $returnValue1865;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(children1921, ((panda$core$Object*) t1925));
                        }
                        goto $l1940;
                        $l1941:;
                        panda$core$Int64$init$builtin_int64(&$tmp1962, 63);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1961, $tmp1962);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1964 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1961, &$s1963);
                        if (((panda$core$Bit) { !$tmp1964.nonnull }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp1965 = result1857;
                                $returnValue1865 = $tmp1965;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1965));
                                $tmp1920 = 4;
                                goto $l1918;
                                $l1966:;
                                $tmp1871 = 6;
                                goto $l1869;
                                $l1967:;
                                $tmp1856 = 7;
                                goto $l1854;
                                $l1968:;
                                return $returnValue1865;
                            }
                            }
                            $tmp1970 = NULL;
                            $returnValue1865 = $tmp1970;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1970));
                            $tmp1920 = 5;
                            goto $l1918;
                            $l1971:;
                            $tmp1871 = 7;
                            goto $l1869;
                            $l1972:;
                            $tmp1856 = 8;
                            goto $l1854;
                            $l1973:;
                            return $returnValue1865;
                        }
                        }
                        {
                            $tmp1975 = result1857;
                            org$pandalanguage$pandac$ASTNode* $tmp1978 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp1979, 19);
                            panda$collections$ImmutableArray* $tmp1981 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1921);
                            $tmp1980 = $tmp1981;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1978, $tmp1979, ((org$pandalanguage$pandac$parser$Token) start1872.value).position, finalName1906, $tmp1980);
                            $tmp1977 = $tmp1978;
                            $tmp1976 = $tmp1977;
                            result1857 = $tmp1976;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1976));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1977));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1980));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1975));
                        }
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$accept(self);
                        }
                        }
                    }
                    $tmp1920 = -1;
                    goto $l1918;
                    $l1918:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1925));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1921));
                    children1921 = NULL;
                    t1925 = NULL;
                    switch ($tmp1920) {
                        case 2: goto $l1952;
                        case -1: goto $l1982;
                        case 1: goto $l1936;
                        case 3: goto $l1957;
                        case 5: goto $l1971;
                        case 4: goto $l1966;
                        case 0: goto $l1931;
                    }
                    $l1982:;
                }
                }
            }
            $tmp1871 = -1;
            goto $l1869;
            $l1869:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1906));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1881));
            name1881 = NULL;
            finalName1906 = NULL;
            switch ($tmp1871) {
                case 6: goto $l1967;
                case 3: goto $l1937;
                case 4: goto $l1953;
                case 5: goto $l1958;
                case -1: goto $l1983;
                case 7: goto $l1972;
                case 0: goto $l1878;
                case 2: goto $l1932;
                case 1: goto $l1899;
            }
            $l1983:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1985, 94);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1984, $tmp1985);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1986 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1984);
        if (((panda$core$Bit) { $tmp1986.nonnull }).value) {
        {
            {
                $tmp1987 = result1857;
                org$pandalanguage$pandac$ASTNode* $tmp1990 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1991, 29);
                org$pandalanguage$pandac$Position $tmp1993 = (($fn1992) result1857->$class->vtable[2])(result1857);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1990, $tmp1991, $tmp1993, result1857);
                $tmp1989 = $tmp1990;
                $tmp1988 = $tmp1989;
                result1857 = $tmp1988;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1988));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1989));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1987));
            }
        }
        }
        $tmp1994 = result1857;
        $returnValue1865 = $tmp1994;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1994));
        $tmp1856 = 9;
        goto $l1854;
        $l1995:;
        return $returnValue1865;
    }
    $l1854:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1857));
    switch ($tmp1856) {
        case 8: goto $l1973;
        case 4: goto $l1938;
        case 5: goto $l1954;
        case 9: goto $l1995;
        case 3: goto $l1933;
        case 7: goto $l1968;
        case 1: goto $l1879;
        case 6: goto $l1959;
        case 0: goto $l1867;
        case 2: goto $l1900;
    }
    $l1997:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2001 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2002;
    org$pandalanguage$pandac$ASTNode* $tmp2003;
    org$pandalanguage$pandac$ASTNode* $returnValue2005;
    org$pandalanguage$pandac$ASTNode* $tmp2006;
    org$pandalanguage$pandac$parser$Token token2011;
    org$pandalanguage$pandac$parser$Token$Kind $match$832_132013;
    panda$core$Int64 $tmp2014;
    panda$core$Object* $tmp2019;
    panda$core$Bit $tmp2020;
    panda$collections$Array* args2022 = NULL;
    panda$collections$Array* $tmp2023;
    panda$collections$Array* $tmp2024;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2026;
    panda$core$Int64 $tmp2027;
    org$pandalanguage$pandac$ASTNode* expr2032 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2033;
    org$pandalanguage$pandac$ASTNode* $tmp2034;
    panda$core$Object* $tmp2036;
    org$pandalanguage$pandac$ASTNode* $tmp2038;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2046;
    panda$core$Int64 $tmp2047;
    org$pandalanguage$pandac$ASTNode* $tmp2049;
    org$pandalanguage$pandac$ASTNode* $tmp2050;
    org$pandalanguage$pandac$ASTNode* $tmp2051;
    panda$core$Object* $tmp2053;
    org$pandalanguage$pandac$ASTNode* $tmp2055;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2060;
    panda$core$Int64 $tmp2061;
    panda$core$Object* $tmp2064;
    org$pandalanguage$pandac$ASTNode* $tmp2066;
    panda$core$Object* $tmp2072;
    org$pandalanguage$pandac$ASTNode* $tmp2074;
    org$pandalanguage$pandac$ASTNode* $tmp2075;
    org$pandalanguage$pandac$ASTNode* $tmp2076;
    panda$core$Int64 $tmp2078;
    panda$collections$ImmutableArray* $tmp2079;
    panda$core$Int64 $tmp2082;
    org$pandalanguage$pandac$ASTNode* arg2087 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2088;
    org$pandalanguage$pandac$ASTNode* $tmp2089;
    org$pandalanguage$pandac$ASTNode* $tmp2091;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2095;
    panda$core$Int64 $tmp2096;
    org$pandalanguage$pandac$ASTNode* $tmp2099;
    org$pandalanguage$pandac$ASTNode* $tmp2103;
    org$pandalanguage$pandac$ASTNode* $tmp2104;
    org$pandalanguage$pandac$ASTNode* $tmp2105;
    panda$core$Int64 $tmp2107;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2108;
    panda$core$Int64 $tmp2109;
    panda$core$Int64 $tmp2111;
    panda$core$String* name2116 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2117;
    panda$core$Int64 $tmp2118;
    panda$core$String* $tmp2120;
    panda$core$String* $tmp2121;
    panda$core$String* $tmp2123;
    panda$core$String* $tmp2124;
    panda$core$String* $tmp2125;
    org$pandalanguage$pandac$ASTNode* $tmp2127;
    org$pandalanguage$pandac$ASTNode* $tmp2131;
    org$pandalanguage$pandac$ASTNode* $tmp2132;
    org$pandalanguage$pandac$ASTNode* $tmp2133;
    panda$core$Int64 $tmp2135;
    panda$core$Int64 $tmp2137;
    org$pandalanguage$pandac$ASTNode* target2142 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2143;
    org$pandalanguage$pandac$ASTNode* $tmp2144;
    org$pandalanguage$pandac$ASTNode* $tmp2146;
    org$pandalanguage$pandac$ASTNode* $tmp2150;
    org$pandalanguage$pandac$ASTNode* $tmp2151;
    org$pandalanguage$pandac$ASTNode* $tmp2152;
    panda$core$Int64 $tmp2154;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2155;
    panda$core$Int64 $tmp2156;
    panda$core$Int64 $tmp2158;
    panda$core$String* name2163 = NULL;
    panda$core$String* $tmp2164;
    panda$core$String* $tmp2165;
    panda$collections$Array* types2170 = NULL;
    panda$collections$Array* $tmp2171;
    panda$collections$Array* $tmp2172;
    org$pandalanguage$pandac$ASTNode* t2174 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2175;
    org$pandalanguage$pandac$ASTNode* $tmp2176;
    panda$core$Bit $tmp2177;
    org$pandalanguage$pandac$ASTNode* $tmp2179;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2187;
    panda$core$Int64 $tmp2188;
    org$pandalanguage$pandac$ASTNode* $tmp2190;
    org$pandalanguage$pandac$ASTNode* $tmp2191;
    org$pandalanguage$pandac$ASTNode* $tmp2192;
    panda$core$Bit $tmp2193;
    org$pandalanguage$pandac$ASTNode* $tmp2195;
    org$pandalanguage$pandac$parser$Token$nullable gt2200;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2201;
    panda$core$Int64 $tmp2202;
    org$pandalanguage$pandac$ASTNode* $tmp2205;
    panda$core$Bit shouldAccept2210;
    panda$core$Object* $tmp2211;
    panda$core$Int64 $tmp2212;
    org$pandalanguage$pandac$parser$Token n2214;
    org$pandalanguage$pandac$parser$Token$Kind $match$945_292216;
    panda$core$Int64 $tmp2219;
    panda$core$Int64 $tmp2222;
    panda$core$Int64 $tmp2226;
    panda$core$Bit $tmp2229;
    panda$core$Int64 $tmp2230;
    panda$core$Int64 $tmp2235;
    panda$core$Bit $tmp2239;
    panda$core$Bit $tmp2240;
    org$pandalanguage$pandac$ASTNode* $tmp2241;
    org$pandalanguage$pandac$ASTNode* $tmp2242;
    org$pandalanguage$pandac$ASTNode* $tmp2243;
    panda$core$Int64 $tmp2245;
    panda$collections$ImmutableArray* $tmp2248;
    org$pandalanguage$pandac$ASTNode* $tmp2252;
    org$pandalanguage$pandac$ASTNode* $tmp2258;
    org$pandalanguage$pandac$ASTNode* $tmp2263;
    int $tmp2000;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2004 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2003 = $tmp2004;
        $tmp2002 = $tmp2003;
        result2001 = $tmp2002;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2002));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2003));
        if (((panda$core$Bit) { result2001 == NULL }).value) {
        {
            $tmp2006 = NULL;
            $returnValue2005 = $tmp2006;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2006));
            $tmp2000 = 0;
            goto $l1998;
            $l2007:;
            return $returnValue2005;
        }
        }
        $l2009:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2012 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token2011 = $tmp2012;
            {
                $match$832_132013 = token2011.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2014, 103);
                panda$core$Bit $tmp2015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$832_132013.$rawValue, $tmp2014);
                if ($tmp2015.value) {
                {
                    int $tmp2018;
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp2020, true);
                        panda$core$Bit$wrapper* $tmp2021;
                        $tmp2021 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp2021->value = $tmp2020;
                        $tmp2019 = ((panda$core$Object*) $tmp2021);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2019);
                        panda$core$Panda$unref$panda$core$Object($tmp2019);
                        panda$collections$Array* $tmp2025 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2025);
                        $tmp2024 = $tmp2025;
                        $tmp2023 = $tmp2024;
                        args2022 = $tmp2023;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2023));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2024));
                        panda$core$Int64$init$builtin_int64(&$tmp2027, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2026, $tmp2027);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2028 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2026);
                        if (((panda$core$Bit) { !$tmp2028.nonnull }).value) {
                        {
                            int $tmp2031;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp2035 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp2034 = $tmp2035;
                                $tmp2033 = $tmp2034;
                                expr2032 = $tmp2033;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2033));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2034));
                                if (((panda$core$Bit) { expr2032 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp2037 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2036 = $tmp2037;
                                    panda$core$Panda$unref$panda$core$Object($tmp2036);
                                    $tmp2038 = NULL;
                                    $returnValue2005 = $tmp2038;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2038));
                                    $tmp2031 = 0;
                                    goto $l2029;
                                    $l2039:;
                                    $tmp2018 = 0;
                                    goto $l2016;
                                    $l2040:;
                                    $tmp2000 = 1;
                                    goto $l1998;
                                    $l2041:;
                                    return $returnValue2005;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args2022, ((panda$core$Object*) expr2032));
                                $l2043:;
                                panda$core$Int64$init$builtin_int64(&$tmp2047, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2046, $tmp2047);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2048 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2046);
                                bool $tmp2045 = ((panda$core$Bit) { $tmp2048.nonnull }).value;
                                if (!$tmp2045) goto $l2044;
                                {
                                    {
                                        $tmp2049 = expr2032;
                                        org$pandalanguage$pandac$ASTNode* $tmp2052 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp2051 = $tmp2052;
                                        $tmp2050 = $tmp2051;
                                        expr2032 = $tmp2050;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2050));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2051));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2049));
                                    }
                                    if (((panda$core$Bit) { expr2032 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp2054 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp2053 = $tmp2054;
                                        panda$core$Panda$unref$panda$core$Object($tmp2053);
                                        $tmp2055 = NULL;
                                        $returnValue2005 = $tmp2055;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2055));
                                        $tmp2031 = 1;
                                        goto $l2029;
                                        $l2056:;
                                        $tmp2018 = 1;
                                        goto $l2016;
                                        $l2057:;
                                        $tmp2000 = 2;
                                        goto $l1998;
                                        $l2058:;
                                        return $returnValue2005;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args2022, ((panda$core$Object*) expr2032));
                                }
                                goto $l2043;
                                $l2044:;
                                panda$core$Int64$init$builtin_int64(&$tmp2061, 104);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2060, $tmp2061);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2063 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2060, &$s2062);
                                if (((panda$core$Bit) { !$tmp2063.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp2065 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2064 = $tmp2065;
                                    panda$core$Panda$unref$panda$core$Object($tmp2064);
                                    $tmp2066 = NULL;
                                    $returnValue2005 = $tmp2066;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2066));
                                    $tmp2031 = 2;
                                    goto $l2029;
                                    $l2067:;
                                    $tmp2018 = 2;
                                    goto $l2016;
                                    $l2068:;
                                    $tmp2000 = 3;
                                    goto $l1998;
                                    $l2069:;
                                    return $returnValue2005;
                                }
                                }
                            }
                            $tmp2031 = -1;
                            goto $l2029;
                            $l2029:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2032));
                            expr2032 = NULL;
                            switch ($tmp2031) {
                                case 1: goto $l2056;
                                case -1: goto $l2071;
                                case 2: goto $l2067;
                                case 0: goto $l2039;
                            }
                            $l2071:;
                        }
                        }
                        panda$core$Object* $tmp2073 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2072 = $tmp2073;
                        panda$core$Panda$unref$panda$core$Object($tmp2072);
                        {
                            $tmp2074 = result2001;
                            org$pandalanguage$pandac$ASTNode* $tmp2077 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2078, 8);
                            panda$collections$ImmutableArray* $tmp2080 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2022);
                            $tmp2079 = $tmp2080;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2077, $tmp2078, token2011.position, result2001, $tmp2079);
                            $tmp2076 = $tmp2077;
                            $tmp2075 = $tmp2076;
                            result2001 = $tmp2075;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2075));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2076));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2079));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2074));
                        }
                    }
                    $tmp2018 = -1;
                    goto $l2016;
                    $l2016:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2022));
                    args2022 = NULL;
                    switch ($tmp2018) {
                        case 0: goto $l2040;
                        case -1: goto $l2081;
                        case 1: goto $l2057;
                        case 2: goto $l2068;
                    }
                    $l2081:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2082, 101);
                panda$core$Bit $tmp2083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$832_132013.$rawValue, $tmp2082);
                if ($tmp2083.value) {
                {
                    int $tmp2086;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2090 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2089 = $tmp2090;
                        $tmp2088 = $tmp2089;
                        arg2087 = $tmp2088;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2088));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2089));
                        if (((panda$core$Bit) { arg2087 == NULL }).value) {
                        {
                            $tmp2091 = NULL;
                            $returnValue2005 = $tmp2091;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2091));
                            $tmp2086 = 0;
                            goto $l2084;
                            $l2092:;
                            $tmp2000 = 4;
                            goto $l1998;
                            $l2093:;
                            return $returnValue2005;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp2096, 102);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2095, $tmp2096);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2098 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2095, &$s2097);
                        if (((panda$core$Bit) { !$tmp2098.nonnull }).value) {
                        {
                            $tmp2099 = NULL;
                            $returnValue2005 = $tmp2099;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2099));
                            $tmp2086 = 1;
                            goto $l2084;
                            $l2100:;
                            $tmp2000 = 5;
                            goto $l1998;
                            $l2101:;
                            return $returnValue2005;
                        }
                        }
                        {
                            $tmp2103 = result2001;
                            org$pandalanguage$pandac$ASTNode* $tmp2106 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2107, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2109, 101);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2108, $tmp2109);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2106, $tmp2107, token2011.position, result2001, $tmp2108, arg2087);
                            $tmp2105 = $tmp2106;
                            $tmp2104 = $tmp2105;
                            result2001 = $tmp2104;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2104));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2103));
                        }
                    }
                    $tmp2086 = -1;
                    goto $l2084;
                    $l2084:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2087));
                    arg2087 = NULL;
                    switch ($tmp2086) {
                        case -1: goto $l2110;
                        case 0: goto $l2092;
                        case 1: goto $l2100;
                    }
                    $l2110:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2111, 98);
                panda$core$Bit $tmp2112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$832_132013.$rawValue, $tmp2111);
                if ($tmp2112.value) {
                {
                    int $tmp2115;
                    {
                        memset(&name2116, 0, sizeof(name2116));
                        panda$core$Int64$init$builtin_int64(&$tmp2118, 22);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2117, $tmp2118);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2119 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2117);
                        if (((panda$core$Bit) { $tmp2119.nonnull }).value) {
                        {
                            {
                                $tmp2120 = name2116;
                                $tmp2121 = &$s2122;
                                name2116 = $tmp2121;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2121));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2120));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp2123 = name2116;
                                panda$core$String* $tmp2126 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp2125 = $tmp2126;
                                $tmp2124 = $tmp2125;
                                name2116 = $tmp2124;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2124));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2125));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2123));
                            }
                            if (((panda$core$Bit) { name2116 == NULL }).value) {
                            {
                                $tmp2127 = NULL;
                                $returnValue2005 = $tmp2127;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2127));
                                $tmp2115 = 0;
                                goto $l2113;
                                $l2128:;
                                $tmp2000 = 6;
                                goto $l1998;
                                $l2129:;
                                return $returnValue2005;
                            }
                            }
                        }
                        }
                        {
                            $tmp2131 = result2001;
                            org$pandalanguage$pandac$ASTNode* $tmp2134 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2135, 15);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2134, $tmp2135, token2011.position, result2001, name2116);
                            $tmp2133 = $tmp2134;
                            $tmp2132 = $tmp2133;
                            result2001 = $tmp2132;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2132));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2133));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2131));
                        }
                    }
                    $tmp2115 = -1;
                    goto $l2113;
                    $l2113:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2116));
                    switch ($tmp2115) {
                        case 0: goto $l2128;
                        case -1: goto $l2136;
                    }
                    $l2136:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2137, 89);
                panda$core$Bit $tmp2138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$832_132013.$rawValue, $tmp2137);
                if ($tmp2138.value) {
                {
                    int $tmp2141;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2145 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2144 = $tmp2145;
                        $tmp2143 = $tmp2144;
                        target2142 = $tmp2143;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2143));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2144));
                        if (((panda$core$Bit) { target2142 == NULL }).value) {
                        {
                            $tmp2146 = NULL;
                            $returnValue2005 = $tmp2146;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2146));
                            $tmp2141 = 0;
                            goto $l2139;
                            $l2147:;
                            $tmp2000 = 7;
                            goto $l1998;
                            $l2148:;
                            return $returnValue2005;
                        }
                        }
                        {
                            $tmp2150 = result2001;
                            org$pandalanguage$pandac$ASTNode* $tmp2153 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2154, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2156, 89);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2155, $tmp2156);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2153, $tmp2154, token2011.position, result2001, $tmp2155, target2142);
                            $tmp2152 = $tmp2153;
                            $tmp2151 = $tmp2152;
                            result2001 = $tmp2151;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2151));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2152));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2150));
                        }
                    }
                    $tmp2141 = -1;
                    goto $l2139;
                    $l2139:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2142));
                    target2142 = NULL;
                    switch ($tmp2141) {
                        case -1: goto $l2157;
                        case 0: goto $l2147;
                    }
                    $l2157:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2158, 62);
                panda$core$Bit $tmp2159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$832_132013.$rawValue, $tmp2158);
                if ($tmp2159.value) {
                {
                    int $tmp2162;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2011);
                        panda$core$String* $tmp2166 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result2001);
                        $tmp2165 = $tmp2166;
                        $tmp2164 = $tmp2165;
                        name2163 = $tmp2164;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2164));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2165));
                        if (((panda$core$Bit) { name2163 != NULL }).value) {
                        {
                            int $tmp2169;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp2173 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp2173);
                                $tmp2172 = $tmp2173;
                                $tmp2171 = $tmp2172;
                                types2170 = $tmp2171;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2171));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2172));
                                panda$core$Bit$init$builtin_bit(&$tmp2177, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2178 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2177);
                                $tmp2176 = $tmp2178;
                                $tmp2175 = $tmp2176;
                                t2174 = $tmp2175;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2175));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
                                if (((panda$core$Bit) { t2174 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2179 = result2001;
                                    $returnValue2005 = $tmp2179;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2179));
                                    $tmp2169 = 0;
                                    goto $l2167;
                                    $l2180:;
                                    $tmp2162 = 0;
                                    goto $l2160;
                                    $l2181:;
                                    $tmp2000 = 8;
                                    goto $l1998;
                                    $l2182:;
                                    return $returnValue2005;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types2170, ((panda$core$Object*) t2174));
                                $l2184:;
                                panda$core$Int64$init$builtin_int64(&$tmp2188, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2187, $tmp2188);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2189 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2187);
                                bool $tmp2186 = ((panda$core$Bit) { $tmp2189.nonnull }).value;
                                if (!$tmp2186) goto $l2185;
                                {
                                    {
                                        $tmp2190 = t2174;
                                        panda$core$Bit$init$builtin_bit(&$tmp2193, false);
                                        org$pandalanguage$pandac$ASTNode* $tmp2194 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2193);
                                        $tmp2192 = $tmp2194;
                                        $tmp2191 = $tmp2192;
                                        t2174 = $tmp2191;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2191));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2192));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2190));
                                    }
                                    if (((panda$core$Bit) { t2174 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp2195 = result2001;
                                        $returnValue2005 = $tmp2195;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2195));
                                        $tmp2169 = 1;
                                        goto $l2167;
                                        $l2196:;
                                        $tmp2162 = 1;
                                        goto $l2160;
                                        $l2197:;
                                        $tmp2000 = 9;
                                        goto $l1998;
                                        $l2198:;
                                        return $returnValue2005;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types2170, ((panda$core$Object*) t2174));
                                }
                                goto $l2184;
                                $l2185:;
                                panda$core$Int64$init$builtin_int64(&$tmp2202, 63);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2201, $tmp2202);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2204 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2201, &$s2203);
                                gt2200 = $tmp2204;
                                if (((panda$core$Bit) { !gt2200.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2205 = result2001;
                                    $returnValue2005 = $tmp2205;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2205));
                                    $tmp2169 = 2;
                                    goto $l2167;
                                    $l2206:;
                                    $tmp2162 = 2;
                                    goto $l2160;
                                    $l2207:;
                                    $tmp2000 = 10;
                                    goto $l1998;
                                    $l2208:;
                                    return $returnValue2005;
                                }
                                }
                                memset(&shouldAccept2210, 0, sizeof(shouldAccept2210));
                                panda$core$Int64$init$builtin_int64(&$tmp2212, 0);
                                panda$core$Object* $tmp2213 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2212);
                                $tmp2211 = $tmp2213;
                                panda$core$Panda$unref$panda$core$Object($tmp2211);
                                if (((panda$core$Bit$wrapper*) $tmp2211)->value.value) {
                                {
                                    org$pandalanguage$pandac$parser$Token $tmp2215 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                    n2214 = $tmp2215;
                                    {
                                        $match$945_292216 = n2214.kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2219, 98);
                                        panda$core$Bit $tmp2220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$945_292216.$rawValue, $tmp2219);
                                        bool $tmp2218 = $tmp2220.value;
                                        if ($tmp2218) goto $l2221;
                                        panda$core$Int64$init$builtin_int64(&$tmp2222, 105);
                                        panda$core$Bit $tmp2223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$945_292216.$rawValue, $tmp2222);
                                        $tmp2218 = $tmp2223.value;
                                        $l2221:;
                                        panda$core$Bit $tmp2224 = { $tmp2218 };
                                        bool $tmp2217 = $tmp2224.value;
                                        if ($tmp2217) goto $l2225;
                                        panda$core$Int64$init$builtin_int64(&$tmp2226, 89);
                                        panda$core$Bit $tmp2227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$945_292216.$rawValue, $tmp2226);
                                        $tmp2217 = $tmp2227.value;
                                        $l2225:;
                                        panda$core$Bit $tmp2228 = { $tmp2217 };
                                        if ($tmp2228.value) {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2229, true);
                                            shouldAccept2210 = $tmp2229;
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2230, 103);
                                        panda$core$Bit $tmp2231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$945_292216.$rawValue, $tmp2230);
                                        if ($tmp2231.value) {
                                        {
                                            panda$core$Bit $tmp2233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2214.position.line, ((org$pandalanguage$pandac$parser$Token) gt2200.value).position.line);
                                            bool $tmp2232 = $tmp2233.value;
                                            if (!$tmp2232) goto $l2234;
                                            panda$core$Int64$init$builtin_int64(&$tmp2235, 1);
                                            panda$core$Int64 $tmp2236 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((org$pandalanguage$pandac$parser$Token) gt2200.value).position.column, $tmp2235);
                                            panda$core$Bit $tmp2237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2214.position.column, $tmp2236);
                                            $tmp2232 = $tmp2237.value;
                                            $l2234:;
                                            panda$core$Bit $tmp2238 = { $tmp2232 };
                                            shouldAccept2210 = $tmp2238;
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2239, false);
                                            shouldAccept2210 = $tmp2239;
                                        }
                                        }
                                        }
                                    }
                                    if (shouldAccept2210.value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, n2214);
                                    }
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2240, true);
                                    shouldAccept2210 = $tmp2240;
                                }
                                }
                                if (shouldAccept2210.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp2241 = result2001;
                                        org$pandalanguage$pandac$ASTNode* $tmp2244 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        panda$core$Int64$init$builtin_int64(&$tmp2245, 19);
                                        org$pandalanguage$pandac$Position $tmp2247 = (($fn2246) result2001->$class->vtable[2])(result2001);
                                        panda$collections$ImmutableArray* $tmp2249 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types2170);
                                        $tmp2248 = $tmp2249;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2244, $tmp2245, $tmp2247, name2163, $tmp2248);
                                        $tmp2243 = $tmp2244;
                                        $tmp2242 = $tmp2243;
                                        result2001 = $tmp2242;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2242));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2243));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2241));
                                    }
                                    $tmp2169 = 3;
                                    goto $l2167;
                                    $l2250:;
                                    $tmp2162 = 3;
                                    goto $l2160;
                                    $l2251:;
                                    goto $l2009;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2252 = result2001;
                                    $returnValue2005 = $tmp2252;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2252));
                                    $tmp2169 = 4;
                                    goto $l2167;
                                    $l2253:;
                                    $tmp2162 = 4;
                                    goto $l2160;
                                    $l2254:;
                                    $tmp2000 = 11;
                                    goto $l1998;
                                    $l2255:;
                                    return $returnValue2005;
                                }
                                }
                            }
                            $tmp2169 = -1;
                            goto $l2167;
                            $l2167:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2174));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types2170));
                            types2170 = NULL;
                            t2174 = NULL;
                            switch ($tmp2169) {
                                case -1: goto $l2257;
                                case 4: goto $l2253;
                                case 3: goto $l2250;
                                case 1: goto $l2196;
                                case 2: goto $l2206;
                                case 0: goto $l2180;
                            }
                            $l2257:;
                        }
                        }
                        $tmp2258 = result2001;
                        $returnValue2005 = $tmp2258;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2258));
                        $tmp2162 = 5;
                        goto $l2160;
                        $l2259:;
                        $tmp2000 = 12;
                        goto $l1998;
                        $l2260:;
                        return $returnValue2005;
                    }
                    $l2160:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2163));
                    name2163 = NULL;
                    switch ($tmp2162) {
                        case 2: goto $l2207;
                        case 5: goto $l2259;
                        case 1: goto $l2197;
                        case 0: goto $l2181;
                        case 4: goto $l2254;
                        case 3: goto $l2251;
                    }
                    $l2262:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2011);
                    $tmp2263 = result2001;
                    $returnValue2005 = $tmp2263;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2263));
                    $tmp2000 = 13;
                    goto $l1998;
                    $l2264:;
                    return $returnValue2005;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l2010:;
    }
    $tmp2000 = -1;
    goto $l1998;
    $l1998:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2001));
    result2001 = NULL;
    switch ($tmp2000) {
        case 12: goto $l2260;
        case 5: goto $l2101;
        case 11: goto $l2255;
        case 13: goto $l2264;
        case -1: goto $l2266;
        case 9: goto $l2198;
        case 7: goto $l2148;
        case 3: goto $l2069;
        case 2: goto $l2058;
        case 10: goto $l2208;
        case 8: goto $l2182;
        case 4: goto $l2093;
        case 1: goto $l2041;
        case 0: goto $l2007;
        case 6: goto $l2129;
    }
    $l2266:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2270 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2271;
    org$pandalanguage$pandac$ASTNode* $tmp2272;
    org$pandalanguage$pandac$ASTNode* $returnValue2274;
    org$pandalanguage$pandac$ASTNode* $tmp2275;
    org$pandalanguage$pandac$parser$Token$nullable op2283;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2284;
    panda$core$Int64 $tmp2285;
    org$pandalanguage$pandac$ASTNode* next2288 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2289;
    org$pandalanguage$pandac$ASTNode* $tmp2290;
    org$pandalanguage$pandac$ASTNode* $tmp2292;
    org$pandalanguage$pandac$ASTNode* $tmp2296;
    org$pandalanguage$pandac$ASTNode* $tmp2297;
    org$pandalanguage$pandac$ASTNode* $tmp2298;
    panda$core$Int64 $tmp2300;
    org$pandalanguage$pandac$ASTNode* $tmp2302;
    int $tmp2269;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2273 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2272 = $tmp2273;
        $tmp2271 = $tmp2272;
        result2270 = $tmp2271;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2271));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2272));
        if (((panda$core$Bit) { result2270 == NULL }).value) {
        {
            $tmp2275 = NULL;
            $returnValue2274 = $tmp2275;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2275));
            $tmp2269 = 0;
            goto $l2267;
            $l2276:;
            return $returnValue2274;
        }
        }
        $l2278:;
        while (true) {
        {
            int $tmp2282;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2285, 57);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2284, $tmp2285);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2286 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2284);
                op2283 = $tmp2286;
                if (((panda$core$Bit) { !op2283.nonnull }).value) {
                {
                    $tmp2282 = 0;
                    goto $l2280;
                    $l2287:;
                    goto $l2279;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2291 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2290 = $tmp2291;
                $tmp2289 = $tmp2290;
                next2288 = $tmp2289;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2289));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2290));
                if (((panda$core$Bit) { next2288 == NULL }).value) {
                {
                    $tmp2292 = NULL;
                    $returnValue2274 = $tmp2292;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2292));
                    $tmp2282 = 1;
                    goto $l2280;
                    $l2293:;
                    $tmp2269 = 1;
                    goto $l2267;
                    $l2294:;
                    return $returnValue2274;
                }
                }
                {
                    $tmp2296 = result2270;
                    org$pandalanguage$pandac$ASTNode* $tmp2299 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2300, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2299, $tmp2300, ((org$pandalanguage$pandac$parser$Token) op2283.value).position, result2270, ((org$pandalanguage$pandac$parser$Token) op2283.value).kind, next2288);
                    $tmp2298 = $tmp2299;
                    $tmp2297 = $tmp2298;
                    result2270 = $tmp2297;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2297));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2298));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2296));
                }
            }
            $tmp2282 = -1;
            goto $l2280;
            $l2280:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2288));
            next2288 = NULL;
            switch ($tmp2282) {
                case 1: goto $l2293;
                case 0: goto $l2287;
                case -1: goto $l2301;
            }
            $l2301:;
        }
        }
        $l2279:;
        $tmp2302 = result2270;
        $returnValue2274 = $tmp2302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2302));
        $tmp2269 = 2;
        goto $l2267;
        $l2303:;
        return $returnValue2274;
    }
    $l2267:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2270));
    result2270 = NULL;
    switch ($tmp2269) {
        case 2: goto $l2303;
        case 0: goto $l2276;
        case 1: goto $l2294;
    }
    $l2305:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op2306;
    org$pandalanguage$pandac$parser$Token$Kind $match$1006_92308;
    panda$core$Int64 $tmp2311;
    panda$core$Int64 $tmp2314;
    panda$core$Int64 $tmp2318;
    org$pandalanguage$pandac$ASTNode* base2324 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2325;
    org$pandalanguage$pandac$ASTNode* $tmp2326;
    org$pandalanguage$pandac$ASTNode* $returnValue2328;
    org$pandalanguage$pandac$ASTNode* $tmp2329;
    org$pandalanguage$pandac$ASTNode* $tmp2332;
    org$pandalanguage$pandac$ASTNode* $tmp2333;
    panda$core$Int64 $tmp2335;
    org$pandalanguage$pandac$ASTNode* $tmp2339;
    org$pandalanguage$pandac$ASTNode* $tmp2340;
    org$pandalanguage$pandac$parser$Token $tmp2307 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op2306 = $tmp2307;
    {
        $match$1006_92308 = op2306.kind;
        panda$core$Int64$init$builtin_int64(&$tmp2311, 52);
        panda$core$Bit $tmp2312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1006_92308.$rawValue, $tmp2311);
        bool $tmp2310 = $tmp2312.value;
        if ($tmp2310) goto $l2313;
        panda$core$Int64$init$builtin_int64(&$tmp2314, 49);
        panda$core$Bit $tmp2315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1006_92308.$rawValue, $tmp2314);
        $tmp2310 = $tmp2315.value;
        $l2313:;
        panda$core$Bit $tmp2316 = { $tmp2310 };
        bool $tmp2309 = $tmp2316.value;
        if ($tmp2309) goto $l2317;
        panda$core$Int64$init$builtin_int64(&$tmp2318, 50);
        panda$core$Bit $tmp2319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1006_92308.$rawValue, $tmp2318);
        $tmp2309 = $tmp2319.value;
        $l2317:;
        panda$core$Bit $tmp2320 = { $tmp2309 };
        if ($tmp2320.value) {
        {
            int $tmp2323;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2327 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2326 = $tmp2327;
                $tmp2325 = $tmp2326;
                base2324 = $tmp2325;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2325));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2326));
                if (((panda$core$Bit) { base2324 == NULL }).value) {
                {
                    $tmp2329 = NULL;
                    $returnValue2328 = $tmp2329;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2329));
                    $tmp2323 = 0;
                    goto $l2321;
                    $l2330:;
                    return $returnValue2328;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2334 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2335, 32);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2334, $tmp2335, op2306.position, op2306.kind, base2324);
                $tmp2333 = $tmp2334;
                $tmp2332 = $tmp2333;
                $returnValue2328 = $tmp2332;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2332));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2333));
                $tmp2323 = 1;
                goto $l2321;
                $l2336:;
                return $returnValue2328;
            }
            $l2321:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base2324));
            base2324 = NULL;
            switch ($tmp2323) {
                case 1: goto $l2336;
                case 0: goto $l2330;
            }
            $l2338:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2306);
            org$pandalanguage$pandac$ASTNode* $tmp2341 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2340 = $tmp2341;
            $tmp2339 = $tmp2340;
            $returnValue2328 = $tmp2339;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2340));
            return $returnValue2328;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2346 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2347;
    org$pandalanguage$pandac$ASTNode* $tmp2348;
    org$pandalanguage$pandac$ASTNode* $returnValue2350;
    org$pandalanguage$pandac$ASTNode* $tmp2351;
    org$pandalanguage$pandac$parser$Token op2356;
    org$pandalanguage$pandac$parser$Token$Kind $match$1032_132358;
    panda$core$Int64 $tmp2365;
    panda$core$Int64 $tmp2368;
    panda$core$Int64 $tmp2372;
    panda$core$Int64 $tmp2376;
    panda$core$Int64 $tmp2380;
    panda$core$Int64 $tmp2384;
    panda$core$Int64 $tmp2388;
    org$pandalanguage$pandac$ASTNode* next2394 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2395;
    org$pandalanguage$pandac$ASTNode* $tmp2396;
    org$pandalanguage$pandac$ASTNode* $tmp2398;
    org$pandalanguage$pandac$ASTNode* $tmp2402;
    org$pandalanguage$pandac$ASTNode* $tmp2403;
    org$pandalanguage$pandac$ASTNode* $tmp2404;
    panda$core$Int64 $tmp2406;
    panda$core$Int64 $tmp2408;
    org$pandalanguage$pandac$parser$Token nextToken2410;
    panda$core$Int64 $tmp2412;
    org$pandalanguage$pandac$ASTNode* next2417 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2418;
    org$pandalanguage$pandac$ASTNode* $tmp2419;
    org$pandalanguage$pandac$ASTNode* $tmp2421;
    org$pandalanguage$pandac$ASTNode* $tmp2425;
    org$pandalanguage$pandac$ASTNode* $tmp2426;
    org$pandalanguage$pandac$ASTNode* $tmp2427;
    panda$core$Int64 $tmp2429;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2430;
    panda$core$Int64 $tmp2431;
    org$pandalanguage$pandac$ASTNode* $tmp2433;
    org$pandalanguage$pandac$ASTNode* $tmp2436;
    int $tmp2345;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2349 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2348 = $tmp2349;
        $tmp2347 = $tmp2348;
        result2346 = $tmp2347;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2347));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2348));
        if (((panda$core$Bit) { result2346 == NULL }).value) {
        {
            $tmp2351 = NULL;
            $returnValue2350 = $tmp2351;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2351));
            $tmp2345 = 0;
            goto $l2343;
            $l2352:;
            return $returnValue2350;
        }
        }
        $l2354:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2357 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2356 = $tmp2357;
            {
                $match$1032_132358 = op2356.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2365, 53);
                panda$core$Bit $tmp2366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032_132358.$rawValue, $tmp2365);
                bool $tmp2364 = $tmp2366.value;
                if ($tmp2364) goto $l2367;
                panda$core$Int64$init$builtin_int64(&$tmp2368, 54);
                panda$core$Bit $tmp2369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032_132358.$rawValue, $tmp2368);
                $tmp2364 = $tmp2369.value;
                $l2367:;
                panda$core$Bit $tmp2370 = { $tmp2364 };
                bool $tmp2363 = $tmp2370.value;
                if ($tmp2363) goto $l2371;
                panda$core$Int64$init$builtin_int64(&$tmp2372, 55);
                panda$core$Bit $tmp2373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032_132358.$rawValue, $tmp2372);
                $tmp2363 = $tmp2373.value;
                $l2371:;
                panda$core$Bit $tmp2374 = { $tmp2363 };
                bool $tmp2362 = $tmp2374.value;
                if ($tmp2362) goto $l2375;
                panda$core$Int64$init$builtin_int64(&$tmp2376, 56);
                panda$core$Bit $tmp2377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032_132358.$rawValue, $tmp2376);
                $tmp2362 = $tmp2377.value;
                $l2375:;
                panda$core$Bit $tmp2378 = { $tmp2362 };
                bool $tmp2361 = $tmp2378.value;
                if ($tmp2361) goto $l2379;
                panda$core$Int64$init$builtin_int64(&$tmp2380, 72);
                panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032_132358.$rawValue, $tmp2380);
                $tmp2361 = $tmp2381.value;
                $l2379:;
                panda$core$Bit $tmp2382 = { $tmp2361 };
                bool $tmp2360 = $tmp2382.value;
                if ($tmp2360) goto $l2383;
                panda$core$Int64$init$builtin_int64(&$tmp2384, 67);
                panda$core$Bit $tmp2385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032_132358.$rawValue, $tmp2384);
                $tmp2360 = $tmp2385.value;
                $l2383:;
                panda$core$Bit $tmp2386 = { $tmp2360 };
                bool $tmp2359 = $tmp2386.value;
                if ($tmp2359) goto $l2387;
                panda$core$Int64$init$builtin_int64(&$tmp2388, 69);
                panda$core$Bit $tmp2389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032_132358.$rawValue, $tmp2388);
                $tmp2359 = $tmp2389.value;
                $l2387:;
                panda$core$Bit $tmp2390 = { $tmp2359 };
                if ($tmp2390.value) {
                {
                    int $tmp2393;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2397 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2396 = $tmp2397;
                        $tmp2395 = $tmp2396;
                        next2394 = $tmp2395;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2395));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2396));
                        if (((panda$core$Bit) { next2394 == NULL }).value) {
                        {
                            $tmp2398 = NULL;
                            $returnValue2350 = $tmp2398;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2398));
                            $tmp2393 = 0;
                            goto $l2391;
                            $l2399:;
                            $tmp2345 = 1;
                            goto $l2343;
                            $l2400:;
                            return $returnValue2350;
                        }
                        }
                        {
                            $tmp2402 = result2346;
                            org$pandalanguage$pandac$ASTNode* $tmp2405 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2406, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2405, $tmp2406, op2356.position, result2346, op2356.kind, next2394);
                            $tmp2404 = $tmp2405;
                            $tmp2403 = $tmp2404;
                            result2346 = $tmp2403;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2403));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2404));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2402));
                        }
                    }
                    $tmp2393 = -1;
                    goto $l2391;
                    $l2391:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2394));
                    next2394 = NULL;
                    switch ($tmp2393) {
                        case 0: goto $l2399;
                        case -1: goto $l2407;
                    }
                    $l2407:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2408, 63);
                panda$core$Bit $tmp2409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1032_132358.$rawValue, $tmp2408);
                if ($tmp2409.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2411 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken2410 = $tmp2411;
                    panda$core$Int64$init$builtin_int64(&$tmp2412, 63);
                    panda$core$Bit $tmp2413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken2410.kind.$rawValue, $tmp2412);
                    if ($tmp2413.value) {
                    {
                        int $tmp2416;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2420 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2419 = $tmp2420;
                            $tmp2418 = $tmp2419;
                            next2417 = $tmp2418;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2418));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2419));
                            if (((panda$core$Bit) { next2417 == NULL }).value) {
                            {
                                $tmp2421 = NULL;
                                $returnValue2350 = $tmp2421;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2421));
                                $tmp2416 = 0;
                                goto $l2414;
                                $l2422:;
                                $tmp2345 = 2;
                                goto $l2343;
                                $l2423:;
                                return $returnValue2350;
                            }
                            }
                            {
                                $tmp2425 = result2346;
                                org$pandalanguage$pandac$ASTNode* $tmp2428 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp2429, 4);
                                panda$core$Int64$init$builtin_int64(&$tmp2431, 1);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2430, $tmp2431);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2428, $tmp2429, op2356.position, result2346, $tmp2430, next2417);
                                $tmp2427 = $tmp2428;
                                $tmp2426 = $tmp2427;
                                result2346 = $tmp2426;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2426));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2427));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2425));
                            }
                        }
                        $tmp2416 = -1;
                        goto $l2414;
                        $l2414:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2417));
                        next2417 = NULL;
                        switch ($tmp2416) {
                            case 0: goto $l2422;
                            case -1: goto $l2432;
                        }
                        $l2432:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken2410);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2356);
                        $tmp2433 = result2346;
                        $returnValue2350 = $tmp2433;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2433));
                        $tmp2345 = 3;
                        goto $l2343;
                        $l2434:;
                        return $returnValue2350;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2356);
                    $tmp2436 = result2346;
                    $returnValue2350 = $tmp2436;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2436));
                    $tmp2345 = 4;
                    goto $l2343;
                    $l2437:;
                    return $returnValue2350;
                }
                }
                }
            }
        }
        }
        $l2355:;
    }
    $tmp2345 = -1;
    goto $l2343;
    $l2343:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2346));
    result2346 = NULL;
    switch ($tmp2345) {
        case 3: goto $l2434;
        case 1: goto $l2400;
        case 4: goto $l2437;
        case -1: goto $l2439;
        case 2: goto $l2423;
        case 0: goto $l2352;
    }
    $l2439:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2443 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2444;
    org$pandalanguage$pandac$ASTNode* $tmp2445;
    org$pandalanguage$pandac$ASTNode* $returnValue2447;
    org$pandalanguage$pandac$ASTNode* $tmp2448;
    org$pandalanguage$pandac$parser$Token op2453;
    org$pandalanguage$pandac$parser$Token$Kind $match$1073_132455;
    panda$core$Int64 $tmp2458;
    panda$core$Int64 $tmp2461;
    panda$core$Int64 $tmp2465;
    org$pandalanguage$pandac$ASTNode* next2471 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2472;
    org$pandalanguage$pandac$ASTNode* $tmp2473;
    org$pandalanguage$pandac$ASTNode* $tmp2475;
    org$pandalanguage$pandac$ASTNode* $tmp2479;
    org$pandalanguage$pandac$ASTNode* $tmp2480;
    org$pandalanguage$pandac$ASTNode* $tmp2481;
    panda$core$Int64 $tmp2483;
    org$pandalanguage$pandac$ASTNode* $tmp2485;
    int $tmp2442;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2446 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2445 = $tmp2446;
        $tmp2444 = $tmp2445;
        result2443 = $tmp2444;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2444));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2445));
        if (((panda$core$Bit) { result2443 == NULL }).value) {
        {
            $tmp2448 = NULL;
            $returnValue2447 = $tmp2448;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2448));
            $tmp2442 = 0;
            goto $l2440;
            $l2449:;
            return $returnValue2447;
        }
        }
        $l2451:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2454 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2453 = $tmp2454;
            {
                $match$1073_132455 = op2453.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2458, 51);
                panda$core$Bit $tmp2459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1073_132455.$rawValue, $tmp2458);
                bool $tmp2457 = $tmp2459.value;
                if ($tmp2457) goto $l2460;
                panda$core$Int64$init$builtin_int64(&$tmp2461, 52);
                panda$core$Bit $tmp2462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1073_132455.$rawValue, $tmp2461);
                $tmp2457 = $tmp2462.value;
                $l2460:;
                panda$core$Bit $tmp2463 = { $tmp2457 };
                bool $tmp2456 = $tmp2463.value;
                if ($tmp2456) goto $l2464;
                panda$core$Int64$init$builtin_int64(&$tmp2465, 71);
                panda$core$Bit $tmp2466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1073_132455.$rawValue, $tmp2465);
                $tmp2456 = $tmp2466.value;
                $l2464:;
                panda$core$Bit $tmp2467 = { $tmp2456 };
                if ($tmp2467.value) {
                {
                    int $tmp2470;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2474 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2473 = $tmp2474;
                        $tmp2472 = $tmp2473;
                        next2471 = $tmp2472;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2472));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2473));
                        if (((panda$core$Bit) { next2471 == NULL }).value) {
                        {
                            $tmp2475 = NULL;
                            $returnValue2447 = $tmp2475;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2475));
                            $tmp2470 = 0;
                            goto $l2468;
                            $l2476:;
                            $tmp2442 = 1;
                            goto $l2440;
                            $l2477:;
                            return $returnValue2447;
                        }
                        }
                        {
                            $tmp2479 = result2443;
                            org$pandalanguage$pandac$ASTNode* $tmp2482 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2483, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2482, $tmp2483, op2453.position, result2443, op2453.kind, next2471);
                            $tmp2481 = $tmp2482;
                            $tmp2480 = $tmp2481;
                            result2443 = $tmp2480;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2480));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2481));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2479));
                        }
                    }
                    $tmp2470 = -1;
                    goto $l2468;
                    $l2468:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2471));
                    next2471 = NULL;
                    switch ($tmp2470) {
                        case 0: goto $l2476;
                        case -1: goto $l2484;
                    }
                    $l2484:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2453);
                    $tmp2485 = result2443;
                    $returnValue2447 = $tmp2485;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2485));
                    $tmp2442 = 2;
                    goto $l2440;
                    $l2486:;
                    return $returnValue2447;
                }
                }
            }
        }
        }
        $l2452:;
    }
    $tmp2442 = -1;
    goto $l2440;
    $l2440:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2443));
    result2443 = NULL;
    switch ($tmp2442) {
        case 1: goto $l2477;
        case -1: goto $l2488;
        case 2: goto $l2486;
        case 0: goto $l2449;
    }
    $l2488:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2492 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$1093_92493;
    panda$core$Int64 $tmp2496;
    panda$core$Int64 $tmp2499;
    org$pandalanguage$pandac$ASTNode* $tmp2502;
    org$pandalanguage$pandac$ASTNode* $tmp2503;
    org$pandalanguage$pandac$ASTNode* $tmp2504;
    org$pandalanguage$pandac$ASTNode* $tmp2505;
    org$pandalanguage$pandac$ASTNode* $tmp2506;
    org$pandalanguage$pandac$ASTNode* $returnValue2508;
    org$pandalanguage$pandac$ASTNode* $tmp2509;
    org$pandalanguage$pandac$parser$Token op2512;
    org$pandalanguage$pandac$parser$Token$Kind $match$1103_92514;
    panda$core$Int64 $tmp2516;
    panda$core$Int64 $tmp2519;
    org$pandalanguage$pandac$parser$Token next2525;
    org$pandalanguage$pandac$ASTNode* right2527 = NULL;
    panda$core$Int64 $tmp2530;
    panda$core$Int64 $tmp2533;
    panda$core$Int64 $tmp2537;
    org$pandalanguage$pandac$ASTNode* $tmp2540;
    org$pandalanguage$pandac$ASTNode* $tmp2541;
    org$pandalanguage$pandac$ASTNode* $tmp2542;
    org$pandalanguage$pandac$ASTNode* $tmp2544;
    org$pandalanguage$pandac$ASTNode* $tmp2548;
    org$pandalanguage$pandac$ASTNode* $tmp2549;
    org$pandalanguage$pandac$ASTNode* step2550 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2551;
    panda$core$Int64 $tmp2552;
    org$pandalanguage$pandac$ASTNode* $tmp2554;
    org$pandalanguage$pandac$ASTNode* $tmp2555;
    org$pandalanguage$pandac$ASTNode* $tmp2556;
    org$pandalanguage$pandac$ASTNode* $tmp2558;
    org$pandalanguage$pandac$ASTNode* $tmp2562;
    org$pandalanguage$pandac$ASTNode* $tmp2563;
    org$pandalanguage$pandac$ASTNode* $tmp2564;
    org$pandalanguage$pandac$ASTNode* $tmp2565;
    panda$core$Int64 $tmp2567;
    panda$core$Int64 $tmp2568;
    org$pandalanguage$pandac$ASTNode* $tmp2574;
    int $tmp2491;
    {
        memset(&result2492, 0, sizeof(result2492));
        {
            org$pandalanguage$pandac$parser$Token $tmp2494 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1093_92493 = $tmp2494.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2496, 97);
            panda$core$Bit $tmp2497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1093_92493.$rawValue, $tmp2496);
            bool $tmp2495 = $tmp2497.value;
            if ($tmp2495) goto $l2498;
            panda$core$Int64$init$builtin_int64(&$tmp2499, 96);
            panda$core$Bit $tmp2500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1093_92493.$rawValue, $tmp2499);
            $tmp2495 = $tmp2500.value;
            $l2498:;
            panda$core$Bit $tmp2501 = { $tmp2495 };
            if ($tmp2501.value) {
            {
                {
                    $tmp2502 = result2492;
                    $tmp2503 = NULL;
                    result2492 = $tmp2503;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2503));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2502));
                }
            }
            }
            else {
            {
                {
                    $tmp2504 = result2492;
                    org$pandalanguage$pandac$ASTNode* $tmp2507 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2506 = $tmp2507;
                    $tmp2505 = $tmp2506;
                    result2492 = $tmp2505;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2505));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2506));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2504));
                }
                if (((panda$core$Bit) { result2492 == NULL }).value) {
                {
                    $tmp2509 = NULL;
                    $returnValue2508 = $tmp2509;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2509));
                    $tmp2491 = 0;
                    goto $l2489;
                    $l2510:;
                    return $returnValue2508;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp2513 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op2512 = $tmp2513;
        {
            $match$1103_92514 = op2512.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2516, 97);
            panda$core$Bit $tmp2517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1103_92514.$rawValue, $tmp2516);
            bool $tmp2515 = $tmp2517.value;
            if ($tmp2515) goto $l2518;
            panda$core$Int64$init$builtin_int64(&$tmp2519, 96);
            panda$core$Bit $tmp2520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1103_92514.$rawValue, $tmp2519);
            $tmp2515 = $tmp2520.value;
            $l2518:;
            panda$core$Bit $tmp2521 = { $tmp2515 };
            if ($tmp2521.value) {
            {
                int $tmp2524;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2526 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next2525 = $tmp2526;
                    memset(&right2527, 0, sizeof(right2527));
                    panda$core$Int64$init$builtin_int64(&$tmp2530, 102);
                    panda$core$Bit $tmp2531 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2525.kind.$rawValue, $tmp2530);
                    bool $tmp2529 = $tmp2531.value;
                    if (!$tmp2529) goto $l2532;
                    panda$core$Int64$init$builtin_int64(&$tmp2533, 104);
                    panda$core$Bit $tmp2534 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2525.kind.$rawValue, $tmp2533);
                    $tmp2529 = $tmp2534.value;
                    $l2532:;
                    panda$core$Bit $tmp2535 = { $tmp2529 };
                    bool $tmp2528 = $tmp2535.value;
                    if (!$tmp2528) goto $l2536;
                    panda$core$Int64$init$builtin_int64(&$tmp2537, 33);
                    panda$core$Bit $tmp2538 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2525.kind.$rawValue, $tmp2537);
                    $tmp2528 = $tmp2538.value;
                    $l2536:;
                    panda$core$Bit $tmp2539 = { $tmp2528 };
                    if ($tmp2539.value) {
                    {
                        {
                            $tmp2540 = right2527;
                            org$pandalanguage$pandac$ASTNode* $tmp2543 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2542 = $tmp2543;
                            $tmp2541 = $tmp2542;
                            right2527 = $tmp2541;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2541));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2542));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2540));
                        }
                        if (((panda$core$Bit) { right2527 == NULL }).value) {
                        {
                            $tmp2544 = NULL;
                            $returnValue2508 = $tmp2544;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2544));
                            $tmp2524 = 0;
                            goto $l2522;
                            $l2545:;
                            $tmp2491 = 1;
                            goto $l2489;
                            $l2546:;
                            return $returnValue2508;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2548 = right2527;
                            $tmp2549 = NULL;
                            right2527 = $tmp2549;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2549));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2548));
                        }
                    }
                    }
                    memset(&step2550, 0, sizeof(step2550));
                    panda$core$Int64$init$builtin_int64(&$tmp2552, 33);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2551, $tmp2552);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2553 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2551);
                    if (((panda$core$Bit) { $tmp2553.nonnull }).value) {
                    {
                        {
                            $tmp2554 = step2550;
                            org$pandalanguage$pandac$ASTNode* $tmp2557 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2556 = $tmp2557;
                            $tmp2555 = $tmp2556;
                            step2550 = $tmp2555;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2555));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2556));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2554));
                        }
                        if (((panda$core$Bit) { step2550 == NULL }).value) {
                        {
                            $tmp2558 = NULL;
                            $returnValue2508 = $tmp2558;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2558));
                            $tmp2524 = 1;
                            goto $l2522;
                            $l2559:;
                            $tmp2491 = 2;
                            goto $l2489;
                            $l2560:;
                            return $returnValue2508;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2562 = step2550;
                            $tmp2563 = NULL;
                            step2550 = $tmp2563;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2563));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2562));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2566 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2567, 33);
                    panda$core$Int64$init$builtin_int64(&$tmp2568, 96);
                    panda$core$Bit $tmp2569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2512.kind.$rawValue, $tmp2568);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp2566, $tmp2567, op2512.position, result2492, right2527, $tmp2569, step2550);
                    $tmp2565 = $tmp2566;
                    $tmp2564 = $tmp2565;
                    $returnValue2508 = $tmp2564;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2564));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2565));
                    $tmp2524 = 2;
                    goto $l2522;
                    $l2570:;
                    $tmp2491 = 3;
                    goto $l2489;
                    $l2571:;
                    return $returnValue2508;
                }
                $l2522:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2550));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right2527));
                switch ($tmp2524) {
                    case 1: goto $l2559;
                    case 0: goto $l2545;
                    case 2: goto $l2570;
                }
                $l2573:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2512);
                $tmp2574 = result2492;
                $returnValue2508 = $tmp2574;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2574));
                $tmp2491 = 4;
                goto $l2489;
                $l2575:;
                return $returnValue2508;
            }
            }
        }
    }
    $tmp2491 = -1;
    goto $l2489;
    $l2489:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2492));
    switch ($tmp2491) {
        case -1: goto $l2577;
        case 1: goto $l2546;
        case 0: goto $l2510;
        case 2: goto $l2560;
        case 3: goto $l2571;
        case 4: goto $l2575;
    }
    $l2577:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2581 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2582;
    org$pandalanguage$pandac$ASTNode* $tmp2583;
    org$pandalanguage$pandac$ASTNode* $returnValue2585;
    org$pandalanguage$pandac$ASTNode* $tmp2586;
    org$pandalanguage$pandac$parser$Token op2591;
    org$pandalanguage$pandac$parser$Token$Kind $match$1146_132593;
    panda$core$Int64 $tmp2601;
    panda$core$Int64 $tmp2604;
    panda$core$Int64 $tmp2608;
    panda$core$Int64 $tmp2612;
    panda$core$Int64 $tmp2616;
    panda$core$Int64 $tmp2620;
    panda$core$Int64 $tmp2624;
    panda$core$Int64 $tmp2628;
    org$pandalanguage$pandac$ASTNode* next2634 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2635;
    org$pandalanguage$pandac$ASTNode* $tmp2636;
    org$pandalanguage$pandac$ASTNode* $tmp2638;
    org$pandalanguage$pandac$ASTNode* $tmp2642;
    org$pandalanguage$pandac$ASTNode* $tmp2643;
    org$pandalanguage$pandac$ASTNode* $tmp2644;
    panda$core$Int64 $tmp2646;
    org$pandalanguage$pandac$ASTNode* $tmp2648;
    int $tmp2580;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2584 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2583 = $tmp2584;
        $tmp2582 = $tmp2583;
        result2581 = $tmp2582;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2582));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2583));
        if (((panda$core$Bit) { result2581 == NULL }).value) {
        {
            $tmp2586 = NULL;
            $returnValue2585 = $tmp2586;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2586));
            $tmp2580 = 0;
            goto $l2578;
            $l2587:;
            return $returnValue2585;
        }
        }
        $l2589:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2592 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2591 = $tmp2592;
            {
                $match$1146_132593 = op2591.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2601, 58);
                panda$core$Bit $tmp2602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1146_132593.$rawValue, $tmp2601);
                bool $tmp2600 = $tmp2602.value;
                if ($tmp2600) goto $l2603;
                panda$core$Int64$init$builtin_int64(&$tmp2604, 59);
                panda$core$Bit $tmp2605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1146_132593.$rawValue, $tmp2604);
                $tmp2600 = $tmp2605.value;
                $l2603:;
                panda$core$Bit $tmp2606 = { $tmp2600 };
                bool $tmp2599 = $tmp2606.value;
                if ($tmp2599) goto $l2607;
                panda$core$Int64$init$builtin_int64(&$tmp2608, 60);
                panda$core$Bit $tmp2609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1146_132593.$rawValue, $tmp2608);
                $tmp2599 = $tmp2609.value;
                $l2607:;
                panda$core$Bit $tmp2610 = { $tmp2599 };
                bool $tmp2598 = $tmp2610.value;
                if ($tmp2598) goto $l2611;
                panda$core$Int64$init$builtin_int64(&$tmp2612, 61);
                panda$core$Bit $tmp2613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1146_132593.$rawValue, $tmp2612);
                $tmp2598 = $tmp2613.value;
                $l2611:;
                panda$core$Bit $tmp2614 = { $tmp2598 };
                bool $tmp2597 = $tmp2614.value;
                if ($tmp2597) goto $l2615;
                panda$core$Int64$init$builtin_int64(&$tmp2616, 62);
                panda$core$Bit $tmp2617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1146_132593.$rawValue, $tmp2616);
                $tmp2597 = $tmp2617.value;
                $l2615:;
                panda$core$Bit $tmp2618 = { $tmp2597 };
                bool $tmp2596 = $tmp2618.value;
                if ($tmp2596) goto $l2619;
                panda$core$Int64$init$builtin_int64(&$tmp2620, 63);
                panda$core$Bit $tmp2621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1146_132593.$rawValue, $tmp2620);
                $tmp2596 = $tmp2621.value;
                $l2619:;
                panda$core$Bit $tmp2622 = { $tmp2596 };
                bool $tmp2595 = $tmp2622.value;
                if ($tmp2595) goto $l2623;
                panda$core$Int64$init$builtin_int64(&$tmp2624, 64);
                panda$core$Bit $tmp2625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1146_132593.$rawValue, $tmp2624);
                $tmp2595 = $tmp2625.value;
                $l2623:;
                panda$core$Bit $tmp2626 = { $tmp2595 };
                bool $tmp2594 = $tmp2626.value;
                if ($tmp2594) goto $l2627;
                panda$core$Int64$init$builtin_int64(&$tmp2628, 65);
                panda$core$Bit $tmp2629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1146_132593.$rawValue, $tmp2628);
                $tmp2594 = $tmp2629.value;
                $l2627:;
                panda$core$Bit $tmp2630 = { $tmp2594 };
                if ($tmp2630.value) {
                {
                    int $tmp2633;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2637 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2636 = $tmp2637;
                        $tmp2635 = $tmp2636;
                        next2634 = $tmp2635;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2635));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2636));
                        if (((panda$core$Bit) { next2634 == NULL }).value) {
                        {
                            $tmp2638 = NULL;
                            $returnValue2585 = $tmp2638;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2638));
                            $tmp2633 = 0;
                            goto $l2631;
                            $l2639:;
                            $tmp2580 = 1;
                            goto $l2578;
                            $l2640:;
                            return $returnValue2585;
                        }
                        }
                        {
                            $tmp2642 = result2581;
                            org$pandalanguage$pandac$ASTNode* $tmp2645 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2646, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2645, $tmp2646, op2591.position, result2581, op2591.kind, next2634);
                            $tmp2644 = $tmp2645;
                            $tmp2643 = $tmp2644;
                            result2581 = $tmp2643;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2643));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2644));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2642));
                        }
                    }
                    $tmp2633 = -1;
                    goto $l2631;
                    $l2631:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2634));
                    next2634 = NULL;
                    switch ($tmp2633) {
                        case 0: goto $l2639;
                        case -1: goto $l2647;
                    }
                    $l2647:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2591);
                    $tmp2648 = result2581;
                    $returnValue2585 = $tmp2648;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2648));
                    $tmp2580 = 2;
                    goto $l2578;
                    $l2649:;
                    return $returnValue2585;
                }
                }
            }
        }
        }
        $l2590:;
    }
    $tmp2580 = -1;
    goto $l2578;
    $l2578:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2581));
    result2581 = NULL;
    switch ($tmp2580) {
        case -1: goto $l2651;
        case 2: goto $l2649;
        case 1: goto $l2640;
        case 0: goto $l2587;
    }
    $l2651:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2655 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2656;
    org$pandalanguage$pandac$ASTNode* $tmp2657;
    org$pandalanguage$pandac$ASTNode* $returnValue2659;
    org$pandalanguage$pandac$ASTNode* $tmp2660;
    org$pandalanguage$pandac$parser$Token op2665;
    org$pandalanguage$pandac$parser$Token$Kind $match$1177_132667;
    panda$core$Int64 $tmp2669;
    panda$core$Int64 $tmp2672;
    org$pandalanguage$pandac$ASTNode* next2678 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2679;
    org$pandalanguage$pandac$ASTNode* $tmp2680;
    org$pandalanguage$pandac$ASTNode* $tmp2682;
    org$pandalanguage$pandac$ASTNode* $tmp2686;
    org$pandalanguage$pandac$ASTNode* $tmp2687;
    org$pandalanguage$pandac$ASTNode* $tmp2688;
    panda$core$Int64 $tmp2690;
    org$pandalanguage$pandac$ASTNode* $tmp2692;
    int $tmp2654;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2658 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2657 = $tmp2658;
        $tmp2656 = $tmp2657;
        result2655 = $tmp2656;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2656));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2657));
        if (((panda$core$Bit) { result2655 == NULL }).value) {
        {
            $tmp2660 = NULL;
            $returnValue2659 = $tmp2660;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2660));
            $tmp2654 = 0;
            goto $l2652;
            $l2661:;
            return $returnValue2659;
        }
        }
        $l2663:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2666 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2665 = $tmp2666;
            {
                $match$1177_132667 = op2665.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2669, 66);
                panda$core$Bit $tmp2670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1177_132667.$rawValue, $tmp2669);
                bool $tmp2668 = $tmp2670.value;
                if ($tmp2668) goto $l2671;
                panda$core$Int64$init$builtin_int64(&$tmp2672, 70);
                panda$core$Bit $tmp2673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1177_132667.$rawValue, $tmp2672);
                $tmp2668 = $tmp2673.value;
                $l2671:;
                panda$core$Bit $tmp2674 = { $tmp2668 };
                if ($tmp2674.value) {
                {
                    int $tmp2677;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2681 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2680 = $tmp2681;
                        $tmp2679 = $tmp2680;
                        next2678 = $tmp2679;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2679));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2680));
                        if (((panda$core$Bit) { next2678 == NULL }).value) {
                        {
                            $tmp2682 = NULL;
                            $returnValue2659 = $tmp2682;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2682));
                            $tmp2677 = 0;
                            goto $l2675;
                            $l2683:;
                            $tmp2654 = 1;
                            goto $l2652;
                            $l2684:;
                            return $returnValue2659;
                        }
                        }
                        {
                            $tmp2686 = result2655;
                            org$pandalanguage$pandac$ASTNode* $tmp2689 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2690, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2689, $tmp2690, op2665.position, result2655, op2665.kind, next2678);
                            $tmp2688 = $tmp2689;
                            $tmp2687 = $tmp2688;
                            result2655 = $tmp2687;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2687));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2688));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2686));
                        }
                    }
                    $tmp2677 = -1;
                    goto $l2675;
                    $l2675:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2678));
                    next2678 = NULL;
                    switch ($tmp2677) {
                        case -1: goto $l2691;
                        case 0: goto $l2683;
                    }
                    $l2691:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2665);
                    $tmp2692 = result2655;
                    $returnValue2659 = $tmp2692;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2692));
                    $tmp2654 = 2;
                    goto $l2652;
                    $l2693:;
                    return $returnValue2659;
                }
                }
            }
        }
        }
        $l2664:;
    }
    $tmp2654 = -1;
    goto $l2652;
    $l2652:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2655));
    result2655 = NULL;
    switch ($tmp2654) {
        case 2: goto $l2693;
        case -1: goto $l2695;
        case 0: goto $l2661;
        case 1: goto $l2684;
    }
    $l2695:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2699 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2700;
    org$pandalanguage$pandac$ASTNode* $tmp2701;
    org$pandalanguage$pandac$ASTNode* $returnValue2703;
    org$pandalanguage$pandac$ASTNode* $tmp2704;
    org$pandalanguage$pandac$parser$Token$nullable op2712;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2713;
    panda$core$Int64 $tmp2714;
    org$pandalanguage$pandac$ASTNode* next2717 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2718;
    org$pandalanguage$pandac$ASTNode* $tmp2719;
    org$pandalanguage$pandac$ASTNode* $tmp2721;
    org$pandalanguage$pandac$ASTNode* $tmp2725;
    org$pandalanguage$pandac$ASTNode* $tmp2726;
    org$pandalanguage$pandac$ASTNode* $tmp2727;
    panda$core$Int64 $tmp2729;
    org$pandalanguage$pandac$ASTNode* $tmp2731;
    int $tmp2698;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2702 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2701 = $tmp2702;
        $tmp2700 = $tmp2701;
        result2699 = $tmp2700;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2700));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2701));
        if (((panda$core$Bit) { result2699 == NULL }).value) {
        {
            $tmp2704 = NULL;
            $returnValue2703 = $tmp2704;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2704));
            $tmp2698 = 0;
            goto $l2696;
            $l2705:;
            return $returnValue2703;
        }
        }
        $l2707:;
        while (true) {
        {
            int $tmp2711;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2714, 68);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2713, $tmp2714);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2715 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2713);
                op2712 = $tmp2715;
                if (((panda$core$Bit) { !op2712.nonnull }).value) {
                {
                    $tmp2711 = 0;
                    goto $l2709;
                    $l2716:;
                    goto $l2708;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2720 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2719 = $tmp2720;
                $tmp2718 = $tmp2719;
                next2717 = $tmp2718;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2718));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2719));
                if (((panda$core$Bit) { next2717 == NULL }).value) {
                {
                    $tmp2721 = NULL;
                    $returnValue2703 = $tmp2721;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2721));
                    $tmp2711 = 1;
                    goto $l2709;
                    $l2722:;
                    $tmp2698 = 1;
                    goto $l2696;
                    $l2723:;
                    return $returnValue2703;
                }
                }
                {
                    $tmp2725 = result2699;
                    org$pandalanguage$pandac$ASTNode* $tmp2728 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2729, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2728, $tmp2729, ((org$pandalanguage$pandac$parser$Token) op2712.value).position, result2699, ((org$pandalanguage$pandac$parser$Token) op2712.value).kind, next2717);
                    $tmp2727 = $tmp2728;
                    $tmp2726 = $tmp2727;
                    result2699 = $tmp2726;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2726));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2727));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2725));
                }
            }
            $tmp2711 = -1;
            goto $l2709;
            $l2709:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2717));
            next2717 = NULL;
            switch ($tmp2711) {
                case -1: goto $l2730;
                case 0: goto $l2716;
                case 1: goto $l2722;
            }
            $l2730:;
        }
        }
        $l2708:;
        $tmp2731 = result2699;
        $returnValue2703 = $tmp2731;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2731));
        $tmp2698 = 2;
        goto $l2696;
        $l2732:;
        return $returnValue2703;
    }
    $l2696:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2699));
    result2699 = NULL;
    switch ($tmp2698) {
        case 1: goto $l2723;
        case 2: goto $l2732;
        case 0: goto $l2705;
    }
    $l2734:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2738;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2739;
    panda$core$Int64 $tmp2740;
    org$pandalanguage$pandac$ASTNode* $returnValue2743;
    org$pandalanguage$pandac$ASTNode* $tmp2744;
    org$pandalanguage$pandac$ASTNode* test2747 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2748;
    org$pandalanguage$pandac$ASTNode* $tmp2749;
    org$pandalanguage$pandac$ASTNode* $tmp2751;
    panda$collections$ImmutableArray* ifTrue2754 = NULL;
    panda$collections$ImmutableArray* $tmp2755;
    panda$collections$ImmutableArray* $tmp2756;
    org$pandalanguage$pandac$ASTNode* $tmp2758;
    org$pandalanguage$pandac$ASTNode* ifFalse2761 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2762;
    panda$core$Int64 $tmp2763;
    panda$core$Int64 $tmp2766;
    org$pandalanguage$pandac$ASTNode* $tmp2768;
    org$pandalanguage$pandac$ASTNode* $tmp2769;
    org$pandalanguage$pandac$ASTNode* $tmp2770;
    org$pandalanguage$pandac$ASTNode* $tmp2772;
    org$pandalanguage$pandac$ASTNode* $tmp2775;
    org$pandalanguage$pandac$ASTNode* $tmp2776;
    org$pandalanguage$pandac$ASTNode* $tmp2777;
    org$pandalanguage$pandac$ASTNode* $tmp2779;
    org$pandalanguage$pandac$ASTNode* $tmp2782;
    org$pandalanguage$pandac$ASTNode* $tmp2783;
    org$pandalanguage$pandac$ASTNode* $tmp2784;
    org$pandalanguage$pandac$ASTNode* $tmp2785;
    panda$core$Int64 $tmp2787;
    int $tmp2737;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2740, 36);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2739, $tmp2740);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2742 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2739, &$s2741);
        start2738 = $tmp2742;
        if (((panda$core$Bit) { !start2738.nonnull }).value) {
        {
            $tmp2744 = NULL;
            $returnValue2743 = $tmp2744;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2744));
            $tmp2737 = 0;
            goto $l2735;
            $l2745:;
            return $returnValue2743;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2750 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2749 = $tmp2750;
        $tmp2748 = $tmp2749;
        test2747 = $tmp2748;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2748));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2749));
        if (((panda$core$Bit) { test2747 == NULL }).value) {
        {
            $tmp2751 = NULL;
            $returnValue2743 = $tmp2751;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2751));
            $tmp2737 = 1;
            goto $l2735;
            $l2752:;
            return $returnValue2743;
        }
        }
        panda$collections$ImmutableArray* $tmp2757 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2756 = $tmp2757;
        $tmp2755 = $tmp2756;
        ifTrue2754 = $tmp2755;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2755));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2756));
        if (((panda$core$Bit) { ifTrue2754 == NULL }).value) {
        {
            $tmp2758 = NULL;
            $returnValue2743 = $tmp2758;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2758));
            $tmp2737 = 2;
            goto $l2735;
            $l2759:;
            return $returnValue2743;
        }
        }
        memset(&ifFalse2761, 0, sizeof(ifFalse2761));
        panda$core$Int64$init$builtin_int64(&$tmp2763, 37);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2762, $tmp2763);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2764 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2762);
        if (((panda$core$Bit) { $tmp2764.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2765 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp2766, 36);
            panda$core$Bit $tmp2767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2765.kind.$rawValue, $tmp2766);
            if ($tmp2767.value) {
            {
                {
                    $tmp2768 = ifFalse2761;
                    org$pandalanguage$pandac$ASTNode* $tmp2771 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2770 = $tmp2771;
                    $tmp2769 = $tmp2770;
                    ifFalse2761 = $tmp2769;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2769));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2770));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2768));
                }
                if (((panda$core$Bit) { ifFalse2761 == NULL }).value) {
                {
                    $tmp2772 = NULL;
                    $returnValue2743 = $tmp2772;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2772));
                    $tmp2737 = 3;
                    goto $l2735;
                    $l2773:;
                    return $returnValue2743;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2775 = ifFalse2761;
                    org$pandalanguage$pandac$ASTNode* $tmp2778 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2777 = $tmp2778;
                    $tmp2776 = $tmp2777;
                    ifFalse2761 = $tmp2776;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2776));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2777));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2775));
                }
                if (((panda$core$Bit) { ifFalse2761 == NULL }).value) {
                {
                    $tmp2779 = NULL;
                    $returnValue2743 = $tmp2779;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2779));
                    $tmp2737 = 4;
                    goto $l2735;
                    $l2780:;
                    return $returnValue2743;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp2782 = ifFalse2761;
                $tmp2783 = NULL;
                ifFalse2761 = $tmp2783;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2783));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2782));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2786 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2787, 21);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2786, $tmp2787, ((org$pandalanguage$pandac$parser$Token) start2738.value).position, test2747, ifTrue2754, ifFalse2761);
        $tmp2785 = $tmp2786;
        $tmp2784 = $tmp2785;
        $returnValue2743 = $tmp2784;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2784));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2785));
        $tmp2737 = 5;
        goto $l2735;
        $l2788:;
        return $returnValue2743;
    }
    $l2735:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse2761));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue2754));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2747));
    test2747 = NULL;
    ifTrue2754 = NULL;
    switch ($tmp2737) {
        case 3: goto $l2773;
        case 2: goto $l2759;
        case 4: goto $l2780;
        case 1: goto $l2752;
        case 0: goto $l2745;
        case 5: goto $l2788;
    }
    $l2790:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp2791;
    panda$core$Int64 $tmp2792;
    org$pandalanguage$pandac$ASTNode* $returnValue2795;
    org$pandalanguage$pandac$ASTNode* $tmp2796;
    org$pandalanguage$pandac$ASTNode* $tmp2798;
    org$pandalanguage$pandac$ASTNode* $tmp2799;
    panda$core$Bit $tmp2800;
    panda$core$Int64$init$builtin_int64(&$tmp2792, 95);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2791, $tmp2792);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2794 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2791, &$s2793);
    if (((panda$core$Bit) { !$tmp2794.nonnull }).value) {
    {
        $tmp2796 = NULL;
        $returnValue2795 = $tmp2796;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2796));
        return $returnValue2795;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp2800, false);
    org$pandalanguage$pandac$ASTNode* $tmp2801 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2800);
    $tmp2799 = $tmp2801;
    $tmp2798 = $tmp2799;
    $returnValue2795 = $tmp2798;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2798));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2799));
    return $returnValue2795;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id2803;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2804;
    panda$core$Int64 $tmp2805;
    org$pandalanguage$pandac$ASTNode* $returnValue2808;
    org$pandalanguage$pandac$ASTNode* $tmp2809;
    panda$core$Int64 $tmp2812;
    org$pandalanguage$pandac$ASTNode* type2817 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2818;
    org$pandalanguage$pandac$ASTNode* $tmp2819;
    org$pandalanguage$pandac$ASTNode* $tmp2821;
    org$pandalanguage$pandac$ASTNode* $tmp2824;
    org$pandalanguage$pandac$ASTNode* $tmp2825;
    panda$core$Int64 $tmp2827;
    panda$core$String* $tmp2828;
    org$pandalanguage$pandac$ASTNode* $tmp2833;
    org$pandalanguage$pandac$ASTNode* $tmp2834;
    panda$core$Int64 $tmp2836;
    panda$core$String* $tmp2837;
    panda$core$Int64$init$builtin_int64(&$tmp2805, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2804, $tmp2805);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2807 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2804, &$s2806);
    id2803 = $tmp2807;
    if (((panda$core$Bit) { !id2803.nonnull }).value) {
    {
        $tmp2809 = NULL;
        $returnValue2808 = $tmp2809;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2809));
        return $returnValue2808;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2811 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Int64$init$builtin_int64(&$tmp2812, 95);
    panda$core$Bit $tmp2813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2811.kind.$rawValue, $tmp2812);
    if ($tmp2813.value) {
    {
        int $tmp2816;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2820 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2819 = $tmp2820;
            $tmp2818 = $tmp2819;
            type2817 = $tmp2818;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2818));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2819));
            if (((panda$core$Bit) { type2817 == NULL }).value) {
            {
                $tmp2821 = NULL;
                $returnValue2808 = $tmp2821;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2821));
                $tmp2816 = 0;
                goto $l2814;
                $l2822:;
                return $returnValue2808;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp2826 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp2827, 44);
            panda$core$String* $tmp2829 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2803.value));
            $tmp2828 = $tmp2829;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2826, $tmp2827, ((org$pandalanguage$pandac$parser$Token) id2803.value).position, $tmp2828, type2817);
            $tmp2825 = $tmp2826;
            $tmp2824 = $tmp2825;
            $returnValue2808 = $tmp2824;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2824));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2825));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2828));
            $tmp2816 = 1;
            goto $l2814;
            $l2830:;
            return $returnValue2808;
        }
        $l2814:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type2817));
        type2817 = NULL;
        switch ($tmp2816) {
            case 1: goto $l2830;
            case 0: goto $l2822;
        }
        $l2832:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2835 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp2836, 20);
    panda$core$String* $tmp2838 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2803.value));
    $tmp2837 = $tmp2838;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2835, $tmp2836, ((org$pandalanguage$pandac$parser$Token) id2803.value).position, $tmp2837);
    $tmp2834 = $tmp2835;
    $tmp2833 = $tmp2834;
    $returnValue2808 = $tmp2833;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2833));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2834));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2837));
    return $returnValue2808;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2843;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2844;
    panda$core$Int64 $tmp2845;
    org$pandalanguage$pandac$ASTNode* $returnValue2848;
    org$pandalanguage$pandac$ASTNode* $tmp2849;
    org$pandalanguage$pandac$ASTNode* t2852 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2853;
    org$pandalanguage$pandac$ASTNode* $tmp2854;
    org$pandalanguage$pandac$ASTNode* $tmp2856;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2859;
    panda$core$Int64 $tmp2860;
    org$pandalanguage$pandac$ASTNode* $tmp2863;
    org$pandalanguage$pandac$ASTNode* list2866 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2867;
    org$pandalanguage$pandac$ASTNode* $tmp2868;
    org$pandalanguage$pandac$ASTNode* $tmp2870;
    panda$collections$ImmutableArray* block2873 = NULL;
    panda$collections$ImmutableArray* $tmp2874;
    panda$collections$ImmutableArray* $tmp2875;
    org$pandalanguage$pandac$ASTNode* $tmp2877;
    org$pandalanguage$pandac$ASTNode* $tmp2880;
    org$pandalanguage$pandac$ASTNode* $tmp2881;
    panda$core$Int64 $tmp2883;
    int $tmp2842;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2845, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2844, $tmp2845);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2847 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2844, &$s2846);
        start2843 = $tmp2847;
        if (((panda$core$Bit) { !start2843.nonnull }).value) {
        {
            $tmp2849 = NULL;
            $returnValue2848 = $tmp2849;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2849));
            $tmp2842 = 0;
            goto $l2840;
            $l2850:;
            return $returnValue2848;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2855 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2854 = $tmp2855;
        $tmp2853 = $tmp2854;
        t2852 = $tmp2853;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2853));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2854));
        if (((panda$core$Bit) { t2852 == NULL }).value) {
        {
            $tmp2856 = NULL;
            $returnValue2848 = $tmp2856;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2856));
            $tmp2842 = 1;
            goto $l2840;
            $l2857:;
            return $returnValue2848;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2860, 34);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2859, $tmp2860);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2862 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2859, &$s2861);
        if (((panda$core$Bit) { !$tmp2862.nonnull }).value) {
        {
            $tmp2863 = NULL;
            $returnValue2848 = $tmp2863;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2863));
            $tmp2842 = 2;
            goto $l2840;
            $l2864:;
            return $returnValue2848;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2869 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2868 = $tmp2869;
        $tmp2867 = $tmp2868;
        list2866 = $tmp2867;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2867));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2868));
        if (((panda$core$Bit) { list2866 == NULL }).value) {
        {
            $tmp2870 = NULL;
            $returnValue2848 = $tmp2870;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2870));
            $tmp2842 = 3;
            goto $l2840;
            $l2871:;
            return $returnValue2848;
        }
        }
        panda$collections$ImmutableArray* $tmp2876 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2875 = $tmp2876;
        $tmp2874 = $tmp2875;
        block2873 = $tmp2874;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2874));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2875));
        if (((panda$core$Bit) { block2873 == NULL }).value) {
        {
            $tmp2877 = NULL;
            $returnValue2848 = $tmp2877;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2877));
            $tmp2842 = 4;
            goto $l2840;
            $l2878:;
            return $returnValue2848;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2882 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2883, 18);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2882, $tmp2883, ((org$pandalanguage$pandac$parser$Token) start2843.value).position, p_label, t2852, list2866, block2873);
        $tmp2881 = $tmp2882;
        $tmp2880 = $tmp2881;
        $returnValue2848 = $tmp2880;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2880));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2881));
        $tmp2842 = 5;
        goto $l2840;
        $l2884:;
        return $returnValue2848;
    }
    $l2840:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2873));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2866));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2852));
    t2852 = NULL;
    list2866 = NULL;
    block2873 = NULL;
    switch ($tmp2842) {
        case 1: goto $l2857;
        case 3: goto $l2871;
        case 4: goto $l2878;
        case 0: goto $l2850;
        case 5: goto $l2884;
        case 2: goto $l2864;
    }
    $l2886:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2890;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2891;
    panda$core$Int64 $tmp2892;
    org$pandalanguage$pandac$ASTNode* $returnValue2895;
    org$pandalanguage$pandac$ASTNode* $tmp2896;
    org$pandalanguage$pandac$ASTNode* test2899 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2900;
    org$pandalanguage$pandac$ASTNode* $tmp2901;
    org$pandalanguage$pandac$ASTNode* $tmp2903;
    panda$collections$ImmutableArray* body2906 = NULL;
    panda$collections$ImmutableArray* $tmp2907;
    panda$collections$ImmutableArray* $tmp2908;
    org$pandalanguage$pandac$ASTNode* $tmp2910;
    org$pandalanguage$pandac$ASTNode* $tmp2913;
    org$pandalanguage$pandac$ASTNode* $tmp2914;
    panda$core$Int64 $tmp2916;
    int $tmp2889;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2892, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2891, $tmp2892);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2894 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2891, &$s2893);
        start2890 = $tmp2894;
        if (((panda$core$Bit) { !start2890.nonnull }).value) {
        {
            $tmp2896 = NULL;
            $returnValue2895 = $tmp2896;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2896));
            $tmp2889 = 0;
            goto $l2887;
            $l2897:;
            return $returnValue2895;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2902 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2901 = $tmp2902;
        $tmp2900 = $tmp2901;
        test2899 = $tmp2900;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2900));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2901));
        if (((panda$core$Bit) { test2899 == NULL }).value) {
        {
            $tmp2903 = NULL;
            $returnValue2895 = $tmp2903;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2903));
            $tmp2889 = 1;
            goto $l2887;
            $l2904:;
            return $returnValue2895;
        }
        }
        panda$collections$ImmutableArray* $tmp2909 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2908 = $tmp2909;
        $tmp2907 = $tmp2908;
        body2906 = $tmp2907;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2907));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2908));
        if (((panda$core$Bit) { body2906 == NULL }).value) {
        {
            $tmp2910 = NULL;
            $returnValue2895 = $tmp2910;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2910));
            $tmp2889 = 2;
            goto $l2887;
            $l2911:;
            return $returnValue2895;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2915 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2916, 49);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2915, $tmp2916, ((org$pandalanguage$pandac$parser$Token) start2890.value).position, p_label, test2899, body2906);
        $tmp2914 = $tmp2915;
        $tmp2913 = $tmp2914;
        $returnValue2895 = $tmp2913;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2913));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2914));
        $tmp2889 = 3;
        goto $l2887;
        $l2917:;
        return $returnValue2895;
    }
    $l2887:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2906));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2899));
    test2899 = NULL;
    body2906 = NULL;
    switch ($tmp2889) {
        case 2: goto $l2911;
        case 1: goto $l2904;
        case 3: goto $l2917;
        case 0: goto $l2897;
    }
    $l2919:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2923;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2924;
    panda$core$Int64 $tmp2925;
    org$pandalanguage$pandac$ASTNode* $returnValue2928;
    org$pandalanguage$pandac$ASTNode* $tmp2929;
    panda$collections$ImmutableArray* body2932 = NULL;
    panda$collections$ImmutableArray* $tmp2933;
    panda$collections$ImmutableArray* $tmp2934;
    org$pandalanguage$pandac$ASTNode* $tmp2936;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2939;
    panda$core$Int64 $tmp2940;
    org$pandalanguage$pandac$ASTNode* $tmp2943;
    org$pandalanguage$pandac$ASTNode* test2946 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2947;
    org$pandalanguage$pandac$ASTNode* $tmp2948;
    org$pandalanguage$pandac$ASTNode* $tmp2950;
    org$pandalanguage$pandac$ASTNode* $tmp2953;
    org$pandalanguage$pandac$ASTNode* $tmp2954;
    panda$core$Int64 $tmp2956;
    int $tmp2922;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2925, 30);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2924, $tmp2925);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2927 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2924, &$s2926);
        start2923 = $tmp2927;
        if (((panda$core$Bit) { !start2923.nonnull }).value) {
        {
            $tmp2929 = NULL;
            $returnValue2928 = $tmp2929;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2929));
            $tmp2922 = 0;
            goto $l2920;
            $l2930:;
            return $returnValue2928;
        }
        }
        panda$collections$ImmutableArray* $tmp2935 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2934 = $tmp2935;
        $tmp2933 = $tmp2934;
        body2932 = $tmp2933;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2933));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2934));
        if (((panda$core$Bit) { body2932 == NULL }).value) {
        {
            $tmp2936 = NULL;
            $returnValue2928 = $tmp2936;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2936));
            $tmp2922 = 1;
            goto $l2920;
            $l2937:;
            return $returnValue2928;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2940, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2939, $tmp2940);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2942 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2939, &$s2941);
        if (((panda$core$Bit) { !$tmp2942.nonnull }).value) {
        {
            $tmp2943 = NULL;
            $returnValue2928 = $tmp2943;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2943));
            $tmp2922 = 2;
            goto $l2920;
            $l2944:;
            return $returnValue2928;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2949 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2948 = $tmp2949;
        $tmp2947 = $tmp2948;
        test2946 = $tmp2947;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2947));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2948));
        if (((panda$core$Bit) { test2946 == NULL }).value) {
        {
            $tmp2950 = NULL;
            $returnValue2928 = $tmp2950;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2950));
            $tmp2922 = 3;
            goto $l2920;
            $l2951:;
            return $returnValue2928;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2955 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2956, 14);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp2955, $tmp2956, ((org$pandalanguage$pandac$parser$Token) start2923.value).position, p_label, body2932, test2946);
        $tmp2954 = $tmp2955;
        $tmp2953 = $tmp2954;
        $returnValue2928 = $tmp2953;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2953));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2954));
        $tmp2922 = 4;
        goto $l2920;
        $l2957:;
        return $returnValue2928;
    }
    $l2920:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2946));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2932));
    body2932 = NULL;
    test2946 = NULL;
    switch ($tmp2922) {
        case 2: goto $l2944;
        case 4: goto $l2957;
        case 1: goto $l2937;
        case 0: goto $l2930;
        case 3: goto $l2951;
    }
    $l2959:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2963;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2964;
    panda$core$Int64 $tmp2965;
    org$pandalanguage$pandac$ASTNode* $returnValue2968;
    org$pandalanguage$pandac$ASTNode* $tmp2969;
    panda$collections$ImmutableArray* body2972 = NULL;
    panda$collections$ImmutableArray* $tmp2973;
    panda$collections$ImmutableArray* $tmp2974;
    org$pandalanguage$pandac$ASTNode* $tmp2976;
    org$pandalanguage$pandac$ASTNode* $tmp2979;
    org$pandalanguage$pandac$ASTNode* $tmp2980;
    panda$core$Int64 $tmp2982;
    int $tmp2962;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2965, 35);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2964, $tmp2965);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2967 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2964, &$s2966);
        start2963 = $tmp2967;
        if (((panda$core$Bit) { !start2963.nonnull }).value) {
        {
            $tmp2969 = NULL;
            $returnValue2968 = $tmp2969;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2969));
            $tmp2962 = 0;
            goto $l2960;
            $l2970:;
            return $returnValue2968;
        }
        }
        panda$collections$ImmutableArray* $tmp2975 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2974 = $tmp2975;
        $tmp2973 = $tmp2974;
        body2972 = $tmp2973;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2973));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2974));
        if (((panda$core$Bit) { body2972 == NULL }).value) {
        {
            $tmp2976 = NULL;
            $returnValue2968 = $tmp2976;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2976));
            $tmp2962 = 1;
            goto $l2960;
            $l2977:;
            return $returnValue2968;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2981 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2982, 24);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2981, $tmp2982, ((org$pandalanguage$pandac$parser$Token) start2963.value).position, p_label, body2972);
        $tmp2980 = $tmp2981;
        $tmp2979 = $tmp2980;
        $returnValue2968 = $tmp2979;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2979));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2980));
        $tmp2962 = 2;
        goto $l2960;
        $l2983:;
        return $returnValue2968;
    }
    $l2960:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2972));
    body2972 = NULL;
    switch ($tmp2962) {
        case 2: goto $l2983;
        case 0: goto $l2970;
        case 1: goto $l2977;
    }
    $l2985:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2989;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2990;
    panda$core$Int64 $tmp2991;
    org$pandalanguage$pandac$ASTNode* $returnValue2994;
    org$pandalanguage$pandac$ASTNode* $tmp2995;
    org$pandalanguage$pandac$ASTNode* expr2998 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2999;
    org$pandalanguage$pandac$ASTNode* $tmp3000;
    org$pandalanguage$pandac$ASTNode* $tmp3002;
    org$pandalanguage$pandac$ASTNode* message3005 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3006;
    panda$core$Int64 $tmp3007;
    org$pandalanguage$pandac$ASTNode* $tmp3009;
    org$pandalanguage$pandac$ASTNode* $tmp3010;
    org$pandalanguage$pandac$ASTNode* $tmp3011;
    org$pandalanguage$pandac$ASTNode* $tmp3013;
    org$pandalanguage$pandac$ASTNode* $tmp3016;
    org$pandalanguage$pandac$ASTNode* $tmp3017;
    org$pandalanguage$pandac$ASTNode* $tmp3018;
    org$pandalanguage$pandac$ASTNode* $tmp3019;
    panda$core$Int64 $tmp3021;
    int $tmp2988;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2991, 44);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2990, $tmp2991);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2993 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2990, &$s2992);
        start2989 = $tmp2993;
        if (((panda$core$Bit) { !start2989.nonnull }).value) {
        {
            $tmp2995 = NULL;
            $returnValue2994 = $tmp2995;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2995));
            $tmp2988 = 0;
            goto $l2986;
            $l2996:;
            return $returnValue2994;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3001 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3000 = $tmp3001;
        $tmp2999 = $tmp3000;
        expr2998 = $tmp2999;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2999));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3000));
        if (((panda$core$Bit) { expr2998 == NULL }).value) {
        {
            $tmp3002 = NULL;
            $returnValue2994 = $tmp3002;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3002));
            $tmp2988 = 1;
            goto $l2986;
            $l3003:;
            return $returnValue2994;
        }
        }
        memset(&message3005, 0, sizeof(message3005));
        panda$core$Int64$init$builtin_int64(&$tmp3007, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3006, $tmp3007);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3008 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3006);
        if (((panda$core$Bit) { $tmp3008.nonnull }).value) {
        {
            {
                $tmp3009 = message3005;
                org$pandalanguage$pandac$ASTNode* $tmp3012 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3011 = $tmp3012;
                $tmp3010 = $tmp3011;
                message3005 = $tmp3010;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3010));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3011));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3009));
            }
            if (((panda$core$Bit) { message3005 == NULL }).value) {
            {
                $tmp3013 = NULL;
                $returnValue2994 = $tmp3013;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3013));
                $tmp2988 = 2;
                goto $l2986;
                $l3014:;
                return $returnValue2994;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3016 = message3005;
                $tmp3017 = NULL;
                message3005 = $tmp3017;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3017));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3016));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3020 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3021, 1);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3020, $tmp3021, ((org$pandalanguage$pandac$parser$Token) start2989.value).position, expr2998, message3005);
        $tmp3019 = $tmp3020;
        $tmp3018 = $tmp3019;
        $returnValue2994 = $tmp3018;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3018));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3019));
        $tmp2988 = 3;
        goto $l2986;
        $l3022:;
        return $returnValue2994;
    }
    $l2986:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message3005));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2998));
    expr2998 = NULL;
    switch ($tmp2988) {
        case 3: goto $l3022;
        case 1: goto $l3003;
        case 2: goto $l3014;
        case 0: goto $l2996;
    }
    $l3024:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3035;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3036;
    panda$core$Int64 $tmp3037;
    org$pandalanguage$pandac$ASTNode* $returnValue3040;
    org$pandalanguage$pandac$ASTNode* $tmp3041;
    panda$core$Bit $tmp3045;
    panda$collections$Array* expressions3046 = NULL;
    panda$collections$Array* $tmp3047;
    panda$collections$Array* $tmp3048;
    org$pandalanguage$pandac$ASTNode* expr3050 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3051;
    org$pandalanguage$pandac$ASTNode* $tmp3052;
    panda$core$Bit $tmp3054;
    org$pandalanguage$pandac$ASTNode* $tmp3055;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3062;
    panda$core$Int64 $tmp3063;
    org$pandalanguage$pandac$ASTNode* $tmp3065;
    org$pandalanguage$pandac$ASTNode* $tmp3066;
    org$pandalanguage$pandac$ASTNode* $tmp3067;
    panda$core$Bit $tmp3069;
    org$pandalanguage$pandac$ASTNode* $tmp3070;
    panda$core$Bit $tmp3074;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3075;
    panda$core$Int64 $tmp3076;
    org$pandalanguage$pandac$ASTNode* $tmp3079;
    panda$collections$Array* statements3083 = NULL;
    panda$collections$Array* $tmp3084;
    panda$collections$Array* $tmp3085;
    org$pandalanguage$pandac$parser$Token$Kind $match$1417_133089;
    panda$core$Int64 $tmp3093;
    panda$core$Int64 $tmp3096;
    panda$core$Int64 $tmp3100;
    panda$core$Int64 $tmp3105;
    panda$core$Int64 $tmp3108;
    panda$core$Int64 $tmp3112;
    org$pandalanguage$pandac$ASTNode* stmt3118 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3119;
    org$pandalanguage$pandac$ASTNode* $tmp3120;
    org$pandalanguage$pandac$ASTNode* $tmp3122;
    org$pandalanguage$pandac$ASTNode* stmt3132 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3133;
    org$pandalanguage$pandac$ASTNode* $tmp3134;
    org$pandalanguage$pandac$ASTNode* $tmp3136;
    org$pandalanguage$pandac$ASTNode* $tmp3142;
    org$pandalanguage$pandac$ASTNode* $tmp3143;
    panda$core$Int64 $tmp3145;
    panda$collections$ImmutableArray* $tmp3146;
    panda$collections$ImmutableArray* $tmp3148;
    int $tmp3027;
    {
        if (self->allowLambdas.value) goto $l3028; else goto $l3029;
        $l3029:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3030, (panda$core$Int64) { 1390 }, &$s3031);
        abort();
        $l3028:;
        int $tmp3034;
        {
            panda$core$Int64$init$builtin_int64(&$tmp3037, 39);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3036, $tmp3037);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3039 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3036, &$s3038);
            start3035 = $tmp3039;
            if (((panda$core$Bit) { !start3035.nonnull }).value) {
            {
                $tmp3041 = NULL;
                $returnValue3040 = $tmp3041;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3041));
                $tmp3034 = 0;
                goto $l3032;
                $l3042:;
                $tmp3027 = 0;
                goto $l3025;
                $l3043:;
                return $returnValue3040;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp3045, false);
            self->allowLambdas = $tmp3045;
            panda$collections$Array* $tmp3049 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3049);
            $tmp3048 = $tmp3049;
            $tmp3047 = $tmp3048;
            expressions3046 = $tmp3047;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3047));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3048));
            org$pandalanguage$pandac$ASTNode* $tmp3053 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3052 = $tmp3053;
            $tmp3051 = $tmp3052;
            expr3050 = $tmp3051;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3051));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3052));
            if (((panda$core$Bit) { expr3050 == NULL }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp3054, true);
                self->allowLambdas = $tmp3054;
                $tmp3055 = NULL;
                $returnValue3040 = $tmp3055;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3055));
                $tmp3034 = 1;
                goto $l3032;
                $l3056:;
                $tmp3027 = 1;
                goto $l3025;
                $l3057:;
                return $returnValue3040;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions3046, ((panda$core$Object*) expr3050));
            $l3059:;
            panda$core$Int64$init$builtin_int64(&$tmp3063, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3062, $tmp3063);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3064 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3062);
            bool $tmp3061 = ((panda$core$Bit) { $tmp3064.nonnull }).value;
            if (!$tmp3061) goto $l3060;
            {
                {
                    $tmp3065 = expr3050;
                    org$pandalanguage$pandac$ASTNode* $tmp3068 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3067 = $tmp3068;
                    $tmp3066 = $tmp3067;
                    expr3050 = $tmp3066;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3066));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3067));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3065));
                }
                if (((panda$core$Bit) { expr3050 == NULL }).value) {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp3069, true);
                    self->allowLambdas = $tmp3069;
                    $tmp3070 = NULL;
                    $returnValue3040 = $tmp3070;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3070));
                    $tmp3034 = 2;
                    goto $l3032;
                    $l3071:;
                    $tmp3027 = 2;
                    goto $l3025;
                    $l3072:;
                    return $returnValue3040;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(expressions3046, ((panda$core$Object*) expr3050));
            }
            goto $l3059;
            $l3060:;
            panda$core$Bit$init$builtin_bit(&$tmp3074, true);
            self->allowLambdas = $tmp3074;
            panda$core$Int64$init$builtin_int64(&$tmp3076, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3075, $tmp3076);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3078 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3075, &$s3077);
            if (((panda$core$Bit) { !$tmp3078.nonnull }).value) {
            {
                $tmp3079 = NULL;
                $returnValue3040 = $tmp3079;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3079));
                $tmp3034 = 3;
                goto $l3032;
                $l3080:;
                $tmp3027 = 3;
                goto $l3025;
                $l3081:;
                return $returnValue3040;
            }
            }
            panda$collections$Array* $tmp3086 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3086);
            $tmp3085 = $tmp3086;
            $tmp3084 = $tmp3085;
            statements3083 = $tmp3084;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3084));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3085));
            $l3087:;
            while (true) {
            {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3090 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    $match$1417_133089 = $tmp3090.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp3093, 39);
                    panda$core$Bit $tmp3094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_133089.$rawValue, $tmp3093);
                    bool $tmp3092 = $tmp3094.value;
                    if ($tmp3092) goto $l3095;
                    panda$core$Int64$init$builtin_int64(&$tmp3096, 40);
                    panda$core$Bit $tmp3097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_133089.$rawValue, $tmp3096);
                    $tmp3092 = $tmp3097.value;
                    $l3095:;
                    panda$core$Bit $tmp3098 = { $tmp3092 };
                    bool $tmp3091 = $tmp3098.value;
                    if ($tmp3091) goto $l3099;
                    panda$core$Int64$init$builtin_int64(&$tmp3100, 100);
                    panda$core$Bit $tmp3101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_133089.$rawValue, $tmp3100);
                    $tmp3091 = $tmp3101.value;
                    $l3099:;
                    panda$core$Bit $tmp3102 = { $tmp3091 };
                    if ($tmp3102.value) {
                    {
                        goto $l3088;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3105, 28);
                    panda$core$Bit $tmp3106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_133089.$rawValue, $tmp3105);
                    bool $tmp3104 = $tmp3106.value;
                    if ($tmp3104) goto $l3107;
                    panda$core$Int64$init$builtin_int64(&$tmp3108, 29);
                    panda$core$Bit $tmp3109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_133089.$rawValue, $tmp3108);
                    $tmp3104 = $tmp3109.value;
                    $l3107:;
                    panda$core$Bit $tmp3110 = { $tmp3104 };
                    bool $tmp3103 = $tmp3110.value;
                    if ($tmp3103) goto $l3111;
                    panda$core$Int64$init$builtin_int64(&$tmp3112, 27);
                    panda$core$Bit $tmp3113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1417_133089.$rawValue, $tmp3112);
                    $tmp3103 = $tmp3113.value;
                    $l3111:;
                    panda$core$Bit $tmp3114 = { $tmp3103 };
                    if ($tmp3114.value) {
                    {
                        int $tmp3117;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp3121 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3120 = $tmp3121;
                            $tmp3119 = $tmp3120;
                            stmt3118 = $tmp3119;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3119));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3120));
                            if (((panda$core$Bit) { stmt3118 == NULL }).value) {
                            {
                                $tmp3122 = NULL;
                                $returnValue3040 = $tmp3122;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3122));
                                $tmp3117 = 0;
                                goto $l3115;
                                $l3123:;
                                $tmp3034 = 4;
                                goto $l3032;
                                $l3124:;
                                $tmp3027 = 4;
                                goto $l3025;
                                $l3125:;
                                return $returnValue3040;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements3083, ((panda$core$Object*) stmt3118));
                            $tmp3117 = 1;
                            goto $l3115;
                            $l3127:;
                            goto $l3088;
                        }
                        $l3115:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3118));
                        stmt3118 = NULL;
                        switch ($tmp3117) {
                            case 0: goto $l3123;
                            case 1: goto $l3127;
                        }
                        $l3128:;
                    }
                    }
                    else {
                    {
                        {
                            int $tmp3131;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp3135 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp3134 = $tmp3135;
                                $tmp3133 = $tmp3134;
                                stmt3132 = $tmp3133;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3133));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3134));
                                if (((panda$core$Bit) { stmt3132 == NULL }).value) {
                                {
                                    $tmp3136 = NULL;
                                    $returnValue3040 = $tmp3136;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3136));
                                    $tmp3131 = 0;
                                    goto $l3129;
                                    $l3137:;
                                    $tmp3034 = 5;
                                    goto $l3032;
                                    $l3138:;
                                    $tmp3027 = 5;
                                    goto $l3025;
                                    $l3139:;
                                    return $returnValue3040;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(statements3083, ((panda$core$Object*) stmt3132));
                            }
                            $tmp3131 = -1;
                            goto $l3129;
                            $l3129:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3132));
                            stmt3132 = NULL;
                            switch ($tmp3131) {
                                case -1: goto $l3141;
                                case 0: goto $l3137;
                            }
                            $l3141:;
                        }
                    }
                    }
                    }
                }
            }
            }
            $l3088:;
            org$pandalanguage$pandac$ASTNode* $tmp3144 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3145, 48);
            panda$collections$ImmutableArray* $tmp3147 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions3046);
            $tmp3146 = $tmp3147;
            panda$collections$ImmutableArray* $tmp3149 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements3083);
            $tmp3148 = $tmp3149;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3144, $tmp3145, ((org$pandalanguage$pandac$parser$Token) start3035.value).position, $tmp3146, $tmp3148);
            $tmp3143 = $tmp3144;
            $tmp3142 = $tmp3143;
            $returnValue3040 = $tmp3142;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3142));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3148));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3146));
            $tmp3034 = 6;
            goto $l3032;
            $l3150:;
            $tmp3027 = 6;
            goto $l3025;
            $l3151:;
            return $returnValue3040;
        }
        $l3032:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3083));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3050));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions3046));
        expressions3046 = NULL;
        expr3050 = NULL;
        statements3083 = NULL;
        switch ($tmp3034) {
            case 1: goto $l3056;
            case 5: goto $l3138;
            case 4: goto $l3124;
            case 0: goto $l3042;
            case 3: goto $l3080;
            case 6: goto $l3150;
            case 2: goto $l3071;
        }
        $l3153:;
    }
    $tmp3027 = -1;
    goto $l3025;
    $l3025:;
    if (self->allowLambdas.value) goto $l3155; else goto $l3156;
    $l3156:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3157, (panda$core$Int64) { 1390 }, &$s3158);
    abort();
    $l3155:;
    switch ($tmp3027) {
        case -1: goto $l3154;
        case 3: goto $l3081;
        case 0: goto $l3043;
        case 2: goto $l3072;
        case 6: goto $l3151;
        case 4: goto $l3125;
        case 5: goto $l3139;
        case 1: goto $l3057;
    }
    $l3154:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3162;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3163;
    panda$core$Int64 $tmp3164;
    org$pandalanguage$pandac$ASTNode* $returnValue3167;
    org$pandalanguage$pandac$ASTNode* $tmp3168;
    org$pandalanguage$pandac$ASTNode* expr3171 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3172;
    org$pandalanguage$pandac$ASTNode* $tmp3173;
    org$pandalanguage$pandac$ASTNode* $tmp3175;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3178;
    panda$core$Int64 $tmp3179;
    org$pandalanguage$pandac$ASTNode* $tmp3182;
    panda$collections$Array* whens3185 = NULL;
    panda$collections$Array* $tmp3186;
    panda$collections$Array* $tmp3187;
    panda$collections$Array* other3189 = NULL;
    panda$collections$Array* $tmp3190;
    org$pandalanguage$pandac$parser$Token token3193;
    org$pandalanguage$pandac$parser$Token$Kind $match$1458_133195;
    panda$core$Int64 $tmp3196;
    panda$core$Int64 $tmp3198;
    org$pandalanguage$pandac$ASTNode* w3203 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3204;
    org$pandalanguage$pandac$ASTNode* $tmp3205;
    org$pandalanguage$pandac$ASTNode* $tmp3207;
    panda$core$Int64 $tmp3212;
    org$pandalanguage$pandac$parser$Token o3214;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3216;
    panda$core$Int64 $tmp3217;
    org$pandalanguage$pandac$ASTNode* $tmp3220;
    panda$collections$Array* $tmp3223;
    panda$collections$Array* $tmp3224;
    panda$collections$Array* $tmp3225;
    org$pandalanguage$pandac$parser$Token$Kind $match$1474_253229;
    panda$core$Int64 $tmp3231;
    panda$core$Int64 $tmp3235;
    panda$core$Int64 $tmp3238;
    panda$core$Int64 $tmp3242;
    org$pandalanguage$pandac$ASTNode* stmt3248 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3249;
    org$pandalanguage$pandac$ASTNode* $tmp3250;
    org$pandalanguage$pandac$ASTNode* $tmp3252;
    org$pandalanguage$pandac$ASTNode* stmt3261 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3262;
    org$pandalanguage$pandac$ASTNode* $tmp3263;
    org$pandalanguage$pandac$ASTNode* $tmp3265;
    panda$core$String* $tmp3270;
    panda$core$String* $tmp3272;
    panda$core$String* $tmp3273;
    panda$core$String* $tmp3275;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3281;
    panda$core$Int64 $tmp3282;
    org$pandalanguage$pandac$ASTNode* $tmp3285;
    org$pandalanguage$pandac$ASTNode* $tmp3288;
    org$pandalanguage$pandac$ASTNode* $tmp3289;
    panda$core$Int64 $tmp3291;
    panda$collections$ImmutableArray* $tmp3292;
    panda$collections$ImmutableArray* $tmp3294;
    org$pandalanguage$pandac$ASTNode* $tmp3298;
    org$pandalanguage$pandac$ASTNode* $tmp3299;
    panda$core$Int64 $tmp3301;
    panda$collections$ImmutableArray* $tmp3302;
    int $tmp3161;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3164, 38);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3163, $tmp3164);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3166 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3163, &$s3165);
        start3162 = $tmp3166;
        if (((panda$core$Bit) { !start3162.nonnull }).value) {
        {
            $tmp3168 = NULL;
            $returnValue3167 = $tmp3168;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3168));
            $tmp3161 = 0;
            goto $l3159;
            $l3169:;
            return $returnValue3167;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3174 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3173 = $tmp3174;
        $tmp3172 = $tmp3173;
        expr3171 = $tmp3172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3173));
        if (((panda$core$Bit) { expr3171 == NULL }).value) {
        {
            $tmp3175 = NULL;
            $returnValue3167 = $tmp3175;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3175));
            $tmp3161 = 1;
            goto $l3159;
            $l3176:;
            return $returnValue3167;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3179, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3178, $tmp3179);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3181 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3178, &$s3180);
        if (((panda$core$Bit) { !$tmp3181.nonnull }).value) {
        {
            $tmp3182 = NULL;
            $returnValue3167 = $tmp3182;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3182));
            $tmp3161 = 2;
            goto $l3159;
            $l3183:;
            return $returnValue3167;
        }
        }
        panda$collections$Array* $tmp3188 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3188);
        $tmp3187 = $tmp3188;
        $tmp3186 = $tmp3187;
        whens3185 = $tmp3186;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3186));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3187));
        $tmp3190 = NULL;
        other3189 = $tmp3190;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3190));
        $l3191:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3194 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token3193 = $tmp3194;
            {
                $match$1458_133195 = token3193.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3196, 100);
                panda$core$Bit $tmp3197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1458_133195.$rawValue, $tmp3196);
                if ($tmp3197.value) {
                {
                    goto $l3192;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3198, 39);
                panda$core$Bit $tmp3199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1458_133195.$rawValue, $tmp3198);
                if ($tmp3199.value) {
                {
                    int $tmp3202;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3206 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3205 = $tmp3206;
                        $tmp3204 = $tmp3205;
                        w3203 = $tmp3204;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3204));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3205));
                        if (((panda$core$Bit) { w3203 == NULL }).value) {
                        {
                            $tmp3207 = NULL;
                            $returnValue3167 = $tmp3207;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3207));
                            $tmp3202 = 0;
                            goto $l3200;
                            $l3208:;
                            $tmp3161 = 3;
                            goto $l3159;
                            $l3209:;
                            return $returnValue3167;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens3185, ((panda$core$Object*) w3203));
                    }
                    $tmp3202 = -1;
                    goto $l3200;
                    $l3200:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3203));
                    w3203 = NULL;
                    switch ($tmp3202) {
                        case -1: goto $l3211;
                        case 0: goto $l3208;
                    }
                    $l3211:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3212, 40);
                panda$core$Bit $tmp3213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1458_133195.$rawValue, $tmp3212);
                if ($tmp3213.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3215 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o3214 = $tmp3215;
                    panda$core$Int64$init$builtin_int64(&$tmp3217, 95);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3216, $tmp3217);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3219 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3216, &$s3218);
                    if (((panda$core$Bit) { !$tmp3219.nonnull }).value) {
                    {
                        $tmp3220 = NULL;
                        $returnValue3167 = $tmp3220;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3220));
                        $tmp3161 = 4;
                        goto $l3159;
                        $l3221:;
                        return $returnValue3167;
                    }
                    }
                    {
                        $tmp3223 = other3189;
                        panda$collections$Array* $tmp3226 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp3226);
                        $tmp3225 = $tmp3226;
                        $tmp3224 = $tmp3225;
                        other3189 = $tmp3224;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3224));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3225));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3223));
                    }
                    $l3227:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp3230 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1474_253229 = $tmp3230.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp3231, 100);
                            panda$core$Bit $tmp3232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1474_253229.$rawValue, $tmp3231);
                            if ($tmp3232.value) {
                            {
                                goto $l3228;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp3235, 28);
                            panda$core$Bit $tmp3236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1474_253229.$rawValue, $tmp3235);
                            bool $tmp3234 = $tmp3236.value;
                            if ($tmp3234) goto $l3237;
                            panda$core$Int64$init$builtin_int64(&$tmp3238, 29);
                            panda$core$Bit $tmp3239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1474_253229.$rawValue, $tmp3238);
                            $tmp3234 = $tmp3239.value;
                            $l3237:;
                            panda$core$Bit $tmp3240 = { $tmp3234 };
                            bool $tmp3233 = $tmp3240.value;
                            if ($tmp3233) goto $l3241;
                            panda$core$Int64$init$builtin_int64(&$tmp3242, 27);
                            panda$core$Bit $tmp3243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1474_253229.$rawValue, $tmp3242);
                            $tmp3233 = $tmp3243.value;
                            $l3241:;
                            panda$core$Bit $tmp3244 = { $tmp3233 };
                            if ($tmp3244.value) {
                            {
                                int $tmp3247;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3251 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3250 = $tmp3251;
                                    $tmp3249 = $tmp3250;
                                    stmt3248 = $tmp3249;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3249));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3250));
                                    if (((panda$core$Bit) { stmt3248 == NULL }).value) {
                                    {
                                        $tmp3252 = NULL;
                                        $returnValue3167 = $tmp3252;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3252));
                                        $tmp3247 = 0;
                                        goto $l3245;
                                        $l3253:;
                                        $tmp3161 = 5;
                                        goto $l3159;
                                        $l3254:;
                                        return $returnValue3167;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3189, ((panda$core$Object*) stmt3248));
                                    $tmp3247 = 1;
                                    goto $l3245;
                                    $l3256:;
                                    goto $l3228;
                                }
                                $l3245:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3248));
                                stmt3248 = NULL;
                                switch ($tmp3247) {
                                    case 1: goto $l3256;
                                    case 0: goto $l3253;
                                }
                                $l3257:;
                            }
                            }
                            else {
                            {
                                int $tmp3260;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3264 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3263 = $tmp3264;
                                    $tmp3262 = $tmp3263;
                                    stmt3261 = $tmp3262;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3262));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3263));
                                    if (((panda$core$Bit) { stmt3261 == NULL }).value) {
                                    {
                                        $tmp3265 = NULL;
                                        $returnValue3167 = $tmp3265;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3265));
                                        $tmp3260 = 0;
                                        goto $l3258;
                                        $l3266:;
                                        $tmp3161 = 6;
                                        goto $l3159;
                                        $l3267:;
                                        return $returnValue3167;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3189, ((panda$core$Object*) stmt3261));
                                }
                                $tmp3260 = -1;
                                goto $l3258;
                                $l3258:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3261));
                                stmt3261 = NULL;
                                switch ($tmp3260) {
                                    case -1: goto $l3269;
                                    case 0: goto $l3266;
                                }
                                $l3269:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l3228:;
                    goto $l3192;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp3276 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3193);
                    $tmp3275 = $tmp3276;
                    panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3274, $tmp3275);
                    $tmp3273 = $tmp3277;
                    panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3273, &$s3278);
                    $tmp3272 = $tmp3279;
                    panda$core$String* $tmp3280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3271, $tmp3272);
                    $tmp3270 = $tmp3280;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token3193, $tmp3270);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3270));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3272));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3273));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3275));
                    goto $l3192;
                }
                }
                }
                }
            }
        }
        }
        $l3192:;
        panda$core$Int64$init$builtin_int64(&$tmp3282, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3281, $tmp3282);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3284 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3281, &$s3283);
        if (((panda$core$Bit) { !$tmp3284.nonnull }).value) {
        {
            $tmp3285 = NULL;
            $returnValue3167 = $tmp3285;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3285));
            $tmp3161 = 7;
            goto $l3159;
            $l3286:;
            return $returnValue3167;
        }
        }
        if (((panda$core$Bit) { other3189 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3290 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3291, 25);
            panda$collections$ImmutableArray* $tmp3293 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3185);
            $tmp3292 = $tmp3293;
            panda$collections$ImmutableArray* $tmp3295 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other3189);
            $tmp3294 = $tmp3295;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3290, $tmp3291, ((org$pandalanguage$pandac$parser$Token) start3162.value).position, expr3171, $tmp3292, $tmp3294);
            $tmp3289 = $tmp3290;
            $tmp3288 = $tmp3289;
            $returnValue3167 = $tmp3288;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3288));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3289));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3294));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3292));
            $tmp3161 = 8;
            goto $l3159;
            $l3296:;
            return $returnValue3167;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3300 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3301, 25);
        panda$collections$ImmutableArray* $tmp3303 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3185);
        $tmp3302 = $tmp3303;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3300, $tmp3301, ((org$pandalanguage$pandac$parser$Token) start3162.value).position, expr3171, $tmp3302, NULL);
        $tmp3299 = $tmp3300;
        $tmp3298 = $tmp3299;
        $returnValue3167 = $tmp3298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3299));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3302));
        $tmp3161 = 9;
        goto $l3159;
        $l3304:;
        return $returnValue3167;
    }
    $l3159:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other3189));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens3185));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3171));
    expr3171 = NULL;
    whens3185 = NULL;
    switch ($tmp3161) {
        case 9: goto $l3304;
        case 5: goto $l3254;
        case 7: goto $l3286;
        case 6: goto $l3267;
        case 2: goto $l3183;
        case 3: goto $l3209;
        case 1: goto $l3176;
        case 4: goto $l3221;
        case 0: goto $l3169;
        case 8: goto $l3296;
    }
    $l3306:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3310;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3311;
    panda$core$Int64 $tmp3312;
    panda$collections$ImmutableArray* $returnValue3315;
    panda$collections$ImmutableArray* $tmp3316;
    panda$collections$Array* result3319 = NULL;
    panda$collections$Array* $tmp3320;
    panda$collections$Array* $tmp3321;
    org$pandalanguage$pandac$parser$Token$Kind $match$1519_133325;
    panda$core$Int64 $tmp3327;
    panda$core$Int64 $tmp3331;
    panda$core$Int64 $tmp3334;
    panda$core$Int64 $tmp3338;
    org$pandalanguage$pandac$ASTNode* stmt3344 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3345;
    org$pandalanguage$pandac$ASTNode* $tmp3346;
    panda$collections$ImmutableArray* $tmp3348;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3352;
    panda$core$Int64 $tmp3353;
    panda$collections$ImmutableArray* $tmp3356;
    org$pandalanguage$pandac$ASTNode* stmt3365 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3366;
    org$pandalanguage$pandac$ASTNode* $tmp3367;
    panda$collections$ImmutableArray* $tmp3369;
    panda$collections$ImmutableArray* $tmp3374;
    panda$collections$ImmutableArray* $tmp3375;
    int $tmp3309;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3312, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3311, $tmp3312);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3314 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3311, &$s3313);
        start3310 = $tmp3314;
        if (((panda$core$Bit) { !start3310.nonnull }).value) {
        {
            $tmp3316 = NULL;
            $returnValue3315 = $tmp3316;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3316));
            $tmp3309 = 0;
            goto $l3307;
            $l3317:;
            return $returnValue3315;
        }
        }
        panda$collections$Array* $tmp3322 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3322);
        $tmp3321 = $tmp3322;
        $tmp3320 = $tmp3321;
        result3319 = $tmp3320;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3320));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3321));
        $l3323:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp3326 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1519_133325 = $tmp3326.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3327, 100);
                panda$core$Bit $tmp3328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1519_133325.$rawValue, $tmp3327);
                if ($tmp3328.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l3324;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3331, 28);
                panda$core$Bit $tmp3332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1519_133325.$rawValue, $tmp3331);
                bool $tmp3330 = $tmp3332.value;
                if ($tmp3330) goto $l3333;
                panda$core$Int64$init$builtin_int64(&$tmp3334, 29);
                panda$core$Bit $tmp3335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1519_133325.$rawValue, $tmp3334);
                $tmp3330 = $tmp3335.value;
                $l3333:;
                panda$core$Bit $tmp3336 = { $tmp3330 };
                bool $tmp3329 = $tmp3336.value;
                if ($tmp3329) goto $l3337;
                panda$core$Int64$init$builtin_int64(&$tmp3338, 27);
                panda$core$Bit $tmp3339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1519_133325.$rawValue, $tmp3338);
                $tmp3329 = $tmp3339.value;
                $l3337:;
                panda$core$Bit $tmp3340 = { $tmp3329 };
                if ($tmp3340.value) {
                {
                    int $tmp3343;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3347 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3346 = $tmp3347;
                        $tmp3345 = $tmp3346;
                        stmt3344 = $tmp3345;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3345));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3346));
                        if (((panda$core$Bit) { stmt3344 == NULL }).value) {
                        {
                            $tmp3348 = NULL;
                            $returnValue3315 = $tmp3348;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3348));
                            $tmp3343 = 0;
                            goto $l3341;
                            $l3349:;
                            $tmp3309 = 1;
                            goto $l3307;
                            $l3350:;
                            return $returnValue3315;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp3353, 100);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3352, $tmp3353);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp3355 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3352, &$s3354);
                        if (((panda$core$Bit) { !$tmp3355.nonnull }).value) {
                        {
                            $tmp3356 = NULL;
                            $returnValue3315 = $tmp3356;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3356));
                            $tmp3343 = 1;
                            goto $l3341;
                            $l3357:;
                            $tmp3309 = 2;
                            goto $l3307;
                            $l3358:;
                            return $returnValue3315;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3319, ((panda$core$Object*) stmt3344));
                        $tmp3343 = 2;
                        goto $l3341;
                        $l3360:;
                        goto $l3324;
                    }
                    $l3341:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3344));
                    stmt3344 = NULL;
                    switch ($tmp3343) {
                        case 2: goto $l3360;
                        case 0: goto $l3349;
                        case 1: goto $l3357;
                    }
                    $l3361:;
                }
                }
                else {
                {
                    int $tmp3364;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3368 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3367 = $tmp3368;
                        $tmp3366 = $tmp3367;
                        stmt3365 = $tmp3366;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3366));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3367));
                        if (((panda$core$Bit) { stmt3365 == NULL }).value) {
                        {
                            $tmp3369 = NULL;
                            $returnValue3315 = $tmp3369;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3369));
                            $tmp3364 = 0;
                            goto $l3362;
                            $l3370:;
                            $tmp3309 = 3;
                            goto $l3307;
                            $l3371:;
                            return $returnValue3315;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3319, ((panda$core$Object*) stmt3365));
                    }
                    $tmp3364 = -1;
                    goto $l3362;
                    $l3362:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3365));
                    stmt3365 = NULL;
                    switch ($tmp3364) {
                        case 0: goto $l3370;
                        case -1: goto $l3373;
                    }
                    $l3373:;
                }
                }
                }
            }
        }
        }
        $l3324:;
        panda$collections$ImmutableArray* $tmp3376 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3319);
        $tmp3375 = $tmp3376;
        $tmp3374 = $tmp3375;
        $returnValue3315 = $tmp3374;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3374));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3375));
        $tmp3309 = 4;
        goto $l3307;
        $l3377:;
        return $returnValue3315;
    }
    $l3307:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3319));
    result3319 = NULL;
    switch ($tmp3309) {
        case 2: goto $l3358;
        case 1: goto $l3350;
        case 4: goto $l3377;
        case 0: goto $l3317;
        case 3: goto $l3371;
    }
    $l3379:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements3383 = NULL;
    panda$collections$ImmutableArray* $tmp3384;
    panda$collections$ImmutableArray* $tmp3385;
    org$pandalanguage$pandac$ASTNode* $returnValue3387;
    org$pandalanguage$pandac$ASTNode* $tmp3388;
    org$pandalanguage$pandac$ASTNode* $tmp3391;
    org$pandalanguage$pandac$ASTNode* $tmp3392;
    panda$core$Int64 $tmp3394;
    org$pandalanguage$pandac$Position $tmp3395;
    int $tmp3382;
    {
        panda$collections$ImmutableArray* $tmp3386 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3385 = $tmp3386;
        $tmp3384 = $tmp3385;
        statements3383 = $tmp3384;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3384));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3385));
        if (((panda$core$Bit) { statements3383 == NULL }).value) {
        {
            $tmp3388 = NULL;
            $returnValue3387 = $tmp3388;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3388));
            $tmp3382 = 0;
            goto $l3380;
            $l3389:;
            return $returnValue3387;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3393 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3394, 6);
        org$pandalanguage$pandac$Position$init(&$tmp3395);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3393, $tmp3394, $tmp3395, statements3383);
        $tmp3392 = $tmp3393;
        $tmp3391 = $tmp3392;
        $returnValue3387 = $tmp3391;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3391));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3392));
        $tmp3382 = 1;
        goto $l3380;
        $l3396:;
        return $returnValue3387;
    }
    $l3380:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3383));
    statements3383 = NULL;
    switch ($tmp3382) {
        case 1: goto $l3396;
        case 0: goto $l3389;
    }
    $l3398:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start3402 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3403;
    org$pandalanguage$pandac$ASTNode* $tmp3404;
    org$pandalanguage$pandac$ASTNode* $returnValue3406;
    org$pandalanguage$pandac$ASTNode* $tmp3407;
    org$pandalanguage$pandac$parser$Token$Kind $match$1563_93410;
    panda$core$Int64 $tmp3427;
    panda$core$Int64 $tmp3430;
    panda$core$Int64 $tmp3434;
    panda$core$Int64 $tmp3438;
    panda$core$Int64 $tmp3442;
    panda$core$Int64 $tmp3446;
    panda$core$Int64 $tmp3450;
    panda$core$Int64 $tmp3454;
    panda$core$Int64 $tmp3458;
    panda$core$Int64 $tmp3462;
    panda$core$Int64 $tmp3466;
    panda$core$Int64 $tmp3470;
    panda$core$Int64 $tmp3474;
    panda$core$Int64 $tmp3478;
    panda$core$Int64 $tmp3482;
    panda$core$Int64 $tmp3486;
    org$pandalanguage$pandac$parser$Token op3492;
    org$pandalanguage$pandac$ASTNode* rvalue3494 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3495;
    org$pandalanguage$pandac$ASTNode* $tmp3496;
    org$pandalanguage$pandac$ASTNode* $tmp3498;
    org$pandalanguage$pandac$ASTNode* $tmp3502;
    org$pandalanguage$pandac$ASTNode* $tmp3503;
    panda$core$Int64 $tmp3505;
    panda$core$Int64 $tmp3512;
    org$pandalanguage$pandac$parser$Token op3519;
    org$pandalanguage$pandac$ASTNode* rvalue3521 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3522;
    org$pandalanguage$pandac$ASTNode* $tmp3523;
    org$pandalanguage$pandac$ASTNode* $tmp3525;
    org$pandalanguage$pandac$ASTNode* $tmp3529;
    org$pandalanguage$pandac$ASTNode* $tmp3530;
    panda$core$Int64 $tmp3532;
    org$pandalanguage$pandac$ASTNode* $tmp3539;
    int $tmp3401;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3405 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3404 = $tmp3405;
        $tmp3403 = $tmp3404;
        start3402 = $tmp3403;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3403));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3404));
        if (((panda$core$Bit) { start3402 == NULL }).value) {
        {
            $tmp3407 = NULL;
            $returnValue3406 = $tmp3407;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3407));
            $tmp3401 = 0;
            goto $l3399;
            $l3408:;
            return $returnValue3406;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3411 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1563_93410 = $tmp3411.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3427, 73);
            panda$core$Bit $tmp3428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3427);
            bool $tmp3426 = $tmp3428.value;
            if ($tmp3426) goto $l3429;
            panda$core$Int64$init$builtin_int64(&$tmp3430, 74);
            panda$core$Bit $tmp3431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3430);
            $tmp3426 = $tmp3431.value;
            $l3429:;
            panda$core$Bit $tmp3432 = { $tmp3426 };
            bool $tmp3425 = $tmp3432.value;
            if ($tmp3425) goto $l3433;
            panda$core$Int64$init$builtin_int64(&$tmp3434, 75);
            panda$core$Bit $tmp3435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3434);
            $tmp3425 = $tmp3435.value;
            $l3433:;
            panda$core$Bit $tmp3436 = { $tmp3425 };
            bool $tmp3424 = $tmp3436.value;
            if ($tmp3424) goto $l3437;
            panda$core$Int64$init$builtin_int64(&$tmp3438, 76);
            panda$core$Bit $tmp3439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3438);
            $tmp3424 = $tmp3439.value;
            $l3437:;
            panda$core$Bit $tmp3440 = { $tmp3424 };
            bool $tmp3423 = $tmp3440.value;
            if ($tmp3423) goto $l3441;
            panda$core$Int64$init$builtin_int64(&$tmp3442, 77);
            panda$core$Bit $tmp3443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3442);
            $tmp3423 = $tmp3443.value;
            $l3441:;
            panda$core$Bit $tmp3444 = { $tmp3423 };
            bool $tmp3422 = $tmp3444.value;
            if ($tmp3422) goto $l3445;
            panda$core$Int64$init$builtin_int64(&$tmp3446, 78);
            panda$core$Bit $tmp3447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3446);
            $tmp3422 = $tmp3447.value;
            $l3445:;
            panda$core$Bit $tmp3448 = { $tmp3422 };
            bool $tmp3421 = $tmp3448.value;
            if ($tmp3421) goto $l3449;
            panda$core$Int64$init$builtin_int64(&$tmp3450, 79);
            panda$core$Bit $tmp3451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3450);
            $tmp3421 = $tmp3451.value;
            $l3449:;
            panda$core$Bit $tmp3452 = { $tmp3421 };
            bool $tmp3420 = $tmp3452.value;
            if ($tmp3420) goto $l3453;
            panda$core$Int64$init$builtin_int64(&$tmp3454, 80);
            panda$core$Bit $tmp3455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3454);
            $tmp3420 = $tmp3455.value;
            $l3453:;
            panda$core$Bit $tmp3456 = { $tmp3420 };
            bool $tmp3419 = $tmp3456.value;
            if ($tmp3419) goto $l3457;
            panda$core$Int64$init$builtin_int64(&$tmp3458, 81);
            panda$core$Bit $tmp3459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3458);
            $tmp3419 = $tmp3459.value;
            $l3457:;
            panda$core$Bit $tmp3460 = { $tmp3419 };
            bool $tmp3418 = $tmp3460.value;
            if ($tmp3418) goto $l3461;
            panda$core$Int64$init$builtin_int64(&$tmp3462, 82);
            panda$core$Bit $tmp3463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3462);
            $tmp3418 = $tmp3463.value;
            $l3461:;
            panda$core$Bit $tmp3464 = { $tmp3418 };
            bool $tmp3417 = $tmp3464.value;
            if ($tmp3417) goto $l3465;
            panda$core$Int64$init$builtin_int64(&$tmp3466, 83);
            panda$core$Bit $tmp3467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3466);
            $tmp3417 = $tmp3467.value;
            $l3465:;
            panda$core$Bit $tmp3468 = { $tmp3417 };
            bool $tmp3416 = $tmp3468.value;
            if ($tmp3416) goto $l3469;
            panda$core$Int64$init$builtin_int64(&$tmp3470, 84);
            panda$core$Bit $tmp3471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3470);
            $tmp3416 = $tmp3471.value;
            $l3469:;
            panda$core$Bit $tmp3472 = { $tmp3416 };
            bool $tmp3415 = $tmp3472.value;
            if ($tmp3415) goto $l3473;
            panda$core$Int64$init$builtin_int64(&$tmp3474, 85);
            panda$core$Bit $tmp3475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3474);
            $tmp3415 = $tmp3475.value;
            $l3473:;
            panda$core$Bit $tmp3476 = { $tmp3415 };
            bool $tmp3414 = $tmp3476.value;
            if ($tmp3414) goto $l3477;
            panda$core$Int64$init$builtin_int64(&$tmp3478, 86);
            panda$core$Bit $tmp3479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3478);
            $tmp3414 = $tmp3479.value;
            $l3477:;
            panda$core$Bit $tmp3480 = { $tmp3414 };
            bool $tmp3413 = $tmp3480.value;
            if ($tmp3413) goto $l3481;
            panda$core$Int64$init$builtin_int64(&$tmp3482, 87);
            panda$core$Bit $tmp3483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3482);
            $tmp3413 = $tmp3483.value;
            $l3481:;
            panda$core$Bit $tmp3484 = { $tmp3413 };
            bool $tmp3412 = $tmp3484.value;
            if ($tmp3412) goto $l3485;
            panda$core$Int64$init$builtin_int64(&$tmp3486, 88);
            panda$core$Bit $tmp3487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3486);
            $tmp3412 = $tmp3487.value;
            $l3485:;
            panda$core$Bit $tmp3488 = { $tmp3412 };
            if ($tmp3488.value) {
            {
                int $tmp3491;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3493 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3492 = $tmp3493;
                    org$pandalanguage$pandac$ASTNode* $tmp3497 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3496 = $tmp3497;
                    $tmp3495 = $tmp3496;
                    rvalue3494 = $tmp3495;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3495));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3496));
                    if (((panda$core$Bit) { rvalue3494 == NULL }).value) {
                    {
                        $tmp3498 = NULL;
                        $returnValue3406 = $tmp3498;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3498));
                        $tmp3491 = 0;
                        goto $l3489;
                        $l3499:;
                        $tmp3401 = 1;
                        goto $l3399;
                        $l3500:;
                        return $returnValue3406;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3504 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3505, 4);
                    org$pandalanguage$pandac$Position $tmp3507 = (($fn3506) start3402->$class->vtable[2])(start3402);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3504, $tmp3505, $tmp3507, start3402, op3492.kind, rvalue3494);
                    $tmp3503 = $tmp3504;
                    $tmp3502 = $tmp3503;
                    $returnValue3406 = $tmp3502;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3502));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3503));
                    $tmp3491 = 1;
                    goto $l3489;
                    $l3508:;
                    $tmp3401 = 2;
                    goto $l3399;
                    $l3509:;
                    return $returnValue3406;
                }
                $l3489:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3494));
                rvalue3494 = NULL;
                switch ($tmp3491) {
                    case 1: goto $l3508;
                    case 0: goto $l3499;
                }
                $l3511:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3512, 58);
            panda$core$Bit $tmp3513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1563_93410.$rawValue, $tmp3512);
            if ($tmp3513.value) {
            {
                int $tmp3516;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3517 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3517, &$s3518);
                    org$pandalanguage$pandac$parser$Token $tmp3520 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3519 = $tmp3520;
                    org$pandalanguage$pandac$ASTNode* $tmp3524 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3523 = $tmp3524;
                    $tmp3522 = $tmp3523;
                    rvalue3521 = $tmp3522;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3522));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3523));
                    if (((panda$core$Bit) { rvalue3521 == NULL }).value) {
                    {
                        $tmp3525 = NULL;
                        $returnValue3406 = $tmp3525;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3525));
                        $tmp3516 = 0;
                        goto $l3514;
                        $l3526:;
                        $tmp3401 = 3;
                        goto $l3399;
                        $l3527:;
                        return $returnValue3406;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3531 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3532, 4);
                    org$pandalanguage$pandac$Position $tmp3534 = (($fn3533) start3402->$class->vtable[2])(start3402);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3531, $tmp3532, $tmp3534, start3402, op3519.kind, rvalue3521);
                    $tmp3530 = $tmp3531;
                    $tmp3529 = $tmp3530;
                    $returnValue3406 = $tmp3529;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3529));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3530));
                    $tmp3516 = 1;
                    goto $l3514;
                    $l3535:;
                    $tmp3401 = 4;
                    goto $l3399;
                    $l3536:;
                    return $returnValue3406;
                }
                $l3514:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3521));
                rvalue3521 = NULL;
                switch ($tmp3516) {
                    case 1: goto $l3535;
                    case 0: goto $l3526;
                }
                $l3538:;
            }
            }
            else {
            {
                $tmp3539 = start3402;
                $returnValue3406 = $tmp3539;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3539));
                $tmp3401 = 5;
                goto $l3399;
                $l3540:;
                return $returnValue3406;
            }
            }
            }
        }
    }
    $tmp3401 = -1;
    goto $l3399;
    $l3399:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start3402));
    start3402 = NULL;
    switch ($tmp3401) {
        case -1: goto $l3542;
        case 3: goto $l3527;
        case 1: goto $l3500;
        case 2: goto $l3509;
        case 4: goto $l3536;
        case 0: goto $l3408;
        case 5: goto $l3540;
    }
    $l3542:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t3546 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3547;
    org$pandalanguage$pandac$ASTNode* $tmp3548;
    org$pandalanguage$pandac$ASTNode* $returnValue3550;
    org$pandalanguage$pandac$ASTNode* $tmp3551;
    org$pandalanguage$pandac$ASTNode* value3554 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3555;
    panda$core$Int64 $tmp3556;
    org$pandalanguage$pandac$ASTNode* $tmp3558;
    org$pandalanguage$pandac$ASTNode* $tmp3559;
    org$pandalanguage$pandac$ASTNode* $tmp3560;
    org$pandalanguage$pandac$ASTNode* $tmp3562;
    panda$core$Int64 $tmp3566;
    org$pandalanguage$pandac$ASTNode* $tmp3570;
    org$pandalanguage$pandac$ASTNode* $tmp3571;
    org$pandalanguage$pandac$ASTNode* $tmp3572;
    org$pandalanguage$pandac$ASTNode* $tmp3574;
    org$pandalanguage$pandac$ASTNode* $tmp3577;
    org$pandalanguage$pandac$ASTNode* $tmp3578;
    org$pandalanguage$pandac$ASTNode* $tmp3579;
    org$pandalanguage$pandac$ASTNode* $tmp3580;
    panda$core$Int64 $tmp3582;
    int $tmp3545;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3549 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3548 = $tmp3549;
        $tmp3547 = $tmp3548;
        t3546 = $tmp3547;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3548));
        if (((panda$core$Bit) { t3546 == NULL }).value) {
        {
            $tmp3551 = NULL;
            $returnValue3550 = $tmp3551;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3551));
            $tmp3545 = 0;
            goto $l3543;
            $l3552:;
            return $returnValue3550;
        }
        }
        memset(&value3554, 0, sizeof(value3554));
        panda$core$Int64$init$builtin_int64(&$tmp3556, 73);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3555, $tmp3556);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3557 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3555);
        if (((panda$core$Bit) { $tmp3557.nonnull }).value) {
        {
            {
                $tmp3558 = value3554;
                org$pandalanguage$pandac$ASTNode* $tmp3561 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3560 = $tmp3561;
                $tmp3559 = $tmp3560;
                value3554 = $tmp3559;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3559));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3560));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3558));
            }
            if (((panda$core$Bit) { value3554 == NULL }).value) {
            {
                $tmp3562 = NULL;
                $returnValue3550 = $tmp3562;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3562));
                $tmp3545 = 1;
                goto $l3543;
                $l3563:;
                return $returnValue3550;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp3565 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3566, 58);
        panda$core$Bit $tmp3567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3565.kind.$rawValue, $tmp3566);
        if ($tmp3567.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3568 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3568, &$s3569);
            {
                $tmp3570 = value3554;
                org$pandalanguage$pandac$ASTNode* $tmp3573 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3572 = $tmp3573;
                $tmp3571 = $tmp3572;
                value3554 = $tmp3571;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3571));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3572));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3570));
            }
            if (((panda$core$Bit) { value3554 == NULL }).value) {
            {
                $tmp3574 = NULL;
                $returnValue3550 = $tmp3574;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3574));
                $tmp3545 = 2;
                goto $l3543;
                $l3575:;
                return $returnValue3550;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3577 = value3554;
                $tmp3578 = NULL;
                value3554 = $tmp3578;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3578));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3577));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3581 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3582, 13);
        org$pandalanguage$pandac$Position $tmp3584 = (($fn3583) t3546->$class->vtable[2])(t3546);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3581, $tmp3582, $tmp3584, t3546, value3554);
        $tmp3580 = $tmp3581;
        $tmp3579 = $tmp3580;
        $returnValue3550 = $tmp3579;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3579));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3580));
        $tmp3545 = 3;
        goto $l3543;
        $l3585:;
        return $returnValue3550;
    }
    $l3543:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value3554));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3546));
    t3546 = NULL;
    switch ($tmp3545) {
        case 1: goto $l3563;
        case 2: goto $l3575;
        case 3: goto $l3585;
        case 0: goto $l3552;
    }
    $l3587:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3591;
    org$pandalanguage$pandac$Variable$Kind kind3593;
    org$pandalanguage$pandac$parser$Token$Kind $match$1622_93594;
    panda$core$Int64 $tmp3595;
    org$pandalanguage$pandac$Variable$Kind $tmp3597;
    panda$core$Int64 $tmp3598;
    panda$core$Int64 $tmp3599;
    org$pandalanguage$pandac$Variable$Kind $tmp3601;
    panda$core$Int64 $tmp3602;
    panda$core$Int64 $tmp3603;
    org$pandalanguage$pandac$Variable$Kind $tmp3605;
    panda$core$Int64 $tmp3606;
    panda$core$Int64 $tmp3607;
    org$pandalanguage$pandac$Variable$Kind $tmp3609;
    panda$core$Int64 $tmp3610;
    panda$collections$Array* declarations3612 = NULL;
    panda$collections$Array* $tmp3613;
    panda$collections$Array* $tmp3614;
    org$pandalanguage$pandac$ASTNode* decl3616 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3617;
    org$pandalanguage$pandac$ASTNode* $tmp3618;
    org$pandalanguage$pandac$ASTNode* $returnValue3620;
    org$pandalanguage$pandac$ASTNode* $tmp3621;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3627;
    panda$core$Int64 $tmp3628;
    org$pandalanguage$pandac$ASTNode* decl3633 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3634;
    org$pandalanguage$pandac$ASTNode* $tmp3635;
    org$pandalanguage$pandac$ASTNode* $tmp3637;
    org$pandalanguage$pandac$ASTNode* $tmp3642;
    org$pandalanguage$pandac$ASTNode* $tmp3643;
    panda$core$Int64 $tmp3645;
    panda$collections$ImmutableArray* $tmp3646;
    int $tmp3590;
    {
        org$pandalanguage$pandac$parser$Token $tmp3592 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start3591 = $tmp3592;
        memset(&kind3593, 0, sizeof(kind3593));
        {
            $match$1622_93594 = start3591.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3595, 23);
            panda$core$Bit $tmp3596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1622_93594.$rawValue, $tmp3595);
            if ($tmp3596.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3598, 0);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3597, $tmp3598);
                kind3593 = $tmp3597;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3599, 24);
            panda$core$Bit $tmp3600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1622_93594.$rawValue, $tmp3599);
            if ($tmp3600.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3602, 1);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3601, $tmp3602);
                kind3593 = $tmp3601;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3603, 25);
            panda$core$Bit $tmp3604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1622_93594.$rawValue, $tmp3603);
            if ($tmp3604.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3606, 3);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3605, $tmp3606);
                kind3593 = $tmp3605;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3607, 26);
            panda$core$Bit $tmp3608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1622_93594.$rawValue, $tmp3607);
            if ($tmp3608.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3610, 2);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3609, $tmp3610);
                kind3593 = $tmp3609;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start3591, &$s3611);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp3615 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3615);
        $tmp3614 = $tmp3615;
        $tmp3613 = $tmp3614;
        declarations3612 = $tmp3613;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3613));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3614));
        org$pandalanguage$pandac$ASTNode* $tmp3619 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3618 = $tmp3619;
        $tmp3617 = $tmp3618;
        decl3616 = $tmp3617;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3617));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3618));
        if (((panda$core$Bit) { decl3616 == NULL }).value) {
        {
            $tmp3621 = NULL;
            $returnValue3620 = $tmp3621;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3621));
            $tmp3590 = 0;
            goto $l3588;
            $l3622:;
            return $returnValue3620;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations3612, ((panda$core$Object*) decl3616));
        $l3624:;
        panda$core$Int64$init$builtin_int64(&$tmp3628, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3627, $tmp3628);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3629 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3627);
        bool $tmp3626 = ((panda$core$Bit) { $tmp3629.nonnull }).value;
        if (!$tmp3626) goto $l3625;
        {
            int $tmp3632;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3636 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3635 = $tmp3636;
                $tmp3634 = $tmp3635;
                decl3633 = $tmp3634;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3634));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3635));
                if (((panda$core$Bit) { decl3633 == NULL }).value) {
                {
                    $tmp3637 = NULL;
                    $returnValue3620 = $tmp3637;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3637));
                    $tmp3632 = 0;
                    goto $l3630;
                    $l3638:;
                    $tmp3590 = 1;
                    goto $l3588;
                    $l3639:;
                    return $returnValue3620;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations3612, ((panda$core$Object*) decl3633));
            }
            $tmp3632 = -1;
            goto $l3630;
            $l3630:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3633));
            decl3633 = NULL;
            switch ($tmp3632) {
                case -1: goto $l3641;
                case 0: goto $l3638;
            }
            $l3641:;
        }
        goto $l3624;
        $l3625:;
        org$pandalanguage$pandac$ASTNode* $tmp3644 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3645, 47);
        panda$collections$ImmutableArray* $tmp3647 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations3612);
        $tmp3646 = $tmp3647;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3644, $tmp3645, start3591.position, kind3593, $tmp3646);
        $tmp3643 = $tmp3644;
        $tmp3642 = $tmp3643;
        $returnValue3620 = $tmp3642;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3642));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3643));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3646));
        $tmp3590 = 2;
        goto $l3588;
        $l3648:;
        return $returnValue3620;
    }
    $l3588:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3616));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations3612));
    declarations3612 = NULL;
    decl3616 = NULL;
    switch ($tmp3590) {
        case 1: goto $l3639;
        case 2: goto $l3648;
        case 0: goto $l3622;
    }
    $l3650:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3654;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3655;
    panda$core$Int64 $tmp3656;
    org$pandalanguage$pandac$ASTNode* $returnValue3659;
    org$pandalanguage$pandac$ASTNode* $tmp3660;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3663;
    panda$core$Int64 $tmp3664;
    org$pandalanguage$pandac$ASTNode* $tmp3667;
    panda$core$Object* $tmp3670;
    panda$core$Bit $tmp3671;
    org$pandalanguage$pandac$ASTNode* target3673 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3674;
    org$pandalanguage$pandac$ASTNode* $tmp3675;
    panda$core$Int64 $tmp3677;
    panda$core$String* $tmp3678;
    panda$collections$Array* args3680 = NULL;
    panda$collections$Array* $tmp3681;
    panda$collections$Array* $tmp3682;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3684;
    panda$core$Int64 $tmp3685;
    org$pandalanguage$pandac$ASTNode* expr3690 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3691;
    org$pandalanguage$pandac$ASTNode* $tmp3692;
    panda$core$Object* $tmp3694;
    org$pandalanguage$pandac$ASTNode* $tmp3696;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3703;
    panda$core$Int64 $tmp3704;
    org$pandalanguage$pandac$ASTNode* $tmp3706;
    org$pandalanguage$pandac$ASTNode* $tmp3707;
    org$pandalanguage$pandac$ASTNode* $tmp3708;
    panda$core$Object* $tmp3710;
    org$pandalanguage$pandac$ASTNode* $tmp3712;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3716;
    panda$core$Int64 $tmp3717;
    panda$core$Object* $tmp3720;
    org$pandalanguage$pandac$ASTNode* $tmp3722;
    panda$core$Object* $tmp3727;
    org$pandalanguage$pandac$ASTNode* $tmp3729;
    org$pandalanguage$pandac$ASTNode* $tmp3730;
    panda$core$Int64 $tmp3732;
    panda$collections$ImmutableArray* $tmp3733;
    int $tmp3653;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3656, 22);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3655, $tmp3656);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3658 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3655, &$s3657);
        start3654 = $tmp3658;
        if (((panda$core$Bit) { !start3654.nonnull }).value) {
        {
            $tmp3660 = NULL;
            $returnValue3659 = $tmp3660;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3660));
            $tmp3653 = 0;
            goto $l3651;
            $l3661:;
            return $returnValue3659;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3664, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3663, $tmp3664);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3666 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3663, &$s3665);
        if (((panda$core$Bit) { !$tmp3666.nonnull }).value) {
        {
            $tmp3667 = NULL;
            $returnValue3659 = $tmp3667;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3667));
            $tmp3653 = 1;
            goto $l3651;
            $l3668:;
            return $returnValue3659;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp3671, true);
        panda$core$Bit$wrapper* $tmp3672;
        $tmp3672 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp3672->value = $tmp3671;
        $tmp3670 = ((panda$core$Object*) $tmp3672);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp3670);
        panda$core$Panda$unref$panda$core$Object($tmp3670);
        org$pandalanguage$pandac$ASTNode* $tmp3676 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3677, 20);
        panda$core$String* $tmp3679 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3654.value));
        $tmp3678 = $tmp3679;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3676, $tmp3677, ((org$pandalanguage$pandac$parser$Token) start3654.value).position, $tmp3678);
        $tmp3675 = $tmp3676;
        $tmp3674 = $tmp3675;
        target3673 = $tmp3674;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3674));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3675));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3678));
        panda$collections$Array* $tmp3683 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3683);
        $tmp3682 = $tmp3683;
        $tmp3681 = $tmp3682;
        args3680 = $tmp3681;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3681));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3682));
        panda$core$Int64$init$builtin_int64(&$tmp3685, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3684, $tmp3685);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3686 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3684);
        if (((panda$core$Bit) { !$tmp3686.nonnull }).value) {
        {
            int $tmp3689;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3693 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3692 = $tmp3693;
                $tmp3691 = $tmp3692;
                expr3690 = $tmp3691;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3691));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3692));
                if (((panda$core$Bit) { expr3690 == NULL }).value) {
                {
                    panda$core$Object* $tmp3695 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3694 = $tmp3695;
                    panda$core$Panda$unref$panda$core$Object($tmp3694);
                    $tmp3696 = NULL;
                    $returnValue3659 = $tmp3696;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3696));
                    $tmp3689 = 0;
                    goto $l3687;
                    $l3697:;
                    $tmp3653 = 2;
                    goto $l3651;
                    $l3698:;
                    return $returnValue3659;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args3680, ((panda$core$Object*) expr3690));
                $l3700:;
                panda$core$Int64$init$builtin_int64(&$tmp3704, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3703, $tmp3704);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3705 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3703);
                bool $tmp3702 = ((panda$core$Bit) { $tmp3705.nonnull }).value;
                if (!$tmp3702) goto $l3701;
                {
                    {
                        $tmp3706 = expr3690;
                        org$pandalanguage$pandac$ASTNode* $tmp3709 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3708 = $tmp3709;
                        $tmp3707 = $tmp3708;
                        expr3690 = $tmp3707;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3707));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3708));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3706));
                    }
                    if (((panda$core$Bit) { expr3690 == NULL }).value) {
                    {
                        panda$core$Object* $tmp3711 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp3710 = $tmp3711;
                        panda$core$Panda$unref$panda$core$Object($tmp3710);
                        $tmp3712 = NULL;
                        $returnValue3659 = $tmp3712;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3712));
                        $tmp3689 = 1;
                        goto $l3687;
                        $l3713:;
                        $tmp3653 = 3;
                        goto $l3651;
                        $l3714:;
                        return $returnValue3659;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args3680, ((panda$core$Object*) expr3690));
                }
                goto $l3700;
                $l3701:;
                panda$core$Int64$init$builtin_int64(&$tmp3717, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3716, $tmp3717);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3719 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3716, &$s3718);
                if (((panda$core$Bit) { !$tmp3719.nonnull }).value) {
                {
                    panda$core$Object* $tmp3721 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3720 = $tmp3721;
                    panda$core$Panda$unref$panda$core$Object($tmp3720);
                    $tmp3722 = NULL;
                    $returnValue3659 = $tmp3722;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3722));
                    $tmp3689 = 2;
                    goto $l3687;
                    $l3723:;
                    $tmp3653 = 4;
                    goto $l3651;
                    $l3724:;
                    return $returnValue3659;
                }
                }
            }
            $tmp3689 = -1;
            goto $l3687;
            $l3687:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3690));
            expr3690 = NULL;
            switch ($tmp3689) {
                case -1: goto $l3726;
                case 1: goto $l3713;
                case 0: goto $l3697;
                case 2: goto $l3723;
            }
            $l3726:;
        }
        }
        panda$core$Object* $tmp3728 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp3727 = $tmp3728;
        panda$core$Panda$unref$panda$core$Object($tmp3727);
        org$pandalanguage$pandac$ASTNode* $tmp3731 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3732, 8);
        panda$collections$ImmutableArray* $tmp3734 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3680);
        $tmp3733 = $tmp3734;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3731, $tmp3732, ((org$pandalanguage$pandac$parser$Token) start3654.value).position, target3673, $tmp3733);
        $tmp3730 = $tmp3731;
        $tmp3729 = $tmp3730;
        $returnValue3659 = $tmp3729;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3729));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3730));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3733));
        $tmp3653 = 5;
        goto $l3651;
        $l3735:;
        return $returnValue3659;
    }
    $l3651:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args3680));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target3673));
    target3673 = NULL;
    args3680 = NULL;
    switch ($tmp3653) {
        case 4: goto $l3724;
        case 5: goto $l3735;
        case 3: goto $l3714;
        case 2: goto $l3698;
        case 0: goto $l3661;
        case 1: goto $l3668;
    }
    $l3737:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3738;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3739;
    panda$core$Int64 $tmp3740;
    org$pandalanguage$pandac$ASTNode* $returnValue3743;
    org$pandalanguage$pandac$ASTNode* $tmp3744;
    org$pandalanguage$pandac$parser$Token$nullable label3746;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3747;
    panda$core$Int64 $tmp3748;
    org$pandalanguage$pandac$ASTNode* $tmp3750;
    org$pandalanguage$pandac$ASTNode* $tmp3751;
    panda$core$Int64 $tmp3753;
    panda$core$String* $tmp3754;
    org$pandalanguage$pandac$ASTNode* $tmp3757;
    org$pandalanguage$pandac$ASTNode* $tmp3758;
    panda$core$Int64 $tmp3760;
    panda$core$Int64$init$builtin_int64(&$tmp3740, 28);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3739, $tmp3740);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3742 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3739, &$s3741);
    start3738 = $tmp3742;
    if (((panda$core$Bit) { !start3738.nonnull }).value) {
    {
        $tmp3744 = NULL;
        $returnValue3743 = $tmp3744;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3744));
        return $returnValue3743;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3748, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3747, $tmp3748);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3749 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3747);
    label3746 = $tmp3749;
    if (((panda$core$Bit) { label3746.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3752 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3753, 7);
        panda$core$String* $tmp3755 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3746.value));
        $tmp3754 = $tmp3755;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3752, $tmp3753, ((org$pandalanguage$pandac$parser$Token) start3738.value).position, $tmp3754);
        $tmp3751 = $tmp3752;
        $tmp3750 = $tmp3751;
        $returnValue3743 = $tmp3750;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3750));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3751));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3754));
        return $returnValue3743;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3759 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3760, 7);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3759, $tmp3760, ((org$pandalanguage$pandac$parser$Token) start3738.value).position, NULL);
    $tmp3758 = $tmp3759;
    $tmp3757 = $tmp3758;
    $returnValue3743 = $tmp3757;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3757));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3758));
    return $returnValue3743;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3762;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3763;
    panda$core$Int64 $tmp3764;
    org$pandalanguage$pandac$ASTNode* $returnValue3767;
    org$pandalanguage$pandac$ASTNode* $tmp3768;
    org$pandalanguage$pandac$parser$Token$nullable label3770;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3771;
    panda$core$Int64 $tmp3772;
    org$pandalanguage$pandac$ASTNode* $tmp3774;
    org$pandalanguage$pandac$ASTNode* $tmp3775;
    panda$core$Int64 $tmp3777;
    panda$core$String* $tmp3778;
    org$pandalanguage$pandac$ASTNode* $tmp3781;
    org$pandalanguage$pandac$ASTNode* $tmp3782;
    panda$core$Int64 $tmp3784;
    panda$core$Int64$init$builtin_int64(&$tmp3764, 29);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3763, $tmp3764);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3766 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3763, &$s3765);
    start3762 = $tmp3766;
    if (((panda$core$Bit) { !start3762.nonnull }).value) {
    {
        $tmp3768 = NULL;
        $returnValue3767 = $tmp3768;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3768));
        return $returnValue3767;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3772, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3771, $tmp3772);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3773 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3771);
    label3770 = $tmp3773;
    if (((panda$core$Bit) { label3770.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3776 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3777, 12);
        panda$core$String* $tmp3779 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3770.value));
        $tmp3778 = $tmp3779;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3776, $tmp3777, ((org$pandalanguage$pandac$parser$Token) start3762.value).position, $tmp3778);
        $tmp3775 = $tmp3776;
        $tmp3774 = $tmp3775;
        $returnValue3767 = $tmp3774;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3774));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3775));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3778));
        return $returnValue3767;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3783 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3784, 12);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3783, $tmp3784, ((org$pandalanguage$pandac$parser$Token) start3762.value).position, NULL);
    $tmp3782 = $tmp3783;
    $tmp3781 = $tmp3782;
    $returnValue3767 = $tmp3781;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3781));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3782));
    return $returnValue3767;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3786;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3787;
    panda$core$Int64 $tmp3788;
    org$pandalanguage$pandac$ASTNode* $returnValue3791;
    org$pandalanguage$pandac$ASTNode* $tmp3792;
    org$pandalanguage$pandac$parser$Token$Kind $match$1726_93794;
    panda$core$Int64 $tmp3798;
    panda$core$Int64 $tmp3801;
    panda$core$Int64 $tmp3805;
    org$pandalanguage$pandac$ASTNode* $tmp3808;
    org$pandalanguage$pandac$ASTNode* $tmp3809;
    panda$core$Int64 $tmp3811;
    panda$collections$Array* children3816 = NULL;
    panda$collections$Array* $tmp3817;
    panda$collections$Array* $tmp3818;
    org$pandalanguage$pandac$ASTNode* expr3820 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3821;
    org$pandalanguage$pandac$ASTNode* $tmp3822;
    org$pandalanguage$pandac$ASTNode* $tmp3824;
    org$pandalanguage$pandac$ASTNode* $tmp3827;
    org$pandalanguage$pandac$ASTNode* $tmp3828;
    panda$core$Int64 $tmp3830;
    panda$core$Int64$init$builtin_int64(&$tmp3788, 27);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3787, $tmp3788);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3790 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3787, &$s3789);
    start3786 = $tmp3790;
    if (((panda$core$Bit) { !start3786.nonnull }).value) {
    {
        $tmp3792 = NULL;
        $returnValue3791 = $tmp3792;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3792));
        return $returnValue3791;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp3795 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1726_93794 = $tmp3795.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3798, 100);
        panda$core$Bit $tmp3799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1726_93794.$rawValue, $tmp3798);
        bool $tmp3797 = $tmp3799.value;
        if ($tmp3797) goto $l3800;
        panda$core$Int64$init$builtin_int64(&$tmp3801, 39);
        panda$core$Bit $tmp3802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1726_93794.$rawValue, $tmp3801);
        $tmp3797 = $tmp3802.value;
        $l3800:;
        panda$core$Bit $tmp3803 = { $tmp3797 };
        bool $tmp3796 = $tmp3803.value;
        if ($tmp3796) goto $l3804;
        panda$core$Int64$init$builtin_int64(&$tmp3805, 40);
        panda$core$Bit $tmp3806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1726_93794.$rawValue, $tmp3805);
        $tmp3796 = $tmp3806.value;
        $l3804:;
        panda$core$Bit $tmp3807 = { $tmp3796 };
        if ($tmp3807.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3810 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3811, 36);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3810, $tmp3811, ((org$pandalanguage$pandac$parser$Token) start3786.value).position, NULL);
            $tmp3809 = $tmp3810;
            $tmp3808 = $tmp3809;
            $returnValue3791 = $tmp3808;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3808));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3809));
            return $returnValue3791;
        }
        }
        else {
        {
            int $tmp3815;
            {
                panda$collections$Array* $tmp3819 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp3819);
                $tmp3818 = $tmp3819;
                $tmp3817 = $tmp3818;
                children3816 = $tmp3817;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3817));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3818));
                org$pandalanguage$pandac$ASTNode* $tmp3823 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3822 = $tmp3823;
                $tmp3821 = $tmp3822;
                expr3820 = $tmp3821;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3821));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3822));
                if (((panda$core$Bit) { expr3820 == NULL }).value) {
                {
                    $tmp3824 = NULL;
                    $returnValue3791 = $tmp3824;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3824));
                    $tmp3815 = 0;
                    goto $l3813;
                    $l3825:;
                    return $returnValue3791;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3816, ((panda$core$Object*) expr3820));
                org$pandalanguage$pandac$ASTNode* $tmp3829 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp3830, 36);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3829, $tmp3830, ((org$pandalanguage$pandac$parser$Token) start3786.value).position, expr3820);
                $tmp3828 = $tmp3829;
                $tmp3827 = $tmp3828;
                $returnValue3791 = $tmp3827;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3827));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3828));
                $tmp3815 = 1;
                goto $l3813;
                $l3831:;
                return $returnValue3791;
            }
            $l3813:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3820));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children3816));
            children3816 = NULL;
            expr3820 = NULL;
            switch ($tmp3815) {
                case 1: goto $l3831;
                case 0: goto $l3825;
            }
            $l3833:;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1744_93834;
    panda$core$Int64 $tmp3836;
    org$pandalanguage$pandac$ASTNode* $returnValue3838;
    org$pandalanguage$pandac$ASTNode* $tmp3839;
    org$pandalanguage$pandac$ASTNode* $tmp3840;
    panda$core$Int64 $tmp3843;
    org$pandalanguage$pandac$ASTNode* $tmp3845;
    org$pandalanguage$pandac$ASTNode* $tmp3846;
    panda$core$Int64 $tmp3849;
    org$pandalanguage$pandac$ASTNode* $tmp3851;
    org$pandalanguage$pandac$ASTNode* $tmp3852;
    panda$core$Bit $tmp3855;
    {
        org$pandalanguage$pandac$parser$Token $tmp3835 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1744_93834 = $tmp3835.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3836, 28);
        panda$core$Bit $tmp3837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1744_93834.$rawValue, $tmp3836);
        if ($tmp3837.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3841 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3840 = $tmp3841;
            $tmp3839 = $tmp3840;
            $returnValue3838 = $tmp3839;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3839));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3840));
            return $returnValue3838;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3843, 29);
        panda$core$Bit $tmp3844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1744_93834.$rawValue, $tmp3843);
        if ($tmp3844.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3847 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3846 = $tmp3847;
            $tmp3845 = $tmp3846;
            $returnValue3838 = $tmp3845;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3845));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3846));
            return $returnValue3838;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3849, 27);
        panda$core$Bit $tmp3850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1744_93834.$rawValue, $tmp3849);
        if ($tmp3850.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3853 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3852 = $tmp3853;
            $tmp3851 = $tmp3852;
            $returnValue3838 = $tmp3851;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3851));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3852));
            return $returnValue3838;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp3855, false);
            if ($tmp3855.value) goto $l3856; else goto $l3857;
            $l3857:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3858, (panda$core$Int64) { 1748 });
            abort();
            $l3856:;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1756_93859;
    panda$core$Int64 $tmp3861;
    org$pandalanguage$pandac$ASTNode* $returnValue3863;
    org$pandalanguage$pandac$ASTNode* $tmp3864;
    org$pandalanguage$pandac$ASTNode* $tmp3865;
    panda$core$Int64 $tmp3868;
    org$pandalanguage$pandac$ASTNode* $tmp3870;
    org$pandalanguage$pandac$ASTNode* $tmp3871;
    panda$core$Int64 $tmp3874;
    org$pandalanguage$pandac$ASTNode* $tmp3876;
    org$pandalanguage$pandac$ASTNode* $tmp3877;
    panda$core$Int64 $tmp3880;
    org$pandalanguage$pandac$ASTNode* $tmp3882;
    org$pandalanguage$pandac$ASTNode* $tmp3883;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3886;
    panda$core$Int64 $tmp3887;
    org$pandalanguage$pandac$ASTNode* $tmp3889;
    {
        org$pandalanguage$pandac$parser$Token $tmp3860 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1756_93859 = $tmp3860.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3861, 30);
        panda$core$Bit $tmp3862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1756_93859.$rawValue, $tmp3861);
        if ($tmp3862.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3866 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3865 = $tmp3866;
            $tmp3864 = $tmp3865;
            $returnValue3863 = $tmp3864;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3864));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3865));
            return $returnValue3863;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3868, 32);
        panda$core$Bit $tmp3869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1756_93859.$rawValue, $tmp3868);
        if ($tmp3869.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3872 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3871 = $tmp3872;
            $tmp3870 = $tmp3871;
            $returnValue3863 = $tmp3870;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3870));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3871));
            return $returnValue3863;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3874, 35);
        panda$core$Bit $tmp3875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1756_93859.$rawValue, $tmp3874);
        if ($tmp3875.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3878 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3877 = $tmp3878;
            $tmp3876 = $tmp3877;
            $returnValue3863 = $tmp3876;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3876));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3877));
            return $returnValue3863;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3880, 31);
        panda$core$Bit $tmp3881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1756_93859.$rawValue, $tmp3880);
        if ($tmp3881.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3884 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3883 = $tmp3884;
            $tmp3882 = $tmp3883;
            $returnValue3863 = $tmp3882;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3882));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3883));
            return $returnValue3863;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3887, 30);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3886, $tmp3887);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3886, &$s3888);
            $tmp3889 = NULL;
            $returnValue3863 = $tmp3889;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3889));
            return $returnValue3863;
        }
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3894;
    org$pandalanguage$pandac$parser$Token$nullable start3895;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3896;
    panda$core$Int64 $tmp3897;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3899;
    panda$core$Int64 $tmp3900;
    org$pandalanguage$pandac$ASTNode* $returnValue3903;
    org$pandalanguage$pandac$ASTNode* $tmp3904;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3907;
    panda$core$Int64 $tmp3908;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3909;
    panda$core$Int64 $tmp3910;
    org$pandalanguage$pandac$parser$Token$nullable name3911;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3912;
    panda$core$Int64 $tmp3913;
    org$pandalanguage$pandac$ASTNode* $tmp3916;
    panda$collections$ImmutableArray* params3919 = NULL;
    panda$collections$ImmutableArray* $tmp3920;
    panda$collections$ImmutableArray* $tmp3921;
    org$pandalanguage$pandac$ASTNode* $tmp3923;
    org$pandalanguage$pandac$ASTNode* returnType3926 = NULL;
    panda$core$Int64 $tmp3928;
    org$pandalanguage$pandac$ASTNode* $tmp3930;
    org$pandalanguage$pandac$ASTNode* $tmp3931;
    org$pandalanguage$pandac$ASTNode* $tmp3932;
    org$pandalanguage$pandac$ASTNode* $tmp3934;
    org$pandalanguage$pandac$ASTNode* $tmp3937;
    org$pandalanguage$pandac$ASTNode* $tmp3938;
    panda$collections$ImmutableArray* body3939 = NULL;
    panda$collections$ImmutableArray* $tmp3940;
    panda$collections$ImmutableArray* $tmp3941;
    org$pandalanguage$pandac$ASTNode* $tmp3943;
    org$pandalanguage$pandac$ASTNode* $tmp3946;
    org$pandalanguage$pandac$ASTNode* $tmp3947;
    panda$core$Int64 $tmp3949;
    panda$collections$ImmutableArray* $tmp3950;
    panda$core$String* $tmp3952;
    int $tmp3893;
    {
        memset(&kind3894, 0, sizeof(kind3894));
        panda$core$Int64$init$builtin_int64(&$tmp3897, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3896, $tmp3897);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3898 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3896);
        start3895 = $tmp3898;
        if (((panda$core$Bit) { !start3895.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3900, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3899, $tmp3900);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3902 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3899, &$s3901);
            start3895 = $tmp3902;
            if (((panda$core$Bit) { !start3895.nonnull }).value) {
            {
                $tmp3904 = NULL;
                $returnValue3903 = $tmp3904;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3904));
                $tmp3893 = 0;
                goto $l3891;
                $l3905:;
                return $returnValue3903;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp3908, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3907, $tmp3908);
            kind3894 = $tmp3907;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3910, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3909, $tmp3910);
            kind3894 = $tmp3909;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3913, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3912, $tmp3913);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3915 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3912, &$s3914);
        name3911 = $tmp3915;
        if (((panda$core$Bit) { !name3911.nonnull }).value) {
        {
            $tmp3916 = NULL;
            $returnValue3903 = $tmp3916;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3916));
            $tmp3893 = 1;
            goto $l3891;
            $l3917:;
            return $returnValue3903;
        }
        }
        panda$collections$ImmutableArray* $tmp3922 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3921 = $tmp3922;
        $tmp3920 = $tmp3921;
        params3919 = $tmp3920;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3920));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3921));
        if (((panda$core$Bit) { params3919 == NULL }).value) {
        {
            $tmp3923 = NULL;
            $returnValue3903 = $tmp3923;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3923));
            $tmp3893 = 2;
            goto $l3891;
            $l3924:;
            return $returnValue3903;
        }
        }
        memset(&returnType3926, 0, sizeof(returnType3926));
        org$pandalanguage$pandac$parser$Token $tmp3927 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3928, 95);
        panda$core$Bit $tmp3929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3927.kind.$rawValue, $tmp3928);
        if ($tmp3929.value) {
        {
            {
                $tmp3930 = returnType3926;
                org$pandalanguage$pandac$ASTNode* $tmp3933 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3932 = $tmp3933;
                $tmp3931 = $tmp3932;
                returnType3926 = $tmp3931;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3931));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3932));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3930));
            }
            if (((panda$core$Bit) { returnType3926 == NULL }).value) {
            {
                $tmp3934 = NULL;
                $returnValue3903 = $tmp3934;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3934));
                $tmp3893 = 3;
                goto $l3891;
                $l3935:;
                return $returnValue3903;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3937 = returnType3926;
                $tmp3938 = NULL;
                returnType3926 = $tmp3938;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3938));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3937));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3942 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3941 = $tmp3942;
        $tmp3940 = $tmp3941;
        body3939 = $tmp3940;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3940));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3941));
        if (((panda$core$Bit) { body3939 == NULL }).value) {
        {
            $tmp3943 = NULL;
            $returnValue3903 = $tmp3943;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3943));
            $tmp3893 = 4;
            goto $l3891;
            $l3944:;
            return $returnValue3903;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3948 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3949, 26);
        panda$collections$ImmutableArray* $tmp3951 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3951);
        $tmp3950 = $tmp3951;
        panda$core$String* $tmp3953 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3911.value));
        $tmp3952 = $tmp3953;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3948, $tmp3949, ((org$pandalanguage$pandac$parser$Token) start3895.value).position, NULL, $tmp3950, kind3894, $tmp3952, NULL, params3919, returnType3926, body3939);
        $tmp3947 = $tmp3948;
        $tmp3946 = $tmp3947;
        $returnValue3903 = $tmp3946;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3946));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3947));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3952));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3950));
        $tmp3893 = 5;
        goto $l3891;
        $l3954:;
        return $returnValue3903;
    }
    $l3891:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3939));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3926));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3919));
    params3919 = NULL;
    body3939 = NULL;
    switch ($tmp3893) {
        case 4: goto $l3944;
        case 3: goto $l3935;
        case 2: goto $l3924;
        case 1: goto $l3917;
        case 5: goto $l3954;
        case 0: goto $l3905;
    }
    $l3956:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1815_93957;
    panda$core$Int64 $tmp3959;
    org$pandalanguage$pandac$ASTNode* $returnValue3961;
    org$pandalanguage$pandac$ASTNode* $tmp3962;
    org$pandalanguage$pandac$ASTNode* $tmp3963;
    panda$core$Int64 $tmp3966;
    org$pandalanguage$pandac$ASTNode* $tmp3968;
    org$pandalanguage$pandac$ASTNode* $tmp3969;
    panda$core$Int64 $tmp3972;
    org$pandalanguage$pandac$ASTNode* $tmp3974;
    org$pandalanguage$pandac$ASTNode* $tmp3975;
    panda$core$Int64 $tmp3978;
    org$pandalanguage$pandac$ASTNode* $tmp3980;
    org$pandalanguage$pandac$ASTNode* $tmp3981;
    panda$core$Int64 $tmp3984;
    org$pandalanguage$pandac$ASTNode* $tmp3986;
    org$pandalanguage$pandac$ASTNode* $tmp3987;
    panda$core$Int64 $tmp3990;
    org$pandalanguage$pandac$ASTNode* $tmp3992;
    org$pandalanguage$pandac$ASTNode* $tmp3993;
    panda$core$Int64 $tmp3996;
    org$pandalanguage$pandac$ASTNode* $tmp3998;
    org$pandalanguage$pandac$ASTNode* $tmp3999;
    panda$core$Int64 $tmp4002;
    org$pandalanguage$pandac$ASTNode* $tmp4004;
    org$pandalanguage$pandac$ASTNode* $tmp4005;
    panda$core$Int64 $tmp4008;
    org$pandalanguage$pandac$parser$Token id4010;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4012;
    panda$core$Int64 $tmp4013;
    org$pandalanguage$pandac$ASTNode* $tmp4015;
    org$pandalanguage$pandac$ASTNode* $tmp4016;
    panda$core$String* $tmp4017;
    org$pandalanguage$pandac$ASTNode* $tmp4021;
    org$pandalanguage$pandac$ASTNode* $tmp4022;
    panda$core$Int64 $tmp4026;
    panda$core$Int64 $tmp4029;
    org$pandalanguage$pandac$ASTNode* $tmp4032;
    org$pandalanguage$pandac$ASTNode* $tmp4033;
    panda$core$Int64 $tmp4039;
    panda$core$Int64 $tmp4042;
    panda$core$Int64 $tmp4046;
    panda$core$Int64 $tmp4050;
    org$pandalanguage$pandac$ASTNode* $tmp4053;
    org$pandalanguage$pandac$ASTNode* $tmp4054;
    panda$core$Int64 $tmp4057;
    org$pandalanguage$pandac$ASTNode* $tmp4059;
    org$pandalanguage$pandac$ASTNode* $tmp4060;
    panda$core$Int64 $tmp4064;
    panda$core$Int64 $tmp4067;
    org$pandalanguage$pandac$ASTNode* $tmp4070;
    org$pandalanguage$pandac$ASTNode* $tmp4071;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4074;
    panda$core$Int64 $tmp4075;
    org$pandalanguage$pandac$ASTNode* $tmp4077;
    {
        org$pandalanguage$pandac$parser$Token $tmp3958 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1815_93957 = $tmp3958.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3959, 36);
        panda$core$Bit $tmp3960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp3959);
        if ($tmp3960.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3964 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3963 = $tmp3964;
            $tmp3962 = $tmp3963;
            $returnValue3961 = $tmp3962;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3962));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3963));
            return $returnValue3961;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3966, 32);
        panda$core$Bit $tmp3967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp3966);
        if ($tmp3967.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3970 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3969 = $tmp3970;
            $tmp3968 = $tmp3969;
            $returnValue3961 = $tmp3968;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3968));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3969));
            return $returnValue3961;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3972, 31);
        panda$core$Bit $tmp3973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp3972);
        if ($tmp3973.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3976 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3975 = $tmp3976;
            $tmp3974 = $tmp3975;
            $returnValue3961 = $tmp3974;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3974));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3975));
            return $returnValue3961;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3978, 30);
        panda$core$Bit $tmp3979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp3978);
        if ($tmp3979.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3982 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3981 = $tmp3982;
            $tmp3980 = $tmp3981;
            $returnValue3961 = $tmp3980;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3980));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3981));
            return $returnValue3961;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3984, 35);
        panda$core$Bit $tmp3985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp3984);
        if ($tmp3985.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3988 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3987 = $tmp3988;
            $tmp3986 = $tmp3987;
            $returnValue3961 = $tmp3986;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3986));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3987));
            return $returnValue3961;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3990, 44);
        panda$core$Bit $tmp3991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp3990);
        if ($tmp3991.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3994 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3993 = $tmp3994;
            $tmp3992 = $tmp3993;
            $returnValue3961 = $tmp3992;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3992));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3993));
            return $returnValue3961;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3996, 38);
        panda$core$Bit $tmp3997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp3996);
        if ($tmp3997.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4000 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3999 = $tmp4000;
            $tmp3998 = $tmp3999;
            $returnValue3961 = $tmp3998;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3998));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3999));
            return $returnValue3961;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4002, 99);
        panda$core$Bit $tmp4003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp4002);
        if ($tmp4003.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4006 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4005 = $tmp4006;
            $tmp4004 = $tmp4005;
            $returnValue3961 = $tmp4004;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4004));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4005));
            return $returnValue3961;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4008, 48);
        panda$core$Bit $tmp4009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp4008);
        if ($tmp4009.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4011 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id4010 = $tmp4011;
            panda$core$Int64$init$builtin_int64(&$tmp4013, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4012, $tmp4013);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4014 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4012);
            if (((panda$core$Bit) { $tmp4014.nonnull }).value) {
            {
                panda$core$String* $tmp4018 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id4010);
                $tmp4017 = $tmp4018;
                org$pandalanguage$pandac$ASTNode* $tmp4019 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp4017);
                $tmp4016 = $tmp4019;
                $tmp4015 = $tmp4016;
                $returnValue3961 = $tmp4015;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4015));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4016));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4017));
                return $returnValue3961;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id4010);
            org$pandalanguage$pandac$ASTNode* $tmp4023 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4022 = $tmp4023;
            $tmp4021 = $tmp4022;
            $returnValue3961 = $tmp4021;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4021));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4022));
            return $returnValue3961;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4026, 46);
        panda$core$Bit $tmp4027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp4026);
        bool $tmp4025 = $tmp4027.value;
        if ($tmp4025) goto $l4028;
        panda$core$Int64$init$builtin_int64(&$tmp4029, 47);
        panda$core$Bit $tmp4030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp4029);
        $tmp4025 = $tmp4030.value;
        $l4028:;
        panda$core$Bit $tmp4031 = { $tmp4025 };
        if ($tmp4031.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4034 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4033 = $tmp4034;
            $tmp4032 = $tmp4033;
            $returnValue3961 = $tmp4032;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4032));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4033));
            return $returnValue3961;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4039, 23);
        panda$core$Bit $tmp4040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp4039);
        bool $tmp4038 = $tmp4040.value;
        if ($tmp4038) goto $l4041;
        panda$core$Int64$init$builtin_int64(&$tmp4042, 24);
        panda$core$Bit $tmp4043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp4042);
        $tmp4038 = $tmp4043.value;
        $l4041:;
        panda$core$Bit $tmp4044 = { $tmp4038 };
        bool $tmp4037 = $tmp4044.value;
        if ($tmp4037) goto $l4045;
        panda$core$Int64$init$builtin_int64(&$tmp4046, 25);
        panda$core$Bit $tmp4047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp4046);
        $tmp4037 = $tmp4047.value;
        $l4045:;
        panda$core$Bit $tmp4048 = { $tmp4037 };
        bool $tmp4036 = $tmp4048.value;
        if ($tmp4036) goto $l4049;
        panda$core$Int64$init$builtin_int64(&$tmp4050, 26);
        panda$core$Bit $tmp4051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp4050);
        $tmp4036 = $tmp4051.value;
        $l4049:;
        panda$core$Bit $tmp4052 = { $tmp4036 };
        if ($tmp4052.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4055 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4054 = $tmp4055;
            $tmp4053 = $tmp4054;
            $returnValue3961 = $tmp4053;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4053));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4054));
            return $returnValue3961;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4057, 22);
        panda$core$Bit $tmp4058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp4057);
        if ($tmp4058.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4061 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4060 = $tmp4061;
            $tmp4059 = $tmp4060;
            $returnValue3961 = $tmp4059;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4059));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4060));
            return $returnValue3961;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4064, 21);
        panda$core$Bit $tmp4065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp4064);
        bool $tmp4063 = $tmp4065.value;
        if ($tmp4063) goto $l4066;
        panda$core$Int64$init$builtin_int64(&$tmp4067, 20);
        panda$core$Bit $tmp4068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1815_93957.$rawValue, $tmp4067);
        $tmp4063 = $tmp4068.value;
        $l4066:;
        panda$core$Bit $tmp4069 = { $tmp4063 };
        if ($tmp4069.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4072 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4071 = $tmp4072;
            $tmp4070 = $tmp4071;
            $returnValue3961 = $tmp4070;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4070));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4071));
            return $returnValue3961;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4075, 36);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4074, $tmp4075);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4074, &$s4076);
            $tmp4077 = NULL;
            $returnValue3961 = $tmp4077;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4077));
            return $returnValue3961;
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
    org$pandalanguage$pandac$parser$Token$nullable start4082;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4083;
    panda$core$Int64 $tmp4084;
    org$pandalanguage$pandac$ASTNode* $returnValue4087;
    org$pandalanguage$pandac$ASTNode* $tmp4088;
    org$pandalanguage$pandac$parser$Token$nullable next4091;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4092;
    panda$core$Int64 $tmp4093;
    org$pandalanguage$pandac$ASTNode* $tmp4096;
    panda$core$MutableString* name4099 = NULL;
    panda$core$MutableString* $tmp4100;
    panda$core$MutableString* $tmp4101;
    panda$core$String* $tmp4103;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4107;
    panda$core$Int64 $tmp4108;
    panda$core$Char8 $tmp4110;
    panda$core$UInt8 $tmp4111;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4112;
    panda$core$Int64 $tmp4113;
    org$pandalanguage$pandac$ASTNode* $tmp4116;
    panda$core$String* $tmp4119;
    org$pandalanguage$pandac$ASTNode* $tmp4121;
    org$pandalanguage$pandac$ASTNode* $tmp4122;
    panda$core$Int64 $tmp4124;
    panda$core$String* $tmp4125;
    int $tmp4081;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4084, 14);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4083, $tmp4084);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4086 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4083, &$s4085);
        start4082 = $tmp4086;
        if (((panda$core$Bit) { !start4082.nonnull }).value) {
        {
            $tmp4088 = NULL;
            $returnValue4087 = $tmp4088;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4088));
            $tmp4081 = 0;
            goto $l4079;
            $l4089:;
            return $returnValue4087;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4093, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4092, $tmp4093);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4095 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4092, &$s4094);
        next4091 = $tmp4095;
        if (((panda$core$Bit) { !next4091.nonnull }).value) {
        {
            $tmp4096 = NULL;
            $returnValue4087 = $tmp4096;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4096));
            $tmp4081 = 1;
            goto $l4079;
            $l4097:;
            return $returnValue4087;
        }
        }
        panda$core$MutableString* $tmp4102 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4104 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4091.value));
        $tmp4103 = $tmp4104;
        panda$core$MutableString$init$panda$core$String($tmp4102, $tmp4103);
        $tmp4101 = $tmp4102;
        $tmp4100 = $tmp4101;
        name4099 = $tmp4100;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4103));
        $l4105:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4108, 98);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4107, $tmp4108);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4109 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4107);
            next4091 = $tmp4109;
            if (((panda$core$Bit) { !next4091.nonnull }).value) {
            {
                goto $l4106;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4111, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4110, $tmp4111);
            panda$core$MutableString$append$panda$core$Char8(name4099, $tmp4110);
            panda$core$Int64$init$builtin_int64(&$tmp4113, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4112, $tmp4113);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4115 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4112, &$s4114);
            next4091 = $tmp4115;
            if (((panda$core$Bit) { !next4091.nonnull }).value) {
            {
                $tmp4116 = NULL;
                $returnValue4087 = $tmp4116;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4116));
                $tmp4081 = 2;
                goto $l4079;
                $l4117:;
                return $returnValue4087;
            }
            }
            panda$core$String* $tmp4120 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4091.value));
            $tmp4119 = $tmp4120;
            panda$core$MutableString$append$panda$core$String(name4099, $tmp4119);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4119));
        }
        }
        $l4106:;
        org$pandalanguage$pandac$ASTNode* $tmp4123 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4124, 30);
        panda$core$String* $tmp4126 = panda$core$MutableString$finish$R$panda$core$String(name4099);
        $tmp4125 = $tmp4126;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4123, $tmp4124, ((org$pandalanguage$pandac$parser$Token) start4082.value).position, $tmp4125);
        $tmp4122 = $tmp4123;
        $tmp4121 = $tmp4122;
        $returnValue4087 = $tmp4121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4122));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4125));
        $tmp4081 = 3;
        goto $l4079;
        $l4127:;
        return $returnValue4087;
    }
    $l4079:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4099));
    name4099 = NULL;
    switch ($tmp4081) {
        case 2: goto $l4117;
        case 3: goto $l4127;
        case 1: goto $l4097;
        case 0: goto $l4089;
    }
    $l4129:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4133;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4134;
    panda$core$Int64 $tmp4135;
    org$pandalanguage$pandac$ASTNode* $returnValue4138;
    org$pandalanguage$pandac$ASTNode* $tmp4139;
    org$pandalanguage$pandac$parser$Token$nullable next4142;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4143;
    panda$core$Int64 $tmp4144;
    org$pandalanguage$pandac$ASTNode* $tmp4147;
    panda$core$MutableString* name4150 = NULL;
    panda$core$MutableString* $tmp4151;
    panda$core$MutableString* $tmp4152;
    panda$core$String* $tmp4154;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4158;
    panda$core$Int64 $tmp4159;
    panda$core$Char8 $tmp4161;
    panda$core$UInt8 $tmp4162;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4163;
    panda$core$Int64 $tmp4164;
    org$pandalanguage$pandac$ASTNode* $tmp4167;
    panda$core$String* $tmp4170;
    org$pandalanguage$pandac$ASTNode* $tmp4172;
    org$pandalanguage$pandac$ASTNode* $tmp4173;
    panda$core$Int64 $tmp4175;
    panda$core$String* $tmp4176;
    int $tmp4132;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4135, 15);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4134, $tmp4135);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4137 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4134, &$s4136);
        start4133 = $tmp4137;
        if (((panda$core$Bit) { !start4133.nonnull }).value) {
        {
            $tmp4139 = NULL;
            $returnValue4138 = $tmp4139;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4139));
            $tmp4132 = 0;
            goto $l4130;
            $l4140:;
            return $returnValue4138;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4144, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4143, $tmp4144);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4146 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4143, &$s4145);
        next4142 = $tmp4146;
        if (((panda$core$Bit) { !next4142.nonnull }).value) {
        {
            $tmp4147 = NULL;
            $returnValue4138 = $tmp4147;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4147));
            $tmp4132 = 1;
            goto $l4130;
            $l4148:;
            return $returnValue4138;
        }
        }
        panda$core$MutableString* $tmp4153 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4155 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4142.value));
        $tmp4154 = $tmp4155;
        panda$core$MutableString$init$panda$core$String($tmp4153, $tmp4154);
        $tmp4152 = $tmp4153;
        $tmp4151 = $tmp4152;
        name4150 = $tmp4151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4154));
        $l4156:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4159, 98);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4158, $tmp4159);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4160 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4158);
            next4142 = $tmp4160;
            if (((panda$core$Bit) { !next4142.nonnull }).value) {
            {
                goto $l4157;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4162, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4161, $tmp4162);
            panda$core$MutableString$append$panda$core$Char8(name4150, $tmp4161);
            panda$core$Int64$init$builtin_int64(&$tmp4164, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4163, $tmp4164);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4166 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4163, &$s4165);
            next4142 = $tmp4166;
            if (((panda$core$Bit) { !next4142.nonnull }).value) {
            {
                $tmp4167 = NULL;
                $returnValue4138 = $tmp4167;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4167));
                $tmp4132 = 2;
                goto $l4130;
                $l4168:;
                return $returnValue4138;
            }
            }
            panda$core$String* $tmp4171 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4142.value));
            $tmp4170 = $tmp4171;
            panda$core$MutableString$append$panda$core$String(name4150, $tmp4170);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4170));
        }
        }
        $l4157:;
        org$pandalanguage$pandac$ASTNode* $tmp4174 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4175, 46);
        panda$core$String* $tmp4177 = panda$core$MutableString$finish$R$panda$core$String(name4150);
        $tmp4176 = $tmp4177;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4174, $tmp4175, ((org$pandalanguage$pandac$parser$Token) start4133.value).position, $tmp4176);
        $tmp4173 = $tmp4174;
        $tmp4172 = $tmp4173;
        $returnValue4138 = $tmp4172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4173));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4176));
        $tmp4132 = 3;
        goto $l4130;
        $l4178:;
        return $returnValue4138;
    }
    $l4130:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4150));
    name4150 = NULL;
    switch ($tmp4132) {
        case 1: goto $l4148;
        case 2: goto $l4168;
        case 3: goto $l4178;
        case 0: goto $l4140;
    }
    $l4180:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4184;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4185;
    panda$core$Int64 $tmp4186;
    panda$collections$ImmutableArray* $returnValue4189;
    panda$collections$ImmutableArray* $tmp4190;
    org$pandalanguage$pandac$parser$Token$nullable id4193;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4194;
    panda$core$Int64 $tmp4195;
    panda$collections$ImmutableArray* $tmp4198;
    panda$collections$Array* parameters4201 = NULL;
    panda$collections$Array* $tmp4202;
    panda$collections$Array* $tmp4203;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4205;
    panda$core$Int64 $tmp4206;
    org$pandalanguage$pandac$ASTNode* t4211 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4212;
    org$pandalanguage$pandac$ASTNode* $tmp4213;
    panda$collections$ImmutableArray* $tmp4215;
    org$pandalanguage$pandac$ASTNode* $tmp4219;
    panda$core$Int64 $tmp4221;
    panda$core$String* $tmp4222;
    org$pandalanguage$pandac$ASTNode* $tmp4225;
    panda$core$Int64 $tmp4227;
    panda$core$String* $tmp4228;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4233;
    panda$core$Int64 $tmp4234;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4236;
    panda$core$Int64 $tmp4237;
    panda$collections$ImmutableArray* $tmp4240;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4243;
    panda$core$Int64 $tmp4244;
    org$pandalanguage$pandac$ASTNode* t4249 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4250;
    org$pandalanguage$pandac$ASTNode* $tmp4251;
    panda$collections$ImmutableArray* $tmp4253;
    org$pandalanguage$pandac$ASTNode* $tmp4257;
    panda$core$Int64 $tmp4259;
    panda$core$String* $tmp4260;
    org$pandalanguage$pandac$ASTNode* $tmp4263;
    panda$core$Int64 $tmp4265;
    panda$core$String* $tmp4266;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4268;
    panda$core$Int64 $tmp4269;
    panda$collections$ImmutableArray* $tmp4272;
    panda$collections$ImmutableArray* $tmp4275;
    panda$collections$ImmutableArray* $tmp4276;
    int $tmp4183;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4186, 62);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4185, $tmp4186);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4188 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4185, &$s4187);
        start4184 = $tmp4188;
        if (((panda$core$Bit) { !start4184.nonnull }).value) {
        {
            $tmp4190 = NULL;
            $returnValue4189 = $tmp4190;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4190));
            $tmp4183 = 0;
            goto $l4181;
            $l4191:;
            return $returnValue4189;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4195, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4194, $tmp4195);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4197 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4194, &$s4196);
        id4193 = $tmp4197;
        if (((panda$core$Bit) { !id4193.nonnull }).value) {
        {
            $tmp4198 = NULL;
            $returnValue4189 = $tmp4198;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4198));
            $tmp4183 = 1;
            goto $l4181;
            $l4199:;
            return $returnValue4189;
        }
        }
        panda$collections$Array* $tmp4204 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4204);
        $tmp4203 = $tmp4204;
        $tmp4202 = $tmp4203;
        parameters4201 = $tmp4202;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4202));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4203));
        panda$core$Int64$init$builtin_int64(&$tmp4206, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4205, $tmp4206);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4207 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4205);
        if (((panda$core$Bit) { $tmp4207.nonnull }).value) {
        {
            int $tmp4210;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4214 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4213 = $tmp4214;
                $tmp4212 = $tmp4213;
                t4211 = $tmp4212;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4212));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4213));
                if (((panda$core$Bit) { t4211 == NULL }).value) {
                {
                    $tmp4215 = NULL;
                    $returnValue4189 = $tmp4215;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4215));
                    $tmp4210 = 0;
                    goto $l4208;
                    $l4216:;
                    $tmp4183 = 2;
                    goto $l4181;
                    $l4217:;
                    return $returnValue4189;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp4220 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4221, 44);
                panda$core$String* $tmp4223 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4193.value));
                $tmp4222 = $tmp4223;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4220, $tmp4221, ((org$pandalanguage$pandac$parser$Token) id4193.value).position, $tmp4222, t4211);
                $tmp4219 = $tmp4220;
                panda$collections$Array$add$panda$collections$Array$T(parameters4201, ((panda$core$Object*) $tmp4219));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4219));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4222));
            }
            $tmp4210 = -1;
            goto $l4208;
            $l4208:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4211));
            t4211 = NULL;
            switch ($tmp4210) {
                case -1: goto $l4224;
                case 0: goto $l4216;
            }
            $l4224:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4226 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp4227, 20);
            panda$core$String* $tmp4229 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4193.value));
            $tmp4228 = $tmp4229;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4226, $tmp4227, ((org$pandalanguage$pandac$parser$Token) id4193.value).position, $tmp4228);
            $tmp4225 = $tmp4226;
            panda$collections$Array$add$panda$collections$Array$T(parameters4201, ((panda$core$Object*) $tmp4225));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4225));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4228));
        }
        }
        $l4230:;
        panda$core$Int64$init$builtin_int64(&$tmp4234, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4233, $tmp4234);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4235 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4233);
        bool $tmp4232 = ((panda$core$Bit) { $tmp4235.nonnull }).value;
        if (!$tmp4232) goto $l4231;
        {
            panda$core$Int64$init$builtin_int64(&$tmp4237, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4236, $tmp4237);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4239 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4236, &$s4238);
            id4193 = $tmp4239;
            if (((panda$core$Bit) { !id4193.nonnull }).value) {
            {
                $tmp4240 = NULL;
                $returnValue4189 = $tmp4240;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4240));
                $tmp4183 = 3;
                goto $l4181;
                $l4241:;
                return $returnValue4189;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4244, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4243, $tmp4244);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4245 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4243);
            if (((panda$core$Bit) { $tmp4245.nonnull }).value) {
            {
                int $tmp4248;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4252 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4251 = $tmp4252;
                    $tmp4250 = $tmp4251;
                    t4249 = $tmp4250;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4250));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4251));
                    if (((panda$core$Bit) { t4249 == NULL }).value) {
                    {
                        $tmp4253 = NULL;
                        $returnValue4189 = $tmp4253;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4253));
                        $tmp4248 = 0;
                        goto $l4246;
                        $l4254:;
                        $tmp4183 = 4;
                        goto $l4181;
                        $l4255:;
                        return $returnValue4189;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp4258 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp4259, 44);
                    panda$core$String* $tmp4261 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4193.value));
                    $tmp4260 = $tmp4261;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4258, $tmp4259, ((org$pandalanguage$pandac$parser$Token) id4193.value).position, $tmp4260, t4249);
                    $tmp4257 = $tmp4258;
                    panda$collections$Array$add$panda$collections$Array$T(parameters4201, ((panda$core$Object*) $tmp4257));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4257));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4260));
                }
                $tmp4248 = -1;
                goto $l4246;
                $l4246:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4249));
                t4249 = NULL;
                switch ($tmp4248) {
                    case 0: goto $l4254;
                    case -1: goto $l4262;
                }
                $l4262:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4264 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4265, 20);
                panda$core$String* $tmp4267 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4193.value));
                $tmp4266 = $tmp4267;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4264, $tmp4265, ((org$pandalanguage$pandac$parser$Token) id4193.value).position, $tmp4266);
                $tmp4263 = $tmp4264;
                panda$collections$Array$add$panda$collections$Array$T(parameters4201, ((panda$core$Object*) $tmp4263));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4263));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4266));
            }
            }
        }
        goto $l4230;
        $l4231:;
        panda$core$Int64$init$builtin_int64(&$tmp4269, 63);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4268, $tmp4269);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4271 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4268, &$s4270);
        if (((panda$core$Bit) { !$tmp4271.nonnull }).value) {
        {
            $tmp4272 = NULL;
            $returnValue4189 = $tmp4272;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4272));
            $tmp4183 = 5;
            goto $l4181;
            $l4273:;
            return $returnValue4189;
        }
        }
        panda$collections$ImmutableArray* $tmp4277 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters4201);
        $tmp4276 = $tmp4277;
        $tmp4275 = $tmp4276;
        $returnValue4189 = $tmp4275;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4275));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4276));
        $tmp4183 = 6;
        goto $l4181;
        $l4278:;
        return $returnValue4189;
    }
    $l4181:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters4201));
    parameters4201 = NULL;
    switch ($tmp4183) {
        case 5: goto $l4273;
        case 3: goto $l4241;
        case 1: goto $l4199;
        case 4: goto $l4255;
        case 2: goto $l4217;
        case 6: goto $l4278;
        case 0: goto $l4191;
    }
    $l4280:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4284;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4285;
    panda$core$Int64 $tmp4286;
    panda$collections$ImmutableArray* $returnValue4289;
    panda$collections$ImmutableArray* $tmp4290;
    panda$collections$Array* result4293 = NULL;
    panda$collections$Array* $tmp4294;
    panda$collections$Array* $tmp4295;
    org$pandalanguage$pandac$ASTNode* t4297 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4298;
    org$pandalanguage$pandac$ASTNode* $tmp4299;
    panda$collections$ImmutableArray* $tmp4301;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4307;
    panda$core$Int64 $tmp4308;
    org$pandalanguage$pandac$ASTNode* $tmp4310;
    org$pandalanguage$pandac$ASTNode* $tmp4311;
    org$pandalanguage$pandac$ASTNode* $tmp4312;
    panda$collections$ImmutableArray* $tmp4314;
    panda$collections$ImmutableArray* $tmp4317;
    panda$collections$ImmutableArray* $tmp4318;
    int $tmp4283;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4286, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4285, $tmp4286);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4288 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4285, &$s4287);
        start4284 = $tmp4288;
        if (((panda$core$Bit) { !start4284.nonnull }).value) {
        {
            $tmp4290 = NULL;
            $returnValue4289 = $tmp4290;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4290));
            $tmp4283 = 0;
            goto $l4281;
            $l4291:;
            return $returnValue4289;
        }
        }
        panda$collections$Array* $tmp4296 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4296);
        $tmp4295 = $tmp4296;
        $tmp4294 = $tmp4295;
        result4293 = $tmp4294;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4295));
        org$pandalanguage$pandac$ASTNode* $tmp4300 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4299 = $tmp4300;
        $tmp4298 = $tmp4299;
        t4297 = $tmp4298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4299));
        if (((panda$core$Bit) { t4297 == NULL }).value) {
        {
            $tmp4301 = NULL;
            $returnValue4289 = $tmp4301;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4301));
            $tmp4283 = 1;
            goto $l4281;
            $l4302:;
            return $returnValue4289;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result4293, ((panda$core$Object*) t4297));
        $l4304:;
        panda$core$Int64$init$builtin_int64(&$tmp4308, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4307, $tmp4308);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4309 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4307);
        bool $tmp4306 = ((panda$core$Bit) { $tmp4309.nonnull }).value;
        if (!$tmp4306) goto $l4305;
        {
            {
                $tmp4310 = t4297;
                org$pandalanguage$pandac$ASTNode* $tmp4313 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4312 = $tmp4313;
                $tmp4311 = $tmp4312;
                t4297 = $tmp4311;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4311));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4312));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4310));
            }
            if (((panda$core$Bit) { t4297 == NULL }).value) {
            {
                $tmp4314 = NULL;
                $returnValue4289 = $tmp4314;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4314));
                $tmp4283 = 2;
                goto $l4281;
                $l4315:;
                return $returnValue4289;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result4293, ((panda$core$Object*) t4297));
        }
        goto $l4304;
        $l4305:;
        panda$collections$ImmutableArray* $tmp4319 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4293);
        $tmp4318 = $tmp4319;
        $tmp4317 = $tmp4318;
        $returnValue4289 = $tmp4317;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4317));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4318));
        $tmp4283 = 3;
        goto $l4281;
        $l4320:;
        return $returnValue4289;
    }
    $l4281:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4297));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4293));
    result4293 = NULL;
    t4297 = NULL;
    switch ($tmp4283) {
        case 2: goto $l4315;
        case 3: goto $l4320;
        case 0: goto $l4291;
        case 1: goto $l4302;
    }
    $l4322:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a4326;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4327;
    panda$core$Int64 $tmp4328;
    org$pandalanguage$pandac$ASTNode* expr4331 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4332;
    panda$core$Int64 $tmp4333;
    org$pandalanguage$pandac$ASTNode* $tmp4335;
    org$pandalanguage$pandac$ASTNode* $tmp4336;
    org$pandalanguage$pandac$ASTNode* $tmp4337;
    org$pandalanguage$pandac$ASTNode* $returnValue4339;
    org$pandalanguage$pandac$ASTNode* $tmp4340;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4343;
    panda$core$Int64 $tmp4344;
    org$pandalanguage$pandac$ASTNode* $tmp4346;
    org$pandalanguage$pandac$ASTNode* $tmp4347;
    panda$core$Int64 $tmp4349;
    panda$core$String* $tmp4350;
    int $tmp4325;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4328, 13);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4327, $tmp4328);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4330 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4327, &$s4329);
        a4326 = $tmp4330;
        memset(&expr4331, 0, sizeof(expr4331));
        panda$core$Int64$init$builtin_int64(&$tmp4333, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4332, $tmp4333);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4334 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4332);
        if (((panda$core$Bit) { $tmp4334.nonnull }).value) {
        {
            {
                $tmp4335 = expr4331;
                org$pandalanguage$pandac$ASTNode* $tmp4338 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4337 = $tmp4338;
                $tmp4336 = $tmp4337;
                expr4331 = $tmp4336;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4336));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4337));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4335));
            }
            if (((panda$core$Bit) { expr4331 == NULL }).value) {
            {
                $tmp4340 = NULL;
                $returnValue4339 = $tmp4340;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4340));
                $tmp4325 = 0;
                goto $l4323;
                $l4341:;
                return $returnValue4339;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4344, 104);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4343, $tmp4344);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4343, &$s4345);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4348 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4349, 0);
        panda$core$String* $tmp4351 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a4326.value));
        $tmp4350 = $tmp4351;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4348, $tmp4349, ((org$pandalanguage$pandac$parser$Token) a4326.value).position, $tmp4350, expr4331);
        $tmp4347 = $tmp4348;
        $tmp4346 = $tmp4347;
        $returnValue4339 = $tmp4346;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4346));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4347));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4350));
        $tmp4325 = 1;
        goto $l4323;
        $l4352:;
        return $returnValue4339;
    }
    $l4323:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr4331));
    switch ($tmp4325) {
        case 0: goto $l4341;
        case 1: goto $l4352;
    }
    $l4354:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result4358 = NULL;
    panda$collections$Array* $tmp4359;
    panda$collections$Array* $tmp4360;
    panda$core$Int64 $tmp4366;
    org$pandalanguage$pandac$ASTNode* a4371 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4372;
    org$pandalanguage$pandac$ASTNode* $tmp4373;
    panda$collections$ImmutableArray* $returnValue4377;
    panda$collections$ImmutableArray* $tmp4378;
    panda$collections$ImmutableArray* $tmp4379;
    int $tmp4357;
    {
        panda$collections$Array* $tmp4361 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4361);
        $tmp4360 = $tmp4361;
        $tmp4359 = $tmp4360;
        result4358 = $tmp4359;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4359));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4360));
        $l4362:;
        org$pandalanguage$pandac$parser$Token $tmp4365 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4366, 13);
        panda$core$Bit $tmp4367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4365.kind.$rawValue, $tmp4366);
        bool $tmp4364 = $tmp4367.value;
        if (!$tmp4364) goto $l4363;
        {
            int $tmp4370;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4374 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4373 = $tmp4374;
                $tmp4372 = $tmp4373;
                a4371 = $tmp4372;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4372));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4373));
                if (((panda$core$Bit) { a4371 == NULL }).value) {
                {
                    $tmp4370 = 0;
                    goto $l4368;
                    $l4375:;
                    goto $l4363;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4358, ((panda$core$Object*) a4371));
            }
            $tmp4370 = -1;
            goto $l4368;
            $l4368:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4371));
            a4371 = NULL;
            switch ($tmp4370) {
                case -1: goto $l4376;
                case 0: goto $l4375;
            }
            $l4376:;
        }
        goto $l4362;
        $l4363:;
        panda$collections$ImmutableArray* $tmp4380 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4358);
        $tmp4379 = $tmp4380;
        $tmp4378 = $tmp4379;
        $returnValue4377 = $tmp4378;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4378));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4379));
        $tmp4357 = 0;
        goto $l4355;
        $l4381:;
        return $returnValue4377;
    }
    $l4355:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4358));
    result4358 = NULL;
    switch ($tmp4357) {
        case 0: goto $l4381;
    }
    $l4383:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4387;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4388;
    panda$core$Int64 $tmp4389;
    org$pandalanguage$pandac$ASTNode* $returnValue4392;
    org$pandalanguage$pandac$ASTNode* $tmp4393;
    panda$core$MutableString* result4396 = NULL;
    panda$core$MutableString* $tmp4397;
    panda$core$MutableString* $tmp4398;
    org$pandalanguage$pandac$parser$Token next4402;
    panda$core$Int64 $tmp4404;
    panda$core$Int64 $tmp4406;
    org$pandalanguage$pandac$ASTNode* $tmp4409;
    panda$core$String* $tmp4412;
    org$pandalanguage$pandac$ASTNode* $tmp4414;
    org$pandalanguage$pandac$ASTNode* $tmp4415;
    panda$core$Int64 $tmp4417;
    panda$core$String* $tmp4418;
    int $tmp4386;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4389, 11);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4388, $tmp4389);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4391 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4388, &$s4390);
        start4387 = $tmp4391;
        if (((panda$core$Bit) { !start4387.nonnull }).value) {
        {
            $tmp4393 = NULL;
            $returnValue4392 = $tmp4393;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4393));
            $tmp4386 = 0;
            goto $l4384;
            $l4394:;
            return $returnValue4392;
        }
        }
        panda$core$MutableString* $tmp4399 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp4399);
        $tmp4398 = $tmp4399;
        $tmp4397 = $tmp4398;
        result4396 = $tmp4397;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4397));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4398));
        $l4400:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4403 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next4402 = $tmp4403;
            panda$core$Int64$init$builtin_int64(&$tmp4404, 11);
            panda$core$Bit $tmp4405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4402.kind.$rawValue, $tmp4404);
            if ($tmp4405.value) {
            {
                goto $l4401;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4406, 0);
            panda$core$Bit $tmp4407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4402.kind.$rawValue, $tmp4406);
            if ($tmp4407.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start4387.value), &$s4408);
                $tmp4409 = NULL;
                $returnValue4392 = $tmp4409;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4409));
                $tmp4386 = 1;
                goto $l4384;
                $l4410:;
                return $returnValue4392;
            }
            }
            panda$core$String* $tmp4413 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4402);
            $tmp4412 = $tmp4413;
            panda$core$MutableString$append$panda$core$String(result4396, $tmp4412);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4412));
        }
        }
        $l4401:;
        org$pandalanguage$pandac$ASTNode* $tmp4416 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4417, 38);
        panda$core$String* $tmp4419 = panda$core$MutableString$finish$R$panda$core$String(result4396);
        $tmp4418 = $tmp4419;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4416, $tmp4417, ((org$pandalanguage$pandac$parser$Token) start4387.value).position, $tmp4418);
        $tmp4415 = $tmp4416;
        $tmp4414 = $tmp4415;
        $returnValue4392 = $tmp4414;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4414));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4415));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4418));
        $tmp4386 = 2;
        goto $l4384;
        $l4420:;
        return $returnValue4392;
    }
    $l4384:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4396));
    result4396 = NULL;
    switch ($tmp4386) {
        case 2: goto $l4420;
        case 1: goto $l4410;
        case 0: goto $l4394;
    }
    $l4422:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id4426;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4427;
    panda$core$Int64 $tmp4428;
    org$pandalanguage$pandac$ASTNode* $returnValue4431;
    org$pandalanguage$pandac$ASTNode* $tmp4432;
    org$pandalanguage$pandac$ASTNode* t4435 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4436;
    org$pandalanguage$pandac$ASTNode* $tmp4437;
    org$pandalanguage$pandac$ASTNode* $tmp4439;
    org$pandalanguage$pandac$ASTNode* $tmp4442;
    org$pandalanguage$pandac$ASTNode* $tmp4443;
    panda$core$Int64 $tmp4445;
    panda$core$String* $tmp4446;
    int $tmp4425;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4428, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4427, $tmp4428);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4430 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4427, &$s4429);
        id4426 = $tmp4430;
        if (((panda$core$Bit) { !id4426.nonnull }).value) {
        {
            $tmp4432 = NULL;
            $returnValue4431 = $tmp4432;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4432));
            $tmp4425 = 0;
            goto $l4423;
            $l4433:;
            return $returnValue4431;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4438 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4437 = $tmp4438;
        $tmp4436 = $tmp4437;
        t4435 = $tmp4436;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4436));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4437));
        if (((panda$core$Bit) { t4435 == NULL }).value) {
        {
            $tmp4439 = NULL;
            $returnValue4431 = $tmp4439;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4439));
            $tmp4425 = 1;
            goto $l4423;
            $l4440:;
            return $returnValue4431;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4444 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4445, 31);
        panda$core$String* $tmp4447 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4426.value));
        $tmp4446 = $tmp4447;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4444, $tmp4445, ((org$pandalanguage$pandac$parser$Token) id4426.value).position, $tmp4446, t4435);
        $tmp4443 = $tmp4444;
        $tmp4442 = $tmp4443;
        $returnValue4431 = $tmp4442;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4442));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4443));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4446));
        $tmp4425 = 2;
        goto $l4423;
        $l4448:;
        return $returnValue4431;
    }
    $l4423:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4435));
    t4435 = NULL;
    switch ($tmp4425) {
        case 1: goto $l4440;
        case 2: goto $l4448;
        case 0: goto $l4433;
    }
    $l4450:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4454;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4455;
    panda$core$Int64 $tmp4456;
    panda$collections$ImmutableArray* $returnValue4459;
    panda$collections$ImmutableArray* $tmp4460;
    panda$collections$Array* result4463 = NULL;
    panda$collections$Array* $tmp4464;
    panda$collections$Array* $tmp4465;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4467;
    panda$core$Int64 $tmp4468;
    org$pandalanguage$pandac$ASTNode* param4473 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4474;
    org$pandalanguage$pandac$ASTNode* $tmp4475;
    panda$collections$ImmutableArray* $tmp4477;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4484;
    panda$core$Int64 $tmp4485;
    org$pandalanguage$pandac$ASTNode* $tmp4487;
    org$pandalanguage$pandac$ASTNode* $tmp4488;
    org$pandalanguage$pandac$ASTNode* $tmp4489;
    panda$collections$ImmutableArray* $tmp4491;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4495;
    panda$core$Int64 $tmp4496;
    panda$collections$ImmutableArray* $tmp4499;
    panda$collections$ImmutableArray* $tmp4504;
    panda$collections$ImmutableArray* $tmp4505;
    int $tmp4453;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4456, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4455, $tmp4456);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4458 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4455, &$s4457);
        start4454 = $tmp4458;
        if (((panda$core$Bit) { !start4454.nonnull }).value) {
        {
            $tmp4460 = NULL;
            $returnValue4459 = $tmp4460;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4460));
            $tmp4453 = 0;
            goto $l4451;
            $l4461:;
            return $returnValue4459;
        }
        }
        panda$collections$Array* $tmp4466 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4466);
        $tmp4465 = $tmp4466;
        $tmp4464 = $tmp4465;
        result4463 = $tmp4464;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4464));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4465));
        panda$core$Int64$init$builtin_int64(&$tmp4468, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4467, $tmp4468);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4469 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4467);
        if (((panda$core$Bit) { !$tmp4469.nonnull }).value) {
        {
            int $tmp4472;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4476 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4475 = $tmp4476;
                $tmp4474 = $tmp4475;
                param4473 = $tmp4474;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4474));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4475));
                if (((panda$core$Bit) { param4473 == NULL }).value) {
                {
                    $tmp4477 = NULL;
                    $returnValue4459 = $tmp4477;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4477));
                    $tmp4472 = 0;
                    goto $l4470;
                    $l4478:;
                    $tmp4453 = 1;
                    goto $l4451;
                    $l4479:;
                    return $returnValue4459;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4463, ((panda$core$Object*) param4473));
                $l4481:;
                panda$core$Int64$init$builtin_int64(&$tmp4485, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4484, $tmp4485);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4486 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4484);
                bool $tmp4483 = ((panda$core$Bit) { $tmp4486.nonnull }).value;
                if (!$tmp4483) goto $l4482;
                {
                    {
                        $tmp4487 = param4473;
                        org$pandalanguage$pandac$ASTNode* $tmp4490 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4489 = $tmp4490;
                        $tmp4488 = $tmp4489;
                        param4473 = $tmp4488;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4488));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4489));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4487));
                    }
                    if (((panda$core$Bit) { param4473 == NULL }).value) {
                    {
                        $tmp4491 = NULL;
                        $returnValue4459 = $tmp4491;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4491));
                        $tmp4472 = 1;
                        goto $l4470;
                        $l4492:;
                        $tmp4453 = 2;
                        goto $l4451;
                        $l4493:;
                        return $returnValue4459;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result4463, ((panda$core$Object*) param4473));
                }
                goto $l4481;
                $l4482:;
                panda$core$Int64$init$builtin_int64(&$tmp4496, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4495, $tmp4496);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4498 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4495, &$s4497);
                if (((panda$core$Bit) { !$tmp4498.nonnull }).value) {
                {
                    $tmp4499 = NULL;
                    $returnValue4459 = $tmp4499;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4499));
                    $tmp4472 = 2;
                    goto $l4470;
                    $l4500:;
                    $tmp4453 = 3;
                    goto $l4451;
                    $l4501:;
                    return $returnValue4459;
                }
                }
            }
            $tmp4472 = -1;
            goto $l4470;
            $l4470:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param4473));
            param4473 = NULL;
            switch ($tmp4472) {
                case 0: goto $l4478;
                case -1: goto $l4503;
                case 2: goto $l4500;
                case 1: goto $l4492;
            }
            $l4503:;
        }
        }
        panda$collections$ImmutableArray* $tmp4506 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4463);
        $tmp4505 = $tmp4506;
        $tmp4504 = $tmp4505;
        $returnValue4459 = $tmp4504;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4504));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4505));
        $tmp4453 = 4;
        goto $l4451;
        $l4507:;
        return $returnValue4459;
    }
    $l4451:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4463));
    result4463 = NULL;
    switch ($tmp4453) {
        case 1: goto $l4479;
        case 3: goto $l4501;
        case 2: goto $l4493;
        case 0: goto $l4461;
        case 4: goto $l4507;
    }
    $l4509:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4513;
    org$pandalanguage$pandac$parser$Token$nullable start4514;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4515;
    panda$core$Int64 $tmp4516;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4518;
    panda$core$Int64 $tmp4519;
    org$pandalanguage$pandac$ASTNode* $returnValue4522;
    org$pandalanguage$pandac$ASTNode* $tmp4523;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4526;
    panda$core$Int64 $tmp4527;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4528;
    panda$core$Int64 $tmp4529;
    panda$core$String* name4530 = NULL;
    panda$core$String* $tmp4531;
    panda$core$String* $tmp4532;
    org$pandalanguage$pandac$ASTNode* $tmp4534;
    panda$collections$ImmutableArray* generics4537 = NULL;
    panda$core$Int64 $tmp4539;
    panda$collections$ImmutableArray* $tmp4541;
    panda$collections$ImmutableArray* $tmp4542;
    panda$collections$ImmutableArray* $tmp4543;
    panda$collections$ImmutableArray* $tmp4545;
    panda$collections$ImmutableArray* $tmp4546;
    panda$collections$ImmutableArray* params4547 = NULL;
    panda$collections$ImmutableArray* $tmp4548;
    panda$collections$ImmutableArray* $tmp4549;
    org$pandalanguage$pandac$ASTNode* $tmp4551;
    org$pandalanguage$pandac$ASTNode* returnType4554 = NULL;
    panda$core$Int64 $tmp4556;
    org$pandalanguage$pandac$ASTNode* $tmp4558;
    org$pandalanguage$pandac$ASTNode* $tmp4559;
    org$pandalanguage$pandac$ASTNode* $tmp4560;
    org$pandalanguage$pandac$ASTNode* $tmp4562;
    org$pandalanguage$pandac$ASTNode* $tmp4565;
    org$pandalanguage$pandac$ASTNode* $tmp4566;
    panda$collections$ImmutableArray* body4567 = NULL;
    panda$core$Int64 $tmp4569;
    panda$collections$ImmutableArray* $tmp4571;
    panda$collections$ImmutableArray* $tmp4572;
    panda$collections$ImmutableArray* $tmp4573;
    org$pandalanguage$pandac$ASTNode* $tmp4575;
    panda$collections$ImmutableArray* $tmp4578;
    panda$collections$ImmutableArray* $tmp4579;
    org$pandalanguage$pandac$ASTNode* $tmp4580;
    org$pandalanguage$pandac$ASTNode* $tmp4581;
    panda$core$Int64 $tmp4583;
    int $tmp4512;
    {
        memset(&kind4513, 0, sizeof(kind4513));
        panda$core$Int64$init$builtin_int64(&$tmp4516, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4515, $tmp4516);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4517 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4515);
        start4514 = $tmp4517;
        if (((panda$core$Bit) { !start4514.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4519, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4518, $tmp4519);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4521 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4518, &$s4520);
            start4514 = $tmp4521;
            if (((panda$core$Bit) { !start4514.nonnull }).value) {
            {
                $tmp4523 = NULL;
                $returnValue4522 = $tmp4523;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4523));
                $tmp4512 = 0;
                goto $l4510;
                $l4524:;
                return $returnValue4522;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4527, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4526, $tmp4527);
            kind4513 = $tmp4526;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4529, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4528, $tmp4529);
            kind4513 = $tmp4528;
        }
        }
        panda$core$String* $tmp4533 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp4532 = $tmp4533;
        $tmp4531 = $tmp4532;
        name4530 = $tmp4531;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4531));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4532));
        if (((panda$core$Bit) { name4530 == NULL }).value) {
        {
            $tmp4534 = NULL;
            $returnValue4522 = $tmp4534;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4534));
            $tmp4512 = 1;
            goto $l4510;
            $l4535:;
            return $returnValue4522;
        }
        }
        memset(&generics4537, 0, sizeof(generics4537));
        org$pandalanguage$pandac$parser$Token $tmp4538 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4539, 62);
        panda$core$Bit $tmp4540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4538.kind.$rawValue, $tmp4539);
        if ($tmp4540.value) {
        {
            {
                $tmp4541 = generics4537;
                panda$collections$ImmutableArray* $tmp4544 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4543 = $tmp4544;
                $tmp4542 = $tmp4543;
                generics4537 = $tmp4542;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4542));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4543));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4541));
            }
        }
        }
        else {
        {
            {
                $tmp4545 = generics4537;
                $tmp4546 = NULL;
                generics4537 = $tmp4546;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4546));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4545));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4550 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4549 = $tmp4550;
        $tmp4548 = $tmp4549;
        params4547 = $tmp4548;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4548));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4549));
        if (((panda$core$Bit) { params4547 == NULL }).value) {
        {
            $tmp4551 = NULL;
            $returnValue4522 = $tmp4551;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4551));
            $tmp4512 = 2;
            goto $l4510;
            $l4552:;
            return $returnValue4522;
        }
        }
        memset(&returnType4554, 0, sizeof(returnType4554));
        org$pandalanguage$pandac$parser$Token $tmp4555 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4556, 95);
        panda$core$Bit $tmp4557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4555.kind.$rawValue, $tmp4556);
        if ($tmp4557.value) {
        {
            {
                $tmp4558 = returnType4554;
                org$pandalanguage$pandac$ASTNode* $tmp4561 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4560 = $tmp4561;
                $tmp4559 = $tmp4560;
                returnType4554 = $tmp4559;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4559));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4560));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4558));
            }
            if (((panda$core$Bit) { returnType4554 == NULL }).value) {
            {
                $tmp4562 = NULL;
                $returnValue4522 = $tmp4562;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4562));
                $tmp4512 = 3;
                goto $l4510;
                $l4563:;
                return $returnValue4522;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4565 = returnType4554;
                $tmp4566 = NULL;
                returnType4554 = $tmp4566;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4566));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4565));
            }
        }
        }
        memset(&body4567, 0, sizeof(body4567));
        org$pandalanguage$pandac$parser$Token $tmp4568 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4569, 99);
        panda$core$Bit $tmp4570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4568.kind.$rawValue, $tmp4569);
        if ($tmp4570.value) {
        {
            {
                $tmp4571 = body4567;
                panda$collections$ImmutableArray* $tmp4574 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4573 = $tmp4574;
                $tmp4572 = $tmp4573;
                body4567 = $tmp4572;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4572));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4573));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4571));
            }
            if (((panda$core$Bit) { body4567 == NULL }).value) {
            {
                $tmp4575 = NULL;
                $returnValue4522 = $tmp4575;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4575));
                $tmp4512 = 4;
                goto $l4510;
                $l4576:;
                return $returnValue4522;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4578 = body4567;
                $tmp4579 = NULL;
                body4567 = $tmp4579;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4579));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4578));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4582 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4583, 26);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4582, $tmp4583, ((org$pandalanguage$pandac$parser$Token) start4514.value).position, p_doccomment, p_annotations, kind4513, name4530, generics4537, params4547, returnType4554, body4567);
        $tmp4581 = $tmp4582;
        $tmp4580 = $tmp4581;
        $returnValue4522 = $tmp4580;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4580));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4581));
        $tmp4512 = 5;
        goto $l4510;
        $l4584:;
        return $returnValue4522;
    }
    $l4510:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4567));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4554));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4547));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4537));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4530));
    name4530 = NULL;
    params4547 = NULL;
    switch ($tmp4512) {
        case 1: goto $l4535;
        case 3: goto $l4563;
        case 5: goto $l4584;
        case 4: goto $l4576;
        case 2: goto $l4552;
        case 0: goto $l4524;
    }
    $l4586:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4590;
    org$pandalanguage$pandac$parser$Token$nullable start4591;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4592;
    panda$core$Int64 $tmp4593;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4595;
    panda$core$Int64 $tmp4596;
    org$pandalanguage$pandac$ASTNode* $returnValue4599;
    org$pandalanguage$pandac$ASTNode* $tmp4600;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4603;
    panda$core$Int64 $tmp4604;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4605;
    panda$core$Int64 $tmp4606;
    panda$collections$ImmutableArray* params4607 = NULL;
    panda$collections$ImmutableArray* $tmp4608;
    panda$collections$ImmutableArray* $tmp4609;
    org$pandalanguage$pandac$ASTNode* $tmp4611;
    org$pandalanguage$pandac$ASTNode* returnType4614 = NULL;
    panda$core$Int64 $tmp4616;
    org$pandalanguage$pandac$ASTNode* $tmp4618;
    org$pandalanguage$pandac$ASTNode* $tmp4619;
    org$pandalanguage$pandac$ASTNode* $tmp4620;
    org$pandalanguage$pandac$ASTNode* $tmp4622;
    org$pandalanguage$pandac$ASTNode* $tmp4625;
    org$pandalanguage$pandac$ASTNode* $tmp4626;
    panda$collections$ImmutableArray* body4627 = NULL;
    panda$collections$ImmutableArray* $tmp4628;
    panda$collections$ImmutableArray* $tmp4629;
    org$pandalanguage$pandac$ASTNode* $tmp4631;
    org$pandalanguage$pandac$ASTNode* $tmp4634;
    org$pandalanguage$pandac$ASTNode* $tmp4635;
    panda$core$Int64 $tmp4637;
    panda$collections$ImmutableArray* $tmp4638;
    int $tmp4589;
    {
        memset(&kind4590, 0, sizeof(kind4590));
        panda$core$Int64$init$builtin_int64(&$tmp4593, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4592, $tmp4593);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4594 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4592);
        start4591 = $tmp4594;
        if (((panda$core$Bit) { !start4591.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4596, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4595, $tmp4596);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4598 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4595, &$s4597);
            start4591 = $tmp4598;
            if (((panda$core$Bit) { !start4591.nonnull }).value) {
            {
                $tmp4600 = NULL;
                $returnValue4599 = $tmp4600;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4600));
                $tmp4589 = 0;
                goto $l4587;
                $l4601:;
                return $returnValue4599;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4604, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4603, $tmp4604);
            kind4590 = $tmp4603;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4606, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4605, $tmp4606);
            kind4590 = $tmp4605;
        }
        }
        panda$collections$ImmutableArray* $tmp4610 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4609 = $tmp4610;
        $tmp4608 = $tmp4609;
        params4607 = $tmp4608;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4608));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4609));
        if (((panda$core$Bit) { params4607 == NULL }).value) {
        {
            $tmp4611 = NULL;
            $returnValue4599 = $tmp4611;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4611));
            $tmp4589 = 1;
            goto $l4587;
            $l4612:;
            return $returnValue4599;
        }
        }
        memset(&returnType4614, 0, sizeof(returnType4614));
        org$pandalanguage$pandac$parser$Token $tmp4615 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4616, 95);
        panda$core$Bit $tmp4617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4615.kind.$rawValue, $tmp4616);
        if ($tmp4617.value) {
        {
            {
                $tmp4618 = returnType4614;
                org$pandalanguage$pandac$ASTNode* $tmp4621 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4620 = $tmp4621;
                $tmp4619 = $tmp4620;
                returnType4614 = $tmp4619;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4619));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4620));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4618));
            }
            if (((panda$core$Bit) { returnType4614 == NULL }).value) {
            {
                $tmp4622 = NULL;
                $returnValue4599 = $tmp4622;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4622));
                $tmp4589 = 2;
                goto $l4587;
                $l4623:;
                return $returnValue4599;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4625 = returnType4614;
                $tmp4626 = NULL;
                returnType4614 = $tmp4626;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4626));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4625));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4630 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4629 = $tmp4630;
        $tmp4628 = $tmp4629;
        body4627 = $tmp4628;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4628));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4629));
        if (((panda$core$Bit) { body4627 == NULL }).value) {
        {
            $tmp4631 = NULL;
            $returnValue4599 = $tmp4631;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4631));
            $tmp4589 = 3;
            goto $l4587;
            $l4632:;
            return $returnValue4599;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4636 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4637, 26);
        panda$collections$ImmutableArray* $tmp4639 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4639);
        $tmp4638 = $tmp4639;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4636, $tmp4637, ((org$pandalanguage$pandac$parser$Token) start4591.value).position, NULL, $tmp4638, kind4590, &$s4640, NULL, params4607, returnType4614, body4627);
        $tmp4635 = $tmp4636;
        $tmp4634 = $tmp4635;
        $returnValue4599 = $tmp4634;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4634));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4638));
        $tmp4589 = 4;
        goto $l4587;
        $l4641:;
        return $returnValue4599;
    }
    $l4587:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4627));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4614));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4607));
    params4607 = NULL;
    body4627 = NULL;
    switch ($tmp4589) {
        case 1: goto $l4612;
        case 4: goto $l4641;
        case 2: goto $l4623;
        case 3: goto $l4632;
        case 0: goto $l4601;
    }
    $l4643:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4647;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4648;
    panda$core$Int64 $tmp4649;
    org$pandalanguage$pandac$ASTNode* $returnValue4652;
    org$pandalanguage$pandac$ASTNode* $tmp4653;
    panda$collections$ImmutableArray* params4656 = NULL;
    panda$collections$ImmutableArray* $tmp4657;
    panda$collections$ImmutableArray* $tmp4658;
    org$pandalanguage$pandac$ASTNode* $tmp4660;
    panda$collections$ImmutableArray* b4663 = NULL;
    panda$collections$ImmutableArray* $tmp4664;
    panda$collections$ImmutableArray* $tmp4665;
    org$pandalanguage$pandac$ASTNode* $tmp4667;
    org$pandalanguage$pandac$ASTNode* $tmp4670;
    org$pandalanguage$pandac$ASTNode* $tmp4671;
    panda$core$Int64 $tmp4673;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4674;
    panda$core$Int64 $tmp4675;
    int $tmp4646;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4649, 22);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4648, $tmp4649);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4651 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4648, &$s4650);
        start4647 = $tmp4651;
        if (((panda$core$Bit) { !start4647.nonnull }).value) {
        {
            $tmp4653 = NULL;
            $returnValue4652 = $tmp4653;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4653));
            $tmp4646 = 0;
            goto $l4644;
            $l4654:;
            return $returnValue4652;
        }
        }
        panda$collections$ImmutableArray* $tmp4659 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4658 = $tmp4659;
        $tmp4657 = $tmp4658;
        params4656 = $tmp4657;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4657));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4658));
        if (((panda$core$Bit) { params4656 == NULL }).value) {
        {
            $tmp4660 = NULL;
            $returnValue4652 = $tmp4660;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4660));
            $tmp4646 = 1;
            goto $l4644;
            $l4661:;
            return $returnValue4652;
        }
        }
        panda$collections$ImmutableArray* $tmp4666 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4665 = $tmp4666;
        $tmp4664 = $tmp4665;
        b4663 = $tmp4664;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4664));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4665));
        if (((panda$core$Bit) { b4663 == NULL }).value) {
        {
            $tmp4667 = NULL;
            $returnValue4652 = $tmp4667;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4667));
            $tmp4646 = 2;
            goto $l4644;
            $l4668:;
            return $returnValue4652;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4672 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4673, 26);
        panda$core$Int64$init$builtin_int64(&$tmp4675, 2);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4674, $tmp4675);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4672, $tmp4673, ((org$pandalanguage$pandac$parser$Token) start4647.value).position, p_doccomment, p_annotations, $tmp4674, &$s4676, NULL, params4656, NULL, b4663);
        $tmp4671 = $tmp4672;
        $tmp4670 = $tmp4671;
        $returnValue4652 = $tmp4670;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4670));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4671));
        $tmp4646 = 3;
        goto $l4644;
        $l4677:;
        return $returnValue4652;
    }
    $l4644:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b4663));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4656));
    params4656 = NULL;
    b4663 = NULL;
    switch ($tmp4646) {
        case 2: goto $l4668;
        case 1: goto $l4661;
        case 0: goto $l4654;
        case 3: goto $l4677;
    }
    $l4679:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl4683 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4684;
    org$pandalanguage$pandac$ASTNode* $tmp4685;
    org$pandalanguage$pandac$ASTNode* $returnValue4687;
    org$pandalanguage$pandac$ASTNode* $tmp4688;
    org$pandalanguage$pandac$ASTNode* $tmp4691;
    org$pandalanguage$pandac$ASTNode* $tmp4692;
    panda$core$Int64 $tmp4694;
    int $tmp4682;
    {
        org$pandalanguage$pandac$ASTNode* $tmp4686 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4685 = $tmp4686;
        $tmp4684 = $tmp4685;
        decl4683 = $tmp4684;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4684));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4685));
        if (((panda$core$Bit) { decl4683 == NULL }).value) {
        {
            $tmp4688 = NULL;
            $returnValue4687 = $tmp4688;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4688));
            $tmp4682 = 0;
            goto $l4680;
            $l4689:;
            return $returnValue4687;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4693 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4694, 16);
        org$pandalanguage$pandac$Position $tmp4696 = (($fn4695) decl4683->$class->vtable[2])(decl4683);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4693, $tmp4694, $tmp4696, p_doccomment, p_annotations, decl4683);
        $tmp4692 = $tmp4693;
        $tmp4691 = $tmp4692;
        $returnValue4687 = $tmp4691;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4691));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4692));
        $tmp4682 = 1;
        goto $l4680;
        $l4697:;
        return $returnValue4687;
    }
    $l4680:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4683));
    decl4683 = NULL;
    switch ($tmp4682) {
        case 1: goto $l4697;
        case 0: goto $l4689;
    }
    $l4699:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name4703;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4704;
    panda$core$Int64 $tmp4705;
    org$pandalanguage$pandac$ASTNode* $returnValue4708;
    org$pandalanguage$pandac$ASTNode* $tmp4709;
    panda$collections$Array* fields4712 = NULL;
    panda$collections$Array* $tmp4713;
    panda$collections$Array* $tmp4714;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4716;
    panda$core$Int64 $tmp4717;
    panda$core$Int64 $tmp4720;
    org$pandalanguage$pandac$ASTNode* field4725 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4726;
    org$pandalanguage$pandac$ASTNode* $tmp4727;
    org$pandalanguage$pandac$ASTNode* $tmp4729;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4736;
    panda$core$Int64 $tmp4737;
    org$pandalanguage$pandac$ASTNode* $tmp4739;
    org$pandalanguage$pandac$ASTNode* $tmp4740;
    org$pandalanguage$pandac$ASTNode* $tmp4741;
    org$pandalanguage$pandac$ASTNode* $tmp4743;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4748;
    panda$core$Int64 $tmp4749;
    org$pandalanguage$pandac$ASTNode* $tmp4752;
    org$pandalanguage$pandac$ASTNode* $tmp4755;
    org$pandalanguage$pandac$ASTNode* $tmp4756;
    panda$core$Int64 $tmp4758;
    panda$core$String* $tmp4759;
    panda$collections$ImmutableArray* $tmp4761;
    int $tmp4702;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4705, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4704, $tmp4705);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4707 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4704, &$s4706);
        name4703 = $tmp4707;
        if (((panda$core$Bit) { !name4703.nonnull }).value) {
        {
            $tmp4709 = NULL;
            $returnValue4708 = $tmp4709;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4709));
            $tmp4702 = 0;
            goto $l4700;
            $l4710:;
            return $returnValue4708;
        }
        }
        panda$collections$Array* $tmp4715 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4715);
        $tmp4714 = $tmp4715;
        $tmp4713 = $tmp4714;
        fields4712 = $tmp4713;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4713));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4714));
        panda$core$Int64$init$builtin_int64(&$tmp4717, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4716, $tmp4717);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4718 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4716);
        if (((panda$core$Bit) { $tmp4718.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4719 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp4720, 104);
            panda$core$Bit $tmp4721 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4719.kind.$rawValue, $tmp4720);
            if ($tmp4721.value) {
            {
                int $tmp4724;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4728 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4727 = $tmp4728;
                    $tmp4726 = $tmp4727;
                    field4725 = $tmp4726;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4726));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4727));
                    if (((panda$core$Bit) { field4725 == NULL }).value) {
                    {
                        $tmp4729 = NULL;
                        $returnValue4708 = $tmp4729;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4729));
                        $tmp4724 = 0;
                        goto $l4722;
                        $l4730:;
                        $tmp4702 = 1;
                        goto $l4700;
                        $l4731:;
                        return $returnValue4708;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields4712, ((panda$core$Object*) field4725));
                    $l4733:;
                    panda$core$Int64$init$builtin_int64(&$tmp4737, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4736, $tmp4737);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp4738 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4736);
                    bool $tmp4735 = ((panda$core$Bit) { $tmp4738.nonnull }).value;
                    if (!$tmp4735) goto $l4734;
                    {
                        {
                            $tmp4739 = field4725;
                            org$pandalanguage$pandac$ASTNode* $tmp4742 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp4741 = $tmp4742;
                            $tmp4740 = $tmp4741;
                            field4725 = $tmp4740;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4740));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4741));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4739));
                        }
                        if (((panda$core$Bit) { field4725 == NULL }).value) {
                        {
                            $tmp4743 = NULL;
                            $returnValue4708 = $tmp4743;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4743));
                            $tmp4724 = 1;
                            goto $l4722;
                            $l4744:;
                            $tmp4702 = 2;
                            goto $l4700;
                            $l4745:;
                            return $returnValue4708;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields4712, ((panda$core$Object*) field4725));
                    }
                    goto $l4733;
                    $l4734:;
                }
                $tmp4724 = -1;
                goto $l4722;
                $l4722:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4725));
                field4725 = NULL;
                switch ($tmp4724) {
                    case 1: goto $l4744;
                    case -1: goto $l4747;
                    case 0: goto $l4730;
                }
                $l4747:;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4749, 104);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4748, $tmp4749);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4751 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4748, &$s4750);
            if (((panda$core$Bit) { !$tmp4751.nonnull }).value) {
            {
                $tmp4752 = NULL;
                $returnValue4708 = $tmp4752;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4752));
                $tmp4702 = 3;
                goto $l4700;
                $l4753:;
                return $returnValue4708;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4757 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4758, 9);
        panda$core$String* $tmp4760 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4703.value));
        $tmp4759 = $tmp4760;
        panda$collections$ImmutableArray* $tmp4762 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields4712);
        $tmp4761 = $tmp4762;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4757, $tmp4758, ((org$pandalanguage$pandac$parser$Token) name4703.value).position, p_doccomment, $tmp4759, $tmp4761);
        $tmp4756 = $tmp4757;
        $tmp4755 = $tmp4756;
        $returnValue4708 = $tmp4755;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4755));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4756));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4761));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4759));
        $tmp4702 = 4;
        goto $l4700;
        $l4763:;
        return $returnValue4708;
    }
    $l4700:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields4712));
    fields4712 = NULL;
    switch ($tmp4702) {
        case 2: goto $l4745;
        case 3: goto $l4753;
        case 1: goto $l4731;
        case 0: goto $l4710;
        case 4: goto $l4763;
    }
    $l4765:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4769;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4770;
    panda$core$Int64 $tmp4771;
    org$pandalanguage$pandac$ASTNode* $returnValue4774;
    org$pandalanguage$pandac$ASTNode* $tmp4775;
    org$pandalanguage$pandac$parser$Token$nullable name4778;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4779;
    panda$core$Int64 $tmp4780;
    org$pandalanguage$pandac$ASTNode* $tmp4783;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4786;
    panda$core$Int64 $tmp4787;
    org$pandalanguage$pandac$ASTNode* $tmp4790;
    panda$collections$Array* members4793 = NULL;
    panda$collections$Array* $tmp4794;
    panda$collections$Array* $tmp4795;
    org$pandalanguage$pandac$ASTNode* dc4797 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4798;
    org$pandalanguage$pandac$parser$Token next4801;
    org$pandalanguage$pandac$parser$Token$Kind $match$2242_134803;
    panda$core$Int64 $tmp4813;
    panda$core$Int64 $tmp4816;
    panda$core$Int64 $tmp4820;
    panda$core$Int64 $tmp4824;
    panda$core$Int64 $tmp4828;
    panda$core$Int64 $tmp4832;
    panda$core$Int64 $tmp4836;
    panda$core$Int64 $tmp4840;
    panda$core$Int64 $tmp4844;
    panda$core$Int64 $tmp4848;
    panda$core$Int64 $tmp4851;
    panda$core$String* $tmp4853;
    panda$core$String* $tmp4854;
    panda$core$String* $tmp4856;
    org$pandalanguage$pandac$ASTNode* $tmp4861;
    org$pandalanguage$pandac$ASTNode* $tmp4862;
    org$pandalanguage$pandac$ASTNode* $tmp4863;
    panda$core$Int64 $tmp4865;
    org$pandalanguage$pandac$ASTNode* c4870 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4871;
    org$pandalanguage$pandac$ASTNode* $tmp4872;
    org$pandalanguage$pandac$ASTNode* $tmp4874;
    org$pandalanguage$pandac$ASTNode* $tmp4878;
    org$pandalanguage$pandac$ASTNode* $tmp4879;
    panda$collections$ImmutableArray* a4881 = NULL;
    panda$collections$ImmutableArray* $tmp4882;
    panda$collections$ImmutableArray* $tmp4883;
    org$pandalanguage$pandac$parser$Token next4887;
    org$pandalanguage$pandac$parser$Token$Kind $match$2266_134889;
    panda$core$Int64 $tmp4890;
    panda$core$Int64 $tmp4893;
    panda$core$String* $tmp4895;
    panda$core$String* $tmp4896;
    panda$core$String* $tmp4898;
    org$pandalanguage$pandac$ASTNode* $tmp4903;
    panda$collections$ImmutableArray* $tmp4906;
    panda$collections$ImmutableArray* $tmp4907;
    panda$collections$ImmutableArray* $tmp4908;
    panda$core$Int64 $tmp4910;
    panda$core$Int64 $tmp4915;
    panda$core$String* $tmp4918;
    panda$core$String* $tmp4919;
    panda$core$String* $tmp4921;
    org$pandalanguage$pandac$ASTNode* $tmp4926;
    org$pandalanguage$pandac$ASTNode* $tmp4929;
    org$pandalanguage$pandac$ASTNode* $tmp4930;
    org$pandalanguage$pandac$ASTNode* $tmp4931;
    panda$core$Int64 $tmp4933;
    org$pandalanguage$pandac$ASTNode* decl4938 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4939;
    org$pandalanguage$pandac$ASTNode* $tmp4940;
    org$pandalanguage$pandac$ASTNode* $tmp4942;
    org$pandalanguage$pandac$ASTNode* $tmp4946;
    org$pandalanguage$pandac$ASTNode* $tmp4947;
    panda$collections$ImmutableArray* $tmp4948;
    panda$collections$ImmutableArray* $tmp4949;
    panda$collections$ImmutableArray* $tmp4950;
    panda$core$Int64 $tmp4953;
    org$pandalanguage$pandac$ASTNode* decl4958 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4959;
    org$pandalanguage$pandac$ASTNode* $tmp4960;
    org$pandalanguage$pandac$ASTNode* $tmp4962;
    org$pandalanguage$pandac$ASTNode* $tmp4966;
    org$pandalanguage$pandac$ASTNode* $tmp4967;
    panda$collections$ImmutableArray* $tmp4968;
    panda$collections$ImmutableArray* $tmp4969;
    panda$collections$ImmutableArray* $tmp4970;
    panda$core$Int64 $tmp4973;
    org$pandalanguage$pandac$ASTNode* decl4978 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4979;
    org$pandalanguage$pandac$ASTNode* $tmp4980;
    org$pandalanguage$pandac$ASTNode* $tmp4982;
    org$pandalanguage$pandac$ASTNode* $tmp4986;
    org$pandalanguage$pandac$ASTNode* $tmp4987;
    panda$collections$ImmutableArray* $tmp4988;
    panda$collections$ImmutableArray* $tmp4989;
    panda$collections$ImmutableArray* $tmp4990;
    panda$core$Int64 $tmp4994;
    panda$core$Int64 $tmp4997;
    org$pandalanguage$pandac$ASTNode* decl5003 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5004;
    org$pandalanguage$pandac$ASTNode* $tmp5005;
    org$pandalanguage$pandac$ASTNode* $tmp5007;
    org$pandalanguage$pandac$ASTNode* $tmp5011;
    org$pandalanguage$pandac$ASTNode* $tmp5012;
    panda$collections$ImmutableArray* $tmp5013;
    panda$collections$ImmutableArray* $tmp5014;
    panda$collections$ImmutableArray* $tmp5015;
    panda$core$Int64 $tmp5021;
    panda$core$Int64 $tmp5024;
    panda$core$Int64 $tmp5028;
    panda$core$Int64 $tmp5032;
    org$pandalanguage$pandac$ASTNode* decl5038 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5039;
    org$pandalanguage$pandac$ASTNode* $tmp5040;
    org$pandalanguage$pandac$ASTNode* $tmp5042;
    org$pandalanguage$pandac$ASTNode* $tmp5046;
    org$pandalanguage$pandac$ASTNode* $tmp5047;
    panda$collections$ImmutableArray* $tmp5048;
    panda$collections$ImmutableArray* $tmp5049;
    panda$collections$ImmutableArray* $tmp5050;
    panda$core$Int64 $tmp5053;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5055;
    panda$core$Int64 $tmp5056;
    panda$core$String* $tmp5058;
    panda$core$String* $tmp5059;
    panda$core$String* $tmp5061;
    org$pandalanguage$pandac$ASTNode* $tmp5066;
    org$pandalanguage$pandac$ASTNode* $tmp5069;
    org$pandalanguage$pandac$ASTNode* $tmp5070;
    panda$core$Int64 $tmp5072;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5073;
    panda$core$Int64 $tmp5074;
    panda$core$String* $tmp5075;
    panda$collections$ImmutableArray* $tmp5077;
    int $tmp4768;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4771, 19);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4770, $tmp4771);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4773 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4770, &$s4772);
        start4769 = $tmp4773;
        if (((panda$core$Bit) { !start4769.nonnull }).value) {
        {
            $tmp4775 = NULL;
            $returnValue4774 = $tmp4775;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4775));
            $tmp4768 = 0;
            goto $l4766;
            $l4776:;
            return $returnValue4774;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4780, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4779, $tmp4780);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4782 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4779, &$s4781);
        name4778 = $tmp4782;
        if (((panda$core$Bit) { !name4778.nonnull }).value) {
        {
            $tmp4783 = NULL;
            $returnValue4774 = $tmp4783;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4783));
            $tmp4768 = 1;
            goto $l4766;
            $l4784:;
            return $returnValue4774;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4787, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4786, $tmp4787);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4789 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4786, &$s4788);
        if (((panda$core$Bit) { !$tmp4789.nonnull }).value) {
        {
            $tmp4790 = NULL;
            $returnValue4774 = $tmp4790;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4790));
            $tmp4768 = 2;
            goto $l4766;
            $l4791:;
            return $returnValue4774;
        }
        }
        panda$collections$Array* $tmp4796 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4796);
        $tmp4795 = $tmp4796;
        $tmp4794 = $tmp4795;
        members4793 = $tmp4794;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4794));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4795));
        $tmp4798 = NULL;
        dc4797 = $tmp4798;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4798));
        $l4799:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4802 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4801 = $tmp4802;
            {
                $match$2242_134803 = next4801.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4813, 17);
                panda$core$Bit $tmp4814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2242_134803.$rawValue, $tmp4813);
                bool $tmp4812 = $tmp4814.value;
                if ($tmp4812) goto $l4815;
                panda$core$Int64$init$builtin_int64(&$tmp4816, 18);
                panda$core$Bit $tmp4817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2242_134803.$rawValue, $tmp4816);
                $tmp4812 = $tmp4817.value;
                $l4815:;
                panda$core$Bit $tmp4818 = { $tmp4812 };
                bool $tmp4811 = $tmp4818.value;
                if ($tmp4811) goto $l4819;
                panda$core$Int64$init$builtin_int64(&$tmp4820, 19);
                panda$core$Bit $tmp4821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2242_134803.$rawValue, $tmp4820);
                $tmp4811 = $tmp4821.value;
                $l4819:;
                panda$core$Bit $tmp4822 = { $tmp4811 };
                bool $tmp4810 = $tmp4822.value;
                if ($tmp4810) goto $l4823;
                panda$core$Int64$init$builtin_int64(&$tmp4824, 21);
                panda$core$Bit $tmp4825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2242_134803.$rawValue, $tmp4824);
                $tmp4810 = $tmp4825.value;
                $l4823:;
                panda$core$Bit $tmp4826 = { $tmp4810 };
                bool $tmp4809 = $tmp4826.value;
                if ($tmp4809) goto $l4827;
                panda$core$Int64$init$builtin_int64(&$tmp4828, 20);
                panda$core$Bit $tmp4829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2242_134803.$rawValue, $tmp4828);
                $tmp4809 = $tmp4829.value;
                $l4827:;
                panda$core$Bit $tmp4830 = { $tmp4809 };
                bool $tmp4808 = $tmp4830.value;
                if ($tmp4808) goto $l4831;
                panda$core$Int64$init$builtin_int64(&$tmp4832, 13);
                panda$core$Bit $tmp4833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2242_134803.$rawValue, $tmp4832);
                $tmp4808 = $tmp4833.value;
                $l4831:;
                panda$core$Bit $tmp4834 = { $tmp4808 };
                bool $tmp4807 = $tmp4834.value;
                if ($tmp4807) goto $l4835;
                panda$core$Int64$init$builtin_int64(&$tmp4836, 23);
                panda$core$Bit $tmp4837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2242_134803.$rawValue, $tmp4836);
                $tmp4807 = $tmp4837.value;
                $l4835:;
                panda$core$Bit $tmp4838 = { $tmp4807 };
                bool $tmp4806 = $tmp4838.value;
                if ($tmp4806) goto $l4839;
                panda$core$Int64$init$builtin_int64(&$tmp4840, 24);
                panda$core$Bit $tmp4841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2242_134803.$rawValue, $tmp4840);
                $tmp4806 = $tmp4841.value;
                $l4839:;
                panda$core$Bit $tmp4842 = { $tmp4806 };
                bool $tmp4805 = $tmp4842.value;
                if ($tmp4805) goto $l4843;
                panda$core$Int64$init$builtin_int64(&$tmp4844, 25);
                panda$core$Bit $tmp4845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2242_134803.$rawValue, $tmp4844);
                $tmp4805 = $tmp4845.value;
                $l4843:;
                panda$core$Bit $tmp4846 = { $tmp4805 };
                bool $tmp4804 = $tmp4846.value;
                if ($tmp4804) goto $l4847;
                panda$core$Int64$init$builtin_int64(&$tmp4848, 26);
                panda$core$Bit $tmp4849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2242_134803.$rawValue, $tmp4848);
                $tmp4804 = $tmp4849.value;
                $l4847:;
                panda$core$Bit $tmp4850 = { $tmp4804 };
                if ($tmp4850.value) {
                {
                    goto $l4800;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4851, 11);
                panda$core$Bit $tmp4852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2242_134803.$rawValue, $tmp4851);
                if ($tmp4852.value) {
                {
                    if (((panda$core$Bit) { dc4797 != NULL }).value) {
                    {
                        panda$core$String* $tmp4857 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4801);
                        $tmp4856 = $tmp4857;
                        panda$core$String* $tmp4858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4855, $tmp4856);
                        $tmp4854 = $tmp4858;
                        panda$core$String* $tmp4860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4854, &$s4859);
                        $tmp4853 = $tmp4860;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4801, $tmp4853);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4853));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4854));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4856));
                    }
                    }
                    {
                        $tmp4861 = dc4797;
                        org$pandalanguage$pandac$ASTNode* $tmp4864 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4863 = $tmp4864;
                        $tmp4862 = $tmp4863;
                        dc4797 = $tmp4862;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4862));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4863));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4861));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4865, 48);
                panda$core$Bit $tmp4866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2242_134803.$rawValue, $tmp4865);
                if ($tmp4866.value) {
                {
                    int $tmp4869;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4873 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4797);
                        $tmp4872 = $tmp4873;
                        $tmp4871 = $tmp4872;
                        c4870 = $tmp4871;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4871));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4872));
                        if (((panda$core$Bit) { c4870 == NULL }).value) {
                        {
                            $tmp4874 = NULL;
                            $returnValue4774 = $tmp4874;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4874));
                            $tmp4869 = 0;
                            goto $l4867;
                            $l4875:;
                            $tmp4768 = 3;
                            goto $l4766;
                            $l4876:;
                            return $returnValue4774;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4793, ((panda$core$Object*) c4870));
                        {
                            $tmp4878 = dc4797;
                            $tmp4879 = NULL;
                            dc4797 = $tmp4879;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4879));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4878));
                        }
                    }
                    $tmp4869 = -1;
                    goto $l4867;
                    $l4867:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c4870));
                    c4870 = NULL;
                    switch ($tmp4869) {
                        case -1: goto $l4880;
                        case 0: goto $l4875;
                    }
                    $l4880:;
                }
                }
                else {
                {
                    goto $l4800;
                }
                }
                }
                }
            }
        }
        }
        $l4800:;
        panda$collections$ImmutableArray* $tmp4884 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4884);
        $tmp4883 = $tmp4884;
        $tmp4882 = $tmp4883;
        a4881 = $tmp4882;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4882));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4883));
        $l4885:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4888 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4887 = $tmp4888;
            {
                $match$2266_134889 = next4887.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4890, 13);
                panda$core$Bit $tmp4891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2266_134889.$rawValue, $tmp4890);
                if ($tmp4891.value) {
                {
                    panda$core$Int64 $tmp4892 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4881);
                    panda$core$Int64$init$builtin_int64(&$tmp4893, 0);
                    panda$core$Bit $tmp4894 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4892, $tmp4893);
                    if ($tmp4894.value) {
                    {
                        panda$core$String* $tmp4899 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4887);
                        $tmp4898 = $tmp4899;
                        panda$core$String* $tmp4900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4897, $tmp4898);
                        $tmp4896 = $tmp4900;
                        panda$core$String* $tmp4902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4896, &$s4901);
                        $tmp4895 = $tmp4902;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4887, $tmp4895);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4895));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4896));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4898));
                        $tmp4903 = NULL;
                        $returnValue4774 = $tmp4903;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4903));
                        $tmp4768 = 4;
                        goto $l4766;
                        $l4904:;
                        return $returnValue4774;
                    }
                    }
                    {
                        $tmp4906 = a4881;
                        panda$collections$ImmutableArray* $tmp4909 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp4908 = $tmp4909;
                        $tmp4907 = $tmp4908;
                        a4881 = $tmp4907;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4907));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4908));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4906));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4910, 11);
                panda$core$Bit $tmp4911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2266_134889.$rawValue, $tmp4910);
                if ($tmp4911.value) {
                {
                    bool $tmp4912 = ((panda$core$Bit) { dc4797 != NULL }).value;
                    if ($tmp4912) goto $l4913;
                    panda$core$Int64 $tmp4914 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4881);
                    panda$core$Int64$init$builtin_int64(&$tmp4915, 0);
                    panda$core$Bit $tmp4916 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4914, $tmp4915);
                    $tmp4912 = $tmp4916.value;
                    $l4913:;
                    panda$core$Bit $tmp4917 = { $tmp4912 };
                    if ($tmp4917.value) {
                    {
                        panda$core$String* $tmp4922 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4887);
                        $tmp4921 = $tmp4922;
                        panda$core$String* $tmp4923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4920, $tmp4921);
                        $tmp4919 = $tmp4923;
                        panda$core$String* $tmp4925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4919, &$s4924);
                        $tmp4918 = $tmp4925;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4887, $tmp4918);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4918));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4919));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4921));
                        $tmp4926 = NULL;
                        $returnValue4774 = $tmp4926;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4926));
                        $tmp4768 = 5;
                        goto $l4766;
                        $l4927:;
                        return $returnValue4774;
                    }
                    }
                    {
                        $tmp4929 = dc4797;
                        org$pandalanguage$pandac$ASTNode* $tmp4932 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4931 = $tmp4932;
                        $tmp4930 = $tmp4931;
                        dc4797 = $tmp4930;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4930));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4931));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4929));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4933, 17);
                panda$core$Bit $tmp4934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2266_134889.$rawValue, $tmp4933);
                if ($tmp4934.value) {
                {
                    int $tmp4937;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4941 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4797, a4881);
                        $tmp4940 = $tmp4941;
                        $tmp4939 = $tmp4940;
                        decl4938 = $tmp4939;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4939));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4940));
                        if (((panda$core$Bit) { decl4938 == NULL }).value) {
                        {
                            $tmp4942 = NULL;
                            $returnValue4774 = $tmp4942;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4942));
                            $tmp4937 = 0;
                            goto $l4935;
                            $l4943:;
                            $tmp4768 = 6;
                            goto $l4766;
                            $l4944:;
                            return $returnValue4774;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4793, ((panda$core$Object*) decl4938));
                        {
                            $tmp4946 = dc4797;
                            $tmp4947 = NULL;
                            dc4797 = $tmp4947;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4947));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4946));
                        }
                        {
                            $tmp4948 = a4881;
                            panda$collections$ImmutableArray* $tmp4951 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4951);
                            $tmp4950 = $tmp4951;
                            $tmp4949 = $tmp4950;
                            a4881 = $tmp4949;
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
                panda$core$Int64$init$builtin_int64(&$tmp4953, 18);
                panda$core$Bit $tmp4954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2266_134889.$rawValue, $tmp4953);
                if ($tmp4954.value) {
                {
                    int $tmp4957;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4961 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4797, a4881);
                        $tmp4960 = $tmp4961;
                        $tmp4959 = $tmp4960;
                        decl4958 = $tmp4959;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4959));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4960));
                        if (((panda$core$Bit) { decl4958 == NULL }).value) {
                        {
                            $tmp4962 = NULL;
                            $returnValue4774 = $tmp4962;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4962));
                            $tmp4957 = 0;
                            goto $l4955;
                            $l4963:;
                            $tmp4768 = 7;
                            goto $l4766;
                            $l4964:;
                            return $returnValue4774;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4793, ((panda$core$Object*) decl4958));
                        {
                            $tmp4966 = dc4797;
                            $tmp4967 = NULL;
                            dc4797 = $tmp4967;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4967));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4966));
                        }
                        {
                            $tmp4968 = a4881;
                            panda$collections$ImmutableArray* $tmp4971 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4971);
                            $tmp4970 = $tmp4971;
                            $tmp4969 = $tmp4970;
                            a4881 = $tmp4969;
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
                panda$core$Int64$init$builtin_int64(&$tmp4973, 19);
                panda$core$Bit $tmp4974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2266_134889.$rawValue, $tmp4973);
                if ($tmp4974.value) {
                {
                    int $tmp4977;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4981 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4797, a4881);
                        $tmp4980 = $tmp4981;
                        $tmp4979 = $tmp4980;
                        decl4978 = $tmp4979;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4979));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4980));
                        if (((panda$core$Bit) { decl4978 == NULL }).value) {
                        {
                            $tmp4982 = NULL;
                            $returnValue4774 = $tmp4982;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4982));
                            $tmp4977 = 0;
                            goto $l4975;
                            $l4983:;
                            $tmp4768 = 8;
                            goto $l4766;
                            $l4984:;
                            return $returnValue4774;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4793, ((panda$core$Object*) decl4978));
                        {
                            $tmp4986 = dc4797;
                            $tmp4987 = NULL;
                            dc4797 = $tmp4987;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4987));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4986));
                        }
                        {
                            $tmp4988 = a4881;
                            panda$collections$ImmutableArray* $tmp4991 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4991);
                            $tmp4990 = $tmp4991;
                            $tmp4989 = $tmp4990;
                            a4881 = $tmp4989;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4989));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4990));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4988));
                        }
                    }
                    $tmp4977 = -1;
                    goto $l4975;
                    $l4975:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4978));
                    decl4978 = NULL;
                    switch ($tmp4977) {
                        case -1: goto $l4992;
                        case 0: goto $l4983;
                    }
                    $l4992:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4994, 21);
                panda$core$Bit $tmp4995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2266_134889.$rawValue, $tmp4994);
                bool $tmp4993 = $tmp4995.value;
                if ($tmp4993) goto $l4996;
                panda$core$Int64$init$builtin_int64(&$tmp4997, 20);
                panda$core$Bit $tmp4998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2266_134889.$rawValue, $tmp4997);
                $tmp4993 = $tmp4998.value;
                $l4996:;
                panda$core$Bit $tmp4999 = { $tmp4993 };
                if ($tmp4999.value) {
                {
                    int $tmp5002;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5006 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4797, a4881);
                        $tmp5005 = $tmp5006;
                        $tmp5004 = $tmp5005;
                        decl5003 = $tmp5004;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5004));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5005));
                        if (((panda$core$Bit) { decl5003 == NULL }).value) {
                        {
                            $tmp5007 = NULL;
                            $returnValue4774 = $tmp5007;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5007));
                            $tmp5002 = 0;
                            goto $l5000;
                            $l5008:;
                            $tmp4768 = 9;
                            goto $l4766;
                            $l5009:;
                            return $returnValue4774;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4793, ((panda$core$Object*) decl5003));
                        {
                            $tmp5011 = dc4797;
                            $tmp5012 = NULL;
                            dc4797 = $tmp5012;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5012));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5011));
                        }
                        {
                            $tmp5013 = a4881;
                            panda$collections$ImmutableArray* $tmp5016 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5016);
                            $tmp5015 = $tmp5016;
                            $tmp5014 = $tmp5015;
                            a4881 = $tmp5014;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5014));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5015));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5013));
                        }
                    }
                    $tmp5002 = -1;
                    goto $l5000;
                    $l5000:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5003));
                    decl5003 = NULL;
                    switch ($tmp5002) {
                        case -1: goto $l5017;
                        case 0: goto $l5008;
                    }
                    $l5017:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5021, 23);
                panda$core$Bit $tmp5022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2266_134889.$rawValue, $tmp5021);
                bool $tmp5020 = $tmp5022.value;
                if ($tmp5020) goto $l5023;
                panda$core$Int64$init$builtin_int64(&$tmp5024, 24);
                panda$core$Bit $tmp5025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2266_134889.$rawValue, $tmp5024);
                $tmp5020 = $tmp5025.value;
                $l5023:;
                panda$core$Bit $tmp5026 = { $tmp5020 };
                bool $tmp5019 = $tmp5026.value;
                if ($tmp5019) goto $l5027;
                panda$core$Int64$init$builtin_int64(&$tmp5028, 25);
                panda$core$Bit $tmp5029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2266_134889.$rawValue, $tmp5028);
                $tmp5019 = $tmp5029.value;
                $l5027:;
                panda$core$Bit $tmp5030 = { $tmp5019 };
                bool $tmp5018 = $tmp5030.value;
                if ($tmp5018) goto $l5031;
                panda$core$Int64$init$builtin_int64(&$tmp5032, 26);
                panda$core$Bit $tmp5033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2266_134889.$rawValue, $tmp5032);
                $tmp5018 = $tmp5033.value;
                $l5031:;
                panda$core$Bit $tmp5034 = { $tmp5018 };
                if ($tmp5034.value) {
                {
                    int $tmp5037;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5041 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4797, a4881);
                        $tmp5040 = $tmp5041;
                        $tmp5039 = $tmp5040;
                        decl5038 = $tmp5039;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5039));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5040));
                        if (((panda$core$Bit) { decl5038 == NULL }).value) {
                        {
                            $tmp5042 = NULL;
                            $returnValue4774 = $tmp5042;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5042));
                            $tmp5037 = 0;
                            goto $l5035;
                            $l5043:;
                            $tmp4768 = 10;
                            goto $l4766;
                            $l5044:;
                            return $returnValue4774;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4793, ((panda$core$Object*) decl5038));
                        {
                            $tmp5046 = dc4797;
                            $tmp5047 = NULL;
                            dc4797 = $tmp5047;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5047));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5046));
                        }
                        {
                            $tmp5048 = a4881;
                            panda$collections$ImmutableArray* $tmp5051 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5051);
                            $tmp5050 = $tmp5051;
                            $tmp5049 = $tmp5050;
                            a4881 = $tmp5049;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5049));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5050));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5048));
                        }
                    }
                    $tmp5037 = -1;
                    goto $l5035;
                    $l5035:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5038));
                    decl5038 = NULL;
                    switch ($tmp5037) {
                        case 0: goto $l5043;
                        case -1: goto $l5052;
                    }
                    $l5052:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5053, 100);
                panda$core$Bit $tmp5054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2266_134889.$rawValue, $tmp5053);
                if ($tmp5054.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp5056, 100);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5055, $tmp5056);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5055, &$s5057);
                    goto $l4886;
                }
                }
                else {
                {
                    panda$core$String* $tmp5062 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4887);
                    $tmp5061 = $tmp5062;
                    panda$core$String* $tmp5063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5060, $tmp5061);
                    $tmp5059 = $tmp5063;
                    panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5059, &$s5064);
                    $tmp5058 = $tmp5065;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4887, $tmp5058);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5058));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5059));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5061));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp5066 = NULL;
                    $returnValue4774 = $tmp5066;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5066));
                    $tmp4768 = 11;
                    goto $l4766;
                    $l5067:;
                    return $returnValue4774;
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
        $l4886:;
        org$pandalanguage$pandac$ASTNode* $tmp5071 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5072, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5074, 2);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5073, $tmp5074);
        panda$core$String* $tmp5076 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4778.value));
        $tmp5075 = $tmp5076;
        panda$collections$ImmutableArray* $tmp5078 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4793);
        $tmp5077 = $tmp5078;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5071, $tmp5072, ((org$pandalanguage$pandac$parser$Token) start4769.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp5073, $tmp5075, NULL, NULL, $tmp5077);
        $tmp5070 = $tmp5071;
        $tmp5069 = $tmp5070;
        $returnValue4774 = $tmp5069;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5069));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5070));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5077));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5075));
        $tmp4768 = 12;
        goto $l4766;
        $l5079:;
        return $returnValue4774;
    }
    $l4766:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4881));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4797));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4793));
    members4793 = NULL;
    a4881 = NULL;
    switch ($tmp4768) {
        case 8: goto $l4984;
        case 11: goto $l5067;
        case 12: goto $l5079;
        case 4: goto $l4904;
        case 5: goto $l4927;
        case 7: goto $l4964;
        case 9: goto $l5009;
        case 3: goto $l4876;
        case 6: goto $l4944;
        case 1: goto $l4784;
        case 2: goto $l4791;
        case 10: goto $l5044;
        case 0: goto $l4776;
    }
    $l5081:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start5085;
    org$pandalanguage$pandac$ASTNode* dc5087 = NULL;
    panda$core$Int64 $tmp5088;
    org$pandalanguage$pandac$ASTNode* $tmp5090;
    org$pandalanguage$pandac$ASTNode* $tmp5091;
    org$pandalanguage$pandac$ASTNode* $tmp5092;
    org$pandalanguage$pandac$ASTNode* $returnValue5094;
    org$pandalanguage$pandac$ASTNode* $tmp5095;
    org$pandalanguage$pandac$ASTNode* $tmp5098;
    org$pandalanguage$pandac$ASTNode* $tmp5099;
    panda$collections$ImmutableArray* a5100 = NULL;
    panda$collections$ImmutableArray* $tmp5101;
    panda$collections$ImmutableArray* $tmp5102;
    org$pandalanguage$pandac$ASTNode* $tmp5104;
    org$pandalanguage$pandac$parser$Token$Kind $match$2352_95107;
    panda$core$Int64 $tmp5109;
    org$pandalanguage$pandac$ASTNode* $tmp5111;
    org$pandalanguage$pandac$ASTNode* $tmp5112;
    panda$core$Int64 $tmp5116;
    org$pandalanguage$pandac$ASTNode* $tmp5118;
    org$pandalanguage$pandac$ASTNode* $tmp5119;
    panda$core$Int64 $tmp5123;
    org$pandalanguage$pandac$ASTNode* $tmp5125;
    org$pandalanguage$pandac$ASTNode* $tmp5126;
    panda$core$Int64 $tmp5131;
    panda$core$Int64 $tmp5134;
    org$pandalanguage$pandac$ASTNode* $tmp5137;
    org$pandalanguage$pandac$ASTNode* $tmp5138;
    panda$core$Int64 $tmp5142;
    org$pandalanguage$pandac$ASTNode* $tmp5144;
    org$pandalanguage$pandac$ASTNode* $tmp5145;
    panda$core$Int64 $tmp5152;
    panda$core$Int64 $tmp5155;
    panda$core$Int64 $tmp5159;
    panda$core$Int64 $tmp5163;
    org$pandalanguage$pandac$ASTNode* $tmp5166;
    org$pandalanguage$pandac$ASTNode* $tmp5167;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5171;
    panda$core$Int64 $tmp5172;
    org$pandalanguage$pandac$ASTNode* $tmp5174;
    int $tmp5084;
    {
        org$pandalanguage$pandac$parser$Token $tmp5086 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start5085 = $tmp5086;
        memset(&dc5087, 0, sizeof(dc5087));
        panda$core$Int64$init$builtin_int64(&$tmp5088, 11);
        panda$core$Bit $tmp5089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start5085.kind.$rawValue, $tmp5088);
        if ($tmp5089.value) {
        {
            {
                $tmp5090 = dc5087;
                org$pandalanguage$pandac$ASTNode* $tmp5093 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5092 = $tmp5093;
                $tmp5091 = $tmp5092;
                dc5087 = $tmp5091;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5091));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5092));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5090));
            }
            if (((panda$core$Bit) { dc5087 == NULL }).value) {
            {
                $tmp5095 = NULL;
                $returnValue5094 = $tmp5095;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5095));
                $tmp5084 = 0;
                goto $l5082;
                $l5096:;
                return $returnValue5094;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5098 = dc5087;
                $tmp5099 = NULL;
                dc5087 = $tmp5099;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5099));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5098));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp5103 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp5102 = $tmp5103;
        $tmp5101 = $tmp5102;
        a5100 = $tmp5101;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5102));
        if (((panda$core$Bit) { a5100 == NULL }).value) {
        {
            $tmp5104 = NULL;
            $returnValue5094 = $tmp5104;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5104));
            $tmp5084 = 1;
            goto $l5082;
            $l5105:;
            return $returnValue5094;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp5108 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2352_95107 = $tmp5108.kind;
            panda$core$Int64$init$builtin_int64(&$tmp5109, 17);
            panda$core$Bit $tmp5110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2352_95107.$rawValue, $tmp5109);
            if ($tmp5110.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5113 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5087, a5100);
                $tmp5112 = $tmp5113;
                $tmp5111 = $tmp5112;
                $returnValue5094 = $tmp5111;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5111));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5112));
                $tmp5084 = 2;
                goto $l5082;
                $l5114:;
                return $returnValue5094;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5116, 18);
            panda$core$Bit $tmp5117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2352_95107.$rawValue, $tmp5116);
            if ($tmp5117.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5120 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5087, a5100);
                $tmp5119 = $tmp5120;
                $tmp5118 = $tmp5119;
                $returnValue5094 = $tmp5118;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5119));
                $tmp5084 = 3;
                goto $l5082;
                $l5121:;
                return $returnValue5094;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5123, 19);
            panda$core$Bit $tmp5124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2352_95107.$rawValue, $tmp5123);
            if ($tmp5124.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5127 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5087, a5100);
                $tmp5126 = $tmp5127;
                $tmp5125 = $tmp5126;
                $returnValue5094 = $tmp5125;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5126));
                $tmp5084 = 4;
                goto $l5082;
                $l5128:;
                return $returnValue5094;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5131, 21);
            panda$core$Bit $tmp5132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2352_95107.$rawValue, $tmp5131);
            bool $tmp5130 = $tmp5132.value;
            if ($tmp5130) goto $l5133;
            panda$core$Int64$init$builtin_int64(&$tmp5134, 20);
            panda$core$Bit $tmp5135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2352_95107.$rawValue, $tmp5134);
            $tmp5130 = $tmp5135.value;
            $l5133:;
            panda$core$Bit $tmp5136 = { $tmp5130 };
            if ($tmp5136.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5139 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5087, a5100);
                $tmp5138 = $tmp5139;
                $tmp5137 = $tmp5138;
                $returnValue5094 = $tmp5137;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5137));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5138));
                $tmp5084 = 5;
                goto $l5082;
                $l5140:;
                return $returnValue5094;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5142, 22);
            panda$core$Bit $tmp5143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2352_95107.$rawValue, $tmp5142);
            if ($tmp5143.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5146 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5087, a5100);
                $tmp5145 = $tmp5146;
                $tmp5144 = $tmp5145;
                $returnValue5094 = $tmp5144;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5144));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5145));
                $tmp5084 = 6;
                goto $l5082;
                $l5147:;
                return $returnValue5094;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5152, 23);
            panda$core$Bit $tmp5153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2352_95107.$rawValue, $tmp5152);
            bool $tmp5151 = $tmp5153.value;
            if ($tmp5151) goto $l5154;
            panda$core$Int64$init$builtin_int64(&$tmp5155, 24);
            panda$core$Bit $tmp5156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2352_95107.$rawValue, $tmp5155);
            $tmp5151 = $tmp5156.value;
            $l5154:;
            panda$core$Bit $tmp5157 = { $tmp5151 };
            bool $tmp5150 = $tmp5157.value;
            if ($tmp5150) goto $l5158;
            panda$core$Int64$init$builtin_int64(&$tmp5159, 25);
            panda$core$Bit $tmp5160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2352_95107.$rawValue, $tmp5159);
            $tmp5150 = $tmp5160.value;
            $l5158:;
            panda$core$Bit $tmp5161 = { $tmp5150 };
            bool $tmp5149 = $tmp5161.value;
            if ($tmp5149) goto $l5162;
            panda$core$Int64$init$builtin_int64(&$tmp5163, 26);
            panda$core$Bit $tmp5164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2352_95107.$rawValue, $tmp5163);
            $tmp5149 = $tmp5164.value;
            $l5162:;
            panda$core$Bit $tmp5165 = { $tmp5149 };
            if ($tmp5165.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5168 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5087, a5100);
                $tmp5167 = $tmp5168;
                $tmp5166 = $tmp5167;
                $returnValue5094 = $tmp5166;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5166));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5167));
                $tmp5084 = 7;
                goto $l5082;
                $l5169:;
                return $returnValue5094;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp5172, 17);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5171, $tmp5172);
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5171, &$s5173);
                $tmp5174 = NULL;
                $returnValue5094 = $tmp5174;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5174));
                $tmp5084 = 8;
                goto $l5082;
                $l5175:;
                return $returnValue5094;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp5084 = -1;
    goto $l5082;
    $l5082:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a5100));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc5087));
    a5100 = NULL;
    switch ($tmp5084) {
        case 4: goto $l5128;
        case -1: goto $l5177;
        case 7: goto $l5169;
        case 5: goto $l5140;
        case 6: goto $l5147;
        case 3: goto $l5121;
        case 8: goto $l5175;
        case 2: goto $l5114;
        case 1: goto $l5105;
        case 0: goto $l5096;
    }
    $l5177:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5181;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5182;
    panda$core$Int64 $tmp5183;
    org$pandalanguage$pandac$ASTNode* $returnValue5186;
    org$pandalanguage$pandac$ASTNode* $tmp5187;
    org$pandalanguage$pandac$parser$Token$nullable name5190;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5191;
    panda$core$Int64 $tmp5192;
    org$pandalanguage$pandac$ASTNode* $tmp5195;
    panda$collections$ImmutableArray* generics5198 = NULL;
    panda$core$Int64 $tmp5200;
    panda$collections$ImmutableArray* $tmp5202;
    panda$collections$ImmutableArray* $tmp5203;
    panda$collections$ImmutableArray* $tmp5204;
    org$pandalanguage$pandac$ASTNode* $tmp5206;
    panda$collections$ImmutableArray* $tmp5209;
    panda$collections$ImmutableArray* $tmp5210;
    panda$collections$ImmutableArray* stypes5211 = NULL;
    panda$core$Int64 $tmp5213;
    panda$collections$ImmutableArray* $tmp5215;
    panda$collections$ImmutableArray* $tmp5216;
    panda$collections$ImmutableArray* $tmp5217;
    org$pandalanguage$pandac$ASTNode* $tmp5219;
    panda$collections$ImmutableArray* $tmp5222;
    panda$collections$ImmutableArray* $tmp5223;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5224;
    panda$core$Int64 $tmp5225;
    org$pandalanguage$pandac$ASTNode* $tmp5228;
    panda$collections$Array* members5231 = NULL;
    panda$collections$Array* $tmp5232;
    panda$collections$Array* $tmp5233;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5238;
    panda$core$Int64 $tmp5239;
    org$pandalanguage$pandac$ASTNode* member5244 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5245;
    org$pandalanguage$pandac$ASTNode* $tmp5246;
    org$pandalanguage$pandac$ASTNode* $tmp5248;
    org$pandalanguage$pandac$ASTNode* $tmp5253;
    org$pandalanguage$pandac$ASTNode* $tmp5254;
    panda$core$Int64 $tmp5256;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5257;
    panda$core$Int64 $tmp5258;
    panda$core$String* $tmp5259;
    panda$collections$ImmutableArray* $tmp5261;
    int $tmp5180;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5183, 17);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5182, $tmp5183);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5185 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5182, &$s5184);
        start5181 = $tmp5185;
        if (((panda$core$Bit) { !start5181.nonnull }).value) {
        {
            $tmp5187 = NULL;
            $returnValue5186 = $tmp5187;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5187));
            $tmp5180 = 0;
            goto $l5178;
            $l5188:;
            return $returnValue5186;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5192, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5191, $tmp5192);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5194 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5191, &$s5193);
        name5190 = $tmp5194;
        if (((panda$core$Bit) { !name5190.nonnull }).value) {
        {
            $tmp5195 = NULL;
            $returnValue5186 = $tmp5195;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5195));
            $tmp5180 = 1;
            goto $l5178;
            $l5196:;
            return $returnValue5186;
        }
        }
        memset(&generics5198, 0, sizeof(generics5198));
        org$pandalanguage$pandac$parser$Token $tmp5199 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5200, 62);
        panda$core$Bit $tmp5201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5199.kind.$rawValue, $tmp5200);
        if ($tmp5201.value) {
        {
            {
                $tmp5202 = generics5198;
                panda$collections$ImmutableArray* $tmp5205 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5204 = $tmp5205;
                $tmp5203 = $tmp5204;
                generics5198 = $tmp5203;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5203));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5204));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5202));
            }
            if (((panda$core$Bit) { generics5198 == NULL }).value) {
            {
                $tmp5206 = NULL;
                $returnValue5186 = $tmp5206;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5206));
                $tmp5180 = 2;
                goto $l5178;
                $l5207:;
                return $returnValue5186;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5209 = generics5198;
                $tmp5210 = NULL;
                generics5198 = $tmp5210;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5210));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5209));
            }
        }
        }
        memset(&stypes5211, 0, sizeof(stypes5211));
        org$pandalanguage$pandac$parser$Token $tmp5212 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5213, 95);
        panda$core$Bit $tmp5214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5212.kind.$rawValue, $tmp5213);
        if ($tmp5214.value) {
        {
            {
                $tmp5215 = stypes5211;
                panda$collections$ImmutableArray* $tmp5218 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5217 = $tmp5218;
                $tmp5216 = $tmp5217;
                stypes5211 = $tmp5216;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5215));
            }
            if (((panda$core$Bit) { stypes5211 == NULL }).value) {
            {
                $tmp5219 = NULL;
                $returnValue5186 = $tmp5219;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5219));
                $tmp5180 = 3;
                goto $l5178;
                $l5220:;
                return $returnValue5186;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5222 = stypes5211;
                $tmp5223 = NULL;
                stypes5211 = $tmp5223;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5223));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5222));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5225, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5224, $tmp5225);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5227 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5224, &$s5226);
        if (((panda$core$Bit) { !$tmp5227.nonnull }).value) {
        {
            $tmp5228 = NULL;
            $returnValue5186 = $tmp5228;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5228));
            $tmp5180 = 4;
            goto $l5178;
            $l5229:;
            return $returnValue5186;
        }
        }
        panda$collections$Array* $tmp5234 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5234);
        $tmp5233 = $tmp5234;
        $tmp5232 = $tmp5233;
        members5231 = $tmp5232;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5232));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5233));
        $l5235:;
        panda$core$Int64$init$builtin_int64(&$tmp5239, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5238, $tmp5239);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5240 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5238);
        bool $tmp5237 = ((panda$core$Bit) { !$tmp5240.nonnull }).value;
        if (!$tmp5237) goto $l5236;
        {
            int $tmp5243;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5247 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5246 = $tmp5247;
                $tmp5245 = $tmp5246;
                member5244 = $tmp5245;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5245));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5246));
                if (((panda$core$Bit) { member5244 == NULL }).value) {
                {
                    $tmp5248 = NULL;
                    $returnValue5186 = $tmp5248;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5248));
                    $tmp5243 = 0;
                    goto $l5241;
                    $l5249:;
                    $tmp5180 = 5;
                    goto $l5178;
                    $l5250:;
                    return $returnValue5186;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5231, ((panda$core$Object*) member5244));
            }
            $tmp5243 = -1;
            goto $l5241;
            $l5241:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5244));
            member5244 = NULL;
            switch ($tmp5243) {
                case -1: goto $l5252;
                case 0: goto $l5249;
            }
            $l5252:;
        }
        goto $l5235;
        $l5236:;
        org$pandalanguage$pandac$ASTNode* $tmp5255 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5256, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5258, 0);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5257, $tmp5258);
        panda$core$String* $tmp5260 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5190.value));
        $tmp5259 = $tmp5260;
        panda$collections$ImmutableArray* $tmp5262 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5231);
        $tmp5261 = $tmp5262;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5255, $tmp5256, ((org$pandalanguage$pandac$parser$Token) start5181.value).position, p_doccomment, p_annotations, $tmp5257, $tmp5259, generics5198, stypes5211, $tmp5261);
        $tmp5254 = $tmp5255;
        $tmp5253 = $tmp5254;
        $returnValue5186 = $tmp5253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5259));
        $tmp5180 = 6;
        goto $l5178;
        $l5263:;
        return $returnValue5186;
    }
    $l5178:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5231));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes5211));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5198));
    members5231 = NULL;
    switch ($tmp5180) {
        case 4: goto $l5229;
        case 3: goto $l5220;
        case 2: goto $l5207;
        case 6: goto $l5263;
        case 5: goto $l5250;
        case 0: goto $l5188;
        case 1: goto $l5196;
    }
    $l5265:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5269;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5270;
    panda$core$Int64 $tmp5271;
    org$pandalanguage$pandac$ASTNode* $returnValue5274;
    org$pandalanguage$pandac$ASTNode* $tmp5275;
    org$pandalanguage$pandac$parser$Token$nullable name5278;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5279;
    panda$core$Int64 $tmp5280;
    org$pandalanguage$pandac$ASTNode* $tmp5283;
    panda$collections$ImmutableArray* generics5286 = NULL;
    panda$core$Int64 $tmp5288;
    panda$collections$ImmutableArray* $tmp5290;
    panda$collections$ImmutableArray* $tmp5291;
    panda$collections$ImmutableArray* $tmp5292;
    org$pandalanguage$pandac$ASTNode* $tmp5294;
    panda$collections$ImmutableArray* $tmp5297;
    panda$collections$ImmutableArray* $tmp5298;
    panda$collections$ImmutableArray* $tmp5299;
    panda$collections$Array* intfs5301 = NULL;
    panda$collections$Array* $tmp5302;
    panda$collections$Array* $tmp5303;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5305;
    panda$core$Int64 $tmp5306;
    org$pandalanguage$pandac$ASTNode* t5311 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5312;
    org$pandalanguage$pandac$ASTNode* $tmp5313;
    org$pandalanguage$pandac$ASTNode* $tmp5315;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5322;
    panda$core$Int64 $tmp5323;
    org$pandalanguage$pandac$ASTNode* $tmp5325;
    org$pandalanguage$pandac$ASTNode* $tmp5326;
    org$pandalanguage$pandac$ASTNode* $tmp5327;
    org$pandalanguage$pandac$ASTNode* $tmp5329;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5334;
    panda$core$Int64 $tmp5335;
    org$pandalanguage$pandac$ASTNode* $tmp5338;
    panda$collections$Array* members5341 = NULL;
    panda$collections$Array* $tmp5342;
    panda$collections$Array* $tmp5343;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5348;
    panda$core$Int64 $tmp5349;
    org$pandalanguage$pandac$ASTNode* member5354 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5355;
    org$pandalanguage$pandac$ASTNode* $tmp5356;
    org$pandalanguage$pandac$ASTNode* $tmp5358;
    org$pandalanguage$pandac$ASTNode* $tmp5363;
    org$pandalanguage$pandac$ASTNode* $tmp5364;
    panda$core$Int64 $tmp5366;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5367;
    panda$core$Int64 $tmp5368;
    panda$core$String* $tmp5369;
    panda$collections$ImmutableArray* $tmp5371;
    panda$collections$ImmutableArray* $tmp5373;
    int $tmp5268;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5271, 18);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5270, $tmp5271);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5273 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5270, &$s5272);
        start5269 = $tmp5273;
        if (((panda$core$Bit) { !start5269.nonnull }).value) {
        {
            $tmp5275 = NULL;
            $returnValue5274 = $tmp5275;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5275));
            $tmp5268 = 0;
            goto $l5266;
            $l5276:;
            return $returnValue5274;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5280, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5279, $tmp5280);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5282 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5279, &$s5281);
        name5278 = $tmp5282;
        if (((panda$core$Bit) { !name5278.nonnull }).value) {
        {
            $tmp5283 = NULL;
            $returnValue5274 = $tmp5283;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5283));
            $tmp5268 = 1;
            goto $l5266;
            $l5284:;
            return $returnValue5274;
        }
        }
        memset(&generics5286, 0, sizeof(generics5286));
        org$pandalanguage$pandac$parser$Token $tmp5287 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5288, 62);
        panda$core$Bit $tmp5289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5287.kind.$rawValue, $tmp5288);
        if ($tmp5289.value) {
        {
            {
                $tmp5290 = generics5286;
                panda$collections$ImmutableArray* $tmp5293 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5292 = $tmp5293;
                $tmp5291 = $tmp5292;
                generics5286 = $tmp5291;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5291));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5292));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5290));
            }
            if (((panda$core$Bit) { generics5286 == NULL }).value) {
            {
                $tmp5294 = NULL;
                $returnValue5274 = $tmp5294;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5294));
                $tmp5268 = 2;
                goto $l5266;
                $l5295:;
                return $returnValue5274;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5297 = generics5286;
                panda$collections$ImmutableArray* $tmp5300 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp5300);
                $tmp5299 = $tmp5300;
                $tmp5298 = $tmp5299;
                generics5286 = $tmp5298;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5298));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5299));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5297));
            }
        }
        }
        panda$collections$Array* $tmp5304 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5304);
        $tmp5303 = $tmp5304;
        $tmp5302 = $tmp5303;
        intfs5301 = $tmp5302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5303));
        panda$core$Int64$init$builtin_int64(&$tmp5306, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5305, $tmp5306);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5307 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5305);
        if (((panda$core$Bit) { $tmp5307.nonnull }).value) {
        {
            int $tmp5310;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5314 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5313 = $tmp5314;
                $tmp5312 = $tmp5313;
                t5311 = $tmp5312;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5312));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5313));
                if (((panda$core$Bit) { t5311 == NULL }).value) {
                {
                    $tmp5315 = NULL;
                    $returnValue5274 = $tmp5315;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5315));
                    $tmp5310 = 0;
                    goto $l5308;
                    $l5316:;
                    $tmp5268 = 3;
                    goto $l5266;
                    $l5317:;
                    return $returnValue5274;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs5301, ((panda$core$Object*) t5311));
                $l5319:;
                panda$core$Int64$init$builtin_int64(&$tmp5323, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5322, $tmp5323);
                org$pandalanguage$pandac$parser$Token$nullable $tmp5324 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5322);
                bool $tmp5321 = ((panda$core$Bit) { $tmp5324.nonnull }).value;
                if (!$tmp5321) goto $l5320;
                {
                    {
                        $tmp5325 = t5311;
                        org$pandalanguage$pandac$ASTNode* $tmp5328 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5327 = $tmp5328;
                        $tmp5326 = $tmp5327;
                        t5311 = $tmp5326;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5326));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5327));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5325));
                    }
                    if (((panda$core$Bit) { t5311 == NULL }).value) {
                    {
                        $tmp5329 = NULL;
                        $returnValue5274 = $tmp5329;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5329));
                        $tmp5310 = 1;
                        goto $l5308;
                        $l5330:;
                        $tmp5268 = 4;
                        goto $l5266;
                        $l5331:;
                        return $returnValue5274;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs5301, ((panda$core$Object*) t5311));
                }
                goto $l5319;
                $l5320:;
            }
            $tmp5310 = -1;
            goto $l5308;
            $l5308:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t5311));
            t5311 = NULL;
            switch ($tmp5310) {
                case -1: goto $l5333;
                case 1: goto $l5330;
                case 0: goto $l5316;
            }
            $l5333:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5335, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5334, $tmp5335);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5337 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5334, &$s5336);
        if (((panda$core$Bit) { !$tmp5337.nonnull }).value) {
        {
            $tmp5338 = NULL;
            $returnValue5274 = $tmp5338;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5338));
            $tmp5268 = 5;
            goto $l5266;
            $l5339:;
            return $returnValue5274;
        }
        }
        panda$collections$Array* $tmp5344 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5344);
        $tmp5343 = $tmp5344;
        $tmp5342 = $tmp5343;
        members5341 = $tmp5342;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5342));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5343));
        $l5345:;
        panda$core$Int64$init$builtin_int64(&$tmp5349, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5348, $tmp5349);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5350 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5348);
        bool $tmp5347 = ((panda$core$Bit) { !$tmp5350.nonnull }).value;
        if (!$tmp5347) goto $l5346;
        {
            int $tmp5353;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5357 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5356 = $tmp5357;
                $tmp5355 = $tmp5356;
                member5354 = $tmp5355;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5355));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5356));
                if (((panda$core$Bit) { member5354 == NULL }).value) {
                {
                    $tmp5358 = NULL;
                    $returnValue5274 = $tmp5358;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5358));
                    $tmp5353 = 0;
                    goto $l5351;
                    $l5359:;
                    $tmp5268 = 6;
                    goto $l5266;
                    $l5360:;
                    return $returnValue5274;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5341, ((panda$core$Object*) member5354));
            }
            $tmp5353 = -1;
            goto $l5351;
            $l5351:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5354));
            member5354 = NULL;
            switch ($tmp5353) {
                case 0: goto $l5359;
                case -1: goto $l5362;
            }
            $l5362:;
        }
        goto $l5345;
        $l5346:;
        org$pandalanguage$pandac$ASTNode* $tmp5365 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5366, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5368, 1);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5367, $tmp5368);
        panda$core$String* $tmp5370 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5278.value));
        $tmp5369 = $tmp5370;
        panda$collections$ImmutableArray* $tmp5372 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs5301);
        $tmp5371 = $tmp5372;
        panda$collections$ImmutableArray* $tmp5374 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5341);
        $tmp5373 = $tmp5374;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5365, $tmp5366, ((org$pandalanguage$pandac$parser$Token) start5269.value).position, p_doccomment, p_annotations, $tmp5367, $tmp5369, generics5286, $tmp5371, $tmp5373);
        $tmp5364 = $tmp5365;
        $tmp5363 = $tmp5364;
        $returnValue5274 = $tmp5363;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5363));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5364));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5373));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5369));
        $tmp5268 = 7;
        goto $l5266;
        $l5375:;
        return $returnValue5274;
    }
    $l5266:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5341));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs5301));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5286));
    intfs5301 = NULL;
    members5341 = NULL;
    switch ($tmp5268) {
        case 7: goto $l5375;
        case 6: goto $l5360;
        case 4: goto $l5331;
        case 5: goto $l5339;
        case 1: goto $l5284;
        case 3: goto $l5317;
        case 0: goto $l5276;
        case 2: goto $l5295;
    }
    $l5377:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2476_95378;
    panda$core$Int64 $tmp5380;
    org$pandalanguage$pandac$ASTNode* $returnValue5382;
    org$pandalanguage$pandac$ASTNode* $tmp5383;
    org$pandalanguage$pandac$ASTNode* $tmp5384;
    panda$core$Int64 $tmp5387;
    org$pandalanguage$pandac$ASTNode* $tmp5389;
    org$pandalanguage$pandac$ASTNode* $tmp5390;
    org$pandalanguage$pandac$ASTNode* $tmp5393;
    org$pandalanguage$pandac$ASTNode* $tmp5394;
    {
        org$pandalanguage$pandac$parser$Token $tmp5379 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2476_95378 = $tmp5379.kind;
        panda$core$Int64$init$builtin_int64(&$tmp5380, 15);
        panda$core$Bit $tmp5381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2476_95378.$rawValue, $tmp5380);
        if ($tmp5381.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5385 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5384 = $tmp5385;
            $tmp5383 = $tmp5384;
            $returnValue5382 = $tmp5383;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5383));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5384));
            return $returnValue5382;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp5387, 14);
        panda$core$Bit $tmp5388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2476_95378.$rawValue, $tmp5387);
        if ($tmp5388.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5391 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5390 = $tmp5391;
            $tmp5389 = $tmp5390;
            $returnValue5382 = $tmp5389;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5389));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5390));
            return $returnValue5382;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5395 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5394 = $tmp5395;
            $tmp5393 = $tmp5394;
            $returnValue5382 = $tmp5393;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5393));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5394));
            return $returnValue5382;
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries5400 = NULL;
    panda$collections$Array* $tmp5401;
    panda$collections$Array* $tmp5402;
    panda$core$Int64 $tmp5408;
    org$pandalanguage$pandac$ASTNode* entry5413 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5414;
    org$pandalanguage$pandac$ASTNode* $tmp5415;
    org$pandalanguage$pandac$ASTNode* $returnValue5417;
    org$pandalanguage$pandac$ASTNode* $tmp5418;
    org$pandalanguage$pandac$ASTNode* $tmp5427;
    org$pandalanguage$pandac$ASTNode* $tmp5428;
    panda$core$Int64 $tmp5430;
    panda$collections$ImmutableArray* $tmp5431;
    int $tmp5399;
    {
        panda$collections$Array* $tmp5403 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5403);
        $tmp5402 = $tmp5403;
        $tmp5401 = $tmp5402;
        entries5400 = $tmp5401;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5402));
        $l5404:;
        org$pandalanguage$pandac$parser$Token $tmp5407 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5408, 0);
        panda$core$Bit $tmp5409 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5407.kind.$rawValue, $tmp5408);
        bool $tmp5406 = $tmp5409.value;
        if (!$tmp5406) goto $l5405;
        {
            int $tmp5412;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5416 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5415 = $tmp5416;
                $tmp5414 = $tmp5415;
                entry5413 = $tmp5414;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5414));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5415));
                if (((panda$core$Bit) { entry5413 == NULL }).value) {
                {
                    $tmp5418 = NULL;
                    $returnValue5417 = $tmp5418;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5418));
                    $tmp5412 = 0;
                    goto $l5410;
                    $l5419:;
                    $tmp5399 = 0;
                    goto $l5397;
                    $l5420:;
                    return $returnValue5417;
                }
                }
                panda$core$Bit $tmp5422 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                if ($tmp5422.value) goto $l5423; else goto $l5424;
                $l5424:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5425, (panda$core$Int64) { 2496 });
                abort();
                $l5423:;
                panda$collections$Array$add$panda$collections$Array$T(entries5400, ((panda$core$Object*) entry5413));
            }
            $tmp5412 = -1;
            goto $l5410;
            $l5410:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry5413));
            entry5413 = NULL;
            switch ($tmp5412) {
                case 0: goto $l5419;
                case -1: goto $l5426;
            }
            $l5426:;
        }
        goto $l5404;
        $l5405:;
        org$pandalanguage$pandac$ASTNode* $tmp5429 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5430, 17);
        panda$collections$ImmutableArray* $tmp5432 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries5400);
        $tmp5431 = $tmp5432;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5429, $tmp5430, $tmp5431);
        $tmp5428 = $tmp5429;
        $tmp5427 = $tmp5428;
        $returnValue5417 = $tmp5427;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5427));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5428));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5431));
        $tmp5399 = 1;
        goto $l5397;
        $l5433:;
        return $returnValue5417;
    }
    $l5397:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries5400));
    entries5400 = NULL;
    switch ($tmp5399) {
        case 1: goto $l5433;
        case 0: goto $l5420;
    }
    $l5435:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp5438;
    {
    }
    $tmp5438 = -1;
    goto $l5436;
    $l5436:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp5438) {
        case -1: goto $l5439;
    }
    $l5439:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->regexParser));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

