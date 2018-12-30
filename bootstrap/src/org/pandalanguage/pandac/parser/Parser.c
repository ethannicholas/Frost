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
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "org/pandalanguage/pandac/parser/Parser/AutoSyntaxHighlight.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Immutable.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/collections/ListView.h"
#include "panda/core/UInt8.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/plex/runtime/DFA.h"
#include "org/pandalanguage/regex/RegexLexer.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"


static panda$core$String $s1;
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn96)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef panda$core$Int64 (*$fn101)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn110)(panda$collections$CollectionView*);
typedef void (*$fn133)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Bit (*$fn150)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn173)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn182)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn188)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn193)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Int64 (*$fn277)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn291)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn306)(panda$collections$CollectionView*);
typedef void (*$fn319)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn323)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef panda$core$Int64 (*$fn330)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn342)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn357)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn369)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn404)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn412)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef panda$core$Int64 (*$fn454)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn552)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn597)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn611)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn726)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn740)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn830)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn837)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn845)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn852)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn874)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn885)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn909)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn954)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn970)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn1061)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1069)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1080)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1097)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1133)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1141)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1160)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn1178)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1720)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn1724)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef org$pandalanguage$pandac$Position (*$fn1740)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn1744)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Bit (*$fn1766)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1777)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2090)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2241)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2250)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2292)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2349)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn2441)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2710)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn2862)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2973)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2984)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2996)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3035)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3214)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3267)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3842)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3867)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn3908)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3925)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn4262)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4351)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4359)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef panda$core$Bit (*$fn4684)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4717)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4728)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4853)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4875)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4896)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4956)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn5029)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn5055)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5120)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn5218)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn5248)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn5430)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5543)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5561)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5636)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5746)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5765)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 115, 3267958933078468177, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 89, 8342421721155502002, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 79, 6524007178185078219, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 79, 6525832141939989144, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0d", 1, 114, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x09", 1, 110, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x66\x6f\x72\x6d\x61\x74\x53\x74\x72\x69\x6e\x67\x28\x73\x74\x61\x72\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 147, -6104022719463629235, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0d", 1, 114, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x09", 1, 110, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x53\x74\x72\x69\x6e\x67\x28\x73\x74\x61\x72\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 150, 5596123724125244779, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0d", 1, 114, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x09", 1, 110, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s1237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x72\x65\x6e\x74\x68\x65\x73\x69\x7a\x65\x64\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 130, -3528500452895244303, NULL };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x74\x65\x72\x6d\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 111, -447243349616865045, NULL };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x67\x65\x74\x43\x6c\x61\x73\x73\x4e\x61\x6d\x65\x28\x65\x78\x70\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 143, 3966034510964126636, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, 4113279969965127102, NULL };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s2282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x66\x75\x6e\x63\x74\x69\x6f\x6e\x4f\x72\x54\x75\x70\x6c\x65\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, 1133438859089359542, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x63\x61\x6c\x6c\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 121, 4799290866155849891, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x70\x72\x65\x66\x69\x78\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 123, 7025835381767841785, NULL };
static panda$core$String $s2892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6d\x75\x6c\x74\x69\x70\x6c\x69\x63\x61\x74\x69\x76\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 131, 1288059034360540827, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x64\x64\x69\x74\x69\x76\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 125, -6498999101577693159, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x61\x6e\x67\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 4989268421802719344, NULL };
static panda$core$String $s3107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, 5520043150958930526, NULL };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6e\x64\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 120, -4330199518315084178, NULL };
static panda$core$String $s3184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s3306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s3420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s3455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s3460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x4f\x72\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 129, 1041864171980171049, NULL };
static panda$core$String $s3912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s4106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s4129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s4170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x74\x75\x72\x6e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 3710200635956915444, NULL };
static panda$core$String $s4190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 124, -6217056272548492480, NULL };
static panda$core$String $s4218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s4222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6e\x79\x4c\x6f\x6f\x70\x28\x6c\x61\x62\x65\x6c\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 138, 5346443027079530942, NULL };
static panda$core$String $s4233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, -5695239785840128988, NULL };
static panda$core$String $s4408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s5016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s5036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s5101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s5108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 118, 5129060284430572773, NULL };
static panda$core$String $s5524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x62\x6f\x64\x79\x45\x6e\x74\x72\x79\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, -2097092122738507249, NULL };
static panda$core$String $s5780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

void org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT(org$pandalanguage$pandac$parser$Parser* param0, panda$threads$MessageQueue* param1) {

// line 34
org$pandalanguage$pandac$parser$Lexer* $tmp2 = (org$pandalanguage$pandac$parser$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$parser$Lexer$class);
org$pandalanguage$pandac$parser$Lexer$init($tmp2);
org$pandalanguage$pandac$parser$Lexer** $tmp3 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
org$pandalanguage$pandac$parser$Lexer** $tmp5 = &param0->lexer;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// line 44
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp6 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp6);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp7 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp9 = &param0->pushbackBuffer;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// line 46
panda$collections$Stack* $tmp10 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
panda$collections$Stack$init($tmp10);
panda$collections$Stack** $tmp11 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp12 = *$tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$collections$Stack** $tmp13 = &param0->commaSeparatedExpressionContext;
*$tmp13 = $tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
// line 48
panda$core$Bit $tmp14 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp15 = &param0->inSpeculative;
*$tmp15 = $tmp14;
// line 50
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp16 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp16);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp17 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp18 = *$tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp19 = &param0->speculativeBuffer;
*$tmp19 = $tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// line 52
panda$core$Bit $tmp20 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp21 = &param0->allowLambdas;
*$tmp21 = $tmp20;
// line 54
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp23 = &param0->reportErrors;
*$tmp23 = $tmp22;
// line 59
panda$threads$MessageQueue** $tmp24 = &param0->errors;
panda$threads$MessageQueue* $tmp25 = *$tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$threads$MessageQueue** $tmp26 = &param0->errors;
*$tmp26 = param1;
// line 60
panda$collections$Stack** $tmp27 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp28 = *$tmp27;
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp30;
$tmp30 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp30->value = $tmp29;
panda$collections$Stack$push$panda$collections$Stack$T($tmp28, ((panda$core$Object*) $tmp30));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// line 61
org$pandalanguage$regex$RegexParser* $tmp31 = (org$pandalanguage$regex$RegexParser*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$regex$RegexParser$class);
org$pandalanguage$regex$RegexParser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp31, param1);
org$pandalanguage$regex$RegexParser** $tmp32 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp33 = *$tmp32;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
org$pandalanguage$regex$RegexParser** $tmp34 = &param0->regexParser;
*$tmp34 = $tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
return;

}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* param0, panda$io$File* param1, panda$core$String* param2) {

panda$core$Int64 local0;
// line 65
panda$core$Int64 $tmp35 = (panda$core$Int64) {0};
panda$core$Int64 $tmp36 = (panda$core$Int64) {100};
panda$core$Bit $tmp37 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp38 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp35, $tmp36, $tmp37);
panda$core$Int64 $tmp39 = $tmp38.min;
*(&local0) = $tmp39;
panda$core$Int64 $tmp40 = $tmp38.max;
panda$core$Bit $tmp41 = $tmp38.inclusive;
bool $tmp42 = $tmp41.value;
panda$core$Int64 $tmp43 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp44 = panda$core$Int64$convert$R$panda$core$UInt64($tmp43);
if ($tmp42) goto block4; else goto block5;
block4:;
int64_t $tmp45 = $tmp39.value;
int64_t $tmp46 = $tmp40.value;
bool $tmp47 = $tmp45 <= $tmp46;
panda$core$Bit $tmp48 = (panda$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block1; else goto block2;
block5:;
int64_t $tmp50 = $tmp39.value;
int64_t $tmp51 = $tmp40.value;
bool $tmp52 = $tmp50 < $tmp51;
panda$core$Bit $tmp53 = (panda$core$Bit) {$tmp52};
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block1; else goto block2;
block1:;
// line 65
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
goto block3;
block3:;
panda$core$Int64 $tmp55 = *(&local0);
int64_t $tmp56 = $tmp40.value;
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56 - $tmp57;
panda$core$Int64 $tmp59 = (panda$core$Int64) {$tmp58};
panda$core$UInt64 $tmp60 = panda$core$Int64$convert$R$panda$core$UInt64($tmp59);
if ($tmp42) goto block7; else goto block8;
block7:;
uint64_t $tmp61 = $tmp60.value;
uint64_t $tmp62 = $tmp44.value;
bool $tmp63 = $tmp61 >= $tmp62;
panda$core$Bit $tmp64 = (panda$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block6; else goto block2;
block8:;
uint64_t $tmp66 = $tmp60.value;
uint64_t $tmp67 = $tmp44.value;
bool $tmp68 = $tmp66 > $tmp67;
panda$core$Bit $tmp69 = (panda$core$Bit) {$tmp68};
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block6; else goto block2;
block6:;
int64_t $tmp71 = $tmp55.value;
int64_t $tmp72 = $tmp43.value;
int64_t $tmp73 = $tmp71 + $tmp72;
panda$core$Int64 $tmp74 = (panda$core$Int64) {$tmp73};
*(&local0) = $tmp74;
goto block1;
block2:;
// line 66
panda$core$Bit $tmp75 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp76 = &param0->reportErrors;
*$tmp76 = $tmp75;
// line 67
org$pandalanguage$pandac$parser$Lexer** $tmp77 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp78 = *$tmp77;
org$pandalanguage$pandac$parser$Lexer$start$panda$core$String($tmp78, param2);
// line 68
panda$io$File** $tmp79 = &param0->path;
panda$io$File* $tmp80 = *$tmp79;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp81 = &param0->path;
*$tmp81 = param1;
// line 69
panda$core$String** $tmp82 = &param0->source;
panda$core$String* $tmp83 = *$tmp82;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp84 = &param0->source;
*$tmp84 = param2;
// line 70
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp85 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp86 = *$tmp85;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear($tmp86);
// line 71
org$pandalanguage$regex$RegexParser** $tmp87 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp88 = *$tmp87;
org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String($tmp88, param1, param2);
// line 72
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp89 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp90 = *$tmp89;
panda$core$Bit $tmp91 = panda$core$Bit$init$builtin_bit($tmp90 != NULL);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block9; else goto block10;
block9:;
// line 73
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp93 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp94 = *$tmp93;
$fn96 $tmp95 = ($fn96) $tmp94->$class->vtable[2];
$tmp95($tmp94);
goto block10;
block10:;
return;

}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Int64 local0;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$parser$Token local2;
panda$core$Bit local3;
// line 78
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp97 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp98 = *$tmp97;
ITable* $tmp99 = ((panda$collections$CollectionView*) $tmp98)->$class->itable;
while ($tmp99->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp99 = $tmp99->next;
}
$fn101 $tmp100 = $tmp99->methods[0];
panda$core$Int64 $tmp102 = $tmp100(((panda$collections$CollectionView*) $tmp98));
panda$core$Int64 $tmp103 = (panda$core$Int64) {0};
panda$core$Bit $tmp104 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp102, $tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block1; else goto block2;
block1:;
// line 79
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp106 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp107 = *$tmp106;
ITable* $tmp108 = ((panda$collections$CollectionView*) $tmp107)->$class->itable;
while ($tmp108->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp108 = $tmp108->next;
}
$fn110 $tmp109 = $tmp108->methods[0];
panda$core$Int64 $tmp111 = $tmp109(((panda$collections$CollectionView*) $tmp107));
panda$core$Int64 $tmp112 = (panda$core$Int64) {1};
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113 - $tmp114;
panda$core$Int64 $tmp116 = (panda$core$Int64) {$tmp115};
*(&local0) = $tmp116;
// line 80
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp117 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp118 = *$tmp117;
panda$core$Int64 $tmp119 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp120 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp118, $tmp119);
*(&local1) = $tmp120;
// line 81
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp121 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp122 = *$tmp121;
panda$core$Int64 $tmp123 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp124 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp122, $tmp123);
// line 82
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp125 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp126 = *$tmp125;
panda$core$Bit $tmp127 = panda$core$Bit$init$builtin_bit($tmp126 != NULL);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block3; else goto block4;
block3:;
// line 83
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp129 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp130 = *$tmp129;
org$pandalanguage$pandac$parser$Token $tmp131 = *(&local1);
$fn133 $tmp132 = ($fn133) $tmp130->$class->vtable[6];
$tmp132($tmp130, $tmp131);
goto block4;
block4:;
// line 85
org$pandalanguage$pandac$parser$Token $tmp134 = *(&local1);
return $tmp134;
block2:;
// line 87
org$pandalanguage$pandac$parser$Lexer** $tmp135 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp136 = *$tmp135;
org$pandalanguage$pandac$parser$Token $tmp137 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token($tmp136);
*(&local2) = $tmp137;
// line 88
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp138 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp139 = *$tmp138;
panda$core$Bit $tmp140 = panda$core$Bit$init$builtin_bit($tmp139 != NULL);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block5; else goto block6;
block5:;
// line 89
org$pandalanguage$pandac$parser$Token $tmp142 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp143 = $tmp142.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp144;
$tmp144 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp144->value = $tmp143;
panda$core$Int64 $tmp145 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp146 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp145);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp147;
$tmp147 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp147->value = $tmp146;
ITable* $tmp148 = ((panda$core$Equatable*) $tmp144)->$class->itable;
while ($tmp148->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[0];
panda$core$Bit $tmp151 = $tmp149(((panda$core$Equatable*) $tmp144), ((panda$core$Equatable*) $tmp147));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp144)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp147)));
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block7; else goto block8;
block7:;
// line 90
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp153 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp154 = *$tmp153;
panda$collections$Stack** $tmp155 = &$tmp154->stack;
panda$collections$Stack* $tmp156 = *$tmp155;
panda$core$Int64 $tmp157 = panda$collections$Stack$get_count$R$panda$core$Int64($tmp156);
panda$core$Int64 $tmp158 = (panda$core$Int64) {0};
panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp157, $tmp158);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block9; else goto block10;
block9:;
*(&local3) = $tmp159;
goto block11;
block10:;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp161 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp162 = *$tmp161;
panda$collections$Stack** $tmp163 = &$tmp162->stack;
panda$collections$Stack* $tmp164 = *$tmp163;
panda$core$Int64 $tmp165 = (panda$core$Int64) {0};
panda$core$Object* $tmp166 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp164, $tmp165);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp167;
$tmp167 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp167->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp166)->value;
panda$core$Int64 $tmp168 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp169 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp168);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp170;
$tmp170 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp170->value = $tmp169;
ITable* $tmp171 = ((panda$core$Equatable*) $tmp167)->$class->itable;
while ($tmp171->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp171 = $tmp171->next;
}
$fn173 $tmp172 = $tmp171->methods[1];
panda$core$Bit $tmp174 = $tmp172(((panda$core$Equatable*) $tmp167), ((panda$core$Equatable*) $tmp170));
panda$core$Panda$unref$panda$core$Object$Q($tmp166);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp167)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp170)));
*(&local3) = $tmp174;
goto block11;
block11:;
panda$core$Bit $tmp175 = *(&local3);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block12; else goto block14;
block12:;
// line 92
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp177 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp178 = *$tmp177;
panda$core$Int64 $tmp179 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp180 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp179);
$fn182 $tmp181 = ($fn182) $tmp178->$class->vtable[3];
$tmp181($tmp178, $tmp180);
goto block13;
block14:;
// line 1
// line 95
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp183 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp184 = *$tmp183;
panda$core$Int64 $tmp185 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp186 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp185);
$fn188 $tmp187 = ($fn188) $tmp184->$class->vtable[4];
$tmp187($tmp184, $tmp186);
goto block13;
block13:;
goto block8;
block8:;
// line 98
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp189 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp190 = *$tmp189;
org$pandalanguage$pandac$parser$Token $tmp191 = *(&local2);
$fn193 $tmp192 = ($fn193) $tmp190->$class->vtable[6];
$tmp192($tmp190, $tmp191);
goto block6;
block6:;
// line 100
panda$core$Bit* $tmp194 = &param0->inSpeculative;
panda$core$Bit $tmp195 = *$tmp194;
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block15; else goto block16;
block15:;
// line 101
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp197 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp198 = *$tmp197;
org$pandalanguage$pandac$parser$Token $tmp199 = *(&local2);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp198, $tmp199);
goto block16;
block16:;
// line 103
org$pandalanguage$pandac$parser$Token $tmp200 = *(&local2);
return $tmp200;

}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* local1 = NULL;
org$pandalanguage$pandac$parser$Token local2;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* local3 = NULL;
org$pandalanguage$pandac$parser$Token local4;
// line 107
goto block1;
block1:;
// line 108
org$pandalanguage$pandac$parser$Token $tmp201 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp201;
// line 109
org$pandalanguage$pandac$parser$Token $tmp202 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp203 = $tmp202.kind;
panda$core$Int64 $tmp204 = $tmp203.$rawValue;
panda$core$Int64 $tmp205 = (panda$core$Int64) {13};
panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp204, $tmp205);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block4; else goto block5;
block4:;
// line 111
goto block1;
block5:;
panda$core$Int64 $tmp208 = (panda$core$Int64) {9};
panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp204, $tmp208);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block6; else goto block7;
block6:;
// line 113
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp211 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
panda$core$Int64 $tmp212 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp213 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp212);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp211, param0, $tmp213);
*(&local1) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp214 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
*(&local1) = $tmp211;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// line 114
goto block8;
block8:;
// line 115
org$pandalanguage$pandac$parser$Token $tmp215 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp215;
// line 116
org$pandalanguage$pandac$parser$Token $tmp216 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp217 = $tmp216.kind;
panda$core$Int64 $tmp218 = $tmp217.$rawValue;
panda$core$Int64 $tmp219 = (panda$core$Int64) {13};
panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp218, $tmp219);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block11; else goto block12;
block11:;
// line 118
org$pandalanguage$pandac$parser$Token $tmp222 = *(&local2);
panda$core$String* $tmp223 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp222);
panda$core$Bit $tmp224 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp223, &$s225);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
bool $tmp226 = $tmp224.value;
if ($tmp226) goto block13; else goto block14;
block13:;
// line 119
goto block9;
block14:;
goto block10;
block12:;
panda$core$Int64 $tmp227 = (panda$core$Int64) {0};
panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp218, $tmp227);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block15; else goto block10;
block15:;
// line 122
org$pandalanguage$pandac$parser$Token $tmp230 = *(&local2);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp231 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
// unreffing auto
*(&local1) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp230;
block10:;
goto block8;
block9:;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp232 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing auto
*(&local1) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
goto block3;
block7:;
panda$core$Int64 $tmp233 = (panda$core$Int64) {10};
panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp204, $tmp233);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block16; else goto block17;
block16:;
// line 126
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp236 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
panda$core$Int64 $tmp237 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp238 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp237);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp236, param0, $tmp238);
*(&local3) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp239 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
*(&local3) = $tmp236;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// line 127
goto block18;
block18:;
// line 128
org$pandalanguage$pandac$parser$Token $tmp240 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local4) = $tmp240;
// line 129
org$pandalanguage$pandac$parser$Token $tmp241 = *(&local4);
org$pandalanguage$pandac$parser$Token$Kind $tmp242 = $tmp241.kind;
panda$core$Int64 $tmp243 = $tmp242.$rawValue;
panda$core$Int64 $tmp244 = (panda$core$Int64) {11};
panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp243, $tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block21; else goto block22;
block21:;
// line 131
goto block19;
block22:;
panda$core$Int64 $tmp247 = (panda$core$Int64) {0};
panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp243, $tmp247);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block23; else goto block20;
block23:;
// line 133
org$pandalanguage$pandac$parser$Token $tmp250 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp250, &$s251);
// line 134
panda$core$Bit $tmp252 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp253 = &param0->reportErrors;
*$tmp253 = $tmp252;
// line 135
org$pandalanguage$pandac$parser$Token $tmp254 = *(&local4);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp255 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
// unreffing auto
*(&local3) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp254;
block20:;
goto block18;
block19:;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp256 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing auto
*(&local3) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
goto block3;
block17:;
// line 139
org$pandalanguage$pandac$parser$Token $tmp257 = *(&local0);
return $tmp257;
block3:;
goto block1;
block2:;
panda$core$Bit $tmp258 = panda$core$Bit$init$builtin_bit(false);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp260 = (panda$core$Int64) {106};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s261, $tmp260, &$s262);
abort(); // unreachable
block24:;
abort(); // unreachable

}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

// line 145
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp263 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp264 = *$tmp263;
panda$core$Bit $tmp265 = panda$core$Bit$init$builtin_bit($tmp264 != NULL);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block1; else goto block2;
block1:;
// line 146
goto block3;
block3:;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp267 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp268 = *$tmp267;
panda$collections$Array** $tmp269 = &$tmp268->tokens;
panda$collections$Array* $tmp270 = *$tmp269;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp271 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp272 = *$tmp271;
panda$collections$Array** $tmp273 = &$tmp272->tokens;
panda$collections$Array* $tmp274 = *$tmp273;
ITable* $tmp275 = ((panda$collections$CollectionView*) $tmp274)->$class->itable;
while ($tmp275->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp275 = $tmp275->next;
}
$fn277 $tmp276 = $tmp275->methods[0];
panda$core$Int64 $tmp278 = $tmp276(((panda$collections$CollectionView*) $tmp274));
panda$core$Int64 $tmp279 = (panda$core$Int64) {1};
int64_t $tmp280 = $tmp278.value;
int64_t $tmp281 = $tmp279.value;
int64_t $tmp282 = $tmp280 - $tmp281;
panda$core$Int64 $tmp283 = (panda$core$Int64) {$tmp282};
panda$core$Object* $tmp284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp270, $tmp283);
panda$core$Object** $tmp285 = &((org$pandalanguage$pandac$Pair*) $tmp284)->first;
panda$core$Object* $tmp286 = *$tmp285;
panda$core$String* $tmp287 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp286)->value);
panda$core$String* $tmp288 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, param1);
ITable* $tmp289 = ((panda$core$Equatable*) $tmp287)->$class->itable;
while ($tmp289->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp289 = $tmp289->next;
}
$fn291 $tmp290 = $tmp289->methods[1];
panda$core$Bit $tmp292 = $tmp290(((panda$core$Equatable*) $tmp287), ((panda$core$Equatable*) $tmp288));
panda$core$Panda$unref$panda$core$Object$Q($tmp284);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block4; else goto block5;
block4:;
// line 148
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp294 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp295 = *$tmp294;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp296 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp297 = *$tmp296;
panda$collections$Array** $tmp298 = &$tmp297->tokens;
panda$collections$Array* $tmp299 = *$tmp298;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp300 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp301 = *$tmp300;
panda$collections$Array** $tmp302 = &$tmp301->tokens;
panda$collections$Array* $tmp303 = *$tmp302;
ITable* $tmp304 = ((panda$collections$CollectionView*) $tmp303)->$class->itable;
while ($tmp304->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp304 = $tmp304->next;
}
$fn306 $tmp305 = $tmp304->methods[0];
panda$core$Int64 $tmp307 = $tmp305(((panda$collections$CollectionView*) $tmp303));
panda$core$Int64 $tmp308 = (panda$core$Int64) {1};
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308.value;
int64_t $tmp311 = $tmp309 - $tmp310;
panda$core$Int64 $tmp312 = (panda$core$Int64) {$tmp311};
panda$core$Object* $tmp313 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp299, $tmp312);
panda$core$Object** $tmp314 = &((org$pandalanguage$pandac$Pair*) $tmp313)->first;
panda$core$Object* $tmp315 = *$tmp314;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp295, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp315)->value);
panda$core$Panda$unref$panda$core$Object$Q($tmp313);
// line 150
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp316 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp317 = *$tmp316;
$fn319 $tmp318 = ($fn319) $tmp317->$class->vtable[7];
$tmp318($tmp317);
goto block3;
block5:;
// line 152
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp320 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp321 = *$tmp320;
$fn323 $tmp322 = ($fn323) $tmp321->$class->vtable[7];
$tmp322($tmp321);
goto block2;
block2:;
// line 154
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp324 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp325 = *$tmp324;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp325, param1);
return;

}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0) {

// line 158
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp326 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp327 = *$tmp326;
ITable* $tmp328 = ((panda$collections$CollectionView*) $tmp327)->$class->itable;
while ($tmp328->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp328 = $tmp328->next;
}
$fn330 $tmp329 = $tmp328->methods[0];
panda$core$Int64 $tmp331 = $tmp329(((panda$collections$CollectionView*) $tmp327));
panda$core$Int64 $tmp332 = (panda$core$Int64) {0};
panda$core$Bit $tmp333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp331, $tmp332);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block1; else goto block2;
block1:;
// line 159
org$pandalanguage$pandac$parser$Token $tmp335 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp335);
goto block2;
block2:;
// line 161
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp336 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp337 = *$tmp336;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp338 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp339 = *$tmp338;
ITable* $tmp340 = ((panda$collections$CollectionView*) $tmp339)->$class->itable;
while ($tmp340->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp340 = $tmp340->next;
}
$fn342 $tmp341 = $tmp340->methods[0];
panda$core$Int64 $tmp343 = $tmp341(((panda$collections$CollectionView*) $tmp339));
panda$core$Int64 $tmp344 = (panda$core$Int64) {1};
int64_t $tmp345 = $tmp343.value;
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345 - $tmp346;
panda$core$Int64 $tmp348 = (panda$core$Int64) {$tmp347};
org$pandalanguage$pandac$parser$Token $tmp349 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp337, $tmp348);
return $tmp349;

}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token$Kind param1) {

org$pandalanguage$pandac$parser$Token local0;
// line 165
org$pandalanguage$pandac$parser$Token $tmp350 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp350;
// line 166
org$pandalanguage$pandac$parser$Token $tmp351 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp352 = $tmp351.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp353;
$tmp353 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp353->value = $tmp352;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp354;
$tmp354 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp354->value = param1;
ITable* $tmp355 = ((panda$core$Equatable*) $tmp353)->$class->itable;
while ($tmp355->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp355 = $tmp355->next;
}
$fn357 $tmp356 = $tmp355->methods[0];
panda$core$Bit $tmp358 = $tmp356(((panda$core$Equatable*) $tmp353), ((panda$core$Equatable*) $tmp354));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp353)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp354)));
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block1; else goto block2;
block1:;
// line 167
org$pandalanguage$pandac$parser$Token $tmp360 = *(&local0);
return ((org$pandalanguage$pandac$parser$Token$nullable) { $tmp360, true });
block2:;
// line 169
org$pandalanguage$pandac$parser$Token $tmp361 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp361);
// line 170
return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });

}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token$Kind param1, panda$core$String* param2) {

org$pandalanguage$pandac$parser$Token local0;
// line 174
org$pandalanguage$pandac$parser$Token $tmp362 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp362;
// line 175
org$pandalanguage$pandac$parser$Token $tmp363 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp364 = $tmp363.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp365;
$tmp365 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp365->value = $tmp364;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp366;
$tmp366 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp366->value = param1;
ITable* $tmp367 = ((panda$core$Equatable*) $tmp365)->$class->itable;
while ($tmp367->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp367 = $tmp367->next;
}
$fn369 $tmp368 = $tmp367->methods[0];
panda$core$Bit $tmp370 = $tmp368(((panda$core$Equatable*) $tmp365), ((panda$core$Equatable*) $tmp366));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp365)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp366)));
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block1; else goto block2;
block1:;
// line 176
org$pandalanguage$pandac$parser$Token $tmp372 = *(&local0);
return ((org$pandalanguage$pandac$parser$Token$nullable) { $tmp372, true });
block2:;
// line 178
org$pandalanguage$pandac$parser$Token $tmp373 = *(&local0);
panda$core$String* $tmp374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s375, param2);
panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp374, &$s377);
org$pandalanguage$pandac$parser$Token $tmp378 = *(&local0);
panda$core$String* $tmp379 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp378);
panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp376, $tmp379);
panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp380, &$s382);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp373, $tmp381);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
// line 179
return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });

}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1, panda$core$String* param2) {

panda$core$Bit local0;
// line 183
panda$core$Bit* $tmp383 = &param0->inSpeculative;
panda$core$Bit $tmp384 = *$tmp383;
panda$core$Bit $tmp385 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp384);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block1; else goto block2;
block1:;
panda$core$Bit* $tmp387 = &param0->reportErrors;
panda$core$Bit $tmp388 = *$tmp387;
*(&local0) = $tmp388;
goto block3;
block2:;
*(&local0) = $tmp385;
goto block3;
block3:;
panda$core$Bit $tmp389 = *(&local0);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block4; else goto block5;
block4:;
// line 184
panda$threads$MessageQueue** $tmp391 = &param0->errors;
panda$threads$MessageQueue* $tmp392 = *$tmp391;
org$pandalanguage$pandac$Compiler$Error* $tmp393 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
panda$io$File** $tmp394 = &param0->path;
panda$io$File* $tmp395 = *$tmp394;
org$pandalanguage$pandac$Position $tmp396 = param1.position;
org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp393, $tmp395, $tmp396, param2);
panda$threads$MessageQueue$post$panda$threads$MessageQueue$T($tmp392, ((panda$core$Immutable*) $tmp393));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
goto block5;
block5:;
return;

}
void org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param1) {

// line 189
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp397 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp398 = *$tmp397;
panda$core$Bit $tmp399 = panda$core$Bit$init$builtin_bit($tmp398 != NULL);
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block1; else goto block2;
block1:;
// line 190
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp401 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp402 = *$tmp401;
$fn404 $tmp403 = ($fn404) $tmp402->$class->vtable[3];
$tmp403($tmp402, param1);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param1) {

// line 195
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp405 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp406 = *$tmp405;
panda$core$Bit $tmp407 = panda$core$Bit$init$builtin_bit($tmp406 != NULL);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block1; else goto block2;
block1:;
// line 196
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp409 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp410 = *$tmp409;
$fn412 $tmp411 = ($fn412) $tmp410->$class->vtable[4];
$tmp411($tmp410, param1);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Bit* $tmp413 = &param0->inSpeculative;
panda$core$Bit $tmp414 = *$tmp413;
panda$core$Bit $tmp415 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp414);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp417 = (panda$core$Int64) {202};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s418, $tmp417, &$s419);
abort(); // unreachable
block1:;
// line 203
panda$core$Bit* $tmp420 = &param0->inSpeculative;
panda$core$Bit $tmp421 = *$tmp420;
panda$core$Bit $tmp422 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp421);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp424 = (panda$core$Int64) {203};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s425, $tmp424);
abort(); // unreachable
block3:;
// line 204
panda$core$Bit $tmp426 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp427 = &param0->inSpeculative;
*$tmp427 = $tmp426;
// line 205
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp428 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp429 = *$tmp428;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear($tmp429);
// line 206
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp430 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp431 = *$tmp430;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp432 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp433 = *$tmp432;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT($tmp431, ((panda$collections$CollectionView*) $tmp433));
return;

}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Bit* $tmp434 = &param0->inSpeculative;
panda$core$Bit $tmp435 = *$tmp434;
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp437 = (panda$core$Int64) {211};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s438, $tmp437, &$s439);
abort(); // unreachable
block1:;
// line 212
panda$core$Bit $tmp440 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp441 = &param0->inSpeculative;
*$tmp441 = $tmp440;
return;

}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Int64 local0;
panda$core$Bit* $tmp442 = &param0->inSpeculative;
panda$core$Bit $tmp443 = *$tmp442;
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp445 = (panda$core$Int64) {217};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s446, $tmp445, &$s447);
abort(); // unreachable
block1:;
// line 218
panda$core$Bit $tmp448 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp449 = &param0->inSpeculative;
*$tmp449 = $tmp448;
// line 219
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp450 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp451 = *$tmp450;
ITable* $tmp452 = ((panda$collections$CollectionView*) $tmp451)->$class->itable;
while ($tmp452->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp452 = $tmp452->next;
}
$fn454 $tmp453 = $tmp452->methods[0];
panda$core$Int64 $tmp455 = $tmp453(((panda$collections$CollectionView*) $tmp451));
panda$core$Int64 $tmp456 = (panda$core$Int64) {1};
int64_t $tmp457 = $tmp455.value;
int64_t $tmp458 = $tmp456.value;
int64_t $tmp459 = $tmp457 - $tmp458;
panda$core$Int64 $tmp460 = (panda$core$Int64) {$tmp459};
panda$core$Int64 $tmp461 = (panda$core$Int64) {0};
panda$core$Int64 $tmp462 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp463 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp464 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp460, $tmp461, $tmp462, $tmp463);
panda$core$Int64 $tmp465 = $tmp464.start;
*(&local0) = $tmp465;
panda$core$Int64 $tmp466 = $tmp464.end;
panda$core$Int64 $tmp467 = $tmp464.step;
panda$core$UInt64 $tmp468 = panda$core$Int64$convert$R$panda$core$UInt64($tmp467);
panda$core$Int64 $tmp469 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp467);
panda$core$UInt64 $tmp470 = panda$core$Int64$convert$R$panda$core$UInt64($tmp469);
panda$core$Bit $tmp471 = $tmp464.inclusive;
bool $tmp472 = $tmp471.value;
panda$core$Int64 $tmp473 = (panda$core$Int64) {0};
int64_t $tmp474 = $tmp467.value;
int64_t $tmp475 = $tmp473.value;
bool $tmp476 = $tmp474 >= $tmp475;
panda$core$Bit $tmp477 = (panda$core$Bit) {$tmp476};
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block6; else goto block7;
block6:;
if ($tmp472) goto block8; else goto block9;
block8:;
int64_t $tmp479 = $tmp465.value;
int64_t $tmp480 = $tmp466.value;
bool $tmp481 = $tmp479 <= $tmp480;
panda$core$Bit $tmp482 = (panda$core$Bit) {$tmp481};
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block3; else goto block4;
block9:;
int64_t $tmp484 = $tmp465.value;
int64_t $tmp485 = $tmp466.value;
bool $tmp486 = $tmp484 < $tmp485;
panda$core$Bit $tmp487 = (panda$core$Bit) {$tmp486};
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block3; else goto block4;
block7:;
if ($tmp472) goto block10; else goto block11;
block10:;
int64_t $tmp489 = $tmp465.value;
int64_t $tmp490 = $tmp466.value;
bool $tmp491 = $tmp489 >= $tmp490;
panda$core$Bit $tmp492 = (panda$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block3; else goto block4;
block11:;
int64_t $tmp494 = $tmp465.value;
int64_t $tmp495 = $tmp466.value;
bool $tmp496 = $tmp494 > $tmp495;
panda$core$Bit $tmp497 = (panda$core$Bit) {$tmp496};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block3; else goto block4;
block3:;
// line 220
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp499 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp500 = *$tmp499;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp501 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp502 = *$tmp501;
panda$core$Int64 $tmp503 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp504 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp502, $tmp503);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp500, $tmp504);
goto block5;
block5:;
panda$core$Int64 $tmp505 = *(&local0);
if ($tmp478) goto block13; else goto block14;
block13:;
int64_t $tmp506 = $tmp466.value;
int64_t $tmp507 = $tmp505.value;
int64_t $tmp508 = $tmp506 - $tmp507;
panda$core$Int64 $tmp509 = (panda$core$Int64) {$tmp508};
panda$core$UInt64 $tmp510 = panda$core$Int64$convert$R$panda$core$UInt64($tmp509);
if ($tmp472) goto block15; else goto block16;
block15:;
uint64_t $tmp511 = $tmp510.value;
uint64_t $tmp512 = $tmp468.value;
bool $tmp513 = $tmp511 >= $tmp512;
panda$core$Bit $tmp514 = (panda$core$Bit) {$tmp513};
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block12; else goto block4;
block16:;
uint64_t $tmp516 = $tmp510.value;
uint64_t $tmp517 = $tmp468.value;
bool $tmp518 = $tmp516 > $tmp517;
panda$core$Bit $tmp519 = (panda$core$Bit) {$tmp518};
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block12; else goto block4;
block14:;
int64_t $tmp521 = $tmp505.value;
int64_t $tmp522 = $tmp466.value;
int64_t $tmp523 = $tmp521 - $tmp522;
panda$core$Int64 $tmp524 = (panda$core$Int64) {$tmp523};
panda$core$UInt64 $tmp525 = panda$core$Int64$convert$R$panda$core$UInt64($tmp524);
if ($tmp472) goto block17; else goto block18;
block17:;
uint64_t $tmp526 = $tmp525.value;
uint64_t $tmp527 = $tmp470.value;
bool $tmp528 = $tmp526 >= $tmp527;
panda$core$Bit $tmp529 = (panda$core$Bit) {$tmp528};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block12; else goto block4;
block18:;
uint64_t $tmp531 = $tmp525.value;
uint64_t $tmp532 = $tmp470.value;
bool $tmp533 = $tmp531 > $tmp532;
panda$core$Bit $tmp534 = (panda$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block12; else goto block4;
block12:;
int64_t $tmp536 = $tmp505.value;
int64_t $tmp537 = $tmp467.value;
int64_t $tmp538 = $tmp536 + $tmp537;
panda$core$Int64 $tmp539 = (panda$core$Int64) {$tmp538};
*(&local0) = $tmp539;
goto block3;
block4:;
return;

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

// line 225
panda$core$String** $tmp540 = &param0->source;
panda$core$String* $tmp541 = *$tmp540;
panda$core$String$Index $tmp542 = param1.start;
panda$core$String$Index $tmp543 = param1.end;
panda$core$Bit $tmp544 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp545 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp542, $tmp543, $tmp544);
panda$core$String* $tmp546 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp541, $tmp545);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
return $tmp546;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$ASTNode* param2) {

// line 229
panda$core$Bit $tmp547 = panda$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block1; else goto block2;
block1:;
// line 230
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block2:;
// line 232
org$pandalanguage$pandac$ASTNode* $tmp549 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp550 = (panda$core$Int64) {4};
$fn552 $tmp551 = ($fn552) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp553 = $tmp551(param1);
panda$core$Int64 $tmp554 = (panda$core$Int64) {52};
org$pandalanguage$pandac$parser$Token$Kind $tmp555 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp554);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp549, $tmp550, $tmp553, param1, $tmp555, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
return $tmp549;

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

panda$core$MutableString* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
panda$core$String* local4 = NULL;
panda$core$Char8 local5;
// line 236
panda$core$MutableString* $tmp556 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp556);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp557 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
*(&local0) = $tmp556;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// line 237
goto block1;
block1:;
// line 238
org$pandalanguage$pandac$parser$Token $tmp558 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp558;
// line 239
org$pandalanguage$pandac$parser$Token $tmp559 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp560 = $tmp559.kind;
panda$core$Int64 $tmp561 = $tmp560.$rawValue;
panda$core$Int64 $tmp562 = (panda$core$Int64) {13};
panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block4; else goto block5;
block4:;
// line 241
org$pandalanguage$pandac$parser$Token $tmp565 = *(&local1);
panda$core$String* $tmp566 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp565);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp567 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
*(&local2) = $tmp566;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
// line 242
panda$core$String* $tmp568 = *(&local2);
panda$core$Bit $tmp569 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp568, &$s570);
bool $tmp571 = $tmp569.value;
if ($tmp571) goto block6; else goto block7;
block6:;
// line 243
org$pandalanguage$pandac$parser$Token $tmp572 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp572, &$s573);
// line 244
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp574 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp575 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp575));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block7:;
// line 246
panda$core$MutableString* $tmp576 = *(&local0);
panda$core$String* $tmp577 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp576, $tmp577);
panda$core$String* $tmp578 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
goto block3;
block5:;
panda$core$Int64 $tmp579 = (panda$core$Int64) {0};
panda$core$Bit $tmp580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp579);
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block8; else goto block9;
block8:;
// line 248
org$pandalanguage$pandac$parser$Token $tmp582 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp582, &$s583);
// line 249
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp584 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block9:;
panda$core$Int64 $tmp585 = (panda$core$Int64) {107};
panda$core$Bit $tmp586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp585);
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block10; else goto block11;
block10:;
// line 251
org$pandalanguage$pandac$parser$Token $tmp588 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp588;
// line 252
org$pandalanguage$pandac$parser$Token $tmp589 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp590 = $tmp589.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp591;
$tmp591 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp591->value = $tmp590;
panda$core$Int64 $tmp592 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp593 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp592);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp594;
$tmp594 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp594->value = $tmp593;
ITable* $tmp595 = ((panda$core$Equatable*) $tmp591)->$class->itable;
while ($tmp595->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp595 = $tmp595->next;
}
$fn597 $tmp596 = $tmp595->methods[0];
panda$core$Bit $tmp598 = $tmp596(((panda$core$Equatable*) $tmp591), ((panda$core$Equatable*) $tmp594));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp591)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp594)));
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block12; else goto block13;
block12:;
// line 253
org$pandalanguage$pandac$parser$Token $tmp600 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp600, &$s601);
// line 254
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp602 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block13:;
// line 256
org$pandalanguage$pandac$parser$Token $tmp603 = *(&local3);
panda$core$String* $tmp604 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp603);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp605 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
*(&local4) = $tmp604;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
// line 257
panda$core$String* $tmp606 = *(&local4);
panda$collections$ListView* $tmp607 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT($tmp606);
panda$core$Int64 $tmp608 = (panda$core$Int64) {0};
ITable* $tmp609 = $tmp607->$class->itable;
while ($tmp609->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp609 = $tmp609->next;
}
$fn611 $tmp610 = $tmp609->methods[0];
panda$core$Object* $tmp612 = $tmp610($tmp607, $tmp608);
*(&local5) = ((panda$core$Char8$wrapper*) $tmp612)->value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
panda$core$Panda$unref$panda$core$Object$Q($tmp612);
// line 258
panda$core$Char8 $tmp613 = *(&local5);
panda$core$UInt8 $tmp614 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp615 = panda$core$Char8$init$panda$core$UInt8($tmp614);
panda$core$Bit $tmp616 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp613, $tmp615);
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block15; else goto block16;
block15:;
// line 259
panda$core$MutableString* $tmp618 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp618, &$s619);
goto block14;
block16:;
panda$core$UInt8 $tmp620 = (panda$core$UInt8) {114};
panda$core$Char8 $tmp621 = panda$core$Char8$init$panda$core$UInt8($tmp620);
panda$core$Bit $tmp622 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp613, $tmp621);
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block17; else goto block18;
block17:;
// line 260
panda$core$MutableString* $tmp624 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp624, &$s625);
goto block14;
block18:;
panda$core$UInt8 $tmp626 = (panda$core$UInt8) {116};
panda$core$Char8 $tmp627 = panda$core$Char8$init$panda$core$UInt8($tmp626);
panda$core$Bit $tmp628 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp613, $tmp627);
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block19; else goto block20;
block19:;
// line 261
panda$core$MutableString* $tmp630 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp630, &$s631);
goto block14;
block20:;
panda$core$UInt8 $tmp632 = (panda$core$UInt8) {39};
panda$core$Char8 $tmp633 = panda$core$Char8$init$panda$core$UInt8($tmp632);
panda$core$Bit $tmp634 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp613, $tmp633);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block21; else goto block22;
block21:;
// line 262
panda$core$MutableString* $tmp636 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp636, &$s637);
goto block14;
block22:;
panda$core$UInt8 $tmp638 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp639 = panda$core$Char8$init$panda$core$UInt8($tmp638);
panda$core$Bit $tmp640 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp613, $tmp639);
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block23; else goto block24;
block23:;
// line 263
panda$core$MutableString* $tmp642 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp642, &$s643);
goto block14;
block24:;
panda$core$UInt8 $tmp644 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp645 = panda$core$Char8$init$panda$core$UInt8($tmp644);
panda$core$Bit $tmp646 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp613, $tmp645);
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block25; else goto block26;
block25:;
// line 264
panda$core$MutableString* $tmp648 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp648, &$s649);
goto block14;
block26:;
panda$core$UInt8 $tmp650 = (panda$core$UInt8) {125};
panda$core$Char8 $tmp651 = panda$core$Char8$init$panda$core$UInt8($tmp650);
panda$core$Bit $tmp652 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp613, $tmp651);
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block27; else goto block28;
block27:;
// line 265
panda$core$MutableString* $tmp654 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp654, &$s655);
goto block14;
block28:;
// line 267
org$pandalanguage$pandac$parser$Token $tmp656 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp656, &$s657);
// line 268
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp658 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp659 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block14:;
// line 270
panda$core$MutableString* $tmp660 = *(&local0);
panda$core$String* $tmp661 = *(&local4);
panda$core$String* $tmp662 = *(&local4);
panda$core$String* $tmp663 = *(&local4);
panda$core$String$Index $tmp664 = panda$core$String$get_start$R$panda$core$String$Index($tmp663);
panda$core$String$Index $tmp665 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp662, $tmp664);
panda$core$Bit $tmp666 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp667 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp665, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp666);
panda$core$String* $tmp668 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp661, $tmp667);
panda$core$MutableString$append$panda$core$String($tmp660, $tmp668);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
panda$core$String* $tmp669 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
goto block3;
block11:;
panda$core$Int64 $tmp670 = (panda$core$Int64) {101};
panda$core$Bit $tmp671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp670);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block29; else goto block30;
block29:;
// line 272
org$pandalanguage$pandac$parser$Token $tmp673 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp673);
// line 273
panda$core$MutableString* $tmp674 = *(&local0);
panda$core$String* $tmp675 = panda$core$MutableString$finish$R$panda$core$String($tmp674);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
panda$core$MutableString* $tmp676 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp675;
block30:;
// line 275
panda$core$MutableString* $tmp677 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp678 = *(&local1);
panda$core$String* $tmp679 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp678);
panda$core$MutableString$append$panda$core$String($tmp677, $tmp679);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp679));
goto block3;
block3:;
goto block1;
block2:;
panda$core$Bit $tmp680 = panda$core$Bit$init$builtin_bit(false);
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp682 = (panda$core$Int64) {235};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s683, $tmp682, &$s684);
abort(); // unreachable
block31:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

panda$core$MutableString* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
panda$core$String* local4 = NULL;
panda$core$Char8 local5;
// line 281
panda$core$MutableString* $tmp685 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp685);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp686 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp685));
*(&local0) = $tmp685;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp685));
// line 282
goto block1;
block1:;
// line 283
org$pandalanguage$pandac$parser$Token $tmp687 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp687;
// line 284
org$pandalanguage$pandac$parser$Token $tmp688 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp689 = $tmp688.kind;
panda$core$Int64 $tmp690 = $tmp689.$rawValue;
panda$core$Int64 $tmp691 = (panda$core$Int64) {13};
panda$core$Bit $tmp692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp690, $tmp691);
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block4; else goto block5;
block4:;
// line 286
org$pandalanguage$pandac$parser$Token $tmp694 = *(&local1);
panda$core$String* $tmp695 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp694);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp696 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
*(&local2) = $tmp695;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
// line 287
panda$core$String* $tmp697 = *(&local2);
panda$core$Bit $tmp698 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp697, &$s699);
bool $tmp700 = $tmp698.value;
if ($tmp700) goto block6; else goto block7;
block6:;
// line 288
org$pandalanguage$pandac$parser$Token $tmp701 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp701, &$s702);
// line 289
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp703 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp704 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block7:;
// line 291
panda$core$MutableString* $tmp705 = *(&local0);
panda$core$String* $tmp706 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp705, $tmp706);
panda$core$String* $tmp707 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
goto block3;
block5:;
panda$core$Int64 $tmp708 = (panda$core$Int64) {0};
panda$core$Bit $tmp709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp690, $tmp708);
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block8; else goto block9;
block8:;
// line 293
org$pandalanguage$pandac$parser$Token $tmp711 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp711, &$s712);
// line 294
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp713 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block9:;
panda$core$Int64 $tmp714 = (panda$core$Int64) {107};
panda$core$Bit $tmp715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp690, $tmp714);
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block10; else goto block11;
block10:;
// line 296
org$pandalanguage$pandac$parser$Token $tmp717 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp717;
// line 297
org$pandalanguage$pandac$parser$Token $tmp718 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp719 = $tmp718.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp720;
$tmp720 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp720->value = $tmp719;
panda$core$Int64 $tmp721 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp722 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp721);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp723;
$tmp723 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp723->value = $tmp722;
ITable* $tmp724 = ((panda$core$Equatable*) $tmp720)->$class->itable;
while ($tmp724->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp724 = $tmp724->next;
}
$fn726 $tmp725 = $tmp724->methods[0];
panda$core$Bit $tmp727 = $tmp725(((panda$core$Equatable*) $tmp720), ((panda$core$Equatable*) $tmp723));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp720)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp723)));
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block12; else goto block13;
block12:;
// line 298
org$pandalanguage$pandac$parser$Token $tmp729 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp729, &$s730);
// line 299
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp731 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block13:;
// line 301
org$pandalanguage$pandac$parser$Token $tmp732 = *(&local3);
panda$core$String* $tmp733 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp732);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp734 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
*(&local4) = $tmp733;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
// line 302
panda$core$String* $tmp735 = *(&local4);
panda$collections$ListView* $tmp736 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT($tmp735);
panda$core$Int64 $tmp737 = (panda$core$Int64) {0};
ITable* $tmp738 = $tmp736->$class->itable;
while ($tmp738->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp738 = $tmp738->next;
}
$fn740 $tmp739 = $tmp738->methods[0];
panda$core$Object* $tmp741 = $tmp739($tmp736, $tmp737);
*(&local5) = ((panda$core$Char8$wrapper*) $tmp741)->value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp736));
panda$core$Panda$unref$panda$core$Object$Q($tmp741);
// line 303
panda$core$Char8 $tmp742 = *(&local5);
panda$core$UInt8 $tmp743 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp744 = panda$core$Char8$init$panda$core$UInt8($tmp743);
panda$core$Bit $tmp745 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp742, $tmp744);
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block15; else goto block16;
block15:;
// line 304
panda$core$MutableString* $tmp747 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp747, &$s748);
goto block14;
block16:;
panda$core$UInt8 $tmp749 = (panda$core$UInt8) {114};
panda$core$Char8 $tmp750 = panda$core$Char8$init$panda$core$UInt8($tmp749);
panda$core$Bit $tmp751 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp742, $tmp750);
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block17; else goto block18;
block17:;
// line 305
panda$core$MutableString* $tmp753 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp753, &$s754);
goto block14;
block18:;
panda$core$UInt8 $tmp755 = (panda$core$UInt8) {116};
panda$core$Char8 $tmp756 = panda$core$Char8$init$panda$core$UInt8($tmp755);
panda$core$Bit $tmp757 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp742, $tmp756);
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block19; else goto block20;
block19:;
// line 306
panda$core$MutableString* $tmp759 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp759, &$s760);
goto block14;
block20:;
panda$core$UInt8 $tmp761 = (panda$core$UInt8) {39};
panda$core$Char8 $tmp762 = panda$core$Char8$init$panda$core$UInt8($tmp761);
panda$core$Bit $tmp763 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp742, $tmp762);
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block21; else goto block22;
block21:;
// line 307
panda$core$MutableString* $tmp765 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp765, &$s766);
goto block14;
block22:;
panda$core$UInt8 $tmp767 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp768 = panda$core$Char8$init$panda$core$UInt8($tmp767);
panda$core$Bit $tmp769 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp742, $tmp768);
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block23; else goto block24;
block23:;
// line 308
panda$core$MutableString* $tmp771 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp771, &$s772);
goto block14;
block24:;
panda$core$UInt8 $tmp773 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp774 = panda$core$Char8$init$panda$core$UInt8($tmp773);
panda$core$Bit $tmp775 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp742, $tmp774);
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block25; else goto block26;
block25:;
// line 309
panda$core$MutableString* $tmp777 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp777, &$s778);
goto block14;
block26:;
panda$core$UInt8 $tmp779 = (panda$core$UInt8) {58};
panda$core$Char8 $tmp780 = panda$core$Char8$init$panda$core$UInt8($tmp779);
panda$core$Bit $tmp781 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp742, $tmp780);
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block27; else goto block28;
block27:;
// line 310
panda$core$MutableString* $tmp783 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp783, &$s784);
goto block14;
block28:;
panda$core$UInt8 $tmp785 = (panda$core$UInt8) {125};
panda$core$Char8 $tmp786 = panda$core$Char8$init$panda$core$UInt8($tmp785);
panda$core$Bit $tmp787 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp742, $tmp786);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block29; else goto block30;
block29:;
// line 311
panda$core$MutableString* $tmp789 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp789, &$s790);
goto block14;
block30:;
// line 313
org$pandalanguage$pandac$parser$Token $tmp791 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp791, &$s792);
// line 314
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp793 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp793));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp794 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block14:;
// line 316
panda$core$MutableString* $tmp795 = *(&local0);
panda$core$String* $tmp796 = *(&local4);
panda$core$String* $tmp797 = *(&local4);
panda$core$String* $tmp798 = *(&local4);
panda$core$String$Index $tmp799 = panda$core$String$get_start$R$panda$core$String$Index($tmp798);
panda$core$String$Index $tmp800 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp797, $tmp799);
panda$core$Bit $tmp801 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp802 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp800, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp801);
panda$core$String* $tmp803 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp796, $tmp802);
panda$core$MutableString$append$panda$core$String($tmp795, $tmp803);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
panda$core$String* $tmp804 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
goto block3;
block11:;
panda$core$Int64 $tmp805 = (panda$core$Int64) {96};
panda$core$Bit $tmp806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp690, $tmp805);
bool $tmp807 = $tmp806.value;
if ($tmp807) goto block31; else goto block32;
block31:;
// line 318
org$pandalanguage$pandac$parser$Token $tmp808 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp808);
// line 319
panda$core$MutableString* $tmp809 = *(&local0);
panda$core$String* $tmp810 = panda$core$MutableString$finish$R$panda$core$String($tmp809);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
panda$core$MutableString* $tmp811 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp810;
block32:;
panda$core$Int64 $tmp812 = (panda$core$Int64) {101};
panda$core$Bit $tmp813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp690, $tmp812);
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block33; else goto block34;
block33:;
// line 321
org$pandalanguage$pandac$parser$Token $tmp815 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp815);
// line 322
panda$core$MutableString* $tmp816 = *(&local0);
panda$core$String* $tmp817 = panda$core$MutableString$finish$R$panda$core$String($tmp816);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp817));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp817));
panda$core$MutableString* $tmp818 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp818));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp817;
block34:;
// line 324
panda$core$MutableString* $tmp819 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp820 = *(&local1);
panda$core$String* $tmp821 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp820);
panda$core$MutableString$append$panda$core$String($tmp819, $tmp821);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
goto block3;
block3:;
goto block1;
block2:;
panda$core$Bit $tmp822 = panda$core$Bit$init$builtin_bit(false);
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block35; else goto block36;
block36:;
panda$core$Int64 $tmp824 = (panda$core$Int64) {280};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s825, $tmp824, &$s826);
abort(); // unreachable
block35:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 331
org$pandalanguage$pandac$ASTNode* $tmp827 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp828 = (panda$core$Int64) {15};
$fn830 $tmp829 = ($fn830) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp831 = $tmp829(param1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp827, $tmp828, $tmp831, param1, &$s832);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp833 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
*(&local0) = $tmp827;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
// line 332
org$pandalanguage$pandac$ASTNode* $tmp834 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp835 = (panda$core$Int64) {8};
$fn837 $tmp836 = ($fn837) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp838 = $tmp836(param1);
org$pandalanguage$pandac$ASTNode* $tmp839 = *(&local0);
panda$collections$ImmutableArray* $tmp840 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp840);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp834, $tmp835, $tmp838, $tmp839, $tmp840);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp841 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp841));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
*(&local1) = $tmp834;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp840));
// line 333
org$pandalanguage$pandac$ASTNode* $tmp842 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp843 = (panda$core$Int64) {42};
$fn845 $tmp844 = ($fn845) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp846 = $tmp844(param1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp842, $tmp843, $tmp846, &$s847);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp848 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
*(&local2) = $tmp842;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
// line 334
org$pandalanguage$pandac$ASTNode* $tmp849 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp850 = (panda$core$Int64) {4};
$fn852 $tmp851 = ($fn852) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp853 = $tmp851(param1);
org$pandalanguage$pandac$ASTNode* $tmp854 = *(&local1);
panda$core$Int64 $tmp855 = (panda$core$Int64) {90};
org$pandalanguage$pandac$parser$Token$Kind $tmp856 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp855);
org$pandalanguage$pandac$ASTNode* $tmp857 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp849, $tmp850, $tmp853, $tmp854, $tmp856, $tmp857);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
org$pandalanguage$pandac$ASTNode* $tmp858 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
// unreffing stringType
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp859 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing call
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp860 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
// unreffing dot
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp849;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
panda$core$Bit local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$core$MutableString* local4 = NULL;
org$pandalanguage$pandac$parser$Token local5;
panda$core$String* local6 = NULL;
org$pandalanguage$pandac$parser$Token local7;
panda$core$String* local8 = NULL;
panda$core$Char8 local9;
panda$core$Bit local10;
org$pandalanguage$pandac$ASTNode* local11 = NULL;
panda$core$String* local12 = NULL;
panda$core$String* local13 = NULL;
org$pandalanguage$pandac$ASTNode* local14 = NULL;
org$pandalanguage$pandac$ASTNode* local15 = NULL;
org$pandalanguage$pandac$ASTNode* local16 = NULL;
panda$collections$Array* local17 = NULL;
org$pandalanguage$pandac$ASTNode* local18 = NULL;
org$pandalanguage$pandac$ASTNode* local19 = NULL;
panda$collections$Array* local20 = NULL;
panda$core$String* local21 = NULL;
panda$core$Bit local22;
// line 339
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp861 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
panda$core$Int64 $tmp862 = (panda$core$Int64) {10};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp863 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp862);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp861, param0, $tmp863);
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp864 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
*(&local0) = $tmp861;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
// line 340
org$pandalanguage$pandac$parser$Token $tmp865 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp865;
// line 341
org$pandalanguage$pandac$parser$Token $tmp866 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp867 = $tmp866.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp868;
$tmp868 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp868->value = $tmp867;
panda$core$Int64 $tmp869 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token$Kind $tmp870 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp869);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp871;
$tmp871 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp871->value = $tmp870;
ITable* $tmp872 = ((panda$core$Equatable*) $tmp868)->$class->itable;
while ($tmp872->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp872 = $tmp872->next;
}
$fn874 $tmp873 = $tmp872->methods[1];
panda$core$Bit $tmp875 = $tmp873(((panda$core$Equatable*) $tmp868), ((panda$core$Equatable*) $tmp871));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp868)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp871)));
bool $tmp876 = $tmp875.value;
if ($tmp876) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$parser$Token $tmp877 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp878 = $tmp877.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp879;
$tmp879 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp879->value = $tmp878;
panda$core$Int64 $tmp880 = (panda$core$Int64) {7};
org$pandalanguage$pandac$parser$Token$Kind $tmp881 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp880);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp882;
$tmp882 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp882->value = $tmp881;
ITable* $tmp883 = ((panda$core$Equatable*) $tmp879)->$class->itable;
while ($tmp883->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp883 = $tmp883->next;
}
$fn885 $tmp884 = $tmp883->methods[1];
panda$core$Bit $tmp886 = $tmp884(((panda$core$Equatable*) $tmp879), ((panda$core$Equatable*) $tmp882));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp879)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp882)));
*(&local2) = $tmp886;
goto block3;
block2:;
*(&local2) = $tmp875;
goto block3;
block3:;
panda$core$Bit $tmp887 = *(&local2);
bool $tmp888 = $tmp887.value;
if ($tmp888) goto block4; else goto block5;
block4:;
// line 342
org$pandalanguage$pandac$parser$Token $tmp889 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp890 = *(&local1);
panda$core$String* $tmp891 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp890);
panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s893, $tmp891);
panda$core$String* $tmp894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp892, &$s895);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp889, $tmp894);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
// line 343
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp896 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 345
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp897 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp897));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 346
panda$core$MutableString* $tmp898 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp898);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp899 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp899));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp898));
*(&local4) = $tmp898;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp898));
// line 347
goto block6;
block6:;
// line 348
org$pandalanguage$pandac$parser$Token $tmp900 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local5) = $tmp900;
// line 349
org$pandalanguage$pandac$parser$Token $tmp901 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp902 = $tmp901.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp903;
$tmp903 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp903->value = $tmp902;
org$pandalanguage$pandac$parser$Token $tmp904 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp905 = $tmp904.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp906;
$tmp906 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp906->value = $tmp905;
ITable* $tmp907 = ((panda$core$Equatable*) $tmp903)->$class->itable;
while ($tmp907->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp907 = $tmp907->next;
}
$fn909 $tmp908 = $tmp907->methods[0];
panda$core$Bit $tmp910 = $tmp908(((panda$core$Equatable*) $tmp903), ((panda$core$Equatable*) $tmp906));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp903)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp906)));
bool $tmp911 = $tmp910.value;
if ($tmp911) goto block8; else goto block9;
block8:;
// line 350
goto block7;
block9:;
// line 352
org$pandalanguage$pandac$parser$Token $tmp912 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp913 = $tmp912.kind;
panda$core$Int64 $tmp914 = $tmp913.$rawValue;
panda$core$Int64 $tmp915 = (panda$core$Int64) {13};
panda$core$Bit $tmp916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp914, $tmp915);
bool $tmp917 = $tmp916.value;
if ($tmp917) goto block11; else goto block12;
block11:;
// line 354
org$pandalanguage$pandac$parser$Token $tmp918 = *(&local5);
panda$core$String* $tmp919 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp918);
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp920 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp920));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp919));
*(&local6) = $tmp919;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp919));
// line 355
panda$core$String* $tmp921 = *(&local6);
panda$core$Bit $tmp922 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp921, &$s923);
bool $tmp924 = $tmp922.value;
if ($tmp924) goto block13; else goto block14;
block13:;
// line 356
org$pandalanguage$pandac$parser$Token $tmp925 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp925, &$s926);
// line 357
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp927 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
// unreffing str
*(&local6) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp928 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp928));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp929 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp930 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
// line 359
panda$core$MutableString* $tmp931 = *(&local4);
panda$core$String* $tmp932 = *(&local6);
panda$core$MutableString$append$panda$core$String($tmp931, $tmp932);
panda$core$String* $tmp933 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
// unreffing str
*(&local6) = ((panda$core$String*) NULL);
goto block10;
block12:;
panda$core$Int64 $tmp934 = (panda$core$Int64) {0};
panda$core$Bit $tmp935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp914, $tmp934);
bool $tmp936 = $tmp935.value;
if ($tmp936) goto block15; else goto block16;
block15:;
// line 361
org$pandalanguage$pandac$parser$Token $tmp937 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp937, &$s938);
// line 362
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp939 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp939));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp940 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp941 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
panda$core$Int64 $tmp942 = (panda$core$Int64) {107};
panda$core$Bit $tmp943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp914, $tmp942);
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block17; else goto block18;
block17:;
// line 364
org$pandalanguage$pandac$parser$Token $tmp945 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local7) = $tmp945;
// line 365
org$pandalanguage$pandac$parser$Token $tmp946 = *(&local7);
org$pandalanguage$pandac$parser$Token$Kind $tmp947 = $tmp946.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp948;
$tmp948 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp948->value = $tmp947;
panda$core$Int64 $tmp949 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp950 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp949);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp951;
$tmp951 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp951->value = $tmp950;
ITable* $tmp952 = ((panda$core$Equatable*) $tmp948)->$class->itable;
while ($tmp952->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp952 = $tmp952->next;
}
$fn954 $tmp953 = $tmp952->methods[0];
panda$core$Bit $tmp955 = $tmp953(((panda$core$Equatable*) $tmp948), ((panda$core$Equatable*) $tmp951));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp948)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp951)));
bool $tmp956 = $tmp955.value;
if ($tmp956) goto block19; else goto block20;
block19:;
// line 366
org$pandalanguage$pandac$parser$Token $tmp957 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp957, &$s958);
// line 367
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp959 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp959));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp960 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp960));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp961 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp961));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 369
org$pandalanguage$pandac$parser$Token $tmp962 = *(&local7);
panda$core$String* $tmp963 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp962);
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp964 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
*(&local8) = $tmp963;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
// line 370
panda$core$String* $tmp965 = *(&local8);
panda$collections$ListView* $tmp966 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT($tmp965);
panda$core$Int64 $tmp967 = (panda$core$Int64) {0};
ITable* $tmp968 = $tmp966->$class->itable;
while ($tmp968->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp968 = $tmp968->next;
}
$fn970 $tmp969 = $tmp968->methods[0];
panda$core$Object* $tmp971 = $tmp969($tmp966, $tmp967);
*(&local9) = ((panda$core$Char8$wrapper*) $tmp971)->value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
panda$core$Panda$unref$panda$core$Object$Q($tmp971);
// line 371
panda$core$Char8 $tmp972 = *(&local9);
panda$core$UInt8 $tmp973 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp974 = panda$core$Char8$init$panda$core$UInt8($tmp973);
panda$core$Bit $tmp975 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp972, $tmp974);
bool $tmp976 = $tmp975.value;
if ($tmp976) goto block22; else goto block23;
block22:;
// line 372
panda$core$MutableString* $tmp977 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp977, &$s978);
goto block21;
block23:;
panda$core$UInt8 $tmp979 = (panda$core$UInt8) {114};
panda$core$Char8 $tmp980 = panda$core$Char8$init$panda$core$UInt8($tmp979);
panda$core$Bit $tmp981 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp972, $tmp980);
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block24; else goto block25;
block24:;
// line 373
panda$core$MutableString* $tmp983 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp983, &$s984);
goto block21;
block25:;
panda$core$UInt8 $tmp985 = (panda$core$UInt8) {116};
panda$core$Char8 $tmp986 = panda$core$Char8$init$panda$core$UInt8($tmp985);
panda$core$Bit $tmp987 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp972, $tmp986);
bool $tmp988 = $tmp987.value;
if ($tmp988) goto block26; else goto block27;
block26:;
// line 374
panda$core$MutableString* $tmp989 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp989, &$s990);
goto block21;
block27:;
panda$core$UInt8 $tmp991 = (panda$core$UInt8) {39};
panda$core$Char8 $tmp992 = panda$core$Char8$init$panda$core$UInt8($tmp991);
panda$core$Bit $tmp993 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp972, $tmp992);
bool $tmp994 = $tmp993.value;
if ($tmp994) goto block28; else goto block29;
block28:;
// line 375
panda$core$MutableString* $tmp995 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp995, &$s996);
goto block21;
block29:;
panda$core$UInt8 $tmp997 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp998 = panda$core$Char8$init$panda$core$UInt8($tmp997);
panda$core$Bit $tmp999 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp972, $tmp998);
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block30; else goto block31;
block30:;
// line 376
panda$core$MutableString* $tmp1001 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp1001, &$s1002);
goto block21;
block31:;
panda$core$UInt8 $tmp1003 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp1004 = panda$core$Char8$init$panda$core$UInt8($tmp1003);
panda$core$Bit $tmp1005 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp972, $tmp1004);
bool $tmp1006 = $tmp1005.value;
if ($tmp1006) goto block32; else goto block33;
block32:;
// line 377
panda$core$MutableString* $tmp1007 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp1007, &$s1008);
goto block21;
block33:;
panda$core$UInt8 $tmp1009 = (panda$core$UInt8) {123};
panda$core$Char8 $tmp1010 = panda$core$Char8$init$panda$core$UInt8($tmp1009);
panda$core$Bit $tmp1011 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp972, $tmp1010);
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block34; else goto block35;
block34:;
// line 1
// line 380
panda$core$Bit* $tmp1013 = &param0->allowLambdas;
panda$core$Bit $tmp1014 = *$tmp1013;
*(&local10) = $tmp1014;
// line 381
panda$core$Bit $tmp1015 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp1016 = &param0->allowLambdas;
*$tmp1016 = $tmp1015;
// line 382
org$pandalanguage$pandac$ASTNode* $tmp1017 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1018 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
*(&local11) = $tmp1017;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
// line 383
panda$core$Bit $tmp1019 = *(&local10);
panda$core$Bit* $tmp1020 = &param0->allowLambdas;
*$tmp1020 = $tmp1019;
// line 384
org$pandalanguage$pandac$ASTNode* $tmp1021 = *(&local11);
panda$core$Bit $tmp1022 = panda$core$Bit$init$builtin_bit($tmp1021 == NULL);
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block36; else goto block37;
block36:;
// line 385
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1024 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1025 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1026 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1027 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1028 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block37:;
// line 387
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp1029 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local12) = ((panda$core$String*) NULL);
// line 388
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp1030 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1030));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local13) = ((panda$core$String*) NULL);
// line 389
panda$core$Int64 $tmp1031 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1032 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1031);
org$pandalanguage$pandac$parser$Token$nullable $tmp1033 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1032);
panda$core$Bit $tmp1034 = panda$core$Bit$init$builtin_bit($tmp1033.nonnull);
bool $tmp1035 = $tmp1034.value;
if ($tmp1035) goto block38; else goto block39;
block38:;
// line 390
org$pandalanguage$pandac$parser$Token $tmp1036 = *(&local1);
panda$core$String* $tmp1037 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(param0, $tmp1036);
panda$core$String* $tmp1038 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1038));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1037));
*(&local12) = $tmp1037;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1037));
goto block39;
block39:;
// line 392
panda$core$Int64 $tmp1039 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1040 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1039);
org$pandalanguage$pandac$parser$Token$nullable $tmp1041 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1040);
panda$core$Bit $tmp1042 = panda$core$Bit$init$builtin_bit($tmp1041.nonnull);
bool $tmp1043 = $tmp1042.value;
if ($tmp1043) goto block40; else goto block41;
block40:;
// line 393
org$pandalanguage$pandac$parser$Token $tmp1044 = *(&local1);
panda$core$String* $tmp1045 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(param0, $tmp1044);
panda$core$String* $tmp1046 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1046));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1045));
*(&local13) = $tmp1045;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1045));
// line 394
panda$core$String* $tmp1047 = *(&local13);
panda$core$Bit $tmp1048 = panda$core$Bit$init$builtin_bit($tmp1047 == NULL);
bool $tmp1049 = $tmp1048.value;
if ($tmp1049) goto block42; else goto block43;
block42:;
// line 395
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1050 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
// unreffing format
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp1051 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
// unreffing align
*(&local12) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1052 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1053 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1054 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1054));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1055 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1056 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1056));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block43:;
// line 397
org$pandalanguage$pandac$ASTNode* $tmp1057 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1058 = (panda$core$Int64) {42};
org$pandalanguage$pandac$ASTNode* $tmp1059 = *(&local11);
$fn1061 $tmp1060 = ($fn1061) $tmp1059->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1062 = $tmp1060($tmp1059);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1057, $tmp1058, $tmp1062, &$s1063);
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1064 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1064));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
*(&local14) = $tmp1057;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
// line 399
org$pandalanguage$pandac$ASTNode* $tmp1065 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1066 = (panda$core$Int64) {4};
org$pandalanguage$pandac$ASTNode* $tmp1067 = *(&local11);
$fn1069 $tmp1068 = ($fn1069) $tmp1067->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1070 = $tmp1068($tmp1067);
org$pandalanguage$pandac$ASTNode* $tmp1071 = *(&local11);
panda$core$Int64 $tmp1072 = (panda$core$Int64) {90};
org$pandalanguage$pandac$parser$Token$Kind $tmp1073 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1072);
org$pandalanguage$pandac$ASTNode* $tmp1074 = *(&local14);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1065, $tmp1066, $tmp1070, $tmp1071, $tmp1073, $tmp1074);
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1075 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1075));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
*(&local15) = $tmp1065;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
// line 401
org$pandalanguage$pandac$ASTNode* $tmp1076 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1077 = (panda$core$Int64) {15};
org$pandalanguage$pandac$ASTNode* $tmp1078 = *(&local11);
$fn1080 $tmp1079 = ($fn1080) $tmp1078->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1081 = $tmp1079($tmp1078);
org$pandalanguage$pandac$ASTNode* $tmp1082 = *(&local15);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1076, $tmp1077, $tmp1081, $tmp1082, &$s1083);
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1084 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1084));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1076));
*(&local16) = $tmp1076;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1076));
// line 402
panda$collections$Array* $tmp1085 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1085);
*(&local17) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1086 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1086));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1085));
*(&local17) = $tmp1085;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1085));
// line 403
panda$collections$Array* $tmp1087 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp1088 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1089 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1090 = *(&local1);
org$pandalanguage$pandac$Position $tmp1091 = $tmp1090.position;
panda$core$String* $tmp1092 = *(&local13);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1088, $tmp1089, $tmp1091, $tmp1092);
panda$collections$Array$add$panda$collections$Array$T($tmp1087, ((panda$core$Object*) $tmp1088));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1088));
// line 404
org$pandalanguage$pandac$ASTNode* $tmp1093 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1094 = (panda$core$Int64) {8};
org$pandalanguage$pandac$ASTNode* $tmp1095 = *(&local11);
$fn1097 $tmp1096 = ($fn1097) $tmp1095->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1098 = $tmp1096($tmp1095);
org$pandalanguage$pandac$ASTNode* $tmp1099 = *(&local16);
panda$collections$Array* $tmp1100 = *(&local17);
panda$collections$ImmutableArray* $tmp1101 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1100);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1093, $tmp1094, $tmp1098, $tmp1099, $tmp1101);
org$pandalanguage$pandac$ASTNode* $tmp1102 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1102));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1093));
*(&local11) = $tmp1093;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1093));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1101));
panda$collections$Array* $tmp1103 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1103));
// unreffing callArgs
*(&local17) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1104 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1104));
// unreffing dot
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1105 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1105));
// unreffing cast
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1106 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1106));
// unreffing formattable
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block41:;
// line 406
panda$core$Int64 $tmp1107 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp1108 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1107);
org$pandalanguage$pandac$parser$Token$nullable $tmp1109 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1108, &$s1110);
panda$core$Bit $tmp1111 = panda$core$Bit$init$builtin_bit(!$tmp1109.nonnull);
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block44; else goto block45;
block44:;
// line 407
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1113 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
// unreffing format
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp1114 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
// unreffing align
*(&local12) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1115 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1115));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1116 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1116));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1117 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1117));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1118 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1119 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block45:;
// line 409
panda$core$String* $tmp1120 = *(&local12);
panda$core$Bit $tmp1121 = panda$core$Bit$init$builtin_bit($tmp1120 != NULL);
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block46; else goto block47;
block46:;
// line 410
panda$core$String* $tmp1123 = *(&local13);
panda$core$Bit $tmp1124 = panda$core$Bit$init$builtin_bit($tmp1123 == NULL);
bool $tmp1125 = $tmp1124.value;
if ($tmp1125) goto block48; else goto block49;
block48:;
// line 411
org$pandalanguage$pandac$ASTNode* $tmp1126 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp1127 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1126);
org$pandalanguage$pandac$ASTNode* $tmp1128 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1128));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1127));
*(&local11) = $tmp1127;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1127));
goto block49;
block49:;
// line 413
org$pandalanguage$pandac$ASTNode* $tmp1129 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1130 = (panda$core$Int64) {42};
org$pandalanguage$pandac$ASTNode* $tmp1131 = *(&local11);
$fn1133 $tmp1132 = ($fn1133) $tmp1131->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1134 = $tmp1132($tmp1131);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1129, $tmp1130, $tmp1134, &$s1135);
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1136 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
*(&local18) = $tmp1129;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
// line 414
org$pandalanguage$pandac$ASTNode* $tmp1137 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1138 = (panda$core$Int64) {15};
org$pandalanguage$pandac$ASTNode* $tmp1139 = *(&local11);
$fn1141 $tmp1140 = ($fn1141) $tmp1139->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1142 = $tmp1140($tmp1139);
org$pandalanguage$pandac$ASTNode* $tmp1143 = *(&local18);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1137, $tmp1138, $tmp1142, $tmp1143, &$s1144);
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1145 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1137));
*(&local19) = $tmp1137;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1137));
// line 415
panda$collections$Array* $tmp1146 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1146);
*(&local20) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1147 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1147));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
*(&local20) = $tmp1146;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
// line 416
panda$collections$Array* $tmp1148 = *(&local20);
org$pandalanguage$pandac$ASTNode* $tmp1149 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp1148, ((panda$core$Object*) $tmp1149));
// line 417
panda$collections$Array* $tmp1150 = *(&local20);
org$pandalanguage$pandac$ASTNode* $tmp1151 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1152 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1153 = *(&local1);
org$pandalanguage$pandac$Position $tmp1154 = $tmp1153.position;
panda$core$String* $tmp1155 = *(&local12);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1151, $tmp1152, $tmp1154, $tmp1155);
panda$collections$Array$add$panda$collections$Array$T($tmp1150, ((panda$core$Object*) $tmp1151));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
// line 418
org$pandalanguage$pandac$ASTNode* $tmp1156 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1157 = (panda$core$Int64) {8};
org$pandalanguage$pandac$ASTNode* $tmp1158 = *(&local11);
$fn1160 $tmp1159 = ($fn1160) $tmp1158->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1161 = $tmp1159($tmp1158);
org$pandalanguage$pandac$ASTNode* $tmp1162 = *(&local19);
panda$collections$Array* $tmp1163 = *(&local20);
panda$collections$ImmutableArray* $tmp1164 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1163);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1156, $tmp1157, $tmp1161, $tmp1162, $tmp1164);
org$pandalanguage$pandac$ASTNode* $tmp1165 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1165));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
*(&local11) = $tmp1156;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
panda$collections$Array* $tmp1166 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
// unreffing callArgs
*(&local20) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1167 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
// unreffing callTarget
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1168 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1168));
// unreffing pandaType
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block47;
block47:;
// line 420
panda$core$MutableString* $tmp1169 = *(&local4);
panda$core$String* $tmp1170 = panda$core$MutableString$finish$R$panda$core$String($tmp1169);
*(&local21) = ((panda$core$String*) NULL);
panda$core$String* $tmp1171 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1171));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
*(&local21) = $tmp1170;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
// line 421
panda$core$MutableString* $tmp1172 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1172);
panda$core$MutableString* $tmp1173 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
*(&local4) = $tmp1172;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
// line 422
panda$core$String* $tmp1174 = *(&local21);
ITable* $tmp1176 = ((panda$core$Equatable*) $tmp1174)->$class->itable;
while ($tmp1176->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1176 = $tmp1176->next;
}
$fn1178 $tmp1177 = $tmp1176->methods[1];
panda$core$Bit $tmp1179 = $tmp1177(((panda$core$Equatable*) $tmp1174), ((panda$core$Equatable*) &$s1175));
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block50; else goto block51;
block50:;
*(&local22) = $tmp1179;
goto block52;
block51:;
org$pandalanguage$pandac$ASTNode* $tmp1181 = *(&local3);
panda$core$Bit $tmp1182 = panda$core$Bit$init$builtin_bit($tmp1181 != NULL);
*(&local22) = $tmp1182;
goto block52;
block52:;
panda$core$Bit $tmp1183 = *(&local22);
bool $tmp1184 = $tmp1183.value;
if ($tmp1184) goto block53; else goto block55;
block53:;
// line 423
org$pandalanguage$pandac$ASTNode* $tmp1185 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1186 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1187 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1188 = *(&local1);
org$pandalanguage$pandac$Position $tmp1189 = $tmp1188.position;
panda$core$String* $tmp1190 = *(&local21);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1186, $tmp1187, $tmp1189, $tmp1190);
org$pandalanguage$pandac$ASTNode* $tmp1191 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1185, $tmp1186);
org$pandalanguage$pandac$ASTNode* $tmp1192 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
*(&local3) = $tmp1191;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1186));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
// line 425
org$pandalanguage$pandac$ASTNode* $tmp1193 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1194 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp1195 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1193, $tmp1194);
org$pandalanguage$pandac$ASTNode* $tmp1196 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
*(&local3) = $tmp1195;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
goto block54;
block55:;
// line 1
// line 428
org$pandalanguage$pandac$ASTNode* $tmp1197 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp1198 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1197);
org$pandalanguage$pandac$ASTNode* $tmp1199 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1199));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
*(&local3) = $tmp1198;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
goto block54;
block54:;
panda$core$String* $tmp1200 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1200));
// unreffing text
*(&local21) = ((panda$core$String*) NULL);
panda$core$String* $tmp1201 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1201));
// unreffing format
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp1202 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1202));
// unreffing align
*(&local12) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1203 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block21;
block35:;
// line 432
org$pandalanguage$pandac$parser$Token $tmp1204 = *(&local5);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1204, &$s1205);
// line 433
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1206 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1206));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1207 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1207));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1208 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1209 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 435
panda$core$MutableString* $tmp1210 = *(&local4);
panda$core$String* $tmp1211 = *(&local8);
panda$core$String* $tmp1212 = *(&local8);
panda$core$String* $tmp1213 = *(&local8);
panda$core$String$Index $tmp1214 = panda$core$String$get_start$R$panda$core$String$Index($tmp1213);
panda$core$String$Index $tmp1215 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp1212, $tmp1214);
panda$core$Bit $tmp1216 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1217 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp1215, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1216);
panda$core$String* $tmp1218 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp1211, $tmp1217);
panda$core$MutableString$append$panda$core$String($tmp1210, $tmp1218);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1218));
panda$core$String* $tmp1219 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1219));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
goto block10;
block18:;
// line 437
panda$core$MutableString* $tmp1220 = *(&local4);
org$pandalanguage$pandac$parser$Token $tmp1221 = *(&local5);
panda$core$String* $tmp1222 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1221);
panda$core$MutableString$append$panda$core$String($tmp1220, $tmp1222);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1222));
goto block10;
block10:;
goto block6;
block7:;
// line 440
org$pandalanguage$pandac$ASTNode* $tmp1223 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1224 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1225 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token $tmp1226 = *(&local1);
org$pandalanguage$pandac$Position $tmp1227 = $tmp1226.position;
panda$core$MutableString* $tmp1228 = *(&local4);
panda$core$String* $tmp1229 = panda$core$MutableString$finish$R$panda$core$String($tmp1228);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1224, $tmp1225, $tmp1227, $tmp1229);
org$pandalanguage$pandac$ASTNode* $tmp1230 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1223, $tmp1224);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1224));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
panda$core$MutableString* $tmp1231 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1231));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1232 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1233 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp1230;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$Position local2;
panda$core$String* local3 = NULL;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local6;
org$pandalanguage$pandac$ASTNode* local7 = NULL;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
panda$collections$Array* local9 = NULL;
panda$core$Bit local10;
org$pandalanguage$pandac$ASTNode* local11 = NULL;
panda$core$Bit local12;
org$pandalanguage$pandac$ASTNode* local13 = NULL;
panda$collections$Array* local14 = NULL;
org$pandalanguage$pandac$ASTNode* local15 = NULL;
panda$collections$Array* local16 = NULL;
org$pandalanguage$pandac$ASTNode* local17 = NULL;
// line 449
panda$core$Int64 $tmp1234 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp1235 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1234);
org$pandalanguage$pandac$parser$Token$nullable $tmp1236 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1235, &$s1237);
*(&local0) = $tmp1236;
// line 450
org$pandalanguage$pandac$parser$Token$nullable $tmp1238 = *(&local0);
panda$core$Bit $tmp1239 = panda$core$Bit$init$builtin_bit(!$tmp1238.nonnull);
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block1; else goto block2;
block1:;
// line 451
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 453
org$pandalanguage$pandac$ASTNode* $tmp1241 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1242 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1242));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1241));
*(&local1) = $tmp1241;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1241));
// line 454
org$pandalanguage$pandac$ASTNode* $tmp1243 = *(&local1);
panda$core$Bit $tmp1244 = panda$core$Bit$init$builtin_bit($tmp1243 == NULL);
bool $tmp1245 = $tmp1244.value;
if ($tmp1245) goto block3; else goto block4;
block3:;
// line 455
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1246 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1246));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 457
org$pandalanguage$pandac$ASTNode* $tmp1247 = *(&local1);
panda$core$Int64* $tmp1248 = &$tmp1247->$rawValue;
panda$core$Int64 $tmp1249 = *$tmp1248;
panda$core$Int64 $tmp1250 = (panda$core$Int64) {20};
panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1249, $tmp1250);
bool $tmp1252 = $tmp1251.value;
if ($tmp1252) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp1253 = (org$pandalanguage$pandac$Position*) ($tmp1247->$data + 0);
org$pandalanguage$pandac$Position $tmp1254 = *$tmp1253;
*(&local2) = $tmp1254;
panda$core$String** $tmp1255 = (panda$core$String**) ($tmp1247->$data + 16);
panda$core$String* $tmp1256 = *$tmp1255;
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1257 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1257));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
*(&local3) = $tmp1256;
// line 460
panda$core$Int64 $tmp1258 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1259 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1258);
org$pandalanguage$pandac$parser$Token$nullable $tmp1260 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1259);
panda$core$Bit $tmp1261 = panda$core$Bit$init$builtin_bit($tmp1260.nonnull);
bool $tmp1262 = $tmp1261.value;
if ($tmp1262) goto block8; else goto block9;
block8:;
// line 462
panda$collections$Array* $tmp1263 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1263);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1264 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1264));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
*(&local4) = $tmp1263;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
// line 463
org$pandalanguage$pandac$ASTNode* $tmp1265 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1266 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1265));
*(&local5) = $tmp1265;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1265));
// line 464
org$pandalanguage$pandac$ASTNode* $tmp1267 = *(&local5);
panda$core$Bit $tmp1268 = panda$core$Bit$init$builtin_bit($tmp1267 == NULL);
bool $tmp1269 = $tmp1268.value;
if ($tmp1269) goto block10; else goto block11;
block10:;
// line 465
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1270 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1271 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1271));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1272 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1272));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1273 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1273));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 467
panda$collections$Array* $tmp1274 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1275 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1276 = (panda$core$Int64) {31};
org$pandalanguage$pandac$Position $tmp1277 = *(&local2);
panda$core$String* $tmp1278 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1279 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1275, $tmp1276, $tmp1277, $tmp1278, $tmp1279);
panda$collections$Array$add$panda$collections$Array$T($tmp1274, ((panda$core$Object*) $tmp1275));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1275));
// line 468
goto block12;
block12:;
panda$core$Int64 $tmp1280 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1281 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1280);
org$pandalanguage$pandac$parser$Token$nullable $tmp1282 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1281);
panda$core$Bit $tmp1283 = panda$core$Bit$init$builtin_bit($tmp1282.nonnull);
bool $tmp1284 = $tmp1283.value;
if ($tmp1284) goto block13; else goto block14;
block13:;
// line 469
panda$core$Int64 $tmp1285 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp1286 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1285);
org$pandalanguage$pandac$parser$Token$nullable $tmp1287 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1286, &$s1288);
*(&local6) = $tmp1287;
// line 470
panda$core$Int64 $tmp1289 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1290 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1289);
org$pandalanguage$pandac$parser$Token$nullable $tmp1291 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1290, &$s1292);
panda$core$Bit $tmp1293 = panda$core$Bit$init$builtin_bit(!$tmp1291.nonnull);
bool $tmp1294 = $tmp1293.value;
if ($tmp1294) goto block15; else goto block16;
block15:;
// line 471
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1295 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1295));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1296 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1296));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1297 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1297));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1298 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1298));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 473
org$pandalanguage$pandac$ASTNode* $tmp1299 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1300 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1300));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
*(&local7) = $tmp1299;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
// line 474
org$pandalanguage$pandac$ASTNode* $tmp1301 = *(&local7);
panda$core$Bit $tmp1302 = panda$core$Bit$init$builtin_bit($tmp1301 == NULL);
bool $tmp1303 = $tmp1302.value;
if ($tmp1303) goto block17; else goto block18;
block17:;
// line 475
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1304 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1304));
// unreffing nextType
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1305 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1305));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1306 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1306));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1307 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1307));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1308 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1308));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 477
panda$collections$Array* $tmp1309 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1310 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1311 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$nullable $tmp1312 = *(&local6);
org$pandalanguage$pandac$Position $tmp1313 = ((org$pandalanguage$pandac$parser$Token) $tmp1312.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp1314 = *(&local6);
panda$core$String* $tmp1315 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1314.value));
org$pandalanguage$pandac$ASTNode* $tmp1316 = *(&local7);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1310, $tmp1311, $tmp1313, $tmp1315, $tmp1316);
panda$collections$Array$add$panda$collections$Array$T($tmp1309, ((panda$core$Object*) $tmp1310));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1310));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1315));
org$pandalanguage$pandac$ASTNode* $tmp1317 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1317));
// unreffing nextType
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block12;
block14:;
// line 480
panda$core$Int64 $tmp1318 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1319 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1318);
org$pandalanguage$pandac$parser$Token$nullable $tmp1320 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1319, &$s1321);
panda$core$Bit $tmp1322 = panda$core$Bit$init$builtin_bit(!$tmp1320.nonnull);
bool $tmp1323 = $tmp1322.value;
if ($tmp1323) goto block19; else goto block20;
block19:;
// line 481
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1324 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1324));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1325 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1325));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1326 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1326));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1327 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1327));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 483
panda$core$Int64 $tmp1328 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1329 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1328);
org$pandalanguage$pandac$parser$Token$nullable $tmp1330 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1329, &$s1331);
panda$core$Bit $tmp1332 = panda$core$Bit$init$builtin_bit(!$tmp1330.nonnull);
bool $tmp1333 = $tmp1332.value;
if ($tmp1333) goto block21; else goto block22;
block21:;
// line 484
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1334 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1334));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1335 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1335));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1336 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1336));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1337 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1337));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 486
org$pandalanguage$pandac$ASTNode* $tmp1338 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1339 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1339));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1338));
*(&local8) = $tmp1338;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1338));
// line 487
org$pandalanguage$pandac$ASTNode* $tmp1340 = *(&local8);
panda$core$Bit $tmp1341 = panda$core$Bit$init$builtin_bit($tmp1340 == NULL);
bool $tmp1342 = $tmp1341.value;
if ($tmp1342) goto block23; else goto block24;
block23:;
// line 488
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1343 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1343));
// unreffing body
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1344 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1344));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1345 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1345));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1346 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1346));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1347 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1347));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block24:;
// line 490
org$pandalanguage$pandac$ASTNode* $tmp1348 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1349 = (panda$core$Int64) {43};
org$pandalanguage$pandac$parser$Token$nullable $tmp1350 = *(&local0);
org$pandalanguage$pandac$Position $tmp1351 = ((org$pandalanguage$pandac$parser$Token) $tmp1350.value).position;
panda$collections$Array* $tmp1352 = *(&local4);
panda$collections$ImmutableArray* $tmp1353 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1352);
org$pandalanguage$pandac$ASTNode* $tmp1354 = *(&local8);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1348, $tmp1349, $tmp1351, $tmp1353, $tmp1354);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1348));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1348));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1353));
org$pandalanguage$pandac$ASTNode* $tmp1355 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
// unreffing body
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1356 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1356));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1357 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1357));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1358 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1358));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1359 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1359));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1348;
block9:;
// line 492
panda$core$Int64 $tmp1360 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1361 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1360);
org$pandalanguage$pandac$parser$Token$nullable $tmp1362 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1361);
panda$core$Bit $tmp1363 = panda$core$Bit$init$builtin_bit($tmp1362.nonnull);
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block25; else goto block26;
block25:;
// line 494
panda$collections$Array* $tmp1365 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1365);
*(&local9) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1366 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1366));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1365));
*(&local9) = $tmp1365;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1365));
// line 495
panda$collections$Array* $tmp1367 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp1368 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1367, ((panda$core$Object*) $tmp1368));
// line 496
panda$core$Bit $tmp1369 = panda$core$Bit$init$builtin_bit(true);
*(&local10) = $tmp1369;
// line 497
goto block27;
block27:;
// line 498
org$pandalanguage$pandac$ASTNode* $tmp1370 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1371 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1371));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1370));
*(&local11) = $tmp1370;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1370));
// line 499
org$pandalanguage$pandac$ASTNode* $tmp1372 = *(&local11);
panda$core$Bit $tmp1373 = panda$core$Bit$init$builtin_bit($tmp1372 == NULL);
bool $tmp1374 = $tmp1373.value;
if ($tmp1374) goto block30; else goto block31;
block30:;
// line 500
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1375 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1375));
// unreffing nextExpr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1376 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1376));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1377 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1377));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1378 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block31:;
// line 502
org$pandalanguage$pandac$ASTNode* $tmp1379 = *(&local11);
panda$core$Int64* $tmp1380 = &$tmp1379->$rawValue;
panda$core$Int64 $tmp1381 = *$tmp1380;
panda$core$Int64 $tmp1382 = (panda$core$Int64) {20};
panda$core$Bit $tmp1383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1381, $tmp1382);
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block33; else goto block34;
block33:;
goto block32;
block34:;
// line 505
panda$core$Bit $tmp1385 = panda$core$Bit$init$builtin_bit(false);
*(&local10) = $tmp1385;
goto block32;
block32:;
// line 507
panda$collections$Array* $tmp1386 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp1387 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp1386, ((panda$core$Object*) $tmp1387));
org$pandalanguage$pandac$ASTNode* $tmp1388 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1388));
// unreffing nextExpr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block28;
block28:;
panda$core$Int64 $tmp1389 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1390 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1389);
org$pandalanguage$pandac$parser$Token$nullable $tmp1391 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1390);
panda$core$Bit $tmp1392 = panda$core$Bit$init$builtin_bit($tmp1391.nonnull);
bool $tmp1393 = $tmp1392.value;
if ($tmp1393) goto block27; else goto block29;
block29:;
// line 509
panda$core$Int64 $tmp1394 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1395 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1394);
org$pandalanguage$pandac$parser$Token$nullable $tmp1396 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1395, &$s1397);
panda$core$Bit $tmp1398 = panda$core$Bit$init$builtin_bit(!$tmp1396.nonnull);
bool $tmp1399 = $tmp1398.value;
if ($tmp1399) goto block35; else goto block36;
block35:;
// line 510
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1400 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1400));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1401 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1401));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1402 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1402));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block36:;
// line 512
panda$core$Bit $tmp1403 = *(&local10);
bool $tmp1404 = $tmp1403.value;
if ($tmp1404) goto block37; else goto block38;
block37:;
panda$core$Int64 $tmp1405 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1406 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1405);
org$pandalanguage$pandac$parser$Token$nullable $tmp1407 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1406);
panda$core$Bit $tmp1408 = panda$core$Bit$init$builtin_bit($tmp1407.nonnull);
*(&local12) = $tmp1408;
goto block39;
block38:;
*(&local12) = $tmp1403;
goto block39;
block39:;
panda$core$Bit $tmp1409 = *(&local12);
bool $tmp1410 = $tmp1409.value;
if ($tmp1410) goto block40; else goto block41;
block40:;
// line 513
org$pandalanguage$pandac$ASTNode* $tmp1411 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1412 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1412));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1411));
*(&local13) = $tmp1411;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1411));
// line 514
org$pandalanguage$pandac$ASTNode* $tmp1413 = *(&local13);
panda$core$Bit $tmp1414 = panda$core$Bit$init$builtin_bit($tmp1413 == NULL);
bool $tmp1415 = $tmp1414.value;
if ($tmp1415) goto block42; else goto block43;
block42:;
// line 515
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1416 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
// unreffing body
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1417 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1418 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1418));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1419 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1419));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block43:;
// line 517
org$pandalanguage$pandac$ASTNode* $tmp1420 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1421 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp1422 = *(&local0);
org$pandalanguage$pandac$Position $tmp1423 = ((org$pandalanguage$pandac$parser$Token) $tmp1422.value).position;
panda$collections$Array* $tmp1424 = *(&local9);
panda$collections$ImmutableArray* $tmp1425 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1424);
org$pandalanguage$pandac$ASTNode* $tmp1426 = *(&local13);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1420, $tmp1421, $tmp1423, $tmp1425, $tmp1426);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1420));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1420));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
org$pandalanguage$pandac$ASTNode* $tmp1427 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1427));
// unreffing body
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1428 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1428));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1429 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1430 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1430));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1420;
block41:;
// line 520
org$pandalanguage$pandac$parser$Token$nullable $tmp1431 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1431.value), &$s1432);
// line 521
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1433 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1433));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1434 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1435 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1435));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
// line 524
panda$core$Int64 $tmp1436 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1437 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1436);
org$pandalanguage$pandac$parser$Token$nullable $tmp1438 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1437, &$s1439);
panda$core$Bit $tmp1440 = panda$core$Bit$init$builtin_bit(!$tmp1438.nonnull);
bool $tmp1441 = $tmp1440.value;
if ($tmp1441) goto block44; else goto block45;
block44:;
// line 525
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1442 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1442));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1443 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block45:;
// line 527
panda$core$Int64 $tmp1444 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1445 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1444);
org$pandalanguage$pandac$parser$Token$nullable $tmp1446 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1445);
panda$core$Bit $tmp1447 = panda$core$Bit$init$builtin_bit($tmp1446.nonnull);
bool $tmp1448 = $tmp1447.value;
if ($tmp1448) goto block46; else goto block47;
block46:;
// line 528
panda$collections$Array* $tmp1449 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1449);
*(&local14) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1450 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
*(&local14) = $tmp1449;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
// line 529
panda$collections$Array* $tmp1451 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp1452 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1451, ((panda$core$Object*) $tmp1452));
// line 530
org$pandalanguage$pandac$ASTNode* $tmp1453 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1454 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1453));
*(&local15) = $tmp1453;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1453));
// line 531
org$pandalanguage$pandac$ASTNode* $tmp1455 = *(&local15);
panda$core$Bit $tmp1456 = panda$core$Bit$init$builtin_bit($tmp1455 == NULL);
bool $tmp1457 = $tmp1456.value;
if ($tmp1457) goto block48; else goto block49;
block48:;
// line 532
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1458 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
// unreffing body
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1459 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1460 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1461 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block49:;
// line 534
org$pandalanguage$pandac$ASTNode* $tmp1462 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1463 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp1464 = *(&local0);
org$pandalanguage$pandac$Position $tmp1465 = ((org$pandalanguage$pandac$parser$Token) $tmp1464.value).position;
panda$collections$Array* $tmp1466 = *(&local14);
panda$collections$ImmutableArray* $tmp1467 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1466);
org$pandalanguage$pandac$ASTNode* $tmp1468 = *(&local15);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1462, $tmp1463, $tmp1465, $tmp1467, $tmp1468);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1467));
org$pandalanguage$pandac$ASTNode* $tmp1469 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1469));
// unreffing body
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1470 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1470));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1471 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1471));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1472 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1472));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1462;
block47:;
// line 536
org$pandalanguage$pandac$ASTNode* $tmp1473 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
panda$core$String* $tmp1474 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1474));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1475 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1475));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1473;
block7:;
// line 539
panda$core$Int64 $tmp1476 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1477 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1476);
org$pandalanguage$pandac$parser$Token$nullable $tmp1478 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1477);
panda$core$Bit $tmp1479 = panda$core$Bit$init$builtin_bit(!$tmp1478.nonnull);
bool $tmp1480 = $tmp1479.value;
if ($tmp1480) goto block50; else goto block51;
block50:;
// line 540
panda$core$Int64 $tmp1481 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1482 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1481);
org$pandalanguage$pandac$parser$Token$nullable $tmp1483 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1482, &$s1484);
// line 541
org$pandalanguage$pandac$ASTNode* $tmp1485 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1485));
org$pandalanguage$pandac$ASTNode* $tmp1486 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1486));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1485;
block51:;
// line 543
panda$collections$Array* $tmp1487 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1487);
*(&local16) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1488 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1488));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1487));
*(&local16) = $tmp1487;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1487));
// line 544
panda$collections$Array* $tmp1489 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1490 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1489, ((panda$core$Object*) $tmp1490));
// line 545
goto block52;
block52:;
// line 546
org$pandalanguage$pandac$ASTNode* $tmp1491 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1492 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1491));
*(&local17) = $tmp1491;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1491));
// line 547
org$pandalanguage$pandac$ASTNode* $tmp1493 = *(&local17);
panda$core$Bit $tmp1494 = panda$core$Bit$init$builtin_bit($tmp1493 == NULL);
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block55; else goto block56;
block55:;
// line 548
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1496 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
// unreffing nextExpr
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1497 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1497));
// unreffing arguments
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1498 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1498));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block56:;
// line 550
panda$collections$Array* $tmp1499 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1500 = *(&local17);
panda$collections$Array$add$panda$collections$Array$T($tmp1499, ((panda$core$Object*) $tmp1500));
org$pandalanguage$pandac$ASTNode* $tmp1501 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
// unreffing nextExpr
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block53;
block53:;
panda$core$Int64 $tmp1502 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1503 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1502);
org$pandalanguage$pandac$parser$Token$nullable $tmp1504 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1503);
panda$core$Bit $tmp1505 = panda$core$Bit$init$builtin_bit($tmp1504.nonnull);
bool $tmp1506 = $tmp1505.value;
if ($tmp1506) goto block52; else goto block54;
block54:;
// line 553
panda$core$Int64 $tmp1507 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1508 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1507);
org$pandalanguage$pandac$parser$Token$nullable $tmp1509 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1508, &$s1510);
// line 555
org$pandalanguage$pandac$parser$Token$nullable $tmp1511 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1511.value), &$s1512);
// line 556
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1513 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1513));
// unreffing arguments
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1514 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
panda$core$Bit $tmp1515 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1516 = $tmp1515.value;
if ($tmp1516) goto block57; else goto block58;
block58:;
panda$core$Int64 $tmp1517 = (panda$core$Int64) {448};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1518, $tmp1517, &$s1519);
abort(); // unreachable
block57:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
// line 564
panda$core$Int64 $tmp1520 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp1521 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1520);
org$pandalanguage$pandac$parser$Token$nullable $tmp1522 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1521, &$s1523);
*(&local0) = $tmp1522;
// line 565
panda$core$Int64 $tmp1524 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1525 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1524);
org$pandalanguage$pandac$parser$Token$nullable $tmp1526 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1525);
panda$core$Bit $tmp1527 = panda$core$Bit$init$builtin_bit($tmp1526.nonnull);
bool $tmp1528 = $tmp1527.value;
if ($tmp1528) goto block1; else goto block2;
block1:;
// line 566
org$pandalanguage$pandac$ASTNode* $tmp1529 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1530 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1530));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1529));
*(&local1) = $tmp1529;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1529));
// line 567
org$pandalanguage$pandac$ASTNode* $tmp1531 = *(&local1);
panda$core$Bit $tmp1532 = panda$core$Bit$init$builtin_bit($tmp1531 == NULL);
bool $tmp1533 = $tmp1532.value;
if ($tmp1533) goto block3; else goto block4;
block3:;
// line 568
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1534 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1534));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 570
panda$collections$Array* $tmp1535 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1535);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1536 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1536));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1535));
*(&local2) = $tmp1535;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1535));
// line 571
panda$collections$Array* $tmp1537 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1538 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1539 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$nullable $tmp1540 = *(&local0);
org$pandalanguage$pandac$Position $tmp1541 = ((org$pandalanguage$pandac$parser$Token) $tmp1540.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp1542 = *(&local0);
panda$core$String* $tmp1543 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1542.value));
org$pandalanguage$pandac$ASTNode* $tmp1544 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1538, $tmp1539, $tmp1541, $tmp1543, $tmp1544);
panda$collections$Array$add$panda$collections$Array$T($tmp1537, ((panda$core$Object*) $tmp1538));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1538));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
// line 572
panda$core$Int64 $tmp1545 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1546 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1545);
org$pandalanguage$pandac$parser$Token$nullable $tmp1547 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1546, &$s1548);
panda$core$Bit $tmp1549 = panda$core$Bit$init$builtin_bit(!$tmp1547.nonnull);
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block5; else goto block6;
block5:;
// line 573
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1551 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1551));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1552 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1552));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 575
org$pandalanguage$pandac$ASTNode* $tmp1553 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1554 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
*(&local3) = $tmp1553;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
// line 576
org$pandalanguage$pandac$ASTNode* $tmp1555 = *(&local3);
panda$core$Bit $tmp1556 = panda$core$Bit$init$builtin_bit($tmp1555 == NULL);
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block7; else goto block8;
block7:;
// line 577
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1558 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1558));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1559 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1560 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1560));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 579
org$pandalanguage$pandac$ASTNode* $tmp1561 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1562 = (panda$core$Int64) {43};
org$pandalanguage$pandac$parser$Token$nullable $tmp1563 = *(&local0);
org$pandalanguage$pandac$Position $tmp1564 = ((org$pandalanguage$pandac$parser$Token) $tmp1563.value).position;
panda$collections$Array* $tmp1565 = *(&local2);
panda$collections$ImmutableArray* $tmp1566 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1565);
org$pandalanguage$pandac$ASTNode* $tmp1567 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1561, $tmp1562, $tmp1564, $tmp1566, $tmp1567);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1566));
org$pandalanguage$pandac$ASTNode* $tmp1568 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1569 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1570 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1570));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1561;
block2:;
// line 581
panda$collections$Array* $tmp1571 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1571);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1572 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1572));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
*(&local4) = $tmp1571;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
// line 582
panda$collections$Array* $tmp1573 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1574 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1575 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp1576 = *(&local0);
org$pandalanguage$pandac$Position $tmp1577 = ((org$pandalanguage$pandac$parser$Token) $tmp1576.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp1578 = *(&local0);
panda$core$String* $tmp1579 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1578.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1574, $tmp1575, $tmp1577, $tmp1579);
panda$collections$Array$add$panda$collections$Array$T($tmp1573, ((panda$core$Object*) $tmp1574));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1574));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1579));
// line 583
panda$core$Int64 $tmp1580 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1581 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1580);
org$pandalanguage$pandac$parser$Token$nullable $tmp1582 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1581, &$s1583);
panda$core$Bit $tmp1584 = panda$core$Bit$init$builtin_bit(!$tmp1582.nonnull);
bool $tmp1585 = $tmp1584.value;
if ($tmp1585) goto block9; else goto block10;
block9:;
// line 584
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1586 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1586));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 586
org$pandalanguage$pandac$ASTNode* $tmp1587 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1588 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1588));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1587));
*(&local5) = $tmp1587;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1587));
// line 587
org$pandalanguage$pandac$ASTNode* $tmp1589 = *(&local5);
panda$core$Bit $tmp1590 = panda$core$Bit$init$builtin_bit($tmp1589 == NULL);
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block11; else goto block12;
block11:;
// line 588
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1592 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1592));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1593 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1593));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 590
org$pandalanguage$pandac$ASTNode* $tmp1594 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1595 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp1596 = *(&local0);
org$pandalanguage$pandac$Position $tmp1597 = ((org$pandalanguage$pandac$parser$Token) $tmp1596.value).position;
panda$collections$Array* $tmp1598 = *(&local4);
panda$collections$ImmutableArray* $tmp1599 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp1598);
org$pandalanguage$pandac$ASTNode* $tmp1600 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1594, $tmp1595, $tmp1597, $tmp1599, $tmp1600);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1594));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1594));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1599));
org$pandalanguage$pandac$ASTNode* $tmp1601 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1601));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1602 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1602));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return $tmp1594;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Int64 local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 597
panda$core$Int64 $tmp1603 = (panda$core$Int64) {55};
org$pandalanguage$pandac$parser$Token$Kind $tmp1604 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1603);
org$pandalanguage$pandac$parser$Token$nullable $tmp1605 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1604, &$s1606);
panda$core$Bit $tmp1607 = panda$core$Bit$init$builtin_bit(!$tmp1605.nonnull);
bool $tmp1608 = $tmp1607.value;
if ($tmp1608) goto block1; else goto block2;
block1:;
// line 598
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 601
org$pandalanguage$pandac$parser$Lexer** $tmp1609 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1610 = *$tmp1609;
org$pandalanguage$plex$runtime$DFA** $tmp1611 = &$tmp1610->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1612 = *$tmp1611;
panda$core$Int64* $tmp1613 = &$tmp1612->offset;
panda$core$Int64 $tmp1614 = *$tmp1613;
panda$core$Int64 $tmp1615 = (panda$core$Int64) {1};
int64_t $tmp1616 = $tmp1614.value;
int64_t $tmp1617 = $tmp1615.value;
int64_t $tmp1618 = $tmp1616 - $tmp1617;
panda$core$Int64 $tmp1619 = (panda$core$Int64) {$tmp1618};
*(&local0) = $tmp1619;
// line 602
org$pandalanguage$regex$RegexParser** $tmp1620 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1621 = *$tmp1620;
org$pandalanguage$regex$RegexLexer** $tmp1622 = &$tmp1621->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1623 = *$tmp1622;
org$pandalanguage$plex$runtime$DFA** $tmp1624 = &$tmp1623->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1625 = *$tmp1624;
org$pandalanguage$pandac$parser$Lexer** $tmp1626 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1627 = *$tmp1626;
org$pandalanguage$plex$runtime$DFA** $tmp1628 = &$tmp1627->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1629 = *$tmp1628;
panda$core$Int64* $tmp1630 = &$tmp1629->offset;
panda$core$Int64 $tmp1631 = *$tmp1630;
panda$core$Int64* $tmp1632 = &$tmp1625->offset;
*$tmp1632 = $tmp1631;
// line 603
org$pandalanguage$regex$RegexParser** $tmp1633 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1634 = *$tmp1633;
org$pandalanguage$regex$RegexLexer** $tmp1635 = &$tmp1634->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1636 = *$tmp1635;
org$pandalanguage$plex$runtime$DFA** $tmp1637 = &$tmp1636->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1638 = *$tmp1637;
org$pandalanguage$pandac$parser$Lexer** $tmp1639 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1640 = *$tmp1639;
org$pandalanguage$plex$runtime$DFA** $tmp1641 = &$tmp1640->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1642 = *$tmp1641;
panda$core$Int64* $tmp1643 = &$tmp1642->line;
panda$core$Int64 $tmp1644 = *$tmp1643;
panda$core$Int64* $tmp1645 = &$tmp1638->line;
*$tmp1645 = $tmp1644;
// line 604
org$pandalanguage$regex$RegexParser** $tmp1646 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1647 = *$tmp1646;
org$pandalanguage$regex$RegexLexer** $tmp1648 = &$tmp1647->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1649 = *$tmp1648;
org$pandalanguage$plex$runtime$DFA** $tmp1650 = &$tmp1649->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1651 = *$tmp1650;
org$pandalanguage$pandac$parser$Lexer** $tmp1652 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1653 = *$tmp1652;
org$pandalanguage$plex$runtime$DFA** $tmp1654 = &$tmp1653->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1655 = *$tmp1654;
panda$core$Int64* $tmp1656 = &$tmp1655->column;
panda$core$Int64 $tmp1657 = *$tmp1656;
panda$core$Int64* $tmp1658 = &$tmp1651->column;
*$tmp1658 = $tmp1657;
// line 605
org$pandalanguage$regex$RegexParser** $tmp1659 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1660 = *$tmp1659;
org$pandalanguage$pandac$ASTNode* $tmp1661 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q($tmp1660);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1662 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1662));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
*(&local1) = $tmp1661;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
// line 606
org$pandalanguage$pandac$parser$Lexer** $tmp1663 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1664 = *$tmp1663;
org$pandalanguage$plex$runtime$DFA** $tmp1665 = &$tmp1664->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1666 = *$tmp1665;
org$pandalanguage$regex$RegexParser** $tmp1667 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1668 = *$tmp1667;
org$pandalanguage$regex$RegexLexer** $tmp1669 = &$tmp1668->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1670 = *$tmp1669;
org$pandalanguage$plex$runtime$DFA** $tmp1671 = &$tmp1670->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1672 = *$tmp1671;
panda$core$Int64* $tmp1673 = &$tmp1672->offset;
panda$core$Int64 $tmp1674 = *$tmp1673;
panda$core$Int64* $tmp1675 = &$tmp1666->offset;
*$tmp1675 = $tmp1674;
// line 607
org$pandalanguage$pandac$parser$Lexer** $tmp1676 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1677 = *$tmp1676;
org$pandalanguage$plex$runtime$DFA** $tmp1678 = &$tmp1677->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1679 = *$tmp1678;
org$pandalanguage$regex$RegexParser** $tmp1680 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1681 = *$tmp1680;
org$pandalanguage$regex$RegexLexer** $tmp1682 = &$tmp1681->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1683 = *$tmp1682;
org$pandalanguage$plex$runtime$DFA** $tmp1684 = &$tmp1683->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1685 = *$tmp1684;
panda$core$Int64* $tmp1686 = &$tmp1685->line;
panda$core$Int64 $tmp1687 = *$tmp1686;
panda$core$Int64* $tmp1688 = &$tmp1679->line;
*$tmp1688 = $tmp1687;
// line 608
org$pandalanguage$pandac$parser$Lexer** $tmp1689 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1690 = *$tmp1689;
org$pandalanguage$plex$runtime$DFA** $tmp1691 = &$tmp1690->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1692 = *$tmp1691;
org$pandalanguage$regex$RegexParser** $tmp1693 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1694 = *$tmp1693;
org$pandalanguage$regex$RegexLexer** $tmp1695 = &$tmp1694->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1696 = *$tmp1695;
org$pandalanguage$plex$runtime$DFA** $tmp1697 = &$tmp1696->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1698 = *$tmp1697;
panda$core$Int64* $tmp1699 = &$tmp1698->column;
panda$core$Int64 $tmp1700 = *$tmp1699;
panda$core$Int64* $tmp1701 = &$tmp1692->column;
*$tmp1701 = $tmp1700;
// line 609
org$pandalanguage$pandac$ASTNode* $tmp1702 = *(&local1);
panda$core$Bit $tmp1703 = panda$core$Bit$init$builtin_bit($tmp1702 == NULL);
bool $tmp1704 = $tmp1703.value;
if ($tmp1704) goto block3; else goto block4;
block3:;
// line 610
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1705 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1705));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 612
panda$core$Int64 $tmp1706 = (panda$core$Int64) {55};
org$pandalanguage$pandac$parser$Token$Kind $tmp1707 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1706);
org$pandalanguage$pandac$parser$Token$nullable $tmp1708 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1707, &$s1709);
panda$core$Bit $tmp1710 = panda$core$Bit$init$builtin_bit(!$tmp1708.nonnull);
bool $tmp1711 = $tmp1710.value;
if ($tmp1711) goto block5; else goto block6;
block5:;
// line 613
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1712 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1712));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 615
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1713 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1714 = *$tmp1713;
panda$core$Bit $tmp1715 = panda$core$Bit$init$builtin_bit($tmp1714 != NULL);
bool $tmp1716 = $tmp1715.value;
if ($tmp1716) goto block7; else goto block8;
block7:;
// line 617
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1717 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1718 = *$tmp1717;
$fn1720 $tmp1719 = ($fn1720) $tmp1718->$class->vtable[7];
$tmp1719($tmp1718);
// line 618
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1721 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1722 = *$tmp1721;
$fn1724 $tmp1723 = ($fn1724) $tmp1722->$class->vtable[7];
$tmp1723($tmp1722);
// line 620
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1725 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1726 = *$tmp1725;
panda$core$Int64 $tmp1727 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$Token$Kind $tmp1728 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1727);
panda$core$Int64 $tmp1729 = *(&local0);
panda$core$String$Index $tmp1730 = panda$core$String$Index$init$panda$core$Int64($tmp1729);
org$pandalanguage$pandac$parser$Lexer** $tmp1731 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1732 = *$tmp1731;
org$pandalanguage$plex$runtime$DFA** $tmp1733 = &$tmp1732->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1734 = *$tmp1733;
panda$core$Int64* $tmp1735 = &$tmp1734->offset;
panda$core$Int64 $tmp1736 = *$tmp1735;
panda$core$String$Index $tmp1737 = panda$core$String$Index$init$panda$core$Int64($tmp1736);
org$pandalanguage$pandac$ASTNode* $tmp1738 = *(&local1);
$fn1740 $tmp1739 = ($fn1740) $tmp1738->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1741 = $tmp1739($tmp1738);
org$pandalanguage$pandac$parser$Token $tmp1742 = org$pandalanguage$pandac$parser$Token$init$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position($tmp1728, $tmp1730, $tmp1737, $tmp1741);
$fn1744 $tmp1743 = ($fn1744) $tmp1726->$class->vtable[6];
$tmp1743($tmp1726, $tmp1742);
goto block8;
block8:;
// line 623
org$pandalanguage$pandac$ASTNode* $tmp1745 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
org$pandalanguage$pandac$ASTNode* $tmp1746 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1746));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1745;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token$Kind local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$String* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
// line 632
org$pandalanguage$pandac$parser$Token $tmp1747 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp1747;
// line 633
org$pandalanguage$pandac$parser$Token $tmp1748 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp1749 = $tmp1748.kind;
panda$core$Int64 $tmp1750 = $tmp1749.$rawValue;
panda$core$Int64 $tmp1751 = (panda$core$Int64) {49};
panda$core$Bit $tmp1752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1751);
bool $tmp1753 = $tmp1752.value;
if ($tmp1753) goto block2; else goto block3;
block2:;
// line 635
org$pandalanguage$pandac$parser$Token $tmp1754 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp1755 = $tmp1754.kind;
*(&local1) = $tmp1755;
// line 636
panda$core$Bit* $tmp1756 = &param0->allowLambdas;
panda$core$Bit $tmp1757 = *$tmp1756;
bool $tmp1758 = $tmp1757.value;
if ($tmp1758) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$parser$Token$Kind $tmp1759 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1760;
$tmp1760 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1760->value = $tmp1759;
panda$core$Int64 $tmp1761 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1762 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1761);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1763;
$tmp1763 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1763->value = $tmp1762;
ITable* $tmp1764 = ((panda$core$Equatable*) $tmp1760)->$class->itable;
while ($tmp1764->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1764 = $tmp1764->next;
}
$fn1766 $tmp1765 = $tmp1764->methods[0];
panda$core$Bit $tmp1767 = $tmp1765(((panda$core$Equatable*) $tmp1760), ((panda$core$Equatable*) $tmp1763));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1760)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1763)));
*(&local3) = $tmp1767;
goto block6;
block5:;
*(&local3) = $tmp1757;
goto block6;
block6:;
panda$core$Bit $tmp1768 = *(&local3);
bool $tmp1769 = $tmp1768.value;
if ($tmp1769) goto block7; else goto block8;
block7:;
*(&local2) = $tmp1768;
goto block9;
block8:;
org$pandalanguage$pandac$parser$Token$Kind $tmp1770 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1771;
$tmp1771 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1771->value = $tmp1770;
panda$core$Int64 $tmp1772 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1773 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1772);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1774;
$tmp1774 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1774->value = $tmp1773;
ITable* $tmp1775 = ((panda$core$Equatable*) $tmp1771)->$class->itable;
while ($tmp1775->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1775 = $tmp1775->next;
}
$fn1777 $tmp1776 = $tmp1775->methods[0];
panda$core$Bit $tmp1778 = $tmp1776(((panda$core$Equatable*) $tmp1771), ((panda$core$Equatable*) $tmp1774));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1771)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1774)));
*(&local2) = $tmp1778;
goto block9;
block9:;
panda$core$Bit $tmp1779 = *(&local2);
bool $tmp1780 = $tmp1779.value;
if ($tmp1780) goto block10; else goto block11;
block10:;
// line 637
org$pandalanguage$pandac$parser$Token $tmp1781 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1781);
// line 638
org$pandalanguage$pandac$ASTNode* $tmp1782 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1782));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1782));
return $tmp1782;
block11:;
// line 640
org$pandalanguage$pandac$ASTNode* $tmp1783 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1784 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token $tmp1785 = *(&local0);
org$pandalanguage$pandac$Position $tmp1786 = $tmp1785.position;
org$pandalanguage$pandac$parser$Token $tmp1787 = *(&local0);
panda$core$String* $tmp1788 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1787);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1783, $tmp1784, $tmp1786, $tmp1788);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1783));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1783));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1788));
return $tmp1783;
block3:;
panda$core$Int64 $tmp1789 = (panda$core$Int64) {3};
panda$core$Bit $tmp1790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1789);
bool $tmp1791 = $tmp1790.value;
if ($tmp1791) goto block12; else goto block13;
block12:;
// line 642
org$pandalanguage$pandac$ASTNode* $tmp1792 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1793 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token $tmp1794 = *(&local0);
org$pandalanguage$pandac$Position $tmp1795 = $tmp1794.position;
org$pandalanguage$pandac$parser$Token $tmp1796 = *(&local0);
panda$core$String* $tmp1797 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1796);
panda$core$UInt64$nullable $tmp1798 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1797);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1792, $tmp1793, $tmp1795, ((panda$core$UInt64) $tmp1798.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1792));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1792));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1797));
return $tmp1792;
block13:;
panda$core$Int64 $tmp1799 = (panda$core$Int64) {4};
panda$core$Bit $tmp1800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1799);
bool $tmp1801 = $tmp1800.value;
if ($tmp1801) goto block14; else goto block15;
block14:;
// line 644
org$pandalanguage$pandac$ASTNode* $tmp1802 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1803 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token $tmp1804 = *(&local0);
org$pandalanguage$pandac$Position $tmp1805 = $tmp1804.position;
org$pandalanguage$pandac$parser$Token $tmp1806 = *(&local0);
panda$core$String* $tmp1807 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1806);
panda$core$Int64 $tmp1808 = (panda$core$Int64) {2};
panda$core$Bit $tmp1809 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1810 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1808, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1809);
panda$core$String* $tmp1811 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1807, $tmp1810);
panda$core$Int64 $tmp1812 = (panda$core$Int64) {2};
panda$core$UInt64$nullable $tmp1813 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1811, $tmp1812);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1802, $tmp1803, $tmp1805, ((panda$core$UInt64) $tmp1813.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1802));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1802));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1807));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1811));
return $tmp1802;
block15:;
panda$core$Int64 $tmp1814 = (panda$core$Int64) {5};
panda$core$Bit $tmp1815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1814);
bool $tmp1816 = $tmp1815.value;
if ($tmp1816) goto block16; else goto block17;
block16:;
// line 646
org$pandalanguage$pandac$ASTNode* $tmp1817 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1818 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token $tmp1819 = *(&local0);
org$pandalanguage$pandac$Position $tmp1820 = $tmp1819.position;
org$pandalanguage$pandac$parser$Token $tmp1821 = *(&local0);
panda$core$String* $tmp1822 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1821);
panda$core$Int64 $tmp1823 = (panda$core$Int64) {2};
panda$core$Bit $tmp1824 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1825 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1823, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1824);
panda$core$String* $tmp1826 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1822, $tmp1825);
panda$core$Int64 $tmp1827 = (panda$core$Int64) {16};
panda$core$UInt64$nullable $tmp1828 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1826, $tmp1827);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1817, $tmp1818, $tmp1820, ((panda$core$UInt64) $tmp1828.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1817));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1817));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1822));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
return $tmp1817;
block17:;
panda$core$Int64 $tmp1829 = (panda$core$Int64) {6};
panda$core$Bit $tmp1830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1829);
bool $tmp1831 = $tmp1830.value;
if ($tmp1831) goto block18; else goto block19;
block18:;
// line 648
org$pandalanguage$pandac$ASTNode* $tmp1832 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1833 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token $tmp1834 = *(&local0);
org$pandalanguage$pandac$Position $tmp1835 = $tmp1834.position;
org$pandalanguage$pandac$parser$Token $tmp1836 = *(&local0);
panda$core$String* $tmp1837 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1836);
panda$core$Real64$nullable $tmp1838 = panda$core$String$convert$R$panda$core$Real64$Q($tmp1837);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1832, $tmp1833, $tmp1835, ((panda$core$Real64) $tmp1838.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1832));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1832));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1837));
return $tmp1832;
block19:;
panda$core$Int64 $tmp1839 = (panda$core$Int64) {47};
panda$core$Bit $tmp1840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1839);
bool $tmp1841 = $tmp1840.value;
if ($tmp1841) goto block20; else goto block21;
block20:;
// line 650
org$pandalanguage$pandac$ASTNode* $tmp1842 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1843 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token $tmp1844 = *(&local0);
org$pandalanguage$pandac$Position $tmp1845 = $tmp1844.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1842, $tmp1843, $tmp1845);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1842));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1842));
return $tmp1842;
block21:;
panda$core$Int64 $tmp1846 = (panda$core$Int64) {48};
panda$core$Bit $tmp1847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1846);
bool $tmp1848 = $tmp1847.value;
if ($tmp1848) goto block22; else goto block23;
block22:;
// line 652
org$pandalanguage$pandac$ASTNode* $tmp1849 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1850 = (panda$core$Int64) {39};
org$pandalanguage$pandac$parser$Token $tmp1851 = *(&local0);
org$pandalanguage$pandac$Position $tmp1852 = $tmp1851.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1849, $tmp1850, $tmp1852);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1849));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1849));
return $tmp1849;
block23:;
panda$core$Int64 $tmp1853 = (panda$core$Int64) {44};
panda$core$Bit $tmp1854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1853);
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block24; else goto block25;
block24:;
// line 654
org$pandalanguage$pandac$ASTNode* $tmp1856 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1857 = (panda$core$Int64) {28};
org$pandalanguage$pandac$parser$Token $tmp1858 = *(&local0);
org$pandalanguage$pandac$Position $tmp1859 = $tmp1858.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1856, $tmp1857, $tmp1859);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1856));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1856));
return $tmp1856;
block25:;
panda$core$Int64 $tmp1860 = (panda$core$Int64) {42};
panda$core$Bit $tmp1861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1860);
bool $tmp1862 = $tmp1861.value;
if ($tmp1862) goto block26; else goto block27;
block26:;
// line 656
org$pandalanguage$pandac$ASTNode* $tmp1863 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1864 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp1865 = *(&local0);
org$pandalanguage$pandac$Position $tmp1866 = $tmp1865.position;
panda$core$Bit $tmp1867 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1863, $tmp1864, $tmp1866, $tmp1867);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1863));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1863));
return $tmp1863;
block27:;
panda$core$Int64 $tmp1868 = (panda$core$Int64) {43};
panda$core$Bit $tmp1869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1868);
bool $tmp1870 = $tmp1869.value;
if ($tmp1870) goto block28; else goto block29;
block28:;
// line 658
org$pandalanguage$pandac$ASTNode* $tmp1871 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1872 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp1873 = *(&local0);
org$pandalanguage$pandac$Position $tmp1874 = $tmp1873.position;
panda$core$Bit $tmp1875 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1871, $tmp1872, $tmp1874, $tmp1875);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1871));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1871));
return $tmp1871;
block29:;
panda$core$Int64 $tmp1876 = (panda$core$Int64) {8};
panda$core$Bit $tmp1877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1876);
bool $tmp1878 = $tmp1877.value;
if ($tmp1878) goto block30; else goto block31;
block31:;
panda$core$Int64 $tmp1879 = (panda$core$Int64) {7};
panda$core$Bit $tmp1880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1879);
bool $tmp1881 = $tmp1880.value;
if ($tmp1881) goto block30; else goto block32;
block30:;
// line 660
org$pandalanguage$pandac$parser$Token $tmp1882 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1882);
// line 661
org$pandalanguage$pandac$ASTNode* $tmp1883 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1883));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1883));
return $tmp1883;
block32:;
panda$core$Int64 $tmp1884 = (panda$core$Int64) {104};
panda$core$Bit $tmp1885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1884);
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block33; else goto block34;
block33:;
// line 663
org$pandalanguage$pandac$parser$Token $tmp1887 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1887);
// line 664
org$pandalanguage$pandac$ASTNode* $tmp1888 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1888));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1888));
return $tmp1888;
block34:;
panda$core$Int64 $tmp1889 = (panda$core$Int64) {14};
panda$core$Bit $tmp1890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1889);
bool $tmp1891 = $tmp1890.value;
if ($tmp1891) goto block35; else goto block36;
block35:;
// line 666
org$pandalanguage$pandac$parser$Token $tmp1892 = *(&local0);
panda$core$String* $tmp1893 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1892);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp1894 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1894));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1893));
*(&local4) = $tmp1893;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1893));
// line 667
panda$core$String* $tmp1895 = *(&local4);
panda$core$Bit $tmp1896 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1895, &$s1897);
bool $tmp1898 = $tmp1896.value;
if ($tmp1898) goto block37; else goto block39;
block37:;
// line 668
panda$core$Int64 $tmp1899 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp1900 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1899);
org$pandalanguage$pandac$parser$Token$nullable $tmp1901 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1900, &$s1902);
// line 669
org$pandalanguage$pandac$ASTNode* $tmp1903 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1904 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1904));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1903));
*(&local5) = $tmp1903;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1903));
// line 670
org$pandalanguage$pandac$ASTNode* $tmp1905 = *(&local5);
panda$core$Bit $tmp1906 = panda$core$Bit$init$builtin_bit($tmp1905 == NULL);
bool $tmp1907 = $tmp1906.value;
if ($tmp1907) goto block40; else goto block41;
block40:;
// line 671
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1908 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1908));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1909 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1909));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block41:;
// line 673
panda$core$Int64 $tmp1910 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1911 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1910);
org$pandalanguage$pandac$parser$Token$nullable $tmp1912 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1911, &$s1913);
// line 674
org$pandalanguage$pandac$ASTNode* $tmp1914 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1915 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$Token $tmp1916 = *(&local0);
org$pandalanguage$pandac$Position $tmp1917 = $tmp1916.position;
org$pandalanguage$pandac$ASTNode* $tmp1918 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1914, $tmp1915, $tmp1917, $tmp1918);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1914));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1914));
org$pandalanguage$pandac$ASTNode* $tmp1919 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1919));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1920 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1920));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
return $tmp1914;
block39:;
// line 676
panda$core$String* $tmp1921 = *(&local4);
panda$core$Bit $tmp1922 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1921, &$s1923);
bool $tmp1924 = $tmp1922.value;
if ($tmp1924) goto block42; else goto block43;
block42:;
// line 677
org$pandalanguage$pandac$ASTNode* $tmp1925 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1926 = (panda$core$Int64) {3};
org$pandalanguage$pandac$parser$Token $tmp1927 = *(&local0);
org$pandalanguage$pandac$Position $tmp1928 = $tmp1927.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1925, $tmp1926, $tmp1928);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1925));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1925));
panda$core$String* $tmp1929 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1929));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
return $tmp1925;
block43:;
goto block38;
block38:;
// line 679
org$pandalanguage$pandac$parser$Token $tmp1930 = *(&local0);
panda$core$String* $tmp1931 = *(&local4);
panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1933, $tmp1931);
panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1932, &$s1935);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1930, $tmp1934);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1932));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
// line 680
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1936 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1936));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block36:;
panda$core$Int64 $tmp1937 = (panda$core$Int64) {21};
panda$core$Bit $tmp1938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1937);
bool $tmp1939 = $tmp1938.value;
if ($tmp1939) goto block44; else goto block45;
block45:;
panda$core$Int64 $tmp1940 = (panda$core$Int64) {22};
panda$core$Bit $tmp1941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1940);
bool $tmp1942 = $tmp1941.value;
if ($tmp1942) goto block44; else goto block46;
block44:;
// line 682
org$pandalanguage$pandac$parser$Token $tmp1943 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1943);
// line 683
org$pandalanguage$pandac$ASTNode* $tmp1944 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1944));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1944));
return $tmp1944;
block46:;
panda$core$Int64 $tmp1945 = (panda$core$Int64) {55};
panda$core$Bit $tmp1946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1945);
bool $tmp1947 = $tmp1946.value;
if ($tmp1947) goto block47; else goto block48;
block47:;
// line 685
org$pandalanguage$pandac$parser$Token $tmp1948 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1948);
// line 686
org$pandalanguage$pandac$ASTNode* $tmp1949 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1949));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1949));
return $tmp1949;
block48:;
// line 688
org$pandalanguage$pandac$parser$Token $tmp1950 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp1951 = *(&local0);
panda$core$String* $tmp1952 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1951);
panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1954, $tmp1952);
panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, &$s1956);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1950, $tmp1955);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1952));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1955));
// line 689
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp1957 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1958 = $tmp1957.value;
if ($tmp1958) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp1959 = (panda$core$Int64) {631};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1960, $tmp1959, &$s1961);
abort(); // unreachable
block49:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* param0) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 695
panda$core$Int64* $tmp1962 = &param0->$rawValue;
panda$core$Int64 $tmp1963 = *$tmp1962;
panda$core$Int64 $tmp1964 = (panda$core$Int64) {20};
panda$core$Bit $tmp1965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1963, $tmp1964);
bool $tmp1966 = $tmp1965.value;
if ($tmp1966) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp1967 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1968 = *$tmp1967;
panda$core$String** $tmp1969 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1970 = *$tmp1969;
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp1971 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1971));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1970));
*(&local0) = $tmp1970;
// line 696
panda$core$String* $tmp1972 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
panda$core$String* $tmp1973 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1973));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return $tmp1972;
block3:;
panda$core$Int64 $tmp1974 = (panda$core$Int64) {15};
panda$core$Bit $tmp1975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1963, $tmp1974);
bool $tmp1976 = $tmp1975.value;
if ($tmp1976) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp1977 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1978 = *$tmp1977;
org$pandalanguage$pandac$ASTNode** $tmp1979 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1980 = *$tmp1979;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1981 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1980));
*(&local1) = $tmp1980;
panda$core$String** $tmp1982 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp1983 = *$tmp1982;
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp1984 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1984));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
*(&local2) = $tmp1983;
// line 698
org$pandalanguage$pandac$ASTNode* $tmp1985 = *(&local1);
panda$core$String* $tmp1986 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q($tmp1985);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1987 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1987));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1986));
*(&local3) = $tmp1986;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1986));
// line 699
panda$core$String* $tmp1988 = *(&local3);
panda$core$Bit $tmp1989 = panda$core$Bit$init$builtin_bit($tmp1988 != NULL);
bool $tmp1990 = $tmp1989.value;
if ($tmp1990) goto block6; else goto block7;
block6:;
// line 700
panda$core$String* $tmp1991 = *(&local3);
panda$core$String* $tmp1992 = *(&local2);
panda$core$String* $tmp1993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1994, $tmp1992);
panda$core$String* $tmp1995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1991, $tmp1993);
panda$core$String* $tmp1996 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1996));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1995));
*(&local3) = $tmp1995;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1995));
goto block7;
block7:;
// line 702
panda$core$String* $tmp1997 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1997));
panda$core$String* $tmp1998 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1998));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1999 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1999));
// unreffing field
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2000 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2000));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1997;
block5:;
// line 704
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block1:;
panda$core$Bit $tmp2001 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2002 = $tmp2001.value;
if ($tmp2002) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp2003 = (panda$core$Int64) {694};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2004, $tmp2003, &$s2005);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token local1;
// line 714
org$pandalanguage$pandac$parser$Token $tmp2006 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp2006;
// line 715
org$pandalanguage$pandac$parser$Token $tmp2007 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2008 = $tmp2007.kind;
panda$core$Int64 $tmp2009 = $tmp2008.$rawValue;
panda$core$Int64 $tmp2010 = (panda$core$Int64) {49};
panda$core$Bit $tmp2011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2010);
bool $tmp2012 = $tmp2011.value;
if ($tmp2012) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp2013 = (panda$core$Int64) {52};
panda$core$Bit $tmp2014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2013);
bool $tmp2015 = $tmp2014.value;
if ($tmp2015) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp2016 = (panda$core$Int64) {53};
panda$core$Bit $tmp2017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2016);
bool $tmp2018 = $tmp2017.value;
if ($tmp2018) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp2019 = (panda$core$Int64) {54};
panda$core$Bit $tmp2020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2019);
bool $tmp2021 = $tmp2020.value;
if ($tmp2021) goto block2; else goto block6;
block6:;
panda$core$Int64 $tmp2022 = (panda$core$Int64) {55};
panda$core$Bit $tmp2023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2022);
bool $tmp2024 = $tmp2023.value;
if ($tmp2024) goto block2; else goto block7;
block7:;
panda$core$Int64 $tmp2025 = (panda$core$Int64) {56};
panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2025);
bool $tmp2027 = $tmp2026.value;
if ($tmp2027) goto block2; else goto block8;
block8:;
panda$core$Int64 $tmp2028 = (panda$core$Int64) {58};
panda$core$Bit $tmp2029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2028);
bool $tmp2030 = $tmp2029.value;
if ($tmp2030) goto block2; else goto block9;
block9:;
panda$core$Int64 $tmp2031 = (panda$core$Int64) {59};
panda$core$Bit $tmp2032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2031);
bool $tmp2033 = $tmp2032.value;
if ($tmp2033) goto block2; else goto block10;
block10:;
panda$core$Int64 $tmp2034 = (panda$core$Int64) {60};
panda$core$Bit $tmp2035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2034);
bool $tmp2036 = $tmp2035.value;
if ($tmp2036) goto block2; else goto block11;
block11:;
panda$core$Int64 $tmp2037 = (panda$core$Int64) {63};
panda$core$Bit $tmp2038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2037);
bool $tmp2039 = $tmp2038.value;
if ($tmp2039) goto block2; else goto block12;
block12:;
panda$core$Int64 $tmp2040 = (panda$core$Int64) {66};
panda$core$Bit $tmp2041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2040);
bool $tmp2042 = $tmp2041.value;
if ($tmp2042) goto block2; else goto block13;
block13:;
panda$core$Int64 $tmp2043 = (panda$core$Int64) {65};
panda$core$Bit $tmp2044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2043);
bool $tmp2045 = $tmp2044.value;
if ($tmp2045) goto block2; else goto block14;
block14:;
panda$core$Int64 $tmp2046 = (panda$core$Int64) {57};
panda$core$Bit $tmp2047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2046);
bool $tmp2048 = $tmp2047.value;
if ($tmp2048) goto block2; else goto block15;
block15:;
panda$core$Int64 $tmp2049 = (panda$core$Int64) {67};
panda$core$Bit $tmp2050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2049);
bool $tmp2051 = $tmp2050.value;
if ($tmp2051) goto block2; else goto block16;
block16:;
panda$core$Int64 $tmp2052 = (panda$core$Int64) {68};
panda$core$Bit $tmp2053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2052);
bool $tmp2054 = $tmp2053.value;
if ($tmp2054) goto block2; else goto block17;
block17:;
panda$core$Int64 $tmp2055 = (panda$core$Int64) {69};
panda$core$Bit $tmp2056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2055);
bool $tmp2057 = $tmp2056.value;
if ($tmp2057) goto block2; else goto block18;
block18:;
panda$core$Int64 $tmp2058 = (panda$core$Int64) {70};
panda$core$Bit $tmp2059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2058);
bool $tmp2060 = $tmp2059.value;
if ($tmp2060) goto block2; else goto block19;
block19:;
panda$core$Int64 $tmp2061 = (panda$core$Int64) {71};
panda$core$Bit $tmp2062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2061);
bool $tmp2063 = $tmp2062.value;
if ($tmp2063) goto block2; else goto block20;
block20:;
panda$core$Int64 $tmp2064 = (panda$core$Int64) {72};
panda$core$Bit $tmp2065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2064);
bool $tmp2066 = $tmp2065.value;
if ($tmp2066) goto block2; else goto block21;
block21:;
panda$core$Int64 $tmp2067 = (panda$core$Int64) {50};
panda$core$Bit $tmp2068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2067);
bool $tmp2069 = $tmp2068.value;
if ($tmp2069) goto block2; else goto block22;
block22:;
panda$core$Int64 $tmp2070 = (panda$core$Int64) {51};
panda$core$Bit $tmp2071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2070);
bool $tmp2072 = $tmp2071.value;
if ($tmp2072) goto block2; else goto block23;
block23:;
panda$core$Int64 $tmp2073 = (panda$core$Int64) {73};
panda$core$Bit $tmp2074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2073);
bool $tmp2075 = $tmp2074.value;
if ($tmp2075) goto block2; else goto block24;
block2:;
// line 722
org$pandalanguage$pandac$parser$Token $tmp2076 = *(&local0);
panda$core$String* $tmp2077 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp2076);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2077));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2077));
return $tmp2077;
block24:;
panda$core$Int64 $tmp2078 = (panda$core$Int64) {64};
panda$core$Bit $tmp2079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2078);
bool $tmp2080 = $tmp2079.value;
if ($tmp2080) goto block25; else goto block26;
block25:;
// line 724
org$pandalanguage$pandac$parser$Token $tmp2081 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2081;
// line 725
org$pandalanguage$pandac$parser$Token $tmp2082 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2083 = $tmp2082.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2084;
$tmp2084 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2084->value = $tmp2083;
panda$core$Int64 $tmp2085 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2086 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2085);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2087;
$tmp2087 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2087->value = $tmp2086;
ITable* $tmp2088 = ((panda$core$Equatable*) $tmp2084)->$class->itable;
while ($tmp2088->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2088 = $tmp2088->next;
}
$fn2090 $tmp2089 = $tmp2088->methods[0];
panda$core$Bit $tmp2091 = $tmp2089(((panda$core$Equatable*) $tmp2084), ((panda$core$Equatable*) $tmp2087));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2084)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2087)));
bool $tmp2092 = $tmp2091.value;
if ($tmp2092) goto block27; else goto block29;
block27:;
// line 726
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2093));
return &$s2093;
block29:;
// line 1
// line 729
org$pandalanguage$pandac$parser$Token $tmp2094 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2094);
// line 730
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2095));
return &$s2095;
block28:;
goto block1;
block26:;
panda$core$Int64 $tmp2096 = (panda$core$Int64) {102};
panda$core$Bit $tmp2097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009, $tmp2096);
bool $tmp2098 = $tmp2097.value;
if ($tmp2098) goto block30; else goto block31;
block30:;
// line 733
panda$core$Int64 $tmp2099 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2100 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2099);
org$pandalanguage$pandac$parser$Token$nullable $tmp2101 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2100, &$s2102);
panda$core$Bit $tmp2103 = panda$core$Bit$init$builtin_bit(!$tmp2101.nonnull);
bool $tmp2104 = $tmp2103.value;
if ($tmp2104) goto block32; else goto block33;
block32:;
// line 734
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block33:;
// line 736
panda$core$Int64 $tmp2105 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp2106 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2105);
org$pandalanguage$pandac$parser$Token$nullable $tmp2107 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2106);
panda$core$Bit $tmp2108 = panda$core$Bit$init$builtin_bit($tmp2107.nonnull);
bool $tmp2109 = $tmp2108.value;
if ($tmp2109) goto block34; else goto block35;
block34:;
// line 737
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2110));
return &$s2110;
block35:;
// line 739
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2111));
return &$s2111;
block31:;
// line 741
org$pandalanguage$pandac$parser$Token $tmp2112 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2113 = *(&local0);
panda$core$String* $tmp2114 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp2113);
panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2116, $tmp2114);
panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, &$s2118);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp2112, $tmp2117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2114));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2115));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2117));
// line 743
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block1:;
panda$core$Bit $tmp2119 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2120 = $tmp2119.value;
if ($tmp2120) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp2121 = (panda$core$Int64) {713};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2122, $tmp2121, &$s2123);
abort(); // unreachable
block36:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 748
panda$core$Bit $tmp2124 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$ASTNode* $tmp2125 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2124);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2125));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2125));
return $tmp2125;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 756
panda$core$Int64 $tmp2126 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2127 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2126);
org$pandalanguage$pandac$parser$Token$nullable $tmp2128 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2127, &$s2129);
*(&local0) = $tmp2128;
// line 757
org$pandalanguage$pandac$parser$Token$nullable $tmp2130 = *(&local0);
panda$core$Bit $tmp2131 = panda$core$Bit$init$builtin_bit(!$tmp2130.nonnull);
bool $tmp2132 = $tmp2131.value;
if ($tmp2132) goto block1; else goto block2;
block1:;
// line 758
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 760
panda$collections$Array* $tmp2133 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2133);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2134 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2134));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2133));
*(&local1) = $tmp2133;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2133));
// line 761
panda$core$Int64 $tmp2135 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2136 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2135);
org$pandalanguage$pandac$parser$Token$nullable $tmp2137 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2136);
panda$core$Bit $tmp2138 = panda$core$Bit$init$builtin_bit(!$tmp2137.nonnull);
bool $tmp2139 = $tmp2138.value;
if ($tmp2139) goto block3; else goto block4;
block3:;
// line 762
org$pandalanguage$pandac$ASTNode* $tmp2140 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2141 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2141));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
*(&local2) = $tmp2140;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
// line 763
org$pandalanguage$pandac$ASTNode* $tmp2142 = *(&local2);
panda$core$Bit $tmp2143 = panda$core$Bit$init$builtin_bit($tmp2142 == NULL);
bool $tmp2144 = $tmp2143.value;
if ($tmp2144) goto block5; else goto block6;
block5:;
// line 764
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2145 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2145));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2146 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2146));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 766
panda$collections$Array* $tmp2147 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp2148 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2147, ((panda$core$Object*) $tmp2148));
// line 767
goto block7;
block7:;
panda$core$Int64 $tmp2149 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2150 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2149);
org$pandalanguage$pandac$parser$Token$nullable $tmp2151 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2150);
panda$core$Bit $tmp2152 = panda$core$Bit$init$builtin_bit($tmp2151.nonnull);
bool $tmp2153 = $tmp2152.value;
if ($tmp2153) goto block8; else goto block9;
block8:;
// line 768
org$pandalanguage$pandac$ASTNode* $tmp2154 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2155 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2155));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2154));
*(&local2) = $tmp2154;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2154));
// line 769
org$pandalanguage$pandac$ASTNode* $tmp2156 = *(&local2);
panda$core$Bit $tmp2157 = panda$core$Bit$init$builtin_bit($tmp2156 == NULL);
bool $tmp2158 = $tmp2157.value;
if ($tmp2158) goto block10; else goto block11;
block10:;
// line 770
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2159 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2160 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2160));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 772
panda$collections$Array* $tmp2161 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp2162 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2161, ((panda$core$Object*) $tmp2162));
goto block7;
block9:;
// line 774
panda$core$Int64 $tmp2163 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2164 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2163);
org$pandalanguage$pandac$parser$Token$nullable $tmp2165 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2164, &$s2166);
panda$core$Bit $tmp2167 = panda$core$Bit$init$builtin_bit(!$tmp2165.nonnull);
bool $tmp2168 = $tmp2167.value;
if ($tmp2168) goto block12; else goto block13;
block12:;
// line 775
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2169 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2169));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2170 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2170));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
org$pandalanguage$pandac$ASTNode* $tmp2171 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2171));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block4:;
// line 778
org$pandalanguage$pandac$parser$Token $tmp2172 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp2172;
// line 779
org$pandalanguage$pandac$parser$Token $tmp2173 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp2174 = $tmp2173.kind;
panda$core$Int64 $tmp2175 = $tmp2174.$rawValue;
panda$core$Int64 $tmp2176 = (panda$core$Int64) {91};
panda$core$Bit $tmp2177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2175, $tmp2176);
bool $tmp2178 = $tmp2177.value;
if ($tmp2178) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp2179 = (panda$core$Int64) {92};
panda$core$Bit $tmp2180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2175, $tmp2179);
bool $tmp2181 = $tmp2180.value;
if ($tmp2181) goto block15; else goto block17;
block17:;
panda$core$Int64 $tmp2182 = (panda$core$Int64) {93};
panda$core$Bit $tmp2183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2175, $tmp2182);
bool $tmp2184 = $tmp2183.value;
if ($tmp2184) goto block15; else goto block18;
block18:;
panda$core$Int64 $tmp2185 = (panda$core$Int64) {94};
panda$core$Bit $tmp2186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2175, $tmp2185);
bool $tmp2187 = $tmp2186.value;
if ($tmp2187) goto block15; else goto block19;
block15:;
// line 782
org$pandalanguage$pandac$parser$Token $tmp2188 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 783
panda$core$Int64 $tmp2189 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2190 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2189);
org$pandalanguage$pandac$parser$Token$nullable $tmp2191 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2190, &$s2192);
panda$core$Bit $tmp2193 = panda$core$Bit$init$builtin_bit(!$tmp2191.nonnull);
bool $tmp2194 = $tmp2193.value;
if ($tmp2194) goto block20; else goto block21;
block20:;
// line 784
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp2195 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2195));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 786
panda$collections$Array* $tmp2196 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2196);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2197 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2197));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2196));
*(&local4) = $tmp2196;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2196));
// line 787
panda$core$Int64 $tmp2198 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2199 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2198);
org$pandalanguage$pandac$parser$Token$nullable $tmp2200 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2199);
panda$core$Bit $tmp2201 = panda$core$Bit$init$builtin_bit(!$tmp2200.nonnull);
bool $tmp2202 = $tmp2201.value;
if ($tmp2202) goto block22; else goto block23;
block22:;
// line 788
org$pandalanguage$pandac$ASTNode* $tmp2203 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2204 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2204));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2203));
*(&local5) = $tmp2203;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2203));
// line 789
org$pandalanguage$pandac$ASTNode* $tmp2205 = *(&local5);
panda$core$Bit $tmp2206 = panda$core$Bit$init$builtin_bit($tmp2205 == NULL);
bool $tmp2207 = $tmp2206.value;
if ($tmp2207) goto block24; else goto block25;
block24:;
// line 790
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2208 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2208));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2209 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2209));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2210 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2210));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 792
panda$collections$Array* $tmp2211 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp2212 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp2211, ((panda$core$Object*) $tmp2212));
// line 793
goto block26;
block26:;
panda$core$Int64 $tmp2213 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2214 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2213);
org$pandalanguage$pandac$parser$Token$nullable $tmp2215 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2214);
panda$core$Bit $tmp2216 = panda$core$Bit$init$builtin_bit($tmp2215.nonnull);
bool $tmp2217 = $tmp2216.value;
if ($tmp2217) goto block27; else goto block28;
block27:;
// line 794
org$pandalanguage$pandac$ASTNode* $tmp2218 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2219 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2219));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2218));
*(&local5) = $tmp2218;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2218));
// line 795
org$pandalanguage$pandac$ASTNode* $tmp2220 = *(&local5);
panda$core$Bit $tmp2221 = panda$core$Bit$init$builtin_bit($tmp2220 == NULL);
bool $tmp2222 = $tmp2221.value;
if ($tmp2222) goto block29; else goto block30;
block29:;
// line 796
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2223 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2223));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2224 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2224));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2225 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2225));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block30:;
// line 798
panda$collections$Array* $tmp2226 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp2227 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp2226, ((panda$core$Object*) $tmp2227));
goto block26;
block28:;
// line 800
panda$core$Int64 $tmp2228 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2229 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2228);
org$pandalanguage$pandac$parser$Token$nullable $tmp2230 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2229, &$s2231);
panda$core$Bit $tmp2232 = panda$core$Bit$init$builtin_bit(!$tmp2230.nonnull);
bool $tmp2233 = $tmp2232.value;
if ($tmp2233) goto block31; else goto block32;
block31:;
// line 801
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2234 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2234));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2235 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2235));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2236 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2236));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block32:;
org$pandalanguage$pandac$ASTNode* $tmp2237 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2237));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block23;
block23:;
// line 804
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 805
panda$collections$Array* $tmp2238 = *(&local4);
ITable* $tmp2239 = ((panda$collections$CollectionView*) $tmp2238)->$class->itable;
while ($tmp2239->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2239 = $tmp2239->next;
}
$fn2241 $tmp2240 = $tmp2239->methods[0];
panda$core$Int64 $tmp2242 = $tmp2240(((panda$collections$CollectionView*) $tmp2238));
panda$core$Int64 $tmp2243 = (panda$core$Int64) {0};
panda$core$Bit $tmp2244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2242, $tmp2243);
bool $tmp2245 = $tmp2244.value;
if ($tmp2245) goto block33; else goto block35;
block33:;
// line 806
org$pandalanguage$pandac$ASTNode* $tmp2246 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2246));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block34;
block35:;
// line 808
panda$collections$Array* $tmp2247 = *(&local4);
ITable* $tmp2248 = ((panda$collections$CollectionView*) $tmp2247)->$class->itable;
while ($tmp2248->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2248 = $tmp2248->next;
}
$fn2250 $tmp2249 = $tmp2248->methods[0];
panda$core$Int64 $tmp2251 = $tmp2249(((panda$collections$CollectionView*) $tmp2247));
panda$core$Int64 $tmp2252 = (panda$core$Int64) {1};
panda$core$Bit $tmp2253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2251, $tmp2252);
bool $tmp2254 = $tmp2253.value;
if ($tmp2254) goto block36; else goto block38;
block36:;
// line 809
panda$collections$Array* $tmp2255 = *(&local4);
panda$core$Int64 $tmp2256 = (panda$core$Int64) {0};
panda$core$Object* $tmp2257 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2255, $tmp2256);
org$pandalanguage$pandac$ASTNode* $tmp2258 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2258));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2257)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) $tmp2257);
panda$core$Panda$unref$panda$core$Object$Q($tmp2257);
goto block37;
block38:;
// line 1
// line 813
org$pandalanguage$pandac$parser$Token$nullable $tmp2259 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2259.value), &$s2260);
// line 814
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2261 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2261));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2262 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2262));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2263 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2263));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block37:;
goto block34;
block34:;
// line 816
org$pandalanguage$pandac$ASTNode* $tmp2264 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2265 = (panda$core$Int64) {27};
org$pandalanguage$pandac$parser$Token$nullable $tmp2266 = *(&local0);
org$pandalanguage$pandac$Position $tmp2267 = ((org$pandalanguage$pandac$parser$Token) $tmp2266.value).position;
org$pandalanguage$pandac$parser$Token $tmp2268 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp2269 = $tmp2268.kind;
panda$collections$Array* $tmp2270 = *(&local1);
panda$collections$ImmutableArray* $tmp2271 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2270);
org$pandalanguage$pandac$ASTNode* $tmp2272 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2264, $tmp2265, $tmp2267, $tmp2269, $tmp2271, $tmp2272);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2264));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2264));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2271));
org$pandalanguage$pandac$ASTNode* $tmp2273 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2273));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2274 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2274));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2275 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2275));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp2264;
block19:;
// line 820
org$pandalanguage$pandac$parser$Token$nullable $tmp2276 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2276.value), &$s2277);
// line 821
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp2278 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
panda$core$Bit $tmp2279 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2280 = $tmp2279.value;
if ($tmp2280) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp2281 = (panda$core$Int64) {755};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2282, $tmp2281, &$s2283);
abort(); // unreachable
block39:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$Bit param1) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local3;
panda$core$String* local4 = NULL;
panda$collections$Array* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 830
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 831
org$pandalanguage$pandac$parser$Token $tmp2284 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2285 = $tmp2284.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2286;
$tmp2286 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2286->value = $tmp2285;
panda$core$Int64 $tmp2287 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2288 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2287);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2289;
$tmp2289 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2289->value = $tmp2288;
ITable* $tmp2290 = ((panda$core$Equatable*) $tmp2286)->$class->itable;
while ($tmp2290->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2290 = $tmp2290->next;
}
$fn2292 $tmp2291 = $tmp2290->methods[0];
panda$core$Bit $tmp2293 = $tmp2291(((panda$core$Equatable*) $tmp2286), ((panda$core$Equatable*) $tmp2289));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2286)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2289)));
bool $tmp2294 = $tmp2293.value;
if ($tmp2294) goto block1; else goto block3;
block1:;
// line 832
org$pandalanguage$pandac$ASTNode* $tmp2295 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2296 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2296));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2295));
*(&local0) = $tmp2295;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2295));
// line 833
org$pandalanguage$pandac$ASTNode* $tmp2297 = *(&local0);
panda$core$Bit $tmp2298 = panda$core$Bit$init$builtin_bit($tmp2297 == NULL);
bool $tmp2299 = $tmp2298.value;
if ($tmp2299) goto block4; else goto block5;
block4:;
// line 834
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2300 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 838
panda$core$Int64 $tmp2301 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp2302 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2301);
org$pandalanguage$pandac$parser$Token$nullable $tmp2303 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2302, &$s2304);
*(&local1) = $tmp2303;
// line 839
org$pandalanguage$pandac$parser$Token$nullable $tmp2305 = *(&local1);
panda$core$Bit $tmp2306 = panda$core$Bit$init$builtin_bit(!$tmp2305.nonnull);
bool $tmp2307 = $tmp2306.value;
if ($tmp2307) goto block6; else goto block7;
block6:;
// line 840
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2308 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2308));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 842
panda$core$MutableString* $tmp2309 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp2310 = *(&local1);
panda$core$String* $tmp2311 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2310.value));
panda$core$MutableString$init$panda$core$String($tmp2309, $tmp2311);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp2312 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2312));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2309));
*(&local2) = $tmp2309;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2309));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2311));
// line 843
goto block8;
block8:;
panda$core$Int64 $tmp2313 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp2314 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2313);
org$pandalanguage$pandac$parser$Token$nullable $tmp2315 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2314);
panda$core$Bit $tmp2316 = panda$core$Bit$init$builtin_bit($tmp2315.nonnull);
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block9; else goto block10;
block9:;
// line 844
panda$core$Int64 $tmp2318 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp2319 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2318);
org$pandalanguage$pandac$parser$Token$nullable $tmp2320 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2319, &$s2321);
*(&local3) = $tmp2320;
// line 845
org$pandalanguage$pandac$parser$Token$nullable $tmp2322 = *(&local3);
panda$core$Bit $tmp2323 = panda$core$Bit$init$builtin_bit(!$tmp2322.nonnull);
bool $tmp2324 = $tmp2323.value;
if ($tmp2324) goto block11; else goto block12;
block11:;
// line 846
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp2325 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2325));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2326 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2326));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 848
panda$core$MutableString* $tmp2327 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp2327, &$s2328);
// line 849
panda$core$MutableString* $tmp2329 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp2330 = *(&local3);
panda$core$String* $tmp2331 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2330.value));
panda$core$MutableString$append$panda$core$String($tmp2329, $tmp2331);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2331));
goto block8;
block10:;
// line 851
panda$core$MutableString* $tmp2332 = *(&local2);
panda$core$String* $tmp2333 = panda$core$MutableString$finish$R$panda$core$String($tmp2332);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp2334 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2334));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2333));
*(&local4) = $tmp2333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2333));
// line 852
org$pandalanguage$pandac$ASTNode* $tmp2335 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2336 = (panda$core$Int64) {42};
org$pandalanguage$pandac$parser$Token$nullable $tmp2337 = *(&local1);
org$pandalanguage$pandac$Position $tmp2338 = ((org$pandalanguage$pandac$parser$Token) $tmp2337.value).position;
panda$core$String* $tmp2339 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2335, $tmp2336, $tmp2338, $tmp2339);
org$pandalanguage$pandac$ASTNode* $tmp2340 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2340));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2335));
*(&local0) = $tmp2335;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2335));
// line 853
org$pandalanguage$pandac$parser$Token $tmp2341 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2342 = $tmp2341.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2343;
$tmp2343 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2343->value = $tmp2342;
panda$core$Int64 $tmp2344 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp2345 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2344);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2346;
$tmp2346 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2346->value = $tmp2345;
ITable* $tmp2347 = ((panda$core$Equatable*) $tmp2343)->$class->itable;
while ($tmp2347->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2347 = $tmp2347->next;
}
$fn2349 $tmp2348 = $tmp2347->methods[0];
panda$core$Bit $tmp2350 = $tmp2348(((panda$core$Equatable*) $tmp2343), ((panda$core$Equatable*) $tmp2346));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2343)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2346)));
bool $tmp2351 = $tmp2350.value;
if ($tmp2351) goto block13; else goto block14;
block13:;
// line 856
bool $tmp2352 = param1.value;
if ($tmp2352) goto block15; else goto block16;
block15:;
// line 857
org$pandalanguage$pandac$parser$Parser$startSpeculative(param0);
goto block16;
block16:;
// line 859
org$pandalanguage$pandac$parser$Token $tmp2353 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 860
panda$collections$Array* $tmp2354 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2354);
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2355 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2355));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2354));
*(&local5) = $tmp2354;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2354));
// line 861
panda$core$Bit $tmp2356 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2357 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2356);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2358 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2358));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2357));
*(&local6) = $tmp2357;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2357));
// line 862
org$pandalanguage$pandac$ASTNode* $tmp2359 = *(&local6);
panda$core$Bit $tmp2360 = panda$core$Bit$init$builtin_bit($tmp2359 == NULL);
bool $tmp2361 = $tmp2360.value;
if ($tmp2361) goto block17; else goto block18;
block17:;
// line 863
bool $tmp2362 = param1.value;
if ($tmp2362) goto block19; else goto block20;
block19:;
// line 864
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 865
org$pandalanguage$pandac$ASTNode* $tmp2363 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2363));
org$pandalanguage$pandac$ASTNode* $tmp2364 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2365 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2365));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2366 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2366));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2367 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2367));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2368 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2368));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2363;
block20:;
// line 867
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2369 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2369));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2370 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2370));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2371 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2371));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2372 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2372));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2373 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2373));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 869
panda$collections$Array* $tmp2374 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp2375 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp2374, ((panda$core$Object*) $tmp2375));
// line 870
goto block21;
block21:;
panda$core$Int64 $tmp2376 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2377 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2376);
org$pandalanguage$pandac$parser$Token$nullable $tmp2378 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2377);
panda$core$Bit $tmp2379 = panda$core$Bit$init$builtin_bit($tmp2378.nonnull);
bool $tmp2380 = $tmp2379.value;
if ($tmp2380) goto block22; else goto block23;
block22:;
// line 871
panda$core$Bit $tmp2381 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2382 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2381);
org$pandalanguage$pandac$ASTNode* $tmp2383 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2383));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2382));
*(&local6) = $tmp2382;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2382));
// line 872
org$pandalanguage$pandac$ASTNode* $tmp2384 = *(&local6);
panda$core$Bit $tmp2385 = panda$core$Bit$init$builtin_bit($tmp2384 == NULL);
bool $tmp2386 = $tmp2385.value;
if ($tmp2386) goto block24; else goto block25;
block24:;
// line 873
bool $tmp2387 = param1.value;
if ($tmp2387) goto block26; else goto block27;
block26:;
// line 874
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 875
org$pandalanguage$pandac$ASTNode* $tmp2388 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2388));
org$pandalanguage$pandac$ASTNode* $tmp2389 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2389));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2390 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2390));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2391 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2391));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2392 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2392));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2393 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2388;
block27:;
// line 877
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2394 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2394));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2395 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2395));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2396 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2397 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2397));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2398 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 879
panda$collections$Array* $tmp2399 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp2400 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp2399, ((panda$core$Object*) $tmp2400));
goto block21;
block23:;
// line 881
panda$core$Int64 $tmp2401 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2402 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2401);
org$pandalanguage$pandac$parser$Token$nullable $tmp2403 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2402, &$s2404);
panda$core$Bit $tmp2405 = panda$core$Bit$init$builtin_bit(!$tmp2403.nonnull);
bool $tmp2406 = $tmp2405.value;
if ($tmp2406) goto block28; else goto block29;
block28:;
// line 882
bool $tmp2407 = param1.value;
if ($tmp2407) goto block30; else goto block31;
block30:;
// line 883
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 884
org$pandalanguage$pandac$ASTNode* $tmp2408 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2408));
org$pandalanguage$pandac$ASTNode* $tmp2409 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2409));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2410 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2411 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2411));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2412 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2412));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2413 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2413));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2408;
block31:;
// line 886
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2414 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2415 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2415));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2416 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2416));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2417 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2417));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2418 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2418));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block29:;
// line 888
org$pandalanguage$pandac$ASTNode* $tmp2419 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2420 = (panda$core$Int64) {19};
org$pandalanguage$pandac$parser$Token$nullable $tmp2421 = *(&local1);
org$pandalanguage$pandac$Position $tmp2422 = ((org$pandalanguage$pandac$parser$Token) $tmp2421.value).position;
panda$core$String* $tmp2423 = *(&local4);
panda$collections$Array* $tmp2424 = *(&local5);
panda$collections$ImmutableArray* $tmp2425 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2424);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2419, $tmp2420, $tmp2422, $tmp2423, $tmp2425);
org$pandalanguage$pandac$ASTNode* $tmp2426 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2426));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2419));
*(&local0) = $tmp2419;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2419));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2425));
// line 889
bool $tmp2427 = param1.value;
if ($tmp2427) goto block32; else goto block33;
block32:;
// line 890
org$pandalanguage$pandac$parser$Parser$accept(param0);
goto block33;
block33:;
org$pandalanguage$pandac$ASTNode* $tmp2428 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2429 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2429));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
goto block14;
block14:;
panda$core$String* $tmp2430 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2430));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2431 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
goto block2;
block2:;
// line 894
panda$core$Int64 $tmp2432 = (panda$core$Int64) {95};
org$pandalanguage$pandac$parser$Token$Kind $tmp2433 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2432);
org$pandalanguage$pandac$parser$Token$nullable $tmp2434 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2433);
panda$core$Bit $tmp2435 = panda$core$Bit$init$builtin_bit($tmp2434.nonnull);
bool $tmp2436 = $tmp2435.value;
if ($tmp2436) goto block34; else goto block35;
block34:;
// line 895
org$pandalanguage$pandac$ASTNode* $tmp2437 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2438 = (panda$core$Int64) {29};
org$pandalanguage$pandac$ASTNode* $tmp2439 = *(&local0);
$fn2441 $tmp2440 = ($fn2441) $tmp2439->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2442 = $tmp2440($tmp2439);
org$pandalanguage$pandac$ASTNode* $tmp2443 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp2437, $tmp2438, $tmp2442, $tmp2443);
org$pandalanguage$pandac$ASTNode* $tmp2444 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2444));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2437));
*(&local0) = $tmp2437;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2437));
goto block35;
block35:;
// line 897
org$pandalanguage$pandac$ASTNode* $tmp2445 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2445));
org$pandalanguage$pandac$ASTNode* $tmp2446 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2446));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2445;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$core$String* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
panda$core$String* local7 = NULL;
panda$collections$Array* local8 = NULL;
org$pandalanguage$pandac$ASTNode* local9 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local10;
panda$core$Bit local11;
org$pandalanguage$pandac$parser$Token local12;
panda$core$Bit local13;
// line 911
org$pandalanguage$pandac$ASTNode* $tmp2447 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2448 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2448));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2447));
*(&local0) = $tmp2447;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2447));
// line 912
org$pandalanguage$pandac$ASTNode* $tmp2449 = *(&local0);
panda$core$Bit $tmp2450 = panda$core$Bit$init$builtin_bit($tmp2449 == NULL);
bool $tmp2451 = $tmp2450.value;
if ($tmp2451) goto block1; else goto block2;
block1:;
// line 913
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2452 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 915
goto block3;
block3:;
// line 916
org$pandalanguage$pandac$parser$Token $tmp2453 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2453;
// line 917
org$pandalanguage$pandac$parser$Token $tmp2454 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2455 = $tmp2454.kind;
panda$core$Int64 $tmp2456 = $tmp2455.$rawValue;
panda$core$Int64 $tmp2457 = (panda$core$Int64) {104};
panda$core$Bit $tmp2458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2456, $tmp2457);
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block6; else goto block7;
block6:;
// line 919
panda$collections$Stack** $tmp2460 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2461 = *$tmp2460;
panda$core$Bit $tmp2462 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp2463;
$tmp2463 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp2463->value = $tmp2462;
panda$collections$Stack$push$panda$collections$Stack$T($tmp2461, ((panda$core$Object*) $tmp2463));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2463));
// line 920
panda$collections$Array* $tmp2464 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2464);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2465 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2465));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2464));
*(&local2) = $tmp2464;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2464));
// line 921
panda$core$Int64 $tmp2466 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2467 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2466);
org$pandalanguage$pandac$parser$Token$nullable $tmp2468 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2467);
panda$core$Bit $tmp2469 = panda$core$Bit$init$builtin_bit(!$tmp2468.nonnull);
bool $tmp2470 = $tmp2469.value;
if ($tmp2470) goto block8; else goto block9;
block8:;
// line 922
org$pandalanguage$pandac$ASTNode* $tmp2471 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2472 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2472));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2471));
*(&local3) = $tmp2471;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2471));
// line 923
org$pandalanguage$pandac$ASTNode* $tmp2473 = *(&local3);
panda$core$Bit $tmp2474 = panda$core$Bit$init$builtin_bit($tmp2473 == NULL);
bool $tmp2475 = $tmp2474.value;
if ($tmp2475) goto block10; else goto block11;
block10:;
// line 924
panda$collections$Stack** $tmp2476 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2477 = *$tmp2476;
panda$core$Object* $tmp2478 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2477);
panda$core$Panda$unref$panda$core$Object$Q($tmp2478);
// line 925
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2479 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2479));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2480 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2481 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 927
panda$collections$Array* $tmp2482 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp2483 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp2482, ((panda$core$Object*) $tmp2483));
// line 928
goto block12;
block12:;
panda$core$Int64 $tmp2484 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2485 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2484);
org$pandalanguage$pandac$parser$Token$nullable $tmp2486 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2485);
panda$core$Bit $tmp2487 = panda$core$Bit$init$builtin_bit($tmp2486.nonnull);
bool $tmp2488 = $tmp2487.value;
if ($tmp2488) goto block13; else goto block14;
block13:;
// line 929
org$pandalanguage$pandac$ASTNode* $tmp2489 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2490 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2490));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2489));
*(&local3) = $tmp2489;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2489));
// line 930
org$pandalanguage$pandac$ASTNode* $tmp2491 = *(&local3);
panda$core$Bit $tmp2492 = panda$core$Bit$init$builtin_bit($tmp2491 == NULL);
bool $tmp2493 = $tmp2492.value;
if ($tmp2493) goto block15; else goto block16;
block15:;
// line 931
panda$collections$Stack** $tmp2494 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2495 = *$tmp2494;
panda$core$Object* $tmp2496 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2495);
panda$core$Panda$unref$panda$core$Object$Q($tmp2496);
// line 932
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2497 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2498 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2499 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2499));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 934
panda$collections$Array* $tmp2500 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp2501 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp2500, ((panda$core$Object*) $tmp2501));
goto block12;
block14:;
// line 936
panda$core$Int64 $tmp2502 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2503 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2502);
org$pandalanguage$pandac$parser$Token$nullable $tmp2504 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2503, &$s2505);
panda$core$Bit $tmp2506 = panda$core$Bit$init$builtin_bit(!$tmp2504.nonnull);
bool $tmp2507 = $tmp2506.value;
if ($tmp2507) goto block17; else goto block18;
block17:;
// line 937
panda$collections$Stack** $tmp2508 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2509 = *$tmp2508;
panda$core$Object* $tmp2510 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2509);
panda$core$Panda$unref$panda$core$Object$Q($tmp2510);
// line 938
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2511 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2511));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2512 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2512));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2513 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2513));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
org$pandalanguage$pandac$ASTNode* $tmp2514 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2514));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
// line 941
panda$collections$Stack** $tmp2515 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2516 = *$tmp2515;
panda$core$Object* $tmp2517 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2516);
panda$core$Panda$unref$panda$core$Object$Q($tmp2517);
// line 942
org$pandalanguage$pandac$ASTNode* $tmp2518 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2519 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token $tmp2520 = *(&local1);
org$pandalanguage$pandac$Position $tmp2521 = $tmp2520.position;
org$pandalanguage$pandac$ASTNode* $tmp2522 = *(&local0);
panda$collections$Array* $tmp2523 = *(&local2);
panda$collections$ImmutableArray* $tmp2524 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2523);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2518, $tmp2519, $tmp2521, $tmp2522, $tmp2524);
org$pandalanguage$pandac$ASTNode* $tmp2525 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
*(&local0) = $tmp2518;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2524));
panda$collections$Array* $tmp2526 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2526));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
goto block5;
block7:;
panda$core$Int64 $tmp2527 = (panda$core$Int64) {102};
panda$core$Bit $tmp2528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2456, $tmp2527);
bool $tmp2529 = $tmp2528.value;
if ($tmp2529) goto block19; else goto block20;
block19:;
// line 944
org$pandalanguage$pandac$ASTNode* $tmp2530 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2531 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2531));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2530));
*(&local4) = $tmp2530;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2530));
// line 945
org$pandalanguage$pandac$ASTNode* $tmp2532 = *(&local4);
panda$core$Bit $tmp2533 = panda$core$Bit$init$builtin_bit($tmp2532 == NULL);
bool $tmp2534 = $tmp2533.value;
if ($tmp2534) goto block21; else goto block22;
block21:;
// line 946
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2535 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2536 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2536));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 948
panda$core$Int64 $tmp2537 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2538 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2537);
org$pandalanguage$pandac$parser$Token$nullable $tmp2539 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2538, &$s2540);
panda$core$Bit $tmp2541 = panda$core$Bit$init$builtin_bit(!$tmp2539.nonnull);
bool $tmp2542 = $tmp2541.value;
if ($tmp2542) goto block23; else goto block24;
block23:;
// line 949
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2543 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2543));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2544 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2544));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block24:;
// line 951
org$pandalanguage$pandac$ASTNode* $tmp2545 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2546 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2547 = *(&local1);
org$pandalanguage$pandac$Position $tmp2548 = $tmp2547.position;
org$pandalanguage$pandac$ASTNode* $tmp2549 = *(&local0);
panda$core$Int64 $tmp2550 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp2551 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2550);
org$pandalanguage$pandac$ASTNode* $tmp2552 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2545, $tmp2546, $tmp2548, $tmp2549, $tmp2551, $tmp2552);
org$pandalanguage$pandac$ASTNode* $tmp2553 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
*(&local0) = $tmp2545;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
org$pandalanguage$pandac$ASTNode* $tmp2554 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2554));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block20:;
panda$core$Int64 $tmp2555 = (panda$core$Int64) {99};
panda$core$Bit $tmp2556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2456, $tmp2555);
bool $tmp2557 = $tmp2556.value;
if ($tmp2557) goto block25; else goto block26;
block25:;
// line 953
*(&local5) = ((panda$core$String*) NULL);
// line 954
panda$core$Int64 $tmp2558 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp2559 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2558);
org$pandalanguage$pandac$parser$Token$nullable $tmp2560 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2559);
panda$core$Bit $tmp2561 = panda$core$Bit$init$builtin_bit($tmp2560.nonnull);
bool $tmp2562 = $tmp2561.value;
if ($tmp2562) goto block27; else goto block29;
block27:;
// line 955
panda$core$String* $tmp2564 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2564));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2563));
*(&local5) = &$s2563;
goto block28;
block29:;
// line 1
// line 958
panda$core$String* $tmp2565 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(param0);
panda$core$String* $tmp2566 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2566));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2565));
*(&local5) = $tmp2565;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2565));
// line 959
panda$core$String* $tmp2567 = *(&local5);
panda$core$Bit $tmp2568 = panda$core$Bit$init$builtin_bit($tmp2567 == NULL);
bool $tmp2569 = $tmp2568.value;
if ($tmp2569) goto block30; else goto block31;
block30:;
// line 960
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp2570 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2570));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2571 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2571));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block31:;
goto block28;
block28:;
// line 963
org$pandalanguage$pandac$ASTNode* $tmp2572 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2573 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token $tmp2574 = *(&local1);
org$pandalanguage$pandac$Position $tmp2575 = $tmp2574.position;
org$pandalanguage$pandac$ASTNode* $tmp2576 = *(&local0);
panda$core$String* $tmp2577 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2572, $tmp2573, $tmp2575, $tmp2576, $tmp2577);
org$pandalanguage$pandac$ASTNode* $tmp2578 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
*(&local0) = $tmp2572;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
panda$core$String* $tmp2579 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2579));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block5;
block26:;
panda$core$Int64 $tmp2580 = (panda$core$Int64) {90};
panda$core$Bit $tmp2581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2456, $tmp2580);
bool $tmp2582 = $tmp2581.value;
if ($tmp2582) goto block32; else goto block33;
block32:;
// line 965
org$pandalanguage$pandac$ASTNode* $tmp2583 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2584 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2584));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2583));
*(&local6) = $tmp2583;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2583));
// line 966
org$pandalanguage$pandac$ASTNode* $tmp2585 = *(&local6);
panda$core$Bit $tmp2586 = panda$core$Bit$init$builtin_bit($tmp2585 == NULL);
bool $tmp2587 = $tmp2586.value;
if ($tmp2587) goto block34; else goto block35;
block34:;
// line 967
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2588 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2588));
// unreffing target
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2589 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2589));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block35:;
// line 969
org$pandalanguage$pandac$ASTNode* $tmp2590 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2591 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2592 = *(&local1);
org$pandalanguage$pandac$Position $tmp2593 = $tmp2592.position;
org$pandalanguage$pandac$ASTNode* $tmp2594 = *(&local0);
panda$core$Int64 $tmp2595 = (panda$core$Int64) {90};
org$pandalanguage$pandac$parser$Token$Kind $tmp2596 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2595);
org$pandalanguage$pandac$ASTNode* $tmp2597 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2590, $tmp2591, $tmp2593, $tmp2594, $tmp2596, $tmp2597);
org$pandalanguage$pandac$ASTNode* $tmp2598 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2598));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2590));
*(&local0) = $tmp2590;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2590));
org$pandalanguage$pandac$ASTNode* $tmp2599 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2599));
// unreffing target
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block33:;
panda$core$Int64 $tmp2600 = (panda$core$Int64) {63};
panda$core$Bit $tmp2601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2456, $tmp2600);
bool $tmp2602 = $tmp2601.value;
if ($tmp2602) goto block36; else goto block37;
block36:;
// line 973
org$pandalanguage$pandac$parser$Token $tmp2603 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2603);
// line 974
org$pandalanguage$pandac$ASTNode* $tmp2604 = *(&local0);
panda$core$String* $tmp2605 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q($tmp2604);
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp2606 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2606));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2605));
*(&local7) = $tmp2605;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2605));
// line 975
panda$core$String* $tmp2607 = *(&local7);
panda$core$Bit $tmp2608 = panda$core$Bit$init$builtin_bit($tmp2607 != NULL);
bool $tmp2609 = $tmp2608.value;
if ($tmp2609) goto block38; else goto block39;
block38:;
// line 976
org$pandalanguage$pandac$parser$Parser$startSpeculative(param0);
// line 977
org$pandalanguage$pandac$parser$Token $tmp2610 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 980
panda$collections$Array* $tmp2611 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2611);
*(&local8) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2612 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2612));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2611));
*(&local8) = $tmp2611;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2611));
// line 981
panda$core$Bit $tmp2613 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2614 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2613);
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2615 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2615));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2614));
*(&local9) = $tmp2614;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2614));
// line 982
org$pandalanguage$pandac$ASTNode* $tmp2616 = *(&local9);
panda$core$Bit $tmp2617 = panda$core$Bit$init$builtin_bit($tmp2616 == NULL);
bool $tmp2618 = $tmp2617.value;
if ($tmp2618) goto block40; else goto block41;
block40:;
// line 983
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 984
org$pandalanguage$pandac$ASTNode* $tmp2619 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2619));
org$pandalanguage$pandac$ASTNode* $tmp2620 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2620));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2621 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2621));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2622 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2622));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2623 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2623));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2619;
block41:;
// line 986
panda$collections$Array* $tmp2624 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp2625 = *(&local9);
panda$collections$Array$add$panda$collections$Array$T($tmp2624, ((panda$core$Object*) $tmp2625));
// line 987
goto block42;
block42:;
panda$core$Int64 $tmp2626 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2627 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2626);
org$pandalanguage$pandac$parser$Token$nullable $tmp2628 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2627);
panda$core$Bit $tmp2629 = panda$core$Bit$init$builtin_bit($tmp2628.nonnull);
bool $tmp2630 = $tmp2629.value;
if ($tmp2630) goto block43; else goto block44;
block43:;
// line 988
panda$core$Bit $tmp2631 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2632 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2631);
org$pandalanguage$pandac$ASTNode* $tmp2633 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2633));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2632));
*(&local9) = $tmp2632;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2632));
// line 989
org$pandalanguage$pandac$ASTNode* $tmp2634 = *(&local9);
panda$core$Bit $tmp2635 = panda$core$Bit$init$builtin_bit($tmp2634 == NULL);
bool $tmp2636 = $tmp2635.value;
if ($tmp2636) goto block45; else goto block46;
block45:;
// line 990
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 991
org$pandalanguage$pandac$ASTNode* $tmp2637 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2637));
org$pandalanguage$pandac$ASTNode* $tmp2638 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2638));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2639 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2639));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2640 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2640));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2641 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2641));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2637;
block46:;
// line 993
panda$collections$Array* $tmp2642 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp2643 = *(&local9);
panda$collections$Array$add$panda$collections$Array$T($tmp2642, ((panda$core$Object*) $tmp2643));
goto block42;
block44:;
// line 995
panda$core$Int64 $tmp2644 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2645 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2644);
org$pandalanguage$pandac$parser$Token$nullable $tmp2646 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2645, &$s2647);
*(&local10) = $tmp2646;
// line 996
org$pandalanguage$pandac$parser$Token$nullable $tmp2648 = *(&local10);
panda$core$Bit $tmp2649 = panda$core$Bit$init$builtin_bit(!$tmp2648.nonnull);
bool $tmp2650 = $tmp2649.value;
if ($tmp2650) goto block47; else goto block48;
block47:;
// line 997
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 998
org$pandalanguage$pandac$ASTNode* $tmp2651 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2651));
org$pandalanguage$pandac$ASTNode* $tmp2652 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2652));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2653 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2653));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2654 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2654));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2655 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2655));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2651;
block48:;
// line 1027
// line 1028
panda$collections$Stack** $tmp2656 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2657 = *$tmp2656;
panda$core$Int64 $tmp2658 = (panda$core$Int64) {0};
panda$core$Object* $tmp2659 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp2657, $tmp2658);
panda$core$Panda$unref$panda$core$Object$Q($tmp2659);
bool $tmp2660 = ((panda$core$Bit$wrapper*) $tmp2659)->value.value;
if ($tmp2660) goto block49; else goto block51;
block49:;
// line 1029
org$pandalanguage$pandac$parser$Token $tmp2661 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local12) = $tmp2661;
// line 1030
org$pandalanguage$pandac$parser$Token $tmp2662 = *(&local12);
org$pandalanguage$pandac$parser$Token$Kind $tmp2663 = $tmp2662.kind;
panda$core$Int64 $tmp2664 = $tmp2663.$rawValue;
panda$core$Int64 $tmp2665 = (panda$core$Int64) {99};
panda$core$Bit $tmp2666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2664, $tmp2665);
bool $tmp2667 = $tmp2666.value;
if ($tmp2667) goto block53; else goto block54;
block54:;
panda$core$Int64 $tmp2668 = (panda$core$Int64) {106};
panda$core$Bit $tmp2669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2664, $tmp2668);
bool $tmp2670 = $tmp2669.value;
if ($tmp2670) goto block53; else goto block55;
block55:;
panda$core$Int64 $tmp2671 = (panda$core$Int64) {90};
panda$core$Bit $tmp2672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2664, $tmp2671);
bool $tmp2673 = $tmp2672.value;
if ($tmp2673) goto block53; else goto block56;
block53:;
// line 1032
panda$core$Bit $tmp2674 = panda$core$Bit$init$builtin_bit(true);
*(&local11) = $tmp2674;
goto block52;
block56:;
panda$core$Int64 $tmp2675 = (panda$core$Int64) {104};
panda$core$Bit $tmp2676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2664, $tmp2675);
bool $tmp2677 = $tmp2676.value;
if ($tmp2677) goto block57; else goto block58;
block57:;
// line 1034
org$pandalanguage$pandac$parser$Token $tmp2678 = *(&local12);
org$pandalanguage$pandac$Position $tmp2679 = $tmp2678.position;
panda$core$Int64 $tmp2680 = $tmp2679.line;
org$pandalanguage$pandac$parser$Token$nullable $tmp2681 = *(&local10);
org$pandalanguage$pandac$Position $tmp2682 = ((org$pandalanguage$pandac$parser$Token) $tmp2681.value).position;
panda$core$Int64 $tmp2683 = $tmp2682.line;
panda$core$Bit $tmp2684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2680, $tmp2683);
bool $tmp2685 = $tmp2684.value;
if ($tmp2685) goto block59; else goto block60;
block59:;
org$pandalanguage$pandac$parser$Token $tmp2686 = *(&local12);
org$pandalanguage$pandac$Position $tmp2687 = $tmp2686.position;
panda$core$Int64 $tmp2688 = $tmp2687.column;
org$pandalanguage$pandac$parser$Token$nullable $tmp2689 = *(&local10);
org$pandalanguage$pandac$Position $tmp2690 = ((org$pandalanguage$pandac$parser$Token) $tmp2689.value).position;
panda$core$Int64 $tmp2691 = $tmp2690.column;
panda$core$Int64 $tmp2692 = (panda$core$Int64) {1};
int64_t $tmp2693 = $tmp2691.value;
int64_t $tmp2694 = $tmp2692.value;
int64_t $tmp2695 = $tmp2693 + $tmp2694;
panda$core$Int64 $tmp2696 = (panda$core$Int64) {$tmp2695};
panda$core$Bit $tmp2697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2688, $tmp2696);
*(&local13) = $tmp2697;
goto block61;
block60:;
*(&local13) = $tmp2684;
goto block61;
block61:;
panda$core$Bit $tmp2698 = *(&local13);
*(&local11) = $tmp2698;
goto block52;
block58:;
// line 1037
panda$core$Bit $tmp2699 = panda$core$Bit$init$builtin_bit(false);
*(&local11) = $tmp2699;
goto block52;
block52:;
// line 1039
panda$core$Bit $tmp2700 = *(&local11);
bool $tmp2701 = $tmp2700.value;
if ($tmp2701) goto block62; else goto block63;
block62:;
// line 1040
org$pandalanguage$pandac$parser$Token $tmp2702 = *(&local12);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2702);
goto block63;
block63:;
goto block50;
block51:;
// line 1
// line 1044
panda$core$Bit $tmp2703 = panda$core$Bit$init$builtin_bit(true);
*(&local11) = $tmp2703;
goto block50;
block50:;
// line 1046
panda$core$Bit $tmp2704 = *(&local11);
bool $tmp2705 = $tmp2704.value;
if ($tmp2705) goto block64; else goto block66;
block64:;
// line 1047
org$pandalanguage$pandac$parser$Parser$accept(param0);
// line 1048
org$pandalanguage$pandac$ASTNode* $tmp2706 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2707 = (panda$core$Int64) {19};
org$pandalanguage$pandac$ASTNode* $tmp2708 = *(&local0);
$fn2710 $tmp2709 = ($fn2710) $tmp2708->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2711 = $tmp2709($tmp2708);
panda$core$String* $tmp2712 = *(&local7);
panda$collections$Array* $tmp2713 = *(&local8);
panda$collections$ImmutableArray* $tmp2714 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2713);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2706, $tmp2707, $tmp2711, $tmp2712, $tmp2714);
org$pandalanguage$pandac$ASTNode* $tmp2715 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2715));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2706));
*(&local0) = $tmp2706;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2706));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2714));
// line 1049
org$pandalanguage$pandac$ASTNode* $tmp2716 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2716));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2717 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2717));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2718 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2718));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
goto block3;
block66:;
// line 1
// line 1052
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1053
org$pandalanguage$pandac$ASTNode* $tmp2719 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2719));
org$pandalanguage$pandac$ASTNode* $tmp2720 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2720));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2721 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2721));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2722 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2722));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2723 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2723));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2719;
block65:;
org$pandalanguage$pandac$ASTNode* $tmp2724 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2724));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2725 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2725));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
goto block39;
block39:;
// line 1056
org$pandalanguage$pandac$ASTNode* $tmp2726 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2726));
panda$core$String* $tmp2727 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2727));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2728 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2728));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2726;
block37:;
// line 1058
org$pandalanguage$pandac$parser$Token $tmp2729 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2729);
// line 1059
org$pandalanguage$pandac$ASTNode* $tmp2730 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2730));
org$pandalanguage$pandac$ASTNode* $tmp2731 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2731));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2730;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp2732 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2733 = $tmp2732.value;
if ($tmp2733) goto block67; else goto block68;
block68:;
panda$core$Int64 $tmp2734 = (panda$core$Int64) {910};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2735, $tmp2734, &$s2736);
abort(); // unreachable
block67:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1068
org$pandalanguage$pandac$ASTNode* $tmp2737 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2738 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2738));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2737));
*(&local0) = $tmp2737;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2737));
// line 1069
org$pandalanguage$pandac$ASTNode* $tmp2739 = *(&local0);
panda$core$Bit $tmp2740 = panda$core$Bit$init$builtin_bit($tmp2739 == NULL);
bool $tmp2741 = $tmp2740.value;
if ($tmp2741) goto block1; else goto block2;
block1:;
// line 1070
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2742 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2742));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1072
goto block3;
block3:;
// line 1073
panda$core$Int64 $tmp2743 = (panda$core$Int64) {58};
org$pandalanguage$pandac$parser$Token$Kind $tmp2744 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2743);
org$pandalanguage$pandac$parser$Token$nullable $tmp2745 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2744);
*(&local1) = $tmp2745;
// line 1074
org$pandalanguage$pandac$parser$Token$nullable $tmp2746 = *(&local1);
panda$core$Bit $tmp2747 = panda$core$Bit$init$builtin_bit(!$tmp2746.nonnull);
bool $tmp2748 = $tmp2747.value;
if ($tmp2748) goto block5; else goto block6;
block5:;
// line 1075
goto block4;
block6:;
// line 1077
org$pandalanguage$pandac$ASTNode* $tmp2749 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2750 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2750));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2749));
*(&local2) = $tmp2749;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2749));
// line 1078
org$pandalanguage$pandac$ASTNode* $tmp2751 = *(&local2);
panda$core$Bit $tmp2752 = panda$core$Bit$init$builtin_bit($tmp2751 == NULL);
bool $tmp2753 = $tmp2752.value;
if ($tmp2753) goto block7; else goto block8;
block7:;
// line 1079
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2754 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2754));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2755 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2755));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1081
org$pandalanguage$pandac$ASTNode* $tmp2756 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2757 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token$nullable $tmp2758 = *(&local1);
org$pandalanguage$pandac$Position $tmp2759 = ((org$pandalanguage$pandac$parser$Token) $tmp2758.value).position;
org$pandalanguage$pandac$ASTNode* $tmp2760 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp2761 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2762 = ((org$pandalanguage$pandac$parser$Token) $tmp2761.value).kind;
org$pandalanguage$pandac$ASTNode* $tmp2763 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2756, $tmp2757, $tmp2759, $tmp2760, $tmp2762, $tmp2763);
org$pandalanguage$pandac$ASTNode* $tmp2764 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2764));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2756));
*(&local0) = $tmp2756;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2756));
org$pandalanguage$pandac$ASTNode* $tmp2765 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2765));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block4:;
// line 1083
org$pandalanguage$pandac$ASTNode* $tmp2766 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2766));
org$pandalanguage$pandac$ASTNode* $tmp2767 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2767));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2766;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1090
org$pandalanguage$pandac$parser$Token $tmp2768 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp2768;
// line 1091
org$pandalanguage$pandac$parser$Token $tmp2769 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2770 = $tmp2769.kind;
panda$core$Int64 $tmp2771 = $tmp2770.$rawValue;
panda$core$Int64 $tmp2772 = (panda$core$Int64) {53};
panda$core$Bit $tmp2773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2771, $tmp2772);
bool $tmp2774 = $tmp2773.value;
if ($tmp2774) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp2775 = (panda$core$Int64) {50};
panda$core$Bit $tmp2776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2771, $tmp2775);
bool $tmp2777 = $tmp2776.value;
if ($tmp2777) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp2778 = (panda$core$Int64) {51};
panda$core$Bit $tmp2779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2771, $tmp2778);
bool $tmp2780 = $tmp2779.value;
if ($tmp2780) goto block2; else goto block5;
block2:;
// line 1093
org$pandalanguage$pandac$ASTNode* $tmp2781 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2782 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2782));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2781));
*(&local1) = $tmp2781;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2781));
// line 1094
org$pandalanguage$pandac$ASTNode* $tmp2783 = *(&local1);
panda$core$Bit $tmp2784 = panda$core$Bit$init$builtin_bit($tmp2783 == NULL);
bool $tmp2785 = $tmp2784.value;
if ($tmp2785) goto block6; else goto block7;
block6:;
// line 1095
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2786 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2786));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 1097
org$pandalanguage$pandac$ASTNode* $tmp2787 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2788 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token $tmp2789 = *(&local0);
org$pandalanguage$pandac$Position $tmp2790 = $tmp2789.position;
org$pandalanguage$pandac$parser$Token $tmp2791 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2792 = $tmp2791.kind;
org$pandalanguage$pandac$ASTNode* $tmp2793 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2787, $tmp2788, $tmp2790, $tmp2792, $tmp2793);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2787));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2787));
org$pandalanguage$pandac$ASTNode* $tmp2794 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2794));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2787;
block5:;
// line 1099
org$pandalanguage$pandac$parser$Token $tmp2795 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2795);
// line 1100
org$pandalanguage$pandac$ASTNode* $tmp2796 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2796));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2796));
return $tmp2796;
block1:;
panda$core$Bit $tmp2797 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2798 = $tmp2797.value;
if ($tmp2798) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp2799 = (panda$core$Int64) {1089};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2800, $tmp2799, &$s2801);
abort(); // unreachable
block8:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1111
org$pandalanguage$pandac$ASTNode* $tmp2802 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2803 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2803));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2802));
*(&local0) = $tmp2802;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2802));
// line 1112
org$pandalanguage$pandac$ASTNode* $tmp2804 = *(&local0);
panda$core$Bit $tmp2805 = panda$core$Bit$init$builtin_bit($tmp2804 == NULL);
bool $tmp2806 = $tmp2805.value;
if ($tmp2806) goto block1; else goto block2;
block1:;
// line 1113
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2807 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2807));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1115
goto block3;
block3:;
// line 1116
org$pandalanguage$pandac$parser$Token $tmp2808 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2808;
// line 1117
org$pandalanguage$pandac$parser$Token $tmp2809 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2810 = $tmp2809.kind;
panda$core$Int64 $tmp2811 = $tmp2810.$rawValue;
panda$core$Int64 $tmp2812 = (panda$core$Int64) {54};
panda$core$Bit $tmp2813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2811, $tmp2812);
bool $tmp2814 = $tmp2813.value;
if ($tmp2814) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2815 = (panda$core$Int64) {55};
panda$core$Bit $tmp2816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2811, $tmp2815);
bool $tmp2817 = $tmp2816.value;
if ($tmp2817) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp2818 = (panda$core$Int64) {56};
panda$core$Bit $tmp2819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2811, $tmp2818);
bool $tmp2820 = $tmp2819.value;
if ($tmp2820) goto block6; else goto block9;
block9:;
panda$core$Int64 $tmp2821 = (panda$core$Int64) {57};
panda$core$Bit $tmp2822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2811, $tmp2821);
bool $tmp2823 = $tmp2822.value;
if ($tmp2823) goto block6; else goto block10;
block10:;
panda$core$Int64 $tmp2824 = (panda$core$Int64) {73};
panda$core$Bit $tmp2825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2811, $tmp2824);
bool $tmp2826 = $tmp2825.value;
if ($tmp2826) goto block6; else goto block11;
block11:;
panda$core$Int64 $tmp2827 = (panda$core$Int64) {68};
panda$core$Bit $tmp2828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2811, $tmp2827);
bool $tmp2829 = $tmp2828.value;
if ($tmp2829) goto block6; else goto block12;
block12:;
panda$core$Int64 $tmp2830 = (panda$core$Int64) {70};
panda$core$Bit $tmp2831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2811, $tmp2830);
bool $tmp2832 = $tmp2831.value;
if ($tmp2832) goto block6; else goto block13;
block6:;
// line 1120
org$pandalanguage$pandac$ASTNode* $tmp2833 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2834 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2834));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2833));
*(&local2) = $tmp2833;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2833));
// line 1121
org$pandalanguage$pandac$ASTNode* $tmp2835 = *(&local2);
panda$core$Bit $tmp2836 = panda$core$Bit$init$builtin_bit($tmp2835 == NULL);
bool $tmp2837 = $tmp2836.value;
if ($tmp2837) goto block14; else goto block15;
block14:;
// line 1122
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2838 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2838));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2839 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2839));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
// line 1124
org$pandalanguage$pandac$ASTNode* $tmp2840 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2841 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2842 = *(&local1);
org$pandalanguage$pandac$Position $tmp2843 = $tmp2842.position;
org$pandalanguage$pandac$ASTNode* $tmp2844 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2845 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2846 = $tmp2845.kind;
org$pandalanguage$pandac$ASTNode* $tmp2847 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2840, $tmp2841, $tmp2843, $tmp2844, $tmp2846, $tmp2847);
org$pandalanguage$pandac$ASTNode* $tmp2848 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2848));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2840));
*(&local0) = $tmp2840;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2840));
org$pandalanguage$pandac$ASTNode* $tmp2849 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2849));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block13:;
panda$core$Int64 $tmp2850 = (panda$core$Int64) {64};
panda$core$Bit $tmp2851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2811, $tmp2850);
bool $tmp2852 = $tmp2851.value;
if ($tmp2852) goto block16; else goto block17;
block16:;
// line 1126
org$pandalanguage$pandac$parser$Token $tmp2853 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp2853;
// line 1127
org$pandalanguage$pandac$parser$Token $tmp2854 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp2855 = $tmp2854.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2856;
$tmp2856 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2856->value = $tmp2855;
panda$core$Int64 $tmp2857 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2858 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2857);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2859;
$tmp2859 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2859->value = $tmp2858;
ITable* $tmp2860 = ((panda$core$Equatable*) $tmp2856)->$class->itable;
while ($tmp2860->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2860 = $tmp2860->next;
}
$fn2862 $tmp2861 = $tmp2860->methods[0];
panda$core$Bit $tmp2863 = $tmp2861(((panda$core$Equatable*) $tmp2856), ((panda$core$Equatable*) $tmp2859));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2856)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2859)));
bool $tmp2864 = $tmp2863.value;
if ($tmp2864) goto block18; else goto block20;
block18:;
// line 1129
org$pandalanguage$pandac$ASTNode* $tmp2865 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2866 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2866));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2865));
*(&local4) = $tmp2865;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2865));
// line 1130
org$pandalanguage$pandac$ASTNode* $tmp2867 = *(&local4);
panda$core$Bit $tmp2868 = panda$core$Bit$init$builtin_bit($tmp2867 == NULL);
bool $tmp2869 = $tmp2868.value;
if ($tmp2869) goto block21; else goto block22;
block21:;
// line 1131
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2870 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2870));
// unreffing next
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2871 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2871));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1133
org$pandalanguage$pandac$ASTNode* $tmp2872 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2873 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2874 = *(&local1);
org$pandalanguage$pandac$Position $tmp2875 = $tmp2874.position;
org$pandalanguage$pandac$ASTNode* $tmp2876 = *(&local0);
panda$core$Int64 $tmp2877 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$Token$Kind $tmp2878 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2877);
org$pandalanguage$pandac$ASTNode* $tmp2879 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2872, $tmp2873, $tmp2875, $tmp2876, $tmp2878, $tmp2879);
org$pandalanguage$pandac$ASTNode* $tmp2880 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2880));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2872));
*(&local0) = $tmp2872;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2872));
org$pandalanguage$pandac$ASTNode* $tmp2881 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2881));
// unreffing next
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block19;
block20:;
// line 1
// line 1136
org$pandalanguage$pandac$parser$Token $tmp2882 = *(&local3);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2882);
// line 1137
org$pandalanguage$pandac$parser$Token $tmp2883 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2883);
// line 1138
org$pandalanguage$pandac$ASTNode* $tmp2884 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2884));
org$pandalanguage$pandac$ASTNode* $tmp2885 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2885));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2884;
block19:;
goto block5;
block17:;
// line 1141
org$pandalanguage$pandac$parser$Token $tmp2886 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2886);
// line 1142
org$pandalanguage$pandac$ASTNode* $tmp2887 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2887));
org$pandalanguage$pandac$ASTNode* $tmp2888 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2888));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2887;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp2889 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2890 = $tmp2889.value;
if ($tmp2890) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp2891 = (panda$core$Int64) {1110};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2892, $tmp2891, &$s2893);
abort(); // unreachable
block23:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1152
org$pandalanguage$pandac$ASTNode* $tmp2894 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2895 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2895));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2894));
*(&local0) = $tmp2894;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2894));
// line 1153
org$pandalanguage$pandac$ASTNode* $tmp2896 = *(&local0);
panda$core$Bit $tmp2897 = panda$core$Bit$init$builtin_bit($tmp2896 == NULL);
bool $tmp2898 = $tmp2897.value;
if ($tmp2898) goto block1; else goto block2;
block1:;
// line 1154
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2899 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2899));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1156
goto block3;
block3:;
// line 1157
org$pandalanguage$pandac$parser$Token $tmp2900 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2900;
// line 1158
org$pandalanguage$pandac$parser$Token $tmp2901 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2902 = $tmp2901.kind;
panda$core$Int64 $tmp2903 = $tmp2902.$rawValue;
panda$core$Int64 $tmp2904 = (panda$core$Int64) {52};
panda$core$Bit $tmp2905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2903, $tmp2904);
bool $tmp2906 = $tmp2905.value;
if ($tmp2906) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2907 = (panda$core$Int64) {53};
panda$core$Bit $tmp2908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2903, $tmp2907);
bool $tmp2909 = $tmp2908.value;
if ($tmp2909) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp2910 = (panda$core$Int64) {72};
panda$core$Bit $tmp2911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2903, $tmp2910);
bool $tmp2912 = $tmp2911.value;
if ($tmp2912) goto block6; else goto block9;
block6:;
// line 1160
org$pandalanguage$pandac$ASTNode* $tmp2913 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2914 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2914));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2913));
*(&local2) = $tmp2913;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2913));
// line 1161
org$pandalanguage$pandac$ASTNode* $tmp2915 = *(&local2);
panda$core$Bit $tmp2916 = panda$core$Bit$init$builtin_bit($tmp2915 == NULL);
bool $tmp2917 = $tmp2916.value;
if ($tmp2917) goto block10; else goto block11;
block10:;
// line 1162
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2918 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2918));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2919 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2919));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1164
org$pandalanguage$pandac$ASTNode* $tmp2920 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2921 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp2922 = *(&local1);
org$pandalanguage$pandac$Position $tmp2923 = $tmp2922.position;
org$pandalanguage$pandac$ASTNode* $tmp2924 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2925 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2926 = $tmp2925.kind;
org$pandalanguage$pandac$ASTNode* $tmp2927 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2920, $tmp2921, $tmp2923, $tmp2924, $tmp2926, $tmp2927);
org$pandalanguage$pandac$ASTNode* $tmp2928 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2928));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2920));
*(&local0) = $tmp2920;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2920));
org$pandalanguage$pandac$ASTNode* $tmp2929 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2929));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block9:;
// line 1166
org$pandalanguage$pandac$parser$Token $tmp2930 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2930);
// line 1167
org$pandalanguage$pandac$ASTNode* $tmp2931 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2931));
org$pandalanguage$pandac$ASTNode* $tmp2932 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2932));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2931;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp2933 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2934 = $tmp2933.value;
if ($tmp2934) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp2935 = (panda$core$Int64) {1151};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2936, $tmp2935, &$s2937);
abort(); // unreachable
block12:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$parser$Token local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$core$Bit local4;
panda$core$Bit local5;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 1177
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1178
org$pandalanguage$pandac$parser$Token $tmp2938 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2939 = $tmp2938.kind;
panda$core$Int64 $tmp2940 = $tmp2939.$rawValue;
panda$core$Int64 $tmp2941 = (panda$core$Int64) {98};
panda$core$Bit $tmp2942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2940, $tmp2941);
bool $tmp2943 = $tmp2942.value;
if ($tmp2943) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp2944 = (panda$core$Int64) {97};
panda$core$Bit $tmp2945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2940, $tmp2944);
bool $tmp2946 = $tmp2945.value;
if ($tmp2946) goto block2; else goto block4;
block2:;
// line 1180
org$pandalanguage$pandac$ASTNode* $tmp2947 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2947));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block4:;
// line 1182
org$pandalanguage$pandac$ASTNode* $tmp2948 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp2949 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2949));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2948));
*(&local0) = $tmp2948;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2948));
// line 1183
org$pandalanguage$pandac$ASTNode* $tmp2950 = *(&local0);
panda$core$Bit $tmp2951 = panda$core$Bit$init$builtin_bit($tmp2950 == NULL);
bool $tmp2952 = $tmp2951.value;
if ($tmp2952) goto block5; else goto block6;
block5:;
// line 1184
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2953 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2953));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
goto block1;
block1:;
// line 1187
org$pandalanguage$pandac$parser$Token $tmp2954 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2954;
// line 1188
org$pandalanguage$pandac$parser$Token $tmp2955 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2956 = $tmp2955.kind;
panda$core$Int64 $tmp2957 = $tmp2956.$rawValue;
panda$core$Int64 $tmp2958 = (panda$core$Int64) {98};
panda$core$Bit $tmp2959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2957, $tmp2958);
bool $tmp2960 = $tmp2959.value;
if ($tmp2960) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp2961 = (panda$core$Int64) {97};
panda$core$Bit $tmp2962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2957, $tmp2961);
bool $tmp2963 = $tmp2962.value;
if ($tmp2963) goto block8; else goto block10;
block8:;
// line 1190
org$pandalanguage$pandac$parser$Token $tmp2964 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp2964;
// line 1191
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1192
org$pandalanguage$pandac$parser$Token $tmp2965 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp2966 = $tmp2965.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2967;
$tmp2967 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2967->value = $tmp2966;
panda$core$Int64 $tmp2968 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2969 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2968);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2970;
$tmp2970 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2970->value = $tmp2969;
ITable* $tmp2971 = ((panda$core$Equatable*) $tmp2967)->$class->itable;
while ($tmp2971->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2971 = $tmp2971->next;
}
$fn2973 $tmp2972 = $tmp2971->methods[1];
panda$core$Bit $tmp2974 = $tmp2972(((panda$core$Equatable*) $tmp2967), ((panda$core$Equatable*) $tmp2970));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2967)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2970)));
bool $tmp2975 = $tmp2974.value;
if ($tmp2975) goto block11; else goto block12;
block11:;
org$pandalanguage$pandac$parser$Token $tmp2976 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp2977 = $tmp2976.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2978;
$tmp2978 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2978->value = $tmp2977;
panda$core$Int64 $tmp2979 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2980 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2979);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2981;
$tmp2981 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2981->value = $tmp2980;
ITable* $tmp2982 = ((panda$core$Equatable*) $tmp2978)->$class->itable;
while ($tmp2982->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2982 = $tmp2982->next;
}
$fn2984 $tmp2983 = $tmp2982->methods[1];
panda$core$Bit $tmp2985 = $tmp2983(((panda$core$Equatable*) $tmp2978), ((panda$core$Equatable*) $tmp2981));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2978)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2981)));
*(&local5) = $tmp2985;
goto block13;
block12:;
*(&local5) = $tmp2974;
goto block13;
block13:;
panda$core$Bit $tmp2986 = *(&local5);
bool $tmp2987 = $tmp2986.value;
if ($tmp2987) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$parser$Token $tmp2988 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp2989 = $tmp2988.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2990;
$tmp2990 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2990->value = $tmp2989;
panda$core$Int64 $tmp2991 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token$Kind $tmp2992 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2991);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2993;
$tmp2993 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2993->value = $tmp2992;
ITable* $tmp2994 = ((panda$core$Equatable*) $tmp2990)->$class->itable;
while ($tmp2994->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2994 = $tmp2994->next;
}
$fn2996 $tmp2995 = $tmp2994->methods[1];
panda$core$Bit $tmp2997 = $tmp2995(((panda$core$Equatable*) $tmp2990), ((panda$core$Equatable*) $tmp2993));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2990)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2993)));
*(&local4) = $tmp2997;
goto block16;
block15:;
*(&local4) = $tmp2986;
goto block16;
block16:;
panda$core$Bit $tmp2998 = *(&local4);
bool $tmp2999 = $tmp2998.value;
if ($tmp2999) goto block17; else goto block19;
block17:;
// line 1194
org$pandalanguage$pandac$ASTNode* $tmp3000 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3001 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3001));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3000));
*(&local3) = $tmp3000;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3000));
// line 1195
org$pandalanguage$pandac$ASTNode* $tmp3002 = *(&local3);
panda$core$Bit $tmp3003 = panda$core$Bit$init$builtin_bit($tmp3002 == NULL);
bool $tmp3004 = $tmp3003.value;
if ($tmp3004) goto block20; else goto block21;
block20:;
// line 1196
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3005 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3005));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3006 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3006));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
goto block18;
block19:;
// line 1
// line 1200
org$pandalanguage$pandac$ASTNode* $tmp3007 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3007));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block18;
block18:;
// line 1202
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1203
panda$core$Int64 $tmp3008 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token$Kind $tmp3009 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3008);
org$pandalanguage$pandac$parser$Token$nullable $tmp3010 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3009);
panda$core$Bit $tmp3011 = panda$core$Bit$init$builtin_bit($tmp3010.nonnull);
bool $tmp3012 = $tmp3011.value;
if ($tmp3012) goto block22; else goto block24;
block22:;
// line 1204
org$pandalanguage$pandac$ASTNode* $tmp3013 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3014 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3014));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3013));
*(&local6) = $tmp3013;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3013));
// line 1205
org$pandalanguage$pandac$ASTNode* $tmp3015 = *(&local6);
panda$core$Bit $tmp3016 = panda$core$Bit$init$builtin_bit($tmp3015 == NULL);
bool $tmp3017 = $tmp3016.value;
if ($tmp3017) goto block25; else goto block26;
block25:;
// line 1206
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3018 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3018));
// unreffing step
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3019 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3019));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3020 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3020));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
goto block23;
block24:;
// line 1
// line 1210
org$pandalanguage$pandac$ASTNode* $tmp3021 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3021));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block23;
block23:;
// line 1212
org$pandalanguage$pandac$ASTNode* $tmp3022 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3023 = (panda$core$Int64) {33};
org$pandalanguage$pandac$parser$Token $tmp3024 = *(&local1);
org$pandalanguage$pandac$Position $tmp3025 = $tmp3024.position;
org$pandalanguage$pandac$ASTNode* $tmp3026 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3027 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3028 = $tmp3027.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3029;
$tmp3029 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3029->value = $tmp3028;
panda$core$Int64 $tmp3030 = (panda$core$Int64) {97};
org$pandalanguage$pandac$parser$Token$Kind $tmp3031 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3030);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3032;
$tmp3032 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3032->value = $tmp3031;
ITable* $tmp3033 = ((panda$core$Equatable*) $tmp3029)->$class->itable;
while ($tmp3033->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3033 = $tmp3033->next;
}
$fn3035 $tmp3034 = $tmp3033->methods[0];
panda$core$Bit $tmp3036 = $tmp3034(((panda$core$Equatable*) $tmp3029), ((panda$core$Equatable*) $tmp3032));
org$pandalanguage$pandac$ASTNode* $tmp3037 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp3038 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q($tmp3022, $tmp3023, $tmp3025, $tmp3026, $tmp3036, $tmp3037, $tmp3038);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3022));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3022));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3029)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3032)));
org$pandalanguage$pandac$ASTNode* $tmp3039 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3039));
// unreffing step
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3040 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3040));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3041 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3041));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3022;
block10:;
// line 1215
org$pandalanguage$pandac$parser$Token $tmp3042 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3042);
// line 1216
org$pandalanguage$pandac$ASTNode* $tmp3043 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3043));
org$pandalanguage$pandac$ASTNode* $tmp3044 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3044));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3043;
block7:;
panda$core$Bit $tmp3045 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3046 = $tmp3045.value;
if ($tmp3046) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp3047 = (panda$core$Int64) {1176};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3048, $tmp3047, &$s3049);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1225
org$pandalanguage$pandac$ASTNode* $tmp3050 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3051 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3051));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3050));
*(&local0) = $tmp3050;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3050));
// line 1226
org$pandalanguage$pandac$ASTNode* $tmp3052 = *(&local0);
panda$core$Bit $tmp3053 = panda$core$Bit$init$builtin_bit($tmp3052 == NULL);
bool $tmp3054 = $tmp3053.value;
if ($tmp3054) goto block1; else goto block2;
block1:;
// line 1227
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3055 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3055));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1229
goto block3;
block3:;
// line 1230
org$pandalanguage$pandac$parser$Token $tmp3056 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3056;
// line 1231
org$pandalanguage$pandac$parser$Token $tmp3057 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3058 = $tmp3057.kind;
panda$core$Int64 $tmp3059 = $tmp3058.$rawValue;
panda$core$Int64 $tmp3060 = (panda$core$Int64) {59};
panda$core$Bit $tmp3061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3059, $tmp3060);
bool $tmp3062 = $tmp3061.value;
if ($tmp3062) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3063 = (panda$core$Int64) {60};
panda$core$Bit $tmp3064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3059, $tmp3063);
bool $tmp3065 = $tmp3064.value;
if ($tmp3065) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp3066 = (panda$core$Int64) {61};
panda$core$Bit $tmp3067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3059, $tmp3066);
bool $tmp3068 = $tmp3067.value;
if ($tmp3068) goto block6; else goto block9;
block9:;
panda$core$Int64 $tmp3069 = (panda$core$Int64) {62};
panda$core$Bit $tmp3070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3059, $tmp3069);
bool $tmp3071 = $tmp3070.value;
if ($tmp3071) goto block6; else goto block10;
block10:;
panda$core$Int64 $tmp3072 = (panda$core$Int64) {63};
panda$core$Bit $tmp3073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3059, $tmp3072);
bool $tmp3074 = $tmp3073.value;
if ($tmp3074) goto block6; else goto block11;
block11:;
panda$core$Int64 $tmp3075 = (panda$core$Int64) {64};
panda$core$Bit $tmp3076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3059, $tmp3075);
bool $tmp3077 = $tmp3076.value;
if ($tmp3077) goto block6; else goto block12;
block12:;
panda$core$Int64 $tmp3078 = (panda$core$Int64) {65};
panda$core$Bit $tmp3079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3059, $tmp3078);
bool $tmp3080 = $tmp3079.value;
if ($tmp3080) goto block6; else goto block13;
block13:;
panda$core$Int64 $tmp3081 = (panda$core$Int64) {66};
panda$core$Bit $tmp3082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3059, $tmp3081);
bool $tmp3083 = $tmp3082.value;
if ($tmp3083) goto block6; else goto block14;
block6:;
// line 1240
org$pandalanguage$pandac$ASTNode* $tmp3084 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3085 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3085));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3084));
*(&local2) = $tmp3084;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3084));
// line 1241
org$pandalanguage$pandac$ASTNode* $tmp3086 = *(&local2);
panda$core$Bit $tmp3087 = panda$core$Bit$init$builtin_bit($tmp3086 == NULL);
bool $tmp3088 = $tmp3087.value;
if ($tmp3088) goto block15; else goto block16;
block15:;
// line 1242
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3089 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3089));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3090 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3090));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1244
org$pandalanguage$pandac$ASTNode* $tmp3091 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3092 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp3093 = *(&local1);
org$pandalanguage$pandac$Position $tmp3094 = $tmp3093.position;
org$pandalanguage$pandac$ASTNode* $tmp3095 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3096 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3097 = $tmp3096.kind;
org$pandalanguage$pandac$ASTNode* $tmp3098 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3091, $tmp3092, $tmp3094, $tmp3095, $tmp3097, $tmp3098);
org$pandalanguage$pandac$ASTNode* $tmp3099 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3099));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3091));
*(&local0) = $tmp3091;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3091));
org$pandalanguage$pandac$ASTNode* $tmp3100 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3100));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block14:;
// line 1246
org$pandalanguage$pandac$parser$Token $tmp3101 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3101);
// line 1247
org$pandalanguage$pandac$ASTNode* $tmp3102 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3102));
org$pandalanguage$pandac$ASTNode* $tmp3103 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3103));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3102;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp3104 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3105 = $tmp3104.value;
if ($tmp3105) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp3106 = (panda$core$Int64) {1224};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3107, $tmp3106, &$s3108);
abort(); // unreachable
block17:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1256
org$pandalanguage$pandac$ASTNode* $tmp3109 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3110 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3110));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3109));
*(&local0) = $tmp3109;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3109));
// line 1257
org$pandalanguage$pandac$ASTNode* $tmp3111 = *(&local0);
panda$core$Bit $tmp3112 = panda$core$Bit$init$builtin_bit($tmp3111 == NULL);
bool $tmp3113 = $tmp3112.value;
if ($tmp3113) goto block1; else goto block2;
block1:;
// line 1258
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3114 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3114));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1260
goto block3;
block3:;
// line 1261
org$pandalanguage$pandac$parser$Token $tmp3115 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3115;
// line 1262
org$pandalanguage$pandac$parser$Token $tmp3116 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3117 = $tmp3116.kind;
panda$core$Int64 $tmp3118 = $tmp3117.$rawValue;
panda$core$Int64 $tmp3119 = (panda$core$Int64) {67};
panda$core$Bit $tmp3120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3118, $tmp3119);
bool $tmp3121 = $tmp3120.value;
if ($tmp3121) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3122 = (panda$core$Int64) {71};
panda$core$Bit $tmp3123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3118, $tmp3122);
bool $tmp3124 = $tmp3123.value;
if ($tmp3124) goto block6; else goto block8;
block6:;
// line 1264
org$pandalanguage$pandac$ASTNode* $tmp3125 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3126 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3126));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3125));
*(&local2) = $tmp3125;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3125));
// line 1265
org$pandalanguage$pandac$ASTNode* $tmp3127 = *(&local2);
panda$core$Bit $tmp3128 = panda$core$Bit$init$builtin_bit($tmp3127 == NULL);
bool $tmp3129 = $tmp3128.value;
if ($tmp3129) goto block9; else goto block10;
block9:;
// line 1266
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3130 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3130));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3131 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3131));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1268
org$pandalanguage$pandac$ASTNode* $tmp3132 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3133 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp3134 = *(&local1);
org$pandalanguage$pandac$Position $tmp3135 = $tmp3134.position;
org$pandalanguage$pandac$ASTNode* $tmp3136 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3137 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3138 = $tmp3137.kind;
org$pandalanguage$pandac$ASTNode* $tmp3139 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3132, $tmp3133, $tmp3135, $tmp3136, $tmp3138, $tmp3139);
org$pandalanguage$pandac$ASTNode* $tmp3140 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3140));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3132));
*(&local0) = $tmp3132;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3132));
org$pandalanguage$pandac$ASTNode* $tmp3141 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3141));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block8:;
// line 1270
org$pandalanguage$pandac$parser$Token $tmp3142 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3142);
// line 1271
org$pandalanguage$pandac$ASTNode* $tmp3143 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3143));
org$pandalanguage$pandac$ASTNode* $tmp3144 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3144));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3143;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp3145 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3146 = $tmp3145.value;
if ($tmp3146) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp3147 = (panda$core$Int64) {1255};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3148, $tmp3147, &$s3149);
abort(); // unreachable
block11:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1280
org$pandalanguage$pandac$ASTNode* $tmp3150 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3151 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3151));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3150));
*(&local0) = $tmp3150;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3150));
// line 1281
org$pandalanguage$pandac$ASTNode* $tmp3152 = *(&local0);
panda$core$Bit $tmp3153 = panda$core$Bit$init$builtin_bit($tmp3152 == NULL);
bool $tmp3154 = $tmp3153.value;
if ($tmp3154) goto block1; else goto block2;
block1:;
// line 1282
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3155 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3155));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1284
goto block3;
block3:;
// line 1285
panda$core$Int64 $tmp3156 = (panda$core$Int64) {69};
org$pandalanguage$pandac$parser$Token$Kind $tmp3157 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3156);
org$pandalanguage$pandac$parser$Token$nullable $tmp3158 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3157);
*(&local1) = $tmp3158;
// line 1286
org$pandalanguage$pandac$parser$Token$nullable $tmp3159 = *(&local1);
panda$core$Bit $tmp3160 = panda$core$Bit$init$builtin_bit(!$tmp3159.nonnull);
bool $tmp3161 = $tmp3160.value;
if ($tmp3161) goto block5; else goto block6;
block5:;
// line 1287
goto block4;
block6:;
// line 1289
org$pandalanguage$pandac$ASTNode* $tmp3162 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3163 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3163));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3162));
*(&local2) = $tmp3162;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3162));
// line 1290
org$pandalanguage$pandac$ASTNode* $tmp3164 = *(&local2);
panda$core$Bit $tmp3165 = panda$core$Bit$init$builtin_bit($tmp3164 == NULL);
bool $tmp3166 = $tmp3165.value;
if ($tmp3166) goto block7; else goto block8;
block7:;
// line 1291
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3167 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3167));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3168 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3168));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1293
org$pandalanguage$pandac$ASTNode* $tmp3169 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3170 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token$nullable $tmp3171 = *(&local1);
org$pandalanguage$pandac$Position $tmp3172 = ((org$pandalanguage$pandac$parser$Token) $tmp3171.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3173 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp3174 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3175 = ((org$pandalanguage$pandac$parser$Token) $tmp3174.value).kind;
org$pandalanguage$pandac$ASTNode* $tmp3176 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3169, $tmp3170, $tmp3172, $tmp3173, $tmp3175, $tmp3176);
org$pandalanguage$pandac$ASTNode* $tmp3177 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3177));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3169));
*(&local0) = $tmp3169;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3169));
org$pandalanguage$pandac$ASTNode* $tmp3178 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3178));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block4:;
// line 1295
org$pandalanguage$pandac$ASTNode* $tmp3179 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3179));
org$pandalanguage$pandac$ASTNode* $tmp3180 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3180));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3179;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1302
panda$core$Int64 $tmp3181 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp3182 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3181);
org$pandalanguage$pandac$parser$Token$nullable $tmp3183 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3182, &$s3184);
*(&local0) = $tmp3183;
// line 1303
org$pandalanguage$pandac$parser$Token$nullable $tmp3185 = *(&local0);
panda$core$Bit $tmp3186 = panda$core$Bit$init$builtin_bit(!$tmp3185.nonnull);
bool $tmp3187 = $tmp3186.value;
if ($tmp3187) goto block1; else goto block2;
block1:;
// line 1304
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1306
org$pandalanguage$pandac$ASTNode* $tmp3188 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3189 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3189));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3188));
*(&local1) = $tmp3188;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3188));
// line 1307
org$pandalanguage$pandac$ASTNode* $tmp3190 = *(&local1);
panda$core$Bit $tmp3191 = panda$core$Bit$init$builtin_bit($tmp3190 == NULL);
bool $tmp3192 = $tmp3191.value;
if ($tmp3192) goto block3; else goto block4;
block3:;
// line 1308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3193 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3193));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1310
panda$collections$ImmutableArray* $tmp3194 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3195 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3195));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3194));
*(&local2) = $tmp3194;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3194));
// line 1311
panda$collections$ImmutableArray* $tmp3196 = *(&local2);
panda$core$Bit $tmp3197 = panda$core$Bit$init$builtin_bit($tmp3196 == NULL);
bool $tmp3198 = $tmp3197.value;
if ($tmp3198) goto block5; else goto block6;
block5:;
// line 1312
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3199 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3199));
// unreffing ifTrue
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3200 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3200));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1314
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1315
panda$core$Int64 $tmp3201 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token$Kind $tmp3202 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3201);
org$pandalanguage$pandac$parser$Token$nullable $tmp3203 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3202);
panda$core$Bit $tmp3204 = panda$core$Bit$init$builtin_bit($tmp3203.nonnull);
bool $tmp3205 = $tmp3204.value;
if ($tmp3205) goto block7; else goto block9;
block7:;
// line 1316
org$pandalanguage$pandac$parser$Token $tmp3206 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3207 = $tmp3206.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3208;
$tmp3208 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3208->value = $tmp3207;
panda$core$Int64 $tmp3209 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp3210 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3209);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3211;
$tmp3211 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3211->value = $tmp3210;
ITable* $tmp3212 = ((panda$core$Equatable*) $tmp3208)->$class->itable;
while ($tmp3212->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3212 = $tmp3212->next;
}
$fn3214 $tmp3213 = $tmp3212->methods[0];
panda$core$Bit $tmp3215 = $tmp3213(((panda$core$Equatable*) $tmp3208), ((panda$core$Equatable*) $tmp3211));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3208)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3211)));
bool $tmp3216 = $tmp3215.value;
if ($tmp3216) goto block10; else goto block12;
block10:;
// line 1317
org$pandalanguage$pandac$ASTNode* $tmp3217 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3218 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3218));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3217));
*(&local3) = $tmp3217;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3217));
// line 1318
org$pandalanguage$pandac$ASTNode* $tmp3219 = *(&local3);
panda$core$Bit $tmp3220 = panda$core$Bit$init$builtin_bit($tmp3219 == NULL);
bool $tmp3221 = $tmp3220.value;
if ($tmp3221) goto block13; else goto block14;
block13:;
// line 1319
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3222 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3222));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3223 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3223));
// unreffing ifTrue
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3224 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3224));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1323
org$pandalanguage$pandac$ASTNode* $tmp3225 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3226 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3226));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3225));
*(&local3) = $tmp3225;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3225));
// line 1324
org$pandalanguage$pandac$ASTNode* $tmp3227 = *(&local3);
panda$core$Bit $tmp3228 = panda$core$Bit$init$builtin_bit($tmp3227 == NULL);
bool $tmp3229 = $tmp3228.value;
if ($tmp3229) goto block15; else goto block16;
block15:;
// line 1325
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3230 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3230));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3231 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3231));
// unreffing ifTrue
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3232 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3232));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
goto block11;
block11:;
goto block8;
block9:;
// line 1
// line 1330
org$pandalanguage$pandac$ASTNode* $tmp3233 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3233));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block8:;
// line 1332
org$pandalanguage$pandac$ASTNode* $tmp3234 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3235 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$nullable $tmp3236 = *(&local0);
org$pandalanguage$pandac$Position $tmp3237 = ((org$pandalanguage$pandac$parser$Token) $tmp3236.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3238 = *(&local1);
panda$collections$ImmutableArray* $tmp3239 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3240 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp3234, $tmp3235, $tmp3237, $tmp3238, $tmp3239, $tmp3240);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3234));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3234));
org$pandalanguage$pandac$ASTNode* $tmp3241 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3241));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3242 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3242));
// unreffing ifTrue
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3243 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3243));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3234;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 1339
panda$core$Int64 $tmp3244 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3245 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3244);
org$pandalanguage$pandac$parser$Token$nullable $tmp3246 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3245, &$s3247);
panda$core$Bit $tmp3248 = panda$core$Bit$init$builtin_bit(!$tmp3246.nonnull);
bool $tmp3249 = $tmp3248.value;
if ($tmp3249) goto block1; else goto block2;
block1:;
// line 1340
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1342
panda$core$Bit $tmp3250 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp3251 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp3250);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3251));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3251));
return $tmp3251;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1349
panda$core$Int64 $tmp3252 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp3253 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3252);
org$pandalanguage$pandac$parser$Token$nullable $tmp3254 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3253, &$s3255);
*(&local0) = $tmp3254;
// line 1350
org$pandalanguage$pandac$parser$Token$nullable $tmp3256 = *(&local0);
panda$core$Bit $tmp3257 = panda$core$Bit$init$builtin_bit(!$tmp3256.nonnull);
bool $tmp3258 = $tmp3257.value;
if ($tmp3258) goto block1; else goto block2;
block1:;
// line 1351
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1353
org$pandalanguage$pandac$parser$Token $tmp3259 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3260 = $tmp3259.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3261;
$tmp3261 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3261->value = $tmp3260;
panda$core$Int64 $tmp3262 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3263 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3262);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3264;
$tmp3264 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3264->value = $tmp3263;
ITable* $tmp3265 = ((panda$core$Equatable*) $tmp3261)->$class->itable;
while ($tmp3265->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3265 = $tmp3265->next;
}
$fn3267 $tmp3266 = $tmp3265->methods[0];
panda$core$Bit $tmp3268 = $tmp3266(((panda$core$Equatable*) $tmp3261), ((panda$core$Equatable*) $tmp3264));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3261)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3264)));
bool $tmp3269 = $tmp3268.value;
if ($tmp3269) goto block3; else goto block4;
block3:;
// line 1354
org$pandalanguage$pandac$ASTNode* $tmp3270 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3271 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3271));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3270));
*(&local1) = $tmp3270;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3270));
// line 1355
org$pandalanguage$pandac$ASTNode* $tmp3272 = *(&local1);
panda$core$Bit $tmp3273 = panda$core$Bit$init$builtin_bit($tmp3272 == NULL);
bool $tmp3274 = $tmp3273.value;
if ($tmp3274) goto block5; else goto block6;
block5:;
// line 1356
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3275 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3275));
// unreffing type
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1358
org$pandalanguage$pandac$ASTNode* $tmp3276 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3277 = (panda$core$Int64) {44};
org$pandalanguage$pandac$parser$Token$nullable $tmp3278 = *(&local0);
org$pandalanguage$pandac$Position $tmp3279 = ((org$pandalanguage$pandac$parser$Token) $tmp3278.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3280 = *(&local0);
panda$core$String* $tmp3281 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3280.value));
org$pandalanguage$pandac$ASTNode* $tmp3282 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3276, $tmp3277, $tmp3279, $tmp3281, $tmp3282);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3276));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3276));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3281));
org$pandalanguage$pandac$ASTNode* $tmp3283 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3283));
// unreffing type
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3276;
block4:;
// line 1360
org$pandalanguage$pandac$ASTNode* $tmp3284 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3285 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp3286 = *(&local0);
org$pandalanguage$pandac$Position $tmp3287 = ((org$pandalanguage$pandac$parser$Token) $tmp3286.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3288 = *(&local0);
panda$core$String* $tmp3289 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3288.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3284, $tmp3285, $tmp3287, $tmp3289);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3284));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3284));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3289));
return $tmp3284;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
panda$collections$ImmutableArray* local3 = NULL;
// line 1367
panda$core$Int64 $tmp3290 = (panda$core$Int64) {33};
org$pandalanguage$pandac$parser$Token$Kind $tmp3291 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3290);
org$pandalanguage$pandac$parser$Token$nullable $tmp3292 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3291, &$s3293);
*(&local0) = $tmp3292;
// line 1368
org$pandalanguage$pandac$parser$Token$nullable $tmp3294 = *(&local0);
panda$core$Bit $tmp3295 = panda$core$Bit$init$builtin_bit(!$tmp3294.nonnull);
bool $tmp3296 = $tmp3295.value;
if ($tmp3296) goto block1; else goto block2;
block1:;
// line 1369
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1371
org$pandalanguage$pandac$ASTNode* $tmp3297 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3298 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3298));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3297));
*(&local1) = $tmp3297;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3297));
// line 1372
org$pandalanguage$pandac$ASTNode* $tmp3299 = *(&local1);
panda$core$Bit $tmp3300 = panda$core$Bit$init$builtin_bit($tmp3299 == NULL);
bool $tmp3301 = $tmp3300.value;
if ($tmp3301) goto block3; else goto block4;
block3:;
// line 1373
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3302 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3302));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1375
panda$core$Int64 $tmp3303 = (panda$core$Int64) {35};
org$pandalanguage$pandac$parser$Token$Kind $tmp3304 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3303);
org$pandalanguage$pandac$parser$Token$nullable $tmp3305 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3304, &$s3306);
panda$core$Bit $tmp3307 = panda$core$Bit$init$builtin_bit(!$tmp3305.nonnull);
bool $tmp3308 = $tmp3307.value;
if ($tmp3308) goto block5; else goto block6;
block5:;
// line 1376
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3309 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3309));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1378
org$pandalanguage$pandac$ASTNode* $tmp3310 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3311 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3311));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3310));
*(&local2) = $tmp3310;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3310));
// line 1379
org$pandalanguage$pandac$ASTNode* $tmp3312 = *(&local2);
panda$core$Bit $tmp3313 = panda$core$Bit$init$builtin_bit($tmp3312 == NULL);
bool $tmp3314 = $tmp3313.value;
if ($tmp3314) goto block7; else goto block8;
block7:;
// line 1380
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3315 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3315));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3316 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3316));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1382
panda$collections$ImmutableArray* $tmp3317 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3318 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3318));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3317));
*(&local3) = $tmp3317;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3317));
// line 1383
panda$collections$ImmutableArray* $tmp3319 = *(&local3);
panda$core$Bit $tmp3320 = panda$core$Bit$init$builtin_bit($tmp3319 == NULL);
bool $tmp3321 = $tmp3320.value;
if ($tmp3321) goto block9; else goto block10;
block9:;
// line 1384
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3322 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3322));
// unreffing block
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3323 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3323));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3324 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3324));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1386
org$pandalanguage$pandac$ASTNode* $tmp3325 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3326 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$nullable $tmp3327 = *(&local0);
org$pandalanguage$pandac$Position $tmp3328 = ((org$pandalanguage$pandac$parser$Token) $tmp3327.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3329 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3330 = *(&local2);
panda$collections$ImmutableArray* $tmp3331 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3325, $tmp3326, $tmp3328, param1, $tmp3329, $tmp3330, $tmp3331);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3325));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3325));
panda$collections$ImmutableArray* $tmp3332 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3332));
// unreffing block
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3333 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3333));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3334 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3334));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3325;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
// line 1393
panda$core$Int64 $tmp3335 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$Kind $tmp3336 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3335);
org$pandalanguage$pandac$parser$Token$nullable $tmp3337 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3336, &$s3338);
*(&local0) = $tmp3337;
// line 1394
org$pandalanguage$pandac$parser$Token$nullable $tmp3339 = *(&local0);
panda$core$Bit $tmp3340 = panda$core$Bit$init$builtin_bit(!$tmp3339.nonnull);
bool $tmp3341 = $tmp3340.value;
if ($tmp3341) goto block1; else goto block2;
block1:;
// line 1395
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1397
org$pandalanguage$pandac$ASTNode* $tmp3342 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3343 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3343));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3342));
*(&local1) = $tmp3342;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3342));
// line 1398
org$pandalanguage$pandac$ASTNode* $tmp3344 = *(&local1);
panda$core$Bit $tmp3345 = panda$core$Bit$init$builtin_bit($tmp3344 == NULL);
bool $tmp3346 = $tmp3345.value;
if ($tmp3346) goto block3; else goto block4;
block3:;
// line 1399
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3347 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3347));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1401
panda$collections$ImmutableArray* $tmp3348 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3349 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3349));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3348));
*(&local2) = $tmp3348;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3348));
// line 1402
panda$collections$ImmutableArray* $tmp3350 = *(&local2);
panda$core$Bit $tmp3351 = panda$core$Bit$init$builtin_bit($tmp3350 == NULL);
bool $tmp3352 = $tmp3351.value;
if ($tmp3352) goto block5; else goto block6;
block5:;
// line 1403
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3353 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3353));
// unreffing body
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3354 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3354));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1405
org$pandalanguage$pandac$ASTNode* $tmp3355 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3356 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$nullable $tmp3357 = *(&local0);
org$pandalanguage$pandac$Position $tmp3358 = ((org$pandalanguage$pandac$parser$Token) $tmp3357.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3359 = *(&local1);
panda$collections$ImmutableArray* $tmp3360 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3355, $tmp3356, $tmp3358, param1, $tmp3359, $tmp3360);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3355));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3355));
panda$collections$ImmutableArray* $tmp3361 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3361));
// unreffing body
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3362 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3362));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3355;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$ImmutableArray* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1412
panda$core$Int64 $tmp3363 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$Kind $tmp3364 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3363);
org$pandalanguage$pandac$parser$Token$nullable $tmp3365 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3364, &$s3366);
*(&local0) = $tmp3365;
// line 1413
org$pandalanguage$pandac$parser$Token$nullable $tmp3367 = *(&local0);
panda$core$Bit $tmp3368 = panda$core$Bit$init$builtin_bit(!$tmp3367.nonnull);
bool $tmp3369 = $tmp3368.value;
if ($tmp3369) goto block1; else goto block2;
block1:;
// line 1414
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1416
panda$collections$ImmutableArray* $tmp3370 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3371 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3371));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3370));
*(&local1) = $tmp3370;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3370));
// line 1417
panda$collections$ImmutableArray* $tmp3372 = *(&local1);
panda$core$Bit $tmp3373 = panda$core$Bit$init$builtin_bit($tmp3372 == NULL);
bool $tmp3374 = $tmp3373.value;
if ($tmp3374) goto block3; else goto block4;
block3:;
// line 1418
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3375 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3375));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1420
panda$core$Int64 $tmp3376 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$Kind $tmp3377 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3376);
org$pandalanguage$pandac$parser$Token$nullable $tmp3378 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3377, &$s3379);
panda$core$Bit $tmp3380 = panda$core$Bit$init$builtin_bit(!$tmp3378.nonnull);
bool $tmp3381 = $tmp3380.value;
if ($tmp3381) goto block5; else goto block6;
block5:;
// line 1421
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3382 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3382));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1423
org$pandalanguage$pandac$ASTNode* $tmp3383 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3384 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3384));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3383));
*(&local2) = $tmp3383;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3383));
// line 1424
org$pandalanguage$pandac$ASTNode* $tmp3385 = *(&local2);
panda$core$Bit $tmp3386 = panda$core$Bit$init$builtin_bit($tmp3385 == NULL);
bool $tmp3387 = $tmp3386.value;
if ($tmp3387) goto block7; else goto block8;
block7:;
// line 1425
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3388 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3388));
// unreffing test
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3389 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3389));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1427
org$pandalanguage$pandac$ASTNode* $tmp3390 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3391 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$nullable $tmp3392 = *(&local0);
org$pandalanguage$pandac$Position $tmp3393 = ((org$pandalanguage$pandac$parser$Token) $tmp3392.value).position;
panda$collections$ImmutableArray* $tmp3394 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3395 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3390, $tmp3391, $tmp3393, param1, $tmp3394, $tmp3395);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3390));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3390));
org$pandalanguage$pandac$ASTNode* $tmp3396 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3396));
// unreffing test
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3397 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3397));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return $tmp3390;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$ImmutableArray* local1 = NULL;
// line 1434
panda$core$Int64 $tmp3398 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$Kind $tmp3399 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3398);
org$pandalanguage$pandac$parser$Token$nullable $tmp3400 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3399, &$s3401);
*(&local0) = $tmp3400;
// line 1435
org$pandalanguage$pandac$parser$Token$nullable $tmp3402 = *(&local0);
panda$core$Bit $tmp3403 = panda$core$Bit$init$builtin_bit(!$tmp3402.nonnull);
bool $tmp3404 = $tmp3403.value;
if ($tmp3404) goto block1; else goto block2;
block1:;
// line 1436
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1438
panda$collections$ImmutableArray* $tmp3405 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3406 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3406));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3405));
*(&local1) = $tmp3405;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3405));
// line 1439
panda$collections$ImmutableArray* $tmp3407 = *(&local1);
panda$core$Bit $tmp3408 = panda$core$Bit$init$builtin_bit($tmp3407 == NULL);
bool $tmp3409 = $tmp3408.value;
if ($tmp3409) goto block3; else goto block4;
block3:;
// line 1440
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3410 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3410));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1442
org$pandalanguage$pandac$ASTNode* $tmp3411 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3412 = (panda$core$Int64) {24};
org$pandalanguage$pandac$parser$Token$nullable $tmp3413 = *(&local0);
org$pandalanguage$pandac$Position $tmp3414 = ((org$pandalanguage$pandac$parser$Token) $tmp3413.value).position;
panda$collections$ImmutableArray* $tmp3415 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3411, $tmp3412, $tmp3414, param1, $tmp3415);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3411));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3411));
panda$collections$ImmutableArray* $tmp3416 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3416));
// unreffing body
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return $tmp3411;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1449
panda$core$Int64 $tmp3417 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$Kind $tmp3418 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3417);
org$pandalanguage$pandac$parser$Token$nullable $tmp3419 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3418, &$s3420);
*(&local0) = $tmp3419;
// line 1450
org$pandalanguage$pandac$parser$Token$nullable $tmp3421 = *(&local0);
panda$core$Bit $tmp3422 = panda$core$Bit$init$builtin_bit(!$tmp3421.nonnull);
bool $tmp3423 = $tmp3422.value;
if ($tmp3423) goto block1; else goto block2;
block1:;
// line 1451
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1453
org$pandalanguage$pandac$ASTNode* $tmp3424 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3425 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3425));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3424));
*(&local1) = $tmp3424;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3424));
// line 1454
org$pandalanguage$pandac$ASTNode* $tmp3426 = *(&local1);
panda$core$Bit $tmp3427 = panda$core$Bit$init$builtin_bit($tmp3426 == NULL);
bool $tmp3428 = $tmp3427.value;
if ($tmp3428) goto block3; else goto block4;
block3:;
// line 1455
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3429 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3429));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1457
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1458
panda$core$Int64 $tmp3430 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3431 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3430);
org$pandalanguage$pandac$parser$Token$nullable $tmp3432 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3431);
panda$core$Bit $tmp3433 = panda$core$Bit$init$builtin_bit($tmp3432.nonnull);
bool $tmp3434 = $tmp3433.value;
if ($tmp3434) goto block5; else goto block7;
block5:;
// line 1459
org$pandalanguage$pandac$ASTNode* $tmp3435 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3436 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3436));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3435));
*(&local2) = $tmp3435;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3435));
// line 1460
org$pandalanguage$pandac$ASTNode* $tmp3437 = *(&local2);
panda$core$Bit $tmp3438 = panda$core$Bit$init$builtin_bit($tmp3437 == NULL);
bool $tmp3439 = $tmp3438.value;
if ($tmp3439) goto block8; else goto block9;
block8:;
// line 1461
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3440 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3440));
// unreffing message
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3441 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3441));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 1465
org$pandalanguage$pandac$ASTNode* $tmp3442 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3442));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 1467
org$pandalanguage$pandac$ASTNode* $tmp3443 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3444 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$Token$nullable $tmp3445 = *(&local0);
org$pandalanguage$pandac$Position $tmp3446 = ((org$pandalanguage$pandac$parser$Token) $tmp3445.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3447 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3448 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3443, $tmp3444, $tmp3446, $tmp3447, $tmp3448);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3443));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3443));
org$pandalanguage$pandac$ASTNode* $tmp3449 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3449));
// unreffing message
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3450 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3450));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3443;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
panda$core$Bit* $tmp3451 = &param0->allowLambdas;
panda$core$Bit $tmp3452 = *$tmp3451;
bool $tmp3453 = $tmp3452.value;
if ($tmp3453) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3454 = (panda$core$Int64) {1475};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3455, $tmp3454, &$s3456);
abort(); // unreachable
block1:;
// line 1476
panda$core$Int64 $tmp3457 = (panda$core$Int64) {40};
org$pandalanguage$pandac$parser$Token$Kind $tmp3458 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3457);
org$pandalanguage$pandac$parser$Token$nullable $tmp3459 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3458, &$s3460);
*(&local0) = $tmp3459;
// line 1477
org$pandalanguage$pandac$parser$Token$nullable $tmp3461 = *(&local0);
panda$core$Bit $tmp3462 = panda$core$Bit$init$builtin_bit(!$tmp3461.nonnull);
bool $tmp3463 = $tmp3462.value;
if ($tmp3463) goto block3; else goto block4;
block3:;
// line 1478
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1480
panda$core$Bit $tmp3464 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp3465 = &param0->allowLambdas;
*$tmp3465 = $tmp3464;
// line 1481
panda$collections$Array* $tmp3466 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3466);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3467 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3467));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3466));
*(&local1) = $tmp3466;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3466));
// line 1482
org$pandalanguage$pandac$ASTNode* $tmp3468 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3469 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3469));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3468));
*(&local2) = $tmp3468;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3468));
// line 1483
org$pandalanguage$pandac$ASTNode* $tmp3470 = *(&local2);
panda$core$Bit $tmp3471 = panda$core$Bit$init$builtin_bit($tmp3470 == NULL);
bool $tmp3472 = $tmp3471.value;
if ($tmp3472) goto block5; else goto block6;
block5:;
// line 1484
panda$core$Bit $tmp3473 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3474 = &param0->allowLambdas;
*$tmp3474 = $tmp3473;
// line 1485
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3475 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3475));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3476 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3476));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1487
panda$collections$Array* $tmp3477 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3478 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3477, ((panda$core$Object*) $tmp3478));
// line 1488
goto block7;
block7:;
panda$core$Int64 $tmp3479 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3480 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3479);
org$pandalanguage$pandac$parser$Token$nullable $tmp3481 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3480);
panda$core$Bit $tmp3482 = panda$core$Bit$init$builtin_bit($tmp3481.nonnull);
bool $tmp3483 = $tmp3482.value;
if ($tmp3483) goto block8; else goto block9;
block8:;
// line 1489
org$pandalanguage$pandac$ASTNode* $tmp3484 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3485 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3485));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3484));
*(&local2) = $tmp3484;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3484));
// line 1490
org$pandalanguage$pandac$ASTNode* $tmp3486 = *(&local2);
panda$core$Bit $tmp3487 = panda$core$Bit$init$builtin_bit($tmp3486 == NULL);
bool $tmp3488 = $tmp3487.value;
if ($tmp3488) goto block10; else goto block11;
block10:;
// line 1491
panda$core$Bit $tmp3489 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3490 = &param0->allowLambdas;
*$tmp3490 = $tmp3489;
// line 1492
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3491 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3491));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3492 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3492));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1494
panda$collections$Array* $tmp3493 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3494 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3493, ((panda$core$Object*) $tmp3494));
goto block7;
block9:;
// line 1496
panda$core$Bit $tmp3495 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3496 = &param0->allowLambdas;
*$tmp3496 = $tmp3495;
// line 1497
panda$core$Int64 $tmp3497 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3498 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3497);
org$pandalanguage$pandac$parser$Token$nullable $tmp3499 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3498, &$s3500);
panda$core$Bit $tmp3501 = panda$core$Bit$init$builtin_bit(!$tmp3499.nonnull);
bool $tmp3502 = $tmp3501.value;
if ($tmp3502) goto block12; else goto block13;
block12:;
// line 1498
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3503 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3503));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3504 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3504));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 1500
panda$collections$Array* $tmp3505 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3505);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3506 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3506));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3505));
*(&local3) = $tmp3505;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3505));
// line 1501
goto block14;
block14:;
// line 1502
org$pandalanguage$pandac$parser$Token $tmp3507 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3508 = $tmp3507.kind;
panda$core$Int64 $tmp3509 = $tmp3508.$rawValue;
panda$core$Int64 $tmp3510 = (panda$core$Int64) {40};
panda$core$Bit $tmp3511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3509, $tmp3510);
bool $tmp3512 = $tmp3511.value;
if ($tmp3512) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp3513 = (panda$core$Int64) {41};
panda$core$Bit $tmp3514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3509, $tmp3513);
bool $tmp3515 = $tmp3514.value;
if ($tmp3515) goto block17; else goto block19;
block19:;
panda$core$Int64 $tmp3516 = (panda$core$Int64) {101};
panda$core$Bit $tmp3517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3509, $tmp3516);
bool $tmp3518 = $tmp3517.value;
if ($tmp3518) goto block17; else goto block20;
block17:;
// line 1504
goto block15;
block20:;
panda$core$Int64 $tmp3519 = (panda$core$Int64) {29};
panda$core$Bit $tmp3520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3509, $tmp3519);
bool $tmp3521 = $tmp3520.value;
if ($tmp3521) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp3522 = (panda$core$Int64) {30};
panda$core$Bit $tmp3523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3509, $tmp3522);
bool $tmp3524 = $tmp3523.value;
if ($tmp3524) goto block21; else goto block23;
block23:;
panda$core$Int64 $tmp3525 = (panda$core$Int64) {28};
panda$core$Bit $tmp3526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3509, $tmp3525);
bool $tmp3527 = $tmp3526.value;
if ($tmp3527) goto block21; else goto block24;
block21:;
// line 1506
org$pandalanguage$pandac$ASTNode* $tmp3528 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3529 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3529));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3528));
*(&local4) = $tmp3528;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3528));
// line 1507
org$pandalanguage$pandac$ASTNode* $tmp3530 = *(&local4);
panda$core$Bit $tmp3531 = panda$core$Bit$init$builtin_bit($tmp3530 == NULL);
bool $tmp3532 = $tmp3531.value;
if ($tmp3532) goto block25; else goto block26;
block25:;
// line 1508
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3533 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3533));
// unreffing stmt
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3534 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3534));
// unreffing statements
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3535 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3535));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3536 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3536));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
// line 1510
panda$collections$Array* $tmp3537 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp3538 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp3537, ((panda$core$Object*) $tmp3538));
// line 1511
org$pandalanguage$pandac$ASTNode* $tmp3539 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3539));
// unreffing stmt
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block15;
block24:;
// line 1
// line 1513
org$pandalanguage$pandac$ASTNode* $tmp3540 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3541 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3541));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3540));
*(&local5) = $tmp3540;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3540));
// line 1514
org$pandalanguage$pandac$ASTNode* $tmp3542 = *(&local5);
panda$core$Bit $tmp3543 = panda$core$Bit$init$builtin_bit($tmp3542 == NULL);
bool $tmp3544 = $tmp3543.value;
if ($tmp3544) goto block27; else goto block28;
block27:;
// line 1515
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3545 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3545));
// unreffing stmt
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3546 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3546));
// unreffing statements
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3547 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3547));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3548 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3548));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block28:;
// line 1517
panda$collections$Array* $tmp3549 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp3550 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp3549, ((panda$core$Object*) $tmp3550));
org$pandalanguage$pandac$ASTNode* $tmp3551 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3551));
// unreffing stmt
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block16;
block16:;
goto block14;
block15:;
// line 1521
org$pandalanguage$pandac$ASTNode* $tmp3552 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3553 = (panda$core$Int64) {48};
org$pandalanguage$pandac$parser$Token$nullable $tmp3554 = *(&local0);
org$pandalanguage$pandac$Position $tmp3555 = ((org$pandalanguage$pandac$parser$Token) $tmp3554.value).position;
panda$collections$Array* $tmp3556 = *(&local1);
panda$collections$ImmutableArray* $tmp3557 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3556);
panda$collections$Array* $tmp3558 = *(&local3);
panda$collections$ImmutableArray* $tmp3559 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3558);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3552, $tmp3553, $tmp3555, $tmp3557, $tmp3559);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3552));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3552));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3557));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3559));
panda$collections$Array* $tmp3560 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3560));
// unreffing statements
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3561 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3561));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3562 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3562));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp3552;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$parser$Token local4;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$parser$Token local6;
org$pandalanguage$pandac$ASTNode* local7 = NULL;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
// line 1528
panda$core$Int64 $tmp3563 = (panda$core$Int64) {39};
org$pandalanguage$pandac$parser$Token$Kind $tmp3564 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3563);
org$pandalanguage$pandac$parser$Token$nullable $tmp3565 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3564, &$s3566);
*(&local0) = $tmp3565;
// line 1529
org$pandalanguage$pandac$parser$Token$nullable $tmp3567 = *(&local0);
panda$core$Bit $tmp3568 = panda$core$Bit$init$builtin_bit(!$tmp3567.nonnull);
bool $tmp3569 = $tmp3568.value;
if ($tmp3569) goto block1; else goto block2;
block1:;
// line 1530
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1532
org$pandalanguage$pandac$ASTNode* $tmp3570 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3571 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3571));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3570));
*(&local1) = $tmp3570;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3570));
// line 1533
org$pandalanguage$pandac$ASTNode* $tmp3572 = *(&local1);
panda$core$Bit $tmp3573 = panda$core$Bit$init$builtin_bit($tmp3572 == NULL);
bool $tmp3574 = $tmp3573.value;
if ($tmp3574) goto block3; else goto block4;
block3:;
// line 1534
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3575 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3575));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1536
panda$core$Int64 $tmp3576 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp3577 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3576);
org$pandalanguage$pandac$parser$Token$nullable $tmp3578 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3577, &$s3579);
panda$core$Bit $tmp3580 = panda$core$Bit$init$builtin_bit(!$tmp3578.nonnull);
bool $tmp3581 = $tmp3580.value;
if ($tmp3581) goto block5; else goto block6;
block5:;
// line 1537
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3582 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3582));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1539
panda$collections$Array* $tmp3583 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3583);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3584 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3584));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3583));
*(&local2) = $tmp3583;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3583));
// line 1540
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3585 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3585));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
*(&local3) = ((panda$collections$Array*) NULL);
// line 1541
goto block7;
block7:;
// line 1542
org$pandalanguage$pandac$parser$Token $tmp3586 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local4) = $tmp3586;
// line 1543
org$pandalanguage$pandac$parser$Token $tmp3587 = *(&local4);
org$pandalanguage$pandac$parser$Token$Kind $tmp3588 = $tmp3587.kind;
panda$core$Int64 $tmp3589 = $tmp3588.$rawValue;
panda$core$Int64 $tmp3590 = (panda$core$Int64) {101};
panda$core$Bit $tmp3591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3589, $tmp3590);
bool $tmp3592 = $tmp3591.value;
if ($tmp3592) goto block10; else goto block11;
block10:;
// line 1545
goto block8;
block11:;
panda$core$Int64 $tmp3593 = (panda$core$Int64) {40};
panda$core$Bit $tmp3594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3589, $tmp3593);
bool $tmp3595 = $tmp3594.value;
if ($tmp3595) goto block12; else goto block13;
block12:;
// line 1547
org$pandalanguage$pandac$ASTNode* $tmp3596 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3597 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3597));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3596));
*(&local5) = $tmp3596;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3596));
// line 1548
org$pandalanguage$pandac$ASTNode* $tmp3598 = *(&local5);
panda$core$Bit $tmp3599 = panda$core$Bit$init$builtin_bit($tmp3598 == NULL);
bool $tmp3600 = $tmp3599.value;
if ($tmp3600) goto block14; else goto block15;
block14:;
// line 1549
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3601 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3601));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3602 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3602));
// unreffing other
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3603 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3603));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3604 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3604));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
// line 1551
panda$collections$Array* $tmp3605 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3606 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp3605, ((panda$core$Object*) $tmp3606));
org$pandalanguage$pandac$ASTNode* $tmp3607 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3607));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block13:;
panda$core$Int64 $tmp3608 = (panda$core$Int64) {41};
panda$core$Bit $tmp3609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3589, $tmp3608);
bool $tmp3610 = $tmp3609.value;
if ($tmp3610) goto block16; else goto block17;
block16:;
// line 1553
org$pandalanguage$pandac$parser$Token $tmp3611 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local6) = $tmp3611;
// line 1554
panda$core$Int64 $tmp3612 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3613 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3612);
org$pandalanguage$pandac$parser$Token$nullable $tmp3614 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3613, &$s3615);
panda$core$Bit $tmp3616 = panda$core$Bit$init$builtin_bit(!$tmp3614.nonnull);
bool $tmp3617 = $tmp3616.value;
if ($tmp3617) goto block18; else goto block19;
block18:;
// line 1555
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp3618 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3618));
// unreffing other
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3619 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3619));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3620 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3620));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block19:;
// line 1557
panda$collections$Array* $tmp3621 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3621);
panda$collections$Array* $tmp3622 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3622));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3621));
*(&local3) = $tmp3621;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3621));
// line 1558
goto block20;
block20:;
// line 1559
org$pandalanguage$pandac$parser$Token $tmp3623 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3624 = $tmp3623.kind;
panda$core$Int64 $tmp3625 = $tmp3624.$rawValue;
panda$core$Int64 $tmp3626 = (panda$core$Int64) {101};
panda$core$Bit $tmp3627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3625, $tmp3626);
bool $tmp3628 = $tmp3627.value;
if ($tmp3628) goto block23; else goto block24;
block23:;
// line 1561
goto block21;
block24:;
panda$core$Int64 $tmp3629 = (panda$core$Int64) {29};
panda$core$Bit $tmp3630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3625, $tmp3629);
bool $tmp3631 = $tmp3630.value;
if ($tmp3631) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp3632 = (panda$core$Int64) {30};
panda$core$Bit $tmp3633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3625, $tmp3632);
bool $tmp3634 = $tmp3633.value;
if ($tmp3634) goto block25; else goto block27;
block27:;
panda$core$Int64 $tmp3635 = (panda$core$Int64) {28};
panda$core$Bit $tmp3636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3625, $tmp3635);
bool $tmp3637 = $tmp3636.value;
if ($tmp3637) goto block25; else goto block28;
block25:;
// line 1563
org$pandalanguage$pandac$ASTNode* $tmp3638 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3639 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3639));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3638));
*(&local7) = $tmp3638;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3638));
// line 1564
org$pandalanguage$pandac$ASTNode* $tmp3640 = *(&local7);
panda$core$Bit $tmp3641 = panda$core$Bit$init$builtin_bit($tmp3640 == NULL);
bool $tmp3642 = $tmp3641.value;
if ($tmp3642) goto block29; else goto block30;
block29:;
// line 1565
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3643 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3643));
// unreffing stmt
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3644 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3644));
// unreffing other
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3645 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3645));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3646 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3646));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block30:;
// line 1567
panda$collections$Array* $tmp3647 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp3648 = *(&local7);
panda$collections$Array$add$panda$collections$Array$T($tmp3647, ((panda$core$Object*) $tmp3648));
// line 1568
org$pandalanguage$pandac$ASTNode* $tmp3649 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3649));
// unreffing stmt
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block21;
block28:;
// line 1570
org$pandalanguage$pandac$ASTNode* $tmp3650 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3651 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3651));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3650));
*(&local8) = $tmp3650;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3650));
// line 1571
org$pandalanguage$pandac$ASTNode* $tmp3652 = *(&local8);
panda$core$Bit $tmp3653 = panda$core$Bit$init$builtin_bit($tmp3652 == NULL);
bool $tmp3654 = $tmp3653.value;
if ($tmp3654) goto block31; else goto block32;
block31:;
// line 1572
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3655 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3655));
// unreffing stmt
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3656 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3656));
// unreffing other
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3657 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3657));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3658 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3658));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block32:;
// line 1574
panda$collections$Array* $tmp3659 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp3660 = *(&local8);
panda$collections$Array$add$panda$collections$Array$T($tmp3659, ((panda$core$Object*) $tmp3660));
goto block22;
block22:;
org$pandalanguage$pandac$ASTNode* $tmp3661 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3661));
// unreffing stmt
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block21:;
// line 1577
goto block8;
block17:;
// line 1579
org$pandalanguage$pandac$parser$Token $tmp3662 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1580
org$pandalanguage$pandac$parser$Token $tmp3663 = *(&local4);
org$pandalanguage$pandac$parser$Token $tmp3664 = *(&local4);
panda$core$String* $tmp3665 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp3664);
panda$core$String* $tmp3666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3667, $tmp3665);
panda$core$String* $tmp3668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3666, &$s3669);
panda$core$String* $tmp3670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3671, $tmp3668);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3663, $tmp3670);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3665));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3666));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3668));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3670));
// line 1582
goto block8;
block9:;
goto block7;
block8:;
// line 1585
panda$core$Int64 $tmp3672 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp3673 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3672);
org$pandalanguage$pandac$parser$Token$nullable $tmp3674 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3673, &$s3675);
panda$core$Bit $tmp3676 = panda$core$Bit$init$builtin_bit(!$tmp3674.nonnull);
bool $tmp3677 = $tmp3676.value;
if ($tmp3677) goto block33; else goto block34;
block33:;
// line 1586
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp3678 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3678));
// unreffing other
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3679 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3679));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3680 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3680));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block34:;
// line 1588
panda$collections$Array* $tmp3681 = *(&local3);
panda$core$Bit $tmp3682 = panda$core$Bit$init$builtin_bit($tmp3681 != NULL);
bool $tmp3683 = $tmp3682.value;
if ($tmp3683) goto block35; else goto block36;
block35:;
// line 1589
org$pandalanguage$pandac$ASTNode* $tmp3684 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3685 = (panda$core$Int64) {25};
org$pandalanguage$pandac$parser$Token$nullable $tmp3686 = *(&local0);
org$pandalanguage$pandac$Position $tmp3687 = ((org$pandalanguage$pandac$parser$Token) $tmp3686.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3688 = *(&local1);
panda$collections$Array* $tmp3689 = *(&local2);
panda$collections$ImmutableArray* $tmp3690 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3689);
panda$collections$Array* $tmp3691 = *(&local3);
panda$collections$ImmutableArray* $tmp3692 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3691);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3684, $tmp3685, $tmp3687, $tmp3688, $tmp3690, $tmp3692);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3684));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3684));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3690));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3692));
panda$collections$Array* $tmp3693 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3693));
// unreffing other
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3694 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3694));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3695 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3695));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3684;
block36:;
// line 1591
org$pandalanguage$pandac$ASTNode* $tmp3696 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3697 = (panda$core$Int64) {25};
org$pandalanguage$pandac$parser$Token$nullable $tmp3698 = *(&local0);
org$pandalanguage$pandac$Position $tmp3699 = ((org$pandalanguage$pandac$parser$Token) $tmp3698.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3700 = *(&local1);
panda$collections$Array* $tmp3701 = *(&local2);
panda$collections$ImmutableArray* $tmp3702 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3701);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3696, $tmp3697, $tmp3699, $tmp3700, $tmp3702, ((panda$collections$ImmutableArray*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3696));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3696));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3702));
panda$collections$Array* $tmp3703 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3703));
// unreffing other
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3704 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3704));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3705 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3705));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3696;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1598
panda$core$Int64 $tmp3706 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp3707 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3706);
org$pandalanguage$pandac$parser$Token$nullable $tmp3708 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3707, &$s3709);
*(&local0) = $tmp3708;
// line 1599
org$pandalanguage$pandac$parser$Token$nullable $tmp3710 = *(&local0);
panda$core$Bit $tmp3711 = panda$core$Bit$init$builtin_bit(!$tmp3710.nonnull);
bool $tmp3712 = $tmp3711.value;
if ($tmp3712) goto block1; else goto block2;
block1:;
// line 1600
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 1602
panda$collections$Array* $tmp3713 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3713);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3714 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3714));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3713));
*(&local1) = $tmp3713;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3713));
// line 1603
goto block3;
block3:;
// line 1604
org$pandalanguage$pandac$parser$Token $tmp3715 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3716 = $tmp3715.kind;
panda$core$Int64 $tmp3717 = $tmp3716.$rawValue;
panda$core$Int64 $tmp3718 = (panda$core$Int64) {101};
panda$core$Bit $tmp3719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3717, $tmp3718);
bool $tmp3720 = $tmp3719.value;
if ($tmp3720) goto block6; else goto block7;
block6:;
// line 1606
org$pandalanguage$pandac$parser$Token $tmp3721 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1607
goto block4;
block7:;
panda$core$Int64 $tmp3722 = (panda$core$Int64) {29};
panda$core$Bit $tmp3723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3717, $tmp3722);
bool $tmp3724 = $tmp3723.value;
if ($tmp3724) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3725 = (panda$core$Int64) {30};
panda$core$Bit $tmp3726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3717, $tmp3725);
bool $tmp3727 = $tmp3726.value;
if ($tmp3727) goto block8; else goto block10;
block10:;
panda$core$Int64 $tmp3728 = (panda$core$Int64) {28};
panda$core$Bit $tmp3729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3717, $tmp3728);
bool $tmp3730 = $tmp3729.value;
if ($tmp3730) goto block8; else goto block11;
block8:;
// line 1609
org$pandalanguage$pandac$ASTNode* $tmp3731 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3732 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3732));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3731));
*(&local2) = $tmp3731;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3731));
// line 1610
org$pandalanguage$pandac$ASTNode* $tmp3733 = *(&local2);
panda$core$Bit $tmp3734 = panda$core$Bit$init$builtin_bit($tmp3733 == NULL);
bool $tmp3735 = $tmp3734.value;
if ($tmp3735) goto block12; else goto block13;
block12:;
// line 1611
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3736 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3736));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3737 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3737));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block13:;
// line 1613
panda$core$Int64 $tmp3738 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp3739 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3738);
org$pandalanguage$pandac$parser$Token$nullable $tmp3740 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3739, &$s3741);
panda$core$Bit $tmp3742 = panda$core$Bit$init$builtin_bit(!$tmp3740.nonnull);
bool $tmp3743 = $tmp3742.value;
if ($tmp3743) goto block14; else goto block15;
block14:;
// line 1614
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3744 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3744));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3745 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3745));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block15:;
// line 1616
panda$collections$Array* $tmp3746 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3747 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3746, ((panda$core$Object*) $tmp3747));
// line 1617
org$pandalanguage$pandac$ASTNode* $tmp3748 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3748));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block11:;
// line 1619
org$pandalanguage$pandac$ASTNode* $tmp3749 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3750 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3750));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3749));
*(&local3) = $tmp3749;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3749));
// line 1620
org$pandalanguage$pandac$ASTNode* $tmp3751 = *(&local3);
panda$core$Bit $tmp3752 = panda$core$Bit$init$builtin_bit($tmp3751 == NULL);
bool $tmp3753 = $tmp3752.value;
if ($tmp3753) goto block16; else goto block17;
block16:;
// line 1621
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3754 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3754));
// unreffing stmt
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3755 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3755));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block17:;
// line 1623
panda$collections$Array* $tmp3756 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3757 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3756, ((panda$core$Object*) $tmp3757));
goto block5;
block5:;
org$pandalanguage$pandac$ASTNode* $tmp3758 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3758));
// unreffing stmt
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block4:;
// line 1626
panda$collections$Array* $tmp3759 = *(&local1);
panda$collections$ImmutableArray* $tmp3760 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3759);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3760));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3760));
panda$collections$Array* $tmp3761 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3761));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp3760;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$ImmutableArray* local0 = NULL;
// line 1633
panda$collections$ImmutableArray* $tmp3762 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3763 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3763));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3762));
*(&local0) = $tmp3762;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3762));
// line 1634
panda$collections$ImmutableArray* $tmp3764 = *(&local0);
panda$core$Bit $tmp3765 = panda$core$Bit$init$builtin_bit($tmp3764 == NULL);
bool $tmp3766 = $tmp3765.value;
if ($tmp3766) goto block1; else goto block2;
block1:;
// line 1635
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp3767 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3767));
// unreffing statements
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1637
org$pandalanguage$pandac$ASTNode* $tmp3768 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3769 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Position $tmp3770 = org$pandalanguage$pandac$Position$init();
panda$collections$ImmutableArray* $tmp3771 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3768, $tmp3769, $tmp3770, $tmp3771);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3768));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3768));
panda$collections$ImmutableArray* $tmp3772 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3772));
// unreffing statements
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
return $tmp3768;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1644
org$pandalanguage$pandac$ASTNode* $tmp3773 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3774 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3774));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3773));
*(&local0) = $tmp3773;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3773));
// line 1645
org$pandalanguage$pandac$ASTNode* $tmp3775 = *(&local0);
panda$core$Bit $tmp3776 = panda$core$Bit$init$builtin_bit($tmp3775 == NULL);
bool $tmp3777 = $tmp3776.value;
if ($tmp3777) goto block1; else goto block2;
block1:;
// line 1646
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3778 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3778));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1648
org$pandalanguage$pandac$parser$Token $tmp3779 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3780 = $tmp3779.kind;
panda$core$Int64 $tmp3781 = $tmp3780.$rawValue;
panda$core$Int64 $tmp3782 = (panda$core$Int64) {74};
panda$core$Bit $tmp3783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3782);
bool $tmp3784 = $tmp3783.value;
if ($tmp3784) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp3785 = (panda$core$Int64) {75};
panda$core$Bit $tmp3786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3785);
bool $tmp3787 = $tmp3786.value;
if ($tmp3787) goto block4; else goto block6;
block6:;
panda$core$Int64 $tmp3788 = (panda$core$Int64) {76};
panda$core$Bit $tmp3789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3788);
bool $tmp3790 = $tmp3789.value;
if ($tmp3790) goto block4; else goto block7;
block7:;
panda$core$Int64 $tmp3791 = (panda$core$Int64) {77};
panda$core$Bit $tmp3792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3791);
bool $tmp3793 = $tmp3792.value;
if ($tmp3793) goto block4; else goto block8;
block8:;
panda$core$Int64 $tmp3794 = (panda$core$Int64) {78};
panda$core$Bit $tmp3795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3794);
bool $tmp3796 = $tmp3795.value;
if ($tmp3796) goto block4; else goto block9;
block9:;
panda$core$Int64 $tmp3797 = (panda$core$Int64) {79};
panda$core$Bit $tmp3798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3797);
bool $tmp3799 = $tmp3798.value;
if ($tmp3799) goto block4; else goto block10;
block10:;
panda$core$Int64 $tmp3800 = (panda$core$Int64) {80};
panda$core$Bit $tmp3801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3800);
bool $tmp3802 = $tmp3801.value;
if ($tmp3802) goto block4; else goto block11;
block11:;
panda$core$Int64 $tmp3803 = (panda$core$Int64) {81};
panda$core$Bit $tmp3804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3803);
bool $tmp3805 = $tmp3804.value;
if ($tmp3805) goto block4; else goto block12;
block12:;
panda$core$Int64 $tmp3806 = (panda$core$Int64) {82};
panda$core$Bit $tmp3807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3806);
bool $tmp3808 = $tmp3807.value;
if ($tmp3808) goto block4; else goto block13;
block13:;
panda$core$Int64 $tmp3809 = (panda$core$Int64) {83};
panda$core$Bit $tmp3810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3809);
bool $tmp3811 = $tmp3810.value;
if ($tmp3811) goto block4; else goto block14;
block14:;
panda$core$Int64 $tmp3812 = (panda$core$Int64) {84};
panda$core$Bit $tmp3813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3812);
bool $tmp3814 = $tmp3813.value;
if ($tmp3814) goto block4; else goto block15;
block15:;
panda$core$Int64 $tmp3815 = (panda$core$Int64) {85};
panda$core$Bit $tmp3816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3815);
bool $tmp3817 = $tmp3816.value;
if ($tmp3817) goto block4; else goto block16;
block16:;
panda$core$Int64 $tmp3818 = (panda$core$Int64) {86};
panda$core$Bit $tmp3819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3818);
bool $tmp3820 = $tmp3819.value;
if ($tmp3820) goto block4; else goto block17;
block17:;
panda$core$Int64 $tmp3821 = (panda$core$Int64) {87};
panda$core$Bit $tmp3822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3821);
bool $tmp3823 = $tmp3822.value;
if ($tmp3823) goto block4; else goto block18;
block18:;
panda$core$Int64 $tmp3824 = (panda$core$Int64) {88};
panda$core$Bit $tmp3825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3824);
bool $tmp3826 = $tmp3825.value;
if ($tmp3826) goto block4; else goto block19;
block19:;
panda$core$Int64 $tmp3827 = (panda$core$Int64) {89};
panda$core$Bit $tmp3828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3827);
bool $tmp3829 = $tmp3828.value;
if ($tmp3829) goto block4; else goto block20;
block4:;
// line 1654
org$pandalanguage$pandac$parser$Token $tmp3830 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3830;
// line 1655
org$pandalanguage$pandac$ASTNode* $tmp3831 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3832 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3832));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3831));
*(&local2) = $tmp3831;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3831));
// line 1656
org$pandalanguage$pandac$ASTNode* $tmp3833 = *(&local2);
panda$core$Bit $tmp3834 = panda$core$Bit$init$builtin_bit($tmp3833 == NULL);
bool $tmp3835 = $tmp3834.value;
if ($tmp3835) goto block21; else goto block22;
block21:;
// line 1657
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3836 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3836));
// unreffing rvalue
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3837 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3837));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1659
org$pandalanguage$pandac$ASTNode* $tmp3838 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3839 = (panda$core$Int64) {4};
org$pandalanguage$pandac$ASTNode* $tmp3840 = *(&local0);
$fn3842 $tmp3841 = ($fn3842) $tmp3840->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3843 = $tmp3841($tmp3840);
org$pandalanguage$pandac$ASTNode* $tmp3844 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3845 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3846 = $tmp3845.kind;
org$pandalanguage$pandac$ASTNode* $tmp3847 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3838, $tmp3839, $tmp3843, $tmp3844, $tmp3846, $tmp3847);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3838));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3838));
org$pandalanguage$pandac$ASTNode* $tmp3848 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3848));
// unreffing rvalue
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3849 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3849));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3838;
block20:;
panda$core$Int64 $tmp3850 = (panda$core$Int64) {59};
panda$core$Bit $tmp3851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3781, $tmp3850);
bool $tmp3852 = $tmp3851.value;
if ($tmp3852) goto block23; else goto block24;
block23:;
// line 1661
org$pandalanguage$pandac$parser$Token $tmp3853 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3853, &$s3854);
// line 1662
org$pandalanguage$pandac$parser$Token $tmp3855 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp3855;
// line 1663
org$pandalanguage$pandac$ASTNode* $tmp3856 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3857 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3857));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3856));
*(&local4) = $tmp3856;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3856));
// line 1664
org$pandalanguage$pandac$ASTNode* $tmp3858 = *(&local4);
panda$core$Bit $tmp3859 = panda$core$Bit$init$builtin_bit($tmp3858 == NULL);
bool $tmp3860 = $tmp3859.value;
if ($tmp3860) goto block25; else goto block26;
block25:;
// line 1665
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3861 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3861));
// unreffing rvalue
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3862 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3862));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
// line 1667
org$pandalanguage$pandac$ASTNode* $tmp3863 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3864 = (panda$core$Int64) {4};
org$pandalanguage$pandac$ASTNode* $tmp3865 = *(&local0);
$fn3867 $tmp3866 = ($fn3867) $tmp3865->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3868 = $tmp3866($tmp3865);
org$pandalanguage$pandac$ASTNode* $tmp3869 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3870 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp3871 = $tmp3870.kind;
org$pandalanguage$pandac$ASTNode* $tmp3872 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3863, $tmp3864, $tmp3868, $tmp3869, $tmp3871, $tmp3872);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3863));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3863));
org$pandalanguage$pandac$ASTNode* $tmp3873 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3873));
// unreffing rvalue
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3874 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3874));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3863;
block24:;
// line 1669
org$pandalanguage$pandac$ASTNode* $tmp3875 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3875));
org$pandalanguage$pandac$ASTNode* $tmp3876 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3876));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3875;
block3:;
panda$core$Bit $tmp3877 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3878 = $tmp3877.value;
if ($tmp3878) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp3879 = (panda$core$Int64) {1643};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3880, $tmp3879, &$s3881);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1677
org$pandalanguage$pandac$ASTNode* $tmp3882 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3883 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3883));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3882));
*(&local0) = $tmp3882;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3882));
// line 1678
org$pandalanguage$pandac$ASTNode* $tmp3884 = *(&local0);
panda$core$Bit $tmp3885 = panda$core$Bit$init$builtin_bit($tmp3884 == NULL);
bool $tmp3886 = $tmp3885.value;
if ($tmp3886) goto block1; else goto block2;
block1:;
// line 1679
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3887 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3887));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1681
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1682
panda$core$Int64 $tmp3888 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp3889 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3888);
org$pandalanguage$pandac$parser$Token$nullable $tmp3890 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3889);
panda$core$Bit $tmp3891 = panda$core$Bit$init$builtin_bit($tmp3890.nonnull);
bool $tmp3892 = $tmp3891.value;
if ($tmp3892) goto block3; else goto block5;
block3:;
// line 1683
org$pandalanguage$pandac$ASTNode* $tmp3893 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3894 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3894));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3893));
*(&local1) = $tmp3893;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3893));
// line 1684
org$pandalanguage$pandac$ASTNode* $tmp3895 = *(&local1);
panda$core$Bit $tmp3896 = panda$core$Bit$init$builtin_bit($tmp3895 == NULL);
bool $tmp3897 = $tmp3896.value;
if ($tmp3897) goto block6; else goto block7;
block6:;
// line 1685
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3898 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3898));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3899 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3899));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1688
org$pandalanguage$pandac$parser$Token $tmp3900 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3901 = $tmp3900.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3902;
$tmp3902 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3902->value = $tmp3901;
panda$core$Int64 $tmp3903 = (panda$core$Int64) {59};
org$pandalanguage$pandac$parser$Token$Kind $tmp3904 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3903);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3905;
$tmp3905 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3905->value = $tmp3904;
ITable* $tmp3906 = ((panda$core$Equatable*) $tmp3902)->$class->itable;
while ($tmp3906->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3906 = $tmp3906->next;
}
$fn3908 $tmp3907 = $tmp3906->methods[0];
panda$core$Bit $tmp3909 = $tmp3907(((panda$core$Equatable*) $tmp3902), ((panda$core$Equatable*) $tmp3905));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3902)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3905)));
bool $tmp3910 = $tmp3909.value;
if ($tmp3910) goto block8; else goto block10;
block8:;
// line 1689
org$pandalanguage$pandac$parser$Token $tmp3911 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3911, &$s3912);
// line 1690
org$pandalanguage$pandac$ASTNode* $tmp3913 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp3914 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3914));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3913));
*(&local1) = $tmp3913;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3913));
// line 1691
org$pandalanguage$pandac$ASTNode* $tmp3915 = *(&local1);
panda$core$Bit $tmp3916 = panda$core$Bit$init$builtin_bit($tmp3915 == NULL);
bool $tmp3917 = $tmp3916.value;
if ($tmp3917) goto block11; else goto block12;
block11:;
// line 1692
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3918 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3918));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3919 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3919));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 1696
org$pandalanguage$pandac$ASTNode* $tmp3920 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3920));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
goto block4;
block4:;
// line 1698
org$pandalanguage$pandac$ASTNode* $tmp3921 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3922 = (panda$core$Int64) {13};
org$pandalanguage$pandac$ASTNode* $tmp3923 = *(&local0);
$fn3925 $tmp3924 = ($fn3925) $tmp3923->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3926 = $tmp3924($tmp3923);
org$pandalanguage$pandac$ASTNode* $tmp3927 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp3928 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3921, $tmp3922, $tmp3926, $tmp3927, $tmp3928);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3921));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3921));
org$pandalanguage$pandac$ASTNode* $tmp3929 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3929));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3930 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3930));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3921;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$Variable$Kind local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1705
org$pandalanguage$pandac$parser$Token $tmp3931 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp3931;
// line 1706
// line 1707
org$pandalanguage$pandac$parser$Token $tmp3932 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3933 = $tmp3932.kind;
panda$core$Int64 $tmp3934 = $tmp3933.$rawValue;
panda$core$Int64 $tmp3935 = (panda$core$Int64) {24};
panda$core$Bit $tmp3936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3934, $tmp3935);
bool $tmp3937 = $tmp3936.value;
if ($tmp3937) goto block2; else goto block3;
block2:;
// line 1709
panda$core$Int64 $tmp3938 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Variable$Kind $tmp3939 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3938);
*(&local1) = $tmp3939;
goto block1;
block3:;
panda$core$Int64 $tmp3940 = (panda$core$Int64) {25};
panda$core$Bit $tmp3941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3934, $tmp3940);
bool $tmp3942 = $tmp3941.value;
if ($tmp3942) goto block4; else goto block5;
block4:;
// line 1711
panda$core$Int64 $tmp3943 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp3944 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3943);
*(&local1) = $tmp3944;
goto block1;
block5:;
panda$core$Int64 $tmp3945 = (panda$core$Int64) {26};
panda$core$Bit $tmp3946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3934, $tmp3945);
bool $tmp3947 = $tmp3946.value;
if ($tmp3947) goto block6; else goto block7;
block6:;
// line 1713
panda$core$Int64 $tmp3948 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Variable$Kind $tmp3949 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3948);
*(&local1) = $tmp3949;
goto block1;
block7:;
panda$core$Int64 $tmp3950 = (panda$core$Int64) {27};
panda$core$Bit $tmp3951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3934, $tmp3950);
bool $tmp3952 = $tmp3951.value;
if ($tmp3952) goto block8; else goto block9;
block8:;
// line 1715
panda$core$Int64 $tmp3953 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Variable$Kind $tmp3954 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3953);
*(&local1) = $tmp3954;
goto block1;
block9:;
// line 1717
org$pandalanguage$pandac$parser$Token $tmp3955 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3955, &$s3956);
goto block1;
block1:;
// line 1719
panda$collections$Array* $tmp3957 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3957);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3958 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3958));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3957));
*(&local2) = $tmp3957;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3957));
// line 1720
org$pandalanguage$pandac$ASTNode* $tmp3959 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3960 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3960));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3959));
*(&local3) = $tmp3959;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3959));
// line 1721
org$pandalanguage$pandac$ASTNode* $tmp3961 = *(&local3);
panda$core$Bit $tmp3962 = panda$core$Bit$init$builtin_bit($tmp3961 == NULL);
bool $tmp3963 = $tmp3962.value;
if ($tmp3963) goto block10; else goto block11;
block10:;
// line 1722
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3964 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3964));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3965 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3965));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1724
panda$collections$Array* $tmp3966 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3967 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3966, ((panda$core$Object*) $tmp3967));
// line 1725
goto block12;
block12:;
panda$core$Int64 $tmp3968 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3969 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3968);
org$pandalanguage$pandac$parser$Token$nullable $tmp3970 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3969);
panda$core$Bit $tmp3971 = panda$core$Bit$init$builtin_bit($tmp3970.nonnull);
bool $tmp3972 = $tmp3971.value;
if ($tmp3972) goto block13; else goto block14;
block13:;
// line 1726
org$pandalanguage$pandac$ASTNode* $tmp3973 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3974 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3974));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3973));
*(&local4) = $tmp3973;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3973));
// line 1727
org$pandalanguage$pandac$ASTNode* $tmp3975 = *(&local4);
panda$core$Bit $tmp3976 = panda$core$Bit$init$builtin_bit($tmp3975 == NULL);
bool $tmp3977 = $tmp3976.value;
if ($tmp3977) goto block15; else goto block16;
block15:;
// line 1728
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3978 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3978));
// unreffing decl
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3979 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3979));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3980 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3980));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1730
panda$collections$Array* $tmp3981 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3982 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp3981, ((panda$core$Object*) $tmp3982));
org$pandalanguage$pandac$ASTNode* $tmp3983 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3983));
// unreffing decl
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block12;
block14:;
// line 1732
org$pandalanguage$pandac$ASTNode* $tmp3984 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3985 = (panda$core$Int64) {47};
org$pandalanguage$pandac$parser$Token $tmp3986 = *(&local0);
org$pandalanguage$pandac$Position $tmp3987 = $tmp3986.position;
org$pandalanguage$pandac$Variable$Kind $tmp3988 = *(&local1);
panda$collections$Array* $tmp3989 = *(&local2);
panda$collections$ImmutableArray* $tmp3990 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp3989);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3984, $tmp3985, $tmp3987, $tmp3988, $tmp3990);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3984));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3984));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3990));
org$pandalanguage$pandac$ASTNode* $tmp3991 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3991));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3992 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3992));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return $tmp3984;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1739
panda$core$Int64 $tmp3993 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp3994 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3993);
org$pandalanguage$pandac$parser$Token$nullable $tmp3995 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3994, &$s3996);
*(&local0) = $tmp3995;
// line 1740
org$pandalanguage$pandac$parser$Token$nullable $tmp3997 = *(&local0);
panda$core$Bit $tmp3998 = panda$core$Bit$init$builtin_bit(!$tmp3997.nonnull);
bool $tmp3999 = $tmp3998.value;
if ($tmp3999) goto block1; else goto block2;
block1:;
// line 1741
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1743
panda$core$Int64 $tmp4000 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4001 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4000);
org$pandalanguage$pandac$parser$Token$nullable $tmp4002 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4001, &$s4003);
panda$core$Bit $tmp4004 = panda$core$Bit$init$builtin_bit(!$tmp4002.nonnull);
bool $tmp4005 = $tmp4004.value;
if ($tmp4005) goto block3; else goto block4;
block3:;
// line 1744
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1746
panda$collections$Stack** $tmp4006 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4007 = *$tmp4006;
panda$core$Bit $tmp4008 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp4009;
$tmp4009 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp4009->value = $tmp4008;
panda$collections$Stack$push$panda$collections$Stack$T($tmp4007, ((panda$core$Object*) $tmp4009));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4009));
// line 1747
org$pandalanguage$pandac$ASTNode* $tmp4010 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4011 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp4012 = *(&local0);
org$pandalanguage$pandac$Position $tmp4013 = ((org$pandalanguage$pandac$parser$Token) $tmp4012.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4014 = *(&local0);
panda$core$String* $tmp4015 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4014.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4010, $tmp4011, $tmp4013, $tmp4015);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4016 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4016));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4010));
*(&local1) = $tmp4010;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4010));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4015));
// line 1748
panda$collections$Array* $tmp4017 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4017);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4018 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4018));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4017));
*(&local2) = $tmp4017;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4017));
// line 1749
panda$core$Int64 $tmp4019 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4020 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4019);
org$pandalanguage$pandac$parser$Token$nullable $tmp4021 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4020);
panda$core$Bit $tmp4022 = panda$core$Bit$init$builtin_bit(!$tmp4021.nonnull);
bool $tmp4023 = $tmp4022.value;
if ($tmp4023) goto block5; else goto block6;
block5:;
// line 1750
org$pandalanguage$pandac$ASTNode* $tmp4024 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4025 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4025));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4024));
*(&local3) = $tmp4024;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4024));
// line 1751
org$pandalanguage$pandac$ASTNode* $tmp4026 = *(&local3);
panda$core$Bit $tmp4027 = panda$core$Bit$init$builtin_bit($tmp4026 == NULL);
bool $tmp4028 = $tmp4027.value;
if ($tmp4028) goto block7; else goto block8;
block7:;
// line 1752
panda$collections$Stack** $tmp4029 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4030 = *$tmp4029;
panda$core$Object* $tmp4031 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp4030);
panda$core$Panda$unref$panda$core$Object$Q($tmp4031);
// line 1753
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4032 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4032));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4033 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4033));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4034 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4034));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1755
panda$collections$Array* $tmp4035 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4036 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp4035, ((panda$core$Object*) $tmp4036));
// line 1756
goto block9;
block9:;
panda$core$Int64 $tmp4037 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4038 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4037);
org$pandalanguage$pandac$parser$Token$nullable $tmp4039 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4038);
panda$core$Bit $tmp4040 = panda$core$Bit$init$builtin_bit($tmp4039.nonnull);
bool $tmp4041 = $tmp4040.value;
if ($tmp4041) goto block10; else goto block11;
block10:;
// line 1757
org$pandalanguage$pandac$ASTNode* $tmp4042 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4043 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4043));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4042));
*(&local3) = $tmp4042;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4042));
// line 1758
org$pandalanguage$pandac$ASTNode* $tmp4044 = *(&local3);
panda$core$Bit $tmp4045 = panda$core$Bit$init$builtin_bit($tmp4044 == NULL);
bool $tmp4046 = $tmp4045.value;
if ($tmp4046) goto block12; else goto block13;
block12:;
// line 1759
panda$collections$Stack** $tmp4047 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4048 = *$tmp4047;
panda$core$Object* $tmp4049 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp4048);
panda$core$Panda$unref$panda$core$Object$Q($tmp4049);
// line 1760
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4050 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4050));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4051 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4051));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4052 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4052));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 1762
panda$collections$Array* $tmp4053 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4054 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp4053, ((panda$core$Object*) $tmp4054));
goto block9;
block11:;
// line 1764
panda$core$Int64 $tmp4055 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4056 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4055);
org$pandalanguage$pandac$parser$Token$nullable $tmp4057 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4056, &$s4058);
panda$core$Bit $tmp4059 = panda$core$Bit$init$builtin_bit(!$tmp4057.nonnull);
bool $tmp4060 = $tmp4059.value;
if ($tmp4060) goto block14; else goto block15;
block14:;
// line 1765
panda$collections$Stack** $tmp4061 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4062 = *$tmp4061;
panda$core$Object* $tmp4063 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp4062);
panda$core$Panda$unref$panda$core$Object$Q($tmp4063);
// line 1766
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4064 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4064));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4065 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4065));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4066 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4066));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
org$pandalanguage$pandac$ASTNode* $tmp4067 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4067));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 1769
panda$collections$Stack** $tmp4068 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4069 = *$tmp4068;
panda$core$Object* $tmp4070 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp4069);
panda$core$Panda$unref$panda$core$Object$Q($tmp4070);
// line 1770
org$pandalanguage$pandac$ASTNode* $tmp4071 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4072 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token$nullable $tmp4073 = *(&local0);
org$pandalanguage$pandac$Position $tmp4074 = ((org$pandalanguage$pandac$parser$Token) $tmp4073.value).position;
org$pandalanguage$pandac$ASTNode* $tmp4075 = *(&local1);
panda$collections$Array* $tmp4076 = *(&local2);
panda$collections$ImmutableArray* $tmp4077 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4076);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4071, $tmp4072, $tmp4074, $tmp4075, $tmp4077);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4071));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4071));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4077));
panda$collections$Array* $tmp4078 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4078));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4079 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4079));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp4071;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1777
panda$core$Int64 $tmp4080 = (panda$core$Int64) {29};
org$pandalanguage$pandac$parser$Token$Kind $tmp4081 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4080);
org$pandalanguage$pandac$parser$Token$nullable $tmp4082 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4081, &$s4083);
*(&local0) = $tmp4082;
// line 1778
org$pandalanguage$pandac$parser$Token$nullable $tmp4084 = *(&local0);
panda$core$Bit $tmp4085 = panda$core$Bit$init$builtin_bit(!$tmp4084.nonnull);
bool $tmp4086 = $tmp4085.value;
if ($tmp4086) goto block1; else goto block2;
block1:;
// line 1779
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1781
panda$core$Int64 $tmp4087 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4088 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4087);
org$pandalanguage$pandac$parser$Token$nullable $tmp4089 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4088);
*(&local1) = $tmp4089;
// line 1782
org$pandalanguage$pandac$parser$Token$nullable $tmp4090 = *(&local1);
panda$core$Bit $tmp4091 = panda$core$Bit$init$builtin_bit($tmp4090.nonnull);
bool $tmp4092 = $tmp4091.value;
if ($tmp4092) goto block3; else goto block4;
block3:;
// line 1783
org$pandalanguage$pandac$ASTNode* $tmp4093 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4094 = (panda$core$Int64) {7};
org$pandalanguage$pandac$parser$Token$nullable $tmp4095 = *(&local0);
org$pandalanguage$pandac$Position $tmp4096 = ((org$pandalanguage$pandac$parser$Token) $tmp4095.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4097 = *(&local1);
panda$core$String* $tmp4098 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4097.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4093, $tmp4094, $tmp4096, $tmp4098);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4093));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4093));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4098));
return $tmp4093;
block4:;
// line 1785
org$pandalanguage$pandac$ASTNode* $tmp4099 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4100 = (panda$core$Int64) {7};
org$pandalanguage$pandac$parser$Token$nullable $tmp4101 = *(&local0);
org$pandalanguage$pandac$Position $tmp4102 = ((org$pandalanguage$pandac$parser$Token) $tmp4101.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4099, $tmp4100, $tmp4102, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4099));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4099));
return $tmp4099;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1792
panda$core$Int64 $tmp4103 = (panda$core$Int64) {30};
org$pandalanguage$pandac$parser$Token$Kind $tmp4104 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4103);
org$pandalanguage$pandac$parser$Token$nullable $tmp4105 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4104, &$s4106);
*(&local0) = $tmp4105;
// line 1793
org$pandalanguage$pandac$parser$Token$nullable $tmp4107 = *(&local0);
panda$core$Bit $tmp4108 = panda$core$Bit$init$builtin_bit(!$tmp4107.nonnull);
bool $tmp4109 = $tmp4108.value;
if ($tmp4109) goto block1; else goto block2;
block1:;
// line 1794
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1796
panda$core$Int64 $tmp4110 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4111 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4110);
org$pandalanguage$pandac$parser$Token$nullable $tmp4112 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4111);
*(&local1) = $tmp4112;
// line 1797
org$pandalanguage$pandac$parser$Token$nullable $tmp4113 = *(&local1);
panda$core$Bit $tmp4114 = panda$core$Bit$init$builtin_bit($tmp4113.nonnull);
bool $tmp4115 = $tmp4114.value;
if ($tmp4115) goto block3; else goto block4;
block3:;
// line 1798
org$pandalanguage$pandac$ASTNode* $tmp4116 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4117 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp4118 = *(&local0);
org$pandalanguage$pandac$Position $tmp4119 = ((org$pandalanguage$pandac$parser$Token) $tmp4118.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4120 = *(&local1);
panda$core$String* $tmp4121 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4120.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4116, $tmp4117, $tmp4119, $tmp4121);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4116));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4116));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4121));
return $tmp4116;
block4:;
// line 1800
org$pandalanguage$pandac$ASTNode* $tmp4122 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4123 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp4124 = *(&local0);
org$pandalanguage$pandac$Position $tmp4125 = ((org$pandalanguage$pandac$parser$Token) $tmp4124.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4122, $tmp4123, $tmp4125, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4122));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4122));
return $tmp4122;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1807
panda$core$Int64 $tmp4126 = (panda$core$Int64) {28};
org$pandalanguage$pandac$parser$Token$Kind $tmp4127 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4126);
org$pandalanguage$pandac$parser$Token$nullable $tmp4128 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4127, &$s4129);
*(&local0) = $tmp4128;
// line 1808
org$pandalanguage$pandac$parser$Token$nullable $tmp4130 = *(&local0);
panda$core$Bit $tmp4131 = panda$core$Bit$init$builtin_bit(!$tmp4130.nonnull);
bool $tmp4132 = $tmp4131.value;
if ($tmp4132) goto block1; else goto block2;
block1:;
// line 1809
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1811
org$pandalanguage$pandac$parser$Token $tmp4133 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4134 = $tmp4133.kind;
panda$core$Int64 $tmp4135 = $tmp4134.$rawValue;
panda$core$Int64 $tmp4136 = (panda$core$Int64) {101};
panda$core$Bit $tmp4137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4135, $tmp4136);
bool $tmp4138 = $tmp4137.value;
if ($tmp4138) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp4139 = (panda$core$Int64) {40};
panda$core$Bit $tmp4140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4135, $tmp4139);
bool $tmp4141 = $tmp4140.value;
if ($tmp4141) goto block4; else goto block6;
block6:;
panda$core$Int64 $tmp4142 = (panda$core$Int64) {41};
panda$core$Bit $tmp4143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4135, $tmp4142);
bool $tmp4144 = $tmp4143.value;
if ($tmp4144) goto block4; else goto block7;
block4:;
// line 1813
org$pandalanguage$pandac$ASTNode* $tmp4145 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4146 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$nullable $tmp4147 = *(&local0);
org$pandalanguage$pandac$Position $tmp4148 = ((org$pandalanguage$pandac$parser$Token) $tmp4147.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4145, $tmp4146, $tmp4148, ((org$pandalanguage$pandac$ASTNode*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4145));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4145));
return $tmp4145;
block7:;
// line 1815
panda$collections$Array* $tmp4149 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4149);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4150 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4150));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4149));
*(&local1) = $tmp4149;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4149));
// line 1816
org$pandalanguage$pandac$ASTNode* $tmp4151 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4152 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4152));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4151));
*(&local2) = $tmp4151;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4151));
// line 1817
org$pandalanguage$pandac$ASTNode* $tmp4153 = *(&local2);
panda$core$Bit $tmp4154 = panda$core$Bit$init$builtin_bit($tmp4153 == NULL);
bool $tmp4155 = $tmp4154.value;
if ($tmp4155) goto block8; else goto block9;
block8:;
// line 1818
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4156 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4156));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4157 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4157));
// unreffing children
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 1820
panda$collections$Array* $tmp4158 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4159 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4158, ((panda$core$Object*) $tmp4159));
// line 1821
org$pandalanguage$pandac$ASTNode* $tmp4160 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4161 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$nullable $tmp4162 = *(&local0);
org$pandalanguage$pandac$Position $tmp4163 = ((org$pandalanguage$pandac$parser$Token) $tmp4162.value).position;
org$pandalanguage$pandac$ASTNode* $tmp4164 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4160, $tmp4161, $tmp4163, $tmp4164);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4160));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4160));
org$pandalanguage$pandac$ASTNode* $tmp4165 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4165));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4166 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4166));
// unreffing children
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4160;
block3:;
panda$core$Bit $tmp4167 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4168 = $tmp4167.value;
if ($tmp4168) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4169 = (panda$core$Int64) {1806};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4170, $tmp4169, &$s4171);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 1829
org$pandalanguage$pandac$parser$Token $tmp4172 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4173 = $tmp4172.kind;
panda$core$Int64 $tmp4174 = $tmp4173.$rawValue;
panda$core$Int64 $tmp4175 = (panda$core$Int64) {29};
panda$core$Bit $tmp4176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4174, $tmp4175);
bool $tmp4177 = $tmp4176.value;
if ($tmp4177) goto block2; else goto block3;
block2:;
// line 1830
org$pandalanguage$pandac$ASTNode* $tmp4178 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4178));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4178));
return $tmp4178;
block3:;
panda$core$Int64 $tmp4179 = (panda$core$Int64) {30};
panda$core$Bit $tmp4180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4174, $tmp4179);
bool $tmp4181 = $tmp4180.value;
if ($tmp4181) goto block4; else goto block5;
block4:;
// line 1831
org$pandalanguage$pandac$ASTNode* $tmp4182 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4182));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4182));
return $tmp4182;
block5:;
panda$core$Int64 $tmp4183 = (panda$core$Int64) {28};
panda$core$Bit $tmp4184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4174, $tmp4183);
bool $tmp4185 = $tmp4184.value;
if ($tmp4185) goto block6; else goto block7;
block6:;
// line 1832
org$pandalanguage$pandac$ASTNode* $tmp4186 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4186));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4186));
return $tmp4186;
block7:;
// line 1833
panda$core$Bit $tmp4187 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4188 = $tmp4187.value;
if ($tmp4188) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp4189 = (panda$core$Int64) {1833};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4190, $tmp4189);
abort(); // unreachable
block8:;
goto block1;
block1:;
panda$core$Bit $tmp4191 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4192 = $tmp4191.value;
if ($tmp4192) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4193 = (panda$core$Int64) {1828};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4194, $tmp4193, &$s4195);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

// line 1841
org$pandalanguage$pandac$parser$Token $tmp4196 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4197 = $tmp4196.kind;
panda$core$Int64 $tmp4198 = $tmp4197.$rawValue;
panda$core$Int64 $tmp4199 = (panda$core$Int64) {31};
panda$core$Bit $tmp4200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4198, $tmp4199);
bool $tmp4201 = $tmp4200.value;
if ($tmp4201) goto block2; else goto block3;
block2:;
// line 1842
org$pandalanguage$pandac$ASTNode* $tmp4202 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4202));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4202));
return $tmp4202;
block3:;
panda$core$Int64 $tmp4203 = (panda$core$Int64) {33};
panda$core$Bit $tmp4204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4198, $tmp4203);
bool $tmp4205 = $tmp4204.value;
if ($tmp4205) goto block4; else goto block5;
block4:;
// line 1843
org$pandalanguage$pandac$ASTNode* $tmp4206 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4206));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4206));
return $tmp4206;
block5:;
panda$core$Int64 $tmp4207 = (panda$core$Int64) {36};
panda$core$Bit $tmp4208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4198, $tmp4207);
bool $tmp4209 = $tmp4208.value;
if ($tmp4209) goto block6; else goto block7;
block6:;
// line 1844
org$pandalanguage$pandac$ASTNode* $tmp4210 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4210));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4210));
return $tmp4210;
block7:;
panda$core$Int64 $tmp4211 = (panda$core$Int64) {32};
panda$core$Bit $tmp4212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4198, $tmp4211);
bool $tmp4213 = $tmp4212.value;
if ($tmp4213) goto block8; else goto block9;
block8:;
// line 1845
org$pandalanguage$pandac$ASTNode* $tmp4214 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4214));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4214));
return $tmp4214;
block9:;
// line 1848
panda$core$Int64 $tmp4215 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$Kind $tmp4216 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4215);
org$pandalanguage$pandac$parser$Token$nullable $tmp4217 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4216, &$s4218);
// line 1849
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp4219 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4220 = $tmp4219.value;
if ($tmp4220) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4221 = (panda$core$Int64) {1840};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4222, $tmp4221, &$s4223);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$parser$Token$nullable local2;
panda$collections$ImmutableArray* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$collections$ImmutableArray* local5 = NULL;
// line 1857
// line 1858
panda$core$Int64 $tmp4224 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4225 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4224);
org$pandalanguage$pandac$parser$Token$nullable $tmp4226 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4225);
*(&local1) = $tmp4226;
// line 1859
org$pandalanguage$pandac$parser$Token$nullable $tmp4227 = *(&local1);
panda$core$Bit $tmp4228 = panda$core$Bit$init$builtin_bit(!$tmp4227.nonnull);
bool $tmp4229 = $tmp4228.value;
if ($tmp4229) goto block1; else goto block3;
block1:;
// line 1860
panda$core$Int64 $tmp4230 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4231 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4230);
org$pandalanguage$pandac$parser$Token$nullable $tmp4232 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4231, &$s4233);
*(&local1) = $tmp4232;
// line 1861
org$pandalanguage$pandac$parser$Token$nullable $tmp4234 = *(&local1);
panda$core$Bit $tmp4235 = panda$core$Bit$init$builtin_bit(!$tmp4234.nonnull);
bool $tmp4236 = $tmp4235.value;
if ($tmp4236) goto block4; else goto block5;
block4:;
// line 1862
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 1864
panda$core$Int64 $tmp4237 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4238 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4237);
*(&local0) = $tmp4238;
goto block2;
block3:;
// line 1
// line 1867
panda$core$Int64 $tmp4239 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4240 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4239);
*(&local0) = $tmp4240;
goto block2;
block2:;
// line 1869
panda$core$Int64 $tmp4241 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4242 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4241);
org$pandalanguage$pandac$parser$Token$nullable $tmp4243 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4242, &$s4244);
*(&local2) = $tmp4243;
// line 1870
org$pandalanguage$pandac$parser$Token$nullable $tmp4245 = *(&local2);
panda$core$Bit $tmp4246 = panda$core$Bit$init$builtin_bit(!$tmp4245.nonnull);
bool $tmp4247 = $tmp4246.value;
if ($tmp4247) goto block6; else goto block7;
block6:;
// line 1871
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 1873
panda$collections$ImmutableArray* $tmp4248 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4249 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4249));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4248));
*(&local3) = $tmp4248;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4248));
// line 1874
panda$collections$ImmutableArray* $tmp4250 = *(&local3);
panda$core$Bit $tmp4251 = panda$core$Bit$init$builtin_bit($tmp4250 == NULL);
bool $tmp4252 = $tmp4251.value;
if ($tmp4252) goto block8; else goto block9;
block8:;
// line 1875
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4253 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4253));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 1877
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1878
org$pandalanguage$pandac$parser$Token $tmp4254 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4255 = $tmp4254.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4256;
$tmp4256 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4256->value = $tmp4255;
panda$core$Int64 $tmp4257 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4258 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4257);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4259;
$tmp4259 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4259->value = $tmp4258;
ITable* $tmp4260 = ((panda$core$Equatable*) $tmp4256)->$class->itable;
while ($tmp4260->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4260 = $tmp4260->next;
}
$fn4262 $tmp4261 = $tmp4260->methods[0];
panda$core$Bit $tmp4263 = $tmp4261(((panda$core$Equatable*) $tmp4256), ((panda$core$Equatable*) $tmp4259));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4256)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4259)));
bool $tmp4264 = $tmp4263.value;
if ($tmp4264) goto block10; else goto block12;
block10:;
// line 1879
org$pandalanguage$pandac$ASTNode* $tmp4265 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4266 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4266));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4265));
*(&local4) = $tmp4265;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4265));
// line 1880
org$pandalanguage$pandac$ASTNode* $tmp4267 = *(&local4);
panda$core$Bit $tmp4268 = panda$core$Bit$init$builtin_bit($tmp4267 == NULL);
bool $tmp4269 = $tmp4268.value;
if ($tmp4269) goto block13; else goto block14;
block13:;
// line 1881
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4270 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4270));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4271 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4271));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1885
org$pandalanguage$pandac$ASTNode* $tmp4272 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4272));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block11;
block11:;
// line 1887
panda$collections$ImmutableArray* $tmp4273 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4274 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4274));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4273));
*(&local5) = $tmp4273;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4273));
// line 1888
panda$collections$ImmutableArray* $tmp4275 = *(&local5);
panda$core$Bit $tmp4276 = panda$core$Bit$init$builtin_bit($tmp4275 == NULL);
bool $tmp4277 = $tmp4276.value;
if ($tmp4277) goto block15; else goto block16;
block15:;
// line 1889
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4278 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4278));
// unreffing body
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4279 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4279));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4280 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4280));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1891
org$pandalanguage$pandac$ASTNode* $tmp4281 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4282 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4283 = *(&local1);
org$pandalanguage$pandac$Position $tmp4284 = ((org$pandalanguage$pandac$parser$Token) $tmp4283.value).position;
panda$collections$ImmutableArray* $tmp4285 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp4285);
org$pandalanguage$pandac$MethodDecl$Kind $tmp4286 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp4287 = *(&local2);
panda$core$String* $tmp4288 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4287.value));
panda$collections$ImmutableArray* $tmp4289 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp4290 = *(&local4);
panda$collections$ImmutableArray* $tmp4291 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4281, $tmp4282, $tmp4284, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4285, $tmp4286, $tmp4288, ((panda$collections$ImmutableArray*) NULL), $tmp4289, $tmp4290, $tmp4291);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4281));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4281));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4285));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4288));
panda$collections$ImmutableArray* $tmp4292 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4292));
// unreffing body
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4293 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4293));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4294 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4294));
// unreffing params
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return $tmp4281;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1900
org$pandalanguage$pandac$parser$Token $tmp4295 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4296 = $tmp4295.kind;
panda$core$Int64 $tmp4297 = $tmp4296.$rawValue;
panda$core$Int64 $tmp4298 = (panda$core$Int64) {37};
panda$core$Bit $tmp4299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4298);
bool $tmp4300 = $tmp4299.value;
if ($tmp4300) goto block2; else goto block3;
block2:;
// line 1901
org$pandalanguage$pandac$ASTNode* $tmp4301 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4301));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4301));
return $tmp4301;
block3:;
panda$core$Int64 $tmp4302 = (panda$core$Int64) {33};
panda$core$Bit $tmp4303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4302);
bool $tmp4304 = $tmp4303.value;
if ($tmp4304) goto block4; else goto block5;
block4:;
// line 1902
org$pandalanguage$pandac$ASTNode* $tmp4305 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4305));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4305));
return $tmp4305;
block5:;
panda$core$Int64 $tmp4306 = (panda$core$Int64) {32};
panda$core$Bit $tmp4307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4306);
bool $tmp4308 = $tmp4307.value;
if ($tmp4308) goto block6; else goto block7;
block6:;
// line 1903
org$pandalanguage$pandac$ASTNode* $tmp4309 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4309));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4309));
return $tmp4309;
block7:;
panda$core$Int64 $tmp4310 = (panda$core$Int64) {31};
panda$core$Bit $tmp4311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4310);
bool $tmp4312 = $tmp4311.value;
if ($tmp4312) goto block8; else goto block9;
block8:;
// line 1904
org$pandalanguage$pandac$ASTNode* $tmp4313 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4313));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4313));
return $tmp4313;
block9:;
panda$core$Int64 $tmp4314 = (panda$core$Int64) {36};
panda$core$Bit $tmp4315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4314);
bool $tmp4316 = $tmp4315.value;
if ($tmp4316) goto block10; else goto block11;
block10:;
// line 1905
org$pandalanguage$pandac$ASTNode* $tmp4317 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4317));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4317));
return $tmp4317;
block11:;
panda$core$Int64 $tmp4318 = (panda$core$Int64) {45};
panda$core$Bit $tmp4319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4318);
bool $tmp4320 = $tmp4319.value;
if ($tmp4320) goto block12; else goto block13;
block12:;
// line 1906
org$pandalanguage$pandac$ASTNode* $tmp4321 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4321));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4321));
return $tmp4321;
block13:;
panda$core$Int64 $tmp4322 = (panda$core$Int64) {39};
panda$core$Bit $tmp4323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4322);
bool $tmp4324 = $tmp4323.value;
if ($tmp4324) goto block14; else goto block15;
block14:;
// line 1907
org$pandalanguage$pandac$ASTNode* $tmp4325 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4325));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4325));
return $tmp4325;
block15:;
panda$core$Int64 $tmp4326 = (panda$core$Int64) {100};
panda$core$Bit $tmp4327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4326);
bool $tmp4328 = $tmp4327.value;
if ($tmp4328) goto block16; else goto block17;
block16:;
// line 1908
org$pandalanguage$pandac$ASTNode* $tmp4329 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4329));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4329));
return $tmp4329;
block17:;
panda$core$Int64 $tmp4330 = (panda$core$Int64) {49};
panda$core$Bit $tmp4331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4330);
bool $tmp4332 = $tmp4331.value;
if ($tmp4332) goto block18; else goto block19;
block18:;
// line 1910
org$pandalanguage$pandac$parser$Token $tmp4333 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp4333;
// line 1911
panda$core$Int64 $tmp4334 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4335 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4334);
org$pandalanguage$pandac$parser$Token$nullable $tmp4336 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4335);
*(&local1) = $tmp4336;
// line 1912
org$pandalanguage$pandac$parser$Token$nullable $tmp4337 = *(&local1);
panda$core$Bit $tmp4338 = panda$core$Bit$init$builtin_bit($tmp4337.nonnull);
bool $tmp4339 = $tmp4338.value;
if ($tmp4339) goto block20; else goto block21;
block20:;
// line 1913
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4340 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4341 = *$tmp4340;
panda$core$Bit $tmp4342 = panda$core$Bit$init$builtin_bit($tmp4341 != NULL);
bool $tmp4343 = $tmp4342.value;
if ($tmp4343) goto block22; else goto block23;
block22:;
// line 1914
org$pandalanguage$pandac$parser$Token$nullable $tmp4344 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4344.value));
// line 1915
org$pandalanguage$pandac$parser$Token $tmp4345 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp4345);
// line 1916
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4346 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4347 = *$tmp4346;
panda$core$Int64 $tmp4348 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4349 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4348);
$fn4351 $tmp4350 = ($fn4351) $tmp4347->$class->vtable[3];
$tmp4350($tmp4347, $tmp4349);
// line 1917
org$pandalanguage$pandac$parser$Token $tmp4352 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1918
org$pandalanguage$pandac$parser$Token $tmp4353 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1919
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4354 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4355 = *$tmp4354;
panda$core$Int64 $tmp4356 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4357 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4356);
$fn4359 $tmp4358 = ($fn4359) $tmp4355->$class->vtable[4];
$tmp4358($tmp4355, $tmp4357);
goto block23;
block23:;
// line 1921
org$pandalanguage$pandac$parser$Token $tmp4360 = *(&local0);
panda$core$String* $tmp4361 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp4360);
org$pandalanguage$pandac$ASTNode* $tmp4362 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp4361);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4362));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4361));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4362));
return $tmp4362;
block21:;
// line 1923
org$pandalanguage$pandac$parser$Token $tmp4363 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp4363);
// line 1924
org$pandalanguage$pandac$ASTNode* $tmp4364 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4364));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4364));
return $tmp4364;
block19:;
panda$core$Int64 $tmp4365 = (panda$core$Int64) {47};
panda$core$Bit $tmp4366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4365);
bool $tmp4367 = $tmp4366.value;
if ($tmp4367) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp4368 = (panda$core$Int64) {48};
panda$core$Bit $tmp4369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4368);
bool $tmp4370 = $tmp4369.value;
if ($tmp4370) goto block24; else goto block26;
block24:;
// line 1926
org$pandalanguage$pandac$ASTNode* $tmp4371 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4371));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4371));
return $tmp4371;
block26:;
panda$core$Int64 $tmp4372 = (panda$core$Int64) {24};
panda$core$Bit $tmp4373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4372);
bool $tmp4374 = $tmp4373.value;
if ($tmp4374) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp4375 = (panda$core$Int64) {25};
panda$core$Bit $tmp4376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4375);
bool $tmp4377 = $tmp4376.value;
if ($tmp4377) goto block27; else goto block29;
block29:;
panda$core$Int64 $tmp4378 = (panda$core$Int64) {26};
panda$core$Bit $tmp4379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4378);
bool $tmp4380 = $tmp4379.value;
if ($tmp4380) goto block27; else goto block30;
block30:;
panda$core$Int64 $tmp4381 = (panda$core$Int64) {27};
panda$core$Bit $tmp4382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4381);
bool $tmp4383 = $tmp4382.value;
if ($tmp4383) goto block27; else goto block31;
block27:;
// line 1928
org$pandalanguage$pandac$ASTNode* $tmp4384 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4384));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4384));
return $tmp4384;
block31:;
panda$core$Int64 $tmp4385 = (panda$core$Int64) {23};
panda$core$Bit $tmp4386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4385);
bool $tmp4387 = $tmp4386.value;
if ($tmp4387) goto block32; else goto block33;
block32:;
// line 1930
org$pandalanguage$pandac$ASTNode* $tmp4388 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4388));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4388));
return $tmp4388;
block33:;
panda$core$Int64 $tmp4389 = (panda$core$Int64) {22};
panda$core$Bit $tmp4390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4389);
bool $tmp4391 = $tmp4390.value;
if ($tmp4391) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp4392 = (panda$core$Int64) {21};
panda$core$Bit $tmp4393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4297, $tmp4392);
bool $tmp4394 = $tmp4393.value;
if ($tmp4394) goto block34; else goto block36;
block34:;
// line 1932
org$pandalanguage$pandac$ASTNode* $tmp4395 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4395));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4395));
return $tmp4395;
block36:;
// line 1935
panda$core$Int64 $tmp4396 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp4397 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4396);
org$pandalanguage$pandac$parser$Token$nullable $tmp4398 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4397, &$s4399);
// line 1936
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp4400 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4401 = $tmp4400.value;
if ($tmp4401) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp4402 = (panda$core$Int64) {1899};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4403, $tmp4402, &$s4404);
abort(); // unreachable
block37:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
// line 1944
panda$core$Int64 $tmp4405 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$Kind $tmp4406 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4405);
org$pandalanguage$pandac$parser$Token$nullable $tmp4407 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4406, &$s4408);
*(&local0) = $tmp4407;
// line 1945
org$pandalanguage$pandac$parser$Token$nullable $tmp4409 = *(&local0);
panda$core$Bit $tmp4410 = panda$core$Bit$init$builtin_bit(!$tmp4409.nonnull);
bool $tmp4411 = $tmp4410.value;
if ($tmp4411) goto block1; else goto block2;
block1:;
// line 1946
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1948
panda$core$Int64 $tmp4412 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4413 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4412);
org$pandalanguage$pandac$parser$Token$nullable $tmp4414 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4413, &$s4415);
*(&local1) = $tmp4414;
// line 1949
org$pandalanguage$pandac$parser$Token$nullable $tmp4416 = *(&local1);
panda$core$Bit $tmp4417 = panda$core$Bit$init$builtin_bit(!$tmp4416.nonnull);
bool $tmp4418 = $tmp4417.value;
if ($tmp4418) goto block3; else goto block4;
block3:;
// line 1950
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1952
panda$core$MutableString* $tmp4419 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp4420 = *(&local1);
panda$core$String* $tmp4421 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4420.value));
panda$core$MutableString$init$panda$core$String($tmp4419, $tmp4421);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp4422 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4422));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4419));
*(&local2) = $tmp4419;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4419));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4421));
// line 1953
goto block5;
block5:;
// line 1954
panda$core$Int64 $tmp4423 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp4424 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4423);
org$pandalanguage$pandac$parser$Token$nullable $tmp4425 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4424);
*(&local1) = $tmp4425;
// line 1955
org$pandalanguage$pandac$parser$Token$nullable $tmp4426 = *(&local1);
panda$core$Bit $tmp4427 = panda$core$Bit$init$builtin_bit(!$tmp4426.nonnull);
bool $tmp4428 = $tmp4427.value;
if ($tmp4428) goto block7; else goto block8;
block7:;
// line 1956
goto block6;
block8:;
// line 1958
panda$core$MutableString* $tmp4429 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp4429, &$s4430);
// line 1959
panda$core$Int64 $tmp4431 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4432 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4431);
org$pandalanguage$pandac$parser$Token$nullable $tmp4433 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4432, &$s4434);
*(&local1) = $tmp4433;
// line 1960
org$pandalanguage$pandac$parser$Token$nullable $tmp4435 = *(&local1);
panda$core$Bit $tmp4436 = panda$core$Bit$init$builtin_bit(!$tmp4435.nonnull);
bool $tmp4437 = $tmp4436.value;
if ($tmp4437) goto block9; else goto block10;
block9:;
// line 1961
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4438 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4438));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1963
panda$core$MutableString* $tmp4439 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp4440 = *(&local1);
panda$core$String* $tmp4441 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4440.value));
panda$core$MutableString$append$panda$core$String($tmp4439, $tmp4441);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4441));
goto block5;
block6:;
// line 1965
org$pandalanguage$pandac$ASTNode* $tmp4442 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4443 = (panda$core$Int64) {30};
org$pandalanguage$pandac$parser$Token$nullable $tmp4444 = *(&local0);
org$pandalanguage$pandac$Position $tmp4445 = ((org$pandalanguage$pandac$parser$Token) $tmp4444.value).position;
panda$core$MutableString* $tmp4446 = *(&local2);
panda$core$String* $tmp4447 = panda$core$MutableString$finish$R$panda$core$String($tmp4446);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4442, $tmp4443, $tmp4445, $tmp4447);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4442));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4442));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4447));
panda$core$MutableString* $tmp4448 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4448));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return $tmp4442;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
// line 1972
panda$core$Int64 $tmp4449 = (panda$core$Int64) {16};
org$pandalanguage$pandac$parser$Token$Kind $tmp4450 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4449);
org$pandalanguage$pandac$parser$Token$nullable $tmp4451 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4450, &$s4452);
*(&local0) = $tmp4451;
// line 1973
org$pandalanguage$pandac$parser$Token$nullable $tmp4453 = *(&local0);
panda$core$Bit $tmp4454 = panda$core$Bit$init$builtin_bit(!$tmp4453.nonnull);
bool $tmp4455 = $tmp4454.value;
if ($tmp4455) goto block1; else goto block2;
block1:;
// line 1974
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1976
panda$core$Int64 $tmp4456 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4457 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4456);
org$pandalanguage$pandac$parser$Token$nullable $tmp4458 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4457, &$s4459);
*(&local1) = $tmp4458;
// line 1977
org$pandalanguage$pandac$parser$Token$nullable $tmp4460 = *(&local1);
panda$core$Bit $tmp4461 = panda$core$Bit$init$builtin_bit(!$tmp4460.nonnull);
bool $tmp4462 = $tmp4461.value;
if ($tmp4462) goto block3; else goto block4;
block3:;
// line 1978
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1980
panda$core$MutableString* $tmp4463 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp4464 = *(&local1);
panda$core$String* $tmp4465 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4464.value));
panda$core$MutableString$init$panda$core$String($tmp4463, $tmp4465);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp4466 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4466));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4463));
*(&local2) = $tmp4463;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4463));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4465));
// line 1981
goto block5;
block5:;
// line 1982
panda$core$Int64 $tmp4467 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp4468 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4467);
org$pandalanguage$pandac$parser$Token$nullable $tmp4469 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4468);
*(&local1) = $tmp4469;
// line 1983
org$pandalanguage$pandac$parser$Token$nullable $tmp4470 = *(&local1);
panda$core$Bit $tmp4471 = panda$core$Bit$init$builtin_bit(!$tmp4470.nonnull);
bool $tmp4472 = $tmp4471.value;
if ($tmp4472) goto block7; else goto block8;
block7:;
// line 1984
goto block6;
block8:;
// line 1986
panda$core$MutableString* $tmp4473 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp4473, &$s4474);
// line 1987
panda$core$Int64 $tmp4475 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4476 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4475);
org$pandalanguage$pandac$parser$Token$nullable $tmp4477 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4476, &$s4478);
*(&local1) = $tmp4477;
// line 1988
org$pandalanguage$pandac$parser$Token$nullable $tmp4479 = *(&local1);
panda$core$Bit $tmp4480 = panda$core$Bit$init$builtin_bit(!$tmp4479.nonnull);
bool $tmp4481 = $tmp4480.value;
if ($tmp4481) goto block9; else goto block10;
block9:;
// line 1989
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4482 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4482));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1991
panda$core$MutableString* $tmp4483 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp4484 = *(&local1);
panda$core$String* $tmp4485 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4484.value));
panda$core$MutableString$append$panda$core$String($tmp4483, $tmp4485);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4485));
goto block5;
block6:;
// line 1993
org$pandalanguage$pandac$ASTNode* $tmp4486 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4487 = (panda$core$Int64) {46};
org$pandalanguage$pandac$parser$Token$nullable $tmp4488 = *(&local0);
org$pandalanguage$pandac$Position $tmp4489 = ((org$pandalanguage$pandac$parser$Token) $tmp4488.value).position;
panda$core$MutableString* $tmp4490 = *(&local2);
panda$core$String* $tmp4491 = panda$core$MutableString$finish$R$panda$core$String($tmp4490);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4486, $tmp4487, $tmp4489, $tmp4491);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4486));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4486));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4491));
panda$core$MutableString* $tmp4492 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4492));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return $tmp4486;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 2000
panda$core$Int64 $tmp4493 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4494 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4493);
org$pandalanguage$pandac$parser$Token$nullable $tmp4495 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4494, &$s4496);
*(&local0) = $tmp4495;
// line 2001
org$pandalanguage$pandac$parser$Token$nullable $tmp4497 = *(&local0);
panda$core$Bit $tmp4498 = panda$core$Bit$init$builtin_bit(!$tmp4497.nonnull);
bool $tmp4499 = $tmp4498.value;
if ($tmp4499) goto block1; else goto block2;
block1:;
// line 2002
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 2004
panda$core$Int64 $tmp4500 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4501 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4500);
org$pandalanguage$pandac$parser$Token$nullable $tmp4502 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4501, &$s4503);
*(&local1) = $tmp4502;
// line 2005
org$pandalanguage$pandac$parser$Token$nullable $tmp4504 = *(&local1);
panda$core$Bit $tmp4505 = panda$core$Bit$init$builtin_bit(!$tmp4504.nonnull);
bool $tmp4506 = $tmp4505.value;
if ($tmp4506) goto block3; else goto block4;
block3:;
// line 2006
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block4:;
// line 2008
panda$collections$Array* $tmp4507 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4507);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4508 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4508));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4507));
*(&local2) = $tmp4507;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4507));
// line 2009
panda$core$Int64 $tmp4509 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4510 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4509);
org$pandalanguage$pandac$parser$Token$nullable $tmp4511 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4510);
panda$core$Bit $tmp4512 = panda$core$Bit$init$builtin_bit($tmp4511.nonnull);
bool $tmp4513 = $tmp4512.value;
if ($tmp4513) goto block5; else goto block7;
block5:;
// line 2010
org$pandalanguage$pandac$ASTNode* $tmp4514 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4515 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4515));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4514));
*(&local3) = $tmp4514;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4514));
// line 2011
org$pandalanguage$pandac$ASTNode* $tmp4516 = *(&local3);
panda$core$Bit $tmp4517 = panda$core$Bit$init$builtin_bit($tmp4516 == NULL);
bool $tmp4518 = $tmp4517.value;
if ($tmp4518) goto block8; else goto block9;
block8:;
// line 2012
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4519 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4519));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4520 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4520));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block9:;
// line 2014
panda$collections$Array* $tmp4521 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4522 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4523 = (panda$core$Int64) {44};
org$pandalanguage$pandac$parser$Token$nullable $tmp4524 = *(&local1);
org$pandalanguage$pandac$Position $tmp4525 = ((org$pandalanguage$pandac$parser$Token) $tmp4524.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4526 = *(&local1);
panda$core$String* $tmp4527 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4526.value));
org$pandalanguage$pandac$ASTNode* $tmp4528 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4522, $tmp4523, $tmp4525, $tmp4527, $tmp4528);
panda$collections$Array$add$panda$collections$Array$T($tmp4521, ((panda$core$Object*) $tmp4522));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4522));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4527));
org$pandalanguage$pandac$ASTNode* $tmp4529 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4529));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block7:;
// line 1
// line 2017
panda$collections$Array* $tmp4530 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4531 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4532 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp4533 = *(&local1);
org$pandalanguage$pandac$Position $tmp4534 = ((org$pandalanguage$pandac$parser$Token) $tmp4533.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4535 = *(&local1);
panda$core$String* $tmp4536 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4535.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4531, $tmp4532, $tmp4534, $tmp4536);
panda$collections$Array$add$panda$collections$Array$T($tmp4530, ((panda$core$Object*) $tmp4531));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4531));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4536));
goto block6;
block6:;
// line 2019
goto block10;
block10:;
panda$core$Int64 $tmp4537 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4538 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4537);
org$pandalanguage$pandac$parser$Token$nullable $tmp4539 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4538);
panda$core$Bit $tmp4540 = panda$core$Bit$init$builtin_bit($tmp4539.nonnull);
bool $tmp4541 = $tmp4540.value;
if ($tmp4541) goto block11; else goto block12;
block11:;
// line 2020
panda$core$Int64 $tmp4542 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4543 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4542);
org$pandalanguage$pandac$parser$Token$nullable $tmp4544 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4543, &$s4545);
*(&local1) = $tmp4544;
// line 2021
org$pandalanguage$pandac$parser$Token$nullable $tmp4546 = *(&local1);
panda$core$Bit $tmp4547 = panda$core$Bit$init$builtin_bit(!$tmp4546.nonnull);
bool $tmp4548 = $tmp4547.value;
if ($tmp4548) goto block13; else goto block14;
block13:;
// line 2022
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$Array* $tmp4549 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4549));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block14:;
// line 2024
panda$core$Int64 $tmp4550 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4551 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4550);
org$pandalanguage$pandac$parser$Token$nullable $tmp4552 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4551);
panda$core$Bit $tmp4553 = panda$core$Bit$init$builtin_bit($tmp4552.nonnull);
bool $tmp4554 = $tmp4553.value;
if ($tmp4554) goto block15; else goto block17;
block15:;
// line 2025
org$pandalanguage$pandac$ASTNode* $tmp4555 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4556 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4556));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4555));
*(&local4) = $tmp4555;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4555));
// line 2026
org$pandalanguage$pandac$ASTNode* $tmp4557 = *(&local4);
panda$core$Bit $tmp4558 = panda$core$Bit$init$builtin_bit($tmp4557 == NULL);
bool $tmp4559 = $tmp4558.value;
if ($tmp4559) goto block18; else goto block19;
block18:;
// line 2027
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4560 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4560));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4561 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4561));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block19:;
// line 2029
panda$collections$Array* $tmp4562 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4563 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4564 = (panda$core$Int64) {44};
org$pandalanguage$pandac$parser$Token$nullable $tmp4565 = *(&local1);
org$pandalanguage$pandac$Position $tmp4566 = ((org$pandalanguage$pandac$parser$Token) $tmp4565.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4567 = *(&local1);
panda$core$String* $tmp4568 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4567.value));
org$pandalanguage$pandac$ASTNode* $tmp4569 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4563, $tmp4564, $tmp4566, $tmp4568, $tmp4569);
panda$collections$Array$add$panda$collections$Array$T($tmp4562, ((panda$core$Object*) $tmp4563));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4563));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4568));
org$pandalanguage$pandac$ASTNode* $tmp4570 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4570));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block16;
block17:;
// line 1
// line 2032
panda$collections$Array* $tmp4571 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4572 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4573 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp4574 = *(&local1);
org$pandalanguage$pandac$Position $tmp4575 = ((org$pandalanguage$pandac$parser$Token) $tmp4574.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4576 = *(&local1);
panda$core$String* $tmp4577 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4576.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4572, $tmp4573, $tmp4575, $tmp4577);
panda$collections$Array$add$panda$collections$Array$T($tmp4571, ((panda$core$Object*) $tmp4572));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4572));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4577));
goto block16;
block16:;
goto block10;
block12:;
// line 2035
panda$core$Int64 $tmp4578 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp4579 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4578);
org$pandalanguage$pandac$parser$Token$nullable $tmp4580 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4579, &$s4581);
panda$core$Bit $tmp4582 = panda$core$Bit$init$builtin_bit(!$tmp4580.nonnull);
bool $tmp4583 = $tmp4582.value;
if ($tmp4583) goto block20; else goto block21;
block20:;
// line 2036
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$Array* $tmp4584 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4584));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block21:;
// line 2038
panda$collections$Array* $tmp4585 = *(&local2);
panda$collections$ImmutableArray* $tmp4586 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4585);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4586));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4586));
panda$collections$Array* $tmp4587 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4587));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return $tmp4586;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2045
panda$core$Int64 $tmp4588 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4589 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4588);
org$pandalanguage$pandac$parser$Token$nullable $tmp4590 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4589, &$s4591);
*(&local0) = $tmp4590;
// line 2046
org$pandalanguage$pandac$parser$Token$nullable $tmp4592 = *(&local0);
panda$core$Bit $tmp4593 = panda$core$Bit$init$builtin_bit(!$tmp4592.nonnull);
bool $tmp4594 = $tmp4593.value;
if ($tmp4594) goto block1; else goto block2;
block1:;
// line 2047
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 2049
panda$collections$Array* $tmp4595 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4595);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4596 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4596));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4595));
*(&local1) = $tmp4595;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4595));
// line 2050
org$pandalanguage$pandac$ASTNode* $tmp4597 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4598 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4598));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4597));
*(&local2) = $tmp4597;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4597));
// line 2051
org$pandalanguage$pandac$ASTNode* $tmp4599 = *(&local2);
panda$core$Bit $tmp4600 = panda$core$Bit$init$builtin_bit($tmp4599 == NULL);
bool $tmp4601 = $tmp4600.value;
if ($tmp4601) goto block3; else goto block4;
block3:;
// line 2052
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4602 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4602));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4603 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4603));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block4:;
// line 2054
panda$collections$Array* $tmp4604 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4605 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4604, ((panda$core$Object*) $tmp4605));
// line 2055
goto block5;
block5:;
panda$core$Int64 $tmp4606 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4607 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4606);
org$pandalanguage$pandac$parser$Token$nullable $tmp4608 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4607);
panda$core$Bit $tmp4609 = panda$core$Bit$init$builtin_bit($tmp4608.nonnull);
bool $tmp4610 = $tmp4609.value;
if ($tmp4610) goto block6; else goto block7;
block6:;
// line 2056
org$pandalanguage$pandac$ASTNode* $tmp4611 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4612 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4612));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4611));
*(&local2) = $tmp4611;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4611));
// line 2057
org$pandalanguage$pandac$ASTNode* $tmp4613 = *(&local2);
panda$core$Bit $tmp4614 = panda$core$Bit$init$builtin_bit($tmp4613 == NULL);
bool $tmp4615 = $tmp4614.value;
if ($tmp4615) goto block8; else goto block9;
block8:;
// line 2058
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4616 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4616));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4617 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4617));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block9:;
// line 2060
panda$collections$Array* $tmp4618 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4619 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4618, ((panda$core$Object*) $tmp4619));
goto block5;
block7:;
// line 2062
panda$collections$Array* $tmp4620 = *(&local1);
panda$collections$ImmutableArray* $tmp4621 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4620);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4621));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4621));
org$pandalanguage$pandac$ASTNode* $tmp4622 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4622));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4623 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4623));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4621;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local3;
org$pandalanguage$pandac$parser$Token$nullable local4;
// line 2069
panda$core$Int64 $tmp4624 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$Kind $tmp4625 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4624);
org$pandalanguage$pandac$parser$Token$nullable $tmp4626 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4625, &$s4627);
*(&local0) = $tmp4626;
// line 2070
*(&local1) = ((panda$core$String*) NULL);
// line 2071
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4628 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4628));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2072
panda$core$Int64 $tmp4629 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4630 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4629);
org$pandalanguage$pandac$parser$Token$nullable $tmp4631 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4630);
*(&local3) = $tmp4631;
// line 2073
org$pandalanguage$pandac$parser$Token$nullable $tmp4632 = *(&local3);
panda$core$Bit $tmp4633 = panda$core$Bit$init$builtin_bit($tmp4632.nonnull);
bool $tmp4634 = $tmp4633.value;
if ($tmp4634) goto block1; else goto block2;
block1:;
// line 2074
org$pandalanguage$pandac$ASTNode* $tmp4635 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4636 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4636));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4635));
*(&local2) = $tmp4635;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4635));
// line 2075
org$pandalanguage$pandac$ASTNode* $tmp4637 = *(&local2);
panda$core$Bit $tmp4638 = panda$core$Bit$init$builtin_bit($tmp4637 == NULL);
bool $tmp4639 = $tmp4638.value;
if ($tmp4639) goto block3; else goto block4;
block3:;
// line 2076
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4640 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4640));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4641 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4641));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2078
panda$core$Int64 $tmp4642 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4643 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4642);
org$pandalanguage$pandac$parser$Token$nullable $tmp4644 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4643, &$s4645);
*(&local4) = $tmp4644;
// line 2079
org$pandalanguage$pandac$parser$Token$nullable $tmp4646 = *(&local4);
panda$core$Bit $tmp4647 = panda$core$Bit$init$builtin_bit(!$tmp4646.nonnull);
bool $tmp4648 = $tmp4647.value;
if ($tmp4648) goto block5; else goto block6;
block5:;
// line 2080
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4649 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4649));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4650 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4650));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 2082
panda$core$String** $tmp4651 = &param0->source;
panda$core$String* $tmp4652 = *$tmp4651;
panda$core$String** $tmp4653 = &param0->source;
panda$core$String* $tmp4654 = *$tmp4653;
org$pandalanguage$pandac$parser$Token$nullable $tmp4655 = *(&local3);
panda$core$String$Index $tmp4656 = ((org$pandalanguage$pandac$parser$Token) $tmp4655.value).start;
panda$core$String$Index $tmp4657 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp4654, $tmp4656);
org$pandalanguage$pandac$parser$Token$nullable $tmp4658 = *(&local4);
panda$core$String$Index $tmp4659 = ((org$pandalanguage$pandac$parser$Token) $tmp4658.value).start;
panda$core$Bit $tmp4660 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp4661 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp4657, $tmp4659, $tmp4660);
panda$core$String* $tmp4662 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp4652, $tmp4661);
panda$core$String* $tmp4663 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4663));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4662));
*(&local1) = $tmp4662;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4662));
goto block2;
block2:;
// line 2084
org$pandalanguage$pandac$ASTNode* $tmp4664 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4665 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$nullable $tmp4666 = *(&local0);
org$pandalanguage$pandac$Position $tmp4667 = ((org$pandalanguage$pandac$parser$Token) $tmp4666.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4668 = *(&local0);
panda$core$String* $tmp4669 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4668.value));
panda$core$String* $tmp4670 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4671 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q($tmp4664, $tmp4665, $tmp4667, $tmp4669, $tmp4670, $tmp4671);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4664));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4664));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4669));
org$pandalanguage$pandac$ASTNode* $tmp4672 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4672));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4673 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4673));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return $tmp4664;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 2091
panda$collections$Array* $tmp4674 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4674);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4675 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4675));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4674));
*(&local0) = $tmp4674;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4674));
// line 2092
goto block1;
block1:;
org$pandalanguage$pandac$parser$Token $tmp4676 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4677 = $tmp4676.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4678;
$tmp4678 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4678->value = $tmp4677;
panda$core$Int64 $tmp4679 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$Kind $tmp4680 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4679);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4681;
$tmp4681 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4681->value = $tmp4680;
ITable* $tmp4682 = ((panda$core$Equatable*) $tmp4678)->$class->itable;
while ($tmp4682->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4682 = $tmp4682->next;
}
$fn4684 $tmp4683 = $tmp4682->methods[0];
panda$core$Bit $tmp4685 = $tmp4683(((panda$core$Equatable*) $tmp4678), ((panda$core$Equatable*) $tmp4681));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4678)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4681)));
bool $tmp4686 = $tmp4685.value;
if ($tmp4686) goto block2; else goto block3;
block2:;
// line 2093
org$pandalanguage$pandac$ASTNode* $tmp4687 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4688 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4688));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4687));
*(&local1) = $tmp4687;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4687));
// line 2094
org$pandalanguage$pandac$ASTNode* $tmp4689 = *(&local1);
panda$core$Bit $tmp4690 = panda$core$Bit$init$builtin_bit($tmp4689 == NULL);
bool $tmp4691 = $tmp4690.value;
if ($tmp4691) goto block4; else goto block5;
block4:;
// line 2095
org$pandalanguage$pandac$ASTNode* $tmp4692 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4692));
// unreffing a
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block5:;
// line 2097
panda$collections$Array* $tmp4693 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp4694 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp4693, ((panda$core$Object*) $tmp4694));
org$pandalanguage$pandac$ASTNode* $tmp4695 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4695));
// unreffing a
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
// line 2099
panda$collections$Array* $tmp4696 = *(&local0);
panda$collections$ImmutableArray* $tmp4697 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4696);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4697));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4697));
panda$collections$Array* $tmp4698 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4698));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp4697;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$core$MutableString* local1 = NULL;
org$pandalanguage$pandac$parser$Token local2;
// line 2103
panda$core$Int64 $tmp4699 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp4700 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4699);
org$pandalanguage$pandac$parser$Token$nullable $tmp4701 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4700, &$s4702);
*(&local0) = $tmp4701;
// line 2104
org$pandalanguage$pandac$parser$Token$nullable $tmp4703 = *(&local0);
panda$core$Bit $tmp4704 = panda$core$Bit$init$builtin_bit(!$tmp4703.nonnull);
bool $tmp4705 = $tmp4704.value;
if ($tmp4705) goto block1; else goto block2;
block1:;
// line 2105
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2107
panda$core$MutableString* $tmp4706 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp4706);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp4707 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4707));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4706));
*(&local1) = $tmp4706;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4706));
// line 2108
goto block3;
block3:;
// line 2109
org$pandalanguage$pandac$parser$Token $tmp4708 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp4708;
// line 2110
org$pandalanguage$pandac$parser$Token $tmp4709 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp4710 = $tmp4709.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4711;
$tmp4711 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4711->value = $tmp4710;
panda$core$Int64 $tmp4712 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp4713 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4712);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4714;
$tmp4714 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4714->value = $tmp4713;
ITable* $tmp4715 = ((panda$core$Equatable*) $tmp4711)->$class->itable;
while ($tmp4715->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4715 = $tmp4715->next;
}
$fn4717 $tmp4716 = $tmp4715->methods[0];
panda$core$Bit $tmp4718 = $tmp4716(((panda$core$Equatable*) $tmp4711), ((panda$core$Equatable*) $tmp4714));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4711)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4714)));
bool $tmp4719 = $tmp4718.value;
if ($tmp4719) goto block5; else goto block6;
block5:;
// line 2111
goto block4;
block6:;
// line 2113
org$pandalanguage$pandac$parser$Token $tmp4720 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp4721 = $tmp4720.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4722;
$tmp4722 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4722->value = $tmp4721;
panda$core$Int64 $tmp4723 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp4724 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4723);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4725;
$tmp4725 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4725->value = $tmp4724;
ITable* $tmp4726 = ((panda$core$Equatable*) $tmp4722)->$class->itable;
while ($tmp4726->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4726 = $tmp4726->next;
}
$fn4728 $tmp4727 = $tmp4726->methods[0];
panda$core$Bit $tmp4729 = $tmp4727(((panda$core$Equatable*) $tmp4722), ((panda$core$Equatable*) $tmp4725));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4722)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4725)));
bool $tmp4730 = $tmp4729.value;
if ($tmp4730) goto block7; else goto block8;
block7:;
// line 2114
org$pandalanguage$pandac$parser$Token$nullable $tmp4731 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4731.value), &$s4732);
// line 2115
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4733 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4733));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 2117
panda$core$MutableString* $tmp4734 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp4735 = *(&local2);
panda$core$String* $tmp4736 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp4735);
panda$core$MutableString$append$panda$core$String($tmp4734, $tmp4736);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4736));
goto block3;
block4:;
// line 2119
org$pandalanguage$pandac$ASTNode* $tmp4737 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4738 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token$nullable $tmp4739 = *(&local0);
org$pandalanguage$pandac$Position $tmp4740 = ((org$pandalanguage$pandac$parser$Token) $tmp4739.value).position;
panda$core$MutableString* $tmp4741 = *(&local1);
panda$core$String* $tmp4742 = panda$core$MutableString$finish$R$panda$core$String($tmp4741);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4737, $tmp4738, $tmp4740, $tmp4742);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4737));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4737));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4742));
panda$core$MutableString* $tmp4743 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4743));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp4737;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 2126
panda$core$Int64 $tmp4744 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4745 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4744);
org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4745);
// line 2127
panda$core$Int64 $tmp4746 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4747 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4746);
org$pandalanguage$pandac$parser$Token$nullable $tmp4748 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4747, &$s4749);
*(&local0) = $tmp4748;
// line 2128
panda$core$Int64 $tmp4750 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4751 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4750);
org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4751);
// line 2129
org$pandalanguage$pandac$parser$Token$nullable $tmp4752 = *(&local0);
panda$core$Bit $tmp4753 = panda$core$Bit$init$builtin_bit(!$tmp4752.nonnull);
bool $tmp4754 = $tmp4753.value;
if ($tmp4754) goto block1; else goto block2;
block1:;
// line 2130
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2132
org$pandalanguage$pandac$ASTNode* $tmp4755 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4756 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4756));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4755));
*(&local1) = $tmp4755;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4755));
// line 2133
org$pandalanguage$pandac$ASTNode* $tmp4757 = *(&local1);
panda$core$Bit $tmp4758 = panda$core$Bit$init$builtin_bit($tmp4757 == NULL);
bool $tmp4759 = $tmp4758.value;
if ($tmp4759) goto block3; else goto block4;
block3:;
// line 2134
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4760 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4760));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2136
org$pandalanguage$pandac$ASTNode* $tmp4761 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4762 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$nullable $tmp4763 = *(&local0);
org$pandalanguage$pandac$Position $tmp4764 = ((org$pandalanguage$pandac$parser$Token) $tmp4763.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4765 = *(&local0);
panda$core$String* $tmp4766 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4765.value));
org$pandalanguage$pandac$ASTNode* $tmp4767 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4761, $tmp4762, $tmp4764, $tmp4766, $tmp4767);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4761));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4761));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4766));
org$pandalanguage$pandac$ASTNode* $tmp4768 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4768));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp4761;

}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2143
panda$core$Int64 $tmp4769 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4770 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4769);
org$pandalanguage$pandac$parser$Token$nullable $tmp4771 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4770, &$s4772);
*(&local0) = $tmp4771;
// line 2144
org$pandalanguage$pandac$parser$Token$nullable $tmp4773 = *(&local0);
panda$core$Bit $tmp4774 = panda$core$Bit$init$builtin_bit(!$tmp4773.nonnull);
bool $tmp4775 = $tmp4774.value;
if ($tmp4775) goto block1; else goto block2;
block1:;
// line 2145
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
return ((panda$collections$ImmutableArray*) NULL);
block2:;
// line 2147
panda$collections$Array* $tmp4776 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4776);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp4777 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4777));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4776));
*(&local1) = $tmp4776;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4776));
// line 2148
panda$core$Int64 $tmp4778 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4779 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4778);
org$pandalanguage$pandac$parser$Token$nullable $tmp4780 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4779);
panda$core$Bit $tmp4781 = panda$core$Bit$init$builtin_bit(!$tmp4780.nonnull);
bool $tmp4782 = $tmp4781.value;
if ($tmp4782) goto block3; else goto block4;
block3:;
// line 2149
org$pandalanguage$pandac$ASTNode* $tmp4783 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4784 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4784));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4783));
*(&local2) = $tmp4783;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4783));
// line 2150
org$pandalanguage$pandac$ASTNode* $tmp4785 = *(&local2);
panda$core$Bit $tmp4786 = panda$core$Bit$init$builtin_bit($tmp4785 == NULL);
bool $tmp4787 = $tmp4786.value;
if ($tmp4787) goto block5; else goto block6;
block5:;
// line 2151
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4788 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4788));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4789 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4789));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block6:;
// line 2153
panda$collections$Array* $tmp4790 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4791 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4790, ((panda$core$Object*) $tmp4791));
// line 2154
goto block7;
block7:;
panda$core$Int64 $tmp4792 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4793 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4792);
org$pandalanguage$pandac$parser$Token$nullable $tmp4794 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4793);
panda$core$Bit $tmp4795 = panda$core$Bit$init$builtin_bit($tmp4794.nonnull);
bool $tmp4796 = $tmp4795.value;
if ($tmp4796) goto block8; else goto block9;
block8:;
// line 2155
org$pandalanguage$pandac$ASTNode* $tmp4797 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4798 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4798));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4797));
*(&local2) = $tmp4797;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4797));
// line 2156
org$pandalanguage$pandac$ASTNode* $tmp4799 = *(&local2);
panda$core$Bit $tmp4800 = panda$core$Bit$init$builtin_bit($tmp4799 == NULL);
bool $tmp4801 = $tmp4800.value;
if ($tmp4801) goto block10; else goto block11;
block10:;
// line 2157
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4802 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4802));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4803 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4803));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block11:;
// line 2159
panda$collections$Array* $tmp4804 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4805 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4804, ((panda$core$Object*) $tmp4805));
goto block7;
block9:;
// line 2161
panda$core$Int64 $tmp4806 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4807 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4806);
org$pandalanguage$pandac$parser$Token$nullable $tmp4808 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4807, &$s4809);
panda$core$Bit $tmp4810 = panda$core$Bit$init$builtin_bit(!$tmp4808.nonnull);
bool $tmp4811 = $tmp4810.value;
if ($tmp4811) goto block12; else goto block13;
block12:;
// line 2162
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4812 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4812));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4813 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4813));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((panda$collections$ImmutableArray*) NULL);
block13:;
org$pandalanguage$pandac$ASTNode* $tmp4814 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4814));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block4:;
// line 2165
panda$collections$Array* $tmp4815 = *(&local1);
panda$collections$ImmutableArray* $tmp4816 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp4815);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4816));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4816));
panda$collections$Array* $tmp4817 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4817));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4816;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$String* local2 = NULL;
panda$collections$ImmutableArray* local3 = NULL;
panda$collections$ImmutableArray* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
panda$collections$ImmutableArray* local6 = NULL;
// line 2173
// line 2174
panda$core$Int64 $tmp4818 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4819 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4818);
org$pandalanguage$pandac$parser$Token$nullable $tmp4820 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4819);
*(&local1) = $tmp4820;
// line 2175
org$pandalanguage$pandac$parser$Token$nullable $tmp4821 = *(&local1);
panda$core$Bit $tmp4822 = panda$core$Bit$init$builtin_bit(!$tmp4821.nonnull);
bool $tmp4823 = $tmp4822.value;
if ($tmp4823) goto block1; else goto block3;
block1:;
// line 2176
panda$core$Int64 $tmp4824 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4825 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4824);
org$pandalanguage$pandac$parser$Token$nullable $tmp4826 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4825, &$s4827);
*(&local1) = $tmp4826;
// line 2177
org$pandalanguage$pandac$parser$Token$nullable $tmp4828 = *(&local1);
panda$core$Bit $tmp4829 = panda$core$Bit$init$builtin_bit(!$tmp4828.nonnull);
bool $tmp4830 = $tmp4829.value;
if ($tmp4830) goto block4; else goto block5;
block4:;
// line 2178
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 2180
panda$core$Int64 $tmp4831 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4832 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4831);
*(&local0) = $tmp4832;
goto block2;
block3:;
// line 1
// line 2183
panda$core$Int64 $tmp4833 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4834 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4833);
*(&local0) = $tmp4834;
goto block2;
block2:;
// line 2185
panda$core$Int64 $tmp4835 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4836 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4835);
org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4836);
// line 2186
panda$core$String* $tmp4837 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp4838 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4838));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4837));
*(&local2) = $tmp4837;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4837));
// line 2187
panda$core$Int64 $tmp4839 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4840 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4839);
org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4840);
// line 2188
panda$core$String* $tmp4841 = *(&local2);
panda$core$Bit $tmp4842 = panda$core$Bit$init$builtin_bit($tmp4841 == NULL);
bool $tmp4843 = $tmp4842.value;
if ($tmp4843) goto block6; else goto block7;
block6:;
// line 2189
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp4844 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4844));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2191
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
// line 2192
org$pandalanguage$pandac$parser$Token $tmp4845 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4846 = $tmp4845.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4847;
$tmp4847 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4847->value = $tmp4846;
panda$core$Int64 $tmp4848 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4849 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4848);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4850;
$tmp4850 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4850->value = $tmp4849;
ITable* $tmp4851 = ((panda$core$Equatable*) $tmp4847)->$class->itable;
while ($tmp4851->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4851 = $tmp4851->next;
}
$fn4853 $tmp4852 = $tmp4851->methods[0];
panda$core$Bit $tmp4854 = $tmp4852(((panda$core$Equatable*) $tmp4847), ((panda$core$Equatable*) $tmp4850));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4847)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4850)));
bool $tmp4855 = $tmp4854.value;
if ($tmp4855) goto block8; else goto block10;
block8:;
// line 2193
panda$collections$ImmutableArray* $tmp4856 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp4857 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4857));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4856));
*(&local3) = $tmp4856;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4856));
goto block9;
block10:;
// line 1
// line 2196
panda$collections$ImmutableArray* $tmp4858 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4858));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
goto block9;
block9:;
// line 2198
panda$collections$ImmutableArray* $tmp4859 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4860 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4860));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4859));
*(&local4) = $tmp4859;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4859));
// line 2199
panda$collections$ImmutableArray* $tmp4861 = *(&local4);
panda$core$Bit $tmp4862 = panda$core$Bit$init$builtin_bit($tmp4861 == NULL);
bool $tmp4863 = $tmp4862.value;
if ($tmp4863) goto block11; else goto block12;
block11:;
// line 2200
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4864 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4864));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4865 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4865));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4866 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4866));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 2202
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2203
org$pandalanguage$pandac$parser$Token $tmp4867 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4868 = $tmp4867.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4869;
$tmp4869 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4869->value = $tmp4868;
panda$core$Int64 $tmp4870 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4871 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4870);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4872;
$tmp4872 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4872->value = $tmp4871;
ITable* $tmp4873 = ((panda$core$Equatable*) $tmp4869)->$class->itable;
while ($tmp4873->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4873 = $tmp4873->next;
}
$fn4875 $tmp4874 = $tmp4873->methods[0];
panda$core$Bit $tmp4876 = $tmp4874(((panda$core$Equatable*) $tmp4869), ((panda$core$Equatable*) $tmp4872));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4869)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4872)));
bool $tmp4877 = $tmp4876.value;
if ($tmp4877) goto block13; else goto block15;
block13:;
// line 2204
org$pandalanguage$pandac$ASTNode* $tmp4878 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4879 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4879));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4878));
*(&local5) = $tmp4878;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4878));
// line 2205
org$pandalanguage$pandac$ASTNode* $tmp4880 = *(&local5);
panda$core$Bit $tmp4881 = panda$core$Bit$init$builtin_bit($tmp4880 == NULL);
bool $tmp4882 = $tmp4881.value;
if ($tmp4882) goto block16; else goto block17;
block16:;
// line 2206
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4883 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4883));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4884 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4884));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4885 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4885));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4886 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4886));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block17:;
goto block14;
block15:;
// line 1
// line 2210
org$pandalanguage$pandac$ASTNode* $tmp4887 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4887));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block14:;
// line 2212
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
// line 2213
org$pandalanguage$pandac$parser$Token $tmp4888 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4889 = $tmp4888.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4890;
$tmp4890 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4890->value = $tmp4889;
panda$core$Int64 $tmp4891 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp4892 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4891);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4893;
$tmp4893 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4893->value = $tmp4892;
ITable* $tmp4894 = ((panda$core$Equatable*) $tmp4890)->$class->itable;
while ($tmp4894->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4894 = $tmp4894->next;
}
$fn4896 $tmp4895 = $tmp4894->methods[0];
panda$core$Bit $tmp4897 = $tmp4895(((panda$core$Equatable*) $tmp4890), ((panda$core$Equatable*) $tmp4893));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4890)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4893)));
bool $tmp4898 = $tmp4897.value;
if ($tmp4898) goto block18; else goto block20;
block18:;
// line 2214
panda$collections$ImmutableArray* $tmp4899 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp4900 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4900));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4899));
*(&local6) = $tmp4899;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4899));
// line 2215
panda$collections$ImmutableArray* $tmp4901 = *(&local6);
panda$core$Bit $tmp4902 = panda$core$Bit$init$builtin_bit($tmp4901 == NULL);
bool $tmp4903 = $tmp4902.value;
if ($tmp4903) goto block21; else goto block22;
block21:;
// line 2216
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4904 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4904));
// unreffing body
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4905 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4905));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4906 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4906));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4907 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4907));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4908 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4908));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 2220
panda$collections$ImmutableArray* $tmp4909 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4909));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
goto block19;
block19:;
// line 2222
org$pandalanguage$pandac$ASTNode* $tmp4910 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4911 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4912 = *(&local1);
org$pandalanguage$pandac$Position $tmp4913 = ((org$pandalanguage$pandac$parser$Token) $tmp4912.value).position;
org$pandalanguage$pandac$MethodDecl$Kind $tmp4914 = *(&local0);
panda$core$String* $tmp4915 = *(&local2);
panda$collections$ImmutableArray* $tmp4916 = *(&local3);
panda$collections$ImmutableArray* $tmp4917 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp4918 = *(&local5);
panda$collections$ImmutableArray* $tmp4919 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4910, $tmp4911, $tmp4913, param1, param2, $tmp4914, $tmp4915, $tmp4916, $tmp4917, $tmp4918, $tmp4919);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4910));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4910));
panda$collections$ImmutableArray* $tmp4920 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4920));
// unreffing body
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4921 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4921));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4922 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4922));
// unreffing params
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4923 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4923));
// unreffing generics
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp4924 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4924));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return $tmp4910;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$ImmutableArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$collections$ImmutableArray* local4 = NULL;
// line 2230
// line 2231
panda$core$Int64 $tmp4925 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4926 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4925);
org$pandalanguage$pandac$parser$Token$nullable $tmp4927 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4926);
*(&local1) = $tmp4927;
// line 2232
org$pandalanguage$pandac$parser$Token$nullable $tmp4928 = *(&local1);
panda$core$Bit $tmp4929 = panda$core$Bit$init$builtin_bit(!$tmp4928.nonnull);
bool $tmp4930 = $tmp4929.value;
if ($tmp4930) goto block1; else goto block3;
block1:;
// line 2233
panda$core$Int64 $tmp4931 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4932 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4931);
org$pandalanguage$pandac$parser$Token$nullable $tmp4933 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4932, &$s4934);
*(&local1) = $tmp4933;
// line 2234
org$pandalanguage$pandac$parser$Token$nullable $tmp4935 = *(&local1);
panda$core$Bit $tmp4936 = panda$core$Bit$init$builtin_bit(!$tmp4935.nonnull);
bool $tmp4937 = $tmp4936.value;
if ($tmp4937) goto block4; else goto block5;
block4:;
// line 2235
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 2237
panda$core$Int64 $tmp4938 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4939 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4938);
*(&local0) = $tmp4939;
goto block2;
block3:;
// line 1
// line 2240
panda$core$Int64 $tmp4940 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4941 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4940);
*(&local0) = $tmp4941;
goto block2;
block2:;
// line 2242
panda$collections$ImmutableArray* $tmp4942 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4943 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4943));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4942));
*(&local2) = $tmp4942;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4942));
// line 2243
panda$collections$ImmutableArray* $tmp4944 = *(&local2);
panda$core$Bit $tmp4945 = panda$core$Bit$init$builtin_bit($tmp4944 == NULL);
bool $tmp4946 = $tmp4945.value;
if ($tmp4946) goto block6; else goto block7;
block6:;
// line 2244
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4947 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4947));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2246
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2247
org$pandalanguage$pandac$parser$Token $tmp4948 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4949 = $tmp4948.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4950;
$tmp4950 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4950->value = $tmp4949;
panda$core$Int64 $tmp4951 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4952 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4951);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4953;
$tmp4953 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4953->value = $tmp4952;
ITable* $tmp4954 = ((panda$core$Equatable*) $tmp4950)->$class->itable;
while ($tmp4954->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4954 = $tmp4954->next;
}
$fn4956 $tmp4955 = $tmp4954->methods[0];
panda$core$Bit $tmp4957 = $tmp4955(((panda$core$Equatable*) $tmp4950), ((panda$core$Equatable*) $tmp4953));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4950)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4953)));
bool $tmp4958 = $tmp4957.value;
if ($tmp4958) goto block8; else goto block10;
block8:;
// line 2248
org$pandalanguage$pandac$ASTNode* $tmp4959 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp4960 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4960));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4959));
*(&local3) = $tmp4959;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4959));
// line 2249
org$pandalanguage$pandac$ASTNode* $tmp4961 = *(&local3);
panda$core$Bit $tmp4962 = panda$core$Bit$init$builtin_bit($tmp4961 == NULL);
bool $tmp4963 = $tmp4962.value;
if ($tmp4963) goto block11; else goto block12;
block11:;
// line 2250
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4964 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4964));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4965 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4965));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 2254
org$pandalanguage$pandac$ASTNode* $tmp4966 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4966));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
// line 2256
panda$collections$ImmutableArray* $tmp4967 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4968 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4968));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4967));
*(&local4) = $tmp4967;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4967));
// line 2257
panda$collections$ImmutableArray* $tmp4969 = *(&local4);
panda$core$Bit $tmp4970 = panda$core$Bit$init$builtin_bit($tmp4969 == NULL);
bool $tmp4971 = $tmp4970.value;
if ($tmp4971) goto block13; else goto block14;
block13:;
// line 2258
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp4972 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4972));
// unreffing body
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4973 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4973));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4974 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4974));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
// line 2260
org$pandalanguage$pandac$ASTNode* $tmp4975 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4976 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp4977 = *(&local1);
org$pandalanguage$pandac$Position $tmp4978 = ((org$pandalanguage$pandac$parser$Token) $tmp4977.value).position;
panda$collections$ImmutableArray* $tmp4979 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp4979);
org$pandalanguage$pandac$MethodDecl$Kind $tmp4980 = *(&local0);
panda$collections$ImmutableArray* $tmp4981 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4982 = *(&local3);
panda$collections$ImmutableArray* $tmp4983 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4975, $tmp4976, $tmp4978, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4979, $tmp4980, &$s4984, ((panda$collections$ImmutableArray*) NULL), $tmp4981, $tmp4982, $tmp4983);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4975));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4975));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4979));
panda$collections$ImmutableArray* $tmp4985 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4985));
// unreffing body
*(&local4) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4986 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4986));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp4987 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4987));
// unreffing params
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp4975;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$ImmutableArray* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
// line 2268
panda$core$Int64 $tmp4988 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp4989 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4988);
org$pandalanguage$pandac$parser$Token$nullable $tmp4990 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4989, &$s4991);
*(&local0) = $tmp4990;
// line 2269
org$pandalanguage$pandac$parser$Token$nullable $tmp4992 = *(&local0);
panda$core$Bit $tmp4993 = panda$core$Bit$init$builtin_bit(!$tmp4992.nonnull);
bool $tmp4994 = $tmp4993.value;
if ($tmp4994) goto block1; else goto block2;
block1:;
// line 2270
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2272
panda$collections$ImmutableArray* $tmp4995 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp4996 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4996));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4995));
*(&local1) = $tmp4995;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4995));
// line 2273
panda$collections$ImmutableArray* $tmp4997 = *(&local1);
panda$core$Bit $tmp4998 = panda$core$Bit$init$builtin_bit($tmp4997 == NULL);
bool $tmp4999 = $tmp4998.value;
if ($tmp4999) goto block3; else goto block4;
block3:;
// line 2274
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5000 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5000));
// unreffing params
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2276
panda$collections$ImmutableArray* $tmp5001 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5002 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5002));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5001));
*(&local2) = $tmp5001;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5001));
// line 2277
panda$collections$ImmutableArray* $tmp5003 = *(&local2);
panda$core$Bit $tmp5004 = panda$core$Bit$init$builtin_bit($tmp5003 == NULL);
bool $tmp5005 = $tmp5004.value;
if ($tmp5005) goto block5; else goto block6;
block5:;
// line 2278
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5006 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5006));
// unreffing b
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5007 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5007));
// unreffing params
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 2280
org$pandalanguage$pandac$ASTNode* $tmp5008 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5009 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp5010 = *(&local0);
org$pandalanguage$pandac$Position $tmp5011 = ((org$pandalanguage$pandac$parser$Token) $tmp5010.value).position;
panda$core$Int64 $tmp5012 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp5013 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp5012);
panda$collections$ImmutableArray* $tmp5014 = *(&local1);
panda$collections$ImmutableArray* $tmp5015 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp5008, $tmp5009, $tmp5011, param1, param2, $tmp5013, &$s5016, ((panda$collections$ImmutableArray*) NULL), $tmp5014, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp5015);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5008));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5008));
panda$collections$ImmutableArray* $tmp5017 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5017));
// unreffing b
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5018 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5018));
// unreffing params
*(&local1) = ((panda$collections$ImmutableArray*) NULL);
return $tmp5008;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
// line 2288
org$pandalanguage$pandac$ASTNode* $tmp5019 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5020 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5020));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5019));
*(&local0) = $tmp5019;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5019));
// line 2289
org$pandalanguage$pandac$ASTNode* $tmp5021 = *(&local0);
panda$core$Bit $tmp5022 = panda$core$Bit$init$builtin_bit($tmp5021 == NULL);
bool $tmp5023 = $tmp5022.value;
if ($tmp5023) goto block1; else goto block2;
block1:;
// line 2290
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5024 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5024));
// unreffing decl
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2292
org$pandalanguage$pandac$ASTNode* $tmp5025 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5026 = (panda$core$Int64) {16};
org$pandalanguage$pandac$ASTNode* $tmp5027 = *(&local0);
$fn5029 $tmp5028 = ($fn5029) $tmp5027->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp5030 = $tmp5028($tmp5027);
org$pandalanguage$pandac$ASTNode* $tmp5031 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp5025, $tmp5026, $tmp5030, param1, param2, $tmp5031);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5025));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5025));
org$pandalanguage$pandac$ASTNode* $tmp5032 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5032));
// unreffing decl
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5025;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2299
panda$core$Int64 $tmp5033 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5034 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5033);
org$pandalanguage$pandac$parser$Token$nullable $tmp5035 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5034, &$s5036);
*(&local0) = $tmp5035;
// line 2300
org$pandalanguage$pandac$parser$Token$nullable $tmp5037 = *(&local0);
panda$core$Bit $tmp5038 = panda$core$Bit$init$builtin_bit(!$tmp5037.nonnull);
bool $tmp5039 = $tmp5038.value;
if ($tmp5039) goto block1; else goto block2;
block1:;
// line 2301
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2303
panda$collections$Array* $tmp5040 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5040);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5041 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5041));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5040));
*(&local1) = $tmp5040;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5040));
// line 2304
panda$core$Int64 $tmp5042 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp5043 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5042);
org$pandalanguage$pandac$parser$Token$nullable $tmp5044 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5043);
panda$core$Bit $tmp5045 = panda$core$Bit$init$builtin_bit($tmp5044.nonnull);
bool $tmp5046 = $tmp5045.value;
if ($tmp5046) goto block3; else goto block4;
block3:;
// line 2305
org$pandalanguage$pandac$parser$Token $tmp5047 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5048 = $tmp5047.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5049;
$tmp5049 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5049->value = $tmp5048;
panda$core$Int64 $tmp5050 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp5051 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5050);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5052;
$tmp5052 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5052->value = $tmp5051;
ITable* $tmp5053 = ((panda$core$Equatable*) $tmp5049)->$class->itable;
while ($tmp5053->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5053 = $tmp5053->next;
}
$fn5055 $tmp5054 = $tmp5053->methods[1];
panda$core$Bit $tmp5056 = $tmp5054(((panda$core$Equatable*) $tmp5049), ((panda$core$Equatable*) $tmp5052));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5049)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5052)));
bool $tmp5057 = $tmp5056.value;
if ($tmp5057) goto block5; else goto block6;
block5:;
// line 2306
org$pandalanguage$pandac$ASTNode* $tmp5058 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5059 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5059));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5058));
*(&local2) = $tmp5058;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5058));
// line 2307
org$pandalanguage$pandac$ASTNode* $tmp5060 = *(&local2);
panda$core$Bit $tmp5061 = panda$core$Bit$init$builtin_bit($tmp5060 == NULL);
bool $tmp5062 = $tmp5061.value;
if ($tmp5062) goto block7; else goto block8;
block7:;
// line 2308
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5063 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5063));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5064 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5064));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 2310
panda$collections$Array* $tmp5065 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp5066 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5065, ((panda$core$Object*) $tmp5066));
// line 2311
goto block9;
block9:;
panda$core$Int64 $tmp5067 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp5068 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5067);
org$pandalanguage$pandac$parser$Token$nullable $tmp5069 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5068);
panda$core$Bit $tmp5070 = panda$core$Bit$init$builtin_bit($tmp5069.nonnull);
bool $tmp5071 = $tmp5070.value;
if ($tmp5071) goto block10; else goto block11;
block10:;
// line 2312
org$pandalanguage$pandac$ASTNode* $tmp5072 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5073 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5073));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5072));
*(&local2) = $tmp5072;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5072));
// line 2313
org$pandalanguage$pandac$ASTNode* $tmp5074 = *(&local2);
panda$core$Bit $tmp5075 = panda$core$Bit$init$builtin_bit($tmp5074 == NULL);
bool $tmp5076 = $tmp5075.value;
if ($tmp5076) goto block12; else goto block13;
block12:;
// line 2314
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5077 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5077));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5078 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5078));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 2316
panda$collections$Array* $tmp5079 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp5080 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5079, ((panda$core$Object*) $tmp5080));
goto block9;
block11:;
org$pandalanguage$pandac$ASTNode* $tmp5081 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5081));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 2319
panda$core$Int64 $tmp5082 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp5083 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5082);
org$pandalanguage$pandac$parser$Token$nullable $tmp5084 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5083, &$s5085);
panda$core$Bit $tmp5086 = panda$core$Bit$init$builtin_bit(!$tmp5084.nonnull);
bool $tmp5087 = $tmp5086.value;
if ($tmp5087) goto block14; else goto block15;
block14:;
// line 2320
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp5088 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5088));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
goto block4;
block4:;
// line 2323
org$pandalanguage$pandac$ASTNode* $tmp5089 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5090 = (panda$core$Int64) {9};
org$pandalanguage$pandac$parser$Token$nullable $tmp5091 = *(&local0);
org$pandalanguage$pandac$Position $tmp5092 = ((org$pandalanguage$pandac$parser$Token) $tmp5091.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp5093 = *(&local0);
panda$core$String* $tmp5094 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5093.value));
panda$collections$Array* $tmp5095 = *(&local1);
panda$collections$ImmutableArray* $tmp5096 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5095);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp5089, $tmp5090, $tmp5092, param1, $tmp5094, $tmp5096);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5089));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5089));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5094));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5096));
panda$collections$Array* $tmp5097 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5097));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp5089;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$ImmutableArray* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
org$pandalanguage$pandac$parser$Token local5;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
panda$collections$ImmutableArray* local7 = NULL;
org$pandalanguage$pandac$parser$Token local8;
panda$core$Bit local9;
org$pandalanguage$pandac$ASTNode* local10 = NULL;
org$pandalanguage$pandac$ASTNode* local11 = NULL;
org$pandalanguage$pandac$ASTNode* local12 = NULL;
org$pandalanguage$pandac$ASTNode* local13 = NULL;
org$pandalanguage$pandac$ASTNode* local14 = NULL;
// line 2332
panda$core$Int64 $tmp5098 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$Kind $tmp5099 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5098);
org$pandalanguage$pandac$parser$Token$nullable $tmp5100 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5099, &$s5101);
*(&local0) = $tmp5100;
// line 2333
org$pandalanguage$pandac$parser$Token$nullable $tmp5102 = *(&local0);
panda$core$Bit $tmp5103 = panda$core$Bit$init$builtin_bit(!$tmp5102.nonnull);
bool $tmp5104 = $tmp5103.value;
if ($tmp5104) goto block1; else goto block2;
block1:;
// line 2334
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2336
panda$core$Int64 $tmp5105 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5106 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5105);
org$pandalanguage$pandac$parser$Token$nullable $tmp5107 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5106, &$s5108);
*(&local1) = $tmp5107;
// line 2337
org$pandalanguage$pandac$parser$Token$nullable $tmp5109 = *(&local1);
panda$core$Bit $tmp5110 = panda$core$Bit$init$builtin_bit(!$tmp5109.nonnull);
bool $tmp5111 = $tmp5110.value;
if ($tmp5111) goto block3; else goto block4;
block3:;
// line 2338
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2340
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
// line 2341
org$pandalanguage$pandac$parser$Token $tmp5112 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5113 = $tmp5112.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5114;
$tmp5114 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5114->value = $tmp5113;
panda$core$Int64 $tmp5115 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5116 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5115);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5117;
$tmp5117 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5117->value = $tmp5116;
ITable* $tmp5118 = ((panda$core$Equatable*) $tmp5114)->$class->itable;
while ($tmp5118->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5118 = $tmp5118->next;
}
$fn5120 $tmp5119 = $tmp5118->methods[0];
panda$core$Bit $tmp5121 = $tmp5119(((panda$core$Equatable*) $tmp5114), ((panda$core$Equatable*) $tmp5117));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5114)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5117)));
bool $tmp5122 = $tmp5121.value;
if ($tmp5122) goto block5; else goto block7;
block5:;
// line 2342
panda$collections$ImmutableArray* $tmp5123 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5124 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5124));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5123));
*(&local2) = $tmp5123;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5123));
// line 2343
panda$collections$ImmutableArray* $tmp5125 = *(&local2);
panda$core$Bit $tmp5126 = panda$core$Bit$init$builtin_bit($tmp5125 == NULL);
bool $tmp5127 = $tmp5126.value;
if ($tmp5127) goto block8; else goto block9;
block8:;
// line 2344
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5128 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5128));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2348
panda$collections$ImmutableArray* $tmp5129 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5129));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
goto block6;
block6:;
// line 2350
panda$core$Int64 $tmp5130 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5131 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5130);
org$pandalanguage$pandac$parser$Token$nullable $tmp5132 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5131, &$s5133);
panda$core$Bit $tmp5134 = panda$core$Bit$init$builtin_bit(!$tmp5132.nonnull);
bool $tmp5135 = $tmp5134.value;
if ($tmp5135) goto block10; else goto block11;
block10:;
// line 2351
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5136 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5136));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 2353
panda$collections$Array* $tmp5137 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5137);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5138 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5138));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5137));
*(&local3) = $tmp5137;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5137));
// line 2354
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5139 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5139));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2355
goto block12;
block12:;
// line 2356
org$pandalanguage$pandac$parser$Token $tmp5140 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local5) = $tmp5140;
// line 2357
org$pandalanguage$pandac$parser$Token $tmp5141 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp5142 = $tmp5141.kind;
panda$core$Int64 $tmp5143 = $tmp5142.$rawValue;
panda$core$Int64 $tmp5144 = (panda$core$Int64) {18};
panda$core$Bit $tmp5145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5143, $tmp5144);
bool $tmp5146 = $tmp5145.value;
if ($tmp5146) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp5147 = (panda$core$Int64) {19};
panda$core$Bit $tmp5148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5143, $tmp5147);
bool $tmp5149 = $tmp5148.value;
if ($tmp5149) goto block15; else goto block17;
block17:;
panda$core$Int64 $tmp5150 = (panda$core$Int64) {20};
panda$core$Bit $tmp5151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5143, $tmp5150);
bool $tmp5152 = $tmp5151.value;
if ($tmp5152) goto block15; else goto block18;
block18:;
panda$core$Int64 $tmp5153 = (panda$core$Int64) {22};
panda$core$Bit $tmp5154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5143, $tmp5153);
bool $tmp5155 = $tmp5154.value;
if ($tmp5155) goto block15; else goto block19;
block19:;
panda$core$Int64 $tmp5156 = (panda$core$Int64) {21};
panda$core$Bit $tmp5157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5143, $tmp5156);
bool $tmp5158 = $tmp5157.value;
if ($tmp5158) goto block15; else goto block20;
block20:;
panda$core$Int64 $tmp5159 = (panda$core$Int64) {14};
panda$core$Bit $tmp5160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5143, $tmp5159);
bool $tmp5161 = $tmp5160.value;
if ($tmp5161) goto block15; else goto block21;
block21:;
panda$core$Int64 $tmp5162 = (panda$core$Int64) {24};
panda$core$Bit $tmp5163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5143, $tmp5162);
bool $tmp5164 = $tmp5163.value;
if ($tmp5164) goto block15; else goto block22;
block22:;
panda$core$Int64 $tmp5165 = (panda$core$Int64) {25};
panda$core$Bit $tmp5166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5143, $tmp5165);
bool $tmp5167 = $tmp5166.value;
if ($tmp5167) goto block15; else goto block23;
block23:;
panda$core$Int64 $tmp5168 = (panda$core$Int64) {26};
panda$core$Bit $tmp5169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5143, $tmp5168);
bool $tmp5170 = $tmp5169.value;
if ($tmp5170) goto block15; else goto block24;
block24:;
panda$core$Int64 $tmp5171 = (panda$core$Int64) {27};
panda$core$Bit $tmp5172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5143, $tmp5171);
bool $tmp5173 = $tmp5172.value;
if ($tmp5173) goto block15; else goto block25;
block15:;
// line 2361
goto block13;
block25:;
panda$core$Int64 $tmp5174 = (panda$core$Int64) {12};
panda$core$Bit $tmp5175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5143, $tmp5174);
bool $tmp5176 = $tmp5175.value;
if ($tmp5176) goto block26; else goto block27;
block26:;
// line 2363
org$pandalanguage$pandac$ASTNode* $tmp5177 = *(&local4);
panda$core$Bit $tmp5178 = panda$core$Bit$init$builtin_bit($tmp5177 != NULL);
bool $tmp5179 = $tmp5178.value;
if ($tmp5179) goto block28; else goto block29;
block28:;
// line 2364
org$pandalanguage$pandac$parser$Token $tmp5180 = *(&local5);
org$pandalanguage$pandac$parser$Token $tmp5181 = *(&local5);
panda$core$String* $tmp5182 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5181);
panda$core$String* $tmp5183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5184, $tmp5182);
panda$core$String* $tmp5185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5183, &$s5186);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5180, $tmp5185);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5182));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5183));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5185));
goto block29;
block29:;
// line 2366
org$pandalanguage$pandac$ASTNode* $tmp5187 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5188 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5188));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5187));
*(&local4) = $tmp5187;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5187));
goto block14;
block27:;
panda$core$Int64 $tmp5189 = (panda$core$Int64) {49};
panda$core$Bit $tmp5190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5143, $tmp5189);
bool $tmp5191 = $tmp5190.value;
if ($tmp5191) goto block30; else goto block31;
block30:;
// line 2368
org$pandalanguage$pandac$ASTNode* $tmp5192 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp5193 = org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5192);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5194 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5194));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5193));
*(&local6) = $tmp5193;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5193));
// line 2369
org$pandalanguage$pandac$ASTNode* $tmp5195 = *(&local6);
panda$core$Bit $tmp5196 = panda$core$Bit$init$builtin_bit($tmp5195 == NULL);
bool $tmp5197 = $tmp5196.value;
if ($tmp5197) goto block32; else goto block33;
block32:;
// line 2370
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5198 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5198));
// unreffing c
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5199 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5199));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5200 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5200));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5201 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5201));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block33:;
// line 2372
panda$collections$Array* $tmp5202 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5203 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp5202, ((panda$core$Object*) $tmp5203));
// line 2373
org$pandalanguage$pandac$ASTNode* $tmp5204 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5204));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5205 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5205));
// unreffing c
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block31:;
// line 2375
goto block13;
block14:;
goto block12;
block13:;
// line 2378
panda$collections$ImmutableArray* $tmp5206 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5206);
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5207 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5207));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5206));
*(&local7) = $tmp5206;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5206));
// line 2379
goto block34;
block34:;
// line 2380
org$pandalanguage$pandac$parser$Token $tmp5208 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local8) = $tmp5208;
// line 2381
org$pandalanguage$pandac$parser$Token $tmp5209 = *(&local8);
org$pandalanguage$pandac$parser$Token$Kind $tmp5210 = $tmp5209.kind;
panda$core$Int64 $tmp5211 = $tmp5210.$rawValue;
panda$core$Int64 $tmp5212 = (panda$core$Int64) {14};
panda$core$Bit $tmp5213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5211, $tmp5212);
bool $tmp5214 = $tmp5213.value;
if ($tmp5214) goto block37; else goto block38;
block37:;
// line 2383
panda$collections$ImmutableArray* $tmp5215 = *(&local7);
ITable* $tmp5216 = ((panda$collections$CollectionView*) $tmp5215)->$class->itable;
while ($tmp5216->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5216 = $tmp5216->next;
}
$fn5218 $tmp5217 = $tmp5216->methods[0];
panda$core$Int64 $tmp5219 = $tmp5217(((panda$collections$CollectionView*) $tmp5215));
panda$core$Int64 $tmp5220 = (panda$core$Int64) {0};
int64_t $tmp5221 = $tmp5219.value;
int64_t $tmp5222 = $tmp5220.value;
bool $tmp5223 = $tmp5221 > $tmp5222;
panda$core$Bit $tmp5224 = (panda$core$Bit) {$tmp5223};
bool $tmp5225 = $tmp5224.value;
if ($tmp5225) goto block39; else goto block40;
block39:;
// line 2384
org$pandalanguage$pandac$parser$Token $tmp5226 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5227 = *(&local8);
panda$core$String* $tmp5228 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5227);
panda$core$String* $tmp5229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5230, $tmp5228);
panda$core$String* $tmp5231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5229, &$s5232);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5226, $tmp5231);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5228));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5229));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5231));
// line 2385
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5233 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5233));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5234 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5234));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5235 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5235));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5236 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5236));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block40:;
// line 2387
panda$collections$ImmutableArray* $tmp5237 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(param0);
panda$collections$ImmutableArray* $tmp5238 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5238));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5237));
*(&local7) = $tmp5237;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5237));
goto block36;
block38:;
panda$core$Int64 $tmp5239 = (panda$core$Int64) {12};
panda$core$Bit $tmp5240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5211, $tmp5239);
bool $tmp5241 = $tmp5240.value;
if ($tmp5241) goto block41; else goto block42;
block41:;
// line 2389
org$pandalanguage$pandac$ASTNode* $tmp5242 = *(&local4);
panda$core$Bit $tmp5243 = panda$core$Bit$init$builtin_bit($tmp5242 != NULL);
bool $tmp5244 = $tmp5243.value;
if ($tmp5244) goto block43; else goto block44;
block43:;
*(&local9) = $tmp5243;
goto block45;
block44:;
panda$collections$ImmutableArray* $tmp5245 = *(&local7);
ITable* $tmp5246 = ((panda$collections$CollectionView*) $tmp5245)->$class->itable;
while ($tmp5246->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5246 = $tmp5246->next;
}
$fn5248 $tmp5247 = $tmp5246->methods[0];
panda$core$Int64 $tmp5249 = $tmp5247(((panda$collections$CollectionView*) $tmp5245));
panda$core$Int64 $tmp5250 = (panda$core$Int64) {0};
int64_t $tmp5251 = $tmp5249.value;
int64_t $tmp5252 = $tmp5250.value;
bool $tmp5253 = $tmp5251 > $tmp5252;
panda$core$Bit $tmp5254 = (panda$core$Bit) {$tmp5253};
*(&local9) = $tmp5254;
goto block45;
block45:;
panda$core$Bit $tmp5255 = *(&local9);
bool $tmp5256 = $tmp5255.value;
if ($tmp5256) goto block46; else goto block47;
block46:;
// line 2390
org$pandalanguage$pandac$parser$Token $tmp5257 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5258 = *(&local8);
panda$core$String* $tmp5259 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5258);
panda$core$String* $tmp5260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5261, $tmp5259);
panda$core$String* $tmp5262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5260, &$s5263);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5257, $tmp5262);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5259));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5260));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5262));
// line 2391
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5264 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5264));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5265 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5265));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5266 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5266));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5267 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5267));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block47:;
// line 2393
org$pandalanguage$pandac$ASTNode* $tmp5268 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5269 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5269));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5268));
*(&local4) = $tmp5268;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5268));
goto block36;
block42:;
panda$core$Int64 $tmp5270 = (panda$core$Int64) {18};
panda$core$Bit $tmp5271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5211, $tmp5270);
bool $tmp5272 = $tmp5271.value;
if ($tmp5272) goto block48; else goto block49;
block48:;
// line 2395
org$pandalanguage$pandac$ASTNode* $tmp5273 = *(&local4);
panda$collections$ImmutableArray* $tmp5274 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5275 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5273, $tmp5274);
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5276 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5276));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5275));
*(&local10) = $tmp5275;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5275));
// line 2396
org$pandalanguage$pandac$ASTNode* $tmp5277 = *(&local10);
panda$core$Bit $tmp5278 = panda$core$Bit$init$builtin_bit($tmp5277 == NULL);
bool $tmp5279 = $tmp5278.value;
if ($tmp5279) goto block50; else goto block51;
block50:;
// line 2397
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5280 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5280));
// unreffing decl
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5281 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5281));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5282 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5282));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5283 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5283));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5284 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5284));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block51:;
// line 2399
panda$collections$Array* $tmp5285 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5286 = *(&local10);
panda$collections$Array$add$panda$collections$Array$T($tmp5285, ((panda$core$Object*) $tmp5286));
// line 2400
org$pandalanguage$pandac$ASTNode* $tmp5287 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5287));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2401
panda$collections$ImmutableArray* $tmp5288 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5288);
panda$collections$ImmutableArray* $tmp5289 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5289));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5288));
*(&local7) = $tmp5288;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5288));
org$pandalanguage$pandac$ASTNode* $tmp5290 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5290));
// unreffing decl
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block49:;
panda$core$Int64 $tmp5291 = (panda$core$Int64) {19};
panda$core$Bit $tmp5292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5211, $tmp5291);
bool $tmp5293 = $tmp5292.value;
if ($tmp5293) goto block52; else goto block53;
block52:;
// line 2403
org$pandalanguage$pandac$ASTNode* $tmp5294 = *(&local4);
panda$collections$ImmutableArray* $tmp5295 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5296 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5294, $tmp5295);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5297 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5297));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5296));
*(&local11) = $tmp5296;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5296));
// line 2404
org$pandalanguage$pandac$ASTNode* $tmp5298 = *(&local11);
panda$core$Bit $tmp5299 = panda$core$Bit$init$builtin_bit($tmp5298 == NULL);
bool $tmp5300 = $tmp5299.value;
if ($tmp5300) goto block54; else goto block55;
block54:;
// line 2405
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5301 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5301));
// unreffing decl
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5302 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5302));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5303 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5303));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5304 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5304));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5305 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5305));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block55:;
// line 2407
panda$collections$Array* $tmp5306 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5307 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp5306, ((panda$core$Object*) $tmp5307));
// line 2408
org$pandalanguage$pandac$ASTNode* $tmp5308 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5308));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2409
panda$collections$ImmutableArray* $tmp5309 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5309);
panda$collections$ImmutableArray* $tmp5310 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5310));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5309));
*(&local7) = $tmp5309;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5309));
org$pandalanguage$pandac$ASTNode* $tmp5311 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5311));
// unreffing decl
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block53:;
panda$core$Int64 $tmp5312 = (panda$core$Int64) {20};
panda$core$Bit $tmp5313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5211, $tmp5312);
bool $tmp5314 = $tmp5313.value;
if ($tmp5314) goto block56; else goto block57;
block56:;
// line 2411
org$pandalanguage$pandac$ASTNode* $tmp5315 = *(&local4);
panda$collections$ImmutableArray* $tmp5316 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5317 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5315, $tmp5316);
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5318 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5318));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5317));
*(&local12) = $tmp5317;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5317));
// line 2412
org$pandalanguage$pandac$ASTNode* $tmp5319 = *(&local12);
panda$core$Bit $tmp5320 = panda$core$Bit$init$builtin_bit($tmp5319 == NULL);
bool $tmp5321 = $tmp5320.value;
if ($tmp5321) goto block58; else goto block59;
block58:;
// line 2413
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5322 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5322));
// unreffing decl
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5323 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5323));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5324 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5324));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5325 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5325));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5326 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5326));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block59:;
// line 2415
panda$collections$Array* $tmp5327 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5328 = *(&local12);
panda$collections$Array$add$panda$collections$Array$T($tmp5327, ((panda$core$Object*) $tmp5328));
// line 2416
org$pandalanguage$pandac$ASTNode* $tmp5329 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5329));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2417
panda$collections$ImmutableArray* $tmp5330 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5330);
panda$collections$ImmutableArray* $tmp5331 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5331));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5330));
*(&local7) = $tmp5330;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5330));
org$pandalanguage$pandac$ASTNode* $tmp5332 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5332));
// unreffing decl
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block57:;
panda$core$Int64 $tmp5333 = (panda$core$Int64) {22};
panda$core$Bit $tmp5334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5211, $tmp5333);
bool $tmp5335 = $tmp5334.value;
if ($tmp5335) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp5336 = (panda$core$Int64) {21};
panda$core$Bit $tmp5337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5211, $tmp5336);
bool $tmp5338 = $tmp5337.value;
if ($tmp5338) goto block60; else goto block62;
block60:;
// line 2419
org$pandalanguage$pandac$ASTNode* $tmp5339 = *(&local4);
panda$collections$ImmutableArray* $tmp5340 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5341 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5339, $tmp5340);
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5342 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5342));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5341));
*(&local13) = $tmp5341;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5341));
// line 2420
org$pandalanguage$pandac$ASTNode* $tmp5343 = *(&local13);
panda$core$Bit $tmp5344 = panda$core$Bit$init$builtin_bit($tmp5343 == NULL);
bool $tmp5345 = $tmp5344.value;
if ($tmp5345) goto block63; else goto block64;
block63:;
// line 2421
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5346 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5346));
// unreffing decl
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5347 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5347));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5348 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5348));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5349 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5349));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5350 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5350));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block64:;
// line 2423
panda$collections$Array* $tmp5351 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5352 = *(&local13);
panda$collections$Array$add$panda$collections$Array$T($tmp5351, ((panda$core$Object*) $tmp5352));
// line 2424
org$pandalanguage$pandac$ASTNode* $tmp5353 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5353));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2425
panda$collections$ImmutableArray* $tmp5354 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5354);
panda$collections$ImmutableArray* $tmp5355 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5355));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5354));
*(&local7) = $tmp5354;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5354));
org$pandalanguage$pandac$ASTNode* $tmp5356 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5356));
// unreffing decl
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block62:;
panda$core$Int64 $tmp5357 = (panda$core$Int64) {24};
panda$core$Bit $tmp5358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5211, $tmp5357);
bool $tmp5359 = $tmp5358.value;
if ($tmp5359) goto block65; else goto block66;
block66:;
panda$core$Int64 $tmp5360 = (panda$core$Int64) {25};
panda$core$Bit $tmp5361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5211, $tmp5360);
bool $tmp5362 = $tmp5361.value;
if ($tmp5362) goto block65; else goto block67;
block67:;
panda$core$Int64 $tmp5363 = (panda$core$Int64) {26};
panda$core$Bit $tmp5364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5211, $tmp5363);
bool $tmp5365 = $tmp5364.value;
if ($tmp5365) goto block65; else goto block68;
block68:;
panda$core$Int64 $tmp5366 = (panda$core$Int64) {27};
panda$core$Bit $tmp5367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5211, $tmp5366);
bool $tmp5368 = $tmp5367.value;
if ($tmp5368) goto block65; else goto block69;
block65:;
// line 2427
org$pandalanguage$pandac$ASTNode* $tmp5369 = *(&local4);
panda$collections$ImmutableArray* $tmp5370 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5371 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5369, $tmp5370);
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5372 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5372));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5371));
*(&local14) = $tmp5371;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5371));
// line 2428
org$pandalanguage$pandac$ASTNode* $tmp5373 = *(&local14);
panda$core$Bit $tmp5374 = panda$core$Bit$init$builtin_bit($tmp5373 == NULL);
bool $tmp5375 = $tmp5374.value;
if ($tmp5375) goto block70; else goto block71;
block70:;
// line 2429
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5376 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5376));
// unreffing decl
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp5377 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5377));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5378 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5378));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5379 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5379));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5380 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5380));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block71:;
// line 2431
panda$collections$Array* $tmp5381 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5382 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp5381, ((panda$core$Object*) $tmp5382));
// line 2432
org$pandalanguage$pandac$ASTNode* $tmp5383 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5383));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2433
panda$collections$ImmutableArray* $tmp5384 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5384);
panda$collections$ImmutableArray* $tmp5385 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5385));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5384));
*(&local7) = $tmp5384;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5384));
org$pandalanguage$pandac$ASTNode* $tmp5386 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5386));
// unreffing decl
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block69:;
panda$core$Int64 $tmp5387 = (panda$core$Int64) {101};
panda$core$Bit $tmp5388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5211, $tmp5387);
bool $tmp5389 = $tmp5388.value;
if ($tmp5389) goto block72; else goto block73;
block72:;
// line 2435
panda$core$Int64 $tmp5390 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5391 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5390);
org$pandalanguage$pandac$parser$Token$nullable $tmp5392 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5391, &$s5393);
// line 2436
goto block35;
block73:;
// line 2438
org$pandalanguage$pandac$parser$Token $tmp5394 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5395 = *(&local8);
panda$core$String* $tmp5396 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5395);
panda$core$String* $tmp5397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5398, $tmp5396);
panda$core$String* $tmp5399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5397, &$s5400);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5394, $tmp5399);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5396));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5397));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5399));
// line 2439
org$pandalanguage$pandac$parser$Token $tmp5401 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 2440
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5402 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5402));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5403 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5403));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5404 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5404));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5405 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5405));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block36:;
goto block34;
block35:;
// line 2443
org$pandalanguage$pandac$ASTNode* $tmp5406 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5407 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$Token$nullable $tmp5408 = *(&local0);
org$pandalanguage$pandac$Position $tmp5409 = ((org$pandalanguage$pandac$parser$Token) $tmp5408.value).position;
panda$core$Int64 $tmp5410 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5411 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5410);
org$pandalanguage$pandac$parser$Token$nullable $tmp5412 = *(&local1);
panda$core$String* $tmp5413 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5412.value));
panda$collections$ImmutableArray* $tmp5414 = *(&local2);
panda$collections$Array* $tmp5415 = *(&local3);
panda$collections$ImmutableArray* $tmp5416 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5415);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5406, $tmp5407, $tmp5409, param1, param2, $tmp5411, $tmp5413, $tmp5414, ((panda$collections$ImmutableArray*) NULL), $tmp5416);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5406));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5406));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5413));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5416));
panda$collections$ImmutableArray* $tmp5417 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5417));
// unreffing a
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5418 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5418));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5419 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5419));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5420 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5420));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp5406;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
// line 2452
org$pandalanguage$pandac$parser$Token $tmp5421 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp5421;
// line 2453
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2454
org$pandalanguage$pandac$parser$Token $tmp5422 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5423 = $tmp5422.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5424;
$tmp5424 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5424->value = $tmp5423;
panda$core$Int64 $tmp5425 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp5426 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5425);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5427;
$tmp5427 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5427->value = $tmp5426;
ITable* $tmp5428 = ((panda$core$Equatable*) $tmp5424)->$class->itable;
while ($tmp5428->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5428 = $tmp5428->next;
}
$fn5430 $tmp5429 = $tmp5428->methods[0];
panda$core$Bit $tmp5431 = $tmp5429(((panda$core$Equatable*) $tmp5424), ((panda$core$Equatable*) $tmp5427));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5424)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5427)));
bool $tmp5432 = $tmp5431.value;
if ($tmp5432) goto block1; else goto block3;
block1:;
// line 2455
org$pandalanguage$pandac$ASTNode* $tmp5433 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5434 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5434));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5433));
*(&local1) = $tmp5433;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5433));
// line 2456
org$pandalanguage$pandac$ASTNode* $tmp5435 = *(&local1);
panda$core$Bit $tmp5436 = panda$core$Bit$init$builtin_bit($tmp5435 == NULL);
bool $tmp5437 = $tmp5436.value;
if ($tmp5437) goto block4; else goto block5;
block4:;
// line 2457
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5438 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5438));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 2461
org$pandalanguage$pandac$ASTNode* $tmp5439 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5439));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block2;
block2:;
// line 2463
panda$collections$ImmutableArray* $tmp5440 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(param0);
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5441 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5441));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5440));
*(&local2) = $tmp5440;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5440));
// line 2464
panda$collections$ImmutableArray* $tmp5442 = *(&local2);
panda$core$Bit $tmp5443 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5444 = $tmp5443.value;
if ($tmp5444) goto block6; else goto block7;
block6:;
// line 2465
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5445 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5445));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5446 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5446));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2467
org$pandalanguage$pandac$parser$Token $tmp5447 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5448 = $tmp5447.kind;
panda$core$Int64 $tmp5449 = $tmp5448.$rawValue;
panda$core$Int64 $tmp5450 = (panda$core$Int64) {18};
panda$core$Bit $tmp5451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5449, $tmp5450);
bool $tmp5452 = $tmp5451.value;
if ($tmp5452) goto block9; else goto block10;
block9:;
// line 2469
org$pandalanguage$pandac$ASTNode* $tmp5453 = *(&local1);
panda$collections$ImmutableArray* $tmp5454 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5455 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5453, $tmp5454);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5455));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5455));
panda$collections$ImmutableArray* $tmp5456 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5456));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5457 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5457));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5455;
block10:;
panda$core$Int64 $tmp5458 = (panda$core$Int64) {19};
panda$core$Bit $tmp5459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5449, $tmp5458);
bool $tmp5460 = $tmp5459.value;
if ($tmp5460) goto block11; else goto block12;
block11:;
// line 2471
org$pandalanguage$pandac$ASTNode* $tmp5461 = *(&local1);
panda$collections$ImmutableArray* $tmp5462 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5463 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5461, $tmp5462);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5463));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5463));
panda$collections$ImmutableArray* $tmp5464 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5464));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5465 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5465));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5463;
block12:;
panda$core$Int64 $tmp5466 = (panda$core$Int64) {20};
panda$core$Bit $tmp5467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5449, $tmp5466);
bool $tmp5468 = $tmp5467.value;
if ($tmp5468) goto block13; else goto block14;
block13:;
// line 2473
org$pandalanguage$pandac$ASTNode* $tmp5469 = *(&local1);
panda$collections$ImmutableArray* $tmp5470 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5471 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5469, $tmp5470);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5471));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5471));
panda$collections$ImmutableArray* $tmp5472 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5472));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5473 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5473));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5471;
block14:;
panda$core$Int64 $tmp5474 = (panda$core$Int64) {22};
panda$core$Bit $tmp5475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5449, $tmp5474);
bool $tmp5476 = $tmp5475.value;
if ($tmp5476) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp5477 = (panda$core$Int64) {21};
panda$core$Bit $tmp5478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5449, $tmp5477);
bool $tmp5479 = $tmp5478.value;
if ($tmp5479) goto block15; else goto block17;
block15:;
// line 2475
org$pandalanguage$pandac$ASTNode* $tmp5480 = *(&local1);
panda$collections$ImmutableArray* $tmp5481 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5482 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5480, $tmp5481);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5482));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5482));
panda$collections$ImmutableArray* $tmp5483 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5483));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5484 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5484));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5482;
block17:;
panda$core$Int64 $tmp5485 = (panda$core$Int64) {23};
panda$core$Bit $tmp5486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5449, $tmp5485);
bool $tmp5487 = $tmp5486.value;
if ($tmp5487) goto block18; else goto block19;
block18:;
// line 2477
org$pandalanguage$pandac$ASTNode* $tmp5488 = *(&local1);
panda$collections$ImmutableArray* $tmp5489 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5490 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5488, $tmp5489);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5490));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5490));
panda$collections$ImmutableArray* $tmp5491 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5491));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5492 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5492));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5490;
block19:;
panda$core$Int64 $tmp5493 = (panda$core$Int64) {24};
panda$core$Bit $tmp5494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5449, $tmp5493);
bool $tmp5495 = $tmp5494.value;
if ($tmp5495) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp5496 = (panda$core$Int64) {25};
panda$core$Bit $tmp5497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5449, $tmp5496);
bool $tmp5498 = $tmp5497.value;
if ($tmp5498) goto block20; else goto block22;
block22:;
panda$core$Int64 $tmp5499 = (panda$core$Int64) {26};
panda$core$Bit $tmp5500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5449, $tmp5499);
bool $tmp5501 = $tmp5500.value;
if ($tmp5501) goto block20; else goto block23;
block23:;
panda$core$Int64 $tmp5502 = (panda$core$Int64) {27};
panda$core$Bit $tmp5503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5449, $tmp5502);
bool $tmp5504 = $tmp5503.value;
if ($tmp5504) goto block20; else goto block24;
block20:;
// line 2479
org$pandalanguage$pandac$ASTNode* $tmp5505 = *(&local1);
panda$collections$ImmutableArray* $tmp5506 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5507 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5505, $tmp5506);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5507));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5507));
panda$collections$ImmutableArray* $tmp5508 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5508));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5509 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5509));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5507;
block24:;
// line 2482
panda$core$Int64 $tmp5510 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$Kind $tmp5511 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5510);
org$pandalanguage$pandac$parser$Token$nullable $tmp5512 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5511, &$s5513);
// line 2483
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5514 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5514));
// unreffing a
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5515 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5515));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
panda$core$Bit $tmp5516 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5517 = $tmp5516.value;
if ($tmp5517) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp5518 = (panda$core$Int64) {2451};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5519, $tmp5518, &$s5520);
abort(); // unreachable
block25:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$ImmutableArray* local2 = NULL;
panda$collections$ImmutableArray* local3 = NULL;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
// line 2491
panda$core$Int64 $tmp5521 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$Kind $tmp5522 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5521);
org$pandalanguage$pandac$parser$Token$nullable $tmp5523 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5522, &$s5524);
*(&local0) = $tmp5523;
// line 2492
org$pandalanguage$pandac$parser$Token$nullable $tmp5525 = *(&local0);
panda$core$Bit $tmp5526 = panda$core$Bit$init$builtin_bit(!$tmp5525.nonnull);
bool $tmp5527 = $tmp5526.value;
if ($tmp5527) goto block1; else goto block2;
block1:;
// line 2493
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2495
panda$core$Int64 $tmp5528 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5529 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5528);
org$pandalanguage$pandac$parser$Token$nullable $tmp5530 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5529, &$s5531);
*(&local1) = $tmp5530;
// line 2496
org$pandalanguage$pandac$parser$Token$nullable $tmp5532 = *(&local1);
panda$core$Bit $tmp5533 = panda$core$Bit$init$builtin_bit(!$tmp5532.nonnull);
bool $tmp5534 = $tmp5533.value;
if ($tmp5534) goto block3; else goto block4;
block3:;
// line 2497
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2499
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
// line 2500
org$pandalanguage$pandac$parser$Token $tmp5535 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5536 = $tmp5535.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5537;
$tmp5537 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5537->value = $tmp5536;
panda$core$Int64 $tmp5538 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5539 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5538);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5540;
$tmp5540 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5540->value = $tmp5539;
ITable* $tmp5541 = ((panda$core$Equatable*) $tmp5537)->$class->itable;
while ($tmp5541->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5541 = $tmp5541->next;
}
$fn5543 $tmp5542 = $tmp5541->methods[0];
panda$core$Bit $tmp5544 = $tmp5542(((panda$core$Equatable*) $tmp5537), ((panda$core$Equatable*) $tmp5540));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5537)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5540)));
bool $tmp5545 = $tmp5544.value;
if ($tmp5545) goto block5; else goto block7;
block5:;
// line 2501
panda$collections$ImmutableArray* $tmp5546 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5547 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5547));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5546));
*(&local2) = $tmp5546;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5546));
// line 2502
panda$collections$ImmutableArray* $tmp5548 = *(&local2);
panda$core$Bit $tmp5549 = panda$core$Bit$init$builtin_bit($tmp5548 == NULL);
bool $tmp5550 = $tmp5549.value;
if ($tmp5550) goto block8; else goto block9;
block8:;
// line 2503
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5551 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5551));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2507
panda$collections$ImmutableArray* $tmp5552 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5552));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
goto block6;
block6:;
// line 2509
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
// line 2510
org$pandalanguage$pandac$parser$Token $tmp5553 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5554 = $tmp5553.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5555;
$tmp5555 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5555->value = $tmp5554;
panda$core$Int64 $tmp5556 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp5557 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5556);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5558;
$tmp5558 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5558->value = $tmp5557;
ITable* $tmp5559 = ((panda$core$Equatable*) $tmp5555)->$class->itable;
while ($tmp5559->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5559 = $tmp5559->next;
}
$fn5561 $tmp5560 = $tmp5559->methods[0];
panda$core$Bit $tmp5562 = $tmp5560(((panda$core$Equatable*) $tmp5555), ((panda$core$Equatable*) $tmp5558));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5555)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5558)));
bool $tmp5563 = $tmp5562.value;
if ($tmp5563) goto block10; else goto block12;
block10:;
// line 2511
panda$collections$ImmutableArray* $tmp5564 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5565 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5565));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5564));
*(&local3) = $tmp5564;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5564));
// line 2512
panda$collections$ImmutableArray* $tmp5566 = *(&local3);
panda$core$Bit $tmp5567 = panda$core$Bit$init$builtin_bit($tmp5566 == NULL);
bool $tmp5568 = $tmp5567.value;
if ($tmp5568) goto block13; else goto block14;
block13:;
// line 2513
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5569 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5569));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5570 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5570));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2517
panda$collections$ImmutableArray* $tmp5571 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5571));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
goto block11;
block11:;
// line 2519
panda$core$Int64 $tmp5572 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5573 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5572);
org$pandalanguage$pandac$parser$Token$nullable $tmp5574 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5573, &$s5575);
panda$core$Bit $tmp5576 = panda$core$Bit$init$builtin_bit(!$tmp5574.nonnull);
bool $tmp5577 = $tmp5576.value;
if ($tmp5577) goto block15; else goto block16;
block15:;
// line 2520
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5578 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5578));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5579 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5579));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 2522
panda$collections$Array* $tmp5580 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5580);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5581 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5581));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5580));
*(&local4) = $tmp5580;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5580));
// line 2523
goto block17;
block17:;
panda$core$Int64 $tmp5582 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5583 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5582);
org$pandalanguage$pandac$parser$Token$nullable $tmp5584 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5583);
panda$core$Bit $tmp5585 = panda$core$Bit$init$builtin_bit(!$tmp5584.nonnull);
bool $tmp5586 = $tmp5585.value;
if ($tmp5586) goto block18; else goto block19;
block18:;
// line 2524
org$pandalanguage$pandac$ASTNode* $tmp5587 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5588 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5588));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5587));
*(&local5) = $tmp5587;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5587));
// line 2525
org$pandalanguage$pandac$ASTNode* $tmp5589 = *(&local5);
panda$core$Bit $tmp5590 = panda$core$Bit$init$builtin_bit($tmp5589 == NULL);
bool $tmp5591 = $tmp5590.value;
if ($tmp5591) goto block20; else goto block21;
block20:;
// line 2526
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5592 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5592));
// unreffing member
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5593 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5593));
// unreffing members
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5594 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5594));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5595 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5595));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 2528
panda$collections$Array* $tmp5596 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp5597 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp5596, ((panda$core$Object*) $tmp5597));
org$pandalanguage$pandac$ASTNode* $tmp5598 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5598));
// unreffing member
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block17;
block19:;
// line 2530
org$pandalanguage$pandac$ASTNode* $tmp5599 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5600 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$Token$nullable $tmp5601 = *(&local0);
org$pandalanguage$pandac$Position $tmp5602 = ((org$pandalanguage$pandac$parser$Token) $tmp5601.value).position;
panda$core$Int64 $tmp5603 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5604 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5603);
org$pandalanguage$pandac$parser$Token$nullable $tmp5605 = *(&local1);
panda$core$String* $tmp5606 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5605.value));
panda$collections$ImmutableArray* $tmp5607 = *(&local2);
panda$collections$ImmutableArray* $tmp5608 = *(&local3);
panda$collections$Array* $tmp5609 = *(&local4);
panda$collections$ImmutableArray* $tmp5610 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5609);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5599, $tmp5600, $tmp5602, param1, param2, $tmp5604, $tmp5606, $tmp5607, $tmp5608, $tmp5610);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5599));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5599));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5606));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5610));
panda$collections$Array* $tmp5611 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5611));
// unreffing members
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5612 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5612));
// unreffing stypes
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp5613 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5613));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp5599;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, panda$collections$ImmutableArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$ImmutableArray* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$collections$Array* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 2539
panda$core$Int64 $tmp5614 = (panda$core$Int64) {19};
org$pandalanguage$pandac$parser$Token$Kind $tmp5615 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5614);
org$pandalanguage$pandac$parser$Token$nullable $tmp5616 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5615, &$s5617);
*(&local0) = $tmp5616;
// line 2540
org$pandalanguage$pandac$parser$Token$nullable $tmp5618 = *(&local0);
panda$core$Bit $tmp5619 = panda$core$Bit$init$builtin_bit(!$tmp5618.nonnull);
bool $tmp5620 = $tmp5619.value;
if ($tmp5620) goto block1; else goto block2;
block1:;
// line 2541
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2543
panda$core$Int64 $tmp5621 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5622 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5621);
org$pandalanguage$pandac$parser$Token$nullable $tmp5623 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5622, &$s5624);
*(&local1) = $tmp5623;
// line 2544
org$pandalanguage$pandac$parser$Token$nullable $tmp5625 = *(&local1);
panda$core$Bit $tmp5626 = panda$core$Bit$init$builtin_bit(!$tmp5625.nonnull);
bool $tmp5627 = $tmp5626.value;
if ($tmp5627) goto block3; else goto block4;
block3:;
// line 2545
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2547
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
// line 2548
org$pandalanguage$pandac$parser$Token $tmp5628 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5629 = $tmp5628.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5630;
$tmp5630 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5630->value = $tmp5629;
panda$core$Int64 $tmp5631 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5632 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5631);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5633;
$tmp5633 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5633->value = $tmp5632;
ITable* $tmp5634 = ((panda$core$Equatable*) $tmp5630)->$class->itable;
while ($tmp5634->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5634 = $tmp5634->next;
}
$fn5636 $tmp5635 = $tmp5634->methods[0];
panda$core$Bit $tmp5637 = $tmp5635(((panda$core$Equatable*) $tmp5630), ((panda$core$Equatable*) $tmp5633));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5630)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5633)));
bool $tmp5638 = $tmp5637.value;
if ($tmp5638) goto block5; else goto block7;
block5:;
// line 2549
panda$collections$ImmutableArray* $tmp5639 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$collections$ImmutableArray* $tmp5640 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5640));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5639));
*(&local2) = $tmp5639;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5639));
// line 2550
panda$collections$ImmutableArray* $tmp5641 = *(&local2);
panda$core$Bit $tmp5642 = panda$core$Bit$init$builtin_bit($tmp5641 == NULL);
bool $tmp5643 = $tmp5642.value;
if ($tmp5643) goto block8; else goto block9;
block8:;
// line 2551
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$ImmutableArray* $tmp5644 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5644));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2555
panda$collections$ImmutableArray* $tmp5645 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp5645);
panda$collections$ImmutableArray* $tmp5646 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5646));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5645));
*(&local2) = $tmp5645;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5645));
goto block6;
block6:;
// line 2557
panda$collections$Array* $tmp5647 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5647);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5648 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5648));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5647));
*(&local3) = $tmp5647;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5647));
// line 2558
panda$core$Int64 $tmp5649 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp5650 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5649);
org$pandalanguage$pandac$parser$Token$nullable $tmp5651 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5650);
panda$core$Bit $tmp5652 = panda$core$Bit$init$builtin_bit($tmp5651.nonnull);
bool $tmp5653 = $tmp5652.value;
if ($tmp5653) goto block10; else goto block11;
block10:;
// line 2559
org$pandalanguage$pandac$ASTNode* $tmp5654 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5655 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5655));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5654));
*(&local4) = $tmp5654;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5654));
// line 2560
org$pandalanguage$pandac$ASTNode* $tmp5656 = *(&local4);
panda$core$Bit $tmp5657 = panda$core$Bit$init$builtin_bit($tmp5656 == NULL);
bool $tmp5658 = $tmp5657.value;
if ($tmp5658) goto block12; else goto block13;
block12:;
// line 2561
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5659 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5659));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5660 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5660));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5661 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5661));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 2563
panda$collections$Array* $tmp5662 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5663 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp5662, ((panda$core$Object*) $tmp5663));
// line 2564
goto block14;
block14:;
panda$core$Int64 $tmp5664 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp5665 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5664);
org$pandalanguage$pandac$parser$Token$nullable $tmp5666 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5665);
panda$core$Bit $tmp5667 = panda$core$Bit$init$builtin_bit($tmp5666.nonnull);
bool $tmp5668 = $tmp5667.value;
if ($tmp5668) goto block15; else goto block16;
block15:;
// line 2565
org$pandalanguage$pandac$ASTNode* $tmp5669 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
org$pandalanguage$pandac$ASTNode* $tmp5670 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5670));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5669));
*(&local4) = $tmp5669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5669));
// line 2566
org$pandalanguage$pandac$ASTNode* $tmp5671 = *(&local4);
panda$core$Bit $tmp5672 = panda$core$Bit$init$builtin_bit($tmp5671 == NULL);
bool $tmp5673 = $tmp5672.value;
if ($tmp5673) goto block17; else goto block18;
block17:;
// line 2567
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5674 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5674));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5675 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5675));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5676 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5676));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 2569
panda$collections$Array* $tmp5677 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5678 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp5677, ((panda$core$Object*) $tmp5678));
goto block14;
block16:;
org$pandalanguage$pandac$ASTNode* $tmp5679 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5679));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block11;
block11:;
// line 2572
panda$core$Int64 $tmp5680 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5681 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5680);
org$pandalanguage$pandac$parser$Token$nullable $tmp5682 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5681, &$s5683);
panda$core$Bit $tmp5684 = panda$core$Bit$init$builtin_bit(!$tmp5682.nonnull);
bool $tmp5685 = $tmp5684.value;
if ($tmp5685) goto block19; else goto block20;
block19:;
// line 2573
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp5686 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5686));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5687 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5687));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 2575
panda$collections$Array* $tmp5688 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5688);
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5689 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5689));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5688));
*(&local5) = $tmp5688;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5688));
// line 2576
goto block21;
block21:;
panda$core$Int64 $tmp5690 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5691 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5690);
org$pandalanguage$pandac$parser$Token$nullable $tmp5692 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5691);
panda$core$Bit $tmp5693 = panda$core$Bit$init$builtin_bit(!$tmp5692.nonnull);
bool $tmp5694 = $tmp5693.value;
if ($tmp5694) goto block22; else goto block23;
block22:;
// line 2577
org$pandalanguage$pandac$ASTNode* $tmp5695 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5696 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5696));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5695));
*(&local6) = $tmp5695;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5695));
// line 2578
org$pandalanguage$pandac$ASTNode* $tmp5697 = *(&local6);
panda$core$Bit $tmp5698 = panda$core$Bit$init$builtin_bit($tmp5697 == NULL);
bool $tmp5699 = $tmp5698.value;
if ($tmp5699) goto block24; else goto block25;
block24:;
// line 2579
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5700 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5700));
// unreffing member
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5701 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5701));
// unreffing members
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5702 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5702));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5703 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5703));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 2581
panda$collections$Array* $tmp5704 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp5705 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp5704, ((panda$core$Object*) $tmp5705));
org$pandalanguage$pandac$ASTNode* $tmp5706 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5706));
// unreffing member
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block21;
block23:;
// line 2583
org$pandalanguage$pandac$ASTNode* $tmp5707 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5708 = (panda$core$Int64) {11};
org$pandalanguage$pandac$parser$Token$nullable $tmp5709 = *(&local0);
org$pandalanguage$pandac$Position $tmp5710 = ((org$pandalanguage$pandac$parser$Token) $tmp5709.value).position;
panda$core$Int64 $tmp5711 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5712 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5711);
org$pandalanguage$pandac$parser$Token$nullable $tmp5713 = *(&local1);
panda$core$String* $tmp5714 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5713.value));
panda$collections$ImmutableArray* $tmp5715 = *(&local2);
panda$collections$Array* $tmp5716 = *(&local3);
panda$collections$ImmutableArray* $tmp5717 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5716);
panda$collections$Array* $tmp5718 = *(&local5);
panda$collections$ImmutableArray* $tmp5719 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5718);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5707, $tmp5708, $tmp5710, param1, param2, $tmp5712, $tmp5714, $tmp5715, $tmp5717, $tmp5719);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5707));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5707));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5714));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5717));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5719));
panda$collections$Array* $tmp5720 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5720));
// unreffing members
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5721 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5721));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp5722 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5722));
// unreffing generics
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp5707;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 2591
org$pandalanguage$pandac$parser$Token $tmp5723 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5724 = $tmp5723.kind;
panda$core$Int64 $tmp5725 = $tmp5724.$rawValue;
panda$core$Int64 $tmp5726 = (panda$core$Int64) {16};
panda$core$Bit $tmp5727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5725, $tmp5726);
bool $tmp5728 = $tmp5727.value;
if ($tmp5728) goto block2; else goto block3;
block2:;
// line 2593
org$pandalanguage$pandac$ASTNode* $tmp5729 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5729));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5729));
return $tmp5729;
block3:;
// line 2595
org$pandalanguage$pandac$ASTNode* $tmp5730 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5730));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5730));
return $tmp5730;
block1:;
panda$core$Bit $tmp5731 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5732 = $tmp5731.value;
if ($tmp5732) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp5733 = (panda$core$Int64) {2590};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5734, $tmp5733, &$s5735);
abort(); // unreachable
block4:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2603
panda$collections$Array* $tmp5736 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5736);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5737 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5737));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5736));
*(&local0) = $tmp5736;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5736));
// line 2604
org$pandalanguage$pandac$parser$Token $tmp5738 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5739 = $tmp5738.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5740;
$tmp5740 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5740->value = $tmp5739;
panda$core$Int64 $tmp5741 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$Kind $tmp5742 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5741);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5743;
$tmp5743 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5743->value = $tmp5742;
ITable* $tmp5744 = ((panda$core$Equatable*) $tmp5740)->$class->itable;
while ($tmp5744->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5744 = $tmp5744->next;
}
$fn5746 $tmp5745 = $tmp5744->methods[0];
panda$core$Bit $tmp5747 = $tmp5745(((panda$core$Equatable*) $tmp5740), ((panda$core$Equatable*) $tmp5743));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5740)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5743)));
bool $tmp5748 = $tmp5747.value;
if ($tmp5748) goto block1; else goto block2;
block1:;
// line 2605
org$pandalanguage$pandac$ASTNode* $tmp5749 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5750 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5750));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5749));
*(&local1) = $tmp5749;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5749));
// line 2606
org$pandalanguage$pandac$ASTNode* $tmp5751 = *(&local1);
panda$core$Bit $tmp5752 = panda$core$Bit$init$builtin_bit($tmp5751 != NULL);
bool $tmp5753 = $tmp5752.value;
if ($tmp5753) goto block3; else goto block4;
block3:;
// line 2607
panda$collections$Array* $tmp5754 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp5755 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp5754, ((panda$core$Object*) $tmp5755));
goto block4;
block4:;
org$pandalanguage$pandac$ASTNode* $tmp5756 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5756));
// unreffing decl
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block2;
block2:;
// line 2610
goto block5;
block5:;
org$pandalanguage$pandac$parser$Token $tmp5757 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5758 = $tmp5757.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5759;
$tmp5759 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5759->value = $tmp5758;
panda$core$Int64 $tmp5760 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp5761 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5760);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5762;
$tmp5762 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5762->value = $tmp5761;
ITable* $tmp5763 = ((panda$core$Equatable*) $tmp5759)->$class->itable;
while ($tmp5763->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5763 = $tmp5763->next;
}
$fn5765 $tmp5764 = $tmp5763->methods[1];
panda$core$Bit $tmp5766 = $tmp5764(((panda$core$Equatable*) $tmp5759), ((panda$core$Equatable*) $tmp5762));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5759)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5762)));
bool $tmp5767 = $tmp5766.value;
if ($tmp5767) goto block6; else goto block7;
block6:;
// line 2611
org$pandalanguage$pandac$ASTNode* $tmp5768 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5769 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5769));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5768));
*(&local2) = $tmp5768;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5768));
// line 2612
org$pandalanguage$pandac$ASTNode* $tmp5770 = *(&local2);
panda$core$Bit $tmp5771 = panda$core$Bit$init$builtin_bit($tmp5770 == NULL);
bool $tmp5772 = $tmp5771.value;
if ($tmp5772) goto block8; else goto block9;
block8:;
// line 2613
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5773 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5773));
// unreffing entry
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5774 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5774));
// unreffing entries
*(&local0) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 2615
panda$core$Bit* $tmp5775 = &param0->inSpeculative;
panda$core$Bit $tmp5776 = *$tmp5775;
panda$core$Bit $tmp5777 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5776);
bool $tmp5778 = $tmp5777.value;
if ($tmp5778) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp5779 = (panda$core$Int64) {2615};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5780, $tmp5779);
abort(); // unreachable
block10:;
// line 2616
panda$collections$Array* $tmp5781 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp5782 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5781, ((panda$core$Object*) $tmp5782));
org$pandalanguage$pandac$ASTNode* $tmp5783 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5783));
// unreffing entry
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block7:;
// line 2618
org$pandalanguage$pandac$ASTNode* $tmp5784 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5785 = (panda$core$Int64) {17};
panda$collections$Array* $tmp5786 = *(&local0);
panda$collections$ImmutableArray* $tmp5787 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp5786);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5784, $tmp5785, $tmp5787);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5784));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5784));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5787));
panda$collections$Array* $tmp5788 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5788));
// unreffing entries
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp5784;

}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Lexer** $tmp5789 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp5790 = *$tmp5789;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5790));
org$pandalanguage$regex$RegexParser** $tmp5791 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp5792 = *$tmp5791;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5792));
panda$threads$MessageQueue** $tmp5793 = &param0->errors;
panda$threads$MessageQueue* $tmp5794 = *$tmp5793;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5794));
panda$io$File** $tmp5795 = &param0->path;
panda$io$File* $tmp5796 = *$tmp5795;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5796));
panda$core$String** $tmp5797 = &param0->source;
panda$core$String* $tmp5798 = *$tmp5797;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5798));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp5799 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5800 = *$tmp5799;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5800));
panda$collections$Stack** $tmp5801 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp5802 = *$tmp5801;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5802));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp5803 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5804 = *$tmp5803;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5804));
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp5805 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp5806 = *$tmp5805;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5806));
return;

}

